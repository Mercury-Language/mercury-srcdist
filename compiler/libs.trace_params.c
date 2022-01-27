/*
** Automatically generated from `trace_params.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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


/* :- module libs.trace_params. */
/* :- implementation. */

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
#include "libs.compiler_util.mih"
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

static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0_10001(
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2);

static void MR_CALL 
libs__trace_params____Compare____port_category_0_0_10001(
  MR_Box * libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2,
  MR_Box libs__trace_params__wrapper_arg_3);

static MR_bool MR_CALL 
libs__trace_params____Unify____trace_level_0_0_10001(
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2);

static void MR_CALL 
libs__trace_params____Compare____trace_level_0_0_10001(
  MR_Box * libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2,
  MR_Box libs__trace_params__wrapper_arg_3);

static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_item_0_0_10001(
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2);

static void MR_CALL 
libs__trace_params____Compare____trace_suppress_item_0_0_10001(
  MR_Box * libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2,
  MR_Box libs__trace_params__wrapper_arg_3);

static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_items_0_0_10001(
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2);

static void MR_CALL 
libs__trace_params____Compare____trace_suppress_items_0_0_10001(
  MR_Box * libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2,
  MR_Box libs__trace_params__wrapper_arg_3);

static void MR_CALL 
libs__trace_params____Compare____port_category_0_0(
  MR_Word * libs__trace_params__HeadVar__1_1,
  MR_Word libs__trace_params__HeadVar__2_2,
  MR_Word libs__trace_params__HeadVar__3_3);

static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0(
  MR_Word libs__trace_params__HeadVar__2_1,
  MR_Word libs__trace_params__HeadVar__2_2);

static void MR_CALL 
libs__trace_params__maybe_add_suppressed_event_3_p_0(
  MR_Word libs__trace_params__SuppressItem_4,
  MR_Integer libs__trace_params__SuppressedEventsInt0_5,
  MR_Integer * libs__trace_params__SuppressedEventsInt_6);

static void MR_CALL 
libs__trace_params__wrap_port_2_p_0(
  MR_Word libs__trace_params__Port_3,
  MR_Word * libs__trace_params__HeadVar__2_2);

static void MR_CALL 
libs__trace_params__convert_item_name_2_p_0_1(
  MR_Box libs__trace_params__closure_arg,
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box * libs__trace_params__wrapper_arg_2);

static MR_bool MR_CALL 
libs__trace_params__convert_item_name_2_p_0(
  MR_String libs__trace_params__String_3,
  MR_Word * libs__trace_params__Names_4);

static MR_bool MR_CALL 
libs__trace_params__char_is_comma_1_p_0(
  MR_Char libs__trace_params__HeadVar__1_1);

static void MR_CALL 
libs__trace_params__encode_suppressed_events_1_f_0_1(
  MR_Box libs__trace_params__closure_arg,
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2,
  MR_Box * libs__trace_params__wrapper_arg_3);

static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_2(
  MR_Box libs__trace_params__closure_arg,
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box * libs__trace_params__wrapper_arg_2);

static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_1(
  MR_Box libs__trace_params__closure_arg,
  MR_Box libs__trace_params__wrapper_arg_1);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box libs__trace_params_scalar_common_5[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__trace_params_scalar_common_4[0])),
    ((MR_Box) (libs__trace_params__convert_trace_suppress_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__trace_params_scalar_common_6[0])),
    ((MR_Box) (libs__trace_params__convert_trace_suppress_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__trace_params_scalar_common_12[0])),
    ((MR_Box) (libs__trace_params__encode_suppressed_events_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__trace_params_scalar_common_6[1])),
    ((MR_Box) (libs__trace_params__convert_item_name_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__trace_params_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__trace_params__list__pti_list_1__plain_libs__trace_params__type_ctor_info_trace_suppress_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0)),
    ((MR_Box) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0))
  },
};

