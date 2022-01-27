/*
** Automatically generated from `oisu_check.m'
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


/* :- module check_hlds.oisu_check. */
/* :- implementation. */

/*
INIT mercury__check_hlds__oisu_check__init
ENDINIT
*/

#include "check_hlds.oisu_check.mih"


#include "analysis.mih"
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




#line 142 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0;

#line 145 "check_hlds.oisu_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0;

#line 148 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0;

#line 151 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 154 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 157 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 160 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 163 "check_hlds.oisu_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__oisu_check__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0;

#line 166 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0;

#line 169 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1;

#line 172 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2;

#line 175 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDescPtr check_hlds__oisu_check__check_hlds__oisu_check__enum_value_ordered_oisu_pred_kind_0[3];

#line 178 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDescPtr check_hlds__oisu_check__check_hlds__oisu_check__enum_name_ordered_oisu_pred_kind_0[3];

#line 181 "check_hlds.oisu_check.c"
static const MR_Integer check_hlds__oisu_check__check_hlds__oisu_check__functor_number_map_oisu_pred_kind_0[3];

#line 184 "check_hlds.oisu_check.c"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0_10001(
#line 187 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 189 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2);

#line 192 "check_hlds.oisu_check.c"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0_10001(
#line 195 "check_hlds.oisu_check.c"
  MR_Box * check_hlds__oisu_check__wrapper_arg_1,
#line 197 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 199 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_3);

#line 202 "check_hlds.oisu_check.c"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0_10001(
#line 205 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 207 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2);

#line 210 "check_hlds.oisu_check.c"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0_10001(
#line 213 "check_hlds.oisu_check.c"
  MR_Box * check_hlds__oisu_check__wrapper_arg_1,
#line 215 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 217 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_3);

#line 81 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0(
#line 81 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__HeadVar__1_1,
#line 81 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
#line 81 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__3_3);

#line 81 "oisu_check.m"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0(
#line 81 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_1,
#line 81 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2);

#line 86 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0(
#line 86 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__HeadVar__1_1,
#line 86 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
#line 86 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__3_3);

#line 86 "oisu_check.m"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0(
#line 86 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 86 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2);

#line 419 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_args_have_no_oisu_types_5_p_0(
#line 419 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 419 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
#line 419 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__3_3,
#line 419 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4,
#line 419 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_5);

#line 393 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(
#line 393 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadKindFor_4,
#line 393 "oisu_check.m"
  MR_Word check_hlds__oisu_check__TailKindFors_5,
#line 393 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Pieces_6);

#line 375 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(
#line 375 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 375 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HandledOISUTypeCtors_2,
#line 375 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__HeadVar__3_3);

#line 354 "oisu_check.m"
static MR_bool MR_CALL 
check_hlds__oisu_check__find_kind_for_oisu_type_3_p_0(
#line 354 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 354 "oisu_check.m"
  MR_Word check_hlds__oisu_check__TypeCtor_6,
#line 354 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Kind_7);

#line 182 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_arg_oisu_types_9_p_0(
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__PredInfo_2,
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__KindFors_3,
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__4_4,
#line 182 "oisu_check.m"
  MR_Integer check_hlds__oisu_check__HeadVar__5_5,
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6,
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__7_7,
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8,
#line 182 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_9);

#line 112 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_local_oisu_pred_9_p_0(
#line 112 "oisu_check.m"
  MR_Word check_hlds__oisu_check__ModuleInfo_10,
#line 112 "oisu_check.m"
  MR_Word check_hlds__oisu_check__KindMap_11,
#line 112 "oisu_check.m"
  MR_Word check_hlds__oisu_check__OISUTypeCtors_12,
#line 112 "oisu_check.m"
  MR_Word check_hlds__oisu_check__Pair0_13,
#line 112 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Pair_14,
#line 112 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_46,
#line 112 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_47,
#line 112 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48,
#line 112 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_49);

#line 88 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(
#line 88 "oisu_check.m"
  MR_Word check_hlds__oisu_check__TypeCtor_6,
#line 88 "oisu_check.m"
  MR_Word check_hlds__oisu_check__Kind_7,
#line 88 "oisu_check.m"
  MR_Word check_hlds__oisu_check__PredId_8,
#line 88 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13,
#line 88 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_KindMap_14);

#line 78 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_3(
#line 78 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 78 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 78 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 78 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3);

#line 76 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_2(
#line 76 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 76 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 76 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 76 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3);

#line 74 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_1(
#line 74 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 74 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 74 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 74 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3);

#line 69 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0(
#line 69 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 69 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_10,
#line 69 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_KindMap_11);

#line 61 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_2(
#line 61 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 61 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 61 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_2,
#line 61 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_3,
#line 61 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_4,
#line 61 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_5,
#line 61 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_6);

#line 56 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_1(
#line 56 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 56 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 56 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 56 "oisu_check.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "so it should have exactly one procedure."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration,"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in a"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is mentioned"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the following OISU types, but it does not:"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is declared to handle"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "handles a previous handled OISU type."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but its mode is not output."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be a creator of its OISU type,"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but its mode is not input."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be a destructor of its OISU type,"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of its OISU type,"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[27])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be the output of the mutator"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "another argument of the same type."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "it should be followed by"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is a mutator of its OISU type,"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it is not listed in that type\'s OISU pragma."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is an OISU type"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Since the"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not mentioned"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 831 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0
  }
};

#line 840 "check_hlds.oisu_check.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

#line 848 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

#line 857 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 865 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 874 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 882 "check_hlds.oisu_check.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 890 "check_hlds.oisu_check.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__oisu_check__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

#line 899 "check_hlds.oisu_check.c"
const MR_TypeCtorInfo_Struct check_hlds__oisu_check__check_hlds__oisu_check__type_ctor_info_oisu_kind_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__oisu_check____Unify____oisu_kind_map_0_0_10001)),
  ((MR_Box) (check_hlds__oisu_check____Compare____oisu_kind_map_0_0_10001)),
  (MR_String) "check_hlds.oisu_check",
  (MR_String) "oisu_kind_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__oisu_check__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 916 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0 = {
  (MR_String) "oisu_creator",
  (MR_Integer) 0
};

#line 922 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1 = {
  (MR_String) "oisu_mutator",
  (MR_Integer) 1
};

#line 928 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2 = {
  (MR_String) "oisu_destructor",
  (MR_Integer) 2
};

#line 934 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDescPtr check_hlds__oisu_check__check_hlds__oisu_check__enum_value_ordered_oisu_pred_kind_0[3] = {
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0,
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1,
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2
};

#line 941 "check_hlds.oisu_check.c"
static const MR_EnumFunctorDescPtr check_hlds__oisu_check__check_hlds__oisu_check__enum_name_ordered_oisu_pred_kind_0[3] = {
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0,
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2,
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1
};

#line 948 "check_hlds.oisu_check.c"
static const MR_Integer check_hlds__oisu_check__check_hlds__oisu_check__functor_number_map_oisu_pred_kind_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 955 "check_hlds.oisu_check.c"
const MR_TypeCtorInfo_Struct check_hlds__oisu_check__check_hlds__oisu_check__type_ctor_info_oisu_pred_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__oisu_check____Unify____oisu_pred_kind_0_0_10001)),
  ((MR_Box) (check_hlds__oisu_check____Compare____oisu_pred_kind_0_0_10001)),
  (MR_String) "check_hlds.oisu_check",
  (MR_String) "oisu_pred_kind",
  {     check_hlds__oisu_check__check_hlds__oisu_check__enum_name_ordered_oisu_pred_kind_0 },
  {     check_hlds__oisu_check__check_hlds__oisu_check__enum_value_ordered_oisu_pred_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__oisu_check__check_hlds__oisu_check__functor_number_map_oisu_pred_kind_0
};

#line 972 "check_hlds.oisu_check.c"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0_10001(
#line 975 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 977 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2)
#line 979 "check_hlds.oisu_check.c"
{
#line 981 "check_hlds.oisu_check.c"
  {
#line 983 "check_hlds.oisu_check.c"
    MR_bool check_hlds__oisu_check__succeeded;

#line 986 "check_hlds.oisu_check.c"
    {
#line 988 "check_hlds.oisu_check.c"
      check_hlds__oisu_check__succeeded = check_hlds__oisu_check____Unify____oisu_kind_map_0_0(((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2));
    }
#line 991 "check_hlds.oisu_check.c"
    return check_hlds__oisu_check__succeeded;
#line 993 "check_hlds.oisu_check.c"
  }
#line 995 "check_hlds.oisu_check.c"
}

#line 998 "check_hlds.oisu_check.c"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0_10001(
#line 1001 "check_hlds.oisu_check.c"
  MR_Box * check_hlds__oisu_check__wrapper_arg_1,
#line 1003 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 1005 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_3)
#line 1007 "check_hlds.oisu_check.c"
{
#line 1009 "check_hlds.oisu_check.c"
  {
#line 1011 "check_hlds.oisu_check.c"
    MR_Word check_hlds__oisu_check__conv0_HeadVar__1_1;

#line 1014 "check_hlds.oisu_check.c"
    {
#line 1016 "check_hlds.oisu_check.c"
      check_hlds__oisu_check____Compare____oisu_kind_map_0_0(&check_hlds__oisu_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), ((MR_Word) check_hlds__oisu_check__wrapper_arg_3));
    }
#line 1019 "check_hlds.oisu_check.c"
    *check_hlds__oisu_check__wrapper_arg_1 = ((MR_Box) (check_hlds__oisu_check__conv0_HeadVar__1_1));
#line 1021 "check_hlds.oisu_check.c"
  }
#line 1023 "check_hlds.oisu_check.c"
}

#line 1026 "check_hlds.oisu_check.c"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0_10001(
#line 1029 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 1031 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2)
#line 1033 "check_hlds.oisu_check.c"
{
#line 1035 "check_hlds.oisu_check.c"
  {
#line 1037 "check_hlds.oisu_check.c"
    MR_bool check_hlds__oisu_check__succeeded;

#line 1040 "check_hlds.oisu_check.c"
    {
#line 1042 "check_hlds.oisu_check.c"
      check_hlds__oisu_check__succeeded = check_hlds__oisu_check____Unify____oisu_pred_kind_0_0(((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2));
    }
#line 1045 "check_hlds.oisu_check.c"
    return check_hlds__oisu_check__succeeded;
#line 1047 "check_hlds.oisu_check.c"
  }
#line 1049 "check_hlds.oisu_check.c"
}

#line 1052 "check_hlds.oisu_check.c"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0_10001(
#line 1055 "check_hlds.oisu_check.c"
  MR_Box * check_hlds__oisu_check__wrapper_arg_1,
#line 1057 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 1059 "check_hlds.oisu_check.c"
  MR_Box check_hlds__oisu_check__wrapper_arg_3)
#line 1061 "check_hlds.oisu_check.c"
{
#line 1063 "check_hlds.oisu_check.c"
  {
#line 1065 "check_hlds.oisu_check.c"
    MR_Word check_hlds__oisu_check__conv0_HeadVar__1_1;

#line 1068 "check_hlds.oisu_check.c"
    {
#line 1070 "check_hlds.oisu_check.c"
      check_hlds__oisu_check____Compare____oisu_pred_kind_0_0(&check_hlds__oisu_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), ((MR_Word) check_hlds__oisu_check__wrapper_arg_3));
    }
#line 1073 "check_hlds.oisu_check.c"
    *check_hlds__oisu_check__wrapper_arg_1 = ((MR_Box) (check_hlds__oisu_check__conv0_HeadVar__1_1));
#line 1075 "check_hlds.oisu_check.c"
  }
#line 1077 "check_hlds.oisu_check.c"
}

#line 81 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0(
#line 81 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__HeadVar__1_1,
#line 81 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
#line 81 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__3_3)
#line 81 "oisu_check.m"
{
#line 81 "oisu_check.m"
  {
#line 81 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 81 "oisu_check.m"
    MR_Integer check_hlds__oisu_check__Cast_HeadVar1_4 = (MR_Integer) check_hlds__oisu_check__HeadVar__2_2;
#line 81 "oisu_check.m"
    MR_Integer check_hlds__oisu_check__Cast_HeadVar2_5 = (MR_Integer) check_hlds__oisu_check__HeadVar__3_3;

#line 81 "oisu_check.m"
    {
#line 81 "oisu_check.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__Cast_HeadVar1_4, check_hlds__oisu_check__Cast_HeadVar2_5);
    }
#line 81 "oisu_check.m"
  }
#line 81 "oisu_check.m"
}

#line 81 "oisu_check.m"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0(
#line 81 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_1,
#line 81 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2)
#line 81 "oisu_check.m"
{
#line 1119 "check_hlds.oisu_check.c"
  {
#line 1121 "check_hlds.oisu_check.c"
    MR_bool check_hlds__oisu_check__succeeded = (check_hlds__oisu_check__HeadVar__2_1 == check_hlds__oisu_check__HeadVar__2_2);

#line 1124 "check_hlds.oisu_check.c"
    return check_hlds__oisu_check__succeeded;
#line 1126 "check_hlds.oisu_check.c"
  }
#line 81 "oisu_check.m"
}

#line 86 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0(
#line 86 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__HeadVar__1_1,
#line 86 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
#line 86 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__3_3)
#line 86 "oisu_check.m"
{
#line 86 "oisu_check.m"
  {
#line 86 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 86 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Cast_HeadVar1_4 = check_hlds__oisu_check__HeadVar__2_2;
#line 86 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Cast_HeadVar2_5 = check_hlds__oisu_check__HeadVar__3_3;

#line 86 "oisu_check.m"
    {
#line 86 "oisu_check.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__oisu_check_scalar_common_2[1], check_hlds__oisu_check__HeadVar__1_1, ((MR_Box) (check_hlds__oisu_check__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__oisu_check__Cast_HeadVar2_5)));
    }
#line 86 "oisu_check.m"
  }
#line 86 "oisu_check.m"
}

#line 86 "oisu_check.m"
static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0(
#line 86 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 86 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2)
#line 86 "oisu_check.m"
{
#line 86 "oisu_check.m"
  {
#line 86 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 86 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Cast_HeadVar1_3 = check_hlds__oisu_check__HeadVar__1_1;
#line 86 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Cast_HeadVar2_4 = check_hlds__oisu_check__HeadVar__2_2;

#line 86 "oisu_check.m"
    {
#line 86 "oisu_check.m"
      check_hlds__oisu_check__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__oisu_check_scalar_common_2[1], ((MR_Box) (check_hlds__oisu_check__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__oisu_check__Cast_HeadVar2_4)));
    }
#line 86 "oisu_check.m"
    return check_hlds__oisu_check__succeeded;
#line 86 "oisu_check.m"
  }
#line 86 "oisu_check.m"
}

