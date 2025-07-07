/*
** Automatically generated from `hlds_desc.m'
** by the Mercury compiler,
** version rotd-2025-07-07
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


// :- module hlds.hlds_desc.
// :- implementation.

/*
INIT mercury__hlds__hlds_desc__init
ENDINIT
*/

#include "hlds.hlds_desc.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_0;

static const MR_EnumFunctorDesc hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_desc__hlds__hlds_desc__enum_ordinal_ordered_include_module_name_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_desc__hlds__hlds_desc__enum_name_ordered_include_module_name_0[2];

static const MR_Integer hlds__hlds_desc__hlds__hlds_desc__functor_number_map_include_module_name_0[2];

static MR_String MR_CALL 
hlds__hlds_desc__indent_desc_line_1_f_0(
  MR_String Line_3);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_case_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_case_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__hlds_desc__do_describe_structured_case_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word Case_7);

static MR_Box MR_CALL 
hlds__hlds_desc__describe_structured_goal_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word Goal_7);

static MR_String MR_CALL 
hlds__hlds_desc__describe_plain_call_3_f_0(
  MR_Word VarTable_5,
  MR_Word SymName_6,
  MR_Word ArgVars_7);

static MR_Box MR_CALL 
hlds__hlds_desc__disjunction_lines_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__hlds_desc__disjunction_lines_2_f_0(
  MR_Word HeadGroup_4,
  MR_Word TailGroups_5);

static MR_Word MR_CALL 
hlds__hlds_desc__desc_to_lines_1_f_0(
  MR_String Desc_3);

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__hlds_desc__describe_scope_reason_1_f_0(
  MR_Word Reason_3);

static MR_String MR_CALL 
hlds__hlds_desc__describe_generic_call_3_f_0(
  MR_Word VarTable_5,
  MR_Word GCall_6,
  MR_Word ArgVars_7);

static MR_String MR_CALL 
hlds__hlds_desc__describe_unify_2_f_0(
  MR_Word VarTable_4,
  MR_Word Unification_5);

static MR_Box MR_CALL 
hlds__hlds_desc__describe_args_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__hlds_desc____Unify____include_module_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_desc____Compare____include_module_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_desc_scalar_common_1[5][2];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_2[1][1];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_3[2][6];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_5[3][5];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_6[14][3];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_7[2][7];


