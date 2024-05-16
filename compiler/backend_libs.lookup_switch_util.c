/*
** Automatically generated from `lookup_switch_util.m'
** by the Mercury compiler,
** version rotd-2024-05-16
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


// :- module backend_libs.lookup_switch_util.
// :- implementation.

/*
INIT mercury__backend_libs__lookup_switch_util__init
ENDINIT
*/

#include "backend_libs.lookup_switch_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.string_encoding.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"




static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__pti_soln_consts_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__lookup_switch_util__list__pti_list_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__lookup_switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

static const MR_PseudoTypeInfo backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_case_consts_3_0[1];

static const MR_DuFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_case_consts_3_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__lookup_switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_backend_libs__lookup_switch_util__pti_soln_consts_1__pseudo_2;

static const MR_PseudoTypeInfo backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_case_consts_3_1[2];

static const MR_DuFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_case_consts_3_1;

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_case_consts_3_0[1];

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_case_consts_3_1[1];

static const MR_DuPtagLayout backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_ptag_ordered_case_consts_3[2];

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_name_ordered_case_consts_3[2];

static const MR_Integer backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_case_consts_3[2];

static const MR_FA_TypeInfo_Struct1 backend_libs__lookup_switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__lookup_switch_util__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_case_consts_several_llds_0_0[2];

static const MR_DuArgLocn backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_locns_case_consts_several_llds_0_0[2];

static const MR_DuFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_case_consts_several_llds_0_0;

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_case_consts_several_llds_0_0[1];

static const MR_DuPtagLayout backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_ptag_ordered_case_consts_several_llds_0[1];

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_name_ordered_case_consts_several_llds_0[1];

static const MR_Integer backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_case_consts_several_llds_0[1];

static const MR_EnumFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_bit_vec_check_0_0;

static const MR_EnumFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_bit_vec_check_0_1;

static const MR_EnumFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_bit_vec_check_0_2;

static const MR_EnumFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_ordinal_ordered_need_bit_vec_check_0[3];

static const MR_EnumFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_name_ordered_need_bit_vec_check_0[3];

static const MR_Integer backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_need_bit_vec_check_0[3];

static const MR_EnumFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_range_check_0_0;

static const MR_EnumFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_range_check_0_1;

static const MR_EnumFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_ordinal_ordered_need_range_check_0[2];

static const MR_EnumFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_name_ordered_need_range_check_0[2];

static const MR_Integer backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_need_range_check_0[2];

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__lookup_switch_util__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_soln_consts_1_0[1];

static const MR_DuFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_soln_consts_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__lookup_switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_soln_consts_1_1[2];

static const MR_DuFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_soln_consts_1_1;

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_soln_consts_1_0[1];

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_soln_consts_1_1[1];

static const MR_DuPtagLayout backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_ptag_ordered_soln_consts_1[2];

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_name_ordered_soln_consts_1[2];

static const MR_Integer backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_soln_consts_1[2];

static MR_bool MR_CALL 
backend_libs__lookup_switch_util__project_soln_consts_to_one_soln_3_p_0(
  MR_Word TypeInfo_for_Key_7,
  MR_Word TypeInfo_for_Rval_8,
  MR_Box _Key_4,
  MR_Word Solns_5,
  MR_Word * Values_6);

static MR_bool MR_CALL 
backend_libs__lookup_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_115_111_108_110_95_99_111_110_115_116_115_95_116_111_95_111_110_101_95_115_111_108_110_95_95_91_49_44_32_51_93_95_48_3_p_0(
  MR_Word TypeInfo_for_Rval_8,
  MR_Word Solns_5,
  MR_Word * Values_6);

static void MR_CALL 
backend_libs__lookup_switch_util__add_to_ctor_repn_int_tag_range_5_p_0(
  MR_Word CtorRepn_6,
  MR_Integer STATE_VARIABLE_Min_0_11,
  MR_Integer * STATE_VARIABLE_Min_12,
  MR_Integer STATE_VARIABLE_Max_0_13,
  MR_Integer * STATE_VARIABLE_Max_14);

static MR_bool MR_CALL 
backend_libs__lookup_switch_util__project_all_to_one_solution_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__lookup_switch_util__filter_out_failing_cases_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TaggedCasesCord_0_2,
  MR_Word * STATE_VARIABLE_TaggedCasesCord_3,
  MR_Word STATE_VARIABLE_SwitchCanFail_0_4,
  MR_Word * STATE_VARIABLE_SwitchCanFail_5);

static void MR_CALL 
backend_libs__lookup_switch_util__type_range_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____case_consts_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static void MR_CALL 
backend_libs__lookup_switch_util____Compare____case_consts_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____case_consts_several_llds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__lookup_switch_util____Compare____case_consts_several_llds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____need_bit_vec_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__lookup_switch_util____Compare____need_bit_vec_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____need_range_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__lookup_switch_util____Compare____need_range_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____soln_consts_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
backend_libs__lookup_switch_util____Compare____soln_consts_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box backend_libs__lookup_switch_util_scalar_common_1[1][2];