#line 419 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_args_have_no_oisu_types_5_p_0(
#line 419 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 419 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
#line 419 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__3_3,
#line 419 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4,
#line 419 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_5)
#line 419 "oisu_check.m"
{
#line 422 "oisu_check.m"
  while (MR_TRUE)
#line 422 "oisu_check.m"
    {
#line 422 "oisu_check.m"
      /* tailcall optimized into a loop */
#line 422 "oisu_check.m"
      {
#line 422 "oisu_check.m"
        MR_bool check_hlds__oisu_check__succeeded;

#line 422 "oisu_check.m"
        if ((check_hlds__oisu_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 422 "oisu_check.m"
          *check_hlds__oisu_check__STATE_VARIABLE_Specs_5 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4;
#line 422 "oisu_check.m"
        else
#line 424 "oisu_check.m"
          {
#line 424 "oisu_check.m"
            MR_Word check_hlds__oisu_check__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__3_3, (MR_Integer) 0)));
#line 424 "oisu_check.m"
            MR_Word check_hlds__oisu_check__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__3_3, (MR_Integer) 1)));
#line 424 "oisu_check.m"
            MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_56_56;
#line 442 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypeCtor_16;
#line 426 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypeCtorInfo_58_58;
#line 426 "oisu_check.m"
            MR_Word check_hlds__oisu_check__ArgTypes_17;

#line 426 "oisu_check.m"
            {
#line 426 "oisu_check.m"
              check_hlds__oisu_check__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__oisu_check__Type_13, &check_hlds__oisu_check__TypeCtor_16, &check_hlds__oisu_check__ArgTypes_17);
            }
#line 426 "oisu_check.m"
            if (check_hlds__oisu_check__succeeded)
#line 426 "oisu_check.m"
              {
#line 427 "oisu_check.m"
                check_hlds__oisu_check__succeeded = (check_hlds__oisu_check__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "oisu_check.m"
                if (check_hlds__oisu_check__succeeded)
#line 426 "oisu_check.m"
                  {
#line 1253 "check_hlds.oisu_check.c"
                    check_hlds__oisu_check__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 428 "oisu_check.m"
                    {
#line 428 "oisu_check.m"
                      check_hlds__oisu_check__succeeded = mercury__list__member_2_p_0(check_hlds__oisu_check__TypeCtorInfo_58_58, ((MR_Box) (check_hlds__oisu_check__TypeCtor_16)), check_hlds__oisu_check__HeadVar__2_2);
                    }
#line 426 "oisu_check.m"
                  }
#line 426 "oisu_check.m"
              }
#line 442 "oisu_check.m"
            if (check_hlds__oisu_check__succeeded)
#line 431 "oisu_check.m"
              {
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__PredDesc_18;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__TypeName_19;
#line 431 "oisu_check.m"
                MR_Integer check_hlds__oisu_check__TypeArity_20;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__ProcsPieces_21;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__Context_22;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__ProcsMsg_23;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__ProcsSpec_24;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_28_28;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_31_31;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_34_34;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_37_37;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_40_40;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_43_43;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_44_44;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_45_45;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_49_49;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_50_50;
#line 431 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_54_54;

#line 430 "oisu_check.m"
                {
#line 430 "oisu_check.m"
                  check_hlds__oisu_check__PredDesc_18 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__HeadVar__1_1);
                }
#line 432 "oisu_check.m"
                check_hlds__oisu_check__TypeName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__TypeCtor_16, (MR_Integer) 0)));
#line 432 "oisu_check.m"
                check_hlds__oisu_check__TypeArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__TypeCtor_16, (MR_Integer) 1)));
#line 436 "oisu_check.m"
                {
#line 436 "oisu_check.m"
                  check_hlds__oisu_check__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_45_45, 0) = ((MR_Box) (check_hlds__oisu_check__TypeName_19));
#line 436 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_45_45, 1) = ((MR_Box) (check_hlds__oisu_check__TypeArity_20));
#line 436 "oisu_check.m"
                }
#line 436 "oisu_check.m"
                {
#line 436 "oisu_check.m"
                  check_hlds__oisu_check__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "oisu_check.m"
                  MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 436 "oisu_check.m"
                  MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_44_44, 1) = ((MR_Box) (check_hlds__oisu_check__V_45_45));
#line 436 "oisu_check.m"
                }
#line 436 "oisu_check.m"
                {
#line 436 "oisu_check.m"
                  check_hlds__oisu_check__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_43_43, 0) = ((MR_Box) (check_hlds__oisu_check__V_44_44));
#line 436 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])));
#line 436 "oisu_check.m"
                }
#line 435 "oisu_check.m"
                {
#line 435 "oisu_check.m"
                  check_hlds__oisu_check__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[59])));
#line 435 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_40_40, 1) = ((MR_Box) (check_hlds__oisu_check__V_43_43));
#line 435 "oisu_check.m"
                }
#line 434 "oisu_check.m"
                {
#line 434 "oisu_check.m"
                  check_hlds__oisu_check__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[58])));
#line 434 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_37_37, 1) = ((MR_Box) (check_hlds__oisu_check__V_40_40));
#line 434 "oisu_check.m"
                }
#line 434 "oisu_check.m"
                {
#line 434 "oisu_check.m"
                  check_hlds__oisu_check__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[57])));
#line 434 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_34_34, 1) = ((MR_Box) (check_hlds__oisu_check__V_37_37));
#line 434 "oisu_check.m"
                }
#line 434 "oisu_check.m"
                {
#line 434 "oisu_check.m"
                  check_hlds__oisu_check__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[56])));
#line 434 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_31_31, 1) = ((MR_Box) (check_hlds__oisu_check__V_34_34));
#line 434 "oisu_check.m"
                }
#line 433 "oisu_check.m"
                {
#line 433 "oisu_check.m"
                  check_hlds__oisu_check__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[55])));
#line 433 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_28_28, 1) = ((MR_Box) (check_hlds__oisu_check__V_31_31));
#line 433 "oisu_check.m"
                }
#line 433 "oisu_check.m"
                {
#line 433 "oisu_check.m"
                  check_hlds__oisu_check__ProcsPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__oisu_check__PredDesc_18, check_hlds__oisu_check__V_28_28);
                }
#line 437 "oisu_check.m"
                {
#line 437 "oisu_check.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__HeadVar__1_1, &check_hlds__oisu_check__Context_22);
                }
#line 438 "oisu_check.m"
                {
#line 438 "oisu_check.m"
                  check_hlds__oisu_check__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 438 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_50_50, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsPieces_21));
#line 438 "oisu_check.m"
                }
#line 438 "oisu_check.m"
                {
#line 438 "oisu_check.m"
                  check_hlds__oisu_check__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_49_49, 0) = ((MR_Box) (check_hlds__oisu_check__V_50_50));
#line 438 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "oisu_check.m"
                }
#line 438 "oisu_check.m"
                {
#line 438 "oisu_check.m"
                  check_hlds__oisu_check__ProcsMsg_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsMsg_23, 0) = ((MR_Box) (check_hlds__oisu_check__Context_22));
#line 438 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsMsg_23, 1) = ((MR_Box) (check_hlds__oisu_check__V_49_49));
#line 438 "oisu_check.m"
                }
#line 440 "oisu_check.m"
                {
#line 440 "oisu_check.m"
                  check_hlds__oisu_check__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_54_54, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsMsg_23));
#line 440 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "oisu_check.m"
                }
#line 439 "oisu_check.m"
                {
#line 439 "oisu_check.m"
                  check_hlds__oisu_check__ProcsSpec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 439 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 439 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_24, 2) = ((MR_Box) (check_hlds__oisu_check__V_54_54));
#line 439 "oisu_check.m"
                }
#line 441 "oisu_check.m"
                {
#line 441 "oisu_check.m"
                  check_hlds__oisu_check__STATE_VARIABLE_Specs_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_56_56, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsSpec_24));
#line 441 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_56_56, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4));
#line 441 "oisu_check.m"
                }
#line 431 "oisu_check.m"
              }
#line 442 "oisu_check.m"
            else
#line 442 "oisu_check.m"
              check_hlds__oisu_check__STATE_VARIABLE_Specs_56_56 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4;
#line 445 "oisu_check.m"
            /* direct tailcall eliminated */
#line 445 "oisu_check.m"
            {
#line 445 "oisu_check.m"
              MR_Word check_hlds__oisu_check__HeadVar__3__tmp_copy_3 = check_hlds__oisu_check__Types_14;
#line 445 "oisu_check.m"
              MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__oisu_check__STATE_VARIABLE_Specs_56_56;

#line 445 "oisu_check.m"
              check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 445 "oisu_check.m"
              check_hlds__oisu_check__HeadVar__3_3 = check_hlds__oisu_check__HeadVar__3__tmp_copy_3;
#line 445 "oisu_check.m"
            }
#line 445 "oisu_check.m"
            continue;
#line 424 "oisu_check.m"
          }
#line 422 "oisu_check.m"
      }
#line 422 "oisu_check.m"
      break;
#line 422 "oisu_check.m"
    }
#line 419 "oisu_check.m"
}

#line 393 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(
#line 393 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadKindFor_4,
#line 393 "oisu_check.m"
  MR_Word check_hlds__oisu_check__TailKindFors_5,
#line 393 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Pieces_6)
#line 393 "oisu_check.m"
{
#line 397 "oisu_check.m"
  {
#line 397 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 397 "oisu_check.m"
    MR_Word check_hlds__oisu_check__HeadTypeCtor_7;
#line 397 "oisu_check.m"
    MR_String check_hlds__oisu_check__HeadKind_8;
#line 397 "oisu_check.m"
    MR_Word check_hlds__oisu_check__HeadTypeSymName_9;
#line 397 "oisu_check.m"
    MR_Integer check_hlds__oisu_check__HeadTypeArity_10;
#line 397 "oisu_check.m"
    MR_Word check_hlds__oisu_check__HeadPieces0_11;
#line 397 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_16_16;
#line 397 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_17_17;
#line 397 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_18_18;
#line 397 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_19_19;
#line 397 "oisu_check.m"
    MR_String check_hlds__oisu_check__V_20_20;
#line 397 "oisu_check.m"
    MR_String check_hlds__oisu_check__V_22_22;

#line 399 "oisu_check.m"
#line 399 "oisu_check.m"
    switch (MR_tag((MR_Word) check_hlds__oisu_check__HeadKindFor_4)) {
#line 399 "oisu_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 399 "oisu_check.m"
      case (MR_Integer) 0:
#line 398 "oisu_check.m"
        {
#line 398 "oisu_check.m"
          check_hlds__oisu_check__HeadTypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadKindFor_4, (MR_Integer) 0)));
#line 398 "oisu_check.m"
          check_hlds__oisu_check__HeadKind_8 = (MR_String) "creator";
#line 398 "oisu_check.m"
        }
#line 399 "oisu_check.m"
        break;
#line 399 "oisu_check.m"
      case (MR_Integer) 1:
#line 399 "oisu_check.m"
        {
#line 399 "oisu_check.m"
          check_hlds__oisu_check__HeadTypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadKindFor_4, (MR_Integer) 0)));
#line 399 "oisu_check.m"
          check_hlds__oisu_check__HeadKind_8 = (MR_String) "mutator";
#line 399 "oisu_check.m"
        }
#line 399 "oisu_check.m"
        break;
#line 399 "oisu_check.m"
      case (MR_Integer) 2:
#line 400 "oisu_check.m"
        {
#line 400 "oisu_check.m"
          check_hlds__oisu_check__HeadTypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__oisu_check__HeadKindFor_4, (MR_Integer) 0)));
#line 400 "oisu_check.m"
          check_hlds__oisu_check__HeadKind_8 = (MR_String) "destructor";
#line 400 "oisu_check.m"
        }
#line 399 "oisu_check.m"
        break;
#line 399 "oisu_check.m"
    }
#line 402 "oisu_check.m"
    check_hlds__oisu_check__HeadTypeSymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadTypeCtor_7, (MR_Integer) 0)));
#line 402 "oisu_check.m"
    check_hlds__oisu_check__HeadTypeArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadTypeCtor_7, (MR_Integer) 1)));
#line 403 "oisu_check.m"
    {
#line 403 "oisu_check.m"
      check_hlds__oisu_check__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 403 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_17_17, 0) = ((MR_Box) (check_hlds__oisu_check__HeadTypeSymName_9));
#line 403 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_17_17, 1) = ((MR_Box) (check_hlds__oisu_check__HeadTypeArity_10));
#line 403 "oisu_check.m"
    }
#line 403 "oisu_check.m"
    {
#line 403 "oisu_check.m"
      check_hlds__oisu_check__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "oisu_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 403 "oisu_check.m"
      MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_16_16, 1) = ((MR_Box) (check_hlds__oisu_check__V_17_17));
#line 403 "oisu_check.m"
    }
#line 404 "oisu_check.m"
    {
#line 404 "oisu_check.m"
      check_hlds__oisu_check__V_22_22 = mercury__string__f_43_43_2_f_0(check_hlds__oisu_check__HeadKind_8, (MR_String) ")");
    }
#line 404 "oisu_check.m"
    {
#line 404 "oisu_check.m"
      check_hlds__oisu_check__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "(as ", check_hlds__oisu_check__V_22_22);
    }
#line 404 "oisu_check.m"
    {
#line 404 "oisu_check.m"
      check_hlds__oisu_check__V_19_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 404 "oisu_check.m"
      MR_hl_field(MR_mktag(2), check_hlds__oisu_check__V_19_19, 0) = ((MR_Box) (check_hlds__oisu_check__V_20_20));
#line 404 "oisu_check.m"
    }
#line 404 "oisu_check.m"
    {
#line 404 "oisu_check.m"
      check_hlds__oisu_check__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "oisu_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_18_18, 0) = ((MR_Box) (check_hlds__oisu_check__V_19_19));
#line 404 "oisu_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "oisu_check.m"
    }
#line 403 "oisu_check.m"
    {
#line 403 "oisu_check.m"
      check_hlds__oisu_check__HeadPieces0_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "oisu_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadPieces0_11, 0) = ((MR_Box) (check_hlds__oisu_check__V_16_16));
#line 403 "oisu_check.m"
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadPieces0_11, 1) = ((MR_Box) (check_hlds__oisu_check__V_18_18));
#line 403 "oisu_check.m"
    }
#line 409 "oisu_check.m"
    if ((check_hlds__oisu_check__TailKindFors_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 406 "oisu_check.m"
      {
#line 407 "oisu_check.m"
        {
#line 407 "oisu_check.m"
          *check_hlds__oisu_check__Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__oisu_check__HeadPieces0_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[48]));
        }
#line 406 "oisu_check.m"
      }
#line 409 "oisu_check.m"
    else
#line 410 "oisu_check.m"
      {
#line 410 "oisu_check.m"
        MR_Word check_hlds__oisu_check__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 410 "oisu_check.m"
        MR_Word check_hlds__oisu_check__HeadTailKindFor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__TailKindFors_5, (MR_Integer) 0)));
#line 410 "oisu_check.m"
        MR_Word check_hlds__oisu_check__TailTailKindFors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__TailKindFors_5, (MR_Integer) 1)));
#line 410 "oisu_check.m"
        MR_Word check_hlds__oisu_check__TailPieces_15;