struct hlds__hlds_desc__vector_common_type_4_0_s {
  const MR_String hlds__hlds_desc__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct hlds__hlds_desc__vector_common_type_4_0_s hlds__hlds_desc_vector_common_4[5];



static /* final */ const MR_Box hlds__hlds_desc_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "true\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) ")\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "fail\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_3[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_5[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_6[14][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_desc__describe_goal_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_desc__describe_goal_3_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_desc__disjunction_lines_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_desc__do_describe_structured_goal_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_desc__do_describe_structured_goal_3_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_desc__do_describe_structured_goal_3_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_desc__do_describe_structured_goal_3_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_desc__do_describe_structured_goal_3_f_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_desc__do_describe_structured_goal_3_f_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_desc__do_describe_structured_goal_3_f_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_desc__do_describe_structured_goal_3_f_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_desc__do_describe_structured_goal_3_f_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[2])),
    ((MR_Box) (hlds__hlds_desc__do_describe_structured_case_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_desc__do_describe_structured_case_3_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_7[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_desc__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_desc__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct hlds__hlds_desc__vector_common_type_4_0_s hlds__hlds_desc_vector_common_4[5] = {
  /* row   0 */   { (MR_String) "unsafe_type_cast" },
  /* row   1 */   { (MR_String) "unsafe_type_inst_cast" },
  /* row   2 */   { (MR_String) "equiv_type_cast" },
  /* row   3 */   { (MR_String) "exists_cast" },
  /* row   4 */   { (MR_String) "coerce" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_EnumFunctorDesc hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_0 = {
  (MR_String) "do_not_include_module_name",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_1 = {
  (MR_String) "include_module_name",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_desc__hlds__hlds_desc__enum_ordinal_ordered_include_module_name_0[2] = {
  &hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_0,
  &hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_desc__hlds__hlds_desc__enum_name_ordered_include_module_name_0[2] = {
  &hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_0,
  &hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_1
};

static const MR_Integer hlds__hlds_desc__hlds__hlds_desc__functor_number_map_include_module_name_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_desc__hlds__hlds_desc__type_ctor_info_include_module_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_desc____Unify____include_module_name_0_0_10001)),
  ((MR_Box) (hlds__hlds_desc____Compare____include_module_name_0_0_10001)),
  (MR_String) "hlds.hlds_desc",
  (MR_String) "include_module_name",
  { hlds__hlds_desc__hlds__hlds_desc__enum_name_ordered_include_module_name_0 },
  { hlds__hlds_desc__hlds__hlds_desc__enum_ordinal_ordered_include_module_name_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_desc__hlds__hlds_desc__functor_number_map_include_module_name_0,

};

void MR_CALL 
hlds__hlds_desc____Compare____include_module_name_0_0(
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
hlds__hlds_desc____Unify____include_module_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_String MR_CALL 
hlds__hlds_desc__indent_desc_line_1_f_0(
  MR_String Line_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "  ", Line_3);
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_case_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_desc__indent_desc_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_case_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
hlds__hlds_desc__do_describe_structured_case_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word Case_7)
{
  MR_Word Lines_8;
  MR_Word MainConsId_9 = ((MR_Word) ((MR_hl_field(0, Case_7, 0))));
  MR_Word OtherConsIds_10 = ((MR_Word) ((MR_hl_field(0, Case_7, 1))));
  MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(0, Case_7, 2))));
  MR_String MainConsIdStr_12;
  MR_Word OtherConsIdStrs_13;
  MR_String ConsIdStr_14;
  MR_String FirstLine_15;
  MR_Word GoalLines_16;
  MR_Word IndentedGoalLines_17;
  MR_Word Var_20;
  MR_String Var_33;

  MainConsIdStr_12 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(MainConsId_9);
  OtherConsIdStrs_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_desc_scalar_common_6[12]), OtherConsIds_10);
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MainConsIdStr_12));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (OtherConsIdStrs_13));
  }
  ConsIdStr_14 = mercury__string__join_list_2_f_0((MR_String) " or ", Var_20);
  Var_33 = mercury__string__f_43_43_2_f_0(ConsIdStr_14, (MR_String) ":\n");
  FirstLine_15 = mercury__string__f_43_43_2_f_0((MR_String) "case ", Var_33);
  GoalLines_16 = hlds__hlds_desc__do_describe_structured_goal_3_f_0(ModuleInfo_5, VarTable_6, Goal_11);
  IndentedGoalLines_17 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_desc_scalar_common_6[13]), GoalLines_16);
  {
    Lines_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Lines_8, 0) = ((MR_Box) (FirstLine_15));
    MR_hl_field(1, Lines_8, 1) = ((MR_Box) (IndentedGoalLines_17));
  }
  return Lines_8;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_proc_3_f_0(
  MR_Word IncludeModuleName_5,
  MR_Word PredInfo_6,
  MR_Integer ProcId_7)
{
  MR_String ProcDesc_8;
  MR_String PredDesc_9;
  MR_Integer Var_15;
  MR_String Var_17;
  MR_String Var_25;

  PredDesc_9 = hlds__hlds_desc__describe_pred_2_f_0(IncludeModuleName_5, PredInfo_6);
  Var_15 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_7);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_2[0]), Var_15, &Var_17);
  Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_17);
  ProcDesc_8 = mercury__string__f_43_43_2_f_0(PredDesc_9, Var_25);
  return ProcDesc_8;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_proc_from_id_3_f_0(
  MR_Word IncludeModuleName_5,
  MR_Word ModuleInfo_6,
  MR_Word PredProcId_7)
{
  MR_String ProcDesc_8;
  MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(0, PredProcId_7, 0))));
  MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(0, PredProcId_7, 1))));
  MR_Word PredInfo_11;
  MR_String PredDesc_12;
  MR_Integer Var_18;
  MR_String Var_20;
  MR_String Var_28;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_9, &PredInfo_11);
  PredDesc_12 = hlds__hlds_desc__describe_pred_2_f_0(IncludeModuleName_5, PredInfo_11);
  Var_18 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_10);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_2[0]), Var_18, &Var_20);
  Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_20);
  ProcDesc_8 = mercury__string__f_43_43_2_f_0(PredDesc_12, Var_28);
  return ProcDesc_8;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_pred_from_id_3_f_0(
  MR_Word IncludeModuleName_5,
  MR_Word ModuleInfo_6,
  MR_Word PredId_7)
{
  MR_String PredDesc_8;
  MR_Word PredInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_7, &PredInfo_9);
  PredDesc_8 = hlds__hlds_desc__describe_pred_2_f_0(IncludeModuleName_5, PredInfo_9);
  return PredDesc_8;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_pred_2_f_0(
  MR_Word IncludeModuleName_4,
  MR_Word PredInfo_5)
{
  MR_bool succeeded;
  MR_String ProcDesc_6;
  MR_Word PredOrFunc_7;
  MR_String PredName_8;
  MR_Integer Arity_9;
  MR_Word Origin_10;
  MR_String FullPredName_13;
  MR_Word Var_15;
  MR_Word SpecialId_11;
  MR_Word TypeCtor_12;
  MR_Word Var_16;

  PredOrFunc_7 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
  PredName_8 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
  Var_15 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_5);
  Arity_9 = (MR_Integer) (Var_15);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_5, &Origin_10);
  succeeded = ((MR_tag((MR_Word) Origin_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(1, Origin_10, 0))));
    succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      SpecialId_11 = ((MR_Unsigned) ((MR_hl_field(0, Var_16, 0))) & (MR_Integer) 3);
      TypeCtor_12 = ((MR_Word) ((MR_hl_field(0, Var_16, 1))));
    }
  }
  if (succeeded)
  {
    MR_String Var_20;
    MR_String Var_23;
    MR_String Var_47;
    MR_Word TypeCtorSymName_75;
    MR_Integer TypeCtorArity_76;
    MR_String Var_80;
    MR_String Var_84;
    MR_String Var_92;

    Var_20 = mdbcomp__prim_data__get_special_pred_id_generic_name_1_f_0(SpecialId_11);
    TypeCtorSymName_75 = ((MR_Word) ((MR_hl_field(0, TypeCtor_12, 0))));
    TypeCtorArity_76 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_12, 1))));
    Var_80 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_75);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_2[0]), TypeCtorArity_76, &Var_84);
    Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_84);
    Var_23 = mercury__string__f_43_43_2_f_0(Var_80, Var_92);
    Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_23);
    FullPredName_13 = mercury__string__f_43_43_2_f_0(Var_20, Var_47);
  }
  else
    FullPredName_13 = PredName_8;
  switch (IncludeModuleName_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_28;
        MR_String Var_63;
        MR_String Var_71;
        MR_String Var_72;
        MR_String Var_74;

        Var_28 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_7);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_2[0]), Arity_9, &Var_63);
        Var_71 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_63);
        Var_72 = mercury__string__f_43_43_2_f_0(FullPredName_13, Var_71);
        Var_74 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_72);
        ProcDesc_6 = mercury__string__f_43_43_2_f_0(Var_28, Var_74);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_14;
        MR_String Var_37;
        MR_String Var_40;
        MR_String Var_48;
        MR_String Var_56;
        MR_String Var_57;
        MR_String Var_59;
        MR_String Var_60;
        MR_String Var_62;

        ModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_5);
        Var_37 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_7);
        Var_40 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_14);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_2[0]), Arity_9, &Var_48);
        Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_48);
        Var_57 = mercury__string__f_43_43_2_f_0(FullPredName_13, Var_56);
        Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_57);
        Var_60 = mercury__string__f_43_43_2_f_0(Var_40, Var_59);
        Var_62 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_60);
        ProcDesc_6 = mercury__string__f_43_43_2_f_0(Var_37, Var_62);
      }
      break;
  }
  return ProcDesc_6;
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_structured_goal_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = libs__indent__add_indent2_prefix_2_f_0(((MR_Unsigned) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_structured_goal_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Unsigned Indent_8,
  MR_Word Goal_9)
{
  MR_bool succeeded;
  MR_String Desc_10;
  MR_Word Lines_11;
  MR_Word IndentedLines_12;

  Lines_11 = hlds__hlds_desc__do_describe_structured_goal_3_f_0(ModuleInfo_6, VarTable_7, Goal_9);
  succeeded = (Indent_8 == (MR_Unsigned) 0U);
  if (succeeded)
    IndentedLines_12 = Lines_11;
  else
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_desc_scalar_common_3[1]));
      MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__hlds_desc__describe_structured_goal_4_f_0_1));
      MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_13, 3) = ((MR_Box) (Indent_8));
    }
    IndentedLines_12 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13, Lines_11);
  }
  mercury__string__append_list_2_p_0(IndentedLines_12, &Desc_10);
  return Desc_10;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv11_HeadVar__2_2;

  conv11_HeadVar__2_2 = hlds__hlds_desc__indent_desc_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv10_Lines_8;

  conv10_Lines_8 = hlds__hlds_desc__do_describe_structured_case_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv10_Lines_8));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv9_HeadVar__2_2;

  conv9_HeadVar__2_2 = hlds__hlds_desc__indent_desc_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv8_HeadVar__2_2;

  conv8_HeadVar__2_2 = hlds__hlds_desc__indent_desc_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_HeadVar__2_2;

  conv7_HeadVar__2_2 = hlds__hlds_desc__indent_desc_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = hlds__hlds_desc__indent_desc_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv5_HeadVar__2_2;

  conv5_HeadVar__2_2 = hlds__hlds_desc__indent_desc_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_Lines_8;

  conv4_Lines_8 = hlds__hlds_desc__do_describe_structured_goal_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_Lines_8));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = hlds__hlds_desc__indent_desc_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_Lines_8;

  conv2_Lines_8 = hlds__hlds_desc__do_describe_structured_goal_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Lines_8));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
