/*
** Automatically generated from `oisu_check.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module check_hlds.oisu_check. */
/* :- implementation. */

/*
INIT mercury__check_hlds__oisu_check__init
ENDINIT
*/

#include "check_hlds.oisu_check.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 135 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0;

#line 138 "check_hlds.oisu_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0;

#line 141 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0;

#line 144 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 147 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 150 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 153 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 156 "check_hlds.oisu_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__oisu_check__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0;

#line 159 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0;

#line 162 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1;

#line 165 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2;

#line 168 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDescPtr check_hlds__oisu_check__check_hlds__oisu_check__enum_value_ordered_oisu_pred_kind_0[3];

#line 171 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDescPtr check_hlds__oisu_check__check_hlds__oisu_check__enum_name_ordered_oisu_pred_kind_0[3];

#line 174 "check_hlds.oisu_check.c"
static const MR_Integer check_hlds__oisu_check__check_hlds__oisu_check__functor_number_map_oisu_pred_kind_0[3];

#line 177 "check_hlds.oisu_check.c"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0_10001(
#line 180 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 182 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2);

#line 185 "check_hlds.oisu_check.c"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0_10001(
#line 188 "check_hlds.oisu_check.c"
  MR_Box * check_hlds__oisu_check__wrapper_arg_1,
#line 190 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 192 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_3);

#line 195 "check_hlds.oisu_check.c"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0_10001(
#line 198 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 200 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2);

#line 203 "check_hlds.oisu_check.c"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0_10001(
#line 206 "check_hlds.oisu_check.c"
  MR_Box * check_hlds__oisu_check__wrapper_arg_1,
#line 208 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 210 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_3);

#line 80 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0(
#line 80 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__HeadVar__1_1,
#line 80 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
#line 80 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__3_3);

#line 80 "oisu_check.m"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0(
#line 80 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_1,
#line 80 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2);

#line 85 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0(
#line 85 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__HeadVar__1_1,
#line 85 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
#line 85 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__3_3);

#line 85 "oisu_check.m"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0(
#line 85 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 85 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2);

#line 418 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_args_have_no_oisu_types_5_p_0(
#line 418 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 418 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
#line 418 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__3_3,
#line 418 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4,
#line 418 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_5);

#line 392 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(
#line 392 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadKindFor_4,
#line 392 "oisu_check.m"
  MR_Word check_hlds__oisu_check__TailKindFors_5,
#line 392 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Pieces_6);

#line 374 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(
#line 374 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 374 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HandledOISUTypeCtors_2,
#line 374 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__HeadVar__3_3);

#line 353 "oisu_check.m"
static MR_bool MR_CALL 
check_hlds__oisu_check__find_kind_for_oisu_type_3_p_0(
#line 353 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 353 "oisu_check.m"
  MR_Word check_hlds__oisu_check__TypeCtor_6,
#line 353 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Kind_7);

#line 181 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_arg_oisu_types_9_p_0(
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__PredInfo_2,
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__KindFors_3,
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__4_4,
#line 181 "oisu_check.m"
  MR_Integer check_hlds__oisu_check__HeadVar__5_5,
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6,
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__7_7,
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8,
#line 181 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_9);

#line 111 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_local_oisu_pred_9_p_0(
#line 111 "oisu_check.m"
  MR_Word check_hlds__oisu_check__ModuleInfo_10,
#line 111 "oisu_check.m"
  MR_Word check_hlds__oisu_check__KindMap_11,
#line 111 "oisu_check.m"
  MR_Word check_hlds__oisu_check__OISUTypeCtors_12,
#line 111 "oisu_check.m"
  MR_Word check_hlds__oisu_check__Pair0_13,
#line 111 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Pair_14,
#line 111 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_45,
#line 111 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_46,
#line 111 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_47,
#line 111 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_48);

#line 87 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(
#line 87 "oisu_check.m"
  MR_Word check_hlds__oisu_check__TypeCtor_6,
#line 87 "oisu_check.m"
  MR_Word check_hlds__oisu_check__Kind_7,
#line 87 "oisu_check.m"
  MR_Word check_hlds__oisu_check__PredId_8,
#line 87 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13,
#line 87 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_KindMap_14);

#line 77 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_3(
#line 77 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 77 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 77 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 77 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3);

#line 75 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_2(
#line 75 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 75 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 75 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 75 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3);

#line 73 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_1(
#line 73 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 73 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 73 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 73 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3);

#line 68 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0(
#line 68 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 68 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_10,
#line 68 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_KindMap_11);

#line 60 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_2(
#line 60 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 60 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 60 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_2,
#line 60 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_3,
#line 60 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_4,
#line 60 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_5,
#line 60 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_6);

#line 55 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_1(
#line 55 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 55 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 55 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 55 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__oisu_check_scalar_common_1[60][2];

static /* final */ const MR_Box check_hlds__oisu_check_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__oisu_check_scalar_common_3[1][6];

static /* final */ const MR_Box check_hlds__oisu_check_scalar_common_4[1][12];

static /* final */ const MR_Box check_hlds__oisu_check_scalar_common_5[1][8];




static /* final */ const MR_Box check_hlds__oisu_check_scalar_common_1[60][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "so it should have exactly one procedure."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration,"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in a"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is mentioned"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the following OISU types, but it does not:"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is declared to handle"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "handles a previous handled OISU type."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but its mode is not output."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "should be a creator of its OISU type,"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but its mode is not input."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "should be a destructor of its OISU type,"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of its OISU type,"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[27])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "should be the input of the mutator"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[23])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "should be the output of the mutator"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "another argument of the same type."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "it should be followed by"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is a mutator of its OISU type,"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but it is not listed in that type\'s OISU pragma."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is an OISU type"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Since the"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not mentioned"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "as a predicate that handles values of the type"))
  },
};

static /* final */ const MR_Box check_hlds__oisu_check_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__oisu_check_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__oisu_check_scalar_common_3[0])),
    ((MR_Box) (check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__oisu_check_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__oisu_check__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0)),
    ((MR_Box) (&check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0)),
    ((MR_Box) (&check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0))
  },
};

static /* final */ const MR_Box check_hlds__oisu_check_scalar_common_4[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0)),
    ((MR_Box) (&check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__oisu_check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__oisu_check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__oisu_check__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&check_hlds__oisu_check__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__oisu_check_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__oisu_check__check_hlds__oisu_check__type_ctor_info_oisu_pred_kind_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0)),
    ((MR_Box) (&check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 832 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0
  }
};

#line 841 "check_hlds.oisu_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

#line 849 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

#line 858 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 866 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 875 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 883 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 891 "check_hlds.oisu_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__oisu_check__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

#line 900 "check_hlds.oisu_check.c"
const MR_TypeCtorInfo_Struct check_hlds__oisu_check__check_hlds__oisu_check__type_ctor_info_oisu_kind_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__oisu_check____Unify____oisu_kind_map_0_0_10001)),
  ((MR_Box) (check_hlds__oisu_check____Compare____oisu_kind_map_0_0_10001)),
  (MR_String) "check_hlds.oisu_check",
  (MR_String) "oisu_kind_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__oisu_check__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 921 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0 = {
  (MR_String) "oisu_creator",
  (MR_Integer) 0
};

#line 927 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1 = {
  (MR_String) "oisu_mutator",
  (MR_Integer) 1
};

#line 933 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2 = {
  (MR_String) "oisu_destructor",
  (MR_Integer) 2
};

#line 939 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDescPtr check_hlds__oisu_check__check_hlds__oisu_check__enum_value_ordered_oisu_pred_kind_0[3] = {
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0,
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1,
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2
};

#line 946 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDescPtr check_hlds__oisu_check__check_hlds__oisu_check__enum_name_ordered_oisu_pred_kind_0[3] = {
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0,
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2,
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1
};

#line 953 "check_hlds.oisu_check.c"
static const MR_Integer check_hlds__oisu_check__check_hlds__oisu_check__functor_number_map_oisu_pred_kind_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 960 "check_hlds.oisu_check.c"
const MR_TypeCtorInfo_Struct check_hlds__oisu_check__check_hlds__oisu_check__type_ctor_info_oisu_pred_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__oisu_check____Unify____oisu_pred_kind_0_0_10001)),
  ((MR_Box) (check_hlds__oisu_check____Compare____oisu_pred_kind_0_0_10001)),
  (MR_String) "check_hlds.oisu_check",
  (MR_String) "oisu_pred_kind",
  {
    check_hlds__oisu_check__check_hlds__oisu_check__enum_name_ordered_oisu_pred_kind_0
  },
  {
    check_hlds__oisu_check__check_hlds__oisu_check__enum_value_ordered_oisu_pred_kind_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__oisu_check__check_hlds__oisu_check__functor_number_map_oisu_pred_kind_0
};

#line 981 "check_hlds.oisu_check.c"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0_10001(
#line 984 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 986 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2)
#line 988 "check_hlds.oisu_check.c"
{
#line 990 "check_hlds.oisu_check.c"
  {
#line 992 "check_hlds.oisu_check.c"
    MR_bool check_hlds__oisu_check__succeeded;

#line 995 "check_hlds.oisu_check.c"
    {
#line 997 "check_hlds.oisu_check.c"
      check_hlds__oisu_check__succeeded = check_hlds__oisu_check____Unify____oisu_kind_map_0_0(((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2));
    }
#line 1000 "check_hlds.oisu_check.c"
    return check_hlds__oisu_check__succeeded;
#line 1002 "check_hlds.oisu_check.c"
  }
#line 1004 "check_hlds.oisu_check.c"
}

#line 1007 "check_hlds.oisu_check.c"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0_10001(
#line 1010 "check_hlds.oisu_check.c"
  MR_Box * check_hlds__oisu_check__wrapper_arg_1,
#line 1012 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 1014 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_3)
#line 1016 "check_hlds.oisu_check.c"
{
#line 1018 "check_hlds.oisu_check.c"
  {
#line 1020 "check_hlds.oisu_check.c"
    MR_Word check_hlds__oisu_check__conv0_HeadVar__1_1;

#line 1023 "check_hlds.oisu_check.c"
    {
#line 1025 "check_hlds.oisu_check.c"
      check_hlds__oisu_check____Compare____oisu_kind_map_0_0(&check_hlds__oisu_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), ((MR_Word) check_hlds__oisu_check__wrapper_arg_3));
    }
#line 1028 "check_hlds.oisu_check.c"
    *check_hlds__oisu_check__wrapper_arg_1 = ((MR_Box) (check_hlds__oisu_check__conv0_HeadVar__1_1));
#line 1030 "check_hlds.oisu_check.c"
  }
#line 1032 "check_hlds.oisu_check.c"
}

#line 1035 "check_hlds.oisu_check.c"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0_10001(
#line 1038 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 1040 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2)
#line 1042 "check_hlds.oisu_check.c"
{
#line 1044 "check_hlds.oisu_check.c"
  {
#line 1046 "check_hlds.oisu_check.c"
    MR_bool check_hlds__oisu_check__succeeded;

#line 1049 "check_hlds.oisu_check.c"
    {
#line 1051 "check_hlds.oisu_check.c"
      check_hlds__oisu_check__succeeded = check_hlds__oisu_check____Unify____oisu_pred_kind_0_0(((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2));
    }
#line 1054 "check_hlds.oisu_check.c"
    return check_hlds__oisu_check__succeeded;
#line 1056 "check_hlds.oisu_check.c"
  }
#line 1058 "check_hlds.oisu_check.c"
}

#line 1061 "check_hlds.oisu_check.c"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0_10001(
#line 1064 "check_hlds.oisu_check.c"
  MR_Box * check_hlds__oisu_check__wrapper_arg_1,
#line 1066 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 1068 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_3)
#line 1070 "check_hlds.oisu_check.c"
{
#line 1072 "check_hlds.oisu_check.c"
  {
#line 1074 "check_hlds.oisu_check.c"
    MR_Word check_hlds__oisu_check__conv0_HeadVar__1_1;

#line 1077 "check_hlds.oisu_check.c"
    {
#line 1079 "check_hlds.oisu_check.c"
      check_hlds__oisu_check____Compare____oisu_pred_kind_0_0(&check_hlds__oisu_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), ((MR_Word) check_hlds__oisu_check__wrapper_arg_3));
    }
#line 1082 "check_hlds.oisu_check.c"
    *check_hlds__oisu_check__wrapper_arg_1 = ((MR_Box) (check_hlds__oisu_check__conv0_HeadVar__1_1));
#line 1084 "check_hlds.oisu_check.c"
  }
#line 1086 "check_hlds.oisu_check.c"
}

#line 80 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0(
#line 80 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__HeadVar__1_1,
#line 80 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
#line 80 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__3_3)
#line 80 "oisu_check.m"
{
#line 80 "oisu_check.m"
  {
#line 80 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 80 "oisu_check.m"
    MR_Integer check_hlds__oisu_check__Cast_HeadVar1_4 = (MR_Integer) check_hlds__oisu_check__HeadVar__2_2;
#line 80 "oisu_check.m"
    MR_Integer check_hlds__oisu_check__Cast_HeadVar2_5 = (MR_Integer) check_hlds__oisu_check__HeadVar__3_3;

#line 80 "oisu_check.m"
    {
#line 80 "oisu_check.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__Cast_HeadVar1_4, check_hlds__oisu_check__Cast_HeadVar2_5);
#line 80 "oisu_check.m"
      return;
    }
#line 80 "oisu_check.m"
  }
#line 80 "oisu_check.m"
}

#line 80 "oisu_check.m"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0(
#line 80 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_1,
#line 80 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2)
#line 80 "oisu_check.m"
{
#line 1130 "check_hlds.oisu_check.c"
  {
#line 1132 "check_hlds.oisu_check.c"
    MR_bool check_hlds__oisu_check__succeeded = (check_hlds__oisu_check__HeadVar__2_1 == check_hlds__oisu_check__HeadVar__2_2);

#line 1135 "check_hlds.oisu_check.c"
    return check_hlds__oisu_check__succeeded;
#line 1137 "check_hlds.oisu_check.c"
  }
#line 80 "oisu_check.m"
}

#line 85 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0(
#line 85 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__HeadVar__1_1,
#line 85 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
#line 85 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__3_3)
#line 85 "oisu_check.m"
{
#line 85 "oisu_check.m"
  {
#line 85 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 85 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Cast_HeadVar1_4 = check_hlds__oisu_check__HeadVar__2_2;
#line 85 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Cast_HeadVar2_5 = check_hlds__oisu_check__HeadVar__3_3;

#line 85 "oisu_check.m"
    {
#line 85 "oisu_check.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__oisu_check_scalar_common_2[1], check_hlds__oisu_check__HeadVar__1_1, ((MR_Box) (check_hlds__oisu_check__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__oisu_check__Cast_HeadVar2_5)));
#line 85 "oisu_check.m"
      return;
    }
#line 85 "oisu_check.m"
  }
#line 85 "oisu_check.m"
}