#line 410 "oisu_check.m"
        MR_Word check_hlds__oisu_check__HeadPieces_37;

#line 411 "oisu_check.m"
        {
#line 411 "oisu_check.m"
          check_hlds__oisu_check__HeadPieces_37 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_39_39, check_hlds__oisu_check__HeadPieces0_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[50]));
        }
#line 412 "oisu_check.m"
        {
#line 412 "oisu_check.m"
          check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(check_hlds__oisu_check__HeadTailKindFor_13, check_hlds__oisu_check__TailTailKindFors_14, &check_hlds__oisu_check__TailPieces_15);
        }
#line 414 "oisu_check.m"
        {
#line 414 "oisu_check.m"
          *check_hlds__oisu_check__Pieces_6 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_39_39, check_hlds__oisu_check__HeadPieces_37, check_hlds__oisu_check__TailPieces_15);
        }
#line 410 "oisu_check.m"
      }
#line 397 "oisu_check.m"
  }
#line 393 "oisu_check.m"
}

#line 375 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(
#line 375 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 375 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HandledOISUTypeCtors_2,
#line 375 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__HeadVar__3_3)
#line 375 "oisu_check.m"
{
#line 378 "oisu_check.m"
  {
#line 378 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;

#line 378 "oisu_check.m"
    if ((check_hlds__oisu_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "oisu_check.m"
      *check_hlds__oisu_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 378 "oisu_check.m"
    else
#line 380 "oisu_check.m"
      {
#line 380 "oisu_check.m"
        MR_Word check_hlds__oisu_check__KindFor_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 0)));
#line 380 "oisu_check.m"
        MR_Word check_hlds__oisu_check__KindFors_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "oisu_check.m"
        MR_Word check_hlds__oisu_check__UnhandledKindForsTail_9;
#line 380 "oisu_check.m"
        MR_Word check_hlds__oisu_check__TypeCtor_10;

#line 381 "oisu_check.m"
        {
#line 381 "oisu_check.m"
          check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(check_hlds__oisu_check__KindFors_6, check_hlds__oisu_check__HandledOISUTypeCtors_2, &check_hlds__oisu_check__UnhandledKindForsTail_9);
        }
#line 384 "oisu_check.m"
#line 384 "oisu_check.m"
        switch (MR_tag((MR_Word) check_hlds__oisu_check__KindFor_5)) {
#line 384 "oisu_check.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 384 "oisu_check.m"
          case (MR_Integer) 0:
#line 383 "oisu_check.m"
            check_hlds__oisu_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__KindFor_5, (MR_Integer) 0)));
#line 384 "oisu_check.m"
            break;
#line 384 "oisu_check.m"
          case (MR_Integer) 1:
#line 384 "oisu_check.m"
            check_hlds__oisu_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__KindFor_5, (MR_Integer) 0)));
#line 384 "oisu_check.m"
            break;
#line 384 "oisu_check.m"
          case (MR_Integer) 2:
#line 385 "oisu_check.m"
            check_hlds__oisu_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__oisu_check__KindFor_5, (MR_Integer) 0)));
#line 384 "oisu_check.m"
            break;
#line 384 "oisu_check.m"
        }
#line 387 "oisu_check.m"
        {
#line 387 "oisu_check.m"
          check_hlds__oisu_check__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (check_hlds__oisu_check__TypeCtor_10)), check_hlds__oisu_check__HandledOISUTypeCtors_2);
        }
#line 389 "oisu_check.m"
        if (check_hlds__oisu_check__succeeded)
#line 388 "oisu_check.m"
          *check_hlds__oisu_check__HeadVar__3_3 = check_hlds__oisu_check__UnhandledKindForsTail_9;
#line 389 "oisu_check.m"
        else
#line 390 "oisu_check.m"
          {
#line 390 "oisu_check.m"
            MR_Word base;
#line 390 "oisu_check.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "oisu_check.m"
            *check_hlds__oisu_check__HeadVar__3_3 = base;
#line 390 "oisu_check.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__oisu_check__KindFor_5));
#line 390 "oisu_check.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__oisu_check__UnhandledKindForsTail_9));
#line 390 "oisu_check.m"
          }
#line 380 "oisu_check.m"
      }
#line 378 "oisu_check.m"
  }
#line 375 "oisu_check.m"
}

#line 354 "oisu_check.m"
static MR_bool MR_CALL 
check_hlds__oisu_check__find_kind_for_oisu_type_3_p_0(
#line 354 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 354 "oisu_check.m"
  MR_Word check_hlds__oisu_check__TypeCtor_6,
#line 354 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Kind_7)
#line 354 "oisu_check.m"
{
#line 357 "oisu_check.m"
  while (MR_TRUE)
#line 357 "oisu_check.m"
    {
#line 357 "oisu_check.m"
      /* tailcall optimized into a loop */
#line 357 "oisu_check.m"
      {
#line 357 "oisu_check.m"
        MR_bool check_hlds__oisu_check__succeeded = ((MR_tag((MR_Word) check_hlds__oisu_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 357 "oisu_check.m"
        MR_Word check_hlds__oisu_check__KindFor_4;
#line 357 "oisu_check.m"
        MR_Word check_hlds__oisu_check__KindFors_5;
#line 371 "oisu_check.m"
        MR_Word check_hlds__oisu_check__KindPrime_8;

#line 357 "oisu_check.m"
        if (check_hlds__oisu_check__succeeded)
#line 357 "oisu_check.m"
          {
#line 357 "oisu_check.m"
            check_hlds__oisu_check__KindFor_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 0)));
#line 357 "oisu_check.m"
            check_hlds__oisu_check__KindFors_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 1)));
#line 362 "oisu_check.m"
#line 362 "oisu_check.m"
            switch (MR_tag((MR_Word) check_hlds__oisu_check__KindFor_4)) {
#line 362 "oisu_check.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 362 "oisu_check.m"
              case (MR_Integer) 0:
#line 360 "oisu_check.m"
                {
#line 360 "oisu_check.m"
                  MR_Word check_hlds__oisu_check__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__KindFor_4, (MR_Integer) 0)));

#line 360 "oisu_check.m"
                  {
#line 360 "oisu_check.m"
                    check_hlds__oisu_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__oisu_check__TypeCtor_6, check_hlds__oisu_check__V_9_9);
                  }
#line 360 "oisu_check.m"
                  if (check_hlds__oisu_check__succeeded)
#line 360 "oisu_check.m"
                    {
#line 361 "oisu_check.m"
                      check_hlds__oisu_check__KindPrime_8 = (MR_Integer) 0;
#line 361 "oisu_check.m"
                      check_hlds__oisu_check__succeeded = MR_TRUE;
#line 360 "oisu_check.m"
                    }
#line 360 "oisu_check.m"
                }
#line 362 "oisu_check.m"
                break;
#line 362 "oisu_check.m"
              case (MR_Integer) 1:
#line 363 "oisu_check.m"
                {
#line 363 "oisu_check.m"
                  MR_Word check_hlds__oisu_check__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__KindFor_4, (MR_Integer) 0)));

#line 363 "oisu_check.m"
                  {
#line 363 "oisu_check.m"
                    check_hlds__oisu_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__oisu_check__TypeCtor_6, check_hlds__oisu_check__V_10_10);
                  }
#line 363 "oisu_check.m"
                  if (check_hlds__oisu_check__succeeded)
#line 363 "oisu_check.m"
                    {
#line 364 "oisu_check.m"
                      check_hlds__oisu_check__KindPrime_8 = (MR_Integer) 1;
#line 364 "oisu_check.m"
                      check_hlds__oisu_check__succeeded = MR_TRUE;
#line 363 "oisu_check.m"
                    }
#line 363 "oisu_check.m"
                }
#line 362 "oisu_check.m"
                break;
#line 362 "oisu_check.m"
              case (MR_Integer) 2:
#line 366 "oisu_check.m"
                {
#line 366 "oisu_check.m"
                  MR_Word check_hlds__oisu_check__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__oisu_check__KindFor_4, (MR_Integer) 0)));

#line 366 "oisu_check.m"
                  {
#line 366 "oisu_check.m"
                    check_hlds__oisu_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__oisu_check__TypeCtor_6, check_hlds__oisu_check__V_11_11);
                  }
#line 366 "oisu_check.m"
                  if (check_hlds__oisu_check__succeeded)
#line 366 "oisu_check.m"
                    {
#line 367 "oisu_check.m"
                      check_hlds__oisu_check__KindPrime_8 = (MR_Integer) 2;
#line 367 "oisu_check.m"
                      check_hlds__oisu_check__succeeded = MR_TRUE;
#line 366 "oisu_check.m"
                    }
#line 366 "oisu_check.m"
                }
#line 362 "oisu_check.m"
                break;
#line 362 "oisu_check.m"
            }
#line 371 "oisu_check.m"
            if (check_hlds__oisu_check__succeeded)
#line 370 "oisu_check.m"
              {
#line 370 "oisu_check.m"
                *check_hlds__oisu_check__Kind_7 = check_hlds__oisu_check__KindPrime_8;
#line 370 "oisu_check.m"
                check_hlds__oisu_check__succeeded = MR_TRUE;
#line 370 "oisu_check.m"
              }
#line 371 "oisu_check.m"
            else
#line 372 "oisu_check.m"
              {
#line 372 "oisu_check.m"
                /* direct tailcall eliminated */
#line 372 "oisu_check.m"
                {
#line 372 "oisu_check.m"
                  MR_Word check_hlds__oisu_check__HeadVar__1__tmp_copy_1 = check_hlds__oisu_check__KindFors_5;

#line 372 "oisu_check.m"
                  check_hlds__oisu_check__HeadVar__1_1 = check_hlds__oisu_check__HeadVar__1__tmp_copy_1;
#line 372 "oisu_check.m"
                }
#line 372 "oisu_check.m"
                continue;
#line 372 "oisu_check.m"
              }
#line 357 "oisu_check.m"
          }
#line 357 "oisu_check.m"
        return check_hlds__oisu_check__succeeded;
#line 357 "oisu_check.m"
      }
#line 357 "oisu_check.m"
      break;
#line 357 "oisu_check.m"
    }
#line 354 "oisu_check.m"
}

#line 182 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_arg_oisu_types_9_p_0(
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__PredInfo_2,
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__KindFors_3,
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__4_4,
#line 182 "oisu_check.m"
  MR_Integer check_hlds__oisu_check__HeadVar__5_5,
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6,
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__7_7,
#line 182 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8,
#line 182 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_9)
#line 182 "oisu_check.m"
{
#line 188 "oisu_check.m"
  while (MR_TRUE)
#line 188 "oisu_check.m"
    {
#line 188 "oisu_check.m"
      /* tailcall optimized into a loop */
#line 188 "oisu_check.m"
      {
#line 188 "oisu_check.m"
        MR_bool check_hlds__oisu_check__succeeded;

#line 188 "oisu_check.m"
        if ((check_hlds__oisu_check__HeadVar__7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "oisu_check.m"
          {
#line 334 "oisu_check.m"
            MR_Word check_hlds__oisu_check__UnhandledKindFors_321;

#line 335 "oisu_check.m"
            {
#line 335 "oisu_check.m"
              check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(check_hlds__oisu_check__KindFors_3, check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6, &check_hlds__oisu_check__UnhandledKindFors_321);
            }
#line 339 "oisu_check.m"
            if ((check_hlds__oisu_check__UnhandledKindFors_321 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "oisu_check.m"
              *check_hlds__oisu_check__STATE_VARIABLE_Specs_9 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8;
#line 339 "oisu_check.m"
            else
#line 340 "oisu_check.m"
              {
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__TypeCtorInfo_362_362;
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__HeadUnhandledKindFor_322 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__UnhandledKindFors_321, (MR_Integer) 0)));
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__TailUnhandledKindFors_323 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__UnhandledKindFors_321, (MR_Integer) 1)));
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__UnhandledPieces_324;
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__PredDesc_325;
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__Pieces_326;
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__Context_327;
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__Msg_328;
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__Spec_329;
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_334_334;
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_345_345;
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_346_346;
#line 340 "oisu_check.m"
                MR_Word check_hlds__oisu_check__V_350_350;

#line 341 "oisu_check.m"
                {
#line 341 "oisu_check.m"
                  check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(check_hlds__oisu_check__HeadUnhandledKindFor_322, check_hlds__oisu_check__TailUnhandledKindFors_323, &check_hlds__oisu_check__UnhandledPieces_324);
                }
#line 343 "oisu_check.m"
                {
#line 343 "oisu_check.m"
                  check_hlds__oisu_check__PredDesc_325 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                }
#line 2038 "check_hlds.oisu_check.c"
                check_hlds__oisu_check__TypeCtorInfo_362_362 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 347 "oisu_check.m"
                {
#line 347 "oisu_check.m"
                  check_hlds__oisu_check__V_334_334 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_362_362, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[19]), check_hlds__oisu_check__UnhandledPieces_324);
                }
#line 345 "oisu_check.m"
                {
#line 345 "oisu_check.m"
                  check_hlds__oisu_check__Pieces_326 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_362_362, check_hlds__oisu_check__PredDesc_325, check_hlds__oisu_check__V_334_334);
                }
#line 348 "oisu_check.m"
                {
#line 348 "oisu_check.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_327);
                }
#line 349 "oisu_check.m"
                {
#line 349 "oisu_check.m"
                  check_hlds__oisu_check__V_346_346 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 349 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_346_346, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_326));
#line 349 "oisu_check.m"
                }
#line 349 "oisu_check.m"
                {
#line 349 "oisu_check.m"
                  check_hlds__oisu_check__V_345_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_345_345, 0) = ((MR_Box) (check_hlds__oisu_check__V_346_346));
#line 349 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_345_345, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "oisu_check.m"
                }
#line 349 "oisu_check.m"
                {
#line 349 "oisu_check.m"
                  check_hlds__oisu_check__Msg_328 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_328, 0) = ((MR_Box) (check_hlds__oisu_check__Context_327));
#line 349 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_328, 1) = ((MR_Box) (check_hlds__oisu_check__V_345_345));
#line 349 "oisu_check.m"
                }
#line 350 "oisu_check.m"
                {
#line 350 "oisu_check.m"
                  check_hlds__oisu_check__V_350_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_350_350, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_328));
#line 350 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_350_350, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "oisu_check.m"
                }
#line 350 "oisu_check.m"
                {
#line 350 "oisu_check.m"
                  check_hlds__oisu_check__Spec_329 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 350 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_329, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_329, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 350 "oisu_check.m"
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_329, 2) = ((MR_Box) (check_hlds__oisu_check__V_350_350));
#line 350 "oisu_check.m"
                }
#line 351 "oisu_check.m"
                {
#line 351 "oisu_check.m"
                  MR_Word base;
#line 351 "oisu_check.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "oisu_check.m"
                  *check_hlds__oisu_check__STATE_VARIABLE_Specs_9 = base;
#line 351 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_329));
#line 351 "oisu_check.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 351 "oisu_check.m"
                }