static /* final */ const MR_Box libs__trace_params_scalar_common_12[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
  /* row 0 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 1 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 2 */   {     (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[16]) },
  /* row 3 */   {     (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[20]) },
  /* row 4 */   {     (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[19]) },
  /* row 5 */   {     (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[19]) },
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
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))
  },
  /* row 1 */
  {
    (MR_String) "bodies",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))
  },
  /* row 2 */
  {
    (MR_String) "names",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))
  },
  /* row 3 */
  {
    (MR_String) "proc_body_reps",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))
  },
  /* row 4 */
  {
    (MR_String) "return",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 5 */
  {
    (MR_String) "return_info",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
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
    (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0 = {
  (MR_String) "port_cat_interface",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1 = {
  (MR_String) "port_cat_internal",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2 = {
  (MR_String) "port_cat_context",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3 = {
  (MR_String) "port_cat_user",
  (MR_Integer) 3
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__trace_params____Unify____port_category_0_0_10001)),
  ((MR_Box) (libs__trace_params____Compare____port_category_0_0_10001)),
  (MR_String) "libs.trace_params",
  (MR_String) "port_category",
  {     libs__trace_params__libs__trace_params__enum_name_ordered_port_category_0 },
  {     libs__trace_params__libs__trace_params__enum_value_ordered_port_category_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__trace_params__libs__trace_params__functor_number_map_port_category_0
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1 = {
  (MR_String) "basic",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2 = {
  (MR_String) "basic_user",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3 = {
  (MR_String) "shallow",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4 = {
  (MR_String) "deep",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5 = {
  (MR_String) "decl_rep",
  (MR_Integer) 5
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__trace_params____Unify____trace_level_0_0_10001)),
  ((MR_Box) (libs__trace_params____Compare____trace_level_0_0_10001)),
  (MR_String) "libs.trace_params",
  (MR_String) "trace_level",
  {     libs__trace_params__libs__trace_params__enum_name_ordered_trace_level_0 },
  {     libs__trace_params__libs__trace_params__enum_value_ordered_trace_level_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  libs__trace_params__libs__trace_params__functor_number_map_trace_level_0
};

static const MR_PseudoTypeInfo libs__trace_params__libs__trace_params__field_types_trace_suppress_item_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
};

static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_0 = {
  (MR_String) "suppress_port",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__trace_params__libs__trace_params__field_types_trace_suppress_item_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_1 = {
  (MR_String) "suppress_return_info",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_2 = {
  (MR_String) "suppress_all_var_names",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_3 = {
  (MR_String) "suppress_proc_body_reps",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__trace_params____Unify____trace_suppress_item_0_0_10001)),
  ((MR_Box) (libs__trace_params____Compare____trace_suppress_item_0_0_10001)),
  (MR_String) "libs.trace_params",
  (MR_String) "trace_suppress_item",
  {     libs__trace_params__libs__trace_params__du_name_ordered_trace_suppress_item_0 },
  {     libs__trace_params__libs__trace_params__du_ptag_ordered_trace_suppress_item_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__trace_params__libs__trace_params__functor_number_map_trace_suppress_item_0
};

static const MR_FA_TypeInfo_Struct1 libs__trace_params__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__trace_params____Unify____trace_suppress_items_0_0_10001)),
  ((MR_Box) (libs__trace_params____Compare____trace_suppress_items_0_0_10001)),
  (MR_String) "libs.trace_params",
  (MR_String) "trace_suppress_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__trace_params__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0_10001(
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2)
{
  {
    MR_bool libs__trace_params__succeeded;

    {
      libs__trace_params__succeeded = libs__trace_params____Unify____port_category_0_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Word) libs__trace_params__wrapper_arg_2));
    }
    return libs__trace_params__succeeded;
  }
}

static void MR_CALL 
libs__trace_params____Compare____port_category_0_0_10001(
  MR_Box * libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2,
  MR_Box libs__trace_params__wrapper_arg_3)
{
  {
    MR_Word libs__trace_params__conv0_HeadVar__1_1;

    {
      libs__trace_params____Compare____port_category_0_0(&libs__trace_params__conv0_HeadVar__1_1, ((MR_Word) libs__trace_params__wrapper_arg_2), ((MR_Word) libs__trace_params__wrapper_arg_3));
    }
    *libs__trace_params__wrapper_arg_1 = ((MR_Box) (libs__trace_params__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__trace_params____Unify____trace_level_0_0_10001(
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2)
{
  {
    MR_bool libs__trace_params__succeeded;

    {
      libs__trace_params__succeeded = libs__trace_params____Unify____trace_level_0_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Word) libs__trace_params__wrapper_arg_2));
    }
    return libs__trace_params__succeeded;
  }
}

static void MR_CALL 
libs__trace_params____Compare____trace_level_0_0_10001(
  MR_Box * libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2,
  MR_Box libs__trace_params__wrapper_arg_3)
{
  {
    MR_Word libs__trace_params__conv0_HeadVar__1_1;

    {
      libs__trace_params____Compare____trace_level_0_0(&libs__trace_params__conv0_HeadVar__1_1, ((MR_Word) libs__trace_params__wrapper_arg_2), ((MR_Word) libs__trace_params__wrapper_arg_3));
    }
    *libs__trace_params__wrapper_arg_1 = ((MR_Box) (libs__trace_params__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_item_0_0_10001(
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2)
{
  {
    MR_bool libs__trace_params__succeeded;

    {
      libs__trace_params__succeeded = libs__trace_params____Unify____trace_suppress_item_0_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Word) libs__trace_params__wrapper_arg_2));
    }
    return libs__trace_params__succeeded;
  }
}

static void MR_CALL 
libs__trace_params____Compare____trace_suppress_item_0_0_10001(
  MR_Box * libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2,
  MR_Box libs__trace_params__wrapper_arg_3)
{
  {
    MR_Word libs__trace_params__conv0_HeadVar__1_1;

    {
      libs__trace_params____Compare____trace_suppress_item_0_0(&libs__trace_params__conv0_HeadVar__1_1, ((MR_Word) libs__trace_params__wrapper_arg_2), ((MR_Word) libs__trace_params__wrapper_arg_3));
    }
    *libs__trace_params__wrapper_arg_1 = ((MR_Box) (libs__trace_params__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_items_0_0_10001(
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2)
{
  {
    MR_bool libs__trace_params__succeeded;

    {
      libs__trace_params__succeeded = libs__trace_params____Unify____trace_suppress_items_0_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Word) libs__trace_params__wrapper_arg_2));
    }
    return libs__trace_params__succeeded;
  }
}

static void MR_CALL 
libs__trace_params____Compare____trace_suppress_items_0_0_10001(
  MR_Box * libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2,
  MR_Box libs__trace_params__wrapper_arg_3)
{
  {
    MR_Word libs__trace_params__conv0_HeadVar__1_1;

    {
      libs__trace_params____Compare____trace_suppress_items_0_0(&libs__trace_params__conv0_HeadVar__1_1, ((MR_Word) libs__trace_params__wrapper_arg_2), ((MR_Word) libs__trace_params__wrapper_arg_3));
    }
    *libs__trace_params__wrapper_arg_1 = ((MR_Box) (libs__trace_params__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
libs__trace_params____Compare____trace_suppress_items_0_0(
  MR_Word * libs__trace_params__HeadVar__1_1,
  MR_Word libs__trace_params__HeadVar__2_2,
  MR_Word libs__trace_params__HeadVar__3_3)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__Cast_HeadVar1_4 = libs__trace_params__HeadVar__2_2;
    MR_Word libs__trace_params__Cast_HeadVar2_5 = libs__trace_params__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &libs__trace_params_scalar_common_1[1], libs__trace_params__HeadVar__1_1, ((MR_Box) (libs__trace_params__Cast_HeadVar1_4)), ((MR_Box) (libs__trace_params__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_items_0_0(
  MR_Word libs__trace_params__HeadVar__1_1,
  MR_Word libs__trace_params__HeadVar__2_2)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__Cast_HeadVar1_3 = libs__trace_params__HeadVar__1_1;
    MR_Word libs__trace_params__Cast_HeadVar2_4 = libs__trace_params__HeadVar__2_2;

    {
      libs__trace_params__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__trace_params_scalar_common_1[1], ((MR_Box) (libs__trace_params__Cast_HeadVar1_3)), ((MR_Box) (libs__trace_params__Cast_HeadVar2_4)));
    }
    return libs__trace_params__succeeded;
  }
}

void MR_CALL 
libs__trace_params____Compare____trace_suppress_item_0_0(
  MR_Word * libs__trace_params__HeadVar__1_1,
  MR_Word libs__trace_params__HeadVar__2_2,
  MR_Word libs__trace_params__HeadVar__3_3)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Integer libs__trace_params__CastX_12 = (MR_Integer) libs__trace_params__HeadVar__2_2;
    MR_Integer libs__trace_params__CastY_13 = (MR_Integer) libs__trace_params__HeadVar__3_3;

    libs__trace_params__succeeded = (libs__trace_params__CastX_12 == libs__trace_params__CastY_13);
    if (libs__trace_params__succeeded)
      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) libs__trace_params__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(libs__trace_params__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) libs__trace_params__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__trace_params__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) libs__trace_params__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__trace_params__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) libs__trace_params__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__trace_params__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__trace_params__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__trace_params__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(libs__trace_params__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word libs__trace_params__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer libs__trace_params__V_16_16 = (MR_Integer) libs__trace_params__V_15_15;
                  MR_Integer libs__trace_params__V_17_17 = (MR_Integer) libs__trace_params__V_5_5;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(libs__trace_params__HeadVar__1_1, libs__trace_params__V_16_16, libs__trace_params__V_17_17);
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
  MR_Word libs__trace_params__HeadVar__1_1,
  MR_Word libs__trace_params__HeadVar__2_2)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Integer libs__trace_params__CastX_11 = (MR_Integer) libs__trace_params__HeadVar__1_1;
    MR_Integer libs__trace_params__CastY_12 = (MR_Integer) libs__trace_params__HeadVar__2_2;

    libs__trace_params__succeeded = (libs__trace_params__CastX_11 == libs__trace_params__CastY_12);
    if (libs__trace_params__succeeded)
      libs__trace_params__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) libs__trace_params__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(libs__trace_params__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer libs__trace_params__CastX_5 = (MR_Integer) libs__trace_params__HeadVar__1_1;
                MR_Integer libs__trace_params__CastY_6 = (MR_Integer) libs__trace_params__HeadVar__2_2;

                libs__trace_params__succeeded = (libs__trace_params__CastY_6 == libs__trace_params__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer libs__trace_params__CastX_7 = (MR_Integer) libs__trace_params__HeadVar__1_1;
                MR_Integer libs__trace_params__CastY_8 = (MR_Integer) libs__trace_params__HeadVar__2_2;

                libs__trace_params__succeeded = (libs__trace_params__CastY_8 == libs__trace_params__CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer libs__trace_params__CastX_9 = (MR_Integer) libs__trace_params__HeadVar__1_1;
                MR_Integer libs__trace_params__CastY_10 = (MR_Integer) libs__trace_params__HeadVar__2_2;

                libs__trace_params__succeeded = (libs__trace_params__CastY_10 == libs__trace_params__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__trace_params__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__trace_params__V_4_4;

            libs__trace_params__succeeded = ((MR_tag((MR_Word) libs__trace_params__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (libs__trace_params__succeeded)
              {
                libs__trace_params__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__HeadVar__2_2, (MR_Integer) 0)));
                libs__trace_params__succeeded = (libs__trace_params__V_3_3 == libs__trace_params__V_4_4);
              }
          }
          break;
      }
    return libs__trace_params__succeeded;
  }
}

void MR_CALL 
libs__trace_params____Compare____trace_level_0_0(
  MR_Word * libs__trace_params__HeadVar__1_1,
  MR_Word libs__trace_params__HeadVar__2_2,
  MR_Word libs__trace_params__HeadVar__3_3)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Integer libs__trace_params__Cast_HeadVar1_4 = (MR_Integer) libs__trace_params__HeadVar__2_2;
    MR_Integer libs__trace_params__Cast_HeadVar2_5 = (MR_Integer) libs__trace_params__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__trace_params__HeadVar__1_1, libs__trace_params__Cast_HeadVar1_4, libs__trace_params__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__trace_params____Unify____trace_level_0_0(
  MR_Word libs__trace_params__HeadVar__2_1,
  MR_Word libs__trace_params__HeadVar__2_2)
{
  {
    MR_bool libs__trace_params__succeeded = (libs__trace_params__HeadVar__2_1 == libs__trace_params__HeadVar__2_2);

    return libs__trace_params__succeeded;
  }
}

static void MR_CALL 
libs__trace_params____Compare____port_category_0_0(
  MR_Word * libs__trace_params__HeadVar__1_1,
  MR_Word libs__trace_params__HeadVar__2_2,
  MR_Word libs__trace_params__HeadVar__3_3)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Integer libs__trace_params__Cast_HeadVar1_4 = (MR_Integer) libs__trace_params__HeadVar__2_2;
    MR_Integer libs__trace_params__Cast_HeadVar2_5 = (MR_Integer) libs__trace_params__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__trace_params__HeadVar__1_1, libs__trace_params__Cast_HeadVar1_4, libs__trace_params__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0(
  MR_Word libs__trace_params__HeadVar__2_1,
  MR_Word libs__trace_params__HeadVar__2_2)
{
  {
    MR_bool libs__trace_params__succeeded = (libs__trace_params__HeadVar__2_1 == libs__trace_params__HeadVar__2_2);

    return libs__trace_params__succeeded;
  }
}

static void MR_CALL 
libs__trace_params__maybe_add_suppressed_event_3_p_0(
  MR_Word libs__trace_params__SuppressItem_4,
  MR_Integer libs__trace_params__SuppressedEventsInt0_5,
  MR_Integer * libs__trace_params__SuppressedEventsInt_6)
{
  {
    MR_bool libs__trace_params__succeeded;

    switch (MR_tag((MR_Word) libs__trace_params__SuppressItem_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *libs__trace_params__SuppressedEventsInt_6 = libs__trace_params__SuppressedEventsInt0_5;
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__trace_params__Port_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__SuppressItem_4, (MR_Integer) 0)));
          MR_Integer libs__trace_params__V_8_8;
          MR_Integer libs__trace_params__V_10_10 = ((&libs__trace_params_vector_common_15[0 + libs__trace_params__Port_7]))->libs__trace_params__vector_common_type_15_0__vct_15_f_0;

          {
            libs__trace_params__V_8_8 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, libs__trace_params__V_10_10);
          }
          *libs__trace_params__SuppressedEventsInt_6 = (libs__trace_params__SuppressedEventsInt0_5 | libs__trace_params__V_8_8);
        }
        break;
    }
  }
}

static void MR_CALL 
libs__trace_params__wrap_port_2_p_0(
  MR_Word libs__trace_params__Port_3,
  MR_Word * libs__trace_params__HeadVar__2_2)
{
  {
    MR_bool libs__trace_params__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *libs__trace_params__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__trace_params__Port_3));
    }
  }
}