#line 85 "oisu_check.m"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0(
#line 85 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 85 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2)
#line 85 "oisu_check.m"
{
#line 85 "oisu_check.m"
  {
#line 85 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 85 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Cast_HeadVar1_3 = check_hlds__oisu_check__HeadVar__1_1;
#line 85 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Cast_HeadVar2_4 = check_hlds__oisu_check__HeadVar__2_2;

#line 85 "oisu_check.m"
    {
#line 85 "oisu_check.m"
      return check_hlds__oisu_check__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__oisu_check_scalar_common_2[1], ((MR_Box) (check_hlds__oisu_check__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__oisu_check__Cast_HeadVar2_4)));
    }
#line 85 "oisu_check.m"
    return check_hlds__oisu_check__succeeded;
#line 85 "oisu_check.m"
  }
#line 85 "oisu_check.m"
}

#line 418 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_args_have_no_oisu_types_5_p_0(
#line 418 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 418 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
#line 418 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__3_3,
#line 418 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4,
#line 418 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_5)
#line 418 "oisu_check.m"
{
#line 421 "oisu_check.m"
  while (MR_TRUE)
#line 421 "oisu_check.m"
    {
#line 421 "oisu_check.m"
      /* tailcall optimized into a loop */
#line 421 "oisu_check.m"
      {
#line 421 "oisu_check.m"
        MR_bool check_hlds__oisu_check__succeeded;

#line 421 "oisu_check.m"
        if ((check_hlds__oisu_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "oisu_check.m"
          *check_hlds__oisu_check__STATE_VARIABLE_Specs_5 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4;
#line 421 "oisu_check.m"
        else
#line 423 "oisu_check.m"
          {
#line 423 "oisu_check.m"
            MR_Word check_hlds__oisu_check__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__3_3, (MR_Integer) 0)));
#line 423 "oisu_check.m"
            MR_Word check_hlds__oisu_check__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__3_3, (MR_Integer) 1)));
#line 423 "oisu_check.m"
            MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_56_56;
#line 441 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypeCtor_16;
#line 425 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypeCtorInfo_58_58;
#line 425 "oisu_check.m"
            MR_Word check_hlds__oisu_check__ArgTypes_17;

#line 425 "oisu_check.m"
            {
#line 425 "oisu_check.m"
              check_hlds__oisu_check__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__oisu_check__Type_13, &check_hlds__oisu_check__TypeCtor_16, &check_hlds__oisu_check__ArgTypes_17);
            }
#line 425 "oisu_check.m"
            if (check_hlds__oisu_check__succeeded)
#line 425 "oisu_check.m"
              {
#line 426 "oisu_check.m"
                check_hlds__oisu_check__succeeded = (check_hlds__oisu_check__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 425 "oisu_check.m"
                if (check_hlds__oisu_check__succeeded)
#line 425 "oisu_check.m"
                  {
#line 1266 "check_hlds.oisu_check.c"
                    check_hlds__oisu_check__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 427 "oisu_check.m"
                    {
#line 427 "oisu_check.m"
                      check_hlds__oisu_check__succeeded = mercury__list__member_2_p_0(check_hlds__oisu_check__TypeCtorInfo_58_58, ((MR_Box) (check_hlds__oisu_check__TypeCtor_16)), check_hlds__oisu_check__HeadVar__2_2);
                    }
#line 425 "oisu_check.m"
                  }
#line 425 "oisu_check.m"
              }
#line 441 "oisu_check.m"
            if (check_hlds__oisu_check__succeeded)
#line 430 "oisu_check.m"
              {
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__PredDesc_18;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__TypeName_19;
#line 430 "oisu_check.m"
                MR_Integer check_hlds__oisu_check__TypeArity_20;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__ProcsPieces_21;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__Context_22;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__ProcsMsg_23;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__ProcsSpec_24;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_28_28;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_31_31;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_34_34;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_37_37;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_40_40;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_43_43;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_44_44;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_45_45;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_49_49;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_50_50;
#line 430 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_54_54;

#line 429 "oisu_check.m"
                {
#line 429 "oisu_check.m"
                  check_hlds__oisu_check__PredDesc_18 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__HeadVar__1_1);
                }
#line 431 "oisu_check.m"
                check_hlds__oisu_check__TypeName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__TypeCtor_16, (MR_Integer) 0)));
#line 431 "oisu_check.m"
                check_hlds__oisu_check__TypeArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__TypeCtor_16, (MR_Integer) 1)));
#line 435 "oisu_check.m"
                {
#line 435 "oisu_check.m"
                  check_hlds__oisu_check__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 435 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_45_45, 0) = ((MR_Box) (check_hlds__oisu_check__TypeName_19));
#line 435 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_45_45, 1) = ((MR_Box) (check_hlds__oisu_check__TypeArity_20));
#line 435 "oisu_check.m"
                }
#line 435 "oisu_check.m"
                {
#line 435 "oisu_check.m"
                  check_hlds__oisu_check__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "oisu_check.m"
                  MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 435 "oisu_check.m"
                  MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_44_44, 1) = ((MR_Box) (check_hlds__oisu_check__V_45_45));
#line 435 "oisu_check.m"
                }
#line 435 "oisu_check.m"
                {
#line 435 "oisu_check.m"
                  check_hlds__oisu_check__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_43_43, 0) = ((MR_Box) (check_hlds__oisu_check__V_44_44));
#line 435 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])));
#line 435 "oisu_check.m"
                }
#line 434 "oisu_check.m"
                {
#line 434 "oisu_check.m"
                  check_hlds__oisu_check__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[59])));
#line 434 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_40_40, 1) = ((MR_Box) (check_hlds__oisu_check__V_43_43));
#line 434 "oisu_check.m"
                }
#line 433 "oisu_check.m"
                {
#line 433 "oisu_check.m"
                  check_hlds__oisu_check__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[58])));
#line 433 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_37_37, 1) = ((MR_Box) (check_hlds__oisu_check__V_40_40));
#line 433 "oisu_check.m"
                }
#line 433 "oisu_check.m"
                {
#line 433 "oisu_check.m"
                  check_hlds__oisu_check__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[57])));
#line 433 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_34_34, 1) = ((MR_Box) (check_hlds__oisu_check__V_37_37));
#line 433 "oisu_check.m"
                }
#line 433 "oisu_check.m"
                {
#line 433 "oisu_check.m"
                  check_hlds__oisu_check__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[56])));
#line 433 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_31_31, 1) = ((MR_Box) (check_hlds__oisu_check__V_34_34));
#line 433 "oisu_check.m"
                }
#line 432 "oisu_check.m"
                {
#line 432 "oisu_check.m"
                  check_hlds__oisu_check__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[55])));
#line 432 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_28_28, 1) = ((MR_Box) (check_hlds__oisu_check__V_31_31));
#line 432 "oisu_check.m"
                }
#line 432 "oisu_check.m"
                {
#line 432 "oisu_check.m"
                  check_hlds__oisu_check__ProcsPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__oisu_check__PredDesc_18, check_hlds__oisu_check__V_28_28);
                }
#line 436 "oisu_check.m"
                {
#line 436 "oisu_check.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__HeadVar__1_1, &check_hlds__oisu_check__Context_22);
                }
#line 437 "oisu_check.m"
                {
#line 437 "oisu_check.m"
                  check_hlds__oisu_check__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 437 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_50_50, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsPieces_21));
#line 437 "oisu_check.m"
                }
#line 437 "oisu_check.m"
                {
#line 437 "oisu_check.m"
                  check_hlds__oisu_check__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_49_49, 0) = ((MR_Box) (check_hlds__oisu_check__V_50_50));
#line 437 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "oisu_check.m"
                }
#line 437 "oisu_check.m"
                {
#line 437 "oisu_check.m"
                  check_hlds__oisu_check__ProcsMsg_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsMsg_23, 0) = ((MR_Box) (check_hlds__oisu_check__Context_22));
#line 437 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsMsg_23, 1) = ((MR_Box) (check_hlds__oisu_check__V_49_49));
#line 437 "oisu_check.m"
                }
#line 439 "oisu_check.m"
                {
#line 439 "oisu_check.m"
                  check_hlds__oisu_check__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_54_54, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsMsg_23));
#line 439 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "oisu_check.m"
                }
#line 438 "oisu_check.m"
                {
#line 438 "oisu_check.m"
                  check_hlds__oisu_check__ProcsSpec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 438 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 438 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_24, 2) = ((MR_Box) (check_hlds__oisu_check__V_54_54));
#line 438 "oisu_check.m"
                }
#line 440 "oisu_check.m"
                {
#line 440 "oisu_check.m"
                  check_hlds__oisu_check__STATE_VARIABLE_Specs_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_56_56, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsSpec_24));
#line 440 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_56_56, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4));
#line 440 "oisu_check.m"
                }
#line 430 "oisu_check.m"
              }
#line 441 "oisu_check.m"
            else
#line 440 "oisu_check.m"
              check_hlds__oisu_check__STATE_VARIABLE_Specs_56_56 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4;
#line 444 "oisu_check.m"
            /* direct tailcall eliminated */
#line 444 "oisu_check.m"
            {
#line 444 "oisu_check.m"
              MR_Word check_hlds__oisu_check__HeadVar__3__tmp_copy_3 = check_hlds__oisu_check__Types_14;
#line 444 "oisu_check.m"
              MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__oisu_check__STATE_VARIABLE_Specs_56_56;

#line 444 "oisu_check.m"
              check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 444 "oisu_check.m"
              check_hlds__oisu_check__HeadVar__3_3 = check_hlds__oisu_check__HeadVar__3__tmp_copy_3;
#line 444 "oisu_check.m"
            }
#line 444 "oisu_check.m"
            continue;
#line 423 "oisu_check.m"
          }
#line 421 "oisu_check.m"
      }
#line 421 "oisu_check.m"
      break;
#line 421 "oisu_check.m"
    }
#line 418 "oisu_check.m"
}

#line 392 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(
#line 392 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadKindFor_4,
#line 392 "oisu_check.m"
  MR_Word check_hlds__oisu_check__TailKindFors_5,
#line 392 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Pieces_6)
#line 392 "oisu_check.m"
{
#line 396 "oisu_check.m"
  {
#line 396 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 396 "oisu_check.m"
    MR_Word check_hlds__oisu_check__HeadTypeCtor_7;
#line 396 "oisu_check.m"
    MR_String check_hlds__oisu_check__HeadKind_8;
#line 396 "oisu_check.m"
    MR_Word check_hlds__oisu_check__HeadTypeSymName_9;
#line 396 "oisu_check.m"
    MR_Integer check_hlds__oisu_check__HeadTypeArity_10;
#line 396 "oisu_check.m"
    MR_Word check_hlds__oisu_check__HeadPieces0_11;
#line 396 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_16_16;
#line 396 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_17_17;
#line 396 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_18_18;
#line 396 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_19_19;
#line 396 "oisu_check.m"
    MR_String check_hlds__oisu_check__V_20_20;
#line 396 "oisu_check.m"
    MR_String check_hlds__oisu_check__V_22_22;

#line 398 "oisu_check.m"
    if (((MR_tag((MR_Word) check_hlds__oisu_check__HeadKindFor_4)) == (MR_mktag((MR_Integer) 0))))
#line 397 "oisu_check.m"
      {
#line 397 "oisu_check.m"
        check_hlds__oisu_check__HeadTypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadKindFor_4, (MR_Integer) 0)));
#line 397 "oisu_check.m"
        check_hlds__oisu_check__HeadKind_8 = (MR_String) "creator";
#line 397 "oisu_check.m"
      }
#line 398 "oisu_check.m"
    else
#line 398 "oisu_check.m"
      if (((MR_tag((MR_Word) check_hlds__oisu_check__HeadKindFor_4)) == (MR_mktag((MR_Integer) 2))))
#line 399 "oisu_check.m"
        {
#line 399 "oisu_check.m"
          check_hlds__oisu_check__HeadTypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__oisu_check__HeadKindFor_4, (MR_Integer) 0)));
#line 399 "oisu_check.m"
          check_hlds__oisu_check__HeadKind_8 = (MR_String) "destructor";
#line 399 "oisu_check.m"
        }
#line 398 "oisu_check.m"
      else
#line 398 "oisu_check.m"
        {
#line 398 "oisu_check.m"
          check_hlds__oisu_check__HeadTypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadKindFor_4, (MR_Integer) 0)));
#line 398 "oisu_check.m"
          check_hlds__oisu_check__HeadKind_8 = (MR_String) "mutator";
#line 398 "oisu_check.m"
        }
#line 401 "oisu_check.m"
    check_hlds__oisu_check__HeadTypeSymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadTypeCtor_7, (MR_Integer) 0)));
#line 401 "oisu_check.m"
    check_hlds__oisu_check__HeadTypeArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadTypeCtor_7, (MR_Integer) 1)));
#line 402 "oisu_check.m"
    {
#line 402 "oisu_check.m"
      check_hlds__oisu_check__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 402 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_17_17, 0) = ((MR_Box) (check_hlds__oisu_check__HeadTypeSymName_9));
#line 402 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_17_17, 1) = ((MR_Box) (check_hlds__oisu_check__HeadTypeArity_10));
#line 402 "oisu_check.m"
    }
#line 402 "oisu_check.m"
    {
#line 402 "oisu_check.m"
      check_hlds__oisu_check__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "oisu_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 402 "oisu_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_16_16, 1) = ((MR_Box) (check_hlds__oisu_check__V_17_17));
#line 402 "oisu_check.m"
    }
#line 403 "oisu_check.m"
    {
#line 403 "oisu_check.m"
      check_hlds__oisu_check__V_22_22 = mercury__string__f_43_43_2_f_0(check_hlds__oisu_check__HeadKind_8, (MR_String) ")");
    }
#line 403 "oisu_check.m"
    {
#line 403 "oisu_check.m"
      check_hlds__oisu_check__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "(as ", check_hlds__oisu_check__V_22_22);
    }
#line 403 "oisu_check.m"
    {
#line 403 "oisu_check.m"
      check_hlds__oisu_check__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "oisu_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_19_19, 0) = ((MR_Box) (check_hlds__oisu_check__V_20_20));
#line 403 "oisu_check.m"
    }
#line 403 "oisu_check.m"
    {
#line 403 "oisu_check.m"
      check_hlds__oisu_check__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "oisu_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_18_18, 0) = ((MR_Box) (check_hlds__oisu_check__V_19_19));
#line 403 "oisu_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "oisu_check.m"
    }
#line 402 "oisu_check.m"
    {
#line 402 "oisu_check.m"
      check_hlds__oisu_check__HeadPieces0_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "oisu_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadPieces0_11, 0) = ((MR_Box) (check_hlds__oisu_check__V_16_16));
#line 402 "oisu_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadPieces0_11, 1) = ((MR_Box) (check_hlds__oisu_check__V_18_18));
#line 402 "oisu_check.m"
    }
