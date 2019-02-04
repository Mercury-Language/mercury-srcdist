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
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__oisu_check__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0;

static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0;

static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1;

static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2;

static const MR_EnumFunctorDescPtr check_hlds__oisu_check__check_hlds__oisu_check__enum_value_ordered_oisu_pred_kind_0[3];

static const MR_EnumFunctorDescPtr check_hlds__oisu_check__check_hlds__oisu_check__enum_name_ordered_oisu_pred_kind_0[3];

static const MR_Integer check_hlds__oisu_check__check_hlds__oisu_check__functor_number_map_oisu_pred_kind_0[3];

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0(
  MR_Word * check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
  MR_Word check_hlds__oisu_check__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0(
  MR_Word check_hlds__oisu_check__HeadVar__2_1,
  MR_Word check_hlds__oisu_check__HeadVar__2_2);

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0(
  MR_Word * check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
  MR_Word check_hlds__oisu_check__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0(
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__HeadVar__2_2);

static void MR_CALL 
check_hlds__oisu_check__check_local_oisu_pred_9_p_0(
  MR_Word check_hlds__oisu_check__ModuleInfo_10,
  MR_Word check_hlds__oisu_check__KindMap_11,
  MR_Word check_hlds__oisu_check__OISUTypeCtors_12,
  MR_Word check_hlds__oisu_check__Pair0_13,
  MR_Word * check_hlds__oisu_check__Pair_14,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_46,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_47,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_49);

static void MR_CALL 
check_hlds__oisu_check__check_args_have_no_oisu_types_5_p_0(
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
  MR_Word check_hlds__oisu_check__HeadVar__3_3,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__oisu_check__check_arg_oisu_types_9_p_0(
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__PredInfo_2,
  MR_Word check_hlds__oisu_check__KindFors_3,
  MR_Word check_hlds__oisu_check__HeadVar__4_4,
  MR_Integer check_hlds__oisu_check__HeadVar__5_5,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6,
  MR_Word check_hlds__oisu_check__HeadVar__7_7,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_9);

static void MR_CALL 
check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(
  MR_Word check_hlds__oisu_check__HeadKindFor_4,
  MR_Word check_hlds__oisu_check__TailKindFors_5,
  MR_Word * check_hlds__oisu_check__Pieces_6);

static void MR_CALL 
check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__HandledOISUTypeCtors_2,
  MR_Word * check_hlds__oisu_check__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__oisu_check__find_kind_for_oisu_type_3_p_0(
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__TypeCtor_6,
  MR_Word * check_hlds__oisu_check__Kind_7);

static void MR_CALL 
check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(
  MR_Word check_hlds__oisu_check__TypeCtor_6,
  MR_Word check_hlds__oisu_check__Kind_7,
  MR_Word check_hlds__oisu_check__PredId_8,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_KindMap_14);

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_3(
  MR_Box check_hlds__oisu_check__closure_arg,
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
  MR_Box * check_hlds__oisu_check__wrapper_arg_3);

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_2(
  MR_Box check_hlds__oisu_check__closure_arg,
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
  MR_Box * check_hlds__oisu_check__wrapper_arg_3);

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_1(
  MR_Box check_hlds__oisu_check__closure_arg,
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
  MR_Box * check_hlds__oisu_check__wrapper_arg_3);

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0(
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_10,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_KindMap_11);

static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_2(
  MR_Box check_hlds__oisu_check__closure_arg,
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box * check_hlds__oisu_check__wrapper_arg_2,
  MR_Box check_hlds__oisu_check__wrapper_arg_3,
  MR_Box * check_hlds__oisu_check__wrapper_arg_4,
  MR_Box check_hlds__oisu_check__wrapper_arg_5,
  MR_Box * check_hlds__oisu_check__wrapper_arg_6);

static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_1(
  MR_Box check_hlds__oisu_check__closure_arg,
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
  MR_Box * check_hlds__oisu_check__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0_10001(
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2);

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0_10001(
  MR_Box * check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
  MR_Box check_hlds__oisu_check__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0_10001(
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2);

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0_10001(
  MR_Box * check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
  MR_Box check_hlds__oisu_check__wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
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



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__oisu_check__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__oisu_check__check_hlds__oisu_check__type_ctor_info_oisu_kind_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0 = {
  (MR_String) "oisu_creator",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1 = {
  (MR_String) "oisu_mutator",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2 = {
  (MR_String) "oisu_destructor",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr check_hlds__oisu_check__check_hlds__oisu_check__enum_value_ordered_oisu_pred_kind_0[3] = {
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0,
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1,
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__oisu_check__check_hlds__oisu_check__enum_name_ordered_oisu_pred_kind_0[3] = {
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0,
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2,
  &check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1
};

static const MR_Integer check_hlds__oisu_check__check_hlds__oisu_check__functor_number_map_oisu_pred_kind_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__oisu_check__check_hlds__oisu_check__type_ctor_info_oisu_pred_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0(
  MR_Word * check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
  MR_Word check_hlds__oisu_check__HeadVar__3_3)
{
  {
    MR_Integer check_hlds__oisu_check__Cast_HeadVar1_4 = (MR_Integer) check_hlds__oisu_check__HeadVar__2_2;
    MR_Integer check_hlds__oisu_check__Cast_HeadVar2_5 = (MR_Integer) check_hlds__oisu_check__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__Cast_HeadVar1_4, check_hlds__oisu_check__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0(
  MR_Word check_hlds__oisu_check__HeadVar__2_1,
  MR_Word check_hlds__oisu_check__HeadVar__2_2)
{
  {
    MR_bool check_hlds__oisu_check__succeeded = (check_hlds__oisu_check__HeadVar__2_1 == check_hlds__oisu_check__HeadVar__2_2);

    return check_hlds__oisu_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0(
  MR_Word * check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
  MR_Word check_hlds__oisu_check__HeadVar__3_3)
{
  {
    MR_Word check_hlds__oisu_check__Cast_HeadVar1_4 = check_hlds__oisu_check__HeadVar__2_2;
    MR_Word check_hlds__oisu_check__Cast_HeadVar2_5 = check_hlds__oisu_check__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__oisu_check_scalar_common_2[1], check_hlds__oisu_check__HeadVar__1_1, ((MR_Box) (check_hlds__oisu_check__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__oisu_check__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0(
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__HeadVar__2_2)
{
  {
    MR_bool check_hlds__oisu_check__succeeded;
    MR_Word check_hlds__oisu_check__Cast_HeadVar1_3 = check_hlds__oisu_check__HeadVar__1_1;
    MR_Word check_hlds__oisu_check__Cast_HeadVar2_4 = check_hlds__oisu_check__HeadVar__2_2;

    {
      check_hlds__oisu_check__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__oisu_check_scalar_common_2[1], ((MR_Box) (check_hlds__oisu_check__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__oisu_check__Cast_HeadVar2_4)));
    }
    return check_hlds__oisu_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__oisu_check__check_local_oisu_pred_9_p_0(
  MR_Word check_hlds__oisu_check__ModuleInfo_10,
  MR_Word check_hlds__oisu_check__KindMap_11,
  MR_Word check_hlds__oisu_check__OISUTypeCtors_12,
  MR_Word check_hlds__oisu_check__Pair0_13,
  MR_Word * check_hlds__oisu_check__Pair_14,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_46,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_47,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_49)
{
  {
    MR_bool check_hlds__oisu_check__succeeded;
    MR_Word check_hlds__oisu_check__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Pair0_13, (MR_Integer) 0)));
    MR_Word check_hlds__oisu_check__PredInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Pair0_13, (MR_Integer) 1)));
    MR_Word check_hlds__oisu_check__Status0_19;
    MR_Word check_hlds__oisu_check__Status_21;
    MR_Word check_hlds__oisu_check__IsDefnInModule_22;
    MR_Word check_hlds__oisu_check__StatusPrime_20;
    MR_Word check_hlds__oisu_check__Var_50;

    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__Status0_19);
    }
    check_hlds__oisu_check__Var_50 = (MR_Word) check_hlds__oisu_check__Status0_19;
    check_hlds__oisu_check__succeeded = ((MR_tag((MR_Word) check_hlds__oisu_check__Var_50)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__oisu_check__succeeded)
      {
        check_hlds__oisu_check__StatusPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_50, (MR_Integer) 0)));
        check_hlds__oisu_check__Status_21 = (MR_Word) check_hlds__oisu_check__StatusPrime_20;
      }
    else
      check_hlds__oisu_check__Status_21 = check_hlds__oisu_check__Status0_19;
    {
      check_hlds__oisu_check__IsDefnInModule_22 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__oisu_check__Status_21);
    }
    switch (check_hlds__oisu_check__IsDefnInModule_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *check_hlds__oisu_check__Pair_14 = check_hlds__oisu_check__Pair0_13;
          *check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_47 = check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_46;
          *check_hlds__oisu_check__STATE_VARIABLE_Specs_49 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__oisu_check__KindFors_23;
          MR_Box check_hlds__oisu_check__conv0_KindFors_23;

          {
            check_hlds__oisu_check__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], check_hlds__oisu_check__KindMap_11, ((MR_Box) (check_hlds__oisu_check__PredId_17)), &check_hlds__oisu_check__conv0_KindFors_23);
          }
          if (check_hlds__oisu_check__succeeded)
            {
              check_hlds__oisu_check__KindFors_23 = ((MR_Word) check_hlds__oisu_check__conv0_KindFors_23);
              check_hlds__oisu_check__succeeded = MR_TRUE;
            }
          if (check_hlds__oisu_check__succeeded)
            {
              MR_Word check_hlds__oisu_check__TypeCtorInfo_97_97;
              MR_Word check_hlds__oisu_check__TypeCtorInfo_98_98;
              MR_Word check_hlds__oisu_check__ProcTable0_24;
              MR_Word check_hlds__oisu_check__Procs0_25;

              {
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__ProcTable0_24);
              }
              check_hlds__oisu_check__TypeCtorInfo_97_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              check_hlds__oisu_check__TypeCtorInfo_98_98 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
              {
                mercury__map__to_assoc_list_2_p_0(check_hlds__oisu_check__TypeCtorInfo_97_97, check_hlds__oisu_check__TypeCtorInfo_98_98, check_hlds__oisu_check__ProcTable0_24, &check_hlds__oisu_check__Procs0_25);
              }
              if ((check_hlds__oisu_check__Procs0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.oisu_check", (MR_String) "predicate \140check_hlds.oisu_check.check_local_oisu_pred\'/9", (MR_String) "no procedure for local predicate");
                    return;
                  }
                }
              else
                {
                  MR_Word check_hlds__oisu_check__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Procs0_25, (MR_Integer) 1)));
                  MR_Word check_hlds__oisu_check__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Procs0_25, (MR_Integer) 0)));

                  if ((check_hlds__oisu_check__Var_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Integer check_hlds__oisu_check__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_104, (MR_Integer) 0)));
                      MR_Word check_hlds__oisu_check__ProcInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_104, (MR_Integer) 1)));
                      MR_Word check_hlds__oisu_check__ArgTypes_28;
                      MR_Word check_hlds__oisu_check__ArgModes_29;
                      MR_Word check_hlds__oisu_check__ArgTypesModes_30;
                      MR_Word check_hlds__oisu_check__ProcInfo_31;
                      MR_Word check_hlds__oisu_check__Procs_32;
                      MR_Word check_hlds__oisu_check__ProcTable_33;
                      MR_Word check_hlds__oisu_check__PredInfo_34;
                      MR_Word check_hlds__oisu_check__Var_84;
                      MR_Word check_hlds__oisu_check__Var_86;

                      {
                        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__ArgTypes_28);
                      }
                      {
                        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__oisu_check__ProcInfo0_27, &check_hlds__oisu_check__ArgModes_29);
                      }
                      {
                        mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__oisu_check__ArgTypes_28, check_hlds__oisu_check__ArgModes_29, &check_hlds__oisu_check__ArgTypesModes_30);
                      }
                      {
                        check_hlds__oisu_check__check_arg_oisu_types_9_p_0(check_hlds__oisu_check__ModuleInfo_10, check_hlds__oisu_check__PredInfo0_18, check_hlds__oisu_check__KindFors_23, check_hlds__oisu_check__OISUTypeCtors_12, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__oisu_check__ArgTypesModes_30, check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48, check_hlds__oisu_check__STATE_VARIABLE_Specs_49);
                      }
                      {
                        hlds__hlds_pred__proc_info_set_oisu_kind_fors_3_p_0(check_hlds__oisu_check__KindFors_23, check_hlds__oisu_check__ProcInfo0_27, &check_hlds__oisu_check__ProcInfo_31);
                      }
                      {
                        check_hlds__oisu_check__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_84, 0) = ((MR_Box) (check_hlds__oisu_check__ProcId_26));
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_84, 1) = ((MR_Box) (check_hlds__oisu_check__ProcInfo_31));
                      }
                      {
                        check_hlds__oisu_check__Procs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Procs_32, 0) = ((MR_Box) (check_hlds__oisu_check__Var_84));
                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Procs_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        mercury__map__from_assoc_list_2_p_0(check_hlds__oisu_check__TypeCtorInfo_97_97, check_hlds__oisu_check__TypeCtorInfo_98_98, check_hlds__oisu_check__Procs_32, &check_hlds__oisu_check__ProcTable_33);
                      }
                      {
                        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__oisu_check__ProcTable_33, check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__PredInfo_34);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *check_hlds__oisu_check__Pair_14 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__oisu_check__PredId_17));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__oisu_check__PredInfo_34));
                      }
                      {
                        check_hlds__oisu_check__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_86, 0) = ((MR_Box) (check_hlds__oisu_check__PredId_17));
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_86, 1) = ((MR_Box) (check_hlds__oisu_check__ProcId_26));
                      }
                      {
                        mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (check_hlds__oisu_check__Var_86)), check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_46, check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_47);
                      }
                    }
                  else
                    {
                      MR_Word check_hlds__oisu_check__PredDesc_38;
                      MR_Word check_hlds__oisu_check__ProcsPieces_39;
                      MR_Word check_hlds__oisu_check__Context_40;
                      MR_Word check_hlds__oisu_check__ProcsMsg_41;
                      MR_Word check_hlds__oisu_check__ProcsSpec_42;
                      MR_Word check_hlds__oisu_check__Var_71;
                      MR_Word check_hlds__oisu_check__Var_72;
                      MR_Word check_hlds__oisu_check__Var_76;

                      {
                        check_hlds__oisu_check__PredDesc_38 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo0_18);
                      }
                      {
                        check_hlds__oisu_check__ProcsPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__oisu_check__PredDesc_38, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[13]));
                      }
                      {
                        hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__Context_40);
                      }
                      {
                        check_hlds__oisu_check__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_72, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsPieces_39));
                      }
                      {
                        check_hlds__oisu_check__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_71, 0) = ((MR_Box) (check_hlds__oisu_check__Var_72));
                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__oisu_check__ProcsMsg_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsMsg_41, 0) = ((MR_Box) (check_hlds__oisu_check__Context_40));
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsMsg_41, 1) = ((MR_Box) (check_hlds__oisu_check__Var_71));
                      }
                      {
                        check_hlds__oisu_check__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_76, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsMsg_41));
                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__oisu_check__ProcsSpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_42, 2) = ((MR_Box) (check_hlds__oisu_check__Var_76));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__oisu_check__STATE_VARIABLE_Specs_49 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsSpec_42));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48));
                      }
                      *check_hlds__oisu_check__Pair_14 = check_hlds__oisu_check__Pair0_13;
                      *check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_47 = check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_46;
                    }
                }
            }
          else
            {
              MR_Word check_hlds__oisu_check__Origin_43;
              MR_Word check_hlds__oisu_check__Var_44;
              MR_Word check_hlds__oisu_check__Var_45;

              {
                hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__Origin_43);
              }
              check_hlds__oisu_check__succeeded = ((MR_tag((MR_Word) check_hlds__oisu_check__Origin_43)) == (MR_mktag((MR_Integer) 0)));
              if (check_hlds__oisu_check__succeeded)
                {
                  check_hlds__oisu_check__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Origin_43, (MR_Integer) 0)));
                  check_hlds__oisu_check__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Origin_43, (MR_Integer) 1)));
                  *check_hlds__oisu_check__STATE_VARIABLE_Specs_49 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48;
                }
              else
                {
                  MR_Word check_hlds__oisu_check__ArgTypes_92;

                  {
                    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__oisu_check__PredInfo0_18, &check_hlds__oisu_check__ArgTypes_92);
                  }
                  {
                    check_hlds__oisu_check__check_args_have_no_oisu_types_5_p_0(check_hlds__oisu_check__PredInfo0_18, check_hlds__oisu_check__OISUTypeCtors_12, check_hlds__oisu_check__ArgTypes_92, check_hlds__oisu_check__STATE_VARIABLE_Specs_0_48, check_hlds__oisu_check__STATE_VARIABLE_Specs_49);
                  }
                }
              *check_hlds__oisu_check__Pair_14 = check_hlds__oisu_check__Pair0_13;
              *check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_47 = check_hlds__oisu_check__STATE_VARIABLE_OISUProcs_0_46;
            }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__oisu_check__check_args_have_no_oisu_types_5_p_0(
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__HeadVar__2_2,
  MR_Word check_hlds__oisu_check__HeadVar__3_3,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__oisu_check__succeeded;

        if ((check_hlds__oisu_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__oisu_check__STATE_VARIABLE_Specs_5 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4;
        else
          {
            MR_Word check_hlds__oisu_check__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__oisu_check__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_59_59;
            MR_Word check_hlds__oisu_check__TypeCtor_16;
            MR_Word check_hlds__oisu_check__TypeCtorInfo_61_61;
            MR_Word check_hlds__oisu_check__ArgTypes_17;

            {
              check_hlds__oisu_check__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__oisu_check__Type_13, &check_hlds__oisu_check__TypeCtor_16, &check_hlds__oisu_check__ArgTypes_17);
            }
            if (check_hlds__oisu_check__succeeded)
              {
                check_hlds__oisu_check__succeeded = (check_hlds__oisu_check__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__oisu_check__succeeded)
                  {
                    check_hlds__oisu_check__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
                    {
                      check_hlds__oisu_check__succeeded = mercury__list__member_2_p_0(check_hlds__oisu_check__TypeCtorInfo_61_61, ((MR_Box) (check_hlds__oisu_check__TypeCtor_16)), check_hlds__oisu_check__HeadVar__2_2);
                    }
                  }
              }
            if (check_hlds__oisu_check__succeeded)
              {
                MR_Word check_hlds__oisu_check__PredDesc_18;
                MR_Word check_hlds__oisu_check__TypeName_19;
                MR_Integer check_hlds__oisu_check__TypeArity_20;
                MR_Word check_hlds__oisu_check__ProcsPieces_21;
                MR_Word check_hlds__oisu_check__Context_22;
                MR_Word check_hlds__oisu_check__ProcsMsg_23;
                MR_Word check_hlds__oisu_check__ProcsSpec_24;
                MR_Word check_hlds__oisu_check__Var_28;
                MR_Word check_hlds__oisu_check__Var_31;
                MR_Word check_hlds__oisu_check__Var_34;
                MR_Word check_hlds__oisu_check__Var_37;
                MR_Word check_hlds__oisu_check__Var_40;
                MR_Word check_hlds__oisu_check__Var_43;
                MR_Word check_hlds__oisu_check__Var_44;
                MR_Word check_hlds__oisu_check__Var_45;
                MR_Word check_hlds__oisu_check__Var_52;
                MR_Word check_hlds__oisu_check__Var_53;
                MR_Word check_hlds__oisu_check__Var_57;

                {
                  check_hlds__oisu_check__PredDesc_18 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__HeadVar__1_1);
                }
                check_hlds__oisu_check__TypeName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__TypeCtor_16, (MR_Integer) 0)));
                check_hlds__oisu_check__TypeArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__TypeCtor_16, (MR_Integer) 1)));
                {
                  check_hlds__oisu_check__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_45, 0) = ((MR_Box) (check_hlds__oisu_check__TypeName_19));
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_45, 1) = ((MR_Box) (check_hlds__oisu_check__TypeArity_20));
                }
                {
                  check_hlds__oisu_check__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                  MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_44, 1) = ((MR_Box) (check_hlds__oisu_check__Var_45));
                }
                {
                  check_hlds__oisu_check__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_43, 0) = ((MR_Box) (check_hlds__oisu_check__Var_44));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[48])));
                }
                {
                  check_hlds__oisu_check__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[59])));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_40, 1) = ((MR_Box) (check_hlds__oisu_check__Var_43));
                }
                {
                  check_hlds__oisu_check__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[58])));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_37, 1) = ((MR_Box) (check_hlds__oisu_check__Var_40));
                }
                {
                  check_hlds__oisu_check__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[57])));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_34, 1) = ((MR_Box) (check_hlds__oisu_check__Var_37));
                }
                {
                  check_hlds__oisu_check__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[56])));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_31, 1) = ((MR_Box) (check_hlds__oisu_check__Var_34));
                }
                {
                  check_hlds__oisu_check__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[55])));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_28, 1) = ((MR_Box) (check_hlds__oisu_check__Var_31));
                }
                {
                  check_hlds__oisu_check__ProcsPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__oisu_check__PredDesc_18, check_hlds__oisu_check__Var_28);
                }
                {
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__HeadVar__1_1, &check_hlds__oisu_check__Context_22);
                }
                {
                  check_hlds__oisu_check__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_53, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsPieces_21));
                }
                {
                  check_hlds__oisu_check__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_52, 0) = ((MR_Box) (check_hlds__oisu_check__Var_53));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__oisu_check__ProcsMsg_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsMsg_23, 0) = ((MR_Box) (check_hlds__oisu_check__Context_22));
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsMsg_23, 1) = ((MR_Box) (check_hlds__oisu_check__Var_52));
                }
                {
                  check_hlds__oisu_check__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_57, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsMsg_23));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__oisu_check__ProcsSpec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__ProcsSpec_24, 2) = ((MR_Box) (check_hlds__oisu_check__Var_57));
                }
                {
                  check_hlds__oisu_check__STATE_VARIABLE_Specs_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_59_59, 0) = ((MR_Box) (check_hlds__oisu_check__ProcsSpec_24));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_59_59, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4));
                }
              }
            else
              check_hlds__oisu_check__STATE_VARIABLE_Specs_59_59 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4;
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__oisu_check__next_value_of_HeadVar__3_3 = check_hlds__oisu_check__Types_14;
              MR_Word check_hlds__oisu_check__next_value_of_STATE_VARIABLE_Specs_0_4 = check_hlds__oisu_check__STATE_VARIABLE_Specs_59_59;

              check_hlds__oisu_check__STATE_VARIABLE_Specs_0_4 = check_hlds__oisu_check__next_value_of_STATE_VARIABLE_Specs_0_4;
              check_hlds__oisu_check__HeadVar__3_3 = check_hlds__oisu_check__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__oisu_check__check_arg_oisu_types_9_p_0(
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__PredInfo_2,
  MR_Word check_hlds__oisu_check__KindFors_3,
  MR_Word check_hlds__oisu_check__HeadVar__4_4,
  MR_Integer check_hlds__oisu_check__HeadVar__5_5,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6,
  MR_Word check_hlds__oisu_check__HeadVar__7_7,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__oisu_check__succeeded;

        if ((check_hlds__oisu_check__HeadVar__7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__oisu_check__UnhandledKindFors_321;

            {
              check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(check_hlds__oisu_check__KindFors_3, check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6, &check_hlds__oisu_check__UnhandledKindFors_321);
            }
            if ((check_hlds__oisu_check__UnhandledKindFors_321 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *check_hlds__oisu_check__STATE_VARIABLE_Specs_9 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8;
            else
              {
                MR_Word check_hlds__oisu_check__TypeCtorInfo_362_362;
                MR_Word check_hlds__oisu_check__HeadUnhandledKindFor_322 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__UnhandledKindFors_321, (MR_Integer) 0)));
                MR_Word check_hlds__oisu_check__TailUnhandledKindFors_323 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__UnhandledKindFors_321, (MR_Integer) 1)));
                MR_Word check_hlds__oisu_check__UnhandledPieces_324;
                MR_Word check_hlds__oisu_check__PredDesc_325;
                MR_Word check_hlds__oisu_check__Pieces_326;
                MR_Word check_hlds__oisu_check__Context_327;
                MR_Word check_hlds__oisu_check__Msg_328;
                MR_Word check_hlds__oisu_check__Spec_329;
                MR_Word check_hlds__oisu_check__Var_334;
                MR_Word check_hlds__oisu_check__Var_345;
                MR_Word check_hlds__oisu_check__Var_346;
                MR_Word check_hlds__oisu_check__Var_350;

                {
                  check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(check_hlds__oisu_check__HeadUnhandledKindFor_322, check_hlds__oisu_check__TailUnhandledKindFors_323, &check_hlds__oisu_check__UnhandledPieces_324);
                }
                {
                  check_hlds__oisu_check__PredDesc_325 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                }
                check_hlds__oisu_check__TypeCtorInfo_362_362 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                {
                  check_hlds__oisu_check__Var_334 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_362_362, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[19]), check_hlds__oisu_check__UnhandledPieces_324);
                }
                {
                  check_hlds__oisu_check__Pieces_326 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_362_362, check_hlds__oisu_check__PredDesc_325, check_hlds__oisu_check__Var_334);
                }
                {
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_327);
                }
                {
                  check_hlds__oisu_check__Var_346 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_346, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_326));
                }
                {
                  check_hlds__oisu_check__Var_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_345, 0) = ((MR_Box) (check_hlds__oisu_check__Var_346));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_345, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__oisu_check__Msg_328 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_328, 0) = ((MR_Box) (check_hlds__oisu_check__Context_327));
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_328, 1) = ((MR_Box) (check_hlds__oisu_check__Var_345));
                }
                {
                  check_hlds__oisu_check__Var_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_350, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_328));
                  MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_350, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__oisu_check__Spec_329 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_329, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_329, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                  MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_329, 2) = ((MR_Box) (check_hlds__oisu_check__Var_350));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__oisu_check__STATE_VARIABLE_Specs_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_329));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
                }
              }
          }
        else
          {
            MR_Word check_hlds__oisu_check__TypeMode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__7_7, (MR_Integer) 0)));
            MR_Word check_hlds__oisu_check__TypesModes_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__7_7, (MR_Integer) 1)));
            MR_Word check_hlds__oisu_check__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__TypeMode_16, (MR_Integer) 0)));
            MR_Word check_hlds__oisu_check__Mode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__TypeMode_16, (MR_Integer) 1)));
            MR_Word check_hlds__oisu_check__TypeCtor_21;
            MR_Word check_hlds__oisu_check__ArgTypes_22;
            MR_Word check_hlds__oisu_check__TypeCtorInfo_353_353;

            {
              check_hlds__oisu_check__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__oisu_check__Type_19, &check_hlds__oisu_check__TypeCtor_21, &check_hlds__oisu_check__ArgTypes_22);
            }
            if (check_hlds__oisu_check__succeeded)
              {
                check_hlds__oisu_check__TypeCtorInfo_353_353 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
                {
                  check_hlds__oisu_check__succeeded = mercury__list__member_2_p_0(check_hlds__oisu_check__TypeCtorInfo_353_353, ((MR_Box) (check_hlds__oisu_check__TypeCtor_21)), check_hlds__oisu_check__HeadVar__4_4);
                }
              }
            if (check_hlds__oisu_check__succeeded)
              {
                MR_Word check_hlds__oisu_check__ThisKind_25;

                if ((check_hlds__oisu_check__ArgTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.oisu_check", (MR_String) "predicate \140check_hlds.oisu_check.check_arg_oisu_types\'/9", (MR_String) "ArgTypes != []");
                      return;
                    }
                  }
                {
                  check_hlds__oisu_check__succeeded = check_hlds__oisu_check__find_kind_for_oisu_type_3_p_0(check_hlds__oisu_check__KindFors_3, check_hlds__oisu_check__TypeCtor_21, &check_hlds__oisu_check__ThisKind_25);
                }
                if (check_hlds__oisu_check__succeeded)
                  {
                    MR_Integer check_hlds__oisu_check__RestArgNum_31;
                    MR_Word check_hlds__oisu_check__RestTypesModes_32;
                    MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82;
                    MR_Word check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84;

                    {
                      check_hlds__oisu_check__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (check_hlds__oisu_check__TypeCtor_21)), check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6);
                    }
                    if (check_hlds__oisu_check__succeeded)
                      {
                        MR_Word check_hlds__oisu_check__TypeCtorInfo_355_355;
                        MR_Word check_hlds__oisu_check__DupPredDesc_26;
                        MR_Word check_hlds__oisu_check__DupPieces_27;
                        MR_Word check_hlds__oisu_check__DupContext_28;
                        MR_Word check_hlds__oisu_check__DupMsg_29;
                        MR_Word check_hlds__oisu_check__DupSpec_30;
                        MR_Word check_hlds__oisu_check__Var_59;
                        MR_Word check_hlds__oisu_check__Var_62;
                        MR_Word check_hlds__oisu_check__Var_63;
                        MR_Word check_hlds__oisu_check__Var_68;
                        MR_Word check_hlds__oisu_check__Var_75;
                        MR_Word check_hlds__oisu_check__Var_76;
                        MR_Word check_hlds__oisu_check__Var_80;

                        {
                          check_hlds__oisu_check__DupPredDesc_26 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                        }
                        check_hlds__oisu_check__TypeCtorInfo_355_355 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                        {
                          check_hlds__oisu_check__Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_63, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
                        }
                        {
                          check_hlds__oisu_check__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_62, 0) = ((MR_Box) (check_hlds__oisu_check__Var_63));
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
                        }
                        {
                          check_hlds__oisu_check__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_59, 1) = ((MR_Box) (check_hlds__oisu_check__Var_62));
                        }
                        {
                          check_hlds__oisu_check__Var_68 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_355_355, check_hlds__oisu_check__DupPredDesc_26, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[21]));
                        }
                        {
                          check_hlds__oisu_check__DupPieces_27 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_355_355, check_hlds__oisu_check__Var_59, check_hlds__oisu_check__Var_68);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__DupContext_28);
                        }
                        {
                          check_hlds__oisu_check__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_76, 0) = ((MR_Box) (check_hlds__oisu_check__DupPieces_27));
                        }
                        {
                          check_hlds__oisu_check__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_75, 0) = ((MR_Box) (check_hlds__oisu_check__Var_76));
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          check_hlds__oisu_check__DupMsg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupMsg_29, 0) = ((MR_Box) (check_hlds__oisu_check__DupContext_28));
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupMsg_29, 1) = ((MR_Box) (check_hlds__oisu_check__Var_75));
                        }
                        {
                          check_hlds__oisu_check__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_80, 0) = ((MR_Box) (check_hlds__oisu_check__DupMsg_29));
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          check_hlds__oisu_check__DupSpec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupSpec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupSpec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__DupSpec_30, 2) = ((MR_Box) (check_hlds__oisu_check__Var_80));
                        }
                        {
                          check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__DupSpec_30));
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
                        }
                        check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
                        check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TypesModes_17;
                        check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84 = check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6;
                      }
                    else
                      {
                        {
                          check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84, 0) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_21));
                          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6));
                        }
                        switch (check_hlds__oisu_check__ThisKind_25) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              {
                                check_hlds__oisu_check__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__Mode_20);
                              }
                              if (check_hlds__oisu_check__succeeded)
                                check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8;
                              else
                                {
                                  MR_Word check_hlds__oisu_check__TypeCtorInfo_356_356;
                                  MR_Word check_hlds__oisu_check__PredDesc_33;
                                  MR_Word check_hlds__oisu_check__Pieces_34;
                                  MR_Word check_hlds__oisu_check__Context_35;
                                  MR_Word check_hlds__oisu_check__Msg_36;
                                  MR_Word check_hlds__oisu_check__Spec_37;
                                  MR_Word check_hlds__oisu_check__Var_212;
                                  MR_Word check_hlds__oisu_check__Var_215;
                                  MR_Word check_hlds__oisu_check__Var_216;
                                  MR_Word check_hlds__oisu_check__Var_221;
                                  MR_Word check_hlds__oisu_check__Var_231;
                                  MR_Word check_hlds__oisu_check__Var_232;
                                  MR_Word check_hlds__oisu_check__Var_236;

                                  {
                                    check_hlds__oisu_check__PredDesc_33 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                  }
                                  check_hlds__oisu_check__TypeCtorInfo_356_356 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                                  {
                                    check_hlds__oisu_check__Var_216 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_216, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_216, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_215, 0) = ((MR_Box) (check_hlds__oisu_check__Var_216));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_212, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_212, 1) = ((MR_Box) (check_hlds__oisu_check__Var_215));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_221 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_356_356, check_hlds__oisu_check__PredDesc_33, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[25]));
                                  }
                                  {
                                    check_hlds__oisu_check__Pieces_34 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_356_356, check_hlds__oisu_check__Var_212, check_hlds__oisu_check__Var_221);
                                  }
                                  {
                                    hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_35);
                                  }
                                  {
                                    check_hlds__oisu_check__Var_232 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_232, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_34));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_231, 0) = ((MR_Box) (check_hlds__oisu_check__Var_232));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                                  {
                                    check_hlds__oisu_check__Msg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_36, 0) = ((MR_Box) (check_hlds__oisu_check__Context_35));
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_36, 1) = ((MR_Box) (check_hlds__oisu_check__Var_231));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_236, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_36));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                                  {
                                    check_hlds__oisu_check__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_37, 2) = ((MR_Box) (check_hlds__oisu_check__Var_236));
                                  }
                                  {
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_37));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
                                  }
                                }
                              check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
                              check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TypesModes_17;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              {
                                check_hlds__oisu_check__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__Mode_20);
                              }
                              if (check_hlds__oisu_check__succeeded)
                                check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8;
                              else
                                {
                                  MR_Word check_hlds__oisu_check__TypeCtorInfo_360_360;
                                  MR_Word check_hlds__oisu_check__Var_86;
                                  MR_Word check_hlds__oisu_check__Var_89;
                                  MR_Word check_hlds__oisu_check__Var_90;
                                  MR_Word check_hlds__oisu_check__Var_95;
                                  MR_Word check_hlds__oisu_check__Var_105;
                                  MR_Word check_hlds__oisu_check__Var_106;
                                  MR_Word check_hlds__oisu_check__Var_110;
                                  MR_Word check_hlds__oisu_check__PredDesc_290;
                                  MR_Word check_hlds__oisu_check__Pieces_291;
                                  MR_Word check_hlds__oisu_check__Context_292;
                                  MR_Word check_hlds__oisu_check__Msg_293;
                                  MR_Word check_hlds__oisu_check__Spec_294;

                                  {
                                    check_hlds__oisu_check__PredDesc_290 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                  }
                                  check_hlds__oisu_check__TypeCtorInfo_360_360 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                                  {
                                    check_hlds__oisu_check__Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_90, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_89, 0) = ((MR_Box) (check_hlds__oisu_check__Var_90));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_86, 1) = ((MR_Box) (check_hlds__oisu_check__Var_89));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_95 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_360_360, check_hlds__oisu_check__PredDesc_290, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[29]));
                                  }
                                  {
                                    check_hlds__oisu_check__Pieces_291 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_360_360, check_hlds__oisu_check__Var_86, check_hlds__oisu_check__Var_95);
                                  }
                                  {
                                    hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_292);
                                  }
                                  {
                                    check_hlds__oisu_check__Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_106, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_291));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_105, 0) = ((MR_Box) (check_hlds__oisu_check__Var_106));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                                  {
                                    check_hlds__oisu_check__Msg_293 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_293, 0) = ((MR_Box) (check_hlds__oisu_check__Context_292));
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_293, 1) = ((MR_Box) (check_hlds__oisu_check__Var_105));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_110, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_293));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                                  {
                                    check_hlds__oisu_check__Spec_294 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_294, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_294, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_294, 2) = ((MR_Box) (check_hlds__oisu_check__Var_110));
                                  }
                                  {
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_294));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
                                  }
                                }
                              check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
                              check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TypesModes_17;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word check_hlds__oisu_check__TailTypesModes_39;
                              MR_Word check_hlds__oisu_check__NextMode_41;
                              MR_Word check_hlds__oisu_check__NextTypeMode_38;
                              MR_Word check_hlds__oisu_check__NextType_40;

                              check_hlds__oisu_check__succeeded = ((MR_tag((MR_Word) check_hlds__oisu_check__TypesModes_17)) == (MR_mktag((MR_Integer) 1)));
                              if (check_hlds__oisu_check__succeeded)
                                {
                                  check_hlds__oisu_check__NextTypeMode_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__TypesModes_17, (MR_Integer) 0)));
                                  check_hlds__oisu_check__TailTypesModes_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__TypesModes_17, (MR_Integer) 1)));
                                  check_hlds__oisu_check__NextType_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__NextTypeMode_38, (MR_Integer) 0)));
                                  check_hlds__oisu_check__NextMode_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__NextTypeMode_38, (MR_Integer) 1)));
                                  {
                                    check_hlds__oisu_check__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__oisu_check__NextType_40, check_hlds__oisu_check__Type_19);
                                  }
                                }
                              if (check_hlds__oisu_check__succeeded)
                                {
                                  MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144;

                                  {
                                    check_hlds__oisu_check__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__Mode_20);
                                  }
                                  if (check_hlds__oisu_check__succeeded)
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144 = check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8;
                                  else
                                    {
                                      MR_Word check_hlds__oisu_check__TypeCtorInfo_357_357;
                                      MR_Word check_hlds__oisu_check__InPredDesc_42;
                                      MR_Word check_hlds__oisu_check__InPieces_43;
                                      MR_Word check_hlds__oisu_check__InContext_44;
                                      MR_Word check_hlds__oisu_check__InMsg_45;
                                      MR_Word check_hlds__oisu_check__InSpec_46;
                                      MR_Word check_hlds__oisu_check__Var_115;
                                      MR_Word check_hlds__oisu_check__Var_118;
                                      MR_Word check_hlds__oisu_check__Var_119;
                                      MR_Word check_hlds__oisu_check__Var_124;
                                      MR_Word check_hlds__oisu_check__Var_137;
                                      MR_Word check_hlds__oisu_check__Var_138;
                                      MR_Word check_hlds__oisu_check__Var_142;

                                      {
                                        check_hlds__oisu_check__InPredDesc_42 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                      }
                                      check_hlds__oisu_check__TypeCtorInfo_357_357 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                                      {
                                        check_hlds__oisu_check__Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                        MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_119, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
                                      }
                                      {
                                        check_hlds__oisu_check__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_118, 0) = ((MR_Box) (check_hlds__oisu_check__Var_119));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
                                      }
                                      {
                                        check_hlds__oisu_check__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_115, 1) = ((MR_Box) (check_hlds__oisu_check__Var_118));
                                      }
                                      {
                                        check_hlds__oisu_check__Var_124 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_357_357, check_hlds__oisu_check__InPredDesc_42, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[33]));
                                      }
                                      {
                                        check_hlds__oisu_check__InPieces_43 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_357_357, check_hlds__oisu_check__Var_115, check_hlds__oisu_check__Var_124);
                                      }
                                      {
                                        hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__InContext_44);
                                      }
                                      {
                                        check_hlds__oisu_check__Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_138, 0) = ((MR_Box) (check_hlds__oisu_check__InPieces_43));
                                      }
                                      {
                                        check_hlds__oisu_check__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_137, 0) = ((MR_Box) (check_hlds__oisu_check__Var_138));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      {
                                        check_hlds__oisu_check__InMsg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InMsg_45, 0) = ((MR_Box) (check_hlds__oisu_check__InContext_44));
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InMsg_45, 1) = ((MR_Box) (check_hlds__oisu_check__Var_137));
                                      }
                                      {
                                        check_hlds__oisu_check__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_142, 0) = ((MR_Box) (check_hlds__oisu_check__InMsg_45));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      {
                                        check_hlds__oisu_check__InSpec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InSpec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InSpec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__InSpec_46, 2) = ((MR_Box) (check_hlds__oisu_check__Var_142));
                                      }
                                      {
                                        check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144, 0) = ((MR_Box) (check_hlds__oisu_check__InSpec_46));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
                                      }
                                    }
                                  {
                                    check_hlds__oisu_check__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__oisu_check__HeadVar__1_1, check_hlds__oisu_check__NextMode_41);
                                  }
                                  if (check_hlds__oisu_check__succeeded)
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144;
                                  else
                                    {
                                      MR_Word check_hlds__oisu_check__TypeCtorInfo_358_358;
                                      MR_Word check_hlds__oisu_check__OutPredDesc_47;
                                      MR_Word check_hlds__oisu_check__OutPieces_48;
                                      MR_Word check_hlds__oisu_check__OutContext_49;
                                      MR_Word check_hlds__oisu_check__OutMsg_50;
                                      MR_Word check_hlds__oisu_check__OutSpec_51;
                                      MR_Word check_hlds__oisu_check__Var_146;
                                      MR_Word check_hlds__oisu_check__Var_149;
                                      MR_Word check_hlds__oisu_check__Var_150;
                                      MR_Integer check_hlds__oisu_check__Var_151;
                                      MR_Word check_hlds__oisu_check__Var_157;
                                      MR_Word check_hlds__oisu_check__Var_170;
                                      MR_Word check_hlds__oisu_check__Var_171;
                                      MR_Word check_hlds__oisu_check__Var_175;

                                      {
                                        check_hlds__oisu_check__OutPredDesc_47 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                      }
                                      check_hlds__oisu_check__TypeCtorInfo_358_358 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                                      check_hlds__oisu_check__Var_151 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
                                      {
                                        check_hlds__oisu_check__Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                        MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_150, 1) = ((MR_Box) (check_hlds__oisu_check__Var_151));
                                      }
                                      {
                                        check_hlds__oisu_check__Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_149, 0) = ((MR_Box) (check_hlds__oisu_check__Var_150));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
                                      }
                                      {
                                        check_hlds__oisu_check__Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_146, 1) = ((MR_Box) (check_hlds__oisu_check__Var_149));
                                      }
                                      {
                                        check_hlds__oisu_check__Var_157 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_358_358, check_hlds__oisu_check__OutPredDesc_47, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[36]));
                                      }
                                      {
                                        check_hlds__oisu_check__OutPieces_48 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_358_358, check_hlds__oisu_check__Var_146, check_hlds__oisu_check__Var_157);
                                      }
                                      {
                                        hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__OutContext_49);
                                      }
                                      {
                                        check_hlds__oisu_check__Var_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_171, 0) = ((MR_Box) (check_hlds__oisu_check__OutPieces_48));
                                      }
                                      {
                                        check_hlds__oisu_check__Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_170, 0) = ((MR_Box) (check_hlds__oisu_check__Var_171));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      {
                                        check_hlds__oisu_check__OutMsg_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutMsg_50, 0) = ((MR_Box) (check_hlds__oisu_check__OutContext_49));
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutMsg_50, 1) = ((MR_Box) (check_hlds__oisu_check__Var_170));
                                      }
                                      {
                                        check_hlds__oisu_check__Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_175, 0) = ((MR_Box) (check_hlds__oisu_check__OutMsg_50));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                      {
                                        check_hlds__oisu_check__OutSpec_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutSpec_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutSpec_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                                        MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OutSpec_51, 2) = ((MR_Box) (check_hlds__oisu_check__Var_175));
                                      }
                                      {
                                        check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__OutSpec_51));
                                        MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_144_144));
                                      }
                                    }
                                  check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 2);
                                  check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TailTypesModes_39;
                                }
                              else
                                {
                                  MR_Word check_hlds__oisu_check__TypeCtorInfo_359_359;
                                  MR_Word check_hlds__oisu_check__Var_180;
                                  MR_Word check_hlds__oisu_check__Var_183;
                                  MR_Word check_hlds__oisu_check__Var_184;
                                  MR_Word check_hlds__oisu_check__Var_189;
                                  MR_Word check_hlds__oisu_check__Var_202;
                                  MR_Word check_hlds__oisu_check__Var_203;
                                  MR_Word check_hlds__oisu_check__Var_207;
                                  MR_Word check_hlds__oisu_check__PredDesc_275;
                                  MR_Word check_hlds__oisu_check__Pieces_276;
                                  MR_Word check_hlds__oisu_check__Context_277;
                                  MR_Word check_hlds__oisu_check__Msg_278;
                                  MR_Word check_hlds__oisu_check__Spec_279;

                                  {
                                    check_hlds__oisu_check__PredDesc_275 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                                  }
                                  check_hlds__oisu_check__TypeCtorInfo_359_359 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                                  {
                                    check_hlds__oisu_check__Var_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                    MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_184, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_183, 0) = ((MR_Box) (check_hlds__oisu_check__Var_184));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_180, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[54])));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_180, 1) = ((MR_Box) (check_hlds__oisu_check__Var_183));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_189 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_359_359, check_hlds__oisu_check__PredDesc_275, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[42]));
                                  }
                                  {
                                    check_hlds__oisu_check__Pieces_276 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_359_359, check_hlds__oisu_check__Var_180, check_hlds__oisu_check__Var_189);
                                  }
                                  {
                                    hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_277);
                                  }
                                  {
                                    check_hlds__oisu_check__Var_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_203, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_276));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_202, 0) = ((MR_Box) (check_hlds__oisu_check__Var_203));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                                  {
                                    check_hlds__oisu_check__Msg_278 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_278, 0) = ((MR_Box) (check_hlds__oisu_check__Context_277));
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_278, 1) = ((MR_Box) (check_hlds__oisu_check__Var_202));
                                  }
                                  {
                                    check_hlds__oisu_check__Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_207, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_278));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                                  {
                                    check_hlds__oisu_check__Spec_279 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_279, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_279, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                                    MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_279, 2) = ((MR_Box) (check_hlds__oisu_check__Var_207));
                                  }
                                  {
                                    check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_279));
                                    MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
                                  }
                                  check_hlds__oisu_check__RestArgNum_31 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
                                  check_hlds__oisu_check__RestTypesModes_32 = check_hlds__oisu_check__TypesModes_17;
                                }
                            }
                            break;
                        }
                      }
                    /* direct tailcall eliminated */
                    {
                      MR_Integer check_hlds__oisu_check__next_value_of_HeadVar__5_5 = check_hlds__oisu_check__RestArgNum_31;
                      MR_Word check_hlds__oisu_check__next_value_of_STATE_VARIABLE_HandledOISUTypeCtors_0_6 = check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_84_84;
                      MR_Word check_hlds__oisu_check__next_value_of_HeadVar__7_7 = check_hlds__oisu_check__RestTypesModes_32;
                      MR_Word check_hlds__oisu_check__next_value_of_STATE_VARIABLE_Specs_0_8 = check_hlds__oisu_check__STATE_VARIABLE_Specs_82_82;

                      check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8 = check_hlds__oisu_check__next_value_of_STATE_VARIABLE_Specs_0_8;
                      check_hlds__oisu_check__HeadVar__7_7 = check_hlds__oisu_check__next_value_of_HeadVar__7_7;
                      check_hlds__oisu_check__STATE_VARIABLE_HandledOISUTypeCtors_0_6 = check_hlds__oisu_check__next_value_of_STATE_VARIABLE_HandledOISUTypeCtors_0_6;
                      check_hlds__oisu_check__HeadVar__5_5 = check_hlds__oisu_check__next_value_of_HeadVar__5_5;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word check_hlds__oisu_check__TypeCtorInfo_361_361;
                    MR_Word check_hlds__oisu_check__Var_242;
                    MR_Word check_hlds__oisu_check__Var_245;
                    MR_Word check_hlds__oisu_check__Var_246;
                    MR_Word check_hlds__oisu_check__Var_251;
                    MR_Word check_hlds__oisu_check__Var_261;
                    MR_Word check_hlds__oisu_check__Var_262;
                    MR_Word check_hlds__oisu_check__Var_266;
                    MR_Word check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268;
                    MR_Integer check_hlds__oisu_check__Var_269;
                    MR_Word check_hlds__oisu_check__PredDesc_306;
                    MR_Word check_hlds__oisu_check__Pieces_307;
                    MR_Word check_hlds__oisu_check__Context_308;
                    MR_Word check_hlds__oisu_check__Msg_309;
                    MR_Word check_hlds__oisu_check__Spec_310;

                    {
                      check_hlds__oisu_check__PredDesc_306 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__oisu_check__PredInfo_2);
                    }
                    check_hlds__oisu_check__TypeCtorInfo_361_361 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                    {
                      check_hlds__oisu_check__Var_246 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_246, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_246, 1) = ((MR_Box) (check_hlds__oisu_check__HeadVar__5_5));
                    }
                    {
                      check_hlds__oisu_check__Var_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_245, 0) = ((MR_Box) (check_hlds__oisu_check__Var_246));
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_245, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
                    }
                    {
                      check_hlds__oisu_check__Var_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_242, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_242, 1) = ((MR_Box) (check_hlds__oisu_check__Var_245));
                    }
                    {
                      check_hlds__oisu_check__Var_251 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_361_361, check_hlds__oisu_check__PredDesc_306, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[46]));
                    }
                    {
                      check_hlds__oisu_check__Pieces_307 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_361_361, check_hlds__oisu_check__Var_242, check_hlds__oisu_check__Var_251);
                    }
                    {
                      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__oisu_check__PredInfo_2, &check_hlds__oisu_check__Context_308);
                    }
                    {
                      check_hlds__oisu_check__Var_262 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_262, 0) = ((MR_Box) (check_hlds__oisu_check__Pieces_307));
                    }
                    {
                      check_hlds__oisu_check__Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_261, 0) = ((MR_Box) (check_hlds__oisu_check__Var_262));
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__oisu_check__Msg_309 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_309, 0) = ((MR_Box) (check_hlds__oisu_check__Context_308));
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Msg_309, 1) = ((MR_Box) (check_hlds__oisu_check__Var_261));
                    }
                    {
                      check_hlds__oisu_check__Var_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_266, 0) = ((MR_Box) (check_hlds__oisu_check__Msg_309));
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_266, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__oisu_check__Spec_310 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_310, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_310, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
                      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Spec_310, 2) = ((MR_Box) (check_hlds__oisu_check__Var_266));
                    }
                    {
                      check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268, 0) = ((MR_Box) (check_hlds__oisu_check__Spec_310));
                      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268, 1) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8));
                    }
                    check_hlds__oisu_check__Var_269 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);
                    /* direct tailcall eliminated */
                    {
                      MR_Integer check_hlds__oisu_check__next_value_of_HeadVar__5_5 = check_hlds__oisu_check__Var_269;
                      MR_Word check_hlds__oisu_check__next_value_of_HeadVar__7_7 = check_hlds__oisu_check__TypesModes_17;
                      MR_Word check_hlds__oisu_check__next_value_of_STATE_VARIABLE_Specs_0_8 = check_hlds__oisu_check__STATE_VARIABLE_Specs_268_268;

                      check_hlds__oisu_check__STATE_VARIABLE_Specs_0_8 = check_hlds__oisu_check__next_value_of_STATE_VARIABLE_Specs_0_8;
                      check_hlds__oisu_check__HeadVar__7_7 = check_hlds__oisu_check__next_value_of_HeadVar__7_7;
                      check_hlds__oisu_check__HeadVar__5_5 = check_hlds__oisu_check__next_value_of_HeadVar__5_5;
                    }
                    continue;
                  }
              }
            else
              {
                MR_Integer check_hlds__oisu_check__Var_272 = (check_hlds__oisu_check__HeadVar__5_5 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer check_hlds__oisu_check__next_value_of_HeadVar__5_5 = check_hlds__oisu_check__Var_272;
                  MR_Word check_hlds__oisu_check__next_value_of_HeadVar__7_7 = check_hlds__oisu_check__TypesModes_17;

                  check_hlds__oisu_check__HeadVar__7_7 = check_hlds__oisu_check__next_value_of_HeadVar__7_7;
                  check_hlds__oisu_check__HeadVar__5_5 = check_hlds__oisu_check__next_value_of_HeadVar__5_5;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(
  MR_Word check_hlds__oisu_check__HeadKindFor_4,
  MR_Word check_hlds__oisu_check__TailKindFors_5,
  MR_Word * check_hlds__oisu_check__Pieces_6)
{
  {
    MR_Word check_hlds__oisu_check__HeadTypeCtor_7;
    MR_String check_hlds__oisu_check__HeadKind_8;
    MR_Word check_hlds__oisu_check__HeadTypeSymName_9;
    MR_Integer check_hlds__oisu_check__HeadTypeArity_10;
    MR_Word check_hlds__oisu_check__HeadPieces0_11;
    MR_Word check_hlds__oisu_check__Var_16;
    MR_Word check_hlds__oisu_check__Var_17;
    MR_Word check_hlds__oisu_check__Var_18;
    MR_Word check_hlds__oisu_check__Var_19;
    MR_String check_hlds__oisu_check__Var_20;
    MR_String check_hlds__oisu_check__Var_22;

    switch (MR_tag((MR_Word) check_hlds__oisu_check__HeadKindFor_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__oisu_check__HeadTypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadKindFor_4, (MR_Integer) 0)));
          check_hlds__oisu_check__HeadKind_8 = (MR_String) "creator";
        }
        break;
      case (MR_Integer) 1:
        {
          check_hlds__oisu_check__HeadTypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadKindFor_4, (MR_Integer) 0)));
          check_hlds__oisu_check__HeadKind_8 = (MR_String) "mutator";
        }
        break;
      case (MR_Integer) 2:
        {
          check_hlds__oisu_check__HeadTypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__oisu_check__HeadKindFor_4, (MR_Integer) 0)));
          check_hlds__oisu_check__HeadKind_8 = (MR_String) "destructor";
        }
        break;
    }
    check_hlds__oisu_check__HeadTypeSymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadTypeCtor_7, (MR_Integer) 0)));
    check_hlds__oisu_check__HeadTypeArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadTypeCtor_7, (MR_Integer) 1)));
    {
      check_hlds__oisu_check__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_17, 0) = ((MR_Box) (check_hlds__oisu_check__HeadTypeSymName_9));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_17, 1) = ((MR_Box) (check_hlds__oisu_check__HeadTypeArity_10));
    }
    {
      check_hlds__oisu_check__Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), check_hlds__oisu_check__Var_16, 1) = ((MR_Box) (check_hlds__oisu_check__Var_17));
    }
    {
      check_hlds__oisu_check__Var_22 = mercury__string__f_43_43_2_f_0(check_hlds__oisu_check__HeadKind_8, (MR_String) ")");
    }
    {
      check_hlds__oisu_check__Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "(as ", check_hlds__oisu_check__Var_22);
    }
    {
      check_hlds__oisu_check__Var_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__oisu_check__Var_19, 0) = ((MR_Box) (check_hlds__oisu_check__Var_20));
    }
    {
      check_hlds__oisu_check__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_18, 0) = ((MR_Box) (check_hlds__oisu_check__Var_19));
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__oisu_check__HeadPieces0_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadPieces0_11, 0) = ((MR_Box) (check_hlds__oisu_check__Var_16));
      MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadPieces0_11, 1) = ((MR_Box) (check_hlds__oisu_check__Var_18));
    }
    if ((check_hlds__oisu_check__TailKindFors_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *check_hlds__oisu_check__Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__oisu_check__HeadPieces0_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[48]));
        }
      }
    else
      {
        MR_Word check_hlds__oisu_check__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        MR_Word check_hlds__oisu_check__HeadTailKindFor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__TailKindFors_5, (MR_Integer) 0)));
        MR_Word check_hlds__oisu_check__TailTailKindFors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__TailKindFors_5, (MR_Integer) 1)));
        MR_Word check_hlds__oisu_check__TailPieces_15;
        MR_Word check_hlds__oisu_check__HeadPieces_37;

        {
          check_hlds__oisu_check__HeadPieces_37 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_39_39, check_hlds__oisu_check__HeadPieces0_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[50]));
        }
        {
          check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(check_hlds__oisu_check__HeadTailKindFor_13, check_hlds__oisu_check__TailTailKindFors_14, &check_hlds__oisu_check__TailPieces_15);
        }
        {
          *check_hlds__oisu_check__Pieces_6 = mercury__list__f_43_43_2_f_0(check_hlds__oisu_check__TypeCtorInfo_39_39, check_hlds__oisu_check__HeadPieces_37, check_hlds__oisu_check__TailPieces_15);
        }
      }
  }
}