#line 340 "oisu_check.m"
              }
#line 334 "oisu_check.m"
          }
#line 188 "oisu_check.m"
        else
#line 188 "oisu_check.m"
          {
#line 188 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypeMode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__7_7, (MR_Integer) 0)));
#line 188 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypesModes_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__7_7, (MR_Integer) 1)));
#line 329 "oisu_check.m"
            MR_Word check_hlds__oisu_check__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__TypeMode_16, (MR_Integer) 0)));
#line 329 "oisu_check.m"
            MR_Word check_hlds__oisu_check__Mode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__TypeMode_16, (MR_Integer) 1)));
#line 329 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypeCtor_21;
#line 329 "oisu_check.m"
            MR_Word check_hlds__oisu_check__ArgTypes_22;
#line 190 "oisu_check.m"
            MR_Word check_hlds__oisu_check__TypeCtorInfo_353_353;

#line 191 "oisu_check.m"
            {
#line 191 "oisu_check.m"
              check_hlds__oisu_check__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__oisu_check__Type_19, &check_hlds__oisu_check__TypeCtor_21, &check_hlds__oisu_check__ArgTypes_22);
            }
#line 190 "oisu_check.m"
            if (check_hlds__oisu_check__succeeded)
#line 190 "oisu_check.m"
              {
#line 2151 "check_hlds.oisu_check.c"
                check_hlds__oisu_check__TypeCtorInfo_353_353 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 192 "oisu_check.m"
                {
#line 192 "oisu_check.m"
                  check_hlds__oisu_check__succeeded = mercury__list__member_2_p_0(check_hlds__oisu_check__TypeCtorInfo_353_353, ((MR_Box) (check_hlds__oisu_check__TypeCtor_21)), check_hlds__oisu_check__HeadVar__4_4);
                }
#line 190 "oisu_check.m"
              }
#line 329 "oisu_check.m"
            if (check_hlds__oisu_check__succeeded)
#line 199 "oisu_check.m"
              {
#line 316 "oisu_check.m"
                MR_Word check_hlds__oisu_check__ThisKind_25;

#line 196 "oisu_check.m"
                if ((check_hlds__oisu_check__ArgTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "oisu_check.m"
                  {
#line 195 "oisu_check.m"
                  }
#line 196 "oisu_check.m"
                else
#line 197 "oisu_check.m"
                  {
#line 198 "oisu_check.m"
                    {
#line 198 "oisu_check.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.oisu_check", (MR_String) "predicate \140check_hlds.oisu_check.check_arg_oisu_types\'/9", (MR_String) "ArgTypes != []");
#line 198 "oisu_check.m"
                      return;
                    }
#line 197 "oisu_check.m"
                  }
#line 200 "oisu_check.m"
                {
#line 200 "oisu_check.m"
                  check_hlds__oisu_check__succeeded = check_hlds__oisu_check__find_kind_for_oisu_type_3_p_0(check_hlds__oisu_check__KindFors_3, check_hlds__oisu_check__TypeCtor_21, &check_hlds__oisu_check__ThisKind_25);
                }
#line 316 "oisu_check.m"
                if (check_hlds__oisu_check__succeeded)
#line 313 "oisu_check.m"
                  {
#line 313 "oisu_check.m"
                    MR_Integer check_hlds__oisu_check__RestArgNum_31;
#line 313 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__RestTypesModes_32;
#line 313 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82;
#line 313 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84;

#line 201 "oisu_check.m"
                    {
#line 201 "oisu_check.m"
                      check_hlds__oisu_check__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (check_hlds__oisu_check__TypeCtor_21)), check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6);
                    }
#line 214 "oisu_check.m"
                    if (check_hlds__oisu_check__succeeded)
#line 203 "oisu_check.m"
                      {
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__TypeCtorInfo_355_355;
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__DupPredDesc_26;
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__DupPieces_27;
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__DupContext_28;
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__DupMsg_29;
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__DupSpec_30;
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_59_59;
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_62_62;
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_63_63;
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_68_68;
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_75_75;
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_76_76;
#line 203 "oisu_check.m"
                        MR_Word check_hlds__oisu_check__V_80_80;

#line 202 "oisu_check.m"
                        {
#line 202 "oisu_check.m"
                          check_hlds__oisu_check__DupPredDesc_26 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                        }
#line 2245 "check_hlds.oisu_check.c"
                        check_hlds__oisu_check__TypeCtorInfo_355_355 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 204 "oisu_check.m"
                        {
#line 204 "oisu_check.m"
                          check_hlds__oisu_check__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "oisu_check.m"
                          MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 204 "oisu_check.m"
                          MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_63_63, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
#line 204 "oisu_check.m"
                        }
#line 204 "oisu_check.m"
                        {
#line 204 "oisu_check.m"
                          check_hlds__oisu_check__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_62_62, 0) = ((MR_Box) (check_hlds__oisu_check__V_63_63));
#line 204 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 204 "oisu_check.m"
                        }
#line 204 "oisu_check.m"
                        {
#line 204 "oisu_check.m"
                          check_hlds__oisu_check__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
#line 204 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_59_59, 1) = ((MR_Box) (check_hlds__oisu_check__V_62_62));
#line 204 "oisu_check.m"
                        }
#line 205 "oisu_check.m"
                        {
#line 205 "oisu_check.m"
                          check_hlds__oisu_check__V_68_68 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_355_355, check_hlds__oisu_check__DupPredDesc_26, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[21]));
                        }
#line 205 "oisu_check.m"
                        {
#line 205 "oisu_check.m"
                          check_hlds__oisu_check__DupPieces_27 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_355_355, check_hlds__oisu_check__V_59_59, check_hlds__oisu_check__V_68_68);
                        }
#line 207 "oisu_check.m"
                        {
#line 207 "oisu_check.m"
                          hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__DupContext_28);
                        }
#line 208 "oisu_check.m"
                        {
#line 208 "oisu_check.m"
                          check_hlds__oisu_check__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 208 "oisu_check.m"
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_76_76, 0) = ((MR_Box) (check_hlds__oisu_check__DupPieces_27));
#line 208 "oisu_check.m"
                        }
#line 208 "oisu_check.m"
                        {
#line 208 "oisu_check.m"
                          check_hlds__oisu_check__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_75_75, 0) = ((MR_Box) (check_hlds__oisu_check__V_76_76));
#line 208 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "oisu_check.m"
                        }
#line 208 "oisu_check.m"
                        {
#line 208 "oisu_check.m"
                          check_hlds__oisu_check__DupMsg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "oisu_check.m"
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupMsg_29, 0) = ((MR_Box) (check_hlds__oisu_check__DupContext_28));
#line 208 "oisu_check.m"
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupMsg_29, 1) = ((MR_Box) (check_hlds__oisu_check__V_75_75));
#line 208 "oisu_check.m"
                        }
#line 210 "oisu_check.m"
                        {
#line 210 "oisu_check.m"
                          check_hlds__oisu_check__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_80_80, 0) = ((MR_Box) (check_hlds__oisu_check__DupMsg_29));
#line 210 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "oisu_check.m"
                        }
#line 209 "oisu_check.m"
                        {
#line 209 "oisu_check.m"
                          check_hlds__oisu_check__DupSpec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 209 "oisu_check.m"
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupSpec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 209 "oisu_check.m"
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupSpec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 209 "oisu_check.m"
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupSpec_30, 2) = ((MR_Box) (check_hlds__oisu_check__V_80_80));
#line 209 "oisu_check.m"
                        }
#line 211 "oisu_check.m"
                        {
#line 211 "oisu_check.m"
                          check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__DupSpec_30));
#line 211 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 211 "oisu_check.m"
                        }
#line 212 "oisu_check.m"
                        check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
#line 213 "oisu_check.m"
                        check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TypesModes_17;
#line 203 "oisu_check.m"
                        check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84 = check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6;
#line 203 "oisu_check.m"
                      }
#line 214 "oisu_check.m"
                    else
#line 215 "oisu_check.m"
                      {
#line 215 "oisu_check.m"
                        {
#line 215 "oisu_check.m"
                          check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84, 0) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_21));
#line 215 "oisu_check.m"
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6));
#line 215 "oisu_check.m"
                        }
#line 235 "oisu_check.m"
#line 235 "oisu_check.m"
                        switch (check_hlds__oisu_check__ThisKind_25) {
#line 235 "oisu_check.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 235 "oisu_check.m"
                          case (MR_Integer) 0:
#line 217 "oisu_check.m"
                            {
#line 218 "oisu_check.m"
                              {
#line 218 "oisu_check.m"
                                check_hlds__oisu_check__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__Mode_20);
                              }
#line 220 "oisu_check.m"
                              if (check_hlds__oisu_check__succeeded)
#line 220 "oisu_check.m"
                                check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8;
#line 220 "oisu_check.m"
                              else
#line 222 "oisu_check.m"
                                {
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__TypeCtorInfo_356_356;
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__PredDesc_33;
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Pieces_34;
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Context_35;
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Msg_36;
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Spec_37;
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_212_212;
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_215_215;
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_216_216;
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_221_221;
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_231_231;
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_232_232;
#line 222 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_236_236;

#line 221 "oisu_check.m"
                                  {
#line 221 "oisu_check.m"
                                    check_hlds__oisu_check__PredDesc_33 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                  }
#line 2428 "check_hlds.oisu_check.c"
                                  check_hlds__oisu_check__TypeCtorInfo_356_356 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 223 "oisu_check.m"
                                  {
#line 223 "oisu_check.m"
                                    check_hlds__oisu_check__V_216_216 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "oisu_check.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_216_216, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 223 "oisu_check.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_216_216, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
#line 223 "oisu_check.m"
                                  }
#line 223 "oisu_check.m"
                                  {
#line 223 "oisu_check.m"
                                    check_hlds__oisu_check__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_215_215, 0) = ((MR_Box) (check_hlds__oisu_check__V_216_216));
#line 223 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_215_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 223 "oisu_check.m"
                                  }
#line 223 "oisu_check.m"
                                  {
#line 223 "oisu_check.m"
                                    check_hlds__oisu_check__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_212_212, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
#line 223 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_212_212, 1) = ((MR_Box) (check_hlds__oisu_check__V_215_215));
#line 223 "oisu_check.m"
                                  }
#line 224 "oisu_check.m"
                                  {
#line 224 "oisu_check.m"
                                    check_hlds__oisu_check__V_221_221 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_356_356, check_hlds__oisu_check__PredDesc_33, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[25]));
                                  }
#line 224 "oisu_check.m"
                                  {
#line 224 "oisu_check.m"
                                    check_hlds__oisu_check__Pieces_34 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_356_356, check_hlds__oisu_check__V_212_212, check_hlds__oisu_check__V_221_221);
                                  }
#line 227 "oisu_check.m"
                                  {
#line 227 "oisu_check.m"
                                    hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_35);
                                  }
#line 228 "oisu_check.m"
                                  {
#line 228 "oisu_check.m"
                                    check_hlds__oisu_check__V_232_232 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 228 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_232_232, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_34));
#line 228 "oisu_check.m"
                                  }
#line 228 "oisu_check.m"
                                  {
#line 228 "oisu_check.m"
                                    check_hlds__oisu_check__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_231_231, 0) = ((MR_Box) (check_hlds__oisu_check__V_232_232));
#line 228 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_231_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "oisu_check.m"
                                  }
#line 228 "oisu_check.m"
                                  {
#line 228 "oisu_check.m"
                                    check_hlds__oisu_check__Msg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_36, 0) = ((MR_Box) (check_hlds__oisu_check__Context_35));
#line 228 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_36, 1) = ((MR_Box) (check_hlds__oisu_check__V_231_231));
#line 228 "oisu_check.m"
                                  }
#line 230 "oisu_check.m"
                                  {
#line 230 "oisu_check.m"
                                    check_hlds__oisu_check__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_236_236, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_36));
#line 230 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_236_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "oisu_check.m"
                                  }
#line 229 "oisu_check.m"
                                  {
#line 229 "oisu_check.m"
                                    check_hlds__oisu_check__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 229 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 229 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_37, 2) = ((MR_Box) (check_hlds__oisu_check__V_236_236));
#line 229 "oisu_check.m"
                                  }
#line 231 "oisu_check.m"
                                  {
#line 231 "oisu_check.m"
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_37));
#line 231 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 231 "oisu_check.m"
                                  }
#line 222 "oisu_check.m"
                                }
#line 233 "oisu_check.m"
                              check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
#line 234 "oisu_check.m"
                              check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TypesModes_17;
#line 217 "oisu_check.m"
                            }
#line 235 "oisu_check.m"
                            break;
#line 235 "oisu_check.m"
                          case (MR_Integer) 2:
#line 294 "oisu_check.m"
                            {
#line 295 "oisu_check.m"
                              {
#line 295 "oisu_check.m"
                                check_hlds__oisu_check__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__Mode_20);
                              }
#line 297 "oisu_check.m"
                              if (check_hlds__oisu_check__succeeded)
#line 297 "oisu_check.m"
                                check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8;
#line 297 "oisu_check.m"
                              else
#line 299 "oisu_check.m"
                                {
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__TypeCtorInfo_360_360;
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_86_86;
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_89_89;
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_90_90;
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_95_95;
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_105_105;
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_106_106;
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_110_110;
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__PredDesc_290;
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Pieces_291;
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Context_292;
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Msg_293;
#line 299 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Spec_294;

#line 298 "oisu_check.m"
                                  {
#line 298 "oisu_check.m"
                                    check_hlds__oisu_check__PredDesc_290 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                  }
#line 2594 "check_hlds.oisu_check.c"
                                  check_hlds__oisu_check__TypeCtorInfo_360_360 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 300 "oisu_check.m"
                                  {
#line 300 "oisu_check.m"
                                    check_hlds__oisu_check__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "oisu_check.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 300 "oisu_check.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_90_90, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
#line 300 "oisu_check.m"
                                  }
#line 300 "oisu_check.m"
                                  {
#line 300 "oisu_check.m"
                                    check_hlds__oisu_check__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_89_89, 0) = ((MR_Box) (check_hlds__oisu_check__V_90_90));
#line 300 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 300 "oisu_check.m"
                                  }
#line 300 "oisu_check.m"
                                  {
#line 300 "oisu_check.m"
                                    check_hlds__oisu_check__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
#line 300 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_86_86, 1) = ((MR_Box) (check_hlds__oisu_check__V_89_89));
#line 300 "oisu_check.m"
                                  }
#line 301 "oisu_check.m"
                                  {
#line 301 "oisu_check.m"
                                    check_hlds__oisu_check__V_95_95 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_360_360, check_hlds__oisu_check__PredDesc_290, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[29]));
                                  }
#line 301 "oisu_check.m"
                                  {
#line 301 "oisu_check.m"
                                    check_hlds__oisu_check__Pieces_291 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_360_360, check_hlds__oisu_check__V_86_86, check_hlds__oisu_check__V_95_95);
                                  }