hlds__hlds_desc__do_describe_structured_goal_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word Goal_7)
{
  MR_Word Lines_8;
  MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal_7, 0))));

  switch (MR_tag((MR_Word) GoalExpr_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_58 = (MR_Word) ((MR_Word) (GoalExpr_9));
        MR_Word Var_116;
        MR_Word SubGoalLines_152;
        MR_Word IndentedSubGoalLines_153;

        SubGoalLines_152 = hlds__hlds_desc__do_describe_structured_goal_3_f_0(ModuleInfo_5, VarTable_6, SubGoal_58);
        IndentedSubGoalLines_153 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_desc_scalar_common_6[9]), SubGoalLines_152);
        {
          Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_116, 0) = ((MR_Box) ((MR_String) "not(\n"));
          MR_hl_field(1, Var_116, 1) = ((MR_Box) (IndentedSubGoalLines_153));
        }
        Lines_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_116, (MR_Word) (MR_mkword(1, &hlds__hlds_desc_scalar_common_1[3])));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr_9, 3))));
        MR_String Desc_16;

        Desc_16 = hlds__hlds_desc__describe_unify_2_f_0(VarTable_6, Unification_14);
        Lines_8 = hlds__hlds_desc__desc_to_lines_1_f_0(Desc_16);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ArgVars_19 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, 2))));
        MR_Word SymName_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, 5))));
        MR_String Desc_137;

        Desc_137 = hlds__hlds_desc__describe_plain_call_3_f_0(VarTable_6, SymName_22, ArgVars_19);
        Lines_8 = hlds__hlds_desc__desc_to_lines_1_f_0(Desc_137);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GCall_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));
            MR_String Desc_138;
            MR_Word ArgVars_139 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));

            Desc_138 = hlds__hlds_desc__describe_generic_call_3_f_0(VarTable_6, GCall_23, ArgVars_139);
            Lines_8 = hlds__hlds_desc__desc_to_lines_1_f_0(Desc_138);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredId_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));
            MR_Word Args_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 4))));
            MR_Word ExtraArgs_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 5))));
            MR_Word PredInfo_34;
            MR_String Name_35;
            MR_Word ExtraVars_36;
            MR_String Var_83;
            MR_String Var_86;
            MR_String Desc_140;
            MR_Word ArgVars_141;
            MR_String Var_206;
            MR_String Var_207;

            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_28, &PredInfo_34);
            Name_35 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_34);
            ArgVars_141 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_desc_scalar_common_1[0]), (MR_Word) (&hlds__hlds_desc_scalar_common_6[3]), Args_30);
            ExtraVars_36 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_desc_scalar_common_1[0]), (MR_Word) (&hlds__hlds_desc_scalar_common_6[4]), ExtraArgs_31);
            Var_83 = hlds__hlds_desc__describe_args_2_f_0(VarTable_6, ArgVars_141);
            Var_86 = hlds__hlds_desc__describe_args_2_f_0(VarTable_6, ExtraVars_36);
            Var_206 = mercury__string__f_43_43_2_f_0(Var_83, Var_86);
            Var_207 = mercury__string__f_43_43_2_f_0(Name_35, Var_206);
            Desc_140 = mercury__string__f_43_43_2_f_0((MR_String) "foreign ", Var_207);
            Lines_8 = hlds__hlds_desc__desc_to_lines_1_f_0(Desc_140);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_37 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_9, 1))) & (MR_Integer) 1);
            MR_Word SubGoals_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));

            if ((SubGoals_38 == (MR_Word) ((MR_Unsigned) 0U)))
              Lines_8 = (MR_Word) (MR_mkword(1, &hlds__hlds_desc_scalar_common_1[2]));
            else
            {
              MR_String ConjStr_41;
              MR_String FirstLine_42;
              MR_Word SubGoalLineLists_43;
              MR_Word SubGoalLines_44;
              MR_Word IndentedSubGoalLines_45;
              MR_Word Var_94;
              MR_Word Var_96;

              switch (ConjType_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ConjStr_41 = (MR_String) "par_conj";
                  break;
                case (MR_Integer) 0:
                  ConjStr_41 = (MR_String) "conj";
                  break;
              }
              FirstLine_42 = mercury__string__f_43_43_2_f_0(ConjStr_41, (MR_String) "(\n");
              {
                Var_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_94, 0) = ((MR_Box) (&hlds__hlds_desc_scalar_common_7[0]));
                MR_hl_field(0, Var_94, 1) = ((MR_Box) (hlds__hlds_desc__do_describe_structured_goal_3_f_0_3));
                MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_94, 3) = ((MR_Box) (ModuleInfo_5));
                MR_hl_field(0, Var_94, 4) = ((MR_Box) (VarTable_6));
              }
              SubGoalLineLists_43 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_desc_scalar_common_1[1]), Var_94, SubGoals_38);
              mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubGoalLineLists_43, &SubGoalLines_44);
              IndentedSubGoalLines_45 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_desc_scalar_common_6[5]), SubGoalLines_44);
              {
                Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_96, 0) = ((MR_Box) (FirstLine_42));
                MR_hl_field(1, Var_96, 1) = ((MR_Box) (IndentedSubGoalLines_45));
              }
              Lines_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_96, (MR_Word) (MR_mkword(1, &hlds__hlds_desc_scalar_common_1[3])));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals_146 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));

            if ((SubGoals_146 == (MR_Word) ((MR_Unsigned) 0U)))
              Lines_8 = (MR_Word) (MR_mkword(1, &hlds__hlds_desc_scalar_common_1[4]));
            else
            {
              MR_Word HeadSubGoal_47 = ((MR_Word) ((MR_hl_field(1, SubGoals_146, 0))));
              MR_Word TailSubGoals_48 = ((MR_Word) ((MR_hl_field(1, SubGoals_146, 1))));
              MR_Word HeadSubGoalLineList_49;
              MR_Word TailSubGoalLineLists_50;
              MR_Word DisjunctLines_51;
              MR_Word Var_101;
              MR_Word Var_102;

              HeadSubGoalLineList_49 = hlds__hlds_desc__do_describe_structured_goal_3_f_0(ModuleInfo_5, VarTable_6, HeadSubGoal_47);
              {
                Var_101 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_101, 0) = ((MR_Box) (&hlds__hlds_desc_scalar_common_7[0]));
                MR_hl_field(0, Var_101, 1) = ((MR_Box) (hlds__hlds_desc__do_describe_structured_goal_3_f_0_5));
                MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_101, 3) = ((MR_Box) (ModuleInfo_5));
                MR_hl_field(0, Var_101, 4) = ((MR_Box) (VarTable_6));
              }
              TailSubGoalLineLists_50 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_desc_scalar_common_1[1]), Var_101, TailSubGoals_48);
              DisjunctLines_51 = hlds__hlds_desc__disjunction_lines_2_f_0(HeadSubGoalLineList_49, TailSubGoalLineLists_50);
              {
                Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_102, 0) = ((MR_Box) ((MR_String) "disj(\n"));
                MR_hl_field(1, Var_102, 1) = ((MR_Box) (DisjunctLines_51));
              }
              Lines_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_102, (MR_Word) (MR_mkword(1, &hlds__hlds_desc_scalar_common_1[3])));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));
            MR_Word Cases_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 3))));
            MR_Word CaseLineLists_55;
            MR_Word CaseLines_56;
            MR_Word IndentedCaseLines_57;
            MR_String Var_108;
            MR_Word Var_110;
            MR_Word Var_112;
            MR_String FirstLine_149;
            MR_String Var_200;

            Var_108 = hlds__hlds_desc__describe_var_2_f_0(VarTable_6, Var_52);
            Var_200 = mercury__string__f_43_43_2_f_0(Var_108, (MR_String) ",\n");
            FirstLine_149 = mercury__string__f_43_43_2_f_0((MR_String) "switch(", Var_200);
            {
              Var_110 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_110, 0) = ((MR_Box) (&hlds__hlds_desc_scalar_common_7[1]));
              MR_hl_field(0, Var_110, 1) = ((MR_Box) (hlds__hlds_desc__do_describe_structured_goal_3_f_0_11));
              MR_hl_field(0, Var_110, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_110, 3) = ((MR_Box) (ModuleInfo_5));
              MR_hl_field(0, Var_110, 4) = ((MR_Box) (VarTable_6));
            }
            CaseLineLists_55 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_desc_scalar_common_1[1]), Var_110, Cases_54);
            mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CaseLineLists_55, &CaseLines_56);
            IndentedCaseLines_57 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_desc_scalar_common_6[11]), CaseLines_56);
            {
              Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_112, 0) = ((MR_Box) (FirstLine_149));
              MR_hl_field(1, Var_112, 1) = ((MR_Box) (IndentedCaseLines_57));
            }
            Lines_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_112, (MR_Word) (MR_mkword(1, &hlds__hlds_desc_scalar_common_1[3])));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));
            MR_String ReasonDesc_60;
            MR_Word Var_124;
            MR_String FirstLine_155;
            MR_Word SubGoalLines_156;
            MR_Word IndentedSubGoalLines_157;
            MR_Word SubGoal_159 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));
            MR_String Var_203;

            ReasonDesc_60 = hlds__hlds_desc__describe_scope_reason_1_f_0(Reason_59);
            Var_203 = mercury__string__f_43_43_2_f_0(ReasonDesc_60, (MR_String) ",\n");
            FirstLine_155 = mercury__string__f_43_43_2_f_0((MR_String) "scope(", Var_203);
            SubGoalLines_156 = hlds__hlds_desc__do_describe_structured_goal_3_f_0(ModuleInfo_5, VarTable_6, SubGoal_159);
            IndentedSubGoalLines_157 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_desc_scalar_common_6[10]), SubGoalLines_156);
            {
              Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_124, 0) = ((MR_Box) (FirstLine_155));
              MR_hl_field(1, Var_124, 1) = ((MR_Box) (IndentedSubGoalLines_157));
            }
            Lines_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_124, (MR_Word) (MR_mkword(1, &hlds__hlds_desc_scalar_common_1[3])));
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));
            MR_Word Then_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 3))));
            MR_Word Else_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 4))));
            MR_Word CondLines_65;
            MR_Word IndentedCondLines_70;
            MR_Word ThenLines_71;
            MR_Word IndentedThenLines_72;
            MR_Word ElseLines_73;
            MR_Word IndentedElseLines_74;
            MR_Word Var_130;
            MR_Word Var_131;
            MR_Word Var_132;
            MR_Word Var_133;
            MR_Word Var_134;

            CondLines_65 = hlds__hlds_desc__do_describe_structured_goal_3_f_0(ModuleInfo_5, VarTable_6, Cond_62);
            IndentedCondLines_70 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_desc_scalar_common_6[6]), CondLines_65);
            ThenLines_71 = hlds__hlds_desc__do_describe_structured_goal_3_f_0(ModuleInfo_5, VarTable_6, Then_63);
            IndentedThenLines_72 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_desc_scalar_common_6[7]), ThenLines_71);
            ElseLines_73 = hlds__hlds_desc__do_describe_structured_goal_3_f_0(ModuleInfo_5, VarTable_6, Else_64);
            IndentedElseLines_74 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_desc_scalar_common_6[8]), ElseLines_73);
            {
              Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_130, 0) = ((MR_Box) ((MR_String) "( if\n"));
              MR_hl_field(1, Var_130, 1) = ((MR_Box) (IndentedCondLines_70));
            }
            {
              Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_132, 0) = ((MR_Box) ((MR_String) "then\n"));
              MR_hl_field(1, Var_132, 1) = ((MR_Box) (IndentedThenLines_72));
            }
            {
              Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_134, 0) = ((MR_Box) ((MR_String) "else\n"));
              MR_hl_field(1, Var_134, 1) = ((MR_Box) (IndentedElseLines_74));
            }
            Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_134, (MR_Word) (MR_mkword(1, &hlds__hlds_desc_scalar_common_1[3])));
            Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_132, Var_133);
            Lines_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_130, Var_131);
          }
          break;
        case (MR_Integer) 7:
          Lines_8 = hlds__hlds_desc__desc_to_lines_1_f_0((MR_String) "shorthand");
          break;
      }
      break;
  }
  return Lines_8;
}