static /* final */ const MR_Box backend_libs__lookup_switch_util_scalar_common_2[2][8];

static /* final */ const MR_Box backend_libs__lookup_switch_util_scalar_common_3[1][3];

static /* final */ const MR_Integer backend_libs__lookup_switch_util_scalar_common_4[1][3];




static /* final */ const MR_Box backend_libs__lookup_switch_util_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box backend_libs__lookup_switch_util_scalar_common_2[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&backend_libs__lookup_switch_util_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__pti_soln_consts_1__pseudo_2)),
    ((MR_Box) (&backend_libs__lookup_switch_util__list__pti_list_1__pseudo_2))
  },
};

static /* final */ const MR_Box backend_libs__lookup_switch_util_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&backend_libs__lookup_switch_util_scalar_common_2[0])),
    ((MR_Box) (backend_libs__lookup_switch_util__type_range_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer backend_libs__lookup_switch_util_scalar_common_4[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__pti_soln_consts_1__pseudo_2 = {
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_soln_consts_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__lookup_switch_util__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__lookup_switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&backend_libs__lookup_switch_util__list__pti_list_1__pseudo_2)
  }
};

static const MR_PseudoTypeInfo backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_case_consts_3_0[1] = { (MR_PseudoTypeInfo) (&backend_libs__lookup_switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2) };

static const MR_DuFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_case_consts_3_0 = {
  (MR_String) "all_one_soln",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_case_consts_3_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__lookup_switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_backend_libs__lookup_switch_util__pti_soln_consts_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__pti_soln_consts_1__pseudo_2)
  }
};

static const MR_PseudoTypeInfo backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_case_consts_3_1[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__lookup_switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_backend_libs__lookup_switch_util__pti_soln_consts_1__pseudo_2),
  (MR_PseudoTypeInfo) ((MR_Integer) 3)
};

static const MR_DuFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_case_consts_3_1 = {
  (MR_String) "some_several_solns",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_case_consts_3_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_case_consts_3_0[1] = { &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_case_consts_3_0 };

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_case_consts_3_1[1] = { &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_case_consts_3_1 };

static const MR_DuPtagLayout backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_ptag_ordered_case_consts_3[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_case_consts_3_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_case_consts_3_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_name_ordered_case_consts_3[2] = {
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_case_consts_3_0,
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_case_consts_3_1
};

static const MR_Integer backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_case_consts_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_case_consts_3 = {
  (MR_Integer) 3,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__lookup_switch_util____Unify____case_consts_3_0_10001)),
  ((MR_Box) (backend_libs__lookup_switch_util____Compare____case_consts_3_0_10001)),
  (MR_String) "backend_libs.lookup_switch_util",
  (MR_String) "case_consts",
  { backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_name_ordered_case_consts_3 },
  { backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_ptag_ordered_case_consts_3 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_case_consts_3,

};

static const MR_FA_TypeInfo_Struct1 backend_libs__lookup_switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__lookup_switch_util__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&backend_libs__lookup_switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_case_consts_several_llds_0_0[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__lookup_switch_util__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_DuArgLocn backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_locns_case_consts_several_llds_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_case_consts_several_llds_0_0 = {
  (MR_String) "case_consts_several_llds",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_case_consts_several_llds_0_0,
  NULL,
  backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_locns_case_consts_several_llds_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_case_consts_several_llds_0_0[1] = { &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_case_consts_several_llds_0_0 };

static const MR_DuPtagLayout backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_ptag_ordered_case_consts_several_llds_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_case_consts_several_llds_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_name_ordered_case_consts_several_llds_0[1] = { &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_case_consts_several_llds_0_0 };

static const MR_Integer backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_case_consts_several_llds_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_case_consts_several_llds_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__lookup_switch_util____Unify____case_consts_several_llds_0_0_10001)),
  ((MR_Box) (backend_libs__lookup_switch_util____Compare____case_consts_several_llds_0_0_10001)),
  (MR_String) "backend_libs.lookup_switch_util",
  (MR_String) "case_consts_several_llds",
  { backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_name_ordered_case_consts_several_llds_0 },
  { backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_ptag_ordered_case_consts_several_llds_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_case_consts_several_llds_0,

};

static const MR_EnumFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_bit_vec_check_0_0 = {
  (MR_String) "need_bit_vec_check",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_bit_vec_check_0_1 = {
  (MR_String) "dont_need_bit_vec_check_no_gaps",
  INT32_C(1)
};

static const MR_EnumFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_bit_vec_check_0_2 = {
  (MR_String) "dont_need_bit_vec_check_with_gaps",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_ordinal_ordered_need_bit_vec_check_0[3] = {
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_bit_vec_check_0_0,
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_bit_vec_check_0_1,
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_bit_vec_check_0_2
};

static const MR_EnumFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_name_ordered_need_bit_vec_check_0[3] = {
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_bit_vec_check_0_1,
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_bit_vec_check_0_2,
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_bit_vec_check_0_0
};

static const MR_Integer backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_need_bit_vec_check_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_need_bit_vec_check_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__lookup_switch_util____Unify____need_bit_vec_check_0_0_10001)),
  ((MR_Box) (backend_libs__lookup_switch_util____Compare____need_bit_vec_check_0_0_10001)),
  (MR_String) "backend_libs.lookup_switch_util",
  (MR_String) "need_bit_vec_check",
  { backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_name_ordered_need_bit_vec_check_0 },
  { backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_ordinal_ordered_need_bit_vec_check_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_need_bit_vec_check_0,

};

static const MR_EnumFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_range_check_0_0 = {
  (MR_String) "need_range_check",
  INT32_C(0)
};

static const MR_EnumFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_range_check_0_1 = {
  (MR_String) "dont_need_range_check",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_ordinal_ordered_need_range_check_0[2] = {
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_range_check_0_0,
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_range_check_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_name_ordered_need_range_check_0[2] = {
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_range_check_0_1,
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_functor_desc_need_range_check_0_0
};

static const MR_Integer backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_need_range_check_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_need_range_check_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__lookup_switch_util____Unify____need_range_check_0_0_10001)),
  ((MR_Box) (backend_libs__lookup_switch_util____Compare____need_range_check_0_0_10001)),
  (MR_String) "backend_libs.lookup_switch_util",
  (MR_String) "need_range_check",
  { backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_name_ordered_need_range_check_0 },
  { backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__enum_ordinal_ordered_need_range_check_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_need_range_check_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__lookup_switch_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_soln_consts_1_0[1] = { (MR_PseudoTypeInfo) (&backend_libs__lookup_switch_util__list__pti_list_1__pseudo_1) };

static const MR_DuFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_soln_consts_1_0 = {
  (MR_String) "one_soln",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_soln_consts_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__lookup_switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&backend_libs__lookup_switch_util__list__pti_list_1__pseudo_1) }
};