static void MR_CALL 
check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__HandledOISUTypeCtors_2,
  MR_Word * check_hlds__oisu_check__HeadVar__3_3)
{
  {
    MR_bool check_hlds__oisu_check__succeeded;

    if ((check_hlds__oisu_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__oisu_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__oisu_check__KindFor_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__oisu_check__KindFors_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__oisu_check__UnhandledKindForsTail_9;
        MR_Word check_hlds__oisu_check__TypeCtor_10;

        {
          check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(check_hlds__oisu_check__KindFors_6, check_hlds__oisu_check__HandledOISUTypeCtors_2, &check_hlds__oisu_check__UnhandledKindForsTail_9);
        }
        switch (MR_tag((MR_Word) check_hlds__oisu_check__KindFor_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__oisu_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__KindFor_5, (MR_Integer) 0)));
            break;
          case (MR_Integer) 1:
            check_hlds__oisu_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__KindFor_5, (MR_Integer) 0)));
            break;
          case (MR_Integer) 2:
            check_hlds__oisu_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__oisu_check__KindFor_5, (MR_Integer) 0)));
            break;
        }
        {
          check_hlds__oisu_check__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (check_hlds__oisu_check__TypeCtor_10)), check_hlds__oisu_check__HandledOISUTypeCtors_2);
        }
        if (check_hlds__oisu_check__succeeded)
          *check_hlds__oisu_check__HeadVar__3_3 = check_hlds__oisu_check__UnhandledKindForsTail_9;
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__oisu_check__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__oisu_check__KindFor_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__oisu_check__UnhandledKindForsTail_9));
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__oisu_check__find_kind_for_oisu_type_3_p_0(
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__TypeCtor_6,
  MR_Word * check_hlds__oisu_check__Kind_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__oisu_check__succeeded = ((MR_tag((MR_Word) check_hlds__oisu_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word check_hlds__oisu_check__KindFor_4;
        MR_Word check_hlds__oisu_check__KindFors_5;
        MR_Word check_hlds__oisu_check__KindPrime_8;

        if (check_hlds__oisu_check__succeeded)
          {
            check_hlds__oisu_check__KindFor_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 0)));
            check_hlds__oisu_check__KindFors_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) check_hlds__oisu_check__KindFor_4)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__oisu_check__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__KindFor_4, (MR_Integer) 0)));

                  {
                    check_hlds__oisu_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__oisu_check__TypeCtor_6, check_hlds__oisu_check__Var_9);
                  }
                  if (check_hlds__oisu_check__succeeded)
                    {
                      check_hlds__oisu_check__KindPrime_8 = (MR_Integer) 0;
                      check_hlds__oisu_check__succeeded = MR_TRUE;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__oisu_check__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__oisu_check__KindFor_4, (MR_Integer) 0)));

                  {
                    check_hlds__oisu_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__oisu_check__TypeCtor_6, check_hlds__oisu_check__Var_10);
                  }
                  if (check_hlds__oisu_check__succeeded)
                    {
                      check_hlds__oisu_check__KindPrime_8 = (MR_Integer) 1;
                      check_hlds__oisu_check__succeeded = MR_TRUE;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__oisu_check__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__oisu_check__KindFor_4, (MR_Integer) 0)));

                  {
                    check_hlds__oisu_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__oisu_check__TypeCtor_6, check_hlds__oisu_check__Var_11);
                  }
                  if (check_hlds__oisu_check__succeeded)
                    {
                      check_hlds__oisu_check__KindPrime_8 = (MR_Integer) 2;
                      check_hlds__oisu_check__succeeded = MR_TRUE;
                    }
                }
                break;
            }
            if (check_hlds__oisu_check__succeeded)
              {
                *check_hlds__oisu_check__Kind_7 = check_hlds__oisu_check__KindPrime_8;
                check_hlds__oisu_check__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__oisu_check__next_value_of_HeadVar__1_1 = check_hlds__oisu_check__KindFors_5;

                  check_hlds__oisu_check__HeadVar__1_1 = check_hlds__oisu_check__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return check_hlds__oisu_check__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(
  MR_Word check_hlds__oisu_check__TypeCtor_6,
  MR_Word check_hlds__oisu_check__Kind_7,
  MR_Word check_hlds__oisu_check__PredId_8,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_KindMap_14)
{
  {
    MR_bool check_hlds__oisu_check__succeeded;
    MR_Word check_hlds__oisu_check__KindFor_10;
    MR_Word check_hlds__oisu_check__OldEntries_11;
    MR_Box check_hlds__oisu_check__conv0_OldEntries_11;

    switch (check_hlds__oisu_check__Kind_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__oisu_check__KindFor_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__oisu_check__KindFor_10, 0) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_6));
        }
        break;
      case (MR_Integer) 2:
        {
          check_hlds__oisu_check__KindFor_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__oisu_check__KindFor_10, 0) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_6));
        }
        break;
      case (MR_Integer) 1:
        {
          check_hlds__oisu_check__KindFor_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__KindFor_10, 0) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_6));
        }
        break;
    }
    {
      check_hlds__oisu_check__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13, ((MR_Box) (check_hlds__oisu_check__PredId_8)), &check_hlds__oisu_check__conv0_OldEntries_11);
    }
    if (check_hlds__oisu_check__succeeded)
      {
        check_hlds__oisu_check__OldEntries_11 = ((MR_Word) check_hlds__oisu_check__conv0_OldEntries_11);
        check_hlds__oisu_check__succeeded = MR_TRUE;
      }
    if (check_hlds__oisu_check__succeeded)
      {
        MR_Word check_hlds__oisu_check__Entries_12;

        {
          check_hlds__oisu_check__Entries_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Entries_12, 0) = ((MR_Box) (check_hlds__oisu_check__KindFor_10));
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Entries_12, 1) = ((MR_Box) (check_hlds__oisu_check__OldEntries_11));
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], ((MR_Box) (check_hlds__oisu_check__PredId_8)), ((MR_Box) (check_hlds__oisu_check__Entries_12)), check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13, check_hlds__oisu_check__STATE_VARIABLE_KindMap_14);
        }
      }
    else
      {
        MR_Word check_hlds__oisu_check__Entries_18;

        {
          check_hlds__oisu_check__Entries_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Entries_18, 0) = ((MR_Box) (check_hlds__oisu_check__KindFor_10));
          MR_hl_field(MR_mktag(1), check_hlds__oisu_check__Entries_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], ((MR_Box) (check_hlds__oisu_check__PredId_8)), ((MR_Box) (check_hlds__oisu_check__Entries_18)), check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_13, check_hlds__oisu_check__STATE_VARIABLE_KindMap_14);
        }
      }
  }
}

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_3(
  MR_Box check_hlds__oisu_check__closure_arg,
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
  MR_Box * check_hlds__oisu_check__wrapper_arg_3)
{
  {
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
    MR_Word check_hlds__oisu_check__conv4_STATE_VARIABLE_KindMap_14;

    {
      check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), &check_hlds__oisu_check__conv4_STATE_VARIABLE_KindMap_14);
    }
    *check_hlds__oisu_check__wrapper_arg_3 = ((MR_Box) (check_hlds__oisu_check__conv4_STATE_VARIABLE_KindMap_14));
  }
}

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_2(
  MR_Box check_hlds__oisu_check__closure_arg,
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
  MR_Box * check_hlds__oisu_check__wrapper_arg_3)
{
  {
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
    MR_Word check_hlds__oisu_check__conv2_STATE_VARIABLE_KindMap_14;

    {
      check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), &check_hlds__oisu_check__conv2_STATE_VARIABLE_KindMap_14);
    }
    *check_hlds__oisu_check__wrapper_arg_3 = ((MR_Box) (check_hlds__oisu_check__conv2_STATE_VARIABLE_KindMap_14));
  }
}

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_1(
  MR_Box check_hlds__oisu_check__closure_arg,
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
  MR_Box * check_hlds__oisu_check__wrapper_arg_3)
{
  {
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
    MR_Word check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_14;

    {
      check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), &check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_14);
    }
    *check_hlds__oisu_check__wrapper_arg_3 = ((MR_Box) (check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_14));
  }
}

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0(
  MR_Word check_hlds__oisu_check__HeadVar__1_1,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_10,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_KindMap_11)
{
  {
    MR_Word check_hlds__oisu_check__TypeCtorInfo_24_24;
    MR_Word check_hlds__oisu_check__TypeInfo_25_25;
    MR_Word check_hlds__oisu_check__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__oisu_check__OISUPreds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__oisu_check__CreatorPreds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OISUPreds_5, (MR_Integer) 0)));
    MR_Word check_hlds__oisu_check__MutatorPreds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OISUPreds_5, (MR_Integer) 1)));
    MR_Word check_hlds__oisu_check__DestructorPreds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__OISUPreds_5, (MR_Integer) 2)));
    MR_Word check_hlds__oisu_check__Var_12;
    MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_13_13;
    MR_Word check_hlds__oisu_check__Var_15;
    MR_Word check_hlds__oisu_check__STATE_VARIABLE_KindMap_16_16;
    MR_Word check_hlds__oisu_check__Var_18;
    MR_Box check_hlds__oisu_check__conv1_STATE_VARIABLE_KindMap_13_13;
    MR_Box check_hlds__oisu_check__conv3_STATE_VARIABLE_KindMap_16_16;
    MR_Box check_hlds__oisu_check__conv5_STATE_VARIABLE_KindMap_11;

    {
      check_hlds__oisu_check__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_12, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_12, 1) = ((MR_Box) (check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_12, 3) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_4));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_12, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    check_hlds__oisu_check__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    check_hlds__oisu_check__TypeInfo_25_25 = (MR_Word) &check_hlds__oisu_check_scalar_common_2[1];
    {
      mercury__list__foldl_4_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeInfo_25_25, check_hlds__oisu_check__Var_12, check_hlds__oisu_check__CreatorPreds_7, ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_KindMap_0_10)), &check_hlds__oisu_check__conv1_STATE_VARIABLE_KindMap_13_13);
    }
    check_hlds__oisu_check__STATE_VARIABLE_KindMap_13_13 = ((MR_Word) check_hlds__oisu_check__conv1_STATE_VARIABLE_KindMap_13_13);
    {
      check_hlds__oisu_check__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_15, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_15, 1) = ((MR_Box) (check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_15, 3) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_4));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_15, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      mercury__list__foldl_4_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeInfo_25_25, check_hlds__oisu_check__Var_15, check_hlds__oisu_check__MutatorPreds_8, ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_KindMap_13_13)), &check_hlds__oisu_check__conv3_STATE_VARIABLE_KindMap_16_16);
    }
    check_hlds__oisu_check__STATE_VARIABLE_KindMap_16_16 = ((MR_Word) check_hlds__oisu_check__conv3_STATE_VARIABLE_KindMap_16_16);
    {
      check_hlds__oisu_check__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_18, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_18, 1) = ((MR_Box) (check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_3));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_18, 3) = ((MR_Box) (check_hlds__oisu_check__TypeCtor_4));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_18, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    {
      mercury__list__foldl_4_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeInfo_25_25, check_hlds__oisu_check__Var_18, check_hlds__oisu_check__DestructorPreds_9, ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_KindMap_16_16)), &check_hlds__oisu_check__conv5_STATE_VARIABLE_KindMap_11);
    }
    *check_hlds__oisu_check__STATE_VARIABLE_KindMap_11 = ((MR_Word) check_hlds__oisu_check__conv5_STATE_VARIABLE_KindMap_11);
  }
}