#line 304 "oisu_check.m"
                                  {
#line 304 "oisu_check.m"
                                    hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_292);
                                  }
#line 305 "oisu_check.m"
                                  {
#line 305 "oisu_check.m"
                                    check_hlds__oisu_check__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 305 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_106_106, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_291));
#line 305 "oisu_check.m"
                                  }
#line 305 "oisu_check.m"
                                  {
#line 305 "oisu_check.m"
                                    check_hlds__oisu_check__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_105_105, 0) = ((MR_Box) (check_hlds__oisu_check__V_106_106));
#line 305 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "oisu_check.m"
                                  }
#line 305 "oisu_check.m"
                                  {
#line 305 "oisu_check.m"
                                    check_hlds__oisu_check__Msg_293 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_293, 0) = ((MR_Box) (check_hlds__oisu_check__Context_292));
#line 305 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_293, 1) = ((MR_Box) (check_hlds__oisu_check__V_105_105));
#line 305 "oisu_check.m"
                                  }
#line 307 "oisu_check.m"
                                  {
#line 307 "oisu_check.m"
                                    check_hlds__oisu_check__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_110_110, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_293));
#line 307 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "oisu_check.m"
                                  }
#line 306 "oisu_check.m"
                                  {
#line 306 "oisu_check.m"
                                    check_hlds__oisu_check__Spec_294 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 306 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_294, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_294, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 306 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_294, 2) = ((MR_Box) (check_hlds__oisu_check__V_110_110));
#line 306 "oisu_check.m"
                                  }
#line 308 "oisu_check.m"
                                  {
#line 308 "oisu_check.m"
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_294));
#line 308 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 308 "oisu_check.m"
                                  }
#line 299 "oisu_check.m"
                                }
#line 310 "oisu_check.m"
                              check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
#line 311 "oisu_check.m"
                              check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TypesModes_17;
#line 294 "oisu_check.m"
                            }
#line 235 "oisu_check.m"
                            break;
#line 235 "oisu_check.m"
                          case (MR_Integer) 1:
#line 277 "oisu_check.m"
                            {
#line 277 "oisu_check.m"
                              MR_Word check_hlds__oisu_check__TailTypesModes_39;
#line 277 "oisu_check.m"
                              MR_Word check_hlds__oisu_check__NextMode_41;
#line 238 "oisu_check.m"
                              MR_Word check_hlds__oisu_check__NextTypeMode_38;
#line 238 "oisu_check.m"
                              MR_Word check_hlds__oisu_check__NextType_40;

#line 238 "oisu_check.m"
                              check_hlds__oisu_check__succeeded = ((MR_tag((MR_Word) check_hlds__oisu_check__TypesModes_17)) == (MR_mktag((MR_Integer) 1)));
#line 238 "oisu_check.m"
                              if (check_hlds__oisu_check__succeeded)
#line 238 "oisu_check.m"
                                {
#line 238 "oisu_check.m"
                                  check_hlds__oisu_check__NextTypeMode_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__TypesModes_17, (MR_Integer) 0)));
#line 238 "oisu_check.m"
                                  check_hlds__oisu_check__TailTypesModes_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__TypesModes_17, (MR_Integer) 1)));
#line 239 "oisu_check.m"
                                  check_hlds__oisu_check__NextType_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__NextTypeMode_38, (MR_Integer) 0)));
#line 239 "oisu_check.m"
                                  check_hlds__oisu_check__NextMode_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__NextTypeMode_38, (MR_Integer) 1)));
#line 240 "oisu_check.m"
                                  {
#line 240 "oisu_check.m"
                                    check_hlds__oisu_check__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__oisu_check__NextType_40, check_hlds__oisu_check__Type_19);
                                  }
#line 238 "oisu_check.m"
                                }
#line 277 "oisu_check.m"
                              if (check_hlds__oisu_check__succeeded)
#line 257 "oisu_check.m"
                                {
#line 257 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144;

#line 242 "oisu_check.m"
                                  {
#line 242 "oisu_check.m"
                                    check_hlds__oisu_check__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__Mode_20);
                                  }
#line 244 "oisu_check.m"
                                  if (check_hlds__oisu_check__succeeded)
#line 244 "oisu_check.m"
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8;
#line 244 "oisu_check.m"
                                  else
#line 246 "oisu_check.m"
                                    {
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__TypeCtorInfo_357_357;
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__InPredDesc_42;
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__InPieces_43;
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__InContext_44;
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__InMsg_45;
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__InSpec_46;
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_115_115;
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_118_118;
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_119_119;
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_124_124;
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_137_137;
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_138_138;
#line 246 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_142_142;

#line 245 "oisu_check.m"
                                      {
#line 245 "oisu_check.m"
                                        check_hlds__oisu_check__InPredDesc_42 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                      }
#line 2797 "check_hlds.oisu_check.c"
                                      check_hlds__oisu_check__TypeCtorInfo_357_357 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 247 "oisu_check.m"
                                      {
#line 247 "oisu_check.m"
                                        check_hlds__oisu_check__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "oisu_check.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 247 "oisu_check.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_119_119, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
#line 247 "oisu_check.m"
                                      }
#line 247 "oisu_check.m"
                                      {
#line 247 "oisu_check.m"
                                        check_hlds__oisu_check__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_118_118, 0) = ((MR_Box) (check_hlds__oisu_check__V_119_119));
#line 247 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 247 "oisu_check.m"
                                      }
#line 247 "oisu_check.m"
                                      {
#line 247 "oisu_check.m"
                                        check_hlds__oisu_check__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_115_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
#line 247 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_115_115, 1) = ((MR_Box) (check_hlds__oisu_check__V_118_118));
#line 247 "oisu_check.m"
                                      }
#line 248 "oisu_check.m"
                                      {
#line 248 "oisu_check.m"
                                        check_hlds__oisu_check__V_124_124 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_357_357, check_hlds__oisu_check__InPredDesc_42, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[33]));
                                      }
#line 248 "oisu_check.m"
                                      {
#line 248 "oisu_check.m"
                                        check_hlds__oisu_check__InPieces_43 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_357_357, check_hlds__oisu_check__V_115_115, check_hlds__oisu_check__V_124_124);
                                      }
#line 252 "oisu_check.m"
                                      {
#line 252 "oisu_check.m"
                                        hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__InContext_44);
                                      }
#line 253 "oisu_check.m"
                                      {
#line 253 "oisu_check.m"
                                        check_hlds__oisu_check__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 253 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_138_138, 0) = ((MR_Box) (check_hlds__oisu_check__InPieces_43));
#line 253 "oisu_check.m"
                                      }
#line 253 "oisu_check.m"
                                      {
#line 253 "oisu_check.m"
                                        check_hlds__oisu_check__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_137_137, 0) = ((MR_Box) (check_hlds__oisu_check__V_138_138));
#line 253 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "oisu_check.m"
                                      }
#line 253 "oisu_check.m"
                                      {
#line 253 "oisu_check.m"
                                        check_hlds__oisu_check__InMsg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InMsg_45, 0) = ((MR_Box) (check_hlds__oisu_check__InContext_44));
#line 253 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InMsg_45, 1) = ((MR_Box) (check_hlds__oisu_check__V_137_137));
#line 253 "oisu_check.m"
                                      }
#line 255 "oisu_check.m"
                                      {
#line 255 "oisu_check.m"
                                        check_hlds__oisu_check__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_142_142, 0) = ((MR_Box) (check_hlds__oisu_check__InMsg_45));
#line 255 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "oisu_check.m"
                                      }
#line 254 "oisu_check.m"
                                      {
#line 254 "oisu_check.m"
                                        check_hlds__oisu_check__InSpec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 254 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InSpec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InSpec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 254 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InSpec_46, 2) = ((MR_Box) (check_hlds__oisu_check__V_142_142));
#line 254 "oisu_check.m"
                                      }
#line 256 "oisu_check.m"
                                      {
#line 256 "oisu_check.m"
                                        check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144, 0) = ((MR_Box) (check_hlds__oisu_check__InSpec_46));
#line 256 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 256 "oisu_check.m"
                                      }
#line 246 "oisu_check.m"
                                    }
#line 258 "oisu_check.m"
                                  {
#line 258 "oisu_check.m"
                                    check_hlds__oisu_check__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__NextMode_41);
                                  }
#line 260 "oisu_check.m"
                                  if (check_hlds__oisu_check__succeeded)
#line 260 "oisu_check.m"
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144;
#line 260 "oisu_check.m"
                                  else
#line 262 "oisu_check.m"
                                    {
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__TypeCtorInfo_358_358;
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__OutPredDesc_47;
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__OutPieces_48;
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__OutContext_49;
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__OutMsg_50;
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__OutSpec_51;
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_146_146;
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_149_149;
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_150_150;
#line 262 "oisu_check.m"
                                      MR_Integer check_hlds__oisu_check__V_151_151;
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_157_157;
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_170_170;
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_171_171;
#line 262 "oisu_check.m"
                                      MR_Word check_hlds__oisu_check__V_175_175;

#line 261 "oisu_check.m"
                                      {
#line 261 "oisu_check.m"
                                        check_hlds__oisu_check__OutPredDesc_47 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                      }
#line 2953 "check_hlds.oisu_check.c"
                                      check_hlds__oisu_check__TypeCtorInfo_358_358 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 263 "oisu_check.m"
                                      check_hlds__oisu_check__V_151_151 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
#line 263 "oisu_check.m"
                                      {
#line 263 "oisu_check.m"
                                        check_hlds__oisu_check__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "oisu_check.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 263 "oisu_check.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_150_150, 1) = ((MR_Box) (check_hlds__oisu_check__V_151_151));
#line 263 "oisu_check.m"
                                      }
#line 263 "oisu_check.m"
                                      {
#line 263 "oisu_check.m"
                                        check_hlds__oisu_check__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_149_149, 0) = ((MR_Box) (check_hlds__oisu_check__V_150_150));
#line 263 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_149_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 263 "oisu_check.m"
                                      }
#line 263 "oisu_check.m"
                                      {
#line 263 "oisu_check.m"
                                        check_hlds__oisu_check__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_146_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
#line 263 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_146_146, 1) = ((MR_Box) (check_hlds__oisu_check__V_149_149));
#line 263 "oisu_check.m"
                                      }
#line 264 "oisu_check.m"
                                      {
#line 264 "oisu_check.m"
                                        check_hlds__oisu_check__V_157_157 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_358_358, check_hlds__oisu_check__OutPredDesc_47, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[36]));
                                      }
#line 264 "oisu_check.m"
                                      {
#line 264 "oisu_check.m"
                                        check_hlds__oisu_check__OutPieces_48 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_358_358, check_hlds__oisu_check__V_146_146, check_hlds__oisu_check__V_157_157);
                                      }
#line 268 "oisu_check.m"
                                      {
#line 268 "oisu_check.m"
                                        hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__OutContext_49);
                                      }
#line 270 "oisu_check.m"
                                      {
#line 270 "oisu_check.m"
                                        check_hlds__oisu_check__V_171_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 270 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_171_171, 0) = ((MR_Box) (check_hlds__oisu_check__OutPieces_48));
#line 270 "oisu_check.m"
                                      }
#line 270 "oisu_check.m"
                                      {
#line 270 "oisu_check.m"
                                        check_hlds__oisu_check__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_170_170, 0) = ((MR_Box) (check_hlds__oisu_check__V_171_171));
#line 270 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "oisu_check.m"
                                      }
#line 269 "oisu_check.m"
                                      {
#line 269 "oisu_check.m"
                                        check_hlds__oisu_check__OutMsg_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 269 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutMsg_50, 0) = ((MR_Box) (check_hlds__oisu_check__OutContext_49));
#line 269 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutMsg_50, 1) = ((MR_Box) (check_hlds__oisu_check__V_170_170));
#line 269 "oisu_check.m"
                                      }
#line 272 "oisu_check.m"
                                      {
#line 272 "oisu_check.m"
                                        check_hlds__oisu_check__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_175_175, 0) = ((MR_Box) (check_hlds__oisu_check__OutMsg_50));
#line 272 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_175_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "oisu_check.m"
                                      }
#line 271 "oisu_check.m"
                                      {
#line 271 "oisu_check.m"
                                        check_hlds__oisu_check__OutSpec_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 271 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutSpec_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutSpec_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 271 "oisu_check.m"
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutSpec_51, 2) = ((MR_Box) (check_hlds__oisu_check__V_175_175));
#line 271 "oisu_check.m"
                                      }
#line 273 "oisu_check.m"
                                      {
#line 273 "oisu_check.m"
                                        check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__OutSpec_51));
#line 273 "oisu_check.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144));
#line 273 "oisu_check.m"
                                      }
#line 262 "oisu_check.m"
                                    }
#line 275 "oisu_check.m"
                                  check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 2);
#line 276 "oisu_check.m"
                                  check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TailTypesModes_39;
#line 257 "oisu_check.m"
                                }
#line 277 "oisu_check.m"
                              else
#line 279 "oisu_check.m"
                                {
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__TypeCtorInfo_359_359;
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_180_180;
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_183_183;
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_184_184;
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_189_189;
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_202_202;
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_203_203;
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__V_207_207;
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__PredDesc_275;
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Pieces_276;
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Context_277;
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Msg_278;
#line 279 "oisu_check.m"
                                  MR_Word check_hlds__oisu_check__Spec_279;

#line 278 "oisu_check.m"
                                  {
#line 278 "oisu_check.m"
                                    check_hlds__oisu_check__PredDesc_275 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                  }
#line 3106 "check_hlds.oisu_check.c"
                                  check_hlds__oisu_check__TypeCtorInfo_359_359 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 280 "oisu_check.m"
                                  {
#line 280 "oisu_check.m"
                                    check_hlds__oisu_check__V_184_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "oisu_check.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_184_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 280 "oisu_check.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_184_184, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
#line 280 "oisu_check.m"
                                  }
#line 280 "oisu_check.m"
                                  {
#line 280 "oisu_check.m"
                                    check_hlds__oisu_check__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_183_183, 0) = ((MR_Box) (check_hlds__oisu_check__V_184_184));
#line 280 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_183_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 280 "oisu_check.m"
                                  }
#line 280 "oisu_check.m"
                                  {
#line 280 "oisu_check.m"
                                    check_hlds__oisu_check__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_180_180, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[54])));
#line 280 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_180_180, 1) = ((MR_Box) (check_hlds__oisu_check__V_183_183));
#line 280 "oisu_check.m"
                                  }
#line 281 "oisu_check.m"
                                  {
#line 281 "oisu_check.m"
                                    check_hlds__oisu_check__V_189_189 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_359_359, check_hlds__oisu_check__PredDesc_275, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[42]));
                                  }
#line 281 "oisu_check.m"
                                  {
#line 281 "oisu_check.m"
                                    check_hlds__oisu_check__Pieces_276 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_359_359, check_hlds__oisu_check__V_180_180, check_hlds__oisu_check__V_189_189);
                                  }