static const MR_PseudoTypeInfo backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_soln_consts_1_1[2] = {
  (MR_PseudoTypeInfo) (&backend_libs__lookup_switch_util__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&backend_libs__lookup_switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1)
};

static const MR_DuFunctorDesc backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_soln_consts_1_1 = {
  (MR_String) "several_solns",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__field_types_soln_consts_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_soln_consts_1_0[1] = { &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_soln_consts_1_0 };

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_soln_consts_1_1[1] = { &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_soln_consts_1_1 };

static const MR_DuPtagLayout backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_ptag_ordered_soln_consts_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_soln_consts_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_stag_ordered_soln_consts_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_name_ordered_soln_consts_1[2] = {
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_soln_consts_1_0,
  &backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_functor_desc_soln_consts_1_1
};

static const MR_Integer backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_soln_consts_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_soln_consts_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__lookup_switch_util____Unify____soln_consts_1_0_10001)),
  ((MR_Box) (backend_libs__lookup_switch_util____Compare____soln_consts_1_0_10001)),
  (MR_String) "backend_libs.lookup_switch_util",
  (MR_String) "soln_consts",
  { backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_name_ordered_soln_consts_1 },
  { backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__du_ptag_ordered_soln_consts_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__functor_number_map_soln_consts_1,

};

void MR_CALL 
backend_libs__lookup_switch_util____Compare____soln_consts_1_0(
  MR_Word TypeInfo_for_Rval_13,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__list____Compare____list_1_0(TypeInfo_for_Rval_13, HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_8;

    mercury__list____Compare____list_1_0(TypeInfo_for_Rval_13, &SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word TypeInfo_17_17;

      {
        TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_Rval_13));
      }
      mercury__list____Compare____list_1_0(TypeInfo_17_17, HeadVar__1_1, (MR_Word) (ArgX2_9), (MR_Word) (ArgY2_10));
    }
  }
}

MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____soln_consts_1_0(
  MR_Word TypeInfo_for_Rval_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_Rval_11, ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word TypeCtorInfo_14_14;
    MR_Word TypeInfo_17_17;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      TypeCtorInfo_14_14 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
      {
        TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_14_14));
        MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_Rval_11));
      }
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_Rval_11, ArgX1_5, ArgY1_6);
      if (succeeded)
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_17_17, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
    }
  }
  return succeeded;
}