#line 408 "oisu_check.m"
    if ((check_hlds__oisu_check__TailKindFors_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "oisu_check.m"
      {
#line 406 "oisu_check.m"
        {
#line 406 "oisu_check.m"
          *check_hlds__oisu_check__Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__oisu_check__HeadPieces0_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[48]));
        }
#line 405 "oisu_check.m"
      }
#line 408 "oisu_check.m"
    else
#line 409 "oisu_check.m"
      {
#line 409 "oisu_check.m"
        MR_Word check_hlds__oisu_check__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 409 "oisu_check.m"
        MR_Word check_hlds__oisu_check__HeadTailKindFor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__TailKindFors_5, (MR_Integer) 0)));
#line 409 "oisu_check.m"
        MR_Word check_hlds__oisu_check__TailTailKindFors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__TailKindFors_5, (MR_Integer) 1)));
#line 409 "oisu_check.m"
        MR_Word check_hlds__oisu_check__TailPieces_15;
#line 409 "oisu_check.m"
        MR_Word check_hlds__oisu_check__HeadPieces_37;

#line 410 "oisu_check.m"
        {
#line 410 "oisu_check.m"
          check_hlds__oisu_check__HeadPieces_37 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_39_39, check_hlds__oisu_check__HeadPieces0_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[50]));
        }
#line 411 "oisu_check.m"
        {
#line 411 "oisu_check.m"
          check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(check_hlds__oisu_check__HeadTailKindFor_13, check_hlds__oisu_check__TailTailKindFors_14, &check_hlds__oisu_check__TailPieces_15);
        }
#line 413 "oisu_check.m"
        {
#line 413 "oisu_check.m"
          *check_hlds__oisu_check__Pieces_6 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_39_39, check_hlds__oisu_check__HeadPieces_37, check_hlds__oisu_check__TailPieces_15);
        }
#line 409 "oisu_check.m"
      }
#line 396 "oisu_check.m"
  }
#line 392 "oisu_check.m"
}

#line 374 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(
#line 374 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 374 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HandledOISUTypeCtors_2,
#line 374 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__HeadVar__3_3)
#line 374 "oisu_check.m"
{
#line 377 "oisu_check.m"
  {
#line 377 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;

#line 377 "oisu_check.m"
    if ((check_hlds__oisu_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "oisu_check.m"
      *check_hlds__oisu_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 377 "oisu_check.m"
    else
#line 379 "oisu_check.m"
      {
#line 379 "oisu_check.m"
        MR_Word check_hlds__oisu_check__KindFor_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 0)));
#line 379 "oisu_check.m"
        MR_Word check_hlds__oisu_check__KindFors_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 1)));
#line 379 "oisu_check.m"
        MR_Word check_hlds__oisu_check__UnhandledKindForsTail_9;
#line 379 "oisu_check.m"
        MR_Word check_hlds__oisu_check__TypeCtor_10;

#line 380 "oisu_check.m"
        {
#line 380 "oisu_check.m"
          check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(check_hlds__oisu_check__KindFors_6, check_hlds__oisu_check__HandledOISUTypeCtors_2, &check_hlds__oisu_check__UnhandledKindForsTail_9);
        }
#line 383 "oisu_check.m"
        if (((MR_tag((MR_Word) check_hlds__oisu_check__KindFor_5)) == (MR_mktag((MR_Integer) 0))))
#line 382 "oisu_check.m"
          check_hlds__oisu_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__KindFor_5, (MR_Integer) 0)));
#line 383 "oisu_check.m"
        else
#line 383 "oisu_check.m"
          if (((MR_tag((MR_Word) check_hlds__oisu_check__KindFor_5)) == (MR_mktag((MR_Integer) 2))))
#line 384 "oisu_check.m"
            check_hlds__oisu_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__oisu_check__KindFor_5, (MR_Integer) 0)));
#line 383 "oisu_check.m"
          else
#line 383 "oisu_check.m"
            check_hlds__oisu_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__KindFor_5, (MR_Integer) 0)));
#line 386 "oisu_check.m"
        {
#line 386 "oisu_check.m"
          check_hlds__oisu_check__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (check_hlds__oisu_check__TypeCtor_10)), check_hlds__oisu_check__HandledOISUTypeCtors_2);
        }
#line 388 "oisu_check.m"
        if (check_hlds__oisu_check__succeeded)
#line 387 "oisu_check.m"
          *check_hlds__oisu_check__HeadVar__3_3 = check_hlds__oisu_check__UnhandledKindForsTail_9;
#line 388 "oisu_check.m"
        else
#line 389 "oisu_check.m"
          {
#line 389 "oisu_check.m"
            MR_Word base;
#line 389 "oisu_check.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "oisu_check.m"
            *check_hlds__oisu_check__HeadVar__3_3 = base;
#line 389 "oisu_check.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__oisu_check__KindFor_5));
#line 389 "oisu_check.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__oisu_check__UnhandledKindForsTail_9));
#line 389 "oisu_check.m"
          }
#line 379 "oisu_check.m"
      }
#line 377 "oisu_check.m"
  }
#line 374 "oisu_check.m"
}

#line 353 "oisu_check.m"
static MR_bool MR_CALL 
check_hlds__oisu_check__find_kind_for_oisu_type_3_p_0(
#line 353 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 353 "oisu_check.m"
  MR_Word check_hlds__oisu_check__TypeCtor_6,
#line 353 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Kind_7)
#line 353 "oisu_check.m"
{
#line 356 "oisu_check.m"
  while (MR_TRUE)
#line 356 "oisu_check.m"
    {
#line 356 "oisu_check.m"
      /* tailcall optimized into a loop */
#line 356 "oisu_check.m"
      {
#line 356 "oisu_check.m"
        MR_bool check_hlds__oisu_check__succeeded = ((MR_tag((MR_Word) check_hlds__oisu_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 356 "oisu_check.m"
        MR_Word check_hlds__oisu_check__KindFor_4;
#line 356 "oisu_check.m"
        MR_Word check_hlds__oisu_check__KindFors_5;
#line 370 "oisu_check.m"
        MR_Word check_hlds__oisu_check__KindPrime_8;

#line 356 "oisu_check.m"
        if (check_hlds__oisu_check__succeeded)
#line 356 "oisu_check.m"
          {
#line 356 "oisu_check.m"
            check_hlds__oisu_check__KindFor_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 0)));
#line 356 "oisu_check.m"
            check_hlds__oisu_check__KindFors_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 1)));
#line 361 "oisu_check.m"
            if (((MR_tag((MR_Word) check_hlds__oisu_check__KindFor_4)) == (MR_mktag((MR_Integer) 0))))
#line 359 "oisu_check.m"
              {
#line 359 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__KindFor_4, (MR_Integer) 0)));

#line 359 "oisu_check.m"
                {
#line 359 "oisu_check.m"
                  check_hlds__oisu_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__oisu_check__TypeCtor_6, check_hlds__oisu_check__V_9_9);
                }
#line 359 "oisu_check.m"
                if (check_hlds__oisu_check__succeeded)
#line 359 "oisu_check.m"
                  {
#line 360 "oisu_check.m"
                    check_hlds__oisu_check__KindPrime_8 = (MR_Integer) 0;
#line 360 "oisu_check.m"
                    check_hlds__oisu_check__succeeded = MR_TRUE;
#line 359 "oisu_check.m"
                  }
#line 359 "oisu_check.m"
              }
#line 361 "oisu_check.m"
            else
#line 361 "oisu_check.m"
              if (((MR_tag((MR_Word) check_hlds__oisu_check__KindFor_4)) == (MR_mktag((MR_Integer) 2))))
#line 365 "oisu_check.m"
                {
#line 365 "oisu_check.m"
                  MR_Word check_hlds__oisu_check__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__oisu_check__KindFor_4, (MR_Integer) 0)));

#line 365 "oisu_check.m"
                  {
#line 365 "oisu_check.m"
                    check_hlds__oisu_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__oisu_check__TypeCtor_6, check_hlds__oisu_check__V_11_11);
                  }
#line 365 "oisu_check.m"
                  if (check_hlds__oisu_check__succeeded)
#line 365 "oisu_check.m"
                    {
#line 366 "oisu_check.m"
                      check_hlds__oisu_check__KindPrime_8 = (MR_Integer) 2;
#line 366 "oisu_check.m"
                      check_hlds__oisu_check__succeeded = MR_TRUE;
#line 365 "oisu_check.m"
                    }
#line 365 "oisu_check.m"
                }
#line 361 "oisu_check.m"
              else
#line 362 "oisu_check.m"
                {
#line 362 "oisu_check.m"
                  MR_Word check_hlds__oisu_check__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__KindFor_4, (MR_Integer) 0)));

#line 362 "oisu_check.m"
                  {
#line 362 "oisu_check.m"
                    check_hlds__oisu_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__oisu_check__TypeCtor_6, check_hlds__oisu_check__V_10_10);
                  }
#line 362 "oisu_check.m"
                  if (check_hlds__oisu_check__succeeded)
#line 362 "oisu_check.m"
                    {
#line 363 "oisu_check.m"
                      check_hlds__oisu_check__KindPrime_8 = (MR_Integer) 1;
#line 363 "oisu_check.m"
                      check_hlds__oisu_check__succeeded = MR_TRUE;
#line 362 "oisu_check.m"
                    }
#line 362 "oisu_check.m"
                }
#line 370 "oisu_check.m"
            if (check_hlds__oisu_check__succeeded)
#line 369 "oisu_check.m"
              {
#line 369 "oisu_check.m"
                *check_hlds__oisu_check__Kind_7 = check_hlds__oisu_check__KindPrime_8;
#line 369 "oisu_check.m"
                check_hlds__oisu_check__succeeded = MR_TRUE;
#line 369 "oisu_check.m"
              }
#line 370 "oisu_check.m"
            else
#line 371 "oisu_check.m"
              {
#line 371 "oisu_check.m"
                /* direct tailcall eliminated */
#line 371 "oisu_check.m"
                {
#line 371 "oisu_check.m"
                  MR_Word check_hlds__oisu_check__HeadVar__1__tmp_copy_1 = check_hlds__oisu_check__KindFors_5;

#line 371 "oisu_check.m"
                  check_hlds__oisu_check__HeadVar__1_1 = check_hlds__oisu_check__HeadVar__1__tmp_copy_1;
#line 371 "oisu_check.m"
                }
#line 371 "oisu_check.m"
                continue;
#line 371 "oisu_check.m"
              }
#line 356 "oisu_check.m"
          }
#line 356 "oisu_check.m"
        return check_hlds__oisu_check__succeeded;
#line 356 "oisu_check.m"
      }
#line 356 "oisu_check.m"
      break;
#line 356 "oisu_check.m"
    }
#line 353 "oisu_check.m"
}

#line 181 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_arg_oisu_types_9_p_0(
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__PredInfo_2,
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__KindFors_3,
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__4_4,
#line 181 "oisu_check.m"
  MR_Integer check_hlds__oisu_check__HeadVar__5_5,
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6,
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__7_7,
#line 181 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8,
#line 181 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_9)
#line 181 "oisu_check.m"
{
#line 187 "oisu_check.m"
  while (MR_TRUE)
#line 187 "oisu_check.m"
    {
#line 187 "oisu_check.m"
      /* tailcall optimized into a loop */
#line 187 "oisu_check.m"
      {
#line 187 "oisu_check.m"
        MR_bool check_hlds__oisu_check__succeeded;

#line 187 "oisu_check.m"
        if ((check_hlds__oisu_check__HeadVar__7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "oisu_check.m"
          {
#line 333 "oisu_check.m"
            MR_Word check_hlds__oisu_check__UnhandledKindFors_321;

#line 334 "oisu_check.m"
            {
#line 334 "oisu_check.m"
              check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(check_hlds__oisu_check__KindFors_3, check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6, &check_hlds__oisu_check__UnhandledKindFors_321);
            }
#line 338 "oisu_check.m"
            if ((check_hlds__oisu_check__UnhandledKindFors_321 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "oisu_check.m"
              *check_hlds__oisu_check__STATE_VARIABLE_Specs_9 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8;
#line 338 "oisu_check.m"
            else
#line 339 "oisu_check.m"
              {
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__TypeCtorInfo_362_362;
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__HeadUnhandledKindFor_322 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__UnhandledKindFors_321, (MR_Integer) 0)));
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__TailUnhandledKindFors_323 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__UnhandledKindFors_321, (MR_Integer) 1)));
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__UnhandledPieces_324;
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__PredDesc_325;
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__Pieces_326;
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__Context_327;
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__Msg_328;
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__Spec_329;
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_334_334;
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_345_345;
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_346_346;
#line 339 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_350_350;

#line 340 "oisu_check.m"
                {
#line 340 "oisu_check.m"
                  check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(check_hlds__oisu_check__HeadUnhandledKindFor_322, check_hlds__oisu_check__TailUnhandledKindFors_323, &check_hlds__oisu_check__UnhandledPieces_324);
                }
#line 342 "oisu_check.m"
                {
#line 342 "oisu_check.m"
                  check_hlds__oisu_check__PredDesc_325 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                }
#line 2018 "check_hlds.oisu_check.c"
                check_hlds__oisu_check__TypeCtorInfo_362_362 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 346 "oisu_check.m"
                {
#line 346 "oisu_check.m"
                  check_hlds__oisu_check__V_334_334 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_362_362, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[19]), check_hlds__oisu_check__UnhandledPieces_324);
                }
#line 344 "oisu_check.m"
                {
#line 344 "oisu_check.m"
                  check_hlds__oisu_check__Pieces_326 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_362_362, check_hlds__oisu_check__PredDesc_325, check_hlds__oisu_check__V_334_334);
                }
#line 347 "oisu_check.m"
                {
#line 347 "oisu_check.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_327);
                }
#line 348 "oisu_check.m"
                {
#line 348 "oisu_check.m"
                  check_hlds__oisu_check__V_346_346 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_346_346, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_326));
#line 348 "oisu_check.m"
                }
#line 348 "oisu_check.m"
                {
#line 348 "oisu_check.m"
                  check_hlds__oisu_check__V_345_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_345_345, 0) = ((MR_Box) (check_hlds__oisu_check__V_346_346));
#line 348 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_345_345, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 348 "oisu_check.m"
                }
#line 348 "oisu_check.m"
                {
#line 348 "oisu_check.m"
                  check_hlds__oisu_check__Msg_328 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_328, 0) = ((MR_Box) (check_hlds__oisu_check__Context_327));
#line 348 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_328, 1) = ((MR_Box) (check_hlds__oisu_check__V_345_345));
#line 348 "oisu_check.m"
                }
