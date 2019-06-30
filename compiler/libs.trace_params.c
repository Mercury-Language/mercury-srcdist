/*
** Automatically generated from `trace_params.m'
** by the Mercury compiler,
** version DEV
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


// :- module libs.trace_params.
// :- implementation.

/*
INIT mercury__libs__trace_params__init
ENDINIT
*/

#include "libs.trace_params.mih"


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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 libs__trace_params__list__pti_list_1__plain_libs__trace_params__type_ctor_info_trace_suppress_item_0;

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0;

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1;

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2;

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3;

static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_value_ordered_port_category_0[4];

static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_name_ordered_port_category_0[4];

static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_port_category_0[4];

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0;

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1;

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2;

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3;

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4;

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5;

static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_value_ordered_trace_level_0[6];

static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_name_ordered_trace_level_0[6];

static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_trace_level_0[6];

static const MR_PseudoTypeInfo libs__trace_params__libs__trace_params__field_types_trace_suppress_item_0_0[1];

static const MR_DuArgLocn libs__trace_params__libs__trace_params__field_locns_trace_suppress_item_0_0[1];

static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_0;

static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_1;

static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_2;

static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_3;

static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_0[3];

static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_1[1];

static const MR_DuPtagLayout libs__trace_params__libs__trace_params__du_ptag_ordered_trace_suppress_item_0[2];

static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_name_ordered_trace_suppress_item_0[4];

static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_trace_suppress_item_0[4];

static const MR_FA_TypeInfo_Struct1 libs__trace_params__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

static void MR_CALL 
libs__trace_params____Compare____port_category_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__trace_params__maybe_add_suppressed_event_3_p_0(
  MR_Word SuppressItem_4,
  MR_Integer SuppressedEventsInt0_5,
  MR_Integer * SuppressedEventsInt_6);