void MR_CALL 
backend_libs__lookup_switch_util____Compare____need_range_check_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____need_range_check_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__lookup_switch_util____Compare____need_bit_vec_check_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____need_bit_vec_check_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
backend_libs__lookup_switch_util____Compare____case_consts_several_llds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__lookup_switch_util_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____case_consts_several_llds_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__lookup_switch_util_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
backend_libs__lookup_switch_util____Compare____case_consts_3_0(
  MR_Word TypeInfo_for_Key_13,
  MR_Word TypeInfo_for_Rval_14,
  MR_Word TypeInfo_for_SeveralInfo_15,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_21_21;
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      {
        TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
        MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_Rval_14));
      }
      mercury__tree234____Compare____tree234_2_0(TypeInfo_for_Key_13, TypeInfo_21_21, HeadVar__1_1, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Box ArgX2_9 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_10 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1));
    MR_Word SubResult1_8;
    MR_Word TypeInfo_17_17;

    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_soln_consts_1));
      MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_Rval_14));
    }
    mercury__tree234____Compare____tree234_2_0(TypeInfo_for_Key_13, TypeInfo_17_17, &SubResult1_8, (MR_Word) (ArgX1_6), (MR_Word) (ArgY1_7));
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
      mercury__builtin__compare_3_p_0(TypeInfo_for_SeveralInfo_15, HeadVar__1_1, ArgX2_9, ArgY2_10);
  }
}

MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____case_consts_3_0(
  MR_Word TypeInfo_for_Key_11,
  MR_Word TypeInfo_for_Rval_12,
  MR_Word TypeInfo_for_SeveralInfo_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeCtorInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeCtorInfo_14_14 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
      {
        TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
        MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_Rval_12));
      }
      succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_Key_11, TypeInfo_15_15, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
    }
  }
  else
  {
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Box ArgX2_7 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1));
      TypeCtorInfo_18_18 = (MR_Word) (&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_soln_consts_1);
      {
        TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (TypeCtorInfo_18_18));
        MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_Rval_12));
      }
      succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_Key_11, TypeInfo_19_19, (MR_Word) (ArgX1_5), (MR_Word) (ArgY1_6));
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_SeveralInfo_13, ArgX2_7, ArgY2_8);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__lookup_switch_util__project_soln_consts_to_one_soln_3_p_0(
  MR_Word TypeInfo_for_Key_7,
  MR_Word TypeInfo_for_Rval_8,
  MR_Box _Key_4,
  MR_Word Solns_5,
  MR_Word * Values_6)
{
  MR_bool succeeded;

  succeeded = backend_libs__lookup_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_115_111_108_110_95_99_111_110_115_116_115_95_116_111_95_111_110_101_95_115_111_108_110_95_95_91_49_44_32_51_93_95_48_3_p_0(TypeInfo_for_Rval_8, Solns_5, Values_6);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__lookup_switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_115_111_108_110_95_99_111_110_115_116_115_95_116_111_95_111_110_101_95_115_111_108_110_95_95_91_49_44_32_51_93_95_48_3_p_0(
  MR_Word TypeInfo_for_Rval_8,
  MR_Word Solns_5,
  MR_Word * Values_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Solns_5)) == (MR_Integer) 0);

  if (succeeded)
    *Values_6 = ((MR_Word) ((MR_hl_field(0, Solns_5, (MR_Integer) 0))));
  return succeeded;
}