static MR_String MR_CALL 
hlds__hlds_desc__describe_plain_call_3_f_0(
  MR_Word VarTable_5,
  MR_Word SymName_6,
  MR_Word ArgVars_7)
{
  MR_String Desc_8;
  MR_String Var_9;
  MR_String Var_10;

  Var_9 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_6);
  Var_10 = hlds__hlds_desc__describe_args_2_f_0(VarTable_5, ArgVars_7);
  Desc_8 = mercury__string__f_43_43_2_f_0(Var_9, Var_10);
  return Desc_8;
}

static MR_Box MR_CALL 
hlds__hlds_desc__disjunction_lines_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_desc__indent_desc_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
hlds__hlds_desc__disjunction_lines_2_f_0(
  MR_Word HeadGroup_4,
  MR_Word TailGroups_5)
{
  MR_Word Lines_6;
  MR_Word IndentedHeadLines_7;

  IndentedHeadLines_7 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_desc_scalar_common_6[2]), HeadGroup_4);
  if ((TailGroups_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Lines_6 = IndentedHeadLines_7;
  else
  {
    MR_Word HeadTailGroup_8 = ((MR_Word) ((MR_hl_field(1, TailGroups_5, 0))));
    MR_Word TailTailGroups_9 = ((MR_Word) ((MR_hl_field(1, TailGroups_5, 1))));
    MR_Word TailLines_10;
    MR_Word Var_12;

    TailLines_10 = hlds__hlds_desc__disjunction_lines_2_f_0(HeadTailGroup_8, TailTailGroups_9);
    {
      Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_12, 0) = ((MR_Box) ((MR_String) ";\n"));
      MR_hl_field(1, Var_12, 1) = ((MR_Box) (TailLines_10));
    }
    Lines_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IndentedHeadLines_7, Var_12);
  }
  return Lines_6;
}