#line 349 "oisu_check.m"
                {
#line 349 "oisu_check.m"
                  check_hlds__oisu_check__V_350_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_350_350, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_328));
#line 349 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_350_350, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "oisu_check.m"
                }
#line 349 "oisu_check.m"
                {
#line 349 "oisu_check.m"
                  check_hlds__oisu_check__Spec_329 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 349 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_329, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_329, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 349 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_329, 2) = ((MR_Box) (check_hlds__oisu_check__V_350_350));
#line 349 "oisu_check.m"
                }
#line 350 "oisu_check.m"
                {
#line 350 "oisu_check.m"
                  MR_Word base;
#line 350 "oisu_check.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "oisu_check.m"
                  *check_hlds__oisu_check__STATE_VARIABLE_Specs_9 = base;
#line 350 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_329));
#line 350 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 350 "oisu_check.m"
                }
#line 339 "oisu_check.m"
              }
#line 333 "oisu_check.m"
          }
#line 187 "oisu_check.m"
        else
#line 187 "oisu_check.m"
          {
#line 187 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypeMode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__7_7, (MR_Integer) 0)));
#line 187 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypesModes_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__7_7, (MR_Integer) 1)));
#line 328 "oisu_check.m"
            MR_Word check_hlds__oisu_check__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__TypeMode_16, (MR_Integer) 0)));
#line 328 "oisu_check.m"
            MR_Word check_hlds__oisu_check__Mode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__TypeMode_16, (MR_Integer) 1)));
#line 328 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypeCtor_21;
#line 328 "oisu_check.m"
            MR_Word check_hlds__oisu_check__ArgTypes_22;
#line 189 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypeCtorInfo_353_353;

#line 190 "oisu_check.m"
            {
#line 190 "oisu_check.m"
              check_hlds__oisu_check__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__oisu_check__Type_19, &check_hlds__oisu_check__TypeCtor_21, &check_hlds__oisu_check__ArgTypes_22);
            }
#line 189 "oisu_check.m"
            if (check_hlds__oisu_check__succeeded)
#line 189 "oisu_check.m"
              {
#line 2131 "check_hlds.oisu_check.c"
                check_hlds__oisu_check__TypeCtorInfo_353_353 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 191 "oisu_check.m"
                {
#line 191 "oisu_check.m"
                  check_hlds__oisu_check__succeeded = mercury__list__member_2_p_0(check_hlds__oisu_check__TypeCtorInfo_353_353, ((MR_Box) (check_hlds__oisu_check__TypeCtor_21)), check_hlds__oisu_check__HeadVar__4_4);
                }
#line 189 "oisu_check.m"
              }
#line 328 "oisu_check.m"
            if (check_hlds__oisu_check__succeeded)
#line 198 "oisu_check.m"
              {
#line 315 "oisu_check.m"
                MR_Word check_hlds__oisu_check__ThisKind_25;

#line 195 "oisu_check.m"
                if ((check_hlds__oisu_check__ArgTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "oisu_check.m"
                  {
#line 194 "oisu_check.m"
                  }
#line 195 "oisu_check.m"
                else
#line 196 "oisu_check.m"
                  {
#line 197 "oisu_check.m"
                    {
#line 197 "oisu_check.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.oisu_check", (MR_String) "predicate \140check_hlds.oisu_check.check_arg_oisu_types\'/9", (MR_String) "ArgTypes != []");
#line 197 "oisu_check.m"
                      return;
                    }
#line 196 "oisu_check.m"
                  }
#line 199 "oisu_check.m"
                {
#line 199 "oisu_check.m"
                  check_hlds__oisu_check__succeeded = check_hlds__oisu_check__find_kind_for_oisu_type_3_p_0(check_hlds__oisu_check__KindFors_3, check_hlds__oisu_check__TypeCtor_21, &check_hlds__oisu_check__ThisKind_25);
                }
#line 315 "oisu_check.m"
                if (check_hlds__oisu_check__succeeded)
#line 312 "oisu_check.m"
                  {
#line 312 "oisu_check.m"
                    MR_Integer check_hlds__oisu_check__RestArgNum_31;
#line 312 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__RestTypesModes_32;
#line 312 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82;
#line 312 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84;

#line 200 "oisu_check.m"
                    {
#line 200 "oisu_check.m"
                      check_hlds__oisu_check__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (check_hlds__oisu_check__TypeCtor_21)), check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6);
                    }
#line 213 "oisu_check.m"
                    if (check_hlds__oisu_check__succeeded)
#line 202 "oisu_check.m"
                      {
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__TypeCtorInfo_355_355;
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__DupPredDesc_26;
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__DupPieces_27;
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__DupContext_28;
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__DupMsg_29;
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__DupSpec_30;
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_59_59;
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_62_62;
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_63_63;
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_68_68;
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_75_75;
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_76_76;
#line 202 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_80_80;

#line 201 "oisu_check.m"
                        {
#line 201 "oisu_check.m"
                          check_hlds__oisu_check__DupPredDesc_26 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                        }
#line 2225 "check_hlds.oisu_check.c"
                        check_hlds__oisu_check__TypeCtorInfo_355_355 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 203 "oisu_check.m"
                        {
#line 203 "oisu_check.m"
                          check_hlds__oisu_check__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "oisu_check.m"
                          MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 203 "oisu_check.m"
                          MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_63_63, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
#line 203 "oisu_check.m"
                        }
#line 203 "oisu_check.m"
                        {
#line 203 "oisu_check.m"
                          check_hlds__oisu_check__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_62_62, 0) = ((MR_Box) (check_hlds__oisu_check__V_63_63));
#line 203 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 203 "oisu_check.m"
                        }
#line 203 "oisu_check.m"
                        {
#line 203 "oisu_check.m"
                          check_hlds__oisu_check__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
#line 203 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_59_59, 1) = ((MR_Box) (check_hlds__oisu_check__V_62_62));
#line 203 "oisu_check.m"
                        }
#line 204 "oisu_check.m"
                        {
#line 204 "oisu_check.m"
                          check_hlds__oisu_check__V_68_68 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_355_355, check_hlds__oisu_check__DupPredDesc_26, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[21]));
                        }
#line 204 "oisu_check.m"
                        {
#line 204 "oisu_check.m"
                          check_hlds__oisu_check__DupPieces_27 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_355_355, check_hlds__oisu_check__V_59_59, check_hlds__oisu_check__V_68_68);
                        }
#line 206 "oisu_check.m"
                        {
#line 206 "oisu_check.m"
                          hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__DupContext_28);
                        }
#line 207 "oisu_check.m"
                        {
#line 207 "oisu_check.m"
                          check_hlds__oisu_check__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 207 "oisu_check.m"
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_76_76, 0) = ((MR_Box) (check_hlds__oisu_check__DupPieces_27));
#line 207 "oisu_check.m"
                        }
#line 207 "oisu_check.m"
                        {
#line 207 "oisu_check.m"
                          check_hlds__oisu_check__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_75_75, 0) = ((MR_Box) (check_hlds__oisu_check__V_76_76));
#line 207 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "oisu_check.m"
                        }
#line 207 "oisu_check.m"
                        {
#line 207 "oisu_check.m"
                          check_hlds__oisu_check__DupMsg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "oisu_check.m"
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupMsg_29, 0) = ((MR_Box) (check_hlds__oisu_check__DupContext_28));
#line 207 "oisu_check.m"
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupMsg_29, 1) = ((MR_Box) (check_hlds__oisu_check__V_75_75));
#line 207 "oisu_check.m"
                        }
#line 209 "oisu_check.m"
                        {
#line 209 "oisu_check.m"
                          check_hlds__oisu_check__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_80_80, 0) = ((MR_Box) (check_hlds__oisu_check__DupMsg_29));
#line 209 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 209 "oisu_check.m"
                        }
#line 208 "oisu_check.m"
                        {
#line 208 "oisu_check.m"
                          check_hlds__oisu_check__DupSpec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 208 "oisu_check.m"
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupSpec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "oisu_check.m"
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupSpec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 208 "oisu_check.m"
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupSpec_30, 2) = ((MR_Box) (check_hlds__oisu_check__V_80_80));
#line 208 "oisu_check.m"
                        }
#line 210 "oisu_check.m"
                        {
#line 210 "oisu_check.m"
                          check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__DupSpec_30));
#line 210 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 210 "oisu_check.m"
                        }
#line 211 "oisu_check.m"
                        check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
#line 212 "oisu_check.m"
                        check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TypesModes_17;
#line 212 "oisu_check.m"
                        check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84 = check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6;
#line 202 "oisu_check.m"
                      }
#line 213 "oisu_check.m"
                    else
#line 214 "oisu_check.m"
                      {
#line 214 "oisu_check.m"
                        {
#line 214 "oisu_check.m"
                          check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84, 0) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_21));
#line 214 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6));
#line 214 "oisu_check.m"
                        }
#line 234 "oisu_check.m"
                        if ((check_hlds__oisu_check__ThisKind_25 == (MR_Integer) 0))
#line 216 "oisu_check.m"
                          {
#line 217 "oisu_check.m"
                            {
#line 217 "oisu_check.m"
                              check_hlds__oisu_check__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__Mode_20);
                            }
#line 219 "oisu_check.m"
                            if (check_hlds__oisu_check__succeeded)
#line 217 "oisu_check.m"
                              check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8;
#line 219 "oisu_check.m"
                            else
#line 221 "oisu_check.m"
                              {
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__TypeCtorInfo_356_356;
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__PredDesc_33;
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__Pieces_34;
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__Context_35;
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__Msg_36;
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__Spec_37;
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__V_212_212;
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__V_215_215;
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__V_216_216;
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__V_221_221;
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__V_231_231;
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__V_232_232;
#line 221 "oisu_check.m"
                                MR_Word check_hlds__oisu_check__V_236_236;

#line 220 "oisu_check.m"
                                {
#line 220 "oisu_check.m"
                                  check_hlds__oisu_check__PredDesc_33 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                }
#line 2403 "check_hlds.oisu_check.c"
                                check_hlds__oisu_check__TypeCtorInfo_356_356 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 222 "oisu_check.m"
                                {
#line 222 "oisu_check.m"
                                  check_hlds__oisu_check__V_216_216 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "oisu_check.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_216_216, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 222 "oisu_check.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_216_216, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
#line 222 "oisu_check.m"
                                }
#line 222 "oisu_check.m"
                                {
#line 222 "oisu_check.m"
                                  check_hlds__oisu_check__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "oisu_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_215_215, 0) = ((MR_Box) (check_hlds__oisu_check__V_216_216));
#line 222 "oisu_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_215_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 222 "oisu_check.m"
                                }
#line 222 "oisu_check.m"
                                {
#line 222 "oisu_check.m"
                                  check_hlds__oisu_check__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "oisu_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_212_212, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
#line 222 "oisu_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_212_212, 1) = ((MR_Box) (check_hlds__oisu_check__V_215_215));
#line 222 "oisu_check.m"
                                }
#line 223 "oisu_check.m"
                                {
#line 223 "oisu_check.m"
                                  check_hlds__oisu_check__V_221_221 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_356_356, check_hlds__oisu_check__PredDesc_33, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[25]));
                                }
#line 223 "oisu_check.m"
                                {
#line 223 "oisu_check.m"
                                  check_hlds__oisu_check__Pieces_34 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_356_356, check_hlds__oisu_check__V_212_212, check_hlds__oisu_check__V_221_221);
                                }
#line 226 "oisu_check.m"
                                {
#line 226 "oisu_check.m"
                                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_35);
                                }
#line 227 "oisu_check.m"
                                {
#line 227 "oisu_check.m"
                                  check_hlds__oisu_check__V_232_232 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 227 "oisu_check.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_232_232, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_34));
#line 227 "oisu_check.m"
                                }
#line 227 "oisu_check.m"
                                {
#line 227 "oisu_check.m"
                                  check_hlds__oisu_check__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "oisu_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_231_231, 0) = ((MR_Box) (check_hlds__oisu_check__V_232_232));
#line 227 "oisu_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_231_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "oisu_check.m"
                                }
#line 227 "oisu_check.m"
                                {
#line 227 "oisu_check.m"
                                  check_hlds__oisu_check__Msg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "oisu_check.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_36, 0) = ((MR_Box) (check_hlds__oisu_check__Context_35));
#line 227 "oisu_check.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_36, 1) = ((MR_Box) (check_hlds__oisu_check__V_231_231));
#line 227 "oisu_check.m"
                                }
#line 229 "oisu_check.m"
                                {
#line 229 "oisu_check.m"
                                  check_hlds__oisu_check__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "oisu_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_236_236, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_36));
#line 229 "oisu_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_236_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "oisu_check.m"
                                }
#line 228 "oisu_check.m"
                                {
#line 228 "oisu_check.m"
                                  check_hlds__oisu_check__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 228 "oisu_check.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "oisu_check.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 228 "oisu_check.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_37, 2) = ((MR_Box) (check_hlds__oisu_check__V_236_236));
#line 228 "oisu_check.m"
                                }
#line 230 "oisu_check.m"
                                {
#line 230 "oisu_check.m"
                                  check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "oisu_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_37));
#line 230 "oisu_check.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 230 "oisu_check.m"
                                }
#line 221 "oisu_check.m"
                              }
#line 232 "oisu_check.m"
                            check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
#line 233 "oisu_check.m"
                            check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TypesModes_17;
#line 216 "oisu_check.m"
                          }
#line 234 "oisu_check.m"
                        else
#line 234 "oisu_check.m"
                          if ((check_hlds__oisu_check__ThisKind_25 == (MR_Integer) 2))
#line 293 "oisu_check.m"
                            {
#line 294 "oisu_check.m"
                              {
#line 294 "oisu_check.m"
                                check_hlds__oisu_check__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__Mode_20);
                              }
#line 296 "oisu_check.m"
                              if (check_hlds__oisu_check__succeeded)
#line 294 "oisu_check.m"
                                check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8;
#line 296 "oisu_check.m"
                              else
#line 298 "oisu_check.m"
                                {
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__TypeCtorInfo_360_360;
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_86_86;
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_89_89;
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_90_90;
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_95_95;
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_105_105;
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_106_106;
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_110_110;
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__PredDesc_290;
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Pieces_291;
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Context_292;
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Msg_293;
#line 298 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Spec_294;

#line 297 "oisu_check.m"
                                  {
#line 297 "oisu_check.m"
                                    check_hlds__oisu_check__PredDesc_290 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                  }
#line 2569 "check_hlds.oisu_check.c"
                                  check_hlds__oisu_check__TypeCtorInfo_360_360 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 299 "oisu_check.m"
                                  {
#line 299 "oisu_check.m"
                                    check_hlds__oisu_check__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "oisu_check.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 299 "oisu_check.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_90_90, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
#line 299 "oisu_check.m"
                                  }
#line 299 "oisu_check.m"
                                  {
#line 299 "oisu_check.m"
                                    check_hlds__oisu_check__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_89_89, 0) = ((MR_Box) (check_hlds__oisu_check__V_90_90));
#line 299 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 299 "oisu_check.m"
                                  }