static void MR_CALL 
backend_libs__lookup_switch_util__add_to_ctor_repn_int_tag_range_5_p_0(
  MR_Word CtorRepn_6,
  MR_Integer STATE_VARIABLE_Min_0_11,
  MR_Integer * STATE_VARIABLE_Min_12,
  MR_Integer STATE_VARIABLE_Max_0_13,
  MR_Integer * STATE_VARIABLE_Max_14)
{
  MR_bool succeeded;
  MR_Word ConsTag_9 = ((MR_Word) ((MR_hl_field(0, CtorRepn_6, (MR_Integer) 3))));
  MR_Integer Int_10;
  MR_Integer IntPrime_21;
  MR_Word Var_22;

  succeeded = ((MR_tag((MR_Word) ConsTag_9)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_22 = ((MR_Word) ((MR_hl_field(1, ConsTag_9, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
    if (succeeded)
      IntPrime_21 = ((MR_Integer) ((MR_hl_field(0, Var_22, (MR_Integer) 0))));
  }
  if (succeeded)
    Int_10 = IntPrime_21;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.lookup_switch_util.get_int_tag\'/1", (MR_String) "not int_tag");
      return;
    }
  mercury__int__min_3_p_0(Int_10, STATE_VARIABLE_Min_0_11, STATE_VARIABLE_Min_12);
  mercury__int__max_3_p_0(Int_10, STATE_VARIABLE_Max_0_13, STATE_VARIABLE_Max_14);
}

MR_String MR_CALL 
backend_libs__lookup_switch_util__get_string_tag_1_f_0(
  MR_Word ConsTag_3)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsTag_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
  MR_String Str_4;
  MR_String StrPrime_5;

  if (succeeded)
  {
    StrPrime_5 = ((MR_String) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 1))));
    Str_4 = StrPrime_5;
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.lookup_switch_util.get_string_tag\'/1", (MR_String) "not string_tag");
  return Str_4;
}

MR_Integer MR_CALL 
backend_libs__lookup_switch_util__get_int_tag_1_f_0(
  MR_Word ConsTag_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsTag_3)) == (MR_Integer) 1);
  MR_Integer Int_4;
  MR_Integer IntPrime_5;
  MR_Word Var_6;

  if (succeeded)
  {
    Var_6 = ((MR_Word) ((MR_hl_field(1, ConsTag_3, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 0);
    if (succeeded)
      IntPrime_5 = ((MR_Integer) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
  }
  if (succeeded)
    Int_4 = IntPrime_5;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.lookup_switch_util.get_int_tag\'/1", (MR_String) "not int_tag");
  return Int_4;
}

void MR_CALL 
backend_libs__lookup_switch_util__project_solns_to_rval_lists_3_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word TypeInfo_for_Rval_21,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RvalsList_0_2,
  MR_Word * STATE_VARIABLE_RvalsList_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RvalsList_3 = STATE_VARIABLE_RvalsList_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Soln_11 = ((MR_Word) ((MR_hl_field(0, Case_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RvalsList_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RvalsList_0_2;

      if (((MR_tag((MR_Word) Soln_11)) == (MR_Integer) 0))
      {
        MR_Word Rvals_12 = ((MR_Word) ((MR_hl_field(0, Soln_11, (MR_Integer) 0))));

        {
          STATE_VARIABLE_RvalsList_17_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RvalsList_17_17, 0) = ((MR_Box) (Rvals_12));
          MR_hl_field(1, STATE_VARIABLE_RvalsList_17_17, 1) = ((MR_Box) (STATE_VARIABLE_RvalsList_0_2));
        }
      }
      else
      {
        MR_Word TypeInfo_23_23;
        MR_Word FirstSolnRvals_13 = ((MR_Word) ((MR_hl_field(1, Soln_11, (MR_Integer) 0))));
        MR_Word LaterSolnsRvalsList_14 = ((MR_Word) ((MR_hl_field(1, Soln_11, (MR_Integer) 1))));
        MR_Word Var_19;

        {
          TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
          MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_Rval_21));
        }
        {
          Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_19, 0) = ((MR_Box) (FirstSolnRvals_13));
          MR_hl_field(1, Var_19, 1) = ((MR_Box) (LaterSolnsRvalsList_14));
        }
        STATE_VARIABLE_RvalsList_17_17 = mercury__list__f_43_43_2_f_0(TypeInfo_23_23, Var_19, STATE_VARIABLE_RvalsList_0_2);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_RvalsList_0_2 = STATE_VARIABLE_RvalsList_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RvalsList_0_2 = next_value_of_STATE_VARIABLE_RvalsList_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
backend_libs__lookup_switch_util__project_all_to_one_solution_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Values_6;

  succeeded = backend_libs__lookup_switch_util__project_soln_consts_to_one_soln_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv0_Values_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_Values_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__lookup_switch_util__project_all_to_one_solution_2_p_0(
  MR_Word TypeInfo_for_Key_6,
  MR_Word TypeInfo_for_Rval_7,
  MR_Word CaseSolnsMap_3,
  MR_Word * CaseValuesMap_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_12_12;
  MR_Word TypeInfo_14_14;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_5, 0) = ((MR_Box) (&backend_libs__lookup_switch_util_scalar_common_2[1]));
    MR_hl_field(0, Var_5, 1) = ((MR_Box) (backend_libs__lookup_switch_util__project_all_to_one_solution_2_p_0_1));
    MR_hl_field(0, Var_5, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_5, 3) = ((MR_Box) (TypeInfo_for_Key_6));
    MR_hl_field(0, Var_5, 4) = ((MR_Box) (TypeInfo_for_Rval_7));
  }
  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_12_12, 0) = ((MR_Box) (&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_soln_consts_1));
    MR_hl_field(0, TypeInfo_12_12, 1) = ((MR_Box) (TypeInfo_for_Rval_7));
  }
  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_Rval_7));
  }
  succeeded = mercury__map__map_values_3_p_1(TypeInfo_for_Key_6, TypeInfo_12_12, TypeInfo_14_14, (MR_Word) (Var_5), (MR_Word) (CaseSolnsMap_3), CaseValuesMap_4);
  return succeeded;
}