#line 285 "oisu_check.m"
                                  {
#line 285 "oisu_check.m"
                                    hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_277);
                                  }
#line 286 "oisu_check.m"
                                  {
#line 286 "oisu_check.m"
                                    check_hlds__oisu_check__V_203_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 286 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_203_203, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_276));
#line 286 "oisu_check.m"
                                  }
#line 286 "oisu_check.m"
                                  {
#line 286 "oisu_check.m"
                                    check_hlds__oisu_check__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_202_202, 0) = ((MR_Box) (check_hlds__oisu_check__V_203_203));
#line 286 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_202_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "oisu_check.m"
                                  }
#line 286 "oisu_check.m"
                                  {
#line 286 "oisu_check.m"
                                    check_hlds__oisu_check__Msg_278 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 286 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_278, 0) = ((MR_Box) (check_hlds__oisu_check__Context_277));
#line 286 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_278, 1) = ((MR_Box) (check_hlds__oisu_check__V_202_202));
#line 286 "oisu_check.m"
                                  }
#line 288 "oisu_check.m"
                                  {
#line 288 "oisu_check.m"
                                    check_hlds__oisu_check__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_207_207, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_278));
#line 288 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_207_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "oisu_check.m"
                                  }
#line 287 "oisu_check.m"
                                  {
#line 287 "oisu_check.m"
                                    check_hlds__oisu_check__Spec_279 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 287 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_279, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_279, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 287 "oisu_check.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_279, 2) = ((MR_Box) (check_hlds__oisu_check__V_207_207));
#line 287 "oisu_check.m"
                                  }
#line 289 "oisu_check.m"
                                  {
#line 289 "oisu_check.m"
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_279));
#line 289 "oisu_check.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 289 "oisu_check.m"
                                  }
#line 290 "oisu_check.m"
                                  check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
#line 291 "oisu_check.m"
                                  check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TypesModes_17;
#line 279 "oisu_check.m"
                                }
#line 277 "oisu_check.m"
                            }
#line 235 "oisu_check.m"
                            break;
#line 235 "oisu_check.m"
                        }
#line 215 "oisu_check.m"
                      }
#line 314 "oisu_check.m"
                    /* direct tailcall eliminated */
#line 314 "oisu_check.m"
                    {
#line 314 "oisu_check.m"
                      MR_Integer check_hlds__oisu_check__HeadVar__5__tmp_copy_5 = check_hlds__oisu_check__RestArgNum_31;
#line 314 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0__tmp_copy_6 = check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84;
#line 314 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__HeadVar__7__tmp_copy_7 = check_hlds__oisu_check__RestTypesModes_32;
#line 314 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0__tmp_copy_8 = check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82;

#line 314 "oisu_check.m"
                      check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0__tmp_copy_8;
#line 314 "oisu_check.m"
                      check_hlds__oisu_check__HeadVar__7_7 = check_hlds__oisu_check__HeadVar__7__tmp_copy_7;
#line 314 "oisu_check.m"
                      check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6 = check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0__tmp_copy_6;
#line 314 "oisu_check.m"
                      check_hlds__oisu_check__HeadVar__5_5 = check_hlds__oisu_check__HeadVar__5__tmp_copy_5;
#line 314 "oisu_check.m"
                    }
#line 314 "oisu_check.m"
                    continue;
#line 313 "oisu_check.m"
                  }
#line 316 "oisu_check.m"
                else
#line 318 "oisu_check.m"
                  {
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__TypeCtorInfo_361_361;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_242_242;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_245_245;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_246_246;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_251_251;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_261_261;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_262_262;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__V_266_266;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268;
#line 318 "oisu_check.m"
                    MR_Integer check_hlds__oisu_check__V_269_269;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__PredDesc_306;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__Pieces_307;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__Context_308;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__Msg_309;
#line 318 "oisu_check.m"
                    MR_Word check_hlds__oisu_check__Spec_310;

#line 317 "oisu_check.m"
                    {
#line 317 "oisu_check.m"
                      check_hlds__oisu_check__PredDesc_306 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                    }
#line 3294 "check_hlds.oisu_check.c"
                    check_hlds__oisu_check__TypeCtorInfo_361_361 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 319 "oisu_check.m"
                    {
#line 319 "oisu_check.m"
                      check_hlds__oisu_check__V_246_246 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "oisu_check.m"
                      MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_246_246, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 319 "oisu_check.m"
                      MR_hl_field(MR_mktag(3), check_hlds__oisu_check__V_246_246, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
#line 319 "oisu_check.m"
                    }
#line 319 "oisu_check.m"
                    {
#line 319 "oisu_check.m"
                      check_hlds__oisu_check__V_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_245_245, 0) = ((MR_Box) (check_hlds__oisu_check__V_246_246));
#line 319 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_245_245, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
#line 319 "oisu_check.m"
                    }
#line 319 "oisu_check.m"
                    {
#line 319 "oisu_check.m"
                      check_hlds__oisu_check__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_242_242, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
#line 319 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_242_242, 1) = ((MR_Box) (check_hlds__oisu_check__V_245_245));
#line 319 "oisu_check.m"
                    }
#line 320 "oisu_check.m"
                    {
#line 320 "oisu_check.m"
                      check_hlds__oisu_check__V_251_251 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_361_361, check_hlds__oisu_check__PredDesc_306, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[46]));
                    }
#line 319 "oisu_check.m"
                    {
#line 319 "oisu_check.m"
                      check_hlds__oisu_check__Pieces_307 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_361_361, check_hlds__oisu_check__V_242_242, check_hlds__oisu_check__V_251_251);
                    }
#line 322 "oisu_check.m"
                    {
#line 322 "oisu_check.m"
                      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_308);
                    }
#line 323 "oisu_check.m"
                    {
#line 323 "oisu_check.m"
                      check_hlds__oisu_check__V_262_262 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 323 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_262_262, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_307));
#line 323 "oisu_check.m"
                    }
#line 323 "oisu_check.m"
                    {
#line 323 "oisu_check.m"
                      check_hlds__oisu_check__V_261_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_261_261, 0) = ((MR_Box) (check_hlds__oisu_check__V_262_262));
#line 323 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_261_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "oisu_check.m"
                    }
#line 323 "oisu_check.m"
                    {
#line 323 "oisu_check.m"
                      check_hlds__oisu_check__Msg_309 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_309, 0) = ((MR_Box) (check_hlds__oisu_check__Context_308));
#line 323 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_309, 1) = ((MR_Box) (check_hlds__oisu_check__V_261_261));
#line 323 "oisu_check.m"
                    }
#line 324 "oisu_check.m"
                    {
#line 324 "oisu_check.m"
                      check_hlds__oisu_check__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_266_266, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_309));
#line 324 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_266_266, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "oisu_check.m"
                    }
#line 324 "oisu_check.m"
                    {
#line 324 "oisu_check.m"
                      check_hlds__oisu_check__Spec_310 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 324 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_310, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_310, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 324 "oisu_check.m"
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_310, 2) = ((MR_Box) (check_hlds__oisu_check__V_266_266));
#line 324 "oisu_check.m"
                    }
#line 325 "oisu_check.m"
                    {
#line 325 "oisu_check.m"
                      check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_310));
#line 325 "oisu_check.m"
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
#line 325 "oisu_check.m"
                    }
#line 327 "oisu_check.m"
                    check_hlds__oisu_check__V_269_269 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
#line 326 "oisu_check.m"
                    /* direct tailcall eliminated */
#line 326 "oisu_check.m"
                    {
#line 326 "oisu_check.m"
                      MR_Integer check_hlds__oisu_check__HeadVar__5__tmp_copy_5 = check_hlds__oisu_check__V_269_269;
#line 326 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__HeadVar__7__tmp_copy_7 = check_hlds__oisu_check__TypesModes_17;
#line 326 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0__tmp_copy_8 = check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268;

#line 326 "oisu_check.m"
                      check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0__tmp_copy_8;
#line 326 "oisu_check.m"
                      check_hlds__oisu_check__HeadVar__7_7 = check_hlds__oisu_check__HeadVar__7__tmp_copy_7;
#line 326 "oisu_check.m"
                      check_hlds__oisu_check__HeadVar__5_5 = check_hlds__oisu_check__HeadVar__5__tmp_copy_5;
#line 326 "oisu_check.m"
                    }
#line 326 "oisu_check.m"
                    continue;
#line 318 "oisu_check.m"
                  }
#line 199 "oisu_check.m"
              }
#line 329 "oisu_check.m"
            else
#line 330 "oisu_check.m"
              {
#line 330 "oisu_check.m"
                MR_Integer check_hlds__oisu_check__V_272_272 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);

#line 330 "oisu_check.m"
                /* direct tailcall eliminated */
#line 330 "oisu_check.m"
                {
#line 330 "oisu_check.m"
                  MR_Integer check_hlds__oisu_check__HeadVar__5__tmp_copy_5 = check_hlds__oisu_check__V_272_272;
#line 330 "oisu_check.m"
                  MR_Word check_hlds__oisu_check__HeadVar__7__tmp_copy_7 = check_hlds__oisu_check__TypesModes_17;

#line 330 "oisu_check.m"
                  check_hlds__oisu_check__HeadVar__7_7 = check_hlds__oisu_check__HeadVar__7__tmp_copy_7;
#line 330 "oisu_check.m"
                  check_hlds__oisu_check__HeadVar__5_5 = check_hlds__oisu_check__HeadVar__5__tmp_copy_5;
#line 330 "oisu_check.m"
                }
#line 330 "oisu_check.m"
                continue;
#line 330 "oisu_check.m"
              }
#line 188 "oisu_check.m"
          }
#line 188 "oisu_check.m"
      }
#line 188 "oisu_check.m"
      break;
#line 188 "oisu_check.m"
    }
#line 182 "oisu_check.m"
}

#line 112 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_local_oisu_pred_9_p_0(
#line 112 "oisu_check.m"
  MR_Word check_hlds__oisu_check__ModuleInfo_10,
#line 112 "oisu_check.m"
  MR_Word check_hlds__oisu_check__KindMap_11,
#line 112 "oisu_check.m"
  MR_Word check_hlds__oisu_check__OISUTypeCtors_12,
#line 112 "oisu_check.m"
  MR_Word check_hlds__oisu_check__Pair0_13,
#line 112 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__Pair_14,
#line 112 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_46,
#line 112 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_47,
#line 112 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48,
#line 112 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_49)
#line 112 "oisu_check.m"
{
#line 119 "oisu_check.m"
  {
#line 119 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 119 "oisu_check.m"
    MR_Word check_hlds__oisu_check__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Pair0_13, (MR_Integer) 0)));
#line 119 "oisu_check.m"
    MR_Word check_hlds__oisu_check__PredInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Pair0_13, (MR_Integer) 1)));
#line 119 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Status0_19;
#line 119 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Status_21;
#line 119 "oisu_check.m"
    MR_Word check_hlds__oisu_check__IsDefnInModule_22;
#line 124 "oisu_check.m"
    MR_Word check_hlds__oisu_check__StatusPrime_20;
#line 122 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_50_50;

#line 121 "oisu_check.m"
    {
#line 121 "oisu_check.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__Status0_19);
    }
#line 122 "oisu_check.m"
    check_hlds__oisu_check__V_50_50 = (MR_Word) check_hlds__oisu_check__Status0_19;
#line 122 "oisu_check.m"
    check_hlds__oisu_check__succeeded = ((MR_tag((MR_Word) check_hlds__oisu_check__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 122 "oisu_check.m"
    if (check_hlds__oisu_check__succeeded)
#line 122 "oisu_check.m"
      {
#line 122 "oisu_check.m"
        check_hlds__oisu_check__StatusPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_50_50, (MR_Integer) 0)));
#line 123 "oisu_check.m"
        check_hlds__oisu_check__Status_21 = (MR_Word) check_hlds__oisu_check__StatusPrime_20;
#line 122 "oisu_check.m"
      }
#line 122 "oisu_check.m"
    else
#line 125 "oisu_check.m"
      check_hlds__oisu_check__Status_21 = check_hlds__oisu_check__Status0_19;
#line 127 "oisu_check.m"
    {
#line 127 "oisu_check.m"
      check_hlds__oisu_check__IsDefnInModule_22 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__oisu_check__Status_21);
    }
#line 131 "oisu_check.m"
#line 131 "oisu_check.m"
    switch (check_hlds__oisu_check__IsDefnInModule_22) {
#line 131 "oisu_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 131 "oisu_check.m"
      case (MR_Integer) 0:
#line 129 "oisu_check.m"
        {
#line 130 "oisu_check.m"
          *check_hlds__oisu_check__Pair_14 = check_hlds__oisu_check__Pair0_13;
#line 129 "oisu_check.m"
          *check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_47 = check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_46;
#line 129 "oisu_check.m"
          *check_hlds__oisu_check__STATE_VARIABLE_Specs_49 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48;
#line 129 "oisu_check.m"
        }
#line 131 "oisu_check.m"
        break;
#line 131 "oisu_check.m"
      case (MR_Integer) 1:
#line 132 "oisu_check.m"
        {
#line 132 "oisu_check.m"
          MR_Word check_hlds__oisu_check__KindFors_23;
#line 133 "oisu_check.m"
          MR_Box check_hlds__oisu_check__conv0_KindFors_23;

#line 133 "oisu_check.m"
          {
#line 133 "oisu_check.m"
            check_hlds__oisu_check__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], check_hlds__oisu_check__KindMap_11, ((MR_Box) (check_hlds__oisu_check__PredId_17)), &check_hlds__oisu_check__conv0_KindFors_23);
          }
#line 133 "oisu_check.m"
          if (check_hlds__oisu_check__succeeded)
#line 133 "oisu_check.m"
            {
#line 133 "oisu_check.m"
              check_hlds__oisu_check__KindFors_23 = ((MR_Word) check_hlds__oisu_check__conv0_KindFors_23);
#line 133 "oisu_check.m"
              check_hlds__oisu_check__succeeded = MR_TRUE;
#line 133 "oisu_check.m"
            }
#line 132 "oisu_check.m"
          if (check_hlds__oisu_check__succeeded)