static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_2(
  MR_Box check_hlds__oisu_check__closure_arg,
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box * check_hlds__oisu_check__wrapper_arg_2,
  MR_Box check_hlds__oisu_check__wrapper_arg_3,
  MR_Box * check_hlds__oisu_check__wrapper_arg_4,
  MR_Box check_hlds__oisu_check__wrapper_arg_5,
  MR_Box * check_hlds__oisu_check__wrapper_arg_6)
{
  {
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
    MR_Word check_hlds__oisu_check__conv4_Pair_14;
    MR_Word check_hlds__oisu_check__conv3_STATE_VARIABLE_OISUProcs_47;
    MR_Word check_hlds__oisu_check__conv2_STATE_VARIABLE_Specs_49;

    {
      check_hlds__oisu_check__check_local_oisu_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__oisu_check__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__oisu_check__wrapper_arg_1), &check_hlds__oisu_check__conv4_Pair_14, ((MR_Word) check_hlds__oisu_check__wrapper_arg_3), &check_hlds__oisu_check__conv3_STATE_VARIABLE_OISUProcs_47, ((MR_Word) check_hlds__oisu_check__wrapper_arg_5), &check_hlds__oisu_check__conv2_STATE_VARIABLE_Specs_49);
    }
    *check_hlds__oisu_check__wrapper_arg_2 = ((MR_Box) (check_hlds__oisu_check__conv4_Pair_14));
    *check_hlds__oisu_check__wrapper_arg_4 = ((MR_Box) (check_hlds__oisu_check__conv3_STATE_VARIABLE_OISUProcs_47));
    *check_hlds__oisu_check__wrapper_arg_6 = ((MR_Box) (check_hlds__oisu_check__conv2_STATE_VARIABLE_Specs_49));
  }
}