static void MR_CALL 
libs__trace_params__wrap_port_2_p_0(
  MR_Word Port_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
libs__trace_params__convert_item_name_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
libs__trace_params__convert_item_name_2_p_0(
  MR_String String_3,
  MR_Word * Names_4);

static MR_bool MR_CALL 
libs__trace_params__char_is_comma_1_p_0(
  MR_Char HeadVar__1_1);

static void MR_CALL 
libs__trace_params__encode_suppressed_events_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__trace_params____Compare____port_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__trace_params____Unify____trace_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__trace_params____Compare____trace_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__trace_params____Compare____trace_suppress_item_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__trace_params____Compare____trace_suppress_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__trace_params_scalar_common_1[21][2];

static /* final */ const MR_Box libs__trace_params_scalar_common_3[4][1];

static /* final */ const MR_Box libs__trace_params_scalar_common_4[1][4];

static /* final */ const MR_Box libs__trace_params_scalar_common_5[4][3];

static /* final */ const MR_Box libs__trace_params_scalar_common_6[2][5];

static /* final */ const MR_Box libs__trace_params_scalar_common_12[1][6];


/* sealed */ struct libs__trace_params__vector_common_type_2_0_s {
  const MR_String libs__trace_params__vector_common_type_2_0__vct_2_f_0;
  const MR_Integer libs__trace_params__vector_common_type_2_0__vct_2_f_1;
};

static /* final */ const struct libs__trace_params__vector_common_type_2_0_s libs__trace_params_vector_common_2[6];

/* sealed */ struct libs__trace_params__vector_common_type_7_0_s {
  const MR_Word libs__trace_params__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct libs__trace_params__vector_common_type_7_0_s libs__trace_params_vector_common_7[66];

/* sealed */ struct libs__trace_params__vector_common_type_8_0_s {
  const MR_Word libs__trace_params__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct libs__trace_params__vector_common_type_8_0_s libs__trace_params_vector_common_8[16];

/* sealed */ struct libs__trace_params__vector_common_type_9_0_s {
  const MR_Word libs__trace_params__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct libs__trace_params__vector_common_type_9_0_s libs__trace_params_vector_common_9[6];

/* sealed */ struct libs__trace_params__vector_common_type_10_0_s {
  const MR_Word libs__trace_params__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct libs__trace_params__vector_common_type_10_0_s libs__trace_params_vector_common_10[6];

/* sealed */ struct libs__trace_params__vector_common_type_11_0_s {
  const MR_String libs__trace_params__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct libs__trace_params__vector_common_type_11_0_s libs__trace_params_vector_common_11[6];

/* sealed */ struct libs__trace_params__vector_common_type_13_0_s {
  const MR_Word libs__trace_params__vector_common_type_13_0__vct_13_f_0;
};

static /* final */ const struct libs__trace_params__vector_common_type_13_0_s libs__trace_params_vector_common_13[22];

/* sealed */ struct libs__trace_params__vector_common_type_14_0_s {
  const MR_String libs__trace_params__vector_common_type_14_0__vct_14_f_0;
  const MR_Word libs__trace_params__vector_common_type_14_0__vct_14_f_1;
};

static /* final */ const struct libs__trace_params__vector_common_type_14_0_s libs__trace_params_vector_common_14[6];

/* sealed */ struct libs__trace_params__vector_common_type_15_0_s {
  const MR_Integer libs__trace_params__vector_common_type_15_0__vct_15_f_0;
};

static /* final */ const struct libs__trace_params__vector_common_type_15_0_s libs__trace_params_vector_common_15[16];



static /* final */ const MR_Box libs__trace_params_scalar_common_1[21][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box libs__trace_params_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
};

static /* final */ const MR_Box libs__trace_params_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box libs__trace_params_scalar_common_5[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__trace_params_scalar_common_4[0])),
    ((MR_Box) (libs__trace_params__convert_trace_suppress_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__trace_params_scalar_common_6[0])),
    ((MR_Box) (libs__trace_params__convert_trace_suppress_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__trace_params_scalar_common_12[0])),
    ((MR_Box) (libs__trace_params__encode_suppressed_events_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__trace_params_scalar_common_6[1])),
    ((MR_Box) (libs__trace_params__convert_item_name_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__trace_params_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__trace_params__list__pti_list_1__plain_libs__trace_params__type_ctor_info_trace_suppress_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0)),
    ((MR_Box) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0))
  },
};

static /* final */ const MR_Box libs__trace_params_scalar_common_12[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};


static /* final */ const struct libs__trace_params__vector_common_type_2_0_s libs__trace_params_vector_common_2[6] = {
  /* row 0 */
  {
    (MR_String) "decl",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "deep",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "default",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "minimum",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "rep",
    (MR_Integer) 4
  },
  /* row 5 */
  {
    (MR_String) "shallow",
    (MR_Integer) 5
  },
};

static /* final */ const struct libs__trace_params__vector_common_type_7_0_s libs__trace_params_vector_common_7[66] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 0 },
  /* row 6 */   {     (MR_Integer) 0 },
  /* row 7 */   {     (MR_Integer) 0 },
  /* row 8 */   {     (MR_Integer) 1 },
  /* row 9 */   {     (MR_Integer) 0 },
  /* row 10 */   {     (MR_Integer) 1 },
  /* row 11 */   {     (MR_Integer) 1 },
  /* row 12 */   {     (MR_Integer) 1 },
  /* row 13 */   {     (MR_Integer) 1 },
  /* row 14 */   {     (MR_Integer) 1 },
  /* row 15 */   {     (MR_Integer) 0 },
  /* row 16 */   {     (MR_Integer) 1 },
  /* row 17 */   {     (MR_Integer) 0 },
  /* row 18 */   {     (MR_Integer) 0 },
  /* row 19 */   {     (MR_Integer) 0 },
  /* row 20 */   {     (MR_Integer) 1 },
  /* row 21 */   {     (MR_Integer) 0 },
  /* row 22 */   {     (MR_Integer) 1 },
  /* row 23 */   {     (MR_Integer) 1 },
  /* row 24 */   {     (MR_Integer) 1 },
  /* row 25 */   {     (MR_Integer) 0 },
  /* row 26 */   {     (MR_Integer) 0 },
  /* row 27 */   {     (MR_Integer) 0 },
  /* row 28 */   {     (MR_Integer) 0 },
  /* row 29 */   {     (MR_Integer) 0 },
  /* row 30 */   {     (MR_Integer) 0 },
  /* row 31 */   {     (MR_Integer) 0 },
  /* row 32 */   {     (MR_Integer) 0 },
  /* row 33 */   {     (MR_Integer) 1 },
  /* row 34 */   {     (MR_Integer) 1 },
  /* row 35 */   {     (MR_Integer) 1 },
  /* row 36 */   {     (MR_Integer) 0 },
  /* row 37 */   {     (MR_Integer) 0 },
  /* row 38 */   {     (MR_Integer) 1 },
  /* row 39 */   {     (MR_Integer) 1 },
  /* row 40 */   {     (MR_Integer) 1 },
  /* row 41 */   {     (MR_Integer) 1 },
  /* row 42 */   {     (MR_Integer) 0 },
  /* row 43 */   {     (MR_Integer) 1 },
  /* row 44 */   {     (MR_Integer) 1 },
  /* row 45 */   {     (MR_Integer) 1 },
  /* row 46 */   {     (MR_Integer) 1 },
  /* row 47 */   {     (MR_Integer) 1 },
  /* row 48 */   {     (MR_Integer) 0 },
  /* row 49 */   {     (MR_Integer) 0 },
  /* row 50 */   {     (MR_Integer) 0 },
  /* row 51 */   {     (MR_Integer) 1 },
  /* row 52 */   {     (MR_Integer) 0 },
  /* row 53 */   {     (MR_Integer) 0 },
  /* row 54 */   {     (MR_Integer) 0 },
  /* row 55 */   {     (MR_Integer) 0 },
  /* row 56 */   {     (MR_Integer) 0 },
  /* row 57 */   {     (MR_Integer) 1 },
  /* row 58 */   {     (MR_Integer) 1 },
  /* row 59 */   {     (MR_Integer) 1 },
  /* row 60 */   {     (MR_Integer) 0 },
  /* row 61 */   {     (MR_Integer) 0 },
  /* row 62 */   {     (MR_Integer) 0 },
  /* row 63 */   {     (MR_Integer) 0 },
  /* row 64 */   {     (MR_Integer) 1 },
  /* row 65 */   {     (MR_Integer) 1 },
};

static /* final */ const struct libs__trace_params__vector_common_type_8_0_s libs__trace_params_vector_common_8[16] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 0 },
  /* row 6 */   {     (MR_Integer) 2 },
  /* row 7 */   {     (MR_Integer) 1 },
  /* row 8 */   {     (MR_Integer) 1 },
  /* row 9 */   {     (MR_Integer) 2 },
  /* row 10 */   {     (MR_Integer) 2 },
  /* row 11 */   {     (MR_Integer) 2 },
  /* row 12 */   {     (MR_Integer) 1 },
  /* row 13 */   {     (MR_Integer) 1 },
  /* row 14 */   {     (MR_Integer) 1 },
  /* row 15 */   {     (MR_Integer) 3 },
};