#line 299 "oisu_check.m"
                                  {
#line 299 "oisu_check.m"
                                    check_hlds__oisu_check__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
#line 299 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_86_86, 1) = ((MR_Box) (check_hlds__oisu_check__V_89_89));
#line 299 "oisu_check.m"
                                  }
#line 300 "oisu_check.m"
                                  {
#line 300 "oisu_check.m"
                                    check_hlds__oisu_check__V_95_95 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_360_360, check_hlds__oisu_check__PredDesc_290, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[29]));
                                  }
#line 300 "oisu_check.m"
                                  {
#line 300 "oisu_check.m"
                                    check_hlds__oisu_check__Pieces_291 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_360_360, check_hlds__oisu_check__V_86_86, check_hlds__oisu_check__V_95_95);
                                  }
#line 303 "oisu_check.m"
                                  {
#line 303 "oisu_check.m"
                                    hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_292);
                                  }
#line 304 "oisu_check.m"
                                  {
#line 304 "oisu_check.m"
                                    check_hlds__oisu_check__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 304 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_106_106, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_291));
#line 304 "oisu_check.m"
                                  }
#line 304 "oisu_check.m"
                                  {
#line 304 "oisu_check.m"
                                    check_hlds__oisu_check__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_105_105, 0) = ((MR_Box) (check_hlds__oisu_check__V_106_106));
#line 304 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "oisu_check.m"
                                  }
#line 304 "oisu_check.m"
                                  {
#line 304 "oisu_check.m"
                                    check_hlds__oisu_check__Msg_293 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_293, 0) = ((MR_Box) (check_hlds__oisu_check__Context_292));
#line 304 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_293, 1) = ((MR_Box) (check_hlds__oisu_check__V_105_105));
#line 304 "oisu_check.m"
                                  }
#line 306 "oisu_check.m"
                                  {
#line 306 "oisu_check.m"
                                    check_hlds__oisu_check__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_110_110, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_293));
#line 306 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "oisu_check.m"
                                  }
#line 305 "oisu_check.m"
                                  {
#line 305 "oisu_check.m"
                                    check_hlds__oisu_check__Spec_294 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 305 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_294, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_294, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 305 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_294, 2) = ((MR_Box) (check_hlds__oisu_check__V_110_110));
#line 305 "oisu_check.m"
                                  }
#line 307 "oisu_check.m"
                                  {
#line 307 "oisu_check.m"
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_294));
#line 307 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 307 "oisu_check.m"
                                  }
#line 298 "oisu_check.m"
                                }
#line 309 "oisu_check.m"
                              check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
#line 310 "oisu_check.m"
                              check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TypesModes_17;
#line 293 "oisu_check.m"
                            }
#line 234 "oisu_check.m"
                          else
#line 276 "oisu_check.m"
                            {
#line 276 "oisu_check.m"
                              MR_Word check_hlds__oisu_check__TailTypesModes_39;
#line 276 "oisu_check.m"
                              MR_Word check_hlds__oisu_check__NextMode_41;
#line 237 "oisu_check.m"
                              MR_Word check_hlds__oisu_check__NextTypeMode_38;
#line 237 "oisu_check.m"
                              MR_Word check_hlds__oisu_check__NextType_40;

#line 237 "oisu_check.m"
                              check_hlds__oisu_check__succeeded = ((MR_tag((MR_Word) check_hlds__oisu_check__TypesModes_17)) == (MR_mktag((MR_Integer) 1)));
#line 237 "oisu_check.m"
                              if (check_hlds__oisu_check__succeeded)
#line 237 "oisu_check.m"
                                {
#line 237 "oisu_check.m"
                                  check_hlds__oisu_check__NextTypeMode_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__TypesModes_17, (MR_Integer) 0)));
#line 237 "oisu_check.m"
                                  check_hlds__oisu_check__TailTypesModes_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__TypesModes_17, (MR_Integer) 1)));
#line 238 "oisu_check.m"
                                  check_hlds__oisu_check__NextType_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__NextTypeMode_38, (MR_Integer) 0)));
#line 238 "oisu_check.m"
                                  check_hlds__oisu_check__NextMode_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__NextTypeMode_38, (MR_Integer) 1)));
#line 239 "oisu_check.m"
                                  {
#line 239 "oisu_check.m"
                                    check_hlds__oisu_check__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__oisu_check__NextType_40, check_hlds__oisu_check__Type_19);
                                  }
#line 237 "oisu_check.m"
                                }
#line 276 "oisu_check.m"
                              if (check_hlds__oisu_check__succeeded)
#line 256 "oisu_check.m"
                                {
#line 256 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144;

#line 241 "oisu_check.m"
                                  {
#line 241 "oisu_check.m"
                                    check_hlds__oisu_check__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__Mode_20);
                                  }
#line 243 "oisu_check.m"
                                  if (check_hlds__oisu_check__succeeded)
#line 241 "oisu_check.m"
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8;
#line 243 "oisu_check.m"
                                  else
#line 245 "oisu_check.m"
                                    {
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__TypeCtorInfo_357_357;
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__InPredDesc_42;
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__InPieces_43;
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__InContext_44;
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__InMsg_45;
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__InSpec_46;
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_115_115;
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_118_118;
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_119_119;
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_124_124;
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_137_137;
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_138_138;
#line 245 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_142_142;

#line 244 "oisu_check.m"
                                      {
#line 244 "oisu_check.m"
                                        check_hlds__oisu_check__InPredDesc_42 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                      }
#line 2770 "check_hlds.oisu_check.c"
                                      check_hlds__oisu_check__TypeCtorInfo_357_357 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 246 "oisu_check.m"
                                      {
#line 246 "oisu_check.m"
                                        check_hlds__oisu_check__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "oisu_check.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 246 "oisu_check.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_119_119, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
#line 246 "oisu_check.m"
                                      }
#line 246 "oisu_check.m"
                                      {
#line 246 "oisu_check.m"
                                        check_hlds__oisu_check__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_118_118, 0) = ((MR_Box) (check_hlds__oisu_check__V_119_119));
#line 246 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 246 "oisu_check.m"
                                      }
#line 246 "oisu_check.m"
                                      {
#line 246 "oisu_check.m"
                                        check_hlds__oisu_check__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_115_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
#line 246 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_115_115, 1) = ((MR_Box) (check_hlds__oisu_check__V_118_118));
#line 246 "oisu_check.m"
                                      }
#line 247 "oisu_check.m"
                                      {
#line 247 "oisu_check.m"
                                        check_hlds__oisu_check__V_124_124 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_357_357, check_hlds__oisu_check__InPredDesc_42, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[33]));
                                      }
#line 247 "oisu_check.m"
                                      {
#line 247 "oisu_check.m"
                                        check_hlds__oisu_check__InPieces_43 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_357_357, check_hlds__oisu_check__V_115_115, check_hlds__oisu_check__V_124_124);
                                      }
#line 251 "oisu_check.m"
                                      {
#line 251 "oisu_check.m"
                                        hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__InContext_44);
                                      }
#line 252 "oisu_check.m"
                                      {
#line 252 "oisu_check.m"
                                        check_hlds__oisu_check__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 252 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_138_138, 0) = ((MR_Box) (check_hlds__oisu_check__InPieces_43));
#line 252 "oisu_check.m"
                                      }
#line 252 "oisu_check.m"
                                      {
#line 252 "oisu_check.m"
                                        check_hlds__oisu_check__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_137_137, 0) = ((MR_Box) (check_hlds__oisu_check__V_138_138));
#line 252 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "oisu_check.m"
                                      }
#line 252 "oisu_check.m"
                                      {
#line 252 "oisu_check.m"
                                        check_hlds__oisu_check__InMsg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 252 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InMsg_45, 0) = ((MR_Box) (check_hlds__oisu_check__InContext_44));
#line 252 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InMsg_45, 1) = ((MR_Box) (check_hlds__oisu_check__V_137_137));
#line 252 "oisu_check.m"
                                      }
#line 254 "oisu_check.m"
                                      {
#line 254 "oisu_check.m"
                                        check_hlds__oisu_check__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_142_142, 0) = ((MR_Box) (check_hlds__oisu_check__InMsg_45));
#line 254 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "oisu_check.m"
                                      }
#line 253 "oisu_check.m"
                                      {
#line 253 "oisu_check.m"
                                        check_hlds__oisu_check__InSpec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 253 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InSpec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InSpec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 253 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InSpec_46, 2) = ((MR_Box) (check_hlds__oisu_check__V_142_142));
#line 253 "oisu_check.m"
                                      }
#line 255 "oisu_check.m"
                                      {
#line 255 "oisu_check.m"
                                        check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144, 0) = ((MR_Box) (check_hlds__oisu_check__InSpec_46));
#line 255 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 255 "oisu_check.m"
                                      }
#line 245 "oisu_check.m"
                                    }
#line 257 "oisu_check.m"
                                  {
#line 257 "oisu_check.m"
                                    check_hlds__oisu_check__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__NextMode_41);
                                  }
#line 259 "oisu_check.m"
                                  if (check_hlds__oisu_check__succeeded)
#line 257 "oisu_check.m"
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144;
#line 259 "oisu_check.m"
                                  else
#line 261 "oisu_check.m"
                                    {
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__TypeCtorInfo_358_358;
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__OutPredDesc_47;
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__OutPieces_48;
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__OutContext_49;
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__OutMsg_50;
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__OutSpec_51;
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_146_146;
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_149_149;
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_150_150;
#line 261 "oisu_check.m"
                                      MR_Integer check_hlds__oisu_check__V_151_151;
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_157_157;
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_170_170;
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_171_171;
#line 261 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_175_175;

#line 260 "oisu_check.m"
                                      {
#line 260 "oisu_check.m"
                                        check_hlds__oisu_check__OutPredDesc_47 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                      }
#line 2926 "check_hlds.oisu_check.c"
                                      check_hlds__oisu_check__TypeCtorInfo_358_358 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 262 "oisu_check.m"
                                      check_hlds__oisu_check__V_151_151 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
#line 262 "oisu_check.m"
                                      {
#line 262 "oisu_check.m"
                                        check_hlds__oisu_check__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "oisu_check.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 262 "oisu_check.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_150_150, 1) = ((MR_Box) (check_hlds__oisu_check__V_151_151));
#line 262 "oisu_check.m"
                                      }
#line 262 "oisu_check.m"
                                      {
#line 262 "oisu_check.m"
                                        check_hlds__oisu_check__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_149_149, 0) = ((MR_Box) (check_hlds__oisu_check__V_150_150));
#line 262 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_149_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 262 "oisu_check.m"
                                      }
#line 262 "oisu_check.m"
                                      {
#line 262 "oisu_check.m"
                                        check_hlds__oisu_check__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_146_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
#line 262 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_146_146, 1) = ((MR_Box) (check_hlds__oisu_check__V_149_149));
#line 262 "oisu_check.m"
                                      }
#line 263 "oisu_check.m"
                                      {
#line 263 "oisu_check.m"
                                        check_hlds__oisu_check__V_157_157 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_358_358, check_hlds__oisu_check__OutPredDesc_47, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[36]));
                                      }
#line 263 "oisu_check.m"
                                      {
#line 263 "oisu_check.m"
                                        check_hlds__oisu_check__OutPieces_48 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_358_358, check_hlds__oisu_check__V_146_146, check_hlds__oisu_check__V_157_157);
                                      }
#line 267 "oisu_check.m"
                                      {
#line 267 "oisu_check.m"
                                        hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__OutContext_49);
                                      }
#line 269 "oisu_check.m"
                                      {
#line 269 "oisu_check.m"
                                        check_hlds__oisu_check__V_171_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 269 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_171_171, 0) = ((MR_Box) (check_hlds__oisu_check__OutPieces_48));
#line 269 "oisu_check.m"
                                      }
#line 269 "oisu_check.m"
                                      {
#line 269 "oisu_check.m"
                                        check_hlds__oisu_check__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_170_170, 0) = ((MR_Box) (check_hlds__oisu_check__V_171_171));
#line 269 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "oisu_check.m"
                                      }
#line 268 "oisu_check.m"
                                      {
#line 268 "oisu_check.m"
                                        check_hlds__oisu_check__OutMsg_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutMsg_50, 0) = ((MR_Box) (check_hlds__oisu_check__OutContext_49));
#line 268 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutMsg_50, 1) = ((MR_Box) (check_hlds__oisu_check__V_170_170));
#line 268 "oisu_check.m"
                                      }
#line 271 "oisu_check.m"
                                      {
#line 271 "oisu_check.m"
                                        check_hlds__oisu_check__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_175_175, 0) = ((MR_Box) (check_hlds__oisu_check__OutMsg_50));
#line 271 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_175_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "oisu_check.m"
                                      }
#line 270 "oisu_check.m"
                                      {
#line 270 "oisu_check.m"
                                        check_hlds__oisu_check__OutSpec_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 270 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutSpec_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutSpec_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 270 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutSpec_51, 2) = ((MR_Box) (check_hlds__oisu_check__V_175_175));
#line 270 "oisu_check.m"
                                      }
#line 272 "oisu_check.m"
                                      {
#line 272 "oisu_check.m"
                                        check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__OutSpec_51));
#line 272 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144));
#line 272 "oisu_check.m"
                                      }
#line 261 "oisu_check.m"
                                    }
#line 274 "oisu_check.m"
                                  check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 2);
#line 275 "oisu_check.m"
                                  check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TailTypesModes_39;
#line 256 "oisu_check.m"
                                }
#line 276 "oisu_check.m"
                              else
#line 278 "oisu_check.m"
                                {
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__TypeCtorInfo_359_359;
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_180_180;
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_183_183;
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_184_184;
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_189_189;
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_202_202;
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_203_203;
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_207_207;
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__PredDesc_275;
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Pieces_276;
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Context_277;
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Msg_278;
#line 278 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Spec_279;

#line 277 "oisu_check.m"
                                  {
#line 277 "oisu_check.m"
                                    check_hlds__oisu_check__PredDesc_275 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                  }
#line 3079 "check_hlds.oisu_check.c"
                                  check_hlds__oisu_check__TypeCtorInfo_359_359 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 279 "oisu_check.m"
                                  {
#line 279 "oisu_check.m"
                                    check_hlds__oisu_check__V_184_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "oisu_check.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_184_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 279 "oisu_check.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_184_184, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
#line 279 "oisu_check.m"
                                  }
#line 279 "oisu_check.m"
                                  {
#line 279 "oisu_check.m"
                                    check_hlds__oisu_check__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_183_183, 0) = ((MR_Box) (check_hlds__oisu_check__V_184_184));
#line 279 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_183_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 279 "oisu_check.m"
                                  }