static void MR_CALL 
libs__trace_params__convert_item_name_2_p_0_1(
  MR_Box libs__trace_params__closure_arg,
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box * libs__trace_params__wrapper_arg_2)
{
  {
    MR_Box libs__trace_params__closure = libs__trace_params__closure_arg;
    MR_Word libs__trace_params__conv0_HeadVar__2_2;

    {
      libs__trace_params__wrap_port_2_p_0(((MR_Word) libs__trace_params__wrapper_arg_1), &libs__trace_params__conv0_HeadVar__2_2);
    }
    *libs__trace_params__wrapper_arg_2 = ((MR_Box) (libs__trace_params__conv0_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
libs__trace_params__convert_item_name_2_p_0(
  MR_String libs__trace_params__String_3,
  MR_Word * libs__trace_params__Names_4)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__PortName_5;

    {
      MR_Integer libs__trace_params__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(libs__trace_params__String_3, 0)) {
        case (MR_Integer) 99:
          if (MR_offset_streq(1, libs__trace_params__String_3, (MR_String) "cond"))
            libs__trace_params__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 100:
          if (((((((((MR_nth_code_unit(libs__trace_params__String_3, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(libs__trace_params__String_3, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(libs__trace_params__String_3, 3)) == (MR_Integer) 106)))) && (((MR_nth_code_unit(libs__trace_params__String_3, 4)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(libs__trace_params__String_3, 5)) {
              case (MR_Integer) 102:
                if (MR_offset_streq(6, libs__trace_params__String_3, (MR_String) "disj_first"))
                  libs__trace_params__case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 108:
                if (MR_offset_streq(6, libs__trace_params__String_3, (MR_String) "disj_later"))
                  libs__trace_params__case_num_0 = (MR_Integer) 2;
                break;
            }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(libs__trace_params__String_3, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, libs__trace_params__String_3, (MR_String) "else"))
                libs__trace_params__case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 120:
              switch (MR_nth_code_unit(libs__trace_params__String_3, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, libs__trace_params__String_3, (MR_String) "exception"))
                    libs__trace_params__case_num_0 = (MR_Integer) 4;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(3, libs__trace_params__String_3, (MR_String) "exit"))
                    libs__trace_params__case_num_0 = (MR_Integer) 5;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 102:
          if (MR_offset_streq(1, libs__trace_params__String_3, (MR_String) "fail"))
            libs__trace_params__case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 105:
          if (((((((MR_nth_code_unit(libs__trace_params__String_3, 1)) == (MR_Integer) 116)) && (((MR_nth_code_unit(libs__trace_params__String_3, 2)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(libs__trace_params__String_3, 3)) == (MR_Integer) 95))))
            switch (MR_nth_code_unit(libs__trace_params__String_3, 4)) {
              case (MR_Integer) 99:
                if (MR_offset_streq(5, libs__trace_params__String_3, (MR_String) "ite_cond"))
                  libs__trace_params__case_num_0 = (MR_Integer) 7;
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(5, libs__trace_params__String_3, (MR_String) "ite_else"))
                  libs__trace_params__case_num_0 = (MR_Integer) 8;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(5, libs__trace_params__String_3, (MR_String) "ite_then"))
                  libs__trace_params__case_num_0 = (MR_Integer) 9;
                break;
            }
          break;
        case (MR_Integer) 110:
          if (((((MR_nth_code_unit(libs__trace_params__String_3, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(libs__trace_params__String_3, 2)) == (MR_Integer) 103))))
            switch (MR_nth_code_unit(libs__trace_params__String_3, 3)) {
              case (MR_Integer) 95:
                switch (MR_nth_code_unit(libs__trace_params__String_3, 4)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(5, libs__trace_params__String_3, (MR_String) "neg_enter"))
                      libs__trace_params__case_num_0 = (MR_Integer) 10;
                    break;
                  case (MR_Integer) 102:
                    if (MR_offset_streq(5, libs__trace_params__String_3, (MR_String) "neg_failure"))
                      libs__trace_params__case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(5, libs__trace_params__String_3, (MR_String) "neg_success"))
                      libs__trace_params__case_num_0 = (MR_Integer) 12;
                    break;
                }
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(4, libs__trace_params__String_3, (MR_String) "nege"))
                  libs__trace_params__case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 102:
                if (MR_offset_streq(4, libs__trace_params__String_3, (MR_String) "negf"))
                  libs__trace_params__case_num_0 = (MR_Integer) 14;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(4, libs__trace_params__String_3, (MR_String) "negs"))
                  libs__trace_params__case_num_0 = (MR_Integer) 15;
                break;
            }
          break;
        case (MR_Integer) 114:
          if (MR_offset_streq(1, libs__trace_params__String_3, (MR_String) "redo"))
            libs__trace_params__case_num_0 = (MR_Integer) 16;
          break;
        case (MR_Integer) 115:
          if (((MR_nth_code_unit(libs__trace_params__String_3, 1)) == (MR_Integer) 119))
            switch (MR_nth_code_unit(libs__trace_params__String_3, 2)) {
              case (MR_Integer) 105:
                if (MR_offset_streq(3, libs__trace_params__String_3, (MR_String) "switch"))
                  libs__trace_params__case_num_0 = (MR_Integer) 17;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, libs__trace_params__String_3, (MR_String) "swtc"))
                  libs__trace_params__case_num_0 = (MR_Integer) 18;
                break;
            }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(libs__trace_params__String_3, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, libs__trace_params__String_3, (MR_String) "tail"))
                libs__trace_params__case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 104:
              if (MR_offset_streq(2, libs__trace_params__String_3, (MR_String) "then"))
                libs__trace_params__case_num_0 = (MR_Integer) 20;
              break;
          }
          break;
        case (MR_Integer) 117:
          if (MR_offset_streq(1, libs__trace_params__String_3, (MR_String) "user"))
            libs__trace_params__case_num_0 = (MR_Integer) 21;
          break;
      }
      if ((libs__trace_params__case_num_0 < (MR_Integer) 0))
        libs__trace_params__succeeded = MR_FALSE;
      else
        {
          /* we found a match; look up the results */
          libs__trace_params__PortName_5 = ((&libs__trace_params_vector_common_13[0 + libs__trace_params__case_num_0]))->libs__trace_params__vector_common_type_13_0__vct_13_f_0;
          libs__trace_params__succeeded = MR_TRUE;
        }
    }
    if (libs__trace_params__succeeded)
      {
        MR_Word libs__trace_params__V_8_8;

        {
          libs__trace_params__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__trace_params__V_8_8, 0) = ((MR_Box) (libs__trace_params__PortName_5));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *libs__trace_params__Names_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__trace_params__V_8_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        libs__trace_params__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word libs__trace_params__PortNames_6;

        if ((strcmp(libs__trace_params__String_3, (MR_String) "context") == 0))
          {
            libs__trace_params__PortNames_6 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[5]);
            libs__trace_params__succeeded = MR_TRUE;
          }
        else
        if ((strcmp(libs__trace_params__String_3, (MR_String) "internal") == 0))
          {
            libs__trace_params__PortNames_6 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[15]);
            libs__trace_params__succeeded = MR_TRUE;
          }
        else
        if ((strcmp(libs__trace_params__String_3, (MR_String) "interface") == 0))
          {
            libs__trace_params__PortNames_6 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[10]);
            libs__trace_params__succeeded = MR_TRUE;
          }
        else
          libs__trace_params__succeeded = MR_FALSE;
        if (libs__trace_params__succeeded)
          {
            {
              mercury__list__map_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0, (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0, (MR_Word) &libs__trace_params_scalar_common_5[3], libs__trace_params__PortNames_6, libs__trace_params__Names_4);
            }
            libs__trace_params__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word libs__trace_params__OtherName_7;
            MR_Word libs__trace_params__V_11_11;
            MR_Integer libs__trace_params__lo_1;
            MR_Integer libs__trace_params__hi_2;
            MR_Integer libs__trace_params__mid_3;
            MR_Integer libs__trace_params__result_4;

            /* binary string simple lookup switch */
            libs__trace_params__lo_1 = (MR_Integer) 0;
            libs__trace_params__hi_2 = (MR_Integer) 5;
            do
              {
                libs__trace_params__mid_3 = (((libs__trace_params__lo_1 + libs__trace_params__hi_2)) / (MR_Integer) 2);
                libs__trace_params__result_4 = MR_strcmp(libs__trace_params__String_3, ((&libs__trace_params_vector_common_14[0 + libs__trace_params__mid_3]))->libs__trace_params__vector_common_type_14_0__vct_14_f_0);
                if ((libs__trace_params__result_4 == (MR_Integer) 0))
                  {
                    libs__trace_params__OtherName_7 = ((&libs__trace_params_vector_common_14[0 + libs__trace_params__mid_3]))->libs__trace_params__vector_common_type_14_0__vct_14_f_1;
                    libs__trace_params__succeeded = MR_TRUE;
                    /* jump out of search loop */
                    goto label_0;
                  }
                else
                if ((libs__trace_params__result_4 < (MR_Integer) 0))
                  libs__trace_params__hi_2 = (libs__trace_params__mid_3 - (MR_Integer) 1);
                else
                  libs__trace_params__lo_1 = (libs__trace_params__mid_3 + (MR_Integer) 1);
              }
            while ((libs__trace_params__lo_1 <= libs__trace_params__hi_2));
            libs__trace_params__succeeded = MR_FALSE;
          label_0:;
            if (libs__trace_params__succeeded)
              {
                libs__trace_params__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *libs__trace_params__Names_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__trace_params__OtherName_7));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__trace_params__V_11_11));
                }
                libs__trace_params__succeeded = MR_TRUE;
              }
          }
      }
    return libs__trace_params__succeeded;
  }
}