MR_bool MR_CALL 
backend_libs__lookup_switch_util__find_int_lookup_switch_params_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word SwitchVarType_13,
  MR_Word SwitchCanFail_14,
  MR_Integer LowerLimit_15,
  MR_Integer UpperLimit_16,
  MR_Integer NumValues_17,
  MR_Integer ReqDensity_18,
  MR_Word * NeedBitVecCheck_19,
  MR_Word * NeedRangeCheck_20,
  MR_Integer * FirstVal_21,
  MR_Integer * LastVal_22)
{
  MR_bool succeeded;
  MR_Integer Span_23 = (MR_Integer) ((MR_Unsigned) UpperLimit_16 - (MR_Unsigned) LowerLimit_15);
  MR_Integer Range_24 = (MR_Integer) ((MR_Unsigned) Span_23 + (MR_Unsigned) 1);
  MR_Integer Density_25;
  MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) NumValues_17 * (MR_Unsigned) 100);

  Density_25 = mercury__int__f_47_47_2_f_0(Var_32, Range_24);
  succeeded = (Density_25 > ReqDensity_18);
  if (succeeded)
  {
    switch (SwitchCanFail_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCategory_26;
          MR_Integer TypeMin_27;
          MR_Integer TypeMax_28;
          MR_Integer TypeRange_29;
          MR_Integer DetDensity_30;
          MR_Integer Var_34;
          MR_Integer Var_35;

          TypeCategory_26 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_12, SwitchVarType_13);
          succeeded = backend_libs__lookup_switch_util__type_range_6_p_0(ModuleInfo_12, TypeCategory_26, SwitchVarType_13, &TypeMin_27, &TypeMax_28, &TypeRange_29);
          if (succeeded)
          {
            Var_35 = (MR_Integer) 100;
            Var_34 = (MR_Integer) ((MR_Unsigned) NumValues_17 * (MR_Unsigned) Var_35);
            DetDensity_30 = mercury__int__f_47_47_2_f_0(Var_34, TypeRange_29);
            succeeded = (DetDensity_30 > ReqDensity_18);
          }
          if (succeeded)
          {
            *NeedRangeCheck_20 = (MR_Integer) 1;
            *NeedBitVecCheck_19 = (MR_Integer) 0;
            *FirstVal_21 = TypeMin_27;
            *LastVal_22 = TypeMax_28;
          }
          else
          {
            *NeedRangeCheck_20 = (MR_Integer) 0;
            succeeded = (NumValues_17 == Range_24);
            if (succeeded)
              *NeedBitVecCheck_19 = (MR_Integer) 1;
            else
              *NeedBitVecCheck_19 = (MR_Integer) 0;
            *FirstVal_21 = LowerLimit_15;
            *LastVal_22 = UpperLimit_16;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *NeedRangeCheck_20 = (MR_Integer) 1;
          succeeded = (NumValues_17 == Range_24);
          if (succeeded)
            *NeedBitVecCheck_19 = (MR_Integer) 1;
          else
            *NeedBitVecCheck_19 = (MR_Integer) 2;
          *FirstVal_21 = LowerLimit_15;
          *LastVal_22 = UpperLimit_16;
        }
        break;
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
backend_libs__lookup_switch_util__filter_out_failing_cases_if_needed_5_p_0(
  MR_Word CodeModel_6,
  MR_Word STATE_VARIABLE_TaggedCases_0_9,
  MR_Word * STATE_VARIABLE_TaggedCases_10,
  MR_Word STATE_VARIABLE_SwitchCanFail_0_11,
  MR_Word * STATE_VARIABLE_SwitchCanFail_12)
{
  switch (CodeModel_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_TaggedCases_10 = STATE_VARIABLE_TaggedCases_0_9;
        *STATE_VARIABLE_SwitchCanFail_12 = STATE_VARIABLE_SwitchCanFail_0_11;
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word TaggedCasesCord_13;
        MR_Word Var_14;

        Var_14 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0));
        backend_libs__lookup_switch_util__filter_out_failing_cases_loop_5_p_0(STATE_VARIABLE_TaggedCases_0_9, Var_14, &TaggedCasesCord_13, STATE_VARIABLE_SwitchCanFail_0_11, STATE_VARIABLE_SwitchCanFail_12);
        *STATE_VARIABLE_TaggedCases_10 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), TaggedCasesCord_13);
      }
      break;
  }
}