static MR_Word MR_CALL 
hlds__hlds_desc__desc_to_lines_1_f_0(
  MR_String Desc_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mercury__string__f_43_43_2_f_0(Desc_3, (MR_String) "\n");
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word Goal_7)
{
  MR_String FullDesc_8;
  MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal_7, 0))));
  MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, Goal_7, 1))));
  MR_String Desc_16;
  MR_Word Context_56;
  MR_Integer Line_57;
  MR_String Var_82;
  MR_String Var_84;

  switch (MR_tag((MR_Word) GoalExpr_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Desc_16 = (MR_String) "negation";
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr_9, 3))));

        Desc_16 = hlds__hlds_desc__describe_unify_2_f_0(VarTable_6, Unification_14);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ArgVars_19 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, 2))));
        MR_Word SymName_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, 5))));
        MR_String Var_122;
        MR_String Var_123;

        Var_122 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_22);
        Var_123 = hlds__hlds_desc__describe_args_2_f_0(VarTable_6, ArgVars_19);
        Desc_16 = mercury__string__f_43_43_2_f_0(Var_122, Var_123);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GCall_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));
            MR_Word ArgVars_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));

            Desc_16 = hlds__hlds_desc__describe_generic_call_3_f_0(VarTable_6, GCall_23, ArgVars_85);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredId_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));
            MR_Word Args_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 4))));
            MR_Word ExtraArgs_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 5))));
            MR_Word PredInfo_34;
            MR_String Name_35;
            MR_Word ExtraVars_36;
            MR_String Var_65;
            MR_String Var_68;
            MR_Word ArgVars_86;
            MR_String Var_119;
            MR_String Var_120;

            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_28, &PredInfo_34);
            Name_35 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_34);
            ArgVars_86 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_desc_scalar_common_1[0]), (MR_Word) (&hlds__hlds_desc_scalar_common_6[0]), Args_30);
            ExtraVars_36 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_desc_scalar_common_1[0]), (MR_Word) (&hlds__hlds_desc_scalar_common_6[1]), ExtraArgs_31);
            Var_65 = hlds__hlds_desc__describe_args_2_f_0(VarTable_6, ArgVars_86);
            Var_68 = hlds__hlds_desc__describe_args_2_f_0(VarTable_6, ExtraVars_36);
            Var_119 = mercury__string__f_43_43_2_f_0(Var_65, Var_68);
            Var_120 = mercury__string__f_43_43_2_f_0(Name_35, Var_119);
            Desc_16 = mercury__string__f_43_43_2_f_0((MR_String) "foreign ", Var_120);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_37 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_9, 1))) & (MR_Integer) 1);
            MR_Word SubGoals_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 2))));

            if ((SubGoals_38 == (MR_Word) ((MR_Unsigned) 0U)))
              Desc_16 = (MR_String) "true";
            else
            {
              MR_String ConjStr_41;
              MR_Integer NumSubGoals_42;
              MR_String Var_109;
              MR_String Var_116;
              MR_String Var_118;

              switch (ConjType_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ConjStr_41 = (MR_String) "par_conj";
                  break;
                case (MR_Integer) 0:
                  ConjStr_41 = (MR_String) "conj";
                  break;
              }
              mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubGoals_38, &NumSubGoals_42);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_2[0]), NumSubGoals_42, &Var_109);
              Var_116 = mercury__string__f_43_43_2_f_0(Var_109, (MR_String) " subgoals)");
              Var_118 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_116);
              Desc_16 = mercury__string__f_43_43_2_f_0(ConjStr_41, Var_118);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals_89 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));

            if ((SubGoals_89 == (MR_Word) ((MR_Unsigned) 0U)))
              Desc_16 = (MR_String) "fail";
            else
            {
              MR_Integer NumSubGoals_87;
              MR_String Var_99;
              MR_String Var_106;

              mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubGoals_89, &NumSubGoals_87);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_2[0]), NumSubGoals_87, &Var_99);
              Var_106 = mercury__string__f_43_43_2_f_0(Var_99, (MR_String) " subgoals)");
              Desc_16 = mercury__string__f_43_43_2_f_0((MR_String) "disj(", Var_106);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));
            MR_String Var_81;

            Var_81 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_6, (MR_Integer) 1, Var_45);
            Desc_16 = mercury__string__f_43_43_2_f_0((MR_String) "switch on ", Var_81);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, 1))));

            Desc_16 = hlds__hlds_desc__describe_scope_reason_1_f_0(Reason_49);
          }
          break;
        case (MR_Integer) 6:
          Desc_16 = (MR_String) "if_then_else";
          break;
        case (MR_Integer) 7:
          Desc_16 = (MR_String) "shorthand";
          break;
      }
      break;
  }
  Context_56 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
  Line_57 = mercury__term_context__context_line_1_f_0(Context_56);
  Var_84 = mercury__string__int_to_string_1_f_0(Line_57);
  Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "\100", Var_84);
  FullDesc_8 = mercury__string__f_43_43_2_f_0(Desc_16, Var_82);
  return FullDesc_8;
}