static /* final */ const struct libs__trace_params__vector_common_type_9_0_s libs__trace_params_vector_common_9[6] = {
  /* row 0 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 1 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 2 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[16])) },
  /* row 3 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[20])) },
  /* row 4 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[19])) },
  /* row 5 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[19])) },
};

static /* final */ const struct libs__trace_params__vector_common_type_10_0_s libs__trace_params_vector_common_10[6] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 3 },
  /* row 5 */   {     (MR_Integer) 3 },
};

static /* final */ const struct libs__trace_params__vector_common_type_11_0_s libs__trace_params_vector_common_11[6] = {
  /* row 0 */   {     (MR_String) "MR_TRACE_LEVEL_NONE" },
  /* row 1 */   {     (MR_String) "MR_TRACE_LEVEL_BASIC" },
  /* row 2 */   {     (MR_String) "MR_TRACE_LEVEL_BASIC_USER" },
  /* row 3 */   {     (MR_String) "MR_TRACE_LEVEL_SHALLOW" },
  /* row 4 */   {     (MR_String) "MR_TRACE_LEVEL_DEEP" },
  /* row 5 */   {     (MR_String) "MR_TRACE_LEVEL_DECL_REP" },
};

static /* final */ const struct libs__trace_params__vector_common_type_13_0_s libs__trace_params_vector_common_13[22] = {
  /* row 0 */   {     (MR_Integer) 6 },
  /* row 1 */   {     (MR_Integer) 12 },
  /* row 2 */   {     (MR_Integer) 13 },
  /* row 3 */   {     (MR_Integer) 8 },
  /* row 4 */   {     (MR_Integer) 5 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 3 },
  /* row 7 */   {     (MR_Integer) 6 },
  /* row 8 */   {     (MR_Integer) 8 },
  /* row 9 */   {     (MR_Integer) 7 },
  /* row 10 */   {     (MR_Integer) 9 },
  /* row 11 */   {     (MR_Integer) 11 },
  /* row 12 */   {     (MR_Integer) 10 },
  /* row 13 */   {     (MR_Integer) 9 },
  /* row 14 */   {     (MR_Integer) 11 },
  /* row 15 */   {     (MR_Integer) 10 },
  /* row 16 */   {     (MR_Integer) 2 },
  /* row 17 */   {     (MR_Integer) 14 },
  /* row 18 */   {     (MR_Integer) 14 },
  /* row 19 */   {     (MR_Integer) 4 },
  /* row 20 */   {     (MR_Integer) 7 },
  /* row 21 */   {     (MR_Integer) 15 },
};

