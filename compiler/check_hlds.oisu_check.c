/*
** Automatically generated from `oisu_check.m'
** by the Mercury compiler,
** version rotd-2019-09-27
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module check_hlds.oisu_check.
// :- implementation.

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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "require.mih"
#include "robdd.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




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
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__oisu_check__check_local_oisu_pred_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word KindMap_11,
  MR_Word OISUTypeCtors_12,
  MR_Word Pair0_13,
  MR_Word * Pair_14,
  MR_Word STATE_VARIABLE_OISUProcs_0_46,
  MR_Word * STATE_VARIABLE_OISUProcs_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49);

static void MR_CALL 
check_hlds__oisu_check__check_args_have_no_oisu_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__oisu_check__check_arg_oisu_types_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredInfo_2,
  MR_Word KindFors_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_HandledOISUTypeCtors_0_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(
  MR_Word HeadKindFor_4,
  MR_Word TailKindFors_5,
  MR_Word * Pieces_6);

static void MR_CALL 
check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HandledOISUTypeCtors_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__oisu_check__find_kind_for_oisu_type_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeCtor_6,
  MR_Word * Kind_7);

static void MR_CALL 
check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word Kind_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_KindMap_0_13,
  MR_Word * STATE_VARIABLE_KindMap_14);

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_KindMap_0_10,
  MR_Word * STATE_VARIABLE_KindMap_11);

static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so it should have exactly one procedure."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration,"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in a"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is mentioned"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the following OISU types, but it does not:"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is declared to handle"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "handles a previous handled OISU type."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but its mode is not output."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a creator of its OISU type,"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but its mode is not input."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be a destructor of its OISU type,"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of its OISU type,"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[27])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be the output of the mutator"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "another argument of the same type."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "it should be followed by"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is a mutator of its OISU type,"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but it is not listed in that type\'s OISU pragma."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is an OISU type"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[3])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Since the"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not mentioned"))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "oisu"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
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
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__oisu_check_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 9)),
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
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__oisu_check__check_hlds__oisu_check__type_ctor_info_oisu_pred_kind_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0)),
    ((MR_Box) (&check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__oisu_check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__oisu_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__oisu_check__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&check_hlds__oisu_check__list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__oisu_check__check_hlds__oisu_check__type_ctor_info_oisu_kind_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__oisu_check____Unify____oisu_kind_map_0_0_10001)),
  ((MR_Box) (check_hlds__oisu_check____Compare____oisu_kind_map_0_0_10001)),
  (MR_String) "check_hlds.oisu_check",
  (MR_String) "oisu_kind_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__oisu_check__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_oisu_pred_kind_for_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_0 = {
  (MR_String) "oisu_creator",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_1 = {
  (MR_String) "oisu_mutator",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__oisu_check__check_hlds__oisu_check__enum_functor_desc_oisu_pred_kind_0_2 = {
  (MR_String) "oisu_destructor",
  INT32_C(2)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__oisu_check____Unify____oisu_pred_kind_0_0_10001)),
  ((MR_Box) (check_hlds__oisu_check____Compare____oisu_pred_kind_0_0_10001)),
  (MR_String) "check_hlds.oisu_check",
  (MR_String) "oisu_pred_kind",
  {     check_hlds__oisu_check__check_hlds__oisu_check__enum_name_ordered_oisu_pred_kind_0 },
  {     check_hlds__oisu_check__check_hlds__oisu_check__enum_value_ordered_oisu_pred_kind_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__oisu_check__check_hlds__oisu_check__functor_number_map_oisu_pred_kind_0
};

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__oisu_check_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__oisu_check_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__oisu_check__check_local_oisu_pred_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word KindMap_11,
  MR_Word OISUTypeCtors_12,
  MR_Word Pair0_13,
  MR_Word * Pair_14,
  MR_Word STATE_VARIABLE_OISUProcs_0_46,
  MR_Word * STATE_VARIABLE_OISUProcs_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49)
{
  {
    MR_bool succeeded;
    MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pair0_13, (MR_Integer) 0))));
    MR_Word PredInfo0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pair0_13, (MR_Integer) 1))));
    MR_Word Status0_19;
    MR_Word Status_21;
    MR_Word IsDefnInModule_22;
    MR_Word StatusPrime_20;
    MR_Word Var_50;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_18, &Status0_19);
    Var_50 = (MR_Word) (Status0_19);
    succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 1);
    if (succeeded)
    {
      StatusPrime_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0))));
      Status_21 = (MR_Word) (StatusPrime_20);
    }
    else
      Status_21 = Status0_19;
    IsDefnInModule_22 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_21);
    switch (IsDefnInModule_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Pair_14 = Pair0_13;
          *STATE_VARIABLE_OISUProcs_47 = STATE_VARIABLE_OISUProcs_0_46;
          *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word KindFors_23;
          MR_Box conv0_KindFors_23;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__oisu_check_scalar_common_1[0]), KindMap_11, ((MR_Box) (PredId_17)), &conv0_KindFors_23);
          if (succeeded)
          {
            KindFors_23 = ((MR_Word) (conv0_KindFors_23));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word ProcTable0_24;
            MR_Word Procs0_25;

            hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_18, &ProcTable0_24);
            mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_24, &Procs0_25);
            if ((Procs0_25 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.oisu_check.check_local_oisu_pred\'/9", (MR_String) "no procedure for local predicate");
                return;
              }
            else
            {
              MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Procs0_25, (MR_Integer) 1))));
              MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Procs0_25, (MR_Integer) 0))));

              if ((Var_102 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Integer ProcId_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_103, (MR_Integer) 0))));
                MR_Word ProcInfo0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_103, (MR_Integer) 1))));
                MR_Word ArgTypes_28;
                MR_Word ArgModes_29;
                MR_Word ArgTypesModes_30;
                MR_Word ProcInfo_31;
                MR_Word Procs_32;
                MR_Word ProcTable_33;
                MR_Word PredInfo_34;
                MR_Word Var_84;
                MR_Word Var_86;

                hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_18, &ArgTypes_28);
                hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_27, &ArgModes_29);
                mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgTypes_28, ArgModes_29, &ArgTypesModes_30);
                check_hlds__oisu_check__check_arg_oisu_types_9_p_0(ModuleInfo_10, PredInfo0_18, KindFors_23, OISUTypeCtors_12, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), ArgTypesModes_30, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
                hlds__hlds_pred__proc_info_set_oisu_kind_fors_3_p_0(KindFors_23, ProcInfo0_27, &ProcInfo_31);
                {
                  Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (ProcId_26));
                  MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (ProcInfo_31));
                }
                {
                  Procs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Procs_32, 0) = ((MR_Box) (Var_84));
                  MR_hl_field(MR_mktag(1), Procs_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_32, &ProcTable_33);
                hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_33, PredInfo0_18, &PredInfo_34);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Pair_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_17));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredInfo_34));
                }
                {
                  Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (PredId_17));
                  MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (ProcId_26));
                }
                mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Var_86)), STATE_VARIABLE_OISUProcs_0_46, STATE_VARIABLE_OISUProcs_47);
              }
              else
              {
                MR_Word PredDesc_38;
                MR_Word ProcsPieces_39;
                MR_Word Context_40;
                MR_Word ProcsMsg_41;
                MR_Word ProcsSpec_42;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word Var_76;

                PredDesc_38 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo0_18);
                ProcsPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredDesc_38, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[13])));
                hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_18, &Context_40);
                {
                  Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (ProcsPieces_39));
                }
                {
                  Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
                  MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  ProcsMsg_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ProcsMsg_41, 0) = ((MR_Box) (Context_40));
                  MR_hl_field(MR_mktag(1), ProcsMsg_41, 1) = ((MR_Box) (Var_71));
                }
                {
                  Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (ProcsMsg_41));
                  MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  ProcsSpec_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ProcsSpec_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), ProcsSpec_42, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                  MR_hl_field(MR_mktag(0), ProcsSpec_42, 2) = ((MR_Box) (Var_76));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_49 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcsSpec_42));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_48));
                }
                *Pair_14 = Pair0_13;
                *STATE_VARIABLE_OISUProcs_47 = STATE_VARIABLE_OISUProcs_0_46;
              }
            }
          }
          else
          {
            MR_Word Origin_43;

            hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_18, &Origin_43);
            succeeded = ((MR_tag((MR_Word) Origin_43)) == (MR_Integer) 1);
            if (succeeded)
              *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
            else
            {
              MR_Word ArgTypes_91;

              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_18, &ArgTypes_91);
              check_hlds__oisu_check__check_args_have_no_oisu_types_5_p_0(PredInfo0_18, OISUTypeCtors_12, ArgTypes_91, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
            }
            *Pair_14 = Pair0_13;
            *STATE_VARIABLE_OISUProcs_47 = STATE_VARIABLE_OISUProcs_0_46;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__oisu_check__check_args_have_no_oisu_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Types_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_59_59;
      MR_Word TypeCtor_16;
      MR_Word TypeCtorInfo_61_61;
      MR_Word ArgTypes_17;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_13, &TypeCtor_16, &ArgTypes_17);
      if (succeeded)
      {
        succeeded = (ArgTypes_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeCtorInfo_61_61 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_61_61, ((MR_Box) (TypeCtor_16)), HeadVar__2_2);
        }
      }
      if (succeeded)
      {
        MR_Word PredDesc_18;
        MR_Word TypeName_19;
        MR_Integer TypeArity_20;
        MR_Word ProcsPieces_21;
        MR_Word Context_22;
        MR_Word ProcsMsg_23;
        MR_Word ProcsSpec_24;
        MR_Word Var_28;
        MR_Word Var_31;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_40;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_57;

        PredDesc_18 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, HeadVar__1_1);
        TypeName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_16, (MR_Integer) 0))));
        TypeArity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_16, (MR_Integer) 1))));
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (TypeName_19));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (TypeArity_20));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[48])));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[59])));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[58])));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[57])));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[56])));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[55])));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
        }
        ProcsPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredDesc_18, Var_28);
        hlds__hlds_pred__pred_info_get_context_2_p_0(HeadVar__1_1, &Context_22);
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (ProcsPieces_21));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ProcsMsg_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ProcsMsg_23, 0) = ((MR_Box) (Context_22));
          MR_hl_field(MR_mktag(1), ProcsMsg_23, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ProcsMsg_23));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ProcsSpec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ProcsSpec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ProcsSpec_24, 1) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(MR_mktag(0), ProcsSpec_24, 2) = ((MR_Box) (Var_57));
        }
        {
          STATE_VARIABLE_Specs_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_59_59, 0) = ((MR_Box) (ProcsSpec_24));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_59_59, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
      }
      else
        STATE_VARIABLE_Specs_59_59 = STATE_VARIABLE_Specs_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Types_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_59_59;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__oisu_check__check_arg_oisu_types_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredInfo_2,
  MR_Word KindFors_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word STATE_VARIABLE_HandledOISUTypeCtors_0_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word UnhandledKindFors_316;

      check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(KindFors_3, STATE_VARIABLE_HandledOISUTypeCtors_0_6, &UnhandledKindFors_316);
      if ((UnhandledKindFors_316 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      else
      {
        MR_Word HeadUnhandledKindFor_317 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnhandledKindFors_316, (MR_Integer) 0))));
        MR_Word TailUnhandledKindFors_318 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnhandledKindFors_316, (MR_Integer) 1))));
        MR_Word UnhandledPieces_319;
        MR_Word PredDesc_320;
        MR_Word Pieces_321;
        MR_Word Context_322;
        MR_Word Msg_323;
        MR_Word Spec_324;
        MR_Word Var_329;
        MR_Word Var_340;
        MR_Word Var_341;
        MR_Word Var_345;

        check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(HeadUnhandledKindFor_317, TailUnhandledKindFors_318, &UnhandledPieces_319);
        PredDesc_320 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_2);
        Var_329 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[19])), UnhandledPieces_319);
        Pieces_321 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredDesc_320, Var_329);
        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_2, &Context_322);
        {
          Var_341 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_341, 0) = ((MR_Box) (Pieces_321));
        }
        {
          Var_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_340, 0) = ((MR_Box) (Var_341));
          MR_hl_field(MR_mktag(1), Var_340, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_323 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msg_323, 0) = ((MR_Box) (Context_322));
          MR_hl_field(MR_mktag(1), Msg_323, 1) = ((MR_Box) (Var_340));
        }
        {
          Var_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_345, 0) = ((MR_Box) (Msg_323));
          MR_hl_field(MR_mktag(1), Var_345, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_324 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_324, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_324, 1) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(MR_mktag(0), Spec_324, 2) = ((MR_Box) (Var_345));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_324));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
        }
      }
    }
    else
    {
      MR_Word TypeMode_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
      MR_Word TypesModes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
      MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeMode_16, (MR_Integer) 0))));
      MR_Word Mode_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeMode_16, (MR_Integer) 1))));
      MR_Word TypeCtor_21;
      MR_Word ArgTypes_22;
      MR_Word TypeCtorInfo_348_348;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_19, &TypeCtor_21, &ArgTypes_22);
      if (succeeded)
      {
        TypeCtorInfo_348_348 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_348_348, ((MR_Box) (TypeCtor_21)), HeadVar__4_4);
      }
      if (succeeded)
      {
        MR_Word ThisKind_25;

        if (!((ArgTypes_22 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.oisu_check.check_arg_oisu_types\'/9", (MR_String) "ArgTypes != []");
            return;
          }
        succeeded = check_hlds__oisu_check__find_kind_for_oisu_type_3_p_0(KindFors_3, TypeCtor_21, &ThisKind_25);
        if (succeeded)
        {
          MR_Integer RestArgNum_31;
          MR_Word RestTypesModes_32;
          MR_Word STATE_VARIABLE_Specs_81_81;
          MR_Word STATE_VARIABLE_HandledOISUTypeCtors_83_83;
          MR_Integer next_value_of_HeadVar__5_5;
          MR_Word next_value_of_STATE_VARIABLE_HandledOISUTypeCtors_0_6;
          MR_Word next_value_of_HeadVar__7_7;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

          succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_21)), STATE_VARIABLE_HandledOISUTypeCtors_0_6);
          if (succeeded)
          {
            MR_Word DupPredDesc_26;
            MR_Word DupPieces_27;
            MR_Word DupContext_28;
            MR_Word DupMsg_29;
            MR_Word DupSpec_30;
            MR_Word Var_58;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_67;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_79;

            DupPredDesc_26 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_2);
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (HeadVar__5_5));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
              MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
            }
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
              MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
            }
            Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DupPredDesc_26, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[21])));
            DupPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_58, Var_67);
            hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_2, &DupContext_28);
            {
              Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (DupPieces_27));
            }
            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              DupMsg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DupMsg_29, 0) = ((MR_Box) (DupContext_28));
              MR_hl_field(MR_mktag(1), DupMsg_29, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (DupMsg_29));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              DupSpec_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DupSpec_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), DupSpec_30, 1) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(MR_mktag(0), DupSpec_30, 2) = ((MR_Box) (Var_79));
            }
            {
              STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (DupSpec_30));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
            }
            RestArgNum_31 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
            RestTypesModes_32 = TypesModes_17;
            STATE_VARIABLE_HandledOISUTypeCtors_83_83 = STATE_VARIABLE_HandledOISUTypeCtors_0_6;
          }
          else
          {
            {
              STATE_VARIABLE_HandledOISUTypeCtors_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_HandledOISUTypeCtors_83_83, 0) = ((MR_Box) (TypeCtor_21));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_HandledOISUTypeCtors_83_83, 1) = ((MR_Box) (STATE_VARIABLE_HandledOISUTypeCtors_0_6));
            }
            switch (ThisKind_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = check_hlds__mode_util__mode_is_output_2_p_0(HeadVar__1_1, Mode_20);
                  if (succeeded)
                    STATE_VARIABLE_Specs_81_81 = STATE_VARIABLE_Specs_0_8;
                  else
                  {
                    MR_Word PredDesc_33;
                    MR_Word Pieces_34;
                    MR_Word Context_35;
                    MR_Word Msg_36;
                    MR_Word Spec_37;
                    MR_Word Var_211;
                    MR_Word Var_214;
                    MR_Word Var_215;
                    MR_Word Var_220;
                    MR_Word Var_230;
                    MR_Word Var_231;
                    MR_Word Var_235;

                    PredDesc_33 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_2);
                    {
                      Var_215 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_215, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_215, 1) = ((MR_Box) (HeadVar__5_5));
                    }
                    {
                      Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (Var_215));
                      MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
                    }
                    {
                      Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
                      MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (Var_214));
                    }
                    Var_220 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredDesc_33, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[25])));
                    Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_211, Var_220);
                    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_2, &Context_35);
                    {
                      Var_231 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_231, 0) = ((MR_Box) (Pieces_34));
                    }
                    {
                      Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_230, 0) = ((MR_Box) (Var_231));
                      MR_hl_field(MR_mktag(1), Var_230, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Msg_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Msg_36, 0) = ((MR_Box) (Context_35));
                      MR_hl_field(MR_mktag(1), Msg_36, 1) = ((MR_Box) (Var_230));
                    }
                    {
                      Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_235, 0) = ((MR_Box) (Msg_36));
                      MR_hl_field(MR_mktag(1), Var_235, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                      MR_hl_field(MR_mktag(0), Spec_37, 2) = ((MR_Box) (Var_235));
                    }
                    {
                      STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (Spec_37));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
                    }
                  }
                  RestArgNum_31 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
                  RestTypesModes_32 = TypesModes_17;
                }
                break;
              case (MR_Integer) 2:
                {
                  succeeded = check_hlds__mode_util__mode_is_input_2_p_0(HeadVar__1_1, Mode_20);
                  if (succeeded)
                    STATE_VARIABLE_Specs_81_81 = STATE_VARIABLE_Specs_0_8;
                  else
                  {
                    MR_Word Var_85;
                    MR_Word Var_88;
                    MR_Word Var_89;
                    MR_Word Var_94;
                    MR_Word Var_104;
                    MR_Word Var_105;
                    MR_Word Var_109;
                    MR_Word PredDesc_289;
                    MR_Word Pieces_290;
                    MR_Word Context_291;
                    MR_Word Msg_292;
                    MR_Word Spec_293;

                    PredDesc_289 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_2);
                    {
                      Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (HeadVar__5_5));
                    }
                    {
                      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
                      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
                    }
                    {
                      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
                      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_88));
                    }
                    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredDesc_289, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[29])));
                    Pieces_290 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_85, Var_94);
                    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_2, &Context_291);
                    {
                      Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (Pieces_290));
                    }
                    {
                      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
                      MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Msg_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Msg_292, 0) = ((MR_Box) (Context_291));
                      MR_hl_field(MR_mktag(1), Msg_292, 1) = ((MR_Box) (Var_104));
                    }
                    {
                      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Msg_292));
                      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_293 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_293, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_293, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                      MR_hl_field(MR_mktag(0), Spec_293, 2) = ((MR_Box) (Var_109));
                    }
                    {
                      STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (Spec_293));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
                    }
                  }
                  RestArgNum_31 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
                  RestTypesModes_32 = TypesModes_17;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TailTypesModes_39;
                  MR_Word NextMode_41;
                  MR_Word NextTypeMode_38;
                  MR_Word NextType_40;

                  succeeded = (TypesModes_17 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    NextTypeMode_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypesModes_17, (MR_Integer) 0))));
                    TailTypesModes_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypesModes_17, (MR_Integer) 1))));
                    NextType_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NextTypeMode_38, (MR_Integer) 0))));
                    NextMode_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NextTypeMode_38, (MR_Integer) 1))));
                    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(NextType_40, Type_19);
                  }
                  if (succeeded)
                  {
                    MR_Word STATE_VARIABLE_Specs_143_143;

                    succeeded = check_hlds__mode_util__mode_is_input_2_p_0(HeadVar__1_1, Mode_20);
                    if (succeeded)
                      STATE_VARIABLE_Specs_143_143 = STATE_VARIABLE_Specs_0_8;
                    else
                    {
                      MR_Word InPredDesc_42;
                      MR_Word InPieces_43;
                      MR_Word InContext_44;
                      MR_Word InMsg_45;
                      MR_Word InSpec_46;
                      MR_Word Var_114;
                      MR_Word Var_117;
                      MR_Word Var_118;
                      MR_Word Var_123;
                      MR_Word Var_136;
                      MR_Word Var_137;
                      MR_Word Var_141;

                      InPredDesc_42 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_2);
                      {
                        Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (HeadVar__5_5));
                      }
                      {
                        Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
                        MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
                      }
                      {
                        Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
                        MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_117));
                      }
                      Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InPredDesc_42, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[33])));
                      InPieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_114, Var_123);
                      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_2, &InContext_44);
                      {
                        Var_137 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (InPieces_43));
                      }
                      {
                        Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
                        MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        InMsg_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), InMsg_45, 0) = ((MR_Box) (InContext_44));
                        MR_hl_field(MR_mktag(1), InMsg_45, 1) = ((MR_Box) (Var_136));
                      }
                      {
                        Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (InMsg_45));
                        MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        InSpec_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), InSpec_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), InSpec_46, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                        MR_hl_field(MR_mktag(0), InSpec_46, 2) = ((MR_Box) (Var_141));
                      }
                      {
                        STATE_VARIABLE_Specs_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_143_143, 0) = ((MR_Box) (InSpec_46));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_143_143, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
                      }
                    }
                    succeeded = check_hlds__mode_util__mode_is_output_2_p_0(HeadVar__1_1, NextMode_41);
                    if (succeeded)
                      STATE_VARIABLE_Specs_81_81 = STATE_VARIABLE_Specs_143_143;
                    else
                    {
                      MR_Word OutPredDesc_47;
                      MR_Word OutPieces_48;
                      MR_Word OutContext_49;
                      MR_Word OutMsg_50;
                      MR_Word OutSpec_51;
                      MR_Word Var_145;
                      MR_Word Var_148;
                      MR_Word Var_149;
                      MR_Integer Var_150;
                      MR_Word Var_156;
                      MR_Word Var_169;
                      MR_Word Var_170;
                      MR_Word Var_174;

                      OutPredDesc_47 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_2);
                      Var_150 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
                      {
                        Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (Var_150));
                      }
                      {
                        Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
                        MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
                      }
                      {
                        Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
                        MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_148));
                      }
                      Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OutPredDesc_47, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[36])));
                      OutPieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_145, Var_156);
                      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_2, &OutContext_49);
                      {
                        Var_170 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_170, 0) = ((MR_Box) (OutPieces_48));
                      }
                      {
                        Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (Var_170));
                        MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        OutMsg_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), OutMsg_50, 0) = ((MR_Box) (OutContext_49));
                        MR_hl_field(MR_mktag(1), OutMsg_50, 1) = ((MR_Box) (Var_169));
                      }
                      {
                        Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (OutMsg_50));
                        MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        OutSpec_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), OutSpec_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), OutSpec_51, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                        MR_hl_field(MR_mktag(0), OutSpec_51, 2) = ((MR_Box) (Var_174));
                      }
                      {
                        STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (OutSpec_51));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (STATE_VARIABLE_Specs_143_143));
                      }
                    }
                    RestArgNum_31 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 2);
                    RestTypesModes_32 = TailTypesModes_39;
                  }
                  else
                  {
                    MR_Word Var_179;
                    MR_Word Var_182;
                    MR_Word Var_183;
                    MR_Word Var_188;
                    MR_Word Var_201;
                    MR_Word Var_202;
                    MR_Word Var_206;
                    MR_Word PredDesc_274;
                    MR_Word Pieces_275;
                    MR_Word Context_276;
                    MR_Word Msg_277;
                    MR_Word Spec_278;

                    PredDesc_274 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_2);
                    {
                      Var_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_183, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_183, 1) = ((MR_Box) (HeadVar__5_5));
                    }
                    {
                      Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (Var_183));
                      MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
                    }
                    {
                      Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[54])));
                      MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_182));
                    }
                    Var_188 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredDesc_274, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[42])));
                    Pieces_275 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_179, Var_188);
                    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_2, &Context_276);
                    {
                      Var_202 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_202, 0) = ((MR_Box) (Pieces_275));
                    }
                    {
                      Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (Var_202));
                      MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Msg_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Msg_277, 0) = ((MR_Box) (Context_276));
                      MR_hl_field(MR_mktag(1), Msg_277, 1) = ((MR_Box) (Var_201));
                    }
                    {
                      Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (Msg_277));
                      MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Spec_278 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Spec_278, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), Spec_278, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                      MR_hl_field(MR_mktag(0), Spec_278, 2) = ((MR_Box) (Var_206));
                    }
                    {
                      STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (Spec_278));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
                    }
                    RestArgNum_31 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
                    RestTypesModes_32 = TypesModes_17;
                  }
                }
                break;
            }
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__5_5 = RestArgNum_31;
          next_value_of_STATE_VARIABLE_HandledOISUTypeCtors_0_6 = STATE_VARIABLE_HandledOISUTypeCtors_83_83;
          next_value_of_HeadVar__7_7 = RestTypesModes_32;
          next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_81_81;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          STATE_VARIABLE_HandledOISUTypeCtors_0_6 = next_value_of_STATE_VARIABLE_HandledOISUTypeCtors_0_6;
          HeadVar__7_7 = next_value_of_HeadVar__7_7;
          STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
          continue;
        }
        else
        {
          MR_Word Var_241;
          MR_Word Var_244;
          MR_Word Var_245;
          MR_Word Var_250;
          MR_Word Var_260;
          MR_Word Var_261;
          MR_Word Var_265;
          MR_Word STATE_VARIABLE_Specs_267_267;
          MR_Integer Var_268;
          MR_Word PredDesc_304;
          MR_Word Pieces_305;
          MR_Word Context_306;
          MR_Word Msg_307;
          MR_Word Spec_308;
          MR_Integer next_value_of_HeadVar__5_5;
          MR_Word next_value_of_HeadVar__7_7;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

          PredDesc_304 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_2);
          {
            Var_245 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_245, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_245, 1) = ((MR_Box) (HeadVar__5_5));
          }
          {
            Var_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_244, 0) = ((MR_Box) (Var_245));
            MR_hl_field(MR_mktag(1), Var_244, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[53])));
          }
          {
            Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_241, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__oisu_check_scalar_common_1[51])));
            MR_hl_field(MR_mktag(1), Var_241, 1) = ((MR_Box) (Var_244));
          }
          Var_250 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredDesc_304, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[46])));
          Pieces_305 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_241, Var_250);
          hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_2, &Context_306);
          {
            Var_261 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_261, 0) = ((MR_Box) (Pieces_305));
          }
          {
            Var_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_260, 0) = ((MR_Box) (Var_261));
            MR_hl_field(MR_mktag(1), Var_260, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_307 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msg_307, 0) = ((MR_Box) (Context_306));
            MR_hl_field(MR_mktag(1), Msg_307, 1) = ((MR_Box) (Var_260));
          }
          {
            Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_265, 0) = ((MR_Box) (Msg_307));
            MR_hl_field(MR_mktag(1), Var_265, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_308 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_308, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_308, 1) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(MR_mktag(0), Spec_308, 2) = ((MR_Box) (Var_265));
          }
          {
            STATE_VARIABLE_Specs_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_267_267, 0) = ((MR_Box) (Spec_308));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_267_267, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
          }
          Var_268 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__5_5 = Var_268;
          next_value_of_HeadVar__7_7 = TypesModes_17;
          next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_267_267;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          HeadVar__7_7 = next_value_of_HeadVar__7_7;
          STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
          continue;
        }
      }
      else
      {
        MR_Integer Var_271 = (MR_Integer) ((MR_Unsigned) HeadVar__5_5 + (MR_Unsigned) 1);
        MR_Integer next_value_of_HeadVar__5_5 = Var_271;
        MR_Word next_value_of_HeadVar__7_7 = TypesModes_17;

        // direct tailcall eliminated
        ;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        HeadVar__7_7 = next_value_of_HeadVar__7_7;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(
  MR_Word HeadKindFor_4,
  MR_Word TailKindFors_5,
  MR_Word * Pieces_6)
{
  {
    MR_Word HeadTypeCtor_7;
    MR_String HeadKind_8;
    MR_Word HeadTypeSymName_9;
    MR_Integer HeadTypeArity_10;
    MR_Word HeadPieces0_11;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_String Var_20;
    MR_String Var_22;

    switch (MR_tag((MR_Word) HeadKindFor_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          HeadTypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadKindFor_4, (MR_Integer) 0))));
          HeadKind_8 = (MR_String) "creator";
        }
        break;
      case (MR_Integer) 1:
        {
          HeadTypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadKindFor_4, (MR_Integer) 0))));
          HeadKind_8 = (MR_String) "mutator";
        }
        break;
      case (MR_Integer) 2:
        {
          HeadTypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadKindFor_4, (MR_Integer) 0))));
          HeadKind_8 = (MR_String) "destructor";
        }
        break;
    }
    HeadTypeSymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadTypeCtor_7, (MR_Integer) 0))));
    HeadTypeArity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadTypeCtor_7, (MR_Integer) 1))));
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (HeadTypeSymName_9));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (HeadTypeArity_10));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (Var_17));
    }
    Var_22 = mercury__string__f_43_43_2_f_0(HeadKind_8, (MR_String) ")");
    Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "(as ", Var_22);
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_19, 0) = ((MR_Box) (Var_20));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      HeadPieces0_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadPieces0_11, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), HeadPieces0_11, 1) = ((MR_Box) (Var_18));
    }
    if ((TailKindFors_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces0_11, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[48])));
    else
    {
      MR_Word HeadTailKindFor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailKindFors_5, (MR_Integer) 0))));
      MR_Word TailTailKindFors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailKindFors_5, (MR_Integer) 1))));
      MR_Word TailPieces_15;
      MR_Word HeadPieces_37;

      HeadPieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces0_11, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__oisu_check_scalar_common_1[50])));
      check_hlds__oisu_check__describe_unhandled_kind_fors_3_p_0(HeadTailKindFor_13, TailTailKindFors_14, &TailPieces_15);
      *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_37, TailPieces_15);
    }
  }
}

static void MR_CALL 
check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HandledOISUTypeCtors_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word KindFor_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word KindFors_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word UnhandledKindForsTail_9;
      MR_Word TypeCtor_10;

      check_hlds__oisu_check__find_unhandled_oisu_kind_fors_3_p_0(KindFors_6, HandledOISUTypeCtors_2, &UnhandledKindForsTail_9);
      switch (MR_tag((MR_Word) KindFor_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          TypeCtor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KindFor_5, (MR_Integer) 0))));
          break;
        case (MR_Integer) 1:
          TypeCtor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KindFor_5, (MR_Integer) 0))));
          break;
        case (MR_Integer) 2:
          TypeCtor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), KindFor_5, (MR_Integer) 0))));
          break;
      }
      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_10)), HandledOISUTypeCtors_2);
      if (succeeded)
        *HeadVar__3_3 = UnhandledKindForsTail_9;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (KindFor_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnhandledKindForsTail_9));
        }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__oisu_check__find_kind_for_oisu_type_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeCtor_6,
  MR_Word * Kind_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word KindFor_4;
    MR_Word KindFors_5;
    MR_Word KindPrime_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      KindFor_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      KindFors_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) KindFor_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KindFor_4, (MR_Integer) 0))));

            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_6, Var_9);
            if (succeeded)
            {
              KindPrime_8 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KindFor_4, (MR_Integer) 0))));

            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_6, Var_10);
            if (succeeded)
            {
              KindPrime_8 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), KindFor_4, (MR_Integer) 0))));

            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_6, Var_11);
            if (succeeded)
            {
              KindPrime_8 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          break;
      }
      if (succeeded)
      {
        *Kind_7 = KindPrime_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = KindFors_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word Kind_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_KindMap_0_13,
  MR_Word * STATE_VARIABLE_KindMap_14)
{
  {
    MR_bool succeeded;
    MR_Word KindFor_10;
    MR_Word OldEntries_11;
    MR_Box conv0_OldEntries_11;

    switch (Kind_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          KindFor_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), KindFor_10, 0) = ((MR_Box) (TypeCtor_6));
        }
        break;
      case (MR_Integer) 2:
        {
          KindFor_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), KindFor_10, 0) = ((MR_Box) (TypeCtor_6));
        }
        break;
      case (MR_Integer) 1:
        {
          KindFor_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), KindFor_10, 0) = ((MR_Box) (TypeCtor_6));
        }
        break;
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__oisu_check_scalar_common_1[0]), STATE_VARIABLE_KindMap_0_13, ((MR_Box) (PredId_8)), &conv0_OldEntries_11);
    if (succeeded)
    {
      OldEntries_11 = ((MR_Word) (conv0_OldEntries_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Entries_12;

      {
        Entries_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Entries_12, 0) = ((MR_Box) (KindFor_10));
        MR_hl_field(MR_mktag(1), Entries_12, 1) = ((MR_Box) (OldEntries_11));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__oisu_check_scalar_common_1[0]), ((MR_Box) (PredId_8)), ((MR_Box) (Entries_12)), STATE_VARIABLE_KindMap_0_13, STATE_VARIABLE_KindMap_14);
    }
    else
    {
      MR_Word Entries_18;

      {
        Entries_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Entries_18, 0) = ((MR_Box) (KindFor_10));
        MR_hl_field(MR_mktag(1), Entries_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__oisu_check_scalar_common_1[0]), ((MR_Box) (PredId_8)), ((MR_Box) (Entries_18)), STATE_VARIABLE_KindMap_0_13, STATE_VARIABLE_KindMap_14);
    }
  }
}

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_KindMap_14;

    check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_KindMap_14);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_KindMap_14));
  }
}

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_KindMap_14;

    check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_KindMap_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_KindMap_14));
  }
}

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_KindMap_14;

    check_hlds__oisu_check__add_pred_to_kind_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_KindMap_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_KindMap_14));
  }
}

static void MR_CALL 
check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_KindMap_0_10,
  MR_Word * STATE_VARIABLE_KindMap_11)
{
  {
    MR_Word TypeCtor_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word OISUPreds_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word CreatorPreds_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUPreds_5, (MR_Integer) 0))));
    MR_Word MutatorPreds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUPreds_5, (MR_Integer) 1))));
    MR_Word DestructorPreds_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUPreds_5, (MR_Integer) 2))));
    MR_Word Var_12;
    MR_Word STATE_VARIABLE_KindMap_13_13;
    MR_Word Var_15;
    MR_Word STATE_VARIABLE_KindMap_16_16;
    MR_Word Var_18;
    MR_Box conv1_STATE_VARIABLE_KindMap_13_13;
    MR_Box conv3_STATE_VARIABLE_KindMap_16_16;
    MR_Box conv5_STATE_VARIABLE_KindMap_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (TypeCtor_4));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__oisu_check_scalar_common_2[1]), Var_12, CreatorPreds_7, ((MR_Box) (STATE_VARIABLE_KindMap_0_10)), &conv1_STATE_VARIABLE_KindMap_13_13);
    STATE_VARIABLE_KindMap_13_13 = ((MR_Word) (conv1_STATE_VARIABLE_KindMap_13_13));
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TypeCtor_4));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__oisu_check_scalar_common_2[1]), Var_15, MutatorPreds_8, ((MR_Box) (STATE_VARIABLE_KindMap_13_13)), &conv3_STATE_VARIABLE_KindMap_16_16);
    STATE_VARIABLE_KindMap_16_16 = ((MR_Word) (conv3_STATE_VARIABLE_KindMap_16_16));
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0_3));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (TypeCtor_4));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__oisu_check_scalar_common_2[1]), Var_18, DestructorPreds_9, ((MR_Box) (STATE_VARIABLE_KindMap_16_16)), &conv5_STATE_VARIABLE_KindMap_11);
    *STATE_VARIABLE_KindMap_11 = ((MR_Word) (conv5_STATE_VARIABLE_KindMap_11));
  }
}

static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Pair_14;
    MR_Word conv3_STATE_VARIABLE_OISUProcs_47;
    MR_Word conv2_STATE_VARIABLE_Specs_49;

    check_hlds__oisu_check__check_local_oisu_pred_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv4_Pair_14, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_OISUProcs_47, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_Specs_49);
    *wrapper_arg_2 = ((MR_Box) (conv4_Pair_14));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_OISUProcs_47));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_49));
  }
}

static void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_KindMap_11;

    check_hlds__oisu_check__add_type_ctor_to_kind_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_KindMap_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_KindMap_11));
  }
}

void MR_CALL 
check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0(
  MR_Word OISUPairs_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word * Specs_7)
{
  {
    MR_Word KindMap0_8;
    MR_Word KindMap_9;
    MR_Word PredTable0_10;
    MR_Word Preds0_11;
    MR_Word OISUTypeCtors_12;
    MR_Word Preds_13;
    MR_Word OISUProcs_14;
    MR_Word PredTable_15;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_ModuleInfo_22_22;
    MR_Box conv1_KindMap_9;
    MR_Box conv6_OISUProcs_14;
    MR_Box conv5_Specs_7;

    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__oisu_check_scalar_common_1[0]), &KindMap0_8);
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__oisu_check_scalar_common_2[0]), (MR_Word) (&check_hlds__oisu_check_scalar_common_2[1]), (MR_Word) (&check_hlds__oisu_check_scalar_common_2[3]), OISUPairs_5, ((MR_Box) (KindMap0_8)), &conv1_KindMap_9);
    KindMap_9 = ((MR_Word) (conv1_KindMap_9));
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &PredTable0_10);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_10, &Preds0_11);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0), OISUPairs_5, &OISUTypeCtors_12);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&check_hlds__oisu_check_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (check_hlds__oisu_check__check_oisu_pragmas_for_module_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (KindMap_9));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (OISUTypeCtors_12));
    }
    Var_20 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
    mercury__list__map_foldl2_7_p_0((MR_Word) (&check_hlds__oisu_check_scalar_common_2[2]), (MR_Word) (&check_hlds__oisu_check_scalar_common_2[2]), (MR_Word) (&check_hlds__oisu_check_scalar_common_1[1]), (MR_Word) (&check_hlds__oisu_check_scalar_common_1[2]), Var_19, Preds0_11, &Preds_13, ((MR_Box) (Var_20)), &conv6_OISUProcs_14, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_Specs_7);
    OISUProcs_14 = ((MR_Word) (conv6_OISUProcs_14));
    *Specs_7 = ((MR_Word) (conv5_Specs_7));
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_13, &PredTable_15);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_15, STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_22_22);
    hlds__hlds_module__module_info_set_oisu_procs_3_p_0(OISUProcs_14, STATE_VARIABLE_ModuleInfo_22_22, STATE_VARIABLE_ModuleInfo_17);
  }
}

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_kind_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__oisu_check____Unify____oisu_kind_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_kind_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__oisu_check____Compare____oisu_kind_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__oisu_check____Unify____oisu_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__oisu_check____Unify____oisu_pred_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__oisu_check____Compare____oisu_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__oisu_check____Compare____oisu_pred_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module check_hlds.oisu_check.