#line 279 "oisu_check.m"
                                  {
#line 279 "oisu_check.m"
                                    check_hlds__oisu_check__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_180_180, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[54])));
#line 279 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_180_180, 1) = ((MR_Box) (check_hlds__oisu_check__V_183_183));
#line 279 "oisu_check.m"
                                  }
#line 280 "oisu_check.m"
                                  {
#line 280 "oisu_check.m"
                                    check_hlds__oisu_check__V_189_189 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_359_359, check_hlds__oisu_check__PredDesc_275, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[42]));
                                  }
#line 280 "oisu_check.m"
                                  {
#line 280 "oisu_check.m"
                                    check_hlds__oisu_check__Pieces_276 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_359_359, check_hlds__oisu_check__V_180_180, check_hlds__oisu_check__V_189_189);
                                  }
#line 284 "oisu_check.m"
                                  {
#line 284 "oisu_check.m"
                                    hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_277);
                                  }
#line 285 "oisu_check.m"
                                  {
#line 285 "oisu_check.m"
                                    check_hlds__oisu_check__V_203_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 285 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_203_203, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_276));
#line 285 "oisu_check.m"
                                  }
#line 285 "oisu_check.m"
                                  {
#line 285 "oisu_check.m"
                                    check_hlds__oisu_check__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_202_202, 0) = ((MR_Box) (check_hlds__oisu_check__V_203_203));
#line 285 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_202_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "oisu_check.m"
                                  }
#line 285 "oisu_check.m"
                                  {
#line 285 "oisu_check.m"
                                    check_hlds__oisu_check__Msg_278 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 285 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_278, 0) = ((MR_Box) (check_hlds__oisu_check__Context_277));
#line 285 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_278, 1) = ((MR_Box) (check_hlds__oisu_check__V_202_202));
#line 285 "oisu_check.m"
                                  }
#line 287 "oisu_check.m"
                                  {
#line 287 "oisu_check.m"
                                    check_hlds__oisu_check__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_207_207, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_278));
#line 287 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_207_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "oisu_check.m"
                                  }
#line 286 "oisu_check.m"
                                  {
#line 286 "oisu_check.m"
                                    check_hlds__oisu_check__Spec_279 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 286 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_279, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_279, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 286 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_279, 2) = ((MR_Box) (check_hlds__oisu_check__V_207_207));
#line 286 "oisu_check.m"
                                  }
#line 288 "oisu_check.m"
                                  {
#line 288 "oisu_check.m"
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_279));
#line 288 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 288 "oisu_check.m"
                                  }
#line 289 "oisu_check.m"
                                  check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
#line 290 "oisu_check.m"
                                  check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TypesModes_17;
#line 278 "oisu_check.m"
                                }
#line 276 "oisu_check.m"
                            }
#line 214 "oisu_check.m"
                      }
#line 313 "oisu_check.m"
                    /* direct tailcall eliminated */
#line 313 "oisu_check.m"
                    {
#line 313 "oisu_check.m"
                      MR_Integer check_hlds__oisu_check__HeadVar__5__tmp_copy_5 = check_hlds__oisu_check__RestArgNum_31;
#line 313 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0__tmp_copy_6 = check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84;
#line 313 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__HeadVar__7__tmp_copy_7 = check_hlds__oisu_check__RestTypesModes_32;
#line 313 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0__tmp_copy_8 = check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82;

#line 313 "oisu_check.m"
                      check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0__tmp_copy_8;
#line 313 "oisu_check.m"
                      check_hlds__oisu_check__HeadVar__7_7 = check_hlds__oisu_check__HeadVar__7__tmp_copy_7;
#line 313 "oisu_check.m"
                      check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6 = check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0__tmp_copy_6;
#line 313 "oisu_check.m"
                      check_hlds__oisu_check__HeadVar__5_5 = check_hlds__oisu_check__HeadVar__5__tmp_copy_5;
#line 313 "oisu_check.m"
                    }
#line 313 "oisu_check.m"
                    continue;
#line 312 "oisu_check.m"
                  }
#line 315 "oisu_check.m"
                else
#line 317 "oisu_check.m"
                  {
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__TypeCtorInfo_361_361;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_242_242;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_245_245;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_246_246;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_251_251;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_261_261;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_262_262;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_266_266;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268;
#line 317 "oisu_check.m"
                    MR_Integer check_hlds__oisu_check__V_269_269;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__PredDesc_306;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__Pieces_307;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__Context_308;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__Msg_309;
#line 317 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__Spec_310;

#line 316 "oisu_check.m"
                    {
#line 316 "oisu_check.m"
                      check_hlds__oisu_check__PredDesc_306 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                    }
#line 3263 "check_hlds.oisu_check.c"
                    check_hlds__oisu_check__TypeCtorInfo_361_361 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 318 "oisu_check.m"
                    {
#line 318 "oisu_check.m"
                      check_hlds__oisu_check__V_246_246 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "oisu_check.m"
                      MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_246_246, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 318 "oisu_check.m"
                      MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_246_246, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
#line 318 "oisu_check.m"
                    }
#line 318 "oisu_check.m"
                    {
#line 318 "oisu_check.m"
                      check_hlds__oisu_check__V_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_245_245, 0) = ((MR_Box) (check_hlds__oisu_check__V_246_246));
#line 318 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_245_245, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 318 "oisu_check.m"
                    }
#line 318 "oisu_check.m"
                    {
#line 318 "oisu_check.m"
                      check_hlds__oisu_check__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_242_242, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
#line 318 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_242_242, 1) = ((MR_Box) (check_hlds__oisu_check__V_245_245));
#line 318 "oisu_check.m"
                    }
#line 319 "oisu_check.m"
                    {
#line 319 "oisu_check.m"
                      check_hlds__oisu_check__V_251_251 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_361_361, check_hlds__oisu_check__PredDesc_306, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[46]));
                    }
#line 318 "oisu_check.m"
                    {
#line 318 "oisu_check.m"
                      check_hlds__oisu_check__Pieces_307 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_361_361, check_hlds__oisu_check__V_242_242, check_hlds__oisu_check__V_251_251);
                    }
#line 321 "oisu_check.m"
                    {
#line 321 "oisu_check.m"
                      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_308);
                    }
#line 322 "oisu_check.m"
                    {
#line 322 "oisu_check.m"
                      check_hlds__oisu_check__V_262_262 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 322 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_262_262, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_307));
#line 322 "oisu_check.m"
                    }
#line 322 "oisu_check.m"
                    {
#line 322 "oisu_check.m"
                      check_hlds__oisu_check__V_261_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_261_261, 0) = ((MR_Box) (check_hlds__oisu_check__V_262_262));
#line 322 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_261_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "oisu_check.m"
                    }
#line 322 "oisu_check.m"
                    {
#line 322 "oisu_check.m"
                      check_hlds__oisu_check__Msg_309 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_309, 0) = ((MR_Box) (check_hlds__oisu_check__Context_308));
#line 322 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_309, 1) = ((MR_Box) (check_hlds__oisu_check__V_261_261));
#line 322 "oisu_check.m"
                    }
#line 323 "oisu_check.m"
                    {
#line 323 "oisu_check.m"
                      check_hlds__oisu_check__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_266_266, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_309));
#line 323 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_266_266, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "oisu_check.m"
                    }
#line 323 "oisu_check.m"
                    {
#line 323 "oisu_check.m"
                      check_hlds__oisu_check__Spec_310 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 323 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_310, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_310, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 323 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_310, 2) = ((MR_Box) (check_hlds__oisu_check__V_266_266));
#line 323 "oisu_check.m"
                    }
#line 324 "oisu_check.m"
                    {
#line 324 "oisu_check.m"
                      check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_310));
#line 324 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 324 "oisu_check.m"
                    }
#line 326 "oisu_check.m"
                    check_hlds__oisu_check__V_269_269 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
#line 325 "oisu_check.m"
                    /* direct tailcall eliminated */
#line 325 "oisu_check.m"
                    {
#line 325 "oisu_check.m"
                      MR_Integer check_hlds__oisu_check__HeadVar__5__tmp_copy_5 = check_hlds__oisu_check__V_269_269;
#line 325 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__HeadVar__7__tmp_copy_7 = check_hlds__oisu_check__TypesModes_17;
#line 325 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0__tmp_copy_8 = check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268;

#line 325 "oisu_check.m"
                      check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0__tmp_copy_8;
#line 325 "oisu_check.m"
                      check_hlds__oisu_check__HeadVar__7_7 = check_hlds__oisu_check__HeadVar__7__tmp_copy_7;
#line 325 "oisu_check.m"
                      check_hlds__oisu_check__HeadVar__5_5 = check_hlds__oisu_check__HeadVar__5__tmp_copy_5;
#line 325 "oisu_check.m"
                    }
#line 325 "oisu_check.m"
                    continue;
#line 317 "oisu_check.m"
                  }
#line 198 "oisu_check.m"
              }
#line 328 "oisu_check.m"
            else
#line 329 "oisu_check.m"
              {
#line 329 "oisu_check.m"
                MR_Integer check_hlds__oisu_check__V_272_272 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);

#line 329 "oisu_check.m"
                /* direct tailcall eliminated */
#line 329 "oisu_check.m"
                {
#line 329 "oisu_check.m"
                  MR_Integer check_hlds__oisu_check__HeadVar__5__tmp_copy_5 = check_hlds__oisu_check__V_272_272;
#line 329 "oisu_check.m"
                  MR_Word check_hlds__oisu_check__HeadVar__7__tmp_copy_7 = check_hlds__oisu_check__TypesModes_17;

#line 329 "oisu_check.m"
                  check_hlds__oisu_check__HeadVar__7_7 = check_hlds__oisu_check__HeadVar__7__tmp_copy_7;
#line 329 "oisu_check.m"
                  check_hlds__oisu_check__HeadVar__5_5 = check_hlds__oisu_check__HeadVar__5__tmp_copy_5;
#line 329 "oisu_check.m"
                }
#line 329 "oisu_check.m"
                continue;
#line 329 "oisu_check.m"
              }
#line 187 "oisu_check.m"
          }
#line 187 "oisu_check.m"
      }
#line 187 "oisu_check.m"
      break;
#line 187 "oisu_check.m"
    }
#line 181 "oisu_check.m"
}

#line 111 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_local_oisu_pred_9_p_0(
#line 111 "oisu_check.m"
  MR_Word check_hlds__oisu_check__ModuleInfo_10,
#line 111 "oisu_check.m"
  MR_Word check_hlds__oisu_check__KindMap_11,
#line 111 "oisu_check.m"
  MR_Word check_hlds__oisu_check__OISUTypeCtors_12,
#line 111 "oisu_check.m"
  MR_Word check_hlds__oisu_check__Pair0_13,
#line 111 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Pair_14,
#line 111 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_45,
#line 111 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_46,
#line 111 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_47,
#line 111 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_48)
#line 111 "oisu_check.m"
{
#line 118 "oisu_check.m"
  {
#line 118 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 118 "oisu_check.m"
    MR_Word check_hlds__oisu_check__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Pair0_13, (MR_Integer) 0)));
#line 118 "oisu_check.m"
    MR_Word check_hlds__oisu_check__PredInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Pair0_13, (MR_Integer) 1)));
#line 118 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Status0_19;
#line 118 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Status_21;
#line 118 "oisu_check.m"
    MR_Word check_hlds__oisu_check__IsDefnInModule_22;
#line 123 "oisu_check.m"
    MR_Word check_hlds__oisu_check__StatusPrime_20;

#line 120 "oisu_check.m"
    {
#line 120 "oisu_check.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__Status0_19);
    }
#line 121 "oisu_check.m"
    check_hlds__oisu_check__succeeded = ((MR_tag((MR_Word) check_hlds__oisu_check__Status0_19)) == (MR_mktag((MR_Integer) 1)));
#line 121 "oisu_check.m"
    if (check_hlds__oisu_check__succeeded)
#line 121 "oisu_check.m"
      {
#line 121 "oisu_check.m"
        check_hlds__oisu_check__StatusPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Status0_19, (MR_Integer) 0)));
#line 122 "oisu_check.m"
        check_hlds__oisu_check__Status_21 = check_hlds__oisu_check__StatusPrime_20;
#line 121 "oisu_check.m"
      }
#line 121 "oisu_check.m"
    else
#line 124 "oisu_check.m"
      check_hlds__oisu_check__Status_21 = check_hlds__oisu_check__Status0_19;
#line 126 "oisu_check.m"
    {
#line 126 "oisu_check.m"
      check_hlds__oisu_check__IsDefnInModule_22 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(check_hlds__oisu_check__Status_21);
    }
#line 130 "oisu_check.m"
    if ((check_hlds__oisu_check__IsDefnInModule_22 == (MR_Integer) 0))
#line 128 "oisu_check.m"
      {
#line 129 "oisu_check.m"
        *check_hlds__oisu_check__Pair_14 = check_hlds__oisu_check__Pair0_13;
#line 129 "oisu_check.m"
        *check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_46 = check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_45;
#line 129 "oisu_check.m"
        *check_hlds__oisu_check__STATE_VARIABLE_Specs_48 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_47;
#line 128 "oisu_check.m"
      }
#line 130 "oisu_check.m"
    else
#line 131 "oisu_check.m"
      {
#line 131 "oisu_check.m"
        MR_Word check_hlds__oisu_check__KindFors_23;
#line 132 "oisu_check.m"
        MR_Box check_hlds__oisu_check__conv0_KindFors_23;

#line 132 "oisu_check.m"
        {
#line 132 "oisu_check.m"
          check_hlds__oisu_check__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], check_hlds__oisu_check__KindMap_11, ((MR_Box) (check_hlds__oisu_check__PredId_17)), &check_hlds__oisu_check__conv0_KindFors_23);
        }
#line 132 "oisu_check.m"
        if (check_hlds__oisu_check__succeeded)
#line 132 "oisu_check.m"
          {
#line 132 "oisu_check.m"
            check_hlds__oisu_check__KindFors_23 = ((MR_Word) check_hlds__oisu_check__conv0_KindFors_23);
#line 132 "oisu_check.m"
            check_hlds__oisu_check__succeeded = MR_TRUE;
#line 132 "oisu_check.m"
          }
#line 131 "oisu_check.m"
        if (check_hlds__oisu_check__succeeded)