#line 134 "oisu_check.m"
            {
#line 134 "oisu_check.m"
              MR_Word check_hlds__oisu_check__TypeCtorInfo_97_97;
#line 134 "oisu_check.m"
              MR_Word check_hlds__oisu_check__TypeCtorInfo_98_98;
#line 134 "oisu_check.m"
              MR_Word check_hlds__oisu_check__ProcTable0_24;
#line 134 "oisu_check.m"
              MR_Word check_hlds__oisu_check__Procs0_25;

#line 134 "oisu_check.m"
              {
#line 134 "oisu_check.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__ProcTable0_24);
              }
#line 3596 "check_hlds.oisu_check.c"
              check_hlds__oisu_check__TypeCtorInfo_97_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 3598 "check_hlds.oisu_check.c"
              check_hlds__oisu_check__TypeCtorInfo_98_98 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 135 "oisu_check.m"
              {
#line 135 "oisu_check.m"
                mercury__map__to_assoc_list_2_p_0(check_hlds__oisu_check__TypeCtorInfo_97_97, check_hlds__oisu_check__TypeCtorInfo_98_98, check_hlds__oisu_check__ProcTable0_24, &check_hlds__oisu_check__Procs0_25);
              }
#line 139 "oisu_check.m"
              if ((check_hlds__oisu_check__Procs0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 137 "oisu_check.m"
                {
#line 138 "oisu_check.m"
                  {
#line 138 "oisu_check.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.oisu_check", (MR_String) "predicate \140check_hlds.oisu_check.check_local_oisu_pred\'/9", (MR_String) "no procedure for local predicate");
#line 138 "oisu_check.m"
                    return;
                  }
#line 137 "oisu_check.m"
                }
#line 139 "oisu_check.m"
              else
#line 139 "oisu_check.m"
                {
#line 139 "oisu_check.m"
                  MR_Word check_hlds__oisu_check__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Procs0_25, (MR_Integer) 1)));
#line 139 "oisu_check.m"
                  MR_Word check_hlds__oisu_check__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Procs0_25, (MR_Integer) 0)));

#line 139 "oisu_check.m"
                  if ((check_hlds__oisu_check__V_103_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 140 "oisu_check.m"
                    {
#line 140 "oisu_check.m"
                      MR_Integer check_hlds__oisu_check__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_104_104, (MR_Integer) 0)));
#line 140 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__ProcInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_104_104, (MR_Integer) 1)));
#line 140 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__ArgTypes_28;
#line 140 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__ArgModes_29;
#line 140 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__ArgTypesModes_30;
#line 140 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__ProcInfo_31;
#line 140 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__Procs_32;
#line 140 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__ProcTable_33;
#line 140 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__PredInfo_34;
#line 140 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__V_84_84;
#line 140 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__V_86_86;

#line 141 "oisu_check.m"
                      {
#line 141 "oisu_check.m"
                        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__ArgTypes_28);
                      }
#line 142 "oisu_check.m"
                      {
#line 142 "oisu_check.m"
                        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__oisu_check__ProcInfo0_27, &check_hlds__oisu_check__ArgModes_29);
                      }
#line 143 "oisu_check.m"
                      {
#line 143 "oisu_check.m"
                        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__oisu_check__ArgTypes_28, check_hlds__oisu_check__ArgModes_29, &check_hlds__oisu_check__ArgTypesModes_30);
                      }
#line 145 "oisu_check.m"
                      {
#line 145 "oisu_check.m"
                        check_hlds__oisu_check__check_arg_oisu_types_9_p_0(check_hlds__oisu_check__ModuleInfo_10, check_hlds__oisu_check__PredInfo0_18, check_hlds__oisu_check__KindFors_23, check_hlds__oisu_check__OISUTypeCtors_12, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__oisu_check__ArgTypesModes_30, check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48, check_hlds__oisu_check__STATE_VARIABLE_Specs_49);
                      }
#line 147 "oisu_check.m"
                      {
#line 147 "oisu_check.m"
                        hlds__hlds_pred__proc_info_set_oisu_kind_fors_3_p_0(check_hlds__oisu_check__KindFors_23, check_hlds__oisu_check__ProcInfo0_27, &check_hlds__oisu_check__ProcInfo_31);
                      }
#line 148 "oisu_check.m"
                      {
#line 148 "oisu_check.m"
                        check_hlds__oisu_check__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 148 "oisu_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_84_84, 0) = ((MR_Box) (check_hlds__oisu_check__ProcId_26));
#line 148 "oisu_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_84_84, 1) = ((MR_Box) (check_hlds__oisu_check__ProcInfo_31));
#line 148 "oisu_check.m"
                      }
#line 148 "oisu_check.m"
                      {
#line 148 "oisu_check.m"
                        check_hlds__oisu_check__Procs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "oisu_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Procs_32, 0) = ((MR_Box) (check_hlds__oisu_check__V_84_84));
#line 148 "oisu_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Procs_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "oisu_check.m"
                      }
#line 149 "oisu_check.m"
                      {
#line 149 "oisu_check.m"
                        mercury__map__from_assoc_list_2_p_0(check_hlds__oisu_check__TypeCtorInfo_97_97, check_hlds__oisu_check__TypeCtorInfo_98_98, check_hlds__oisu_check__Procs_32, &check_hlds__oisu_check__ProcTable_33);
                      }
#line 150 "oisu_check.m"
                      {
#line 150 "oisu_check.m"
                        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__oisu_check__ProcTable_33, check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__PredInfo_34);
                      }
#line 151 "oisu_check.m"
                      {
#line 151 "oisu_check.m"
                        MR_Word base;
#line 151 "oisu_check.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 151 "oisu_check.m"
                        *check_hlds__oisu_check__Pair_14 = base;
#line 151 "oisu_check.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__oisu_check__PredId_17));
#line 151 "oisu_check.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__oisu_check__PredInfo_34));
#line 151 "oisu_check.m"
                      }
#line 152 "oisu_check.m"
                      {
#line 152 "oisu_check.m"
                        check_hlds__oisu_check__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 152 "oisu_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_86_86, 0) = ((MR_Box) (check_hlds__oisu_check__PredId_17));
#line 152 "oisu_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_86_86, 1) = ((MR_Box) (check_hlds__oisu_check__ProcId_26));
#line 152 "oisu_check.m"
                      }
#line 152 "oisu_check.m"
                      {
#line 152 "oisu_check.m"
                        mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (check_hlds__oisu_check__V_86_86)), check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_46, check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_47);
                      }
#line 140 "oisu_check.m"
                    }
#line 139 "oisu_check.m"
                  else
#line 154 "oisu_check.m"
                    {
#line 154 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__PredDesc_38;
#line 154 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__ProcsPieces_39;
#line 154 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__Context_40;
#line 154 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__ProcsMsg_41;
#line 154 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__ProcsSpec_42;
#line 154 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__V_71_71;
#line 154 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__V_72_72;
#line 154 "oisu_check.m"
                      MR_Word check_hlds__oisu_check__V_76_76;

#line 155 "oisu_check.m"
                      {
#line 155 "oisu_check.m"
                        check_hlds__oisu_check__PredDesc_38 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo0_18);
                      }
#line 157 "oisu_check.m"
                      {
#line 157 "oisu_check.m"
                        check_hlds__oisu_check__ProcsPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__oisu_check__PredDesc_38, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[13]));
                      }
#line 160 "oisu_check.m"
                      {
#line 160 "oisu_check.m"
                        hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__Context_40);
                      }
#line 161 "oisu_check.m"
                      {
#line 161 "oisu_check.m"
                        check_hlds__oisu_check__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 161 "oisu_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_72_72, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsPieces_39));
#line 161 "oisu_check.m"
                      }
#line 161 "oisu_check.m"
                      {
#line 161 "oisu_check.m"
                        check_hlds__oisu_check__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "oisu_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_71_71, 0) = ((MR_Box) (check_hlds__oisu_check__V_72_72));
#line 161 "oisu_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 161 "oisu_check.m"
                      }
#line 161 "oisu_check.m"
                      {
#line 161 "oisu_check.m"
                        check_hlds__oisu_check__ProcsMsg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "oisu_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsMsg_41, 0) = ((MR_Box) (check_hlds__oisu_check__Context_40));
#line 161 "oisu_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsMsg_41, 1) = ((MR_Box) (check_hlds__oisu_check__V_71_71));
#line 161 "oisu_check.m"
                      }
#line 163 "oisu_check.m"
                      {
#line 163 "oisu_check.m"
                        check_hlds__oisu_check__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "oisu_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_76_76, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsMsg_41));
#line 163 "oisu_check.m"
                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 163 "oisu_check.m"
                      }
#line 162 "oisu_check.m"
                      {
#line 162 "oisu_check.m"
                        check_hlds__oisu_check__ProcsSpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 162 "oisu_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 162 "oisu_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 162 "oisu_check.m"
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_42, 2) = ((MR_Box) (check_hlds__oisu_check__V_76_76));
#line 162 "oisu_check.m"
                      }
#line 164 "oisu_check.m"
                      {
#line 164 "oisu_check.m"
                        MR_Word base;
#line 164 "oisu_check.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "oisu_check.m"
                        *check_hlds__oisu_check__STATE_VARIABLE_Specs_49 = base;
#line 164 "oisu_check.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsSpec_42));
#line 164 "oisu_check.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48));
#line 164 "oisu_check.m"
                      }
#line 165 "oisu_check.m"
                      *check_hlds__oisu_check__Pair_14 = check_hlds__oisu_check__Pair0_13;
#line 154 "oisu_check.m"
                      *check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_47 = check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_46;
#line 154 "oisu_check.m"
                    }
#line 139 "oisu_check.m"
                }
#line 134 "oisu_check.m"
            }
#line 132 "oisu_check.m"
          else
#line 168 "oisu_check.m"
            {
#line 168 "oisu_check.m"
              MR_Word check_hlds__oisu_check__Origin_43;
#line 169 "oisu_check.m"
              MR_Word check_hlds__oisu_check__V_44_44;
#line 169 "oisu_check.m"
              MR_Word check_hlds__oisu_check__V_45_45;

#line 168 "oisu_check.m"
              {
#line 168 "oisu_check.m"
                hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__Origin_43);
              }
#line 169 "oisu_check.m"
              check_hlds__oisu_check__succeeded = ((MR_tag((MR_Word) check_hlds__oisu_check__Origin_43)) == (MR_mktag((MR_Integer) 0)));
#line 169 "oisu_check.m"
              if (check_hlds__oisu_check__succeeded)
#line 169 "oisu_check.m"
                {
#line 169 "oisu_check.m"
                  check_hlds__oisu_check__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Origin_43, (MR_Integer) 0)));
#line 169 "oisu_check.m"
                  check_hlds__oisu_check__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Origin_43, (MR_Integer) 1)));
#line 171 "oisu_check.m"
                  *check_hlds__oisu_check__STATE_VARIABLE_Specs_49 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48;
#line 169 "oisu_check.m"
                }
#line 169 "oisu_check.m"
              else
#line 172 "oisu_check.m"
                {
#line 172 "oisu_check.m"
                  MR_Word check_hlds__oisu_check__ArgTypes_92;

#line 172 "oisu_check.m"
                  {
#line 172 "oisu_check.m"
                    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__ArgTypes_92);
                  }
#line 173 "oisu_check.m"
                  {
#line 173 "oisu_check.m"
                    check_hlds__oisu_check__check_args_have_no_oisu_types_5_p_0(check_hlds__oisu_check__PredInfo0_18, check_hlds__oisu_check__OISUTypeCtors_12, check_hlds__oisu_check__ArgTypes_92, check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48, check_hlds__oisu_check__STATE_VARIABLE_Specs_49);
                  }
#line 172 "oisu_check.m"
                }
#line 176 "oisu_check.m"
              *check_hlds__oisu_check__Pair_14 = check_hlds__oisu_check__Pair0_13;
#line 168 "oisu_check.m"
              *check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_47 = check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_46;
#line 168 "oisu_check.m"
            }
#line 132 "oisu_check.m"
        }
#line 131 "oisu_check.m"
        break;
#line 131 "oisu_check.m"
    }
#line 119 "oisu_check.m"
  }
#line 112 "oisu_check.m"
}

#line 88 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(
#line 88 "oisu_check.m"
  MR_Word check_hlds__oisu_check__TypeCtor_6,
#line 88 "oisu_check.m"
  MR_Word check_hlds__oisu_check__Kind_7,
#line 88 "oisu_check.m"
  MR_Word check_hlds__oisu_check__PredId_8,
#line 88 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13,
#line 88 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_KindMap_14)
#line 88 "oisu_check.m"
{
#line 91 "oisu_check.m"
  {
#line 91 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 91 "oisu_check.m"
    MR_Word check_hlds__oisu_check__KindFor_10;
#line 105 "oisu_check.m"
    MR_Word check_hlds__oisu_check__OldEntries_11;
#line 102 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv0_OldEntries_11;

#line 95 "oisu_check.m"
#line 95 "oisu_check.m"
    switch (check_hlds__oisu_check__Kind_7) {
#line 95 "oisu_check.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 95 "oisu_check.m"
      case (MR_Integer) 0:
#line 94 "oisu_check.m"
        {
#line 94 "oisu_check.m"
          check_hlds__oisu_check__KindFor_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 94 "oisu_check.m"
          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__KindFor_10, 0) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_6));
#line 94 "oisu_check.m"
        }
#line 95 "oisu_check.m"
        break;
#line 95 "oisu_check.m"
      case (MR_Integer) 2:
#line 100 "oisu_check.m"
        {
#line 100 "oisu_check.m"
          check_hlds__oisu_check__KindFor_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 100 "oisu_check.m"
          MR_hl_field(MR_mktag(2), check_hlds__oisu_check__KindFor_10, 0) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_6));
#line 100 "oisu_check.m"
        }
#line 95 "oisu_check.m"
        break;
#line 95 "oisu_check.m"
      case (MR_Integer) 1:
#line 97 "oisu_check.m"
        {
#line 97 "oisu_check.m"
          check_hlds__oisu_check__KindFor_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 97 "oisu_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__KindFor_10, 0) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_6));
#line 97 "oisu_check.m"
        }
#line 95 "oisu_check.m"
        break;
#line 95 "oisu_check.m"
    }
#line 102 "oisu_check.m"
    {
#line 102 "oisu_check.m"
      check_hlds__oisu_check__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13, ((MR_Box) (check_hlds__oisu_check__PredId_8)), &check_hlds__oisu_check__conv0_OldEntries_11);
    }
#line 102 "oisu_check.m"
    if (check_hlds__oisu_check__succeeded)
#line 102 "oisu_check.m"
      {
#line 102 "oisu_check.m"
        check_hlds__oisu_check__OldEntries_11 = ((MR_Word) check_hlds__oisu_check__conv0_OldEntries_11);
#line 102 "oisu_check.m"
        check_hlds__oisu_check__succeeded = MR_TRUE;
#line 102 "oisu_check.m"
      }
#line 105 "oisu_check.m"
    if (check_hlds__oisu_check__succeeded)
#line 103 "oisu_check.m"
      {
#line 103 "oisu_check.m"
        MR_Word check_hlds__oisu_check__Entries_12;

#line 103 "oisu_check.m"
        {
#line 103 "oisu_check.m"
          check_hlds__oisu_check__Entries_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "oisu_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Entries_12, 0) = ((MR_Box) (check_hlds__oisu_check__KindFor_10));
#line 103 "oisu_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Entries_12, 1) = ((MR_Box) (check_hlds__oisu_check__OldEntries_11));
#line 103 "oisu_check.m"
        }
#line 104 "oisu_check.m"
        {
#line 104 "oisu_check.m"
          mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], ((MR_Box) (check_hlds__oisu_check__PredId_8)), ((MR_Box) (check_hlds__oisu_check__Entries_12)), check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13, check_hlds__oisu_check__STATE_VARIABLE_KindMap_14);
        }