static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_1(
  MR_Box check_hlds__oisu_check__closure_arg,
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
  MR_Box * check_hlds__oisu_check__wrapper_arg_3)
{
  {
    MR_Box check_hlds__oisu_check__closure = check_hlds__oisu_check__closure_arg;
    MR_Word check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_11;

    {
      check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0(((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), &check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_11);
    }
    *check_hlds__oisu_check__wrapper_arg_3 = ((MR_Box) (check_hlds__oisu_check__conv0_STATE_VARIABLE_KindMap_11));
  }
}

void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0(
  MR_Word check_hlds__oisu_check__OISUPairs_5,
  MR_Word check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_17,
  MR_Word * check_hlds__oisu_check__Specs_7)
{
  {
    MR_Word check_hlds__oisu_check__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word check_hlds__oisu_check__TypeCtorInfo_31_31;
    MR_Word check_hlds__oisu_check__TypeInfo_41_41;
    MR_Word check_hlds__oisu_check__KindMap0_8;
    MR_Word check_hlds__oisu_check__KindMap_9;
    MR_Word check_hlds__oisu_check__PredTable0_10;
    MR_Word check_hlds__oisu_check__Preds0_11;
    MR_Word check_hlds__oisu_check__OISUTypeCtors_12;
    MR_Word check_hlds__oisu_check__Preds_13;
    MR_Word check_hlds__oisu_check__OISUProcs_14;
    MR_Word check_hlds__oisu_check__PredTable_15;
    MR_Word check_hlds__oisu_check__Var_19;
    MR_Word check_hlds__oisu_check__Var_20;
    MR_Word check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_22_22;
    MR_Box check_hlds__oisu_check__conv1_KindMap_9;
    MR_Box check_hlds__oisu_check__conv6_OISUProcs_14;
    MR_Box check_hlds__oisu_check__conv5_Specs_7;

    {
      mercury__map__init_1_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, (MR_Word) &check_hlds__oisu_check_scalar_common_1[0], &check_hlds__oisu_check__KindMap0_8);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__oisu_check_scalar_common_2[0], (MR_Word) &check_hlds__oisu_check_scalar_common_2[1], (MR_Word) &check_hlds__oisu_check_scalar_common_2[3], check_hlds__oisu_check__OISUPairs_5, ((MR_Box) (check_hlds__oisu_check__KindMap0_8)), &check_hlds__oisu_check__conv1_KindMap_9);
    }
    check_hlds__oisu_check__KindMap_9 = ((MR_Word) check_hlds__oisu_check__conv1_KindMap_9);
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__oisu_check__PredTable0_10);
    }
    check_hlds__oisu_check__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    {
      mercury__map__to_assoc_list_2_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeCtorInfo_31_31, check_hlds__oisu_check__PredTable0_10, &check_hlds__oisu_check__Preds0_11);
    }
    {
      mercury__assoc_list__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0, check_hlds__oisu_check__OISUPairs_5, &check_hlds__oisu_check__OISUTypeCtors_12);
    }
    {
      check_hlds__oisu_check__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_19, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_19, 1) = ((MR_Box) (check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_19, 3) = ((MR_Box) (check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_0_16));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_19, 4) = ((MR_Box) (check_hlds__oisu_check__KindMap_9));
      MR_hl_field(MR_mktag(0), check_hlds__oisu_check__Var_19, 5) = ((MR_Box) (check_hlds__oisu_check__OISUTypeCtors_12));
    }
    {
      check_hlds__oisu_check__Var_20 = mercury__set__init_0_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
    }
    check_hlds__oisu_check__TypeInfo_41_41 = (MR_Word) &check_hlds__oisu_check_scalar_common_2[2];
    {
      mercury__list__map_foldl2_7_p_0(check_hlds__oisu_check__TypeInfo_41_41, check_hlds__oisu_check__TypeInfo_41_41, (MR_Word) &check_hlds__oisu_check_scalar_common_1[1], (MR_Word) &check_hlds__oisu_check_scalar_common_1[2], check_hlds__oisu_check__Var_19, check_hlds__oisu_check__Preds0_11, &check_hlds__oisu_check__Preds_13, ((MR_Box) (check_hlds__oisu_check__Var_20)), &check_hlds__oisu_check__conv6_OISUProcs_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__oisu_check__conv5_Specs_7);
    }
    check_hlds__oisu_check__OISUProcs_14 = ((MR_Word) check_hlds__oisu_check__conv6_OISUProcs_14);
    *check_hlds__oisu_check__Specs_7 = ((MR_Word) check_hlds__oisu_check__conv5_Specs_7);
    {
      mercury__map__from_assoc_list_2_p_0(check_hlds__oisu_check__TypeCtorInfo_24_24, check_hlds__oisu_check__TypeCtorInfo_31_31, check_hlds__oisu_check__Preds_13, &check_hlds__oisu_check__PredTable_15);
    }
    {
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__oisu_check__PredTable_15, check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_22_22);
    }
    {
      hlds__hlds_module__module_info_set_oisu_procs_3_p_0(check_hlds__oisu_check__OISUProcs_14, check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__oisu_check__STATE_VARIABLE_ModuleInfo_17);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0_10001(
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2)
{
  {
    MR_bool check_hlds__oisu_check__succeeded;

    {
      check_hlds__oisu_check__succeeded = check_hlds__oisu_check____Unify____oisu_kind_map_0_0(((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2));
    }
    return check_hlds__oisu_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0_10001(
  MR_Box * check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
  MR_Box check_hlds__oisu_check__wrapper_arg_3)
{
  {
    MR_Word check_hlds__oisu_check__conv0_HeadVar__1_1;

    {
      check_hlds__oisu_check____Compare____oisu_kind_map_0_0(&check_hlds__oisu_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), ((MR_Word) check_hlds__oisu_check__wrapper_arg_3));
    }
    *check_hlds__oisu_check__wrapper_arg_1 = ((MR_Box) (check_hlds__oisu_check__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0_10001(
  MR_Box check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2)
{
  {
    MR_bool check_hlds__oisu_check__succeeded;

    {
      check_hlds__oisu_check__succeeded = check_hlds__oisu_check____Unify____oisu_pred_kind_0_0(((MR_Word) check_hlds__oisu_check__wrapper_arg_1), ((MR_Word) check_hlds__oisu_check__wrapper_arg_2));
    }
    return check_hlds__oisu_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0_10001(
  MR_Box * check_hlds__oisu_check__wrapper_arg_1,
  MR_Box check_hlds__oisu_check__wrapper_arg_2,
  MR_Box check_hlds__oisu_check__wrapper_arg_3)
{
  {
    MR_Word check_hlds__oisu_check__conv0_HeadVar__1_1;

    {
      check_hlds__oisu_check____Compare____oisu_pred_kind_0_0(&check_hlds__oisu_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__oisu_check__wrapper_arg_2), ((MR_Word) check_hlds__oisu_check__wrapper_arg_3));
    }
    *check_hlds__oisu_check__wrapper_arg_1 = ((MR_Box) (check_hlds__oisu_check__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__oisu_check__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.oisu_check. */