static /* final */ const struct libs__trace_params__vector_common_type_14_0_s libs__trace_params_vector_common_14[6] = {
  /* row 0 */
  {
    (MR_String) "all_var_names",
    (MR_Word) ((MR_Unsigned) 4U)
  },
  /* row 1 */
  {
    (MR_String) "bodies",
    (MR_Word) ((MR_Unsigned) 8U)
  },
  /* row 2 */
  {
    (MR_String) "names",
    (MR_Word) ((MR_Unsigned) 4U)
  },
  /* row 3 */
  {
    (MR_String) "proc_body_reps",
    (MR_Word) ((MR_Unsigned) 8U)
  },
  /* row 4 */
  {
    (MR_String) "return",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 5 */
  {
    (MR_String) "return_info",
    (MR_Word) ((MR_Unsigned) 0U)
  },
};

static /* final */ const struct libs__trace_params__vector_common_type_15_0_s libs__trace_params_vector_common_15[16] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 6 },
  /* row 7 */   {     (MR_Integer) 7 },
  /* row 8 */   {     (MR_Integer) 8 },
  /* row 9 */   {     (MR_Integer) 9 },
  /* row 10 */   {     (MR_Integer) 10 },
  /* row 11 */   {     (MR_Integer) 11 },
  /* row 12 */   {     (MR_Integer) 12 },
  /* row 13 */   {     (MR_Integer) 13 },
  /* row 14 */   {     (MR_Integer) 14 },
  /* row 15 */   {     (MR_Integer) 15 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 libs__trace_params__list__pti_list_1__plain_libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0)
  }
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0 = {
  (MR_String) "port_cat_interface",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1 = {
  (MR_String) "port_cat_internal",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2 = {
  (MR_String) "port_cat_context",
  INT32_C(2)
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3 = {
  (MR_String) "port_cat_user",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_value_ordered_port_category_0[4] = {
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3
};

static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_name_ordered_port_category_0[4] = {
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3
};

static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_port_category_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_port_category_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__trace_params____Unify____port_category_0_0_10001)),
  ((MR_Box) (libs__trace_params____Compare____port_category_0_0_10001)),
  (MR_String) "libs.trace_params",
  (MR_String) "port_category",
  {     libs__trace_params__libs__trace_params__enum_name_ordered_port_category_0 },
  {     libs__trace_params__libs__trace_params__enum_value_ordered_port_category_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  libs__trace_params__libs__trace_params__functor_number_map_port_category_0
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0 = {
  (MR_String) "none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1 = {
  (MR_String) "basic",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2 = {
  (MR_String) "basic_user",
  INT32_C(2)
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3 = {
  (MR_String) "shallow",
  INT32_C(3)
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4 = {
  (MR_String) "deep",
  INT32_C(4)
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5 = {
  (MR_String) "decl_rep",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_value_ordered_trace_level_0[6] = {
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5
};

static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_name_ordered_trace_level_0[6] = {
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3
};

static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_trace_level_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__trace_params____Unify____trace_level_0_0_10001)),
  ((MR_Box) (libs__trace_params____Compare____trace_level_0_0_10001)),
  (MR_String) "libs.trace_params",
  (MR_String) "trace_level",
  {     libs__trace_params__libs__trace_params__enum_name_ordered_trace_level_0 },
  {     libs__trace_params__libs__trace_params__enum_value_ordered_trace_level_0 },
  (MR_Integer) 6,
  UINT16_C(4),
  libs__trace_params__libs__trace_params__functor_number_map_trace_level_0
};

static const MR_PseudoTypeInfo libs__trace_params__libs__trace_params__field_types_trace_suppress_item_0_0[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0)
};

static const MR_DuArgLocn libs__trace_params__libs__trace_params__field_locns_trace_suppress_item_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_0 = {
  (MR_String) "suppress_port",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  libs__trace_params__libs__trace_params__field_types_trace_suppress_item_0_0,
  NULL,
  libs__trace_params__libs__trace_params__field_locns_trace_suppress_item_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_1 = {
  (MR_String) "suppress_return_info",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_2 = {
  (MR_String) "suppress_all_var_names",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_3 = {
  (MR_String) "suppress_proc_body_reps",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_0[3] = {
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_1,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_2,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_3
};

static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_1[1] = {
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_0
};

static const MR_DuPtagLayout libs__trace_params__libs__trace_params__du_ptag_ordered_trace_suppress_item_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_name_ordered_trace_suppress_item_0[4] = {
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_2,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_0,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_3,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_1
};

static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_trace_suppress_item_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__trace_params____Unify____trace_suppress_item_0_0_10001)),
  ((MR_Box) (libs__trace_params____Compare____trace_suppress_item_0_0_10001)),
  (MR_String) "libs.trace_params",
  (MR_String) "trace_suppress_item",
  {     libs__trace_params__libs__trace_params__du_name_ordered_trace_suppress_item_0 },
  {     libs__trace_params__libs__trace_params__du_ptag_ordered_trace_suppress_item_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  libs__trace_params__libs__trace_params__functor_number_map_trace_suppress_item_0
};

static const MR_FA_TypeInfo_Struct1 libs__trace_params__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0)
  }
};

const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__trace_params____Unify____trace_suppress_items_0_0_10001)),
  ((MR_Box) (libs__trace_params____Compare____trace_suppress_items_0_0_10001)),
  (MR_String) "libs.trace_params",
  (MR_String) "trace_suppress_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__trace_params__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

void MR_CALL 
libs__trace_params____Compare____trace_suppress_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__trace_params_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__trace_params_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
libs__trace_params____Compare____trace_suppress_item_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
                  MR_Integer Var_16 = (MR_Integer) (Var_15);
                  MR_Integer Var_17 = (MR_Integer) (ArgY1_5);

                  succeeded = (Var_16 < Var_17);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_16 > Var_17);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_item_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
libs__trace_params____Compare____trace_level_0_0(
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

MR_bool MR_CALL 
libs__trace_params____Unify____trace_level_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
libs__trace_params____Compare____port_category_0_0(
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
libs__trace_params____Unify____port_category_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
libs__trace_params__maybe_add_suppressed_event_3_p_0(
  MR_Word SuppressItem_4,
  MR_Integer SuppressedEventsInt0_5,
  MR_Integer * SuppressedEventsInt_6)
{
  switch (MR_tag((MR_Word) SuppressItem_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *SuppressedEventsInt_6 = SuppressedEventsInt0_5;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Port_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), SuppressItem_4, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_Integer Var_8;
        MR_Integer Var_10 = ((&libs__trace_params_vector_common_15[0 + Port_7]))->libs__trace_params__vector_common_type_15_0__vct_15_f_0;

        Var_8 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, Var_10);
        *SuppressedEventsInt_6 = (SuppressedEventsInt0_5 | Var_8);
      }
      break;
  }
}

static void MR_CALL 
libs__trace_params__wrap_port_2_p_0(
  MR_Word Port_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__2_2 = base;
    MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Port_3));
  }
}