#line 103 "oisu_check.m"
      }
#line 105 "oisu_check.m"
    else
#line 106 "oisu_check.m"
      {
#line 106 "oisu_check.m"
        MR_Word check_hlds__oisu_check__Entries_18;

#line 106 "oisu_check.m"
        {
#line 106 "oisu_check.m"
          check_hlds__oisu_check__Entries_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "oisu_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Entries_18, 0) = ((MR_Box) (check_hlds__oisu_check__KindFor_10));
#line 106 "oisu_check.m"
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Entries_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "oisu_check.m"
        }
#line 107 "oisu_check.m"
        {
#line 107 "oisu_check.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], ((MR_Box) (check_hlds__oisu_check__PredId_8)), ((MR_Box) (check_hlds__oisu_check__Entries_18)), check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13, check_hlds__oisu_check__STATE_VARIABLE_KindMap_14);
        }
#line 106 "oisu_check.m"
      }
#line 91 "oisu_check.m"
  }
#line 88 "oisu_check.m"
}

#line 78 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_3(
#line 78 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 78 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 78 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 78 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3)
#line 78 "oisu_check.m"
{
#line 78 "oisu_check.m"
  {
#line 78 "oisu_check.m"
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
#line 78 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv4_STATE_VARIABLE_KindMap_14;

#line 78 "oisu_check.m"
    {
#line 78 "oisu_check.m"
      check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), &check_hlds__oisu_check__conv4_STATE_VARIABLE_KindMap_14);
    }
#line 78 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_3 = ((MR_Box) (check_hlds__oisu_check__conv4_STATE_VARIABLE_KindMap_14));
#line 78 "oisu_check.m"
  }
#line 78 "oisu_check.m"
}

#line 76 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_2(
#line 76 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 76 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 76 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 76 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3)
#line 76 "oisu_check.m"
{
#line 76 "oisu_check.m"
  {
#line 76 "oisu_check.m"
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
#line 76 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv2_STATE_VARIABLE_KindMap_14;

#line 76 "oisu_check.m"
    {
#line 76 "oisu_check.m"
      check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), &check_hlds__oisu_check__conv2_STATE_VARIABLE_KindMap_14);
    }
#line 76 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_3 = ((MR_Box) (check_hlds__oisu_check__conv2_STATE_VARIABLE_KindMap_14));
#line 76 "oisu_check.m"
  }
#line 76 "oisu_check.m"
}

#line 74 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_1(
#line 74 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 74 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 74 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 74 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3)
#line 74 "oisu_check.m"
{
#line 74 "oisu_check.m"
  {
#line 74 "oisu_check.m"
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
#line 74 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_14;

#line 74 "oisu_check.m"
    {
#line 74 "oisu_check.m"
      check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), &check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_14);
    }
#line 74 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_3 = ((MR_Box) (check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_14));
#line 74 "oisu_check.m"
  }
#line 74 "oisu_check.m"
}

#line 69 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0(
#line 69 "oisu_check.m"
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
#line 69 "oisu_check.m"
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_10,
#line 69 "oisu_check.m"
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_KindMap_11)
#line 69 "oisu_check.m"
{
#line 72 "oisu_check.m"
  {
#line 72 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 72 "oisu_check.m"
    MR_Word check_hlds__oisu_check__TypeCtorInfo_24_24;
#line 72 "oisu_check.m"
    MR_Word check_hlds__oisu_check__TypeInfo_25_25;
#line 72 "oisu_check.m"
    MR_Word check_hlds__oisu_check__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "oisu_check.m"
    MR_Word check_hlds__oisu_check__OISUPreds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "oisu_check.m"
    MR_Word check_hlds__oisu_check__CreatorPreds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OISUPreds_5, (MR_Integer) 0)));
#line 72 "oisu_check.m"
    MR_Word check_hlds__oisu_check__MutatorPreds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OISUPreds_5, (MR_Integer) 1)));
#line 72 "oisu_check.m"
    MR_Word check_hlds__oisu_check__DestructorPreds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OISUPreds_5, (MR_Integer) 2)));
#line 72 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_12_12;
#line 72 "oisu_check.m"
    MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_13_13;
#line 72 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_15_15;
#line 72 "oisu_check.m"
    MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_16_16;
#line 72 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_18_18;
#line 74 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv1_STATE_VARIABLE_KindMap_13_13;
#line 76 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv3_STATE_VARIABLE_KindMap_16_16;
#line 78 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv5_STATE_VARIABLE_KindMap_11;

#line 74 "oisu_check.m"
    {
#line 74 "oisu_check.m"
      check_hlds__oisu_check__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 74 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_12_12, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_5[0]));
#line 74 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_12_12, 1) = ((MR_Box) (check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_1));
#line 74 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 74 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_12_12, 3) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_4));
#line 74 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_12_12, 4) = ((MR_Box) ((MR_Integer) 0));
#line 74 "oisu_check.m"
    }
#line 4211 "check_hlds.oisu_check.c"
    check_hlds__oisu_check__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 4213 "check_hlds.oisu_check.c"
    check_hlds__oisu_check__TypeInfo_25_25 = (MR_Word) &check_hlds__oisu_check_scalar_common_2[1];
#line 74 "oisu_check.m"
    {
#line 74 "oisu_check.m"
      mercury__list__foldl_4_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeInfo_25_25, check_hlds__oisu_check__V_12_12, check_hlds__oisu_check__CreatorPreds_7, ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_10)), &check_hlds__oisu_check__conv1_STATE_VARIABLE_KindMap_13_13);
    }
#line 74 "oisu_check.m"
    check_hlds__oisu_check__STATE_VARIABLE_KindMap_13_13 = ((MR_Word) check_hlds__oisu_check__conv1_STATE_VARIABLE_KindMap_13_13);
#line 76 "oisu_check.m"
    {
#line 76 "oisu_check.m"
      check_hlds__oisu_check__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 76 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_15_15, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_5[0]));
#line 76 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_15_15, 1) = ((MR_Box) (check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_2));
#line 76 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 76 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_15_15, 3) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_4));
#line 76 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_15_15, 4) = ((MR_Box) ((MR_Integer) 1));
#line 76 "oisu_check.m"
    }
#line 76 "oisu_check.m"
    {
#line 76 "oisu_check.m"
      mercury__list__foldl_4_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeInfo_25_25, check_hlds__oisu_check__V_15_15, check_hlds__oisu_check__MutatorPreds_8, ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_KindMap_13_13)), &check_hlds__oisu_check__conv3_STATE_VARIABLE_KindMap_16_16);
    }
#line 76 "oisu_check.m"
    check_hlds__oisu_check__STATE_VARIABLE_KindMap_16_16 = ((MR_Word) check_hlds__oisu_check__conv3_STATE_VARIABLE_KindMap_16_16);
#line 78 "oisu_check.m"
    {
#line 78 "oisu_check.m"
      check_hlds__oisu_check__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 78 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_18_18, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_5[0]));
#line 78 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_18_18, 1) = ((MR_Box) (check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_3));
#line 78 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 78 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_18_18, 3) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_4));
#line 78 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_18_18, 4) = ((MR_Box) ((MR_Integer) 2));
#line 78 "oisu_check.m"
    }
#line 78 "oisu_check.m"
    {
#line 78 "oisu_check.m"
      mercury__list__foldl_4_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeInfo_25_25, check_hlds__oisu_check__V_18_18, check_hlds__oisu_check__DestructorPreds_9, ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_KindMap_16_16)), &check_hlds__oisu_check__conv5_STATE_VARIABLE_KindMap_11);
    }
#line 78 "oisu_check.m"
    *check_hlds__oisu_check__STATE_VARIABLE_KindMap_11 = ((MR_Word) check_hlds__oisu_check__conv5_STATE_VARIABLE_KindMap_11);
#line 72 "oisu_check.m"
  }
#line 69 "oisu_check.m"
}

#line 61 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_2(
#line 61 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 61 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 61 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_2,
#line 61 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_3,
#line 61 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_4,
#line 61 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_5,
#line 61 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_6)
#line 61 "oisu_check.m"
{
#line 61 "oisu_check.m"
  {
#line 61 "oisu_check.m"
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
#line 61 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv4_Pair_14;
#line 61 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv3_STATE_VARIABLE_OISUProcs_47;
#line 61 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv2_STATE_VARIABLE_Specs_49;

#line 61 "oisu_check.m"
    {
#line 61 "oisu_check.m"
      check_hlds__oisu_check__check_local_oisu_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__oisu_check__wrapper_arg_1), &check_hlds__oisu_check__conv4_Pair_14, ((MR_Word) check_hlds__oisu_check__wrapper_arg_3), &check_hlds__oisu_check__conv3_STATE_VARIABLE_OISUProcs_47, ((MR_Word) check_hlds__oisu_check__wrapper_arg_5), &check_hlds__oisu_check__conv2_STATE_VARIABLE_Specs_49);
    }
#line 61 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_2 = ((MR_Box) (check_hlds__oisu_check__conv4_Pair_14));
#line 61 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_4 = ((MR_Box) (check_hlds__oisu_check__conv3_STATE_VARIABLE_OISUProcs_47));
#line 61 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_6 = ((MR_Box) (check_hlds__oisu_check__conv2_STATE_VARIABLE_Specs_49));
#line 61 "oisu_check.m"
  }
#line 61 "oisu_check.m"
}

#line 56 "oisu_check.m"
static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_1(
#line 56 "oisu_check.m"
  MR_Box check_hlds__oisu_check__closure_arg,
#line 56 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
#line 56 "oisu_check.m"
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
#line 56 "oisu_check.m"
  MR_Box * check_hlds__oisu_check__wrapper_arg_3)
#line 56 "oisu_check.m"
{
#line 56 "oisu_check.m"
  {
#line 56 "oisu_check.m"
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
#line 56 "oisu_check.m"
    MR_Word check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_11;

#line 56 "oisu_check.m"
    {
#line 56 "oisu_check.m"
      check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0(((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), &check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_11);
    }
#line 56 "oisu_check.m"
    *check_hlds__oisu_check__wrapper_arg_3 = ((MR_Box) (check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_11));
#line 56 "oisu_check.m"
  }
#line 56 "oisu_check.m"
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
#line 54 "oisu_check.m"
  {
#line 54 "oisu_check.m"
    MR_bool check_hlds__oisu_check__succeeded;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__TypeCtorInfo_31_31;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__TypeInfo_41_41;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__KindMap0_8;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__KindMap_9;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__PredTable0_10;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Preds0_11;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__OISUTypeCtors_12;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__Preds_13;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__OISUProcs_14;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__PredTable_15;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_19_19;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__V_20_20;
#line 54 "oisu_check.m"
    MR_Word check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_22_22;
#line 56 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv1_KindMap_9;
#line 60 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv6_OISUProcs_14;
#line 60 "oisu_check.m"
    MR_Box check_hlds__oisu_check__conv5_Specs_7;

#line 55 "oisu_check.m"
    {
#line 55 "oisu_check.m"
      mercury__map__init_1_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], &check_hlds__oisu_check__KindMap0_8);
    }
#line 56 "oisu_check.m"
    {
#line 56 "oisu_check.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__oisu_check_scalar_common_2[0], (MR_Word) &check_hlds__oisu_check_scalar_common_2[1], (MR_Word) &check_hlds__oisu_check_scalar_common_2[3], check_hlds__oisu_check__OISUPairs_5, ((MR_Box) (check_hlds__oisu_check__KindMap0_8)), &check_hlds__oisu_check__conv1_KindMap_9);
    }
#line 56 "oisu_check.m"
    check_hlds__oisu_check__KindMap_9 = ((MR_Word) check_hlds__oisu_check__conv1_KindMap_9);
#line 57 "oisu_check.m"
    {
#line 57 "oisu_check.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__oisu_check__PredTable0_10);
    }
#line 4420 "check_hlds.oisu_check.c"
    check_hlds__oisu_check__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 58 "oisu_check.m"
    {
#line 58 "oisu_check.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeCtorInfo_31_31, check_hlds__oisu_check__PredTable0_10, &check_hlds__oisu_check__Preds0_11);
    }
#line 59 "oisu_check.m"
    {
#line 59 "oisu_check.m"
      mercury__assoc_list__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0, check_hlds__oisu_check__OISUPairs_5, &check_hlds__oisu_check__OISUTypeCtors_12);
    }
#line 61 "oisu_check.m"
    {
#line 61 "oisu_check.m"
      check_hlds__oisu_check__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 61 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_19_19, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_4[0]));
#line 61 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_19_19, 1) = ((MR_Box) (check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_2));
#line 61 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 61 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_19_19, 3) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_0_16));
#line 61 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_19_19, 4) = ((MR_Box) (check_hlds__oisu_check__KindMap_9));
#line 61 "oisu_check.m"
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__V_19_19, 5) = ((MR_Box) (check_hlds__oisu_check__OISUTypeCtors_12));
#line 61 "oisu_check.m"
    }
#line 62 "oisu_check.m"
    {
#line 62 "oisu_check.m"
      check_hlds__oisu_check__V_20_20 = mercury__set__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
    }
#line 4455 "check_hlds.oisu_check.c"
    check_hlds__oisu_check__TypeInfo_41_41 = (MR_Word) &check_hlds__oisu_check_scalar_common_2[2];
#line 60 "oisu_check.m"
    {
#line 60 "oisu_check.m"
      mercury__list__map_foldl2_7_p_0(check_hlds__oisu_check__TypeInfo_41_41, check_hlds__oisu_check__TypeInfo_41_41, (MR_Word) &check_hlds__oisu_check_scalar_common_1[1], (MR_Word) &check_hlds__oisu_check_scalar_common_1[2], check_hlds__oisu_check__V_19_19, check_hlds__oisu_check__Preds0_11, &check_hlds__oisu_check__Preds_13, ((MR_Box) (check_hlds__oisu_check__V_20_20)), &check_hlds__oisu_check__conv6_OISUProcs_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__oisu_check__conv5_Specs_7);
    }
#line 60 "oisu_check.m"
    check_hlds__oisu_check__OISUProcs_14 = ((MR_Word) check_hlds__oisu_check__conv6_OISUProcs_14);
#line 60 "oisu_check.m"
    *check_hlds__oisu_check__Specs_7 = ((MR_Word) check_hlds__oisu_check__conv5_Specs_7);
#line 63 "oisu_check.m"
    {
#line 63 "oisu_check.m"
      mercury__map__from_assoc_list_2_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeCtorInfo_31_31, check_hlds__oisu_check__Preds_13, &check_hlds__oisu_check__PredTable_15);
    }
#line 64 "oisu_check.m"
    {
#line 64 "oisu_check.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__oisu_check__PredTable_15, check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_22_22);
    }
#line 65 "oisu_check.m"
    {
#line 65 "oisu_check.m"
      hlds__hlds_module__module_info_set_oisu_procs_3_p_0(check_hlds__oisu_check__OISUProcs_14, check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_17);
    }
#line 54 "oisu_check.m"
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