static MR_bool MR_CALL 
libs__trace_params__char_is_comma_1_p_0(
  MR_Char libs__trace_params__HeadVar__1_1)
{
  {
    MR_bool libs__trace_params__succeeded = (libs__trace_params__HeadVar__1_1 == (MR_Char) 44);

    return libs__trace_params__succeeded;
  }
}

static void MR_CALL 
libs__trace_params__encode_suppressed_events_1_f_0_1(
  MR_Box libs__trace_params__closure_arg,
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box libs__trace_params__wrapper_arg_2,
  MR_Box * libs__trace_params__wrapper_arg_3)
{
  {
    MR_Box libs__trace_params__closure = libs__trace_params__closure_arg;
    MR_Integer libs__trace_params__conv0_SuppressedEventsInt_6;

    {
      libs__trace_params__maybe_add_suppressed_event_3_p_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Integer) libs__trace_params__wrapper_arg_2), &libs__trace_params__conv0_SuppressedEventsInt_6);
    }
    *libs__trace_params__wrapper_arg_3 = ((MR_Box) (libs__trace_params__conv0_SuppressedEventsInt_6));
  }
}

MR_Integer MR_CALL 
libs__trace_params__encode_suppressed_events_1_f_0(
  MR_Word libs__trace_params__SuppressedEvents_3)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Integer libs__trace_params__SuppressedEventsInt_4;
    MR_Box libs__trace_params__conv1_SuppressedEventsInt_4;

    {
      mercury__set__fold_4_p_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &libs__trace_params_scalar_common_5[2], libs__trace_params__SuppressedEvents_3, ((MR_Box) ((MR_Integer) 0)), &libs__trace_params__conv1_SuppressedEventsInt_4);
    }
    libs__trace_params__SuppressedEventsInt_4 = ((MR_Integer) libs__trace_params__conv1_SuppressedEventsInt_4);
    return libs__trace_params__SuppressedEventsInt_4;
  }
}