static void MR_CALL 
libs__trace_params__convert_item_name_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    libs__trace_params__wrap_port_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
libs__trace_params__convert_item_name_2_p_0(
  MR_String String_3,
  MR_Word * Names_4)
{
  {
    MR_bool succeeded;
    MR_Word PortName_5;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(String_3, 0)) {
        case (MR_Integer) 99:
          if (MR_offset_streq(1, String_3, (MR_String) "cond"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 100:
          if (((((((((MR_nth_code_unit(String_3, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(String_3, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(String_3, 3)) == (MR_Integer) 106)))) && (((MR_nth_code_unit(String_3, 4)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(String_3, 5)) {
              case (MR_Integer) 102:
                if (MR_offset_streq(6, String_3, (MR_String) "disj_first"))
                  case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 108:
                if (MR_offset_streq(6, String_3, (MR_String) "disj_later"))
                  case_num_0 = (MR_Integer) 2;
                break;
            }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(String_3, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, String_3, (MR_String) "else"))
                case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 120:
              switch (MR_nth_code_unit(String_3, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, String_3, (MR_String) "exception"))
                    case_num_0 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, String_3, (MR_String) "exit"))
                    case_num_0 = (MR_Integer) 5;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 102:
          if (MR_offset_streq(1, String_3, (MR_String) "fail"))
            case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 105:
          if (((((((MR_nth_code_unit(String_3, 1)) == (MR_Integer) 116)) && (((MR_nth_code_unit(String_3, 2)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(String_3, 3)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(String_3, 4)) {
              case (MR_Integer) 99:
                if (MR_offset_streq(5, String_3, (MR_String) "ite_cond"))
                  case_num_0 = (MR_Integer) 7;
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(5, String_3, (MR_String) "ite_else"))
                  case_num_0 = (MR_Integer) 8;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(5, String_3, (MR_String) "ite_then"))
                  case_num_0 = (MR_Integer) 9;
                break;
            }
          break;
        case (MR_Integer) 110:
          if (((((MR_nth_code_unit(String_3, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(String_3, 2)) == (MR_Integer) 103))))
            switch (MR_nth_code_unit(String_3, 3)) {
              case (MR_Integer) 95:
                switch (MR_nth_code_unit(String_3, 4)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(5, String_3, (MR_String) "neg_enter"))
                      case_num_0 = (MR_Integer) 10;
                    break;
                  case (MR_Integer) 102:
                    if (MR_offset_streq(5, String_3, (MR_String) "neg_failure"))
                      case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(5, String_3, (MR_String) "neg_success"))
                      case_num_0 = (MR_Integer) 12;
                    break;
                }
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(4, String_3, (MR_String) "nege"))
                  case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 102:
                if (MR_offset_streq(4, String_3, (MR_String) "negf"))
                  case_num_0 = (MR_Integer) 14;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(4, String_3, (MR_String) "negs"))
                  case_num_0 = (MR_Integer) 15;
                break;
            }
          break;
        case (MR_Integer) 114:
          if (MR_offset_streq(1, String_3, (MR_String) "redo"))
            case_num_0 = (MR_Integer) 16;
          break;
        case (MR_Integer) 115:
          if (((MR_nth_code_unit(String_3, 1)) == (MR_Integer) 119))
            switch (MR_nth_code_unit(String_3, 2)) {
              case (MR_Integer) 105:
                if (MR_offset_streq(3, String_3, (MR_String) "switch"))
                  case_num_0 = (MR_Integer) 17;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, String_3, (MR_String) "swtc"))
                  case_num_0 = (MR_Integer) 18;
                break;
            }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(String_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, String_3, (MR_String) "tail"))
                case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, String_3, (MR_String) "then"))
                case_num_0 = (MR_Integer) 20;
              break;
          }
          break;
        case (MR_Integer) 117:
          if (MR_offset_streq(1, String_3, (MR_String) "user"))
            case_num_0 = (MR_Integer) 21;
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        ;
        PortName_5 = ((&libs__trace_params_vector_common_13[0 + case_num_0]))->libs__trace_params__vector_common_type_13_0__vct_13_f_0;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word Var_8;

      {
        Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_8, 0) = (MR_Box) ((MR_Unsigned) (PortName_5));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Names_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word PortNames_6;

      if ((strcmp(String_3, (MR_String) "context") == 0))
      {
        PortNames_6 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[5]));
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(String_3, (MR_String) "internal") == 0))
      {
        PortNames_6 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[15]));
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(String_3, (MR_String) "interface") == 0))
      {
        PortNames_6 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[10]));
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        mercury__list__map_3_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0), (MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0), (MR_Word) (&libs__trace_params_scalar_common_5[3]), PortNames_6, Names_4);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word OtherName_7;
        MR_Word Var_11;
        MR_Integer lo_1 = (MR_Integer) 0;
        MR_Integer hi_2 = (MR_Integer) 5;
        MR_Integer mid_3;
        MR_Integer result_4;

        // binary string simple lookup switch
        ;
        do
        {
          mid_3 = (((MR_Integer) ((MR_Unsigned) lo_1 + (MR_Unsigned) hi_2)) / (MR_Integer) 2);
          result_4 = MR_strcmp(String_3, ((&libs__trace_params_vector_common_14[0 + mid_3]))->libs__trace_params__vector_common_type_14_0__vct_14_f_0);
          if ((result_4 == (MR_Integer) 0))
          {
            OtherName_7 = ((&libs__trace_params_vector_common_14[0 + mid_3]))->libs__trace_params__vector_common_type_14_0__vct_14_f_1;
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_4 < (MR_Integer) 0))
            hi_2 = (MR_Integer) ((MR_Unsigned) mid_3 - (MR_Unsigned) (MR_Integer) 1);
          else
            lo_1 = (MR_Integer) ((MR_Unsigned) mid_3 + (MR_Unsigned) (MR_Integer) 1);
        }
        while ((lo_1 <= hi_2));
        succeeded = MR_FALSE;
      label_0:;
        if (succeeded)
        {
          Var_11 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Names_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OtherName_7));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_11));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__trace_params__char_is_comma_1_p_0(
  MR_Char HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == (MR_Char) 44);

    return succeeded;
  }
}

static void MR_CALL 
libs__trace_params__encode_suppressed_events_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_SuppressedEventsInt_6;

    libs__trace_params__maybe_add_suppressed_event_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_SuppressedEventsInt_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_SuppressedEventsInt_6));
  }
}