static MR_String MR_CALL 
hlds__hlds_desc__describe_scope_reason_1_f_0(
  MR_Word Reason_3)
{
  MR_String Desc_4;

  switch (MR_tag((MR_Word) Reason_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Desc_4 = (MR_String) "scope exist quant";
      break;
    case (MR_Integer) 1:
      Desc_4 = (MR_String) "disable warnings";
      break;
    case (MR_Integer) 2:
      Desc_4 = (MR_String) "scope promise solutions";
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Desc_4 = (MR_String) "scope promise purity";
          break;
        case (MR_Integer) 1:
          Desc_4 = (MR_String) "scope require detism";
          break;
        case (MR_Integer) 2:
          Desc_4 = (MR_String) "scope require complete switch";
          break;
        case (MR_Integer) 3:
          Desc_4 = (MR_String) "scope require switch arm detism";
          break;
        case (MR_Integer) 4:
          Desc_4 = (MR_String) "scope commit";
          break;
        case (MR_Integer) 5:
          Desc_4 = (MR_String) "scope barrier";
          break;
        case (MR_Integer) 6:
          Desc_4 = (MR_String) "scope from_ground_term";
          break;
        case (MR_Integer) 7:
          Desc_4 = (MR_String) "scope trace goal";
          break;
        case (MR_Integer) 8:
          Desc_4 = (MR_String) "scope loop control goal";
          break;
      }
      break;
  }
  return Desc_4;
}