#line 133 "oisu_check.m"
          {
#line 133 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypeCtorInfo_95_95;
#line 133 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypeCtorInfo_96_96;
#line 133 "oisu_check.m"
            MR_Word check_hlds__oisu_check__ProcTable0_24;
#line 133 "oisu_check.m"
            MR_Word check_hlds__oisu_check__Procs0_25;

#line 133 "oisu_check.m"
            {
#line 133 "oisu_check.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__ProcTable0_24);
            }
#line 3554 "check_hlds.oisu_check.c"
            check_hlds__oisu_check__TypeCtorInfo_95_95 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3556 "check_hlds.oisu_check.c"
            check_hlds__oisu_check__TypeCtorInfo_96_96 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 134 "oisu_check.m"
            {
#line 134 "oisu_check.m"
              mercury__map__to_assoc_list_2_p_0(check_hlds__oisu_check__TypeCtorInfo_95_95, check_hlds__oisu_check__TypeCtorInfo_96_96, check_hlds__oisu_check__ProcTable0_24, &check_hlds__oisu_check__Procs0_25);
            }
#line 138 "oisu_check.m"
            if ((check_hlds__oisu_check__Procs0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 136 "oisu_check.m"
              {
#line 137 "oisu_check.m"
                {
#line 137 "oisu_check.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.oisu_check", (MR_String) "predicate \140check_hlds.oisu_check.check_local_oisu_pred\'/9", (MR_String) "no procedure for local predicate");
#line 137 "oisu_check.m"
                  return;
                }
#line 136 "oisu_check.m"
              }
#line 138 "oisu_check.m"
            else
#line 138 "oisu_check.m"
              {
#line 138 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Procs0_25, (MR_Integer) 1)));
#line 138 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Procs0_25, (MR_Integer) 0)));

#line 138 "oisu_check.m"
                if ((check_hlds__oisu_check__V_101_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 139 "oisu_check.m"
                  {
#line 139 "oisu_check.m"
                    MR_Integer check_hlds__oisu_check__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_102_102, (MR_Integer) 0)));
#line 139 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__ProcInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_102_102, (MR_Integer) 1)));
#line 139 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__ArgTypes_28;
#line 139 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__ArgModes_29;
#line 139 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__ArgTypesModes_30;
#line 139 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__ProcInfo_31;
#line 139 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__Procs_32;
#line 139 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__ProcTable_33;
#line 139 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__PredInfo_34;
#line 139 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_82_82;
#line 139 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_84_84;

#line 140 "oisu_check.m"
                    {
#line 140 "oisu_check.m"
                      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__ArgTypes_28);
                    }
#line 141 "oisu_check.m"
                    {
#line 141 "oisu_check.m"
                      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__oisu_check__ProcInfo0_27, &check_hlds__oisu_check__ArgModes_29);
                    }
#line 142 "oisu_check.m"
                    {
#line 142 "oisu_check.m"
                      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__oisu_check__ArgTypes_28, check_hlds__oisu_check__ArgModes_29, &check_hlds__oisu_check__ArgTypesModes_30);
                    }
#line 144 "oisu_check.m"
                    {
#line 144 "oisu_check.m"
                      check_hlds__oisu_check__check_arg_oisu_types_9_p_0(check_hlds__oisu_check__ModuleInfo_10, check_hlds__oisu_check__PredInfo0_18, check_hlds__oisu_check__KindFors_23, check_hlds__oisu_check__OISUTypeCtors_12, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__oisu_check__ArgTypesModes_30, check_hlds__oisu_check__STATE_VARIABLE_Specs_0_47, check_hlds__oisu_check__STATE_VARIABLE_Specs_48);
                    }
#line 146 "oisu_check.m"
                    {
#line 146 "oisu_check.m"
                      hlds__hlds_pred__proc_info_set_oisu_kind_fors_3_p_0(check_hlds__oisu_check__KindFors_23, check_hlds__oisu_check__ProcInfo0_27, &check_hlds__oisu_check__ProcInfo_31);
                    }
#line 147 "oisu_check.m"
                    {
#line 147 "oisu_check.m"
                      check_hlds__oisu_check__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__ProcId_26));
#line 147 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__ProcInfo_31));
#line 147 "oisu_check.m"
                    }
#line 147 "oisu_check.m"
                    {
#line 147 "oisu_check.m"
                      check_hlds__oisu_check__Procs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Procs_32, 0) = ((MR_Box) (check_hlds__oisu_check__V_82_82));
#line 147 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Procs_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "oisu_check.m"
                    }
#line 148 "oisu_check.m"
                    {
#line 148 "oisu_check.m"
                      mercury__map__from_assoc_list_2_p_0(check_hlds__oisu_check__TypeCtorInfo_95_95, check_hlds__oisu_check__TypeCtorInfo_96_96, check_hlds__oisu_check__Procs_32, &check_hlds__oisu_check__ProcTable_33);
                    }
#line 149 "oisu_check.m"
                    {
#line 149 "oisu_check.m"
                      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__oisu_check__ProcTable_33, check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__PredInfo_34);
                    }
#line 150 "oisu_check.m"
                    {
#line 150 "oisu_check.m"
                      MR_Word base;
#line 150 "oisu_check.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 150 "oisu_check.m"
                      *check_hlds__oisu_check__Pair_14 = base;
#line 150 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__oisu_check__PredId_17));
#line 150 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__oisu_check__PredInfo_34));
#line 150 "oisu_check.m"
                    }
#line 151 "oisu_check.m"
                    {
#line 151 "oisu_check.m"
                      check_hlds__oisu_check__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 151 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_84_84, 0) = ((MR_Box) (check_hlds__oisu_check__PredId_17));
#line 151 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_84_84, 1) = ((MR_Box) (check_hlds__oisu_check__ProcId_26));
#line 151 "oisu_check.m"
                    }
#line 151 "oisu_check.m"
                    {
#line 151 "oisu_check.m"
                      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (check_hlds__oisu_check__V_84_84)), check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_45, check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_46);
#line 151 "oisu_check.m"
                      return;
                    }
#line 139 "oisu_check.m"
                  }
#line 138 "oisu_check.m"
                else
#line 153 "oisu_check.m"
                  {
#line 153 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__PredDesc_38;
#line 153 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__ProcsPieces_39;
#line 153 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__Context_40;
#line 153 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__ProcsMsg_41;
#line 153 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__ProcsSpec_42;
#line 153 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_69_69;
#line 153 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_70_70;
#line 153 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_74_74;

#line 154 "oisu_check.m"
                    {
#line 154 "oisu_check.m"
                      check_hlds__oisu_check__PredDesc_38 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo0_18);
                    }
#line 156 "oisu_check.m"
                    {
#line 156 "oisu_check.m"
                      check_hlds__oisu_check__ProcsPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__oisu_check__PredDesc_38, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[13]));
                    }
#line 159 "oisu_check.m"
                    {
#line 159 "oisu_check.m"
                      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__Context_40);
                    }
#line 160 "oisu_check.m"
                    {
#line 160 "oisu_check.m"
                      check_hlds__oisu_check__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 160 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_70_70, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsPieces_39));
#line 160 "oisu_check.m"
                    }
#line 160 "oisu_check.m"
                    {
#line 160 "oisu_check.m"
                      check_hlds__oisu_check__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_69_69, 0) = ((MR_Box) (check_hlds__oisu_check__V_70_70));
#line 160 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "oisu_check.m"
                    }
#line 160 "oisu_check.m"
                    {
#line 160 "oisu_check.m"
                      check_hlds__oisu_check__ProcsMsg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 160 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsMsg_41, 0) = ((MR_Box) (check_hlds__oisu_check__Context_40));
#line 160 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsMsg_41, 1) = ((MR_Box) (check_hlds__oisu_check__V_69_69));
#line 160 "oisu_check.m"
                    }
#line 162 "oisu_check.m"
                    {
#line 162 "oisu_check.m"
                      check_hlds__oisu_check__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_74_74, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsMsg_41));
#line 162 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 162 "oisu_check.m"
                    }
#line 161 "oisu_check.m"
                    {
#line 161 "oisu_check.m"
                      check_hlds__oisu_check__ProcsSpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 161 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 161 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 161 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_42, 2) = ((MR_Box) (check_hlds__oisu_check__V_74_74));
#line 161 "oisu_check.m"
                    }
#line 163 "oisu_check.m"
                    {
#line 163 "oisu_check.m"
                      MR_Word base;
#line 163 "oisu_check.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "oisu_check.m"
                      *check_hlds__oisu_check__STATE_VARIABLE_Specs_48 = base;
#line 163 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsSpec_42));
#line 163 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_47));
#line 163 "oisu_check.m"
                    }
#line 164 "oisu_check.m"
                    *check_hlds__oisu_check__Pair_14 = check_hlds__oisu_check__Pair0_13;
#line 164 "oisu_check.m"
                    *check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_46 = check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_45;
#line 153 "oisu_check.m"
                  }
#line 138 "oisu_check.m"
              }
#line 133 "oisu_check.m"
          }
#line 131 "oisu_check.m"
        else
#line 167 "oisu_check.m"
          {
#line 167 "oisu_check.m"
            MR_Word check_hlds__oisu_check__Origin_43;
#line 168 "oisu_check.m"
            MR_Word check_hlds__oisu_check__V_44_44;

#line 167 "oisu_check.m"
            {
#line 167 "oisu_check.m"
              hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__Origin_43);
            }
#line 168 "oisu_check.m"
            check_hlds__oisu_check__succeeded = ((MR_tag((MR_Word) check_hlds__oisu_check__Origin_43)) == (MR_mktag((MR_Integer) 0)));
#line 168 "oisu_check.m"
            if (check_hlds__oisu_check__succeeded)
#line 168 "oisu_check.m"
              {
#line 168 "oisu_check.m"
                check_hlds__oisu_check__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Origin_43, (MR_Integer) 0)));
#line 168 "oisu_check.m"
                *check_hlds__oisu_check__STATE_VARIABLE_Specs_48 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_47;
#line 168 "oisu_check.m"
              }
#line 168 "oisu_check.m"
            else
#line 171 "oisu_check.m"
              {
#line 171 "oisu_check.m"
                MR_Word check_hlds__oisu_check__ArgTypes_90;

#line 171 "oisu_check.m"
                {
#line 171 "oisu_check.m"
                  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__ArgTypes_90);
                }
#line 172 "oisu_check.m"
                {
#line 172 "oisu_check.m"
                  check_hlds__oisu_check__check_args_have_no_oisu_types_5_p_0(check_hlds__oisu_check__PredInfo0_18, check_hlds__oisu_check__OISUTypeCtors_12, check_hlds__oisu_check__ArgTypes_90, check_hlds__oisu_check__STATE_VARIABLE_Specs_0_47, check_hlds__oisu_check__STATE_VARIABLE_Specs_48);
                }
#line 171 "oisu_check.m"
              }
#line 175 "oisu_check.m"
            *check_hlds__oisu_check__Pair_14 = check_hlds__oisu_check__Pair0_13;
#line 175 "oisu_check.m"
            *check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_46 = check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_45;
#line 167 "oisu_check.m"
          }
#line 131 "oisu_check.m"
      }
#line 118 "oisu_check.m"
  }
#line 111 "oisu_check.m"
}

#line 87 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(
#line 87 "oisu_check.m"
  MR_Word check_hlds__oisu_check__TypeCtor_6,
#line 87 "oisu_check.m"
  MR_Word check_hlds__oisu_check__Kind_7,
#line 87 "oisu_check.m"
  MR_Word check_hlds__oisu_check__PredId_8,
#line 87 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13,
#line 87 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_KindMap_14)
#line 87 "oisu_check.m"
{
#line 90 "oisu_check.m"
  {
#line 90 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 90 "oisu_check.m"
    MR_Word check_hlds__oisu_check__KindFor_10;
#line 104 "oisu_check.m"
    MR_Word check_hlds__oisu_check__OldEntries_11;
#line 101 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv0_OldEntries_11;

#line 94 "oisu_check.m"
    if ((check_hlds__oisu_check__Kind_7 == (MR_Integer) 0))
#line 93 "oisu_check.m"
      {
#line 93 "oisu_check.m"
        check_hlds__oisu_check__KindFor_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 93 "oisu_check.m"
        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__KindFor_10, 0) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_6));
#line 93 "oisu_check.m"
      }
#line 94 "oisu_check.m"
    else
#line 94 "oisu_check.m"
      if ((check_hlds__oisu_check__Kind_7 == (MR_Integer) 2))
#line 99 "oisu_check.m"
        {
#line 99 "oisu_check.m"
          check_hlds__oisu_check__KindFor_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 99 "oisu_check.m"
          MR_hl_field(MR_mktag(2), check_hlds__oisu_check__KindFor_10, 0) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_6));
#line 99 "oisu_check.m"
        }
#line 94 "oisu_check.m"
      else
#line 96 "oisu_check.m"
        {
#line 96 "oisu_check.m"
          check_hlds__oisu_check__KindFor_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 96 "oisu_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__KindFor_10, 0) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_6));
#line 96 "oisu_check.m"
        }
#line 101 "oisu_check.m"
    {
#line 101 "oisu_check.m"
      check_hlds__oisu_check__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13, ((MR_Box) (check_hlds__oisu_check__PredId_8)), &check_hlds__oisu_check__conv0_OldEntries_11);
    }
#line 101 "oisu_check.m"
    if (check_hlds__oisu_check__succeeded)
#line 101 "oisu_check.m"
      {
#line 101 "oisu_check.m"
        check_hlds__oisu_check__OldEntries_11 = ((MR_Word) check_hlds__oisu_check__conv0_OldEntries_11);
#line 101 "oisu_check.m"
        check_hlds__oisu_check__succeeded = MR_TRUE;
#line 101 "oisu_check.m"
      }
#line 104 "oisu_check.m"
    if (check_hlds__oisu_check__succeeded)
#line 102 "oisu_check.m"
      {
#line 102 "oisu_check.m"
        MR_Word check_hlds__oisu_check__Entries_12;

#line 102 "oisu_check.m"
        {
#line 102 "oisu_check.m"
          check_hlds__oisu_check__Entries_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 102 "oisu_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Entries_12, 0) = ((MR_Box) (check_hlds__oisu_check__KindFor_10));
#line 102 "oisu_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Entries_12, 1) = ((MR_Box) (check_hlds__oisu_check__OldEntries_11));
#line 102 "oisu_check.m"
        }
#line 103 "oisu_check.m"
        {
#line 103 "oisu_check.m"
          mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], ((MR_Box) (check_hlds__oisu_check__PredId_8)), ((MR_Box) (check_hlds__oisu_check__Entries_12)), check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13, check_hlds__oisu_check__STATE_VARIABLE_KindMap_14);
#line 103 "oisu_check.m"
          return;
        }
#line 102 "oisu_check.m"
      }
#line 104 "oisu_check.m"
    else