static void MR_CALL 
backend_libs__lookup_switch_util__filter_out_failing_cases_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TaggedCasesCord_0_2,
  MR_Word * STATE_VARIABLE_TaggedCasesCord_3,
  MR_Word STATE_VARIABLE_SwitchCanFail_0_4,
  MR_Word * STATE_VARIABLE_SwitchCanFail_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_SwitchCanFail_5 = STATE_VARIABLE_SwitchCanFail_0_4;
      *STATE_VARIABLE_TaggedCasesCord_3 = STATE_VARIABLE_TaggedCasesCord_0_2;
    }
    else
    {
      MR_Word TaggedCase_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TaggedCases_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_19 = ((MR_Word) ((MR_hl_field(0, TaggedCase_12, (MR_Integer) 3))));
      MR_Word GoalExpr_20 = ((MR_Word) ((MR_hl_field(0, Goal_19, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_SwitchCanFail_27_27;
      MR_Word STATE_VARIABLE_TaggedCasesCord_28_28;
      MR_Word Var_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TaggedCasesCord_0_2;
      MR_Word next_value_of_STATE_VARIABLE_SwitchCanFail_0_4;

      succeeded = ((((MR_tag((MR_Word) GoalExpr_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));
        succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        STATE_VARIABLE_SwitchCanFail_27_27 = (MR_Integer) 0;
        STATE_VARIABLE_TaggedCasesCord_28_28 = STATE_VARIABLE_TaggedCasesCord_0_2;
      }
      else
      {
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0), ((MR_Box) (TaggedCase_12)), STATE_VARIABLE_TaggedCasesCord_0_2, &STATE_VARIABLE_TaggedCasesCord_28_28);
        STATE_VARIABLE_SwitchCanFail_27_27 = STATE_VARIABLE_SwitchCanFail_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TaggedCases_13;
      next_value_of_STATE_VARIABLE_TaggedCasesCord_0_2 = STATE_VARIABLE_TaggedCasesCord_28_28;
      next_value_of_STATE_VARIABLE_SwitchCanFail_0_4 = STATE_VARIABLE_SwitchCanFail_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TaggedCasesCord_0_2 = next_value_of_STATE_VARIABLE_TaggedCasesCord_0_2;
      STATE_VARIABLE_SwitchCanFail_0_4 = next_value_of_STATE_VARIABLE_SwitchCanFail_0_4;
      continue;
    }
    break;
  }
}

MR_Integer MR_CALL 
backend_libs__lookup_switch_util__switch_density_2_f_0(
  MR_Integer NumCases_4,
  MR_Integer NumValuesInRange_5)
{
  MR_Integer Density_6;
  MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) NumCases_4 * (MR_Unsigned) 100);

  Density_6 = mercury__int__f_47_47_2_f_0(Var_7, NumValuesInRange_5);
  return Density_6;
}

static void MR_CALL 
backend_libs__lookup_switch_util__type_range_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_STATE_VARIABLE_Min_12;
  MR_Integer conv0_STATE_VARIABLE_Max_14;

  backend_libs__lookup_switch_util__add_to_ctor_repn_int_tag_range_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Min_12, ((MR_Integer) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Max_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Min_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Max_14));
}