static MR_String MR_CALL 
hlds__hlds_desc__describe_generic_call_3_f_0(
  MR_Word VarTable_5,
  MR_Word GCall_6,
  MR_Word ArgVars_7)
{
  MR_String Desc_8;
  MR_String ArgsStr_9;

  ArgsStr_9 = hlds__hlds_desc__describe_args_2_f_0(VarTable_5, ArgVars_7);
  switch (MR_tag((MR_Word) GCall_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, GCall_6, 0))));
        MR_String Var_23;

        Var_23 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_5, (MR_Integer) 1, Var_10);
        Desc_8 = mercury__string__f_43_43_2_f_0(Var_23, ArgsStr_9);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MethodSNA_17 = ((MR_Word) ((MR_hl_field(1, GCall_6, 3))));
        MR_String Var_30;
        MR_String Var_33;
        MR_Word Var_50 = ((MR_Word) ((MR_hl_field(1, GCall_6, 0))));
        MR_String Var_54;
        MR_String Var_55;
        MR_String Var_57;

        Var_30 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_1_f_0(MethodSNA_17);
        Var_33 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_5, (MR_Integer) 1, Var_50);
        Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "]", ArgsStr_9);
        Var_55 = mercury__string__f_43_43_2_f_0(Var_33, Var_54);
        Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_55);
        Desc_8 = mercury__string__f_43_43_2_f_0(Var_30, Var_57);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String EventName_18 = ((MR_String) ((MR_hl_field(2, GCall_6, 0))));
        MR_String Var_52;

        Var_52 = mercury__string__f_43_43_2_f_0((MR_String) " ", ArgsStr_9);
        Desc_8 = mercury__string__f_43_43_2_f_0(EventName_18, Var_52);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word CastType_19 = ((MR_Unsigned) ((MR_hl_field(3, GCall_6, 0))) & (MR_Integer) 7);
        MR_String Var_46 = ((&hlds__hlds_desc_vector_common_4[0 + CastType_19]))->hlds__hlds_desc__vector_common_type_4_0__vct_4_f_0;
        MR_String Var_59;

        Var_59 = mercury__string__f_43_43_2_f_0((MR_String) " ", ArgsStr_9);
        Desc_8 = mercury__string__f_43_43_2_f_0(Var_46, Var_59);
      }
      break;
  }
  return Desc_8;
}