#line 105 "oisu_check.m"
      {
#line 105 "oisu_check.m"
        MR_Word check_hlds__oisu_check__Entries_18;

#line 105 "oisu_check.m"
        {
#line 105 "oisu_check.m"
          check_hlds__oisu_check__Entries_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "oisu_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Entries_18, 0) = ((MR_Box) (check_hlds__oisu_check__KindFor_10));
#line 105 "oisu_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Entries_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "oisu_check.m"
        }
#line 106 "oisu_check.m"
        {
#line 106 "oisu_check.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], ((MR_Box) (check_hlds__oisu_check__PredId_8)), ((MR_Box) (check_hlds__oisu_check__Entries_18)), check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13, check_hlds__oisu_check__STATE_VARIABLE_KindMap_14);
#line 106 "oisu_check.m"
          return;
        }
#line 105 "oisu_check.m"
      }
#line 90 "oisu_check.m"
  }
#line 87 "oisu_check.m"
}

#line 77 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_3(
#line 77 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 77 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 77 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 77 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3)
#line 77 "oisu_check.m"
{
#line 77 "oisu_check.m"
  {
#line 77 "oisu_check.m"
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
#line 77 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv4_STATE_VARIABLE_KindMap_14;

#line 77 "oisu_check.m"
    {
#line 77 "oisu_check.m"
      check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), &check_hlds__oisu_check__conv4_STATE_VARIABLE_KindMap_14);
    }
#line 77 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_3 = ((MR_Box) (check_hlds__oisu_check__conv4_STATE_VARIABLE_KindMap_14));
#line 77 "oisu_check.m"
  }
#line 77 "oisu_check.m"
}

#line 75 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_2(
#line 75 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 75 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 75 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 75 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3)
#line 75 "oisu_check.m"
{
#line 75 "oisu_check.m"
  {
#line 75 "oisu_check.m"
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
#line 75 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv2_STATE_VARIABLE_KindMap_14;

#line 75 "oisu_check.m"
    {
#line 75 "oisu_check.m"
      check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), &check_hlds__oisu_check__conv2_STATE_VARIABLE_KindMap_14);
    }
#line 75 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_3 = ((MR_Box) (check_hlds__oisu_check__conv2_STATE_VARIABLE_KindMap_14));
#line 75 "oisu_check.m"
  }
#line 75 "oisu_check.m"
}

#line 73 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_1(
#line 73 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 73 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 73 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 73 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3)
#line 73 "oisu_check.m"
{
#line 73 "oisu_check.m"
  {
#line 73 "oisu_check.m"
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
#line 73 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_14;

#line 73 "oisu_check.m"
    {
#line 73 "oisu_check.m"
      check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), &check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_14);
    }
#line 73 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_3 = ((MR_Box) (check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_14));
#line 73 "oisu_check.m"
  }
#line 73 "oisu_check.m"
}

#line 68 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0(
#line 68 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 68 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_10,
#line 68 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_KindMap_11)
#line 68 "oisu_check.m"
{
#line 71 "oisu_check.m"
  {
#line 71 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 71 "oisu_check.m"
    MR_Word check_hlds__oisu_check__TypeCtorInfo_24_24;
#line 71 "oisu_check.m"
    MR_Word check_hlds__oisu_check__TypeInfo_25_25;
#line 71 "oisu_check.m"
    MR_Word check_hlds__oisu_check__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 0)));
#line 71 "oisu_check.m"
    MR_Word check_hlds__oisu_check__OISUPreds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 1)));
#line 71 "oisu_check.m"
    MR_Word check_hlds__oisu_check__CreatorPreds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OISUPreds_5, (MR_Integer) 0)));
#line 71 "oisu_check.m"
    MR_Word check_hlds__oisu_check__MutatorPreds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OISUPreds_5, (MR_Integer) 1)));
#line 71 "oisu_check.m"
    MR_Word check_hlds__oisu_check__DestructorPreds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OISUPreds_5, (MR_Integer) 2)));
#line 71 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_12_12;
#line 71 "oisu_check.m"
    MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_13_13;
#line 71 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_15_15;
#line 71 "oisu_check.m"
    MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_16_16;
#line 71 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_18_18;
#line 73 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv1_STATE_VARIABLE_KindMap_13_13;
#line 75 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv3_STATE_VARIABLE_KindMap_16_16;
#line 77 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv5_STATE_VARIABLE_KindMap_11;

#line 73 "oisu_check.m"
    {
#line 73 "oisu_check.m"
      check_hlds__oisu_check__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 73 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_12_12, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_5[0]));
#line 73 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_12_12, 1) = ((MR_Box) (check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_1));
#line 73 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 73 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_12_12, 3) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_4));
#line 73 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_12_12, 4) = ((MR_Box) ((MR_Integer) 0));
#line 73 "oisu_check.m"
    }
#line 4156 "check_hlds.oisu_check.c"
    check_hlds__oisu_check__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4158 "check_hlds.oisu_check.c"
    check_hlds__oisu_check__TypeInfo_25_25 = (MR_Word) &check_hlds__oisu_check_scalar_common_2[1];
#line 73 "oisu_check.m"
    {
#line 73 "oisu_check.m"
      mercury__list__foldl_4_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeInfo_25_25, check_hlds__oisu_check__V_12_12, check_hlds__oisu_check__CreatorPreds_7, ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_10)), &check_hlds__oisu_check__conv1_STATE_VARIABLE_KindMap_13_13);
    }
#line 73 "oisu_check.m"
    check_hlds__oisu_check__STATE_VARIABLE_KindMap_13_13 = ((MR_Word) check_hlds__oisu_check__conv1_STATE_VARIABLE_KindMap_13_13);
#line 75 "oisu_check.m"
    {
#line 75 "oisu_check.m"
      check_hlds__oisu_check__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 75 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_15_15, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_5[0]));
#line 75 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_15_15, 1) = ((MR_Box) (check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_2));
#line 75 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 75 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_15_15, 3) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_4));
#line 75 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_15_15, 4) = ((MR_Box) ((MR_Integer) 1));
#line 75 "oisu_check.m"
    }
#line 75 "oisu_check.m"
    {
#line 75 "oisu_check.m"
      mercury__list__foldl_4_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeInfo_25_25, check_hlds__oisu_check__V_15_15, check_hlds__oisu_check__MutatorPreds_8, ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_KindMap_13_13)), &check_hlds__oisu_check__conv3_STATE_VARIABLE_KindMap_16_16);
    }
#line 75 "oisu_check.m"
    check_hlds__oisu_check__STATE_VARIABLE_KindMap_16_16 = ((MR_Word) check_hlds__oisu_check__conv3_STATE_VARIABLE_KindMap_16_16);
#line 77 "oisu_check.m"
    {
#line 77 "oisu_check.m"
      check_hlds__oisu_check__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 77 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_18_18, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_5[0]));
#line 77 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_18_18, 1) = ((MR_Box) (check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_3));
#line 77 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 77 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_18_18, 3) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_4));
#line 77 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_18_18, 4) = ((MR_Box) ((MR_Integer) 2));
#line 77 "oisu_check.m"
    }
#line 77 "oisu_check.m"
    {
#line 77 "oisu_check.m"
      mercury__list__foldl_4_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeInfo_25_25, check_hlds__oisu_check__V_18_18, check_hlds__oisu_check__DestructorPreds_9, ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_KindMap_16_16)), &check_hlds__oisu_check__conv5_STATE_VARIABLE_KindMap_11);
    }
#line 77 "oisu_check.m"
    *check_hlds__oisu_check__STATE_VARIABLE_KindMap_11 = ((MR_Word) check_hlds__oisu_check__conv5_STATE_VARIABLE_KindMap_11);
#line 71 "oisu_check.m"
  }
#line 68 "oisu_check.m"
}

#line 60 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_2(
#line 60 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 60 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 60 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_2,
#line 60 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_3,
#line 60 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_4,
#line 60 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_5,
#line 60 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_6)
#line 60 "oisu_check.m"
{
#line 60 "oisu_check.m"
  {
#line 60 "oisu_check.m"
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
#line 60 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv4_Pair_14;
#line 60 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv3_STATE_VARIABLE_OISUProcs_46;
#line 60 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv2_STATE_VARIABLE_Specs_48;

#line 60 "oisu_check.m"
    {
#line 60 "oisu_check.m"
      check_hlds__oisu_check__check_local_oisu_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__oisu_check__wrapper_arg_1), &check_hlds__oisu_check__conv4_Pair_14, ((MR_Word) check_hlds__oisu_check__wrapper_arg_3), &check_hlds__oisu_check__conv3_STATE_VARIABLE_OISUProcs_46, ((MR_Word) check_hlds__oisu_check__wrapper_arg_5), &check_hlds__oisu_check__conv2_STATE_VARIABLE_Specs_48);
    }
#line 60 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_2 = ((MR_Box) (check_hlds__oisu_check__conv4_Pair_14));
#line 60 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_4 = ((MR_Box) (check_hlds__oisu_check__conv3_STATE_VARIABLE_OISUProcs_46));
#line 60 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_6 = ((MR_Box) (check_hlds__oisu_check__conv2_STATE_VARIABLE_Specs_48));
#line 60 "oisu_check.m"
  }
#line 60 "oisu_check.m"
}

#line 55 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_1(
#line 55 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 55 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 55 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 55 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3)
#line 55 "oisu_check.m"
{
#line 55 "oisu_check.m"
  {
#line 55 "oisu_check.m"
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
#line 55 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_11;

#line 55 "oisu_check.m"
    {
#line 55 "oisu_check.m"
      check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0(((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), &check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_11);
    }
#line 55 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_3 = ((MR_Box) (check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_11));
#line 55 "oisu_check.m"
  }
#line 55 "oisu_check.m"
}

#line 32 "oisu_check.m"
void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0(
#line 32 "oisu_check.m"
  MR_Word check_hlds__oisu_check__OISUPairs_5,
#line 32 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_0_16,
#line 32 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_17,
#line 32 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Specs_7)
#line 32 "oisu_check.m"
{
#line 53 "oisu_check.m"
  {
#line 53 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__TypeCtorInfo_31_31;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__TypeInfo_41_41;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__KindMap0_8;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__KindMap_9;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__PredTable0_10;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Preds0_11;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__OISUTypeCtors_12;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Preds_13;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__OISUProcs_14;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__PredTable_15;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_19_19;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_20_20;
#line 53 "oisu_check.m"
    MR_Word check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_22_22;
#line 55 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv1_KindMap_9;
#line 59 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv6_OISUProcs_14;
#line 59 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv5_Specs_7;

#line 54 "oisu_check.m"
    {
#line 54 "oisu_check.m"
      mercury__map__init_1_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], &check_hlds__oisu_check__KindMap0_8);
    }
#line 55 "oisu_check.m"
    {
#line 55 "oisu_check.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__oisu_check_scalar_common_2[0], (MR_Word) &check_hlds__oisu_check_scalar_common_2[1], (MR_Word) &check_hlds__oisu_check_scalar_common_2[3], check_hlds__oisu_check__OISUPairs_5, ((MR_Box) (check_hlds__oisu_check__KindMap0_8)), &check_hlds__oisu_check__conv1_KindMap_9);
    }
#line 55 "oisu_check.m"
    check_hlds__oisu_check__KindMap_9 = ((MR_Word) check_hlds__oisu_check__conv1_KindMap_9);
#line 56 "oisu_check.m"
    {
#line 56 "oisu_check.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__oisu_check__PredTable0_10);
    }
#line 4365 "check_hlds.oisu_check.c"
    check_hlds__oisu_check__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 57 "oisu_check.m"
    {
#line 57 "oisu_check.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeCtorInfo_31_31, check_hlds__oisu_check__PredTable0_10, &check_hlds__oisu_check__Preds0_11);
    }
#line 58 "oisu_check.m"
    {
#line 58 "oisu_check.m"
      mercury__assoc_list__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0, check_hlds__oisu_check__OISUPairs_5, &check_hlds__oisu_check__OISUTypeCtors_12);
    }
#line 60 "oisu_check.m"
    {
#line 60 "oisu_check.m"
      check_hlds__oisu_check__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 60 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_19_19, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_4[0]));
#line 60 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_19_19, 1) = ((MR_Box) (check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_2));
#line 60 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 60 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_19_19, 3) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_0_16));
#line 60 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_19_19, 4) = ((MR_Box) (check_hlds__oisu_check__KindMap_9));
#line 60 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_19_19, 5) = ((MR_Box) (check_hlds__oisu_check__OISUTypeCtors_12));
#line 60 "oisu_check.m"
    }
#line 61 "oisu_check.m"
    {
#line 61 "oisu_check.m"
      check_hlds__oisu_check__V_20_20 = mercury__set__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
    }
#line 4400 "check_hlds.oisu_check.c"
    check_hlds__oisu_check__TypeInfo_41_41 = (MR_Word) &check_hlds__oisu_check_scalar_common_2[2];
#line 59 "oisu_check.m"
    {
#line 59 "oisu_check.m"
      mercury__list__map_foldl2_7_p_0(check_hlds__oisu_check__TypeInfo_41_41, check_hlds__oisu_check__TypeInfo_41_41, (MR_Word) &check_hlds__oisu_check_scalar_common_1[1], (MR_Word) &check_hlds__oisu_check_scalar_common_1[2], check_hlds__oisu_check__V_19_19, check_hlds__oisu_check__Preds0_11, &check_hlds__oisu_check__Preds_13, ((MR_Box) (check_hlds__oisu_check__V_20_20)), &check_hlds__oisu_check__conv6_OISUProcs_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__oisu_check__conv5_Specs_7);
    }
#line 59 "oisu_check.m"
    check_hlds__oisu_check__OISUProcs_14 = ((MR_Word) check_hlds__oisu_check__conv6_OISUProcs_14);
#line 59 "oisu_check.m"
    *check_hlds__oisu_check__Specs_7 = ((MR_Word) check_hlds__oisu_check__conv5_Specs_7);
#line 62 "oisu_check.m"
    {
#line 62 "oisu_check.m"
      mercury__map__from_assoc_list_2_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeCtorInfo_31_31, check_hlds__oisu_check__Preds_13, &check_hlds__oisu_check__PredTable_15);
    }
#line 63 "oisu_check.m"
    {
#line 63 "oisu_check.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__oisu_check__PredTable_15, check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_22_22);
    }
#line 64 "oisu_check.m"
    {
#line 64 "oisu_check.m"
      hlds__hlds_module__module_info_set_oisu_procs_3_p_0(check_hlds__oisu_check__OISUProcs_14, check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_17);
#line 64 "oisu_check.m"
      return;
    }
#line 53 "oisu_check.m"
  }
#line 32 "oisu_check.m"
}

void mercury__check_hlds__oisu_check__init(void)
{
}

void mercury__check_hlds__oisu_check__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__oisu_check__check_hlds__oisu_check__type_ctor_info_oisu_kind_map_0);
	MR_register_type_ctor_info(&check_hlds__oisu_check__check_hlds__oisu_check__type_ctor_info_oisu_pred_kind_0);
}

void mercury__check_hlds__oisu_check__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.oisu_check. */