MR_String MR_CALL 
libs__trace_params__trace_level_rep_1_f_0(
  MR_Word libs__trace_params__HeadVar__1_1)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_String libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_11[0 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_11_0__vct_11_f_0;

    return libs__trace_params__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_level_for_unify_compare_1_f_0(
  MR_Word libs__trace_params__HeadVar__1_1)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_10[0 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_10_0__vct_10_f_0;

    return libs__trace_params__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__at_least_at_deep_1_f_0(
  MR_Word libs__trace_params__HeadVar__1_1)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_7[60 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

    return libs__trace_params__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__at_least_at_shallow_1_f_0(
  MR_Word libs__trace_params__HeadVar__1_1)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_7[54 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

    return libs__trace_params__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_level_none_0_f_0(void)
{
  {
    MR_bool libs__trace_params__succeeded;

    return (MR_Integer) 0;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_level_4_f_0(
  MR_Word libs__trace_params__ModuleInfo_6,
  MR_Word libs__trace_params__PredInfo_7,
  MR_Word libs__trace_params__ProcInfo_8,
  MR_Word libs__trace_params__TraceLevel_9)
{
  {
    MR_bool libs__trace_params__succeeded = (libs__trace_params__TraceLevel_9 == (MR_Integer) 0);
    MR_Word libs__trace_params__EffTraceLevel_10;

    if (libs__trace_params__succeeded)
      libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
    else
      {
        MR_Word libs__trace_params__Origin_11;

        {
          hlds__hlds_pred__pred_info_get_origin_2_p_0(libs__trace_params__PredInfo_7, &libs__trace_params__Origin_11);
        }
        switch (MR_tag((MR_Word) libs__trace_params__Origin_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word libs__trace_params__SpecialPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__trace_params__Origin_11, (MR_Integer) 0)));
              MR_Word libs__trace_params__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__trace_params__Origin_11, (MR_Integer) 1)));

              switch (libs__trace_params__SpecialPred_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  libs__trace_params__EffTraceLevel_10 = (MR_Integer) 3;
                  break;
                case (MR_Integer) 1:
                  libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 0:
                  libs__trace_params__EffTraceLevel_10 = (MR_Integer) 3;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word libs__trace_params__PredStatus_39;
              MR_Word libs__trace_params__V_42_42;
              MR_Word libs__trace_params__V_43_43;
              MR_Word libs__trace_params__V_44_44;

              {
                hlds__hlds_pred__pred_info_get_status_2_p_0(libs__trace_params__PredInfo_7, &libs__trace_params__PredStatus_39);
              }
              libs__trace_params__succeeded = (libs__trace_params__TraceLevel_9 == (MR_Integer) 3);
              if (libs__trace_params__succeeded)
                {
                  {
                    libs__trace_params__V_42_42 = hlds__status__pred_status_is_exported_1_f_0(libs__trace_params__PredStatus_39);
                  }
                  libs__trace_params__succeeded = (libs__trace_params__V_42_42 == (MR_Integer) 0);
                  if (libs__trace_params__succeeded)
                    {
                      libs__trace_params__V_43_43 = (MR_Integer) 1;
                      {
                        hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__V_44_44);
                      }
                      libs__trace_params__succeeded = (libs__trace_params__V_43_43 == libs__trace_params__V_44_44);
                    }
                }
              if (libs__trace_params__succeeded)
                {
                  MR_Word libs__trace_params__ProcHasUserEvent_40;

                  {
                    hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__ProcHasUserEvent_40);
                  }
                  switch (libs__trace_params__ProcHasUserEvent_40) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word libs__trace_params__ModuleHasUserEvent_41;

                        {
                          hlds__hlds_module__module_info_get_has_user_event_2_p_0(libs__trace_params__ModuleInfo_6, &libs__trace_params__ModuleHasUserEvent_41);
                        }
                        switch (libs__trace_params__ModuleHasUserEvent_41) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 0:
                            libs__trace_params__EffTraceLevel_10 = (MR_Integer) 1;
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      libs__trace_params__EffTraceLevel_10 = (MR_Integer) 2;
                      break;
                  }
                }
              else
                libs__trace_params__EffTraceLevel_10 = libs__trace_params__TraceLevel_9;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__trace_params__Origin_11, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word libs__trace_params__PredCreation_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__trace_params__Origin_11, (MR_Integer) 1)));

                  switch (libs__trace_params__PredCreation_14) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word libs__trace_params__PredStatus_50;
                        MR_Word libs__trace_params__V_53_53;
                        MR_Word libs__trace_params__V_54_54;
                        MR_Word libs__trace_params__V_55_55;

                        {
                          hlds__hlds_pred__pred_info_get_status_2_p_0(libs__trace_params__PredInfo_7, &libs__trace_params__PredStatus_50);
                        }
                        libs__trace_params__succeeded = (libs__trace_params__TraceLevel_9 == (MR_Integer) 3);
                        if (libs__trace_params__succeeded)
                          {
                            {
                              libs__trace_params__V_53_53 = hlds__status__pred_status_is_exported_1_f_0(libs__trace_params__PredStatus_50);
                            }
                            libs__trace_params__succeeded = (libs__trace_params__V_53_53 == (MR_Integer) 0);
                            if (libs__trace_params__succeeded)
                              {
                                libs__trace_params__V_54_54 = (MR_Integer) 1;
                                {
                                  hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__V_55_55);
                                }
                                libs__trace_params__succeeded = (libs__trace_params__V_54_54 == libs__trace_params__V_55_55);
                              }
                          }
                        if (libs__trace_params__succeeded)
                          {
                            MR_Word libs__trace_params__ProcHasUserEvent_51;

                            {
                              hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__ProcHasUserEvent_51);
                            }
                            switch (libs__trace_params__ProcHasUserEvent_51) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                {
                                  MR_Word libs__trace_params__ModuleHasUserEvent_52;

                                  {
                                    hlds__hlds_module__module_info_get_has_user_event_2_p_0(libs__trace_params__ModuleInfo_6, &libs__trace_params__ModuleHasUserEvent_52);
                                  }
                                  switch (libs__trace_params__ModuleHasUserEvent_52) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 1:
                                      libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
                                      break;
                                    case (MR_Integer) 0:
                                      libs__trace_params__EffTraceLevel_10 = (MR_Integer) 1;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 0:
                                libs__trace_params__EffTraceLevel_10 = (MR_Integer) 2;
                                break;
                            }
                          }
                        else
                          libs__trace_params__EffTraceLevel_10 = libs__trace_params__TraceLevel_9;
                      }
                      break;
                    case (MR_Integer) 1:
                      libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
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
                  MR_Word libs__trace_params__PredStatus_39;
                  MR_Word libs__trace_params__V_42_42;
                  MR_Word libs__trace_params__V_43_43;
                  MR_Word libs__trace_params__V_44_44;

                  {
                    hlds__hlds_pred__pred_info_get_status_2_p_0(libs__trace_params__PredInfo_7, &libs__trace_params__PredStatus_39);
                  }
                  libs__trace_params__succeeded = (libs__trace_params__TraceLevel_9 == (MR_Integer) 3);
                  if (libs__trace_params__succeeded)
                    {
                      {
                        libs__trace_params__V_42_42 = hlds__status__pred_status_is_exported_1_f_0(libs__trace_params__PredStatus_39);
                      }
                      libs__trace_params__succeeded = (libs__trace_params__V_42_42 == (MR_Integer) 0);
                      if (libs__trace_params__succeeded)
                        {
                          libs__trace_params__V_43_43 = (MR_Integer) 1;
                          {
                            hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__V_44_44);
                          }
                          libs__trace_params__succeeded = (libs__trace_params__V_43_43 == libs__trace_params__V_44_44);
                        }
                    }
                  if (libs__trace_params__succeeded)
                    {
                      MR_Word libs__trace_params__ProcHasUserEvent_40;

                      {
                        hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__ProcHasUserEvent_40);
                      }
                      switch (libs__trace_params__ProcHasUserEvent_40) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_Word libs__trace_params__ModuleHasUserEvent_41;

                            {
                              hlds__hlds_module__module_info_get_has_user_event_2_p_0(libs__trace_params__ModuleInfo_6, &libs__trace_params__ModuleHasUserEvent_41);
                            }
                            switch (libs__trace_params__ModuleHasUserEvent_41) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
                                break;
                              case (MR_Integer) 0:
                                libs__trace_params__EffTraceLevel_10 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 0:
                          libs__trace_params__EffTraceLevel_10 = (MR_Integer) 2;
                          break;
                      }
                    }
                  else
                    libs__trace_params__EffTraceLevel_10 = libs__trace_params__TraceLevel_9;
                }
                break;
            }
            break;
        }
      }
    return libs__trace_params__EffTraceLevel_10;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_needs_port_6_f_0(
  MR_Word libs__trace_params__ModuleInfo_8,
  MR_Word libs__trace_params__PredInfo_9,
  MR_Word libs__trace_params__ProcInfo_10,
  MR_Word libs__trace_params__TraceLevel_11,
  MR_Word libs__trace_params__SuppressItems_12,
  MR_Word libs__trace_params__Port_13)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__7_7;
    MR_Word libs__trace_params__V_14_14;
    MR_Word libs__trace_params__Category_19;
    MR_Word libs__trace_params__V_20_20;
    MR_Word libs__trace_params__TypeCtorInfo_14_24;
    MR_Word libs__trace_params__V_22_22;

    {
      libs__trace_params__V_14_14 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_8, libs__trace_params__PredInfo_9, libs__trace_params__ProcInfo_10, libs__trace_params__TraceLevel_11);
    }
    libs__trace_params__Category_19 = ((&libs__trace_params_vector_common_8[0 + libs__trace_params__Port_13]))->libs__trace_params__vector_common_type_8_0__vct_8_f_0;
    libs__trace_params__V_20_20 = ((&libs__trace_params_vector_common_9[0 + libs__trace_params__V_14_14]))->libs__trace_params__vector_common_type_9_0__vct_9_f_0;
    {
      libs__trace_params__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_port_category_0, ((MR_Box) (libs__trace_params__Category_19)), libs__trace_params__V_20_20);
    }
    if (libs__trace_params__succeeded)
      {
        if (((MR_Integer) 30 & (((MR_Integer) 1 << libs__trace_params__V_14_14))))
          {
            libs__trace_params__succeeded = MR_TRUE;
          }
        else
          libs__trace_params__succeeded = MR_FALSE;
        if (libs__trace_params__succeeded)
          {
            libs__trace_params__TypeCtorInfo_14_24 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
            {
              libs__trace_params__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__trace_params__V_22_22, 0) = ((MR_Box) (libs__trace_params__Port_13));
            }
            {
              libs__trace_params__succeeded = mercury__set__member_2_p_0(libs__trace_params__TypeCtorInfo_14_24, ((MR_Box) (libs__trace_params__V_22_22)), libs__trace_params__SuppressItems_12);
            }
          }
        libs__trace_params__succeeded = !(libs__trace_params__succeeded);
      }
    if (libs__trace_params__succeeded)
      libs__trace_params__HeadVar__7_7 = (MR_Integer) 1;
    else
      libs__trace_params__HeadVar__7_7 = (MR_Integer) 0;
    return libs__trace_params__HeadVar__7_7;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_needs_proc_body_reps_5_f_0(
  MR_Word libs__trace_params__ModuleInfo_7,
  MR_Word libs__trace_params__PredInfo_8,
  MR_Word libs__trace_params__ProcInfo_9,
  MR_Word libs__trace_params__TraceLevel_10,
  MR_Word libs__trace_params__SuppressItems_11)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__6_6;
    MR_Word libs__trace_params__V_12_12;

    {
      libs__trace_params__V_12_12 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_7, libs__trace_params__PredInfo_8, libs__trace_params__ProcInfo_9, libs__trace_params__TraceLevel_10);
    }
    {
      libs__trace_params__HeadVar__6_6 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(libs__trace_params__V_12_12, libs__trace_params__SuppressItems_11);
    }
    return libs__trace_params__HeadVar__6_6;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_needs_all_var_names_5_f_0(
  MR_Word libs__trace_params__ModuleInfo_7,
  MR_Word libs__trace_params__PredInfo_8,
  MR_Word libs__trace_params__ProcInfo_9,
  MR_Word libs__trace_params__TraceLevel_10,
  MR_Word libs__trace_params__SuppressItems_11)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__6_6;
    MR_Word libs__trace_params__V_12_12;
    MR_Word libs__trace_params__TypeCtorInfo_9_18;
    MR_Word libs__trace_params__V_17_17;

    {
      libs__trace_params__V_12_12 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_7, libs__trace_params__PredInfo_8, libs__trace_params__ProcInfo_9, libs__trace_params__TraceLevel_10);
    }
    libs__trace_params__succeeded = (libs__trace_params__V_12_12 == (MR_Integer) 5);
    if (libs__trace_params__succeeded)
      {
        libs__trace_params__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        libs__trace_params__TypeCtorInfo_9_18 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
        {
          libs__trace_params__succeeded = mercury__set__member_2_p_0(libs__trace_params__TypeCtorInfo_9_18, ((MR_Box) (libs__trace_params__V_17_17)), libs__trace_params__SuppressItems_11);
        }
        libs__trace_params__succeeded = !(libs__trace_params__succeeded);
      }
    if (libs__trace_params__succeeded)
      libs__trace_params__HeadVar__6_6 = (MR_Integer) 1;
    else
      libs__trace_params__HeadVar__6_6 = (MR_Integer) 0;
    return libs__trace_params__HeadVar__6_6;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(
  MR_Word libs__trace_params__ModuleInfo_6,
  MR_Word libs__trace_params__PredInfo_7,
  MR_Word libs__trace_params__ProcInfo_8,
  MR_Word libs__trace_params__TraceLevel_9)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__5_5;
    MR_Word libs__trace_params__V_10_10;

    {
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
    libs__trace_params__HeadVar__5_5 = ((&libs__trace_params_vector_common_7[48 + libs__trace_params__V_10_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
    return libs__trace_params__HeadVar__5_5;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_level_needs_fixed_slots_4_f_0(
  MR_Word libs__trace_params__ModuleInfo_6,
  MR_Word libs__trace_params__PredInfo_7,
  MR_Word libs__trace_params__ProcInfo_8,
  MR_Word libs__trace_params__TraceLevel_9)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__5_5;
    MR_Word libs__trace_params__V_10_10;

    {
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
    libs__trace_params__HeadVar__5_5 = ((&libs__trace_params_vector_common_7[42 + libs__trace_params__V_10_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
    return libs__trace_params__HeadVar__5_5;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(
  MR_Word libs__trace_params__ModuleInfo_6,
  MR_Word libs__trace_params__PredInfo_7,
  MR_Word libs__trace_params__ProcInfo_8,
  MR_Word libs__trace_params__TraceLevel_9)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__5_5;
    MR_Word libs__trace_params__V_10_10;

    {
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
    libs__trace_params__HeadVar__5_5 = ((&libs__trace_params_vector_common_7[36 + libs__trace_params__V_10_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
    return libs__trace_params__HeadVar__5_5;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_level_needs_input_vars_4_f_0(
  MR_Word libs__trace_params__ModuleInfo_6,
  MR_Word libs__trace_params__PredInfo_7,
  MR_Word libs__trace_params__ProcInfo_8,
  MR_Word libs__trace_params__TraceLevel_9)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__5_5;
    MR_Word libs__trace_params__V_10_10;

    {
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
    libs__trace_params__HeadVar__5_5 = ((&libs__trace_params_vector_common_7[30 + libs__trace_params__V_10_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
    return libs__trace_params__HeadVar__5_5;
  }
}

MR_Word MR_CALL 
libs__trace_params__eff_trace_level_is_none_4_f_0(
  MR_Word libs__trace_params__ModuleInfo_6,
  MR_Word libs__trace_params__PredInfo_7,
  MR_Word libs__trace_params__ProcInfo_8,
  MR_Word libs__trace_params__TraceLevel_9)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__5_5;
    MR_Word libs__trace_params__V_10_10;

    {
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
    libs__trace_params__HeadVar__5_5 = ((&libs__trace_params_vector_common_7[24 + libs__trace_params__V_10_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
    return libs__trace_params__HeadVar__5_5;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_needs_proc_body_reps_2_f_0(
  MR_Word libs__trace_params__TraceLevel_4,
  MR_Word libs__trace_params__TraceSuppressItems_5)
{
  {
    MR_bool libs__trace_params__succeeded = (libs__trace_params__TraceLevel_4 == (MR_Integer) 5);
    MR_Word libs__trace_params__Need_6;
    MR_Word libs__trace_params__TypeCtorInfo_9_9;
    MR_Word libs__trace_params__V_8_8;

    if (libs__trace_params__succeeded)
      {
        libs__trace_params__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
        libs__trace_params__TypeCtorInfo_9_9 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
        {
          libs__trace_params__succeeded = mercury__set__member_2_p_0(libs__trace_params__TypeCtorInfo_9_9, ((MR_Box) (libs__trace_params__V_8_8)), libs__trace_params__TraceSuppressItems_5);
        }
        libs__trace_params__succeeded = !(libs__trace_params__succeeded);
      }
    if (libs__trace_params__succeeded)
      libs__trace_params__Need_6 = (MR_Integer) 1;
    else
      libs__trace_params__Need_6 = (MR_Integer) 0;
    return libs__trace_params__Need_6;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_level_needs_meaningful_var_names_1_f_0(
  MR_Word libs__trace_params__HeadVar__1_1)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_7[18 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

    return libs__trace_params__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_level_allows_tail_rec_1_f_0(
  MR_Word libs__trace_params__HeadVar__1_1)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_7[12 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

    return libs__trace_params__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_needs_return_info_2_f_0(
  MR_Word libs__trace_params__TraceLevel_4,
  MR_Word libs__trace_params__TraceSuppressItems_5)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__Need_6;
    MR_Word libs__trace_params__TypeCtorInfo_9_9;
    MR_Word libs__trace_params__V_8_8;

    if (((MR_Integer) 62 & (((MR_Integer) 1 << libs__trace_params__TraceLevel_4))))
      {
        libs__trace_params__succeeded = MR_TRUE;
      }
    else
      libs__trace_params__succeeded = MR_FALSE;
    if (libs__trace_params__succeeded)
      {
        libs__trace_params__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        libs__trace_params__TypeCtorInfo_9_9 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
        {
          libs__trace_params__succeeded = mercury__set__member_2_p_0(libs__trace_params__TypeCtorInfo_9_9, ((MR_Box) (libs__trace_params__V_8_8)), libs__trace_params__TraceSuppressItems_5);
        }
        libs__trace_params__succeeded = !(libs__trace_params__succeeded);
      }
    if (libs__trace_params__succeeded)
      libs__trace_params__Need_6 = (MR_Integer) 1;
    else
      libs__trace_params__Need_6 = (MR_Integer) 0;
    return libs__trace_params__Need_6;
  }
}

MR_Word MR_CALL 
libs__trace_params__trace_level_allows_delay_death_1_f_0(
  MR_Word libs__trace_params__HeadVar__1_1)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_7[6 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

    return libs__trace_params__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__given_trace_level_is_none_1_f_0(
  MR_Word libs__trace_params__TraceLevel_3)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_7[0 + libs__trace_params__TraceLevel_3]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

    return libs__trace_params__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
libs__trace_params__default_trace_suppress_0_f_0(void)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__HeadVar__1_1;

    {
      libs__trace_params__HeadVar__1_1 = mercury__set__init_0_f_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0);
    }
    return libs__trace_params__HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_2(
  MR_Box libs__trace_params__closure_arg,
  MR_Box libs__trace_params__wrapper_arg_1,
  MR_Box * libs__trace_params__wrapper_arg_2)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Box libs__trace_params__closure = libs__trace_params__closure_arg;
    MR_Word libs__trace_params__conv0_Names_4;

    {
      libs__trace_params__succeeded = libs__trace_params__convert_item_name_2_p_0(((MR_String) libs__trace_params__wrapper_arg_1), &libs__trace_params__conv0_Names_4);
    }
    if (libs__trace_params__succeeded)
      {
        *libs__trace_params__wrapper_arg_2 = ((MR_Box) (libs__trace_params__conv0_Names_4));
        libs__trace_params__succeeded = MR_TRUE;
      }
    return libs__trace_params__succeeded;
  }
}

static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_1(
  MR_Box libs__trace_params__closure_arg,
  MR_Box libs__trace_params__wrapper_arg_1)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Box libs__trace_params__closure = libs__trace_params__closure_arg;

    {
      libs__trace_params__succeeded = libs__trace_params__char_is_comma_1_p_0(((MR_Char) (MR_Word) libs__trace_params__wrapper_arg_1));
    }
    return libs__trace_params__succeeded;
  }
}

MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0(
  MR_String libs__trace_params__SuppressString_3,
  MR_Word * libs__trace_params__SuppressItemSet_4)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Word libs__trace_params__TypeCtorInfo_15_15;
    MR_Word libs__trace_params__SuppressWords_5;
    MR_Word libs__trace_params__SuppressItemLists_6;
    MR_Word libs__trace_params__SuppressItems_7;

    {
      libs__trace_params__SuppressWords_5 = mercury__string__words_separator_2_f_0((MR_Word) &libs__trace_params_scalar_common_5[0], libs__trace_params__SuppressString_3);
    }
    {
      libs__trace_params__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__trace_params_scalar_common_1[0], (MR_Word) &libs__trace_params_scalar_common_5[1], libs__trace_params__SuppressWords_5, &libs__trace_params__SuppressItemLists_6);
    }
    if (libs__trace_params__succeeded)
      {
        libs__trace_params__TypeCtorInfo_15_15 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
        {
          mercury__list__condense_2_p_0(libs__trace_params__TypeCtorInfo_15_15, libs__trace_params__SuppressItemLists_6, &libs__trace_params__SuppressItems_7);
        }
        {
          mercury__set__list_to_set_2_p_0(libs__trace_params__TypeCtorInfo_15_15, libs__trace_params__SuppressItems_7, libs__trace_params__SuppressItemSet_4);
        }
        libs__trace_params__succeeded = MR_TRUE;
      }
    return libs__trace_params__succeeded;
  }
}

MR_bool MR_CALL 
libs__trace_params__convert_trace_level_4_p_0(
  MR_String libs__trace_params__HeadVar__1_1,
  MR_Word libs__trace_params__HeadVar__2_2,
  MR_Word libs__trace_params__HeadVar__3_3,
  MR_Word * libs__trace_params__HeadVar__4_4)
{
  {
    MR_bool libs__trace_params__succeeded;
    MR_Integer libs__trace_params__lo_0;
    MR_Integer libs__trace_params__hi_1;
    MR_Integer libs__trace_params__mid_2;
    MR_Integer libs__trace_params__result_3;

    /* binary string jump switch */
    libs__trace_params__lo_0 = (MR_Integer) 0;
    libs__trace_params__hi_1 = (MR_Integer) 5;
    do
      {
        libs__trace_params__mid_2 = (((libs__trace_params__lo_0 + libs__trace_params__hi_1)) / (MR_Integer) 2);
        libs__trace_params__result_3 = MR_strcmp(libs__trace_params__HeadVar__1_1, ((&libs__trace_params_vector_common_2[0 + libs__trace_params__mid_2]))->libs__trace_params__vector_common_type_2_0__vct_2_f_0);
        if ((libs__trace_params__result_3 == (MR_Integer) 0))
          {
            switch (((&libs__trace_params_vector_common_2[0 + libs__trace_params__mid_2]))->libs__trace_params__vector_common_type_2_0__vct_2_f_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* case "decl" */
                  *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[1]);
                  libs__trace_params__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  /* case "deep" */
                  switch (libs__trace_params__HeadVar__3_3) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[3]);
                      }
                      break;
                    case (MR_Integer) 1:
                      *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                  }
                  libs__trace_params__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  /* case "default" */
                  switch (libs__trace_params__HeadVar__3_3) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (libs__trace_params__HeadVar__2_2) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[2]);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[3]);
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[1]);
                      }
                      break;
                  }
                  libs__trace_params__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  /* case "minimum" */
                  switch (libs__trace_params__HeadVar__3_3) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (libs__trace_params__HeadVar__2_2) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[2]);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[0]);
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[1]);
                      }
                      break;
                  }
                  libs__trace_params__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  /* case "rep" */
                  *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[1]);
                  libs__trace_params__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  /* case "shallow" */
                  switch (libs__trace_params__HeadVar__3_3) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[0]);
                      }
                      break;
                    case (MR_Integer) 1:
                      *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                  }
                  libs__trace_params__succeeded = MR_TRUE;
                }
                break;
            }
            /* jump out of search loop */
            goto label_0;
          }
        else
        if ((libs__trace_params__result_3 < (MR_Integer) 0))
          libs__trace_params__hi_1 = (libs__trace_params__mid_2 - (MR_Integer) 1);
        else
          libs__trace_params__lo_0 = (libs__trace_params__mid_2 + (MR_Integer) 1);
      }
    while ((libs__trace_params__lo_0 <= libs__trace_params__hi_1));
    libs__trace_params__succeeded = MR_FALSE;
  label_0:;
    return libs__trace_params__succeeded;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.trace_params. */