static MR_String MR_CALL 
hlds__hlds_desc__describe_unify_2_f_0(
  MR_Word VarTable_4,
  MR_Word Unification_5)
{
  MR_String Desc_6;

  switch (MR_tag((MR_Word) Unification_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Unification_5, 0))));
        MR_Word ConsId_8 = ((MR_Word) ((MR_hl_field(0, Unification_5, 1))));
        MR_Word Args_9 = ((MR_Word) ((MR_hl_field(0, Unification_5, 2))));
        MR_String VarStr_18;
        MR_String ConsIdStr_19;
        MR_String ArgsStr_20;
        MR_String Var_88;
        MR_String Var_90;
        MR_String Var_91;
        MR_String Var_93;

        VarStr_18 = hlds__hlds_desc__describe_var_2_f_0(VarTable_4, Var_7);
        ConsIdStr_19 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_8);
        ArgsStr_20 = hlds__hlds_desc__describe_args_2_f_0(VarTable_4, Args_9);
        Var_88 = mercury__string__f_43_43_2_f_0(ConsIdStr_19, ArgsStr_20);
        Var_90 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_88);
        Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "<=", Var_90);
        Var_93 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_91);
        Desc_6 = mercury__string__f_43_43_2_f_0(VarStr_18, Var_93);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, Unification_5, 0))));
        MR_Word ConsId_48 = ((MR_Word) ((MR_hl_field(1, Unification_5, 1))));
        MR_Word Args_49 = ((MR_Word) ((MR_hl_field(1, Unification_5, 2))));
        MR_String VarStr_51;
        MR_String ConsIdStr_52;
        MR_String ArgsStr_53;
        MR_String Var_82;
        MR_String Var_84;
        MR_String Var_85;
        MR_String Var_87;

        VarStr_51 = hlds__hlds_desc__describe_var_2_f_0(VarTable_4, Var_47);
        ConsIdStr_52 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_48);
        ArgsStr_53 = hlds__hlds_desc__describe_args_2_f_0(VarTable_4, Args_49);
        Var_82 = mercury__string__f_43_43_2_f_0(ConsIdStr_52, ArgsStr_53);
        Var_84 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_82);
        Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "=>", Var_84);
        Var_87 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_85);
        Desc_6 = mercury__string__f_43_43_2_f_0(VarStr_51, Var_87);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarA_21 = ((MR_Word) ((MR_hl_field(2, Unification_5, 0))));
        MR_Word VarB_22 = ((MR_Word) ((MR_hl_field(2, Unification_5, 1))));
        MR_String Var_39;
        MR_String Var_44;
        MR_String Var_95;
        MR_String Var_96;
        MR_String Var_98;

        Var_39 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_4, (MR_Integer) 1, VarA_21);
        Var_44 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_4, (MR_Integer) 1, VarB_22);
        Var_95 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_44);
        Var_96 = mercury__string__f_43_43_2_f_0((MR_String) ":=", Var_95);
        Var_98 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_96);
        Desc_6 = mercury__string__f_43_43_2_f_0(Var_39, Var_98);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word VarA_64 = ((MR_Word) ((MR_hl_field(3, Unification_5, 1))));
            MR_Word VarB_65 = ((MR_Word) ((MR_hl_field(3, Unification_5, 2))));
            MR_String Var_69;
            MR_String Var_74;
            MR_String Var_78;
            MR_String Var_79;
            MR_String Var_81;

            Var_69 = hlds__hlds_desc__describe_var_2_f_0(VarTable_4, VarA_64);
            Var_74 = hlds__hlds_desc__describe_var_2_f_0(VarTable_4, VarB_65);
            Var_78 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_74);
            Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "-=", Var_78);
            Var_81 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_79);
            Desc_6 = mercury__string__f_43_43_2_f_0(Var_69, Var_81);
          }
          break;
        case (MR_Integer) 1:
          Desc_6 = (MR_String) "complicated unify";
          break;
      }
      break;
  }
  return Desc_6;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_var_2_f_0(
  MR_Word VarTable_4,
  MR_Word Var_5)
{
  MR_String HeadVar__3_3;

  HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_4, (MR_Integer) 1, Var_5);
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_args_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = hlds__hlds_desc__describe_var_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_args_2_f_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word VarStrs_10;
    MR_String VarsStr_11;
    MR_Word Var_12;
    MR_String Var_23;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (&hlds__hlds_desc_scalar_common_3[0]));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (hlds__hlds_desc__describe_args_2_f_0_1));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (VarTable_1));
    }
    VarStrs_10 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_desc_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_12, HeadVar__2_2);
    VarsStr_11 = mercury__string__join_list_2_f_0((MR_String) ", ", VarStrs_10);
    Var_23 = mercury__string__f_43_43_2_f_0(VarsStr_11, (MR_String) ")");
    HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_23);
  }
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
hlds__hlds_desc____Unify____include_module_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_desc____Unify____include_module_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_desc____Compare____include_module_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_desc____Compare____include_module_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_desc__init(void)
{
}

void mercury__hlds__hlds_desc__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__hlds_desc__hlds__hlds_desc__type_ctor_info_include_module_name_0);
}

void mercury__hlds__hlds_desc__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_desc__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_desc.