MR_bool MR_CALL 
backend_libs__lookup_switch_util__type_range_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtorCat_8,
  MR_Word Type_9,
  MR_Integer * Min_10,
  MR_Integer * Max_11,
  MR_Integer * NumValuesInRange_12)
{
  MR_bool succeeded;
  MR_Integer Var_41;
  MR_Integer Var_42;

  if (((MR_tag((MR_Word) TypeCtorCat_8)) == (MR_Integer) 1))
  {
    MR_Word Globals_13;
    MR_Word Target_14;
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, TypeCtorCat_8, (MR_Integer) 0))));

    succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_13);
      libs__globals__get_target_2_p_0(Globals_13, &Target_14);
      backend_libs__string_encoding__target_char_range_3_p_0(Target_14, Min_10, Max_11);
      succeeded = MR_TRUE;
    }
  }
  else
  if (((MR_tag((MR_Word) TypeCtorCat_8)) == (MR_Integer) 2))
  {
    MR_Word TypeCtor_15;
    MR_Word TypeTable_16;
    MR_Word TypeDefn_17;
    MR_Word TypeBody_18;
    MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(2, TypeCtorCat_8, (MR_Integer) 0))) & (MR_Integer) 1);

    succeeded = (Var_36 == (MR_Integer) 0);
    if (succeeded)
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_9, &TypeCtor_15);
      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_7, &TypeTable_16);
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_16, TypeCtor_15, &TypeDefn_17);
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_17, &TypeBody_18);
      switch (MR_tag((MR_Word) TypeBody_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeBodyDu_19 = (MR_Word) ((MR_Word) (TypeBody_18));
            MR_Word OoMCtors_20 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_19, (MR_Integer) 0))));
            MR_Word MaybeSuperType_21 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_19, (MR_Integer) 1))));
            MR_Word MaybeRepn_23 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_19, (MR_Integer) 3))));
            MR_Word Repn_25;

            if ((MaybeRepn_23 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.lookup_switch_util.type_range\'/6", (MR_String) "MaybeRepn = no");
            else
              Repn_25 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_23, (MR_Integer) 0))));
            if ((MaybeSuperType_21 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word TailCtors_27;

              *Min_10 = (MR_Integer) 0;
              TailCtors_27 = ((MR_Word) ((MR_hl_field(0, OoMCtors_20, (MR_Integer) 1))));
              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), TailCtors_27, Max_11);
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word TypeCtorInfo_23_59;
              MR_Word TypeCtorInfo_24_60;
              MR_Word CtorRepns_30 = ((MR_Word) ((MR_hl_field(0, Repn_25, (MR_Integer) 0))));
              MR_Word CtorRepn_48;
              MR_Word CtorRepns_49;
              MR_Word ConsTag_50;
              MR_Integer Int_51;
              MR_Word Var_52;
              MR_Integer IntPrime_61;
              MR_Word Var_62;
              MR_Box conv3_Min_10;
              MR_Box conv2_Max_11;

              succeeded = (CtorRepns_30 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                CtorRepn_48 = ((MR_Word) ((MR_hl_field(1, CtorRepns_30, (MR_Integer) 0))));
                CtorRepns_49 = ((MR_Word) ((MR_hl_field(1, CtorRepns_30, (MR_Integer) 1))));
                ConsTag_50 = ((MR_Word) ((MR_hl_field(0, CtorRepn_48, (MR_Integer) 3))));
                succeeded = ((MR_tag((MR_Word) ConsTag_50)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_62 = ((MR_Word) ((MR_hl_field(1, ConsTag_50, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_62)) == (MR_Integer) 0);
                  if (succeeded)
                    IntPrime_61 = ((MR_Integer) ((MR_hl_field(0, Var_62, (MR_Integer) 0))));
                }
                if (succeeded)
                  Int_51 = IntPrime_61;
                else
                  mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.lookup_switch_util.get_int_tag\'/1", (MR_String) "not int_tag");
                Var_52 = (MR_Word) (&backend_libs__lookup_switch_util_scalar_common_3[0]);
                TypeCtorInfo_23_59 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0);
                TypeCtorInfo_24_60 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
                mercury__list__foldl2_6_p_0(TypeCtorInfo_23_59, TypeCtorInfo_24_60, TypeCtorInfo_24_60, Var_52, CtorRepns_49, ((MR_Box) (Int_51)), &conv3_Min_10, ((MR_Box) (Int_51)), &conv2_Max_11);
                *Min_10 = ((MR_Integer) (conv3_Min_10));
                *Max_11 = ((MR_Integer) (conv2_Max_11));
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.lookup_switch_util.type_range\'/6", (MR_String) "enum type is not d.u. type\?");
            succeeded = MR_TRUE;
          }
          break;
      }
    }
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    Var_41 = (MR_Integer) ((MR_Unsigned) *Max_11 - (MR_Unsigned) *Min_10);
    Var_42 = (MR_Integer) 1;
    *NumValuesInRange_12 = (MR_Integer) ((MR_Unsigned) Var_41 + (MR_Unsigned) Var_42);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____case_consts_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_bool succeeded;

  succeeded = backend_libs__lookup_switch_util____Unify____case_consts_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  return succeeded;
}

static void MR_CALL 
backend_libs__lookup_switch_util____Compare____case_consts_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__lookup_switch_util____Compare____case_consts_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____case_consts_several_llds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__lookup_switch_util____Unify____case_consts_several_llds_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__lookup_switch_util____Compare____case_consts_several_llds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__lookup_switch_util____Compare____case_consts_several_llds_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____need_bit_vec_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__lookup_switch_util____Unify____need_bit_vec_check_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__lookup_switch_util____Compare____need_bit_vec_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__lookup_switch_util____Compare____need_bit_vec_check_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____need_range_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__lookup_switch_util____Unify____need_range_check_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__lookup_switch_util____Compare____need_range_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__lookup_switch_util____Compare____need_range_check_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__lookup_switch_util____Unify____soln_consts_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = backend_libs__lookup_switch_util____Unify____soln_consts_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
backend_libs__lookup_switch_util____Compare____soln_consts_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__lookup_switch_util____Compare____soln_consts_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__backend_libs__lookup_switch_util__init(void)
{
}

void mercury__backend_libs__lookup_switch_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_case_consts_3);
	MR_register_type_ctor_info(&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_case_consts_several_llds_0);
	MR_register_type_ctor_info(&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_need_bit_vec_check_0);
	MR_register_type_ctor_info(&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_need_range_check_0);
	MR_register_type_ctor_info(&backend_libs__lookup_switch_util__backend_libs__lookup_switch_util__type_ctor_info_soln_consts_1);
}

void mercury__backend_libs__lookup_switch_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__lookup_switch_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.lookup_switch_util.