MR_Integer MR_CALL 
libs__trace_params__encode_suppressed_events_1_f_0(
  MR_Word SuppressedEvents_3)
{
  {
    MR_Integer SuppressedEventsInt_4;
    MR_Box conv1_SuppressedEventsInt_4;

    mercury__set__fold_4_p_0((MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&libs__trace_params_scalar_common_5[2]), SuppressedEvents_3, ((MR_Box) ((MR_Integer) 0)), &conv1_SuppressedEventsInt_4);
    SuppressedEventsInt_4 = ((MR_Integer) (conv1_SuppressedEventsInt_4));
    return SuppressedEventsInt_4;
  }
}

MR_String MR_CALL 
libs__trace_params__trace_level_rep_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&libs__trace_params_vector_common_11[0 + HeadVar__1_1]))->libs__trace_params__vector_common_type_11_0__vct_11_f_0;

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_level_for_unify_compare_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&libs__trace_params_vector_common_10[0 + HeadVar__1_1]))->libs__trace_params__vector_common_type_10_0__vct_10_f_0;

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__at_least_at_deep_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&libs__trace_params_vector_common_7[60 + HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__at_least_at_shallow_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&libs__trace_params_vector_common_7[54 + HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_level_none_0_f_0(void)
{
  {
    return (MR_Integer) 0;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_needs_port_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word TraceLevel_11,
  MR_Word SuppressItems_12,
  MR_Word Port_13)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__7_7;
    MR_Word Var_14;
    MR_Word Category_19;
    MR_Word Var_20;
    MR_Word TypeCtorInfo_14_24;
    MR_Word Var_22;

    Var_14 = libs__trace_params__eff_trace_level_4_f_0(ModuleInfo_8, PredInfo_9, ProcInfo_10, TraceLevel_11);
    Category_19 = ((&libs__trace_params_vector_common_8[0 + Port_13]))->libs__trace_params__vector_common_type_8_0__vct_8_f_0;
    Var_20 = ((&libs__trace_params_vector_common_9[0 + Var_14]))->libs__trace_params__vector_common_type_9_0__vct_9_f_0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_port_category_0), ((MR_Box) (Category_19)), Var_20);
    if (succeeded)
    {
      if (((MR_Unsigned) 30U & (((MR_Integer) 1 << Var_14))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        TypeCtorInfo_14_24 = (MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0);
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = (MR_Box) ((MR_Unsigned) (Port_13));
        }
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_14_24, ((MR_Box) (Var_22)), SuppressItems_12);
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
      HeadVar__7_7 = (MR_Integer) 1;
    else
      HeadVar__7_7 = (MR_Integer) 0;
    return HeadVar__7_7;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_needs_proc_body_reps_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PredInfo_8,
  MR_Word ProcInfo_9,
  MR_Word TraceLevel_10,
  MR_Word SuppressItems_11)
{
  {
    MR_Word HeadVar__6_6;
    MR_Word Var_12;

    Var_12 = libs__trace_params__eff_trace_level_4_f_0(ModuleInfo_7, PredInfo_8, ProcInfo_9, TraceLevel_10);
    HeadVar__6_6 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(Var_12, SuppressItems_11);
    return HeadVar__6_6;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_needs_all_var_names_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PredInfo_8,
  MR_Word ProcInfo_9,
  MR_Word TraceLevel_10,
  MR_Word SuppressItems_11)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__6_6;
    MR_Word Var_12;
    MR_Word TypeCtorInfo_9_18;
    MR_Word Var_17;

    Var_12 = libs__trace_params__eff_trace_level_4_f_0(ModuleInfo_7, PredInfo_8, ProcInfo_9, TraceLevel_10);
    succeeded = (Var_12 == (MR_Integer) 5);
    if (succeeded)
    {
      Var_17 = (MR_Word) ((MR_Unsigned) 4U);
      TypeCtorInfo_9_18 = (MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0);
      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_9_18, ((MR_Box) (Var_17)), SuppressItems_11);
      succeeded = !(succeeded);
    }
    if (succeeded)
      HeadVar__6_6 = (MR_Integer) 1;
    else
      HeadVar__6_6 = (MR_Integer) 0;
    return HeadVar__6_6;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word ProcInfo_8,
  MR_Word TraceLevel_9)
{
  {
    MR_Word HeadVar__5_5;
    MR_Word Var_10;

    Var_10 = libs__trace_params__eff_trace_level_4_f_0(ModuleInfo_6, PredInfo_7, ProcInfo_8, TraceLevel_9);
    HeadVar__5_5 = ((&libs__trace_params_vector_common_7[48 + Var_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
    return HeadVar__5_5;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_level_needs_fixed_slots_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word ProcInfo_8,
  MR_Word TraceLevel_9)
{
  {
    MR_Word HeadVar__5_5;
    MR_Word Var_10;

    Var_10 = libs__trace_params__eff_trace_level_4_f_0(ModuleInfo_6, PredInfo_7, ProcInfo_8, TraceLevel_9);
    HeadVar__5_5 = ((&libs__trace_params_vector_common_7[42 + Var_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
    return HeadVar__5_5;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word ProcInfo_8,
  MR_Word TraceLevel_9)
{
  {
    MR_Word HeadVar__5_5;
    MR_Word Var_10;

    Var_10 = libs__trace_params__eff_trace_level_4_f_0(ModuleInfo_6, PredInfo_7, ProcInfo_8, TraceLevel_9);
    HeadVar__5_5 = ((&libs__trace_params_vector_common_7[36 + Var_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
    return HeadVar__5_5;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_level_needs_input_vars_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word ProcInfo_8,
  MR_Word TraceLevel_9)
{
  {
    MR_Word HeadVar__5_5;
    MR_Word Var_10;

    Var_10 = libs__trace_params__eff_trace_level_4_f_0(ModuleInfo_6, PredInfo_7, ProcInfo_8, TraceLevel_9);
    HeadVar__5_5 = ((&libs__trace_params_vector_common_7[30 + Var_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
    return HeadVar__5_5;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_level_is_none_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word ProcInfo_8,
  MR_Word TraceLevel_9)
{
  {
    MR_Word HeadVar__5_5;
    MR_Word Var_10;

    Var_10 = libs__trace_params__eff_trace_level_4_f_0(ModuleInfo_6, PredInfo_7, ProcInfo_8, TraceLevel_9);
    HeadVar__5_5 = ((&libs__trace_params_vector_common_7[24 + Var_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
    return HeadVar__5_5;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_level_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word ProcInfo_8,
  MR_Word TraceLevel_9)
{
  {
    MR_bool succeeded = (TraceLevel_9 == (MR_Integer) 0);
    MR_Word EffTraceLevel_10;

    if (succeeded)
      EffTraceLevel_10 = (MR_Integer) 0;
    else
    {
      MR_Word Origin_11;

      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_7, &Origin_11);
      switch (MR_tag((MR_Word) Origin_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SpecialPred_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Origin_11, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (SpecialPred_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                EffTraceLevel_10 = (MR_Integer) 3;
                break;
              case (MR_Integer) 1:
                EffTraceLevel_10 = (MR_Integer) 0;
                break;
              case (MR_Integer) 0:
                EffTraceLevel_10 = (MR_Integer) 3;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word PredStatus_39;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;

            hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_7, &PredStatus_39);
            succeeded = (TraceLevel_9 == (MR_Integer) 3);
            if (succeeded)
            {
              Var_42 = hlds__status__pred_status_is_exported_1_f_0(PredStatus_39);
              succeeded = (Var_42 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_43 = (MR_Integer) 1;
                hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(ProcInfo_8, &Var_44);
                succeeded = (Var_43 == Var_44);
              }
            }
            if (succeeded)
            {
              MR_Word ProcHasUserEvent_40;

              hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(ProcInfo_8, &ProcHasUserEvent_40);
              switch (ProcHasUserEvent_40) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ModuleHasUserEvent_41;

                    hlds__hlds_module__module_info_get_has_user_event_2_p_0(ModuleInfo_6, &ModuleHasUserEvent_41);
                    switch (ModuleHasUserEvent_41) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        EffTraceLevel_10 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 0:
                        EffTraceLevel_10 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  EffTraceLevel_10 = (MR_Integer) 2;
                  break;
              }
            }
            else
              EffTraceLevel_10 = TraceLevel_9;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word PredCreation_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_11, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (PredCreation_14) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word PredStatus_50;
                      MR_Word Var_53;
                      MR_Word Var_54;
                      MR_Word Var_55;

                      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_7, &PredStatus_50);
                      succeeded = (TraceLevel_9 == (MR_Integer) 3);
                      if (succeeded)
                      {
                        Var_53 = hlds__status__pred_status_is_exported_1_f_0(PredStatus_50);
                        succeeded = (Var_53 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_54 = (MR_Integer) 1;
                          hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(ProcInfo_8, &Var_55);
                          succeeded = (Var_54 == Var_55);
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word ProcHasUserEvent_51;

                        hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(ProcInfo_8, &ProcHasUserEvent_51);
                        switch (ProcHasUserEvent_51) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              MR_Word ModuleHasUserEvent_52;

                              hlds__hlds_module__module_info_get_has_user_event_2_p_0(ModuleInfo_6, &ModuleHasUserEvent_52);
                              switch (ModuleHasUserEvent_52) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  EffTraceLevel_10 = (MR_Integer) 0;
                                  break;
                                case (MR_Integer) 0:
                                  EffTraceLevel_10 = (MR_Integer) 1;
                                  break;
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            EffTraceLevel_10 = (MR_Integer) 2;
                            break;
                        }
                      }
                      else
                        EffTraceLevel_10 = TraceLevel_9;
                    }
                    break;
                  case (MR_Integer) 1:
                    EffTraceLevel_10 = (MR_Integer) 0;
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
              {
                MR_Word PredStatus_39;
                MR_Word Var_42;
                MR_Word Var_43;
                MR_Word Var_44;

                hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_7, &PredStatus_39);
                succeeded = (TraceLevel_9 == (MR_Integer) 3);
                if (succeeded)
                {
                  Var_42 = hlds__status__pred_status_is_exported_1_f_0(PredStatus_39);
                  succeeded = (Var_42 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_43 = (MR_Integer) 1;
                    hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(ProcInfo_8, &Var_44);
                    succeeded = (Var_43 == Var_44);
                  }
                }
                if (succeeded)
                {
                  MR_Word ProcHasUserEvent_40;

                  hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(ProcInfo_8, &ProcHasUserEvent_40);
                  switch (ProcHasUserEvent_40) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word ModuleHasUserEvent_41;

                        hlds__hlds_module__module_info_get_has_user_event_2_p_0(ModuleInfo_6, &ModuleHasUserEvent_41);
                        switch (ModuleHasUserEvent_41) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            EffTraceLevel_10 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 0:
                            EffTraceLevel_10 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      EffTraceLevel_10 = (MR_Integer) 2;
                      break;
                  }
                }
                else
                  EffTraceLevel_10 = TraceLevel_9;
              }
              break;
          }
          break;
      }
    }
    return EffTraceLevel_10;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_needs_proc_body_reps_2_f_0(
  MR_Word TraceLevel_4,
  MR_Word TraceSuppressItems_5)
{
  {
    MR_bool succeeded = (TraceLevel_4 == (MR_Integer) 5);
    MR_Word Need_6;
    MR_Word TypeCtorInfo_9_9;
    MR_Word Var_8;

    if (succeeded)
    {
      Var_8 = (MR_Word) ((MR_Unsigned) 8U);
      TypeCtorInfo_9_9 = (MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0);
      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_9_9, ((MR_Box) (Var_8)), TraceSuppressItems_5);
      succeeded = !(succeeded);
    }
    if (succeeded)
      Need_6 = (MR_Integer) 1;
    else
      Need_6 = (MR_Integer) 0;
    return Need_6;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_level_needs_meaningful_var_names_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&libs__trace_params_vector_common_7[18 + HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_level_allows_tail_rec_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&libs__trace_params_vector_common_7[12 + HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_needs_return_info_2_f_0(
  MR_Word TraceLevel_4,
  MR_Word TraceSuppressItems_5)
{
  {
    MR_bool succeeded;
    MR_Word Need_6;
    MR_Word TypeCtorInfo_9_9;
    MR_Word Var_8;

    if (((MR_Unsigned) 62U & (((MR_Integer) 1 << TraceLevel_4))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      Var_8 = (MR_Word) ((MR_Unsigned) 0U);
      TypeCtorInfo_9_9 = (MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0);
      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_9_9, ((MR_Box) (Var_8)), TraceSuppressItems_5);
      succeeded = !(succeeded);
    }
    if (succeeded)
      Need_6 = (MR_Integer) 1;
    else
      Need_6 = (MR_Integer) 0;
    return Need_6;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_level_allows_delay_death_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&libs__trace_params_vector_common_7[6 + HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__given_trace_level_is_none_1_f_0(
  MR_Word TraceLevel_3)
{
  {
    MR_Word HeadVar__2_2 = ((&libs__trace_params_vector_common_7[0 + TraceLevel_3]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__default_trace_suppress_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__set__init_0_f_0((MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0));
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Names_4;

    succeeded = libs__trace_params__convert_item_name_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_Names_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Names_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__trace_params__char_is_comma_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0(
  MR_String SuppressString_3,
  MR_Word * SuppressItemSet_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_15_15;
    MR_Word SuppressWords_5;
    MR_Word SuppressItemLists_6;
    MR_Word SuppressItems_7;

    SuppressWords_5 = mercury__string__words_separator_2_f_0((MR_Word) (&libs__trace_params_scalar_common_5[0]), SuppressString_3);
    succeeded = mercury__list__map_3_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__trace_params_scalar_common_1[0]), (MR_Word) (&libs__trace_params_scalar_common_5[1]), SuppressWords_5, &SuppressItemLists_6);
    if (succeeded)
    {
      TypeCtorInfo_15_15 = (MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0);
      mercury__list__condense_2_p_0(TypeCtorInfo_15_15, SuppressItemLists_6, &SuppressItems_7);
      mercury__set__list_to_set_2_p_0(TypeCtorInfo_15_15, SuppressItems_7, SuppressItemSet_4);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__trace_params__convert_trace_level_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 5;
    MR_Integer mid_2;
    MR_Integer result_3;

    // binary string jump switch
    ;
    do
    {
      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(HeadVar__1_1, ((&libs__trace_params_vector_common_2[0 + mid_2]))->libs__trace_params__vector_common_type_2_0__vct_2_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        switch (((&libs__trace_params_vector_common_2[0 + mid_2]))->libs__trace_params__vector_common_type_2_0__vct_2_f_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              // case "decl"
              ;
              *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[1]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              // case "deep"
              ;
              switch (HeadVar__3_3) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[3]));
                  break;
                case (MR_Integer) 1:
                  *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              // case "default"
              ;
              switch (HeadVar__3_3) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (HeadVar__2_2) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[2]));
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[3]));
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[1]));
                  break;
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              // case "minimum"
              ;
              switch (HeadVar__3_3) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (HeadVar__2_2) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[2]));
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[0]));
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[1]));
                  break;
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              // case "rep"
              ;
              *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[1]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              // case "shallow"
              ;
              switch (HeadVar__3_3) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[0]));
                  break;
                case (MR_Integer) 1:
                  *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
              succeeded = MR_TRUE;
            }
            break;
        }
        // jump out of search loop
        ;
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
      else
        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__trace_params____Unify____port_category_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__trace_params____Compare____port_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__trace_params____Compare____port_category_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__trace_params____Unify____trace_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__trace_params____Unify____trace_level_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__trace_params____Compare____trace_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__trace_params____Compare____trace_level_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__trace_params____Unify____trace_suppress_item_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__trace_params____Compare____trace_suppress_item_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__trace_params____Compare____trace_suppress_item_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__trace_params____Unify____trace_suppress_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__trace_params____Compare____trace_suppress_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__trace_params____Compare____trace_suppress_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__libs__trace_params__init(void)
{
}

void mercury__libs__trace_params__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__trace_params__libs__trace_params__type_ctor_info_port_category_0);
	MR_register_type_ctor_info(&libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0);
	MR_register_type_ctor_info(&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0);
	MR_register_type_ctor_info(&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0);
}

void mercury__libs__trace_params__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__trace_params__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.trace_params.
