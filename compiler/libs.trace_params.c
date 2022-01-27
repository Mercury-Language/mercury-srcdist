/*
** Automatically generated from `trace_params.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 136 "libs.trace_params.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__trace_params__list__pti_list_1__plain_libs__trace_params__type_ctor_info_trace_suppress_item_0;

#line 139 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0;

#line 142 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1;

#line 145 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2;

#line 148 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3;

#line 151 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_value_ordered_port_category_0[4];

#line 154 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_name_ordered_port_category_0[4];

#line 157 "libs.trace_params.c"
static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_port_category_0[4];

#line 160 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0;

#line 163 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1;

#line 166 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2;

#line 169 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3;

#line 172 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4;

#line 175 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5;

#line 178 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_value_ordered_trace_level_0[6];

#line 181 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_name_ordered_trace_level_0[6];

#line 184 "libs.trace_params.c"
static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_trace_level_0[6];

#line 187 "libs.trace_params.c"
static const MR_PseudoTypeInfo libs__trace_params__libs__trace_params__field_types_trace_suppress_item_0_0[1];

#line 190 "libs.trace_params.c"
static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_0;

#line 193 "libs.trace_params.c"
static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_1;

#line 196 "libs.trace_params.c"
static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_2;

#line 199 "libs.trace_params.c"
static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_3;

#line 202 "libs.trace_params.c"
static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_0[3];

#line 205 "libs.trace_params.c"
static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_1[1];

#line 208 "libs.trace_params.c"
static const MR_DuPtagLayout libs__trace_params__libs__trace_params__du_ptag_ordered_trace_suppress_item_0[2];

#line 211 "libs.trace_params.c"
static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_name_ordered_trace_suppress_item_0[4];

#line 214 "libs.trace_params.c"
static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_trace_suppress_item_0[4];

#line 217 "libs.trace_params.c"
static const MR_FA_TypeInfo_Struct1 libs__trace_params__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

#line 220 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0_10001(
#line 223 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 225 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2);

#line 228 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____port_category_0_0_10001(
#line 231 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 233 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 235 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3);

#line 238 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____trace_level_0_0_10001(
#line 241 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 243 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2);

#line 246 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____trace_level_0_0_10001(
#line 249 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 251 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 253 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3);

#line 256 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_item_0_0_10001(
#line 259 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 261 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2);

#line 264 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____trace_suppress_item_0_0_10001(
#line 267 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 269 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 271 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3);

#line 274 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_items_0_0_10001(
#line 277 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 279 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2);

#line 282 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____trace_suppress_items_0_0_10001(
#line 285 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 287 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 289 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3);

#line 551 "trace_params.m"
static void MR_CALL 
libs__trace_params____Compare____port_category_0_0(
#line 551 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__1_1,
#line 551 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2,
#line 551 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__3_3);

#line 551 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0(
#line 551 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_1,
#line 551 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2);

#line 625 "trace_params.m"
static void MR_CALL 
libs__trace_params__maybe_add_suppressed_event_3_p_0(
#line 625 "trace_params.m"
  MR_Word libs__trace_params__SuppressItem_4,
#line 625 "trace_params.m"
  MR_Integer libs__trace_params__SuppressedEventsInt0_5,
#line 625 "trace_params.m"
  MR_Integer * libs__trace_params__SuppressedEventsInt_6);

#line 536 "trace_params.m"
static void MR_CALL 
libs__trace_params__wrap_port_2_p_0(
#line 536 "trace_params.m"
  MR_Word libs__trace_params__Port_3,
#line 536 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__2_2);

#line 529 "trace_params.m"
static void MR_CALL 
libs__trace_params__convert_item_name_2_p_0_1(
#line 529 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 529 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 529 "trace_params.m"
  MR_Box * libs__trace_params__wrapper_arg_2);

#line 522 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__convert_item_name_2_p_0(
#line 522 "trace_params.m"
  MR_String libs__trace_params__String_3,
#line 522 "trace_params.m"
  MR_Word * libs__trace_params__Names_4);

#line 464 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__char_is_comma_1_p_0(
#line 464 "trace_params.m"
  MR_Char libs__trace_params__HeadVar__1_1);

#line 622 "trace_params.m"
static void MR_CALL 
libs__trace_params__encode_suppressed_events_1_f_0_1(
#line 622 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 622 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 622 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 622 "trace_params.m"
  MR_Box * libs__trace_params__wrapper_arg_3);

#line 460 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_2(
#line 460 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 460 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 460 "trace_params.m"
  MR_Box * libs__trace_params__wrapper_arg_2);

#line 459 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_1(
#line 459 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 459 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1);


static /* final */ const MR_Box libs__trace_params_scalar_common_1[21][2];

static /* final */ const MR_Box libs__trace_params_scalar_common_3[4][1];

static /* final */ const MR_Box libs__trace_params_scalar_common_4[1][4];

static /* final */ const MR_Box libs__trace_params_scalar_common_5[4][3];

static /* final */ const MR_Box libs__trace_params_scalar_common_6[2][5];

static /* final */ const MR_Box libs__trace_params_scalar_common_12[1][6];


#line 199 "trace_params.m"
/* sealed */ struct libs__trace_params__vector_common_type_2_0_s {
#line 199 "trace_params.m"
  const MR_String libs__trace_params__vector_common_type_2_0__vct_2_f_0;
#line 199 "trace_params.m"
  const MR_Integer libs__trace_params__vector_common_type_2_0__vct_2_f_1;
#line 199 "trace_params.m"
};

static /* final */ const struct libs__trace_params__vector_common_type_2_0_s libs__trace_params_vector_common_2[6];

#line 347 "trace_params.m"
/* sealed */ struct libs__trace_params__vector_common_type_7_0_s {
#line 347 "trace_params.m"
  const MR_Word libs__trace_params__vector_common_type_7_0__vct_7_f_0;
#line 347 "trace_params.m"
};

static /* final */ const struct libs__trace_params__vector_common_type_7_0_s libs__trace_params_vector_common_7[66];

#line 570 "trace_params.m"
/* sealed */ struct libs__trace_params__vector_common_type_8_0_s {
#line 570 "trace_params.m"
  const MR_Word libs__trace_params__vector_common_type_8_0__vct_8_f_0;
#line 570 "trace_params.m"
};

static /* final */ const struct libs__trace_params__vector_common_type_8_0_s libs__trace_params_vector_common_8[16];

#line 589 "trace_params.m"
/* sealed */ struct libs__trace_params__vector_common_type_9_0_s {
#line 589 "trace_params.m"
  const MR_Word libs__trace_params__vector_common_type_9_0__vct_9_f_0;
#line 589 "trace_params.m"
};

static /* final */ const struct libs__trace_params__vector_common_type_9_0_s libs__trace_params_vector_common_9[6];

#line 178 "trace_params.m"
/* sealed */ struct libs__trace_params__vector_common_type_10_0_s {
#line 178 "trace_params.m"
  const MR_Word libs__trace_params__vector_common_type_10_0__vct_10_f_0;
#line 178 "trace_params.m"
};

static /* final */ const struct libs__trace_params__vector_common_type_10_0_s libs__trace_params_vector_common_10[6];

#line 542 "trace_params.m"
/* sealed */ struct libs__trace_params__vector_common_type_11_0_s {
#line 542 "trace_params.m"
  const MR_String libs__trace_params__vector_common_type_11_0__vct_11_f_0;
#line 542 "trace_params.m"
};

static /* final */ const struct libs__trace_params__vector_common_type_11_0_s libs__trace_params_vector_common_11[6];

#line 479 "trace_params.m"
/* sealed */ struct libs__trace_params__vector_common_type_13_0_s {
#line 479 "trace_params.m"
  const MR_Word libs__trace_params__vector_common_type_13_0__vct_13_f_0;
#line 479 "trace_params.m"
};

static /* final */ const struct libs__trace_params__vector_common_type_13_0_s libs__trace_params_vector_common_13[22];

#line 515 "trace_params.m"
/* sealed */ struct libs__trace_params__vector_common_type_14_0_s {
#line 515 "trace_params.m"
  const MR_String libs__trace_params__vector_common_type_14_0__vct_14_f_0;
#line 515 "trace_params.m"
  const MR_Word libs__trace_params__vector_common_type_14_0__vct_14_f_1;
#line 515 "trace_params.m"
};

static /* final */ const struct libs__trace_params__vector_common_type_14_0_s libs__trace_params_vector_common_14[6];

#line 643 "trace_params.m"
/* sealed */ struct libs__trace_params__vector_common_type_15_0_s {
#line 643 "trace_params.m"
  const MR_Integer libs__trace_params__vector_common_type_15_0__vct_15_f_0;
#line 643 "trace_params.m"
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



#line 912 "libs.trace_params.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__trace_params__list__pti_list_1__plain_libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 920 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0 = {
  (MR_String) "port_cat_interface",
  (MR_Integer) 0
};

#line 926 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1 = {
  (MR_String) "port_cat_internal",
  (MR_Integer) 1
};

#line 932 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2 = {
  (MR_String) "port_cat_context",
  (MR_Integer) 2
};

#line 938 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3 = {
  (MR_String) "port_cat_user",
  (MR_Integer) 3
};

#line 944 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_value_ordered_port_category_0[4] = {
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3
};

#line 952 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_name_ordered_port_category_0[4] = {
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3
};

#line 960 "libs.trace_params.c"
static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_port_category_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 968 "libs.trace_params.c"
const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_port_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 985 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0
};

#line 991 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1 = {
  (MR_String) "basic",
  (MR_Integer) 1
};

#line 997 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2 = {
  (MR_String) "basic_user",
  (MR_Integer) 2
};

#line 1003 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3 = {
  (MR_String) "shallow",
  (MR_Integer) 3
};

#line 1009 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4 = {
  (MR_String) "deep",
  (MR_Integer) 4
};

#line 1015 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5 = {
  (MR_String) "decl_rep",
  (MR_Integer) 5
};

#line 1021 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_value_ordered_trace_level_0[6] = {
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5
};

#line 1031 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_name_ordered_trace_level_0[6] = {
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3
};

#line 1041 "libs.trace_params.c"
static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_trace_level_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1051 "libs.trace_params.c"
const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1068 "libs.trace_params.c"
static const MR_PseudoTypeInfo libs__trace_params__libs__trace_params__field_types_trace_suppress_item_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
};

#line 1073 "libs.trace_params.c"
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
  NULL
};

#line 1088 "libs.trace_params.c"
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
  NULL
};

#line 1103 "libs.trace_params.c"
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
  NULL
};

#line 1118 "libs.trace_params.c"
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
  NULL
};

#line 1133 "libs.trace_params.c"
static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_0[3] = {
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_1,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_2,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_3
};

#line 1140 "libs.trace_params.c"
static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_1[1] = {
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_0
};

#line 1145 "libs.trace_params.c"
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

#line 1159 "libs.trace_params.c"
static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_name_ordered_trace_suppress_item_0[4] = {
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_2,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_0,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_3,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_1
};

#line 1167 "libs.trace_params.c"
static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_trace_suppress_item_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1175 "libs.trace_params.c"
const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1192 "libs.trace_params.c"
static const MR_FA_TypeInfo_Struct1 libs__trace_params__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 1200 "libs.trace_params.c"
const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1217 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0_10001(
#line 1220 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 1222 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2)
#line 1224 "libs.trace_params.c"
{
#line 1226 "libs.trace_params.c"
  {
#line 1228 "libs.trace_params.c"
    MR_bool libs__trace_params__succeeded;

#line 1231 "libs.trace_params.c"
    {
#line 1233 "libs.trace_params.c"
      libs__trace_params__succeeded = libs__trace_params____Unify____port_category_0_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Word) libs__trace_params__wrapper_arg_2));
    }
#line 1236 "libs.trace_params.c"
    return libs__trace_params__succeeded;
#line 1238 "libs.trace_params.c"
  }
#line 1240 "libs.trace_params.c"
}

#line 1243 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____port_category_0_0_10001(
#line 1246 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 1248 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 1250 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3)
#line 1252 "libs.trace_params.c"
{
#line 1254 "libs.trace_params.c"
  {
#line 1256 "libs.trace_params.c"
    MR_Word libs__trace_params__conv0_HeadVar__1_1;

#line 1259 "libs.trace_params.c"
    {
#line 1261 "libs.trace_params.c"
      libs__trace_params____Compare____port_category_0_0(&libs__trace_params__conv0_HeadVar__1_1, ((MR_Word) libs__trace_params__wrapper_arg_2), ((MR_Word) libs__trace_params__wrapper_arg_3));
    }
#line 1264 "libs.trace_params.c"
    *libs__trace_params__wrapper_arg_1 = ((MR_Box) (libs__trace_params__conv0_HeadVar__1_1));
#line 1266 "libs.trace_params.c"
  }
#line 1268 "libs.trace_params.c"
}

#line 1271 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____trace_level_0_0_10001(
#line 1274 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 1276 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2)
#line 1278 "libs.trace_params.c"
{
#line 1280 "libs.trace_params.c"
  {
#line 1282 "libs.trace_params.c"
    MR_bool libs__trace_params__succeeded;

#line 1285 "libs.trace_params.c"
    {
#line 1287 "libs.trace_params.c"
      libs__trace_params__succeeded = libs__trace_params____Unify____trace_level_0_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Word) libs__trace_params__wrapper_arg_2));
    }
#line 1290 "libs.trace_params.c"
    return libs__trace_params__succeeded;
#line 1292 "libs.trace_params.c"
  }
#line 1294 "libs.trace_params.c"
}

#line 1297 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____trace_level_0_0_10001(
#line 1300 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 1302 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 1304 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3)
#line 1306 "libs.trace_params.c"
{
#line 1308 "libs.trace_params.c"
  {
#line 1310 "libs.trace_params.c"
    MR_Word libs__trace_params__conv0_HeadVar__1_1;

#line 1313 "libs.trace_params.c"
    {
#line 1315 "libs.trace_params.c"
      libs__trace_params____Compare____trace_level_0_0(&libs__trace_params__conv0_HeadVar__1_1, ((MR_Word) libs__trace_params__wrapper_arg_2), ((MR_Word) libs__trace_params__wrapper_arg_3));
    }
#line 1318 "libs.trace_params.c"
    *libs__trace_params__wrapper_arg_1 = ((MR_Box) (libs__trace_params__conv0_HeadVar__1_1));
#line 1320 "libs.trace_params.c"
  }
#line 1322 "libs.trace_params.c"
}

#line 1325 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_item_0_0_10001(
#line 1328 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 1330 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2)
#line 1332 "libs.trace_params.c"
{
#line 1334 "libs.trace_params.c"
  {
#line 1336 "libs.trace_params.c"
    MR_bool libs__trace_params__succeeded;

#line 1339 "libs.trace_params.c"
    {
#line 1341 "libs.trace_params.c"
      libs__trace_params__succeeded = libs__trace_params____Unify____trace_suppress_item_0_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Word) libs__trace_params__wrapper_arg_2));
    }
#line 1344 "libs.trace_params.c"
    return libs__trace_params__succeeded;
#line 1346 "libs.trace_params.c"
  }
#line 1348 "libs.trace_params.c"
}

#line 1351 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____trace_suppress_item_0_0_10001(
#line 1354 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 1356 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 1358 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3)
#line 1360 "libs.trace_params.c"
{
#line 1362 "libs.trace_params.c"
  {
#line 1364 "libs.trace_params.c"
    MR_Word libs__trace_params__conv0_HeadVar__1_1;

#line 1367 "libs.trace_params.c"
    {
#line 1369 "libs.trace_params.c"
      libs__trace_params____Compare____trace_suppress_item_0_0(&libs__trace_params__conv0_HeadVar__1_1, ((MR_Word) libs__trace_params__wrapper_arg_2), ((MR_Word) libs__trace_params__wrapper_arg_3));
    }
#line 1372 "libs.trace_params.c"
    *libs__trace_params__wrapper_arg_1 = ((MR_Box) (libs__trace_params__conv0_HeadVar__1_1));
#line 1374 "libs.trace_params.c"
  }
#line 1376 "libs.trace_params.c"
}

#line 1379 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_items_0_0_10001(
#line 1382 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 1384 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2)
#line 1386 "libs.trace_params.c"
{
#line 1388 "libs.trace_params.c"
  {
#line 1390 "libs.trace_params.c"
    MR_bool libs__trace_params__succeeded;

#line 1393 "libs.trace_params.c"
    {
#line 1395 "libs.trace_params.c"
      libs__trace_params__succeeded = libs__trace_params____Unify____trace_suppress_items_0_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Word) libs__trace_params__wrapper_arg_2));
    }
#line 1398 "libs.trace_params.c"
    return libs__trace_params__succeeded;
#line 1400 "libs.trace_params.c"
  }
#line 1402 "libs.trace_params.c"
}

#line 1405 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____trace_suppress_items_0_0_10001(
#line 1408 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 1410 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 1412 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3)
#line 1414 "libs.trace_params.c"
{
#line 1416 "libs.trace_params.c"
  {
#line 1418 "libs.trace_params.c"
    MR_Word libs__trace_params__conv0_HeadVar__1_1;

#line 1421 "libs.trace_params.c"
    {
#line 1423 "libs.trace_params.c"
      libs__trace_params____Compare____trace_suppress_items_0_0(&libs__trace_params__conv0_HeadVar__1_1, ((MR_Word) libs__trace_params__wrapper_arg_2), ((MR_Word) libs__trace_params__wrapper_arg_3));
    }
#line 1426 "libs.trace_params.c"
    *libs__trace_params__wrapper_arg_1 = ((MR_Box) (libs__trace_params__conv0_HeadVar__1_1));
#line 1428 "libs.trace_params.c"
  }
#line 1430 "libs.trace_params.c"
}

#line 174 "trace_params.m"
void MR_CALL 
libs__trace_params____Compare____trace_suppress_items_0_0(
#line 174 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__1_1,
#line 174 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2,
#line 174 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__3_3)
#line 174 "trace_params.m"
{
#line 174 "trace_params.m"
  {
#line 174 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 174 "trace_params.m"
    MR_Word libs__trace_params__Cast_HeadVar1_4 = libs__trace_params__HeadVar__2_2;
#line 174 "trace_params.m"
    MR_Word libs__trace_params__Cast_HeadVar2_5 = libs__trace_params__HeadVar__3_3;

#line 174 "trace_params.m"
    {
#line 174 "trace_params.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__trace_params_scalar_common_1[1], libs__trace_params__HeadVar__1_1, ((MR_Box) (libs__trace_params__Cast_HeadVar1_4)), ((MR_Box) (libs__trace_params__Cast_HeadVar2_5)));
#line 174 "trace_params.m"
      return;
    }
#line 174 "trace_params.m"
  }
#line 174 "trace_params.m"
}

#line 174 "trace_params.m"
MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_items_0_0(
#line 174 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__1_1,
#line 174 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2)
#line 174 "trace_params.m"
{
#line 174 "trace_params.m"
  {
#line 174 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 174 "trace_params.m"
    MR_Word libs__trace_params__Cast_HeadVar1_3 = libs__trace_params__HeadVar__1_1;
#line 174 "trace_params.m"
    MR_Word libs__trace_params__Cast_HeadVar2_4 = libs__trace_params__HeadVar__2_2;

#line 174 "trace_params.m"
    {
#line 174 "trace_params.m"
      return libs__trace_params__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__trace_params_scalar_common_1[1], ((MR_Box) (libs__trace_params__Cast_HeadVar1_3)), ((MR_Box) (libs__trace_params__Cast_HeadVar2_4)));
    }
#line 174 "trace_params.m"
    return libs__trace_params__succeeded;
#line 174 "trace_params.m"
  }
#line 174 "trace_params.m"
}

#line 168 "trace_params.m"
void MR_CALL 
libs__trace_params____Compare____trace_suppress_item_0_0(
#line 168 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__1_1,
#line 168 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2,
#line 168 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__3_3)
#line 168 "trace_params.m"
{
#line 168 "trace_params.m"
  {
#line 168 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 168 "trace_params.m"
    MR_Integer libs__trace_params__CastX_12 = (MR_Integer) libs__trace_params__HeadVar__2_2;
#line 168 "trace_params.m"
    MR_Integer libs__trace_params__CastY_13 = (MR_Integer) libs__trace_params__HeadVar__3_3;

#line 168 "trace_params.m"
    libs__trace_params__succeeded = (libs__trace_params__CastX_12 == libs__trace_params__CastY_13);
#line 168 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 1519 "libs.trace_params.c"
      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 0;
#line 168 "trace_params.m"
    else
#line 168 "trace_params.m"
#line 168 "trace_params.m"
      switch (MR_tag((MR_Word) libs__trace_params__HeadVar__2_2)) {
#line 168 "trace_params.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 168 "trace_params.m"
        case (MR_Integer) 0:
#line 168 "trace_params.m"
#line 168 "trace_params.m"
          switch (MR_unmkbody(libs__trace_params__HeadVar__2_2)) {
#line 168 "trace_params.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 168 "trace_params.m"
            case (MR_Integer) 0:
#line 168 "trace_params.m"
#line 168 "trace_params.m"
              switch (MR_tag((MR_Word) libs__trace_params__HeadVar__3_3)) {
#line 168 "trace_params.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 168 "trace_params.m"
                case (MR_Integer) 0:
#line 168 "trace_params.m"
#line 168 "trace_params.m"
                  switch (MR_unmkbody(libs__trace_params__HeadVar__3_3)) {
#line 168 "trace_params.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 168 "trace_params.m"
                    case (MR_Integer) 0:
#line 168 "trace_params.m"
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 0;
#line 168 "trace_params.m"
                      break;
#line 168 "trace_params.m"
                    case (MR_Integer) 1:
#line 168 "trace_params.m"
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "trace_params.m"
                      break;
#line 168 "trace_params.m"
                    case (MR_Integer) 2:
#line 168 "trace_params.m"
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "trace_params.m"
                      break;
#line 168 "trace_params.m"
                  }
#line 168 "trace_params.m"
                  break;
#line 168 "trace_params.m"
                case (MR_Integer) 1:
#line 1573 "libs.trace_params.c"
                  *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "trace_params.m"
                  break;
#line 168 "trace_params.m"
              }
#line 168 "trace_params.m"
              break;
#line 168 "trace_params.m"
            case (MR_Integer) 1:
#line 168 "trace_params.m"
#line 168 "trace_params.m"
              switch (MR_tag((MR_Word) libs__trace_params__HeadVar__3_3)) {
#line 168 "trace_params.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 168 "trace_params.m"
                case (MR_Integer) 0:
#line 168 "trace_params.m"
#line 168 "trace_params.m"
                  switch (MR_unmkbody(libs__trace_params__HeadVar__3_3)) {
#line 168 "trace_params.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 168 "trace_params.m"
                    case (MR_Integer) 0:
#line 168 "trace_params.m"
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "trace_params.m"
                      break;
#line 168 "trace_params.m"
                    case (MR_Integer) 1:
#line 168 "trace_params.m"
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 0;
#line 168 "trace_params.m"
                      break;
#line 168 "trace_params.m"
                    case (MR_Integer) 2:
#line 168 "trace_params.m"
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "trace_params.m"
                      break;
#line 168 "trace_params.m"
                  }
#line 168 "trace_params.m"
                  break;
#line 168 "trace_params.m"
                case (MR_Integer) 1:
#line 1619 "libs.trace_params.c"
                  *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "trace_params.m"
                  break;
#line 168 "trace_params.m"
              }
#line 168 "trace_params.m"
              break;
#line 168 "trace_params.m"
            case (MR_Integer) 2:
#line 168 "trace_params.m"
#line 168 "trace_params.m"
              switch (MR_tag((MR_Word) libs__trace_params__HeadVar__3_3)) {
#line 168 "trace_params.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 168 "trace_params.m"
                case (MR_Integer) 0:
#line 168 "trace_params.m"
#line 168 "trace_params.m"
                  switch (MR_unmkbody(libs__trace_params__HeadVar__3_3)) {
#line 168 "trace_params.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 168 "trace_params.m"
                    case (MR_Integer) 0:
#line 168 "trace_params.m"
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "trace_params.m"
                      break;
#line 168 "trace_params.m"
                    case (MR_Integer) 1:
#line 168 "trace_params.m"
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "trace_params.m"
                      break;
#line 168 "trace_params.m"
                    case (MR_Integer) 2:
#line 168 "trace_params.m"
                      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 0;
#line 168 "trace_params.m"
                      break;
#line 168 "trace_params.m"
                  }
#line 168 "trace_params.m"
                  break;
#line 168 "trace_params.m"
                case (MR_Integer) 1:
#line 1665 "libs.trace_params.c"
                  *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "trace_params.m"
                  break;
#line 168 "trace_params.m"
              }
#line 168 "trace_params.m"
              break;
#line 168 "trace_params.m"
          }
#line 168 "trace_params.m"
          break;
#line 168 "trace_params.m"
        case (MR_Integer) 1:
#line 168 "trace_params.m"
          {
#line 168 "trace_params.m"
            MR_Word libs__trace_params__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__HeadVar__2_2, (MR_Integer) 0)));

#line 168 "trace_params.m"
#line 168 "trace_params.m"
            switch (MR_tag((MR_Word) libs__trace_params__HeadVar__3_3)) {
#line 168 "trace_params.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 168 "trace_params.m"
              case (MR_Integer) 0:
#line 168 "trace_params.m"
#line 168 "trace_params.m"
                switch (MR_unmkbody(libs__trace_params__HeadVar__3_3)) {
#line 168 "trace_params.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 168 "trace_params.m"
                  case (MR_Integer) 0:
#line 1698 "libs.trace_params.c"
                    *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "trace_params.m"
                    break;
#line 168 "trace_params.m"
                  case (MR_Integer) 1:
#line 1704 "libs.trace_params.c"
                    *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "trace_params.m"
                    break;
#line 168 "trace_params.m"
                  case (MR_Integer) 2:
#line 1710 "libs.trace_params.c"
                    *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "trace_params.m"
                    break;
#line 168 "trace_params.m"
                }
#line 168 "trace_params.m"
                break;
#line 168 "trace_params.m"
              case (MR_Integer) 1:
#line 168 "trace_params.m"
                {
#line 168 "trace_params.m"
                  MR_Word libs__trace_params__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__HeadVar__3_3, (MR_Integer) 0)));
#line 168 "trace_params.m"
                  MR_Integer libs__trace_params__V_16_16 = (MR_Integer) libs__trace_params__V_15_15;
#line 168 "trace_params.m"
                  MR_Integer libs__trace_params__V_17_17 = (MR_Integer) libs__trace_params__V_5_5;

#line 168 "trace_params.m"
                  {
#line 168 "trace_params.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(libs__trace_params__HeadVar__1_1, libs__trace_params__V_16_16, libs__trace_params__V_17_17);
#line 168 "trace_params.m"
                    return;
                  }
#line 168 "trace_params.m"
                }
#line 168 "trace_params.m"
                break;
#line 168 "trace_params.m"
            }
#line 168 "trace_params.m"
          }
#line 168 "trace_params.m"
          break;
#line 168 "trace_params.m"
      }
#line 168 "trace_params.m"
  }
#line 168 "trace_params.m"
}

#line 168 "trace_params.m"
MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_item_0_0(
#line 168 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__1_1,
#line 168 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2)
#line 168 "trace_params.m"
{
#line 168 "trace_params.m"
  {
#line 168 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 168 "trace_params.m"
    MR_Integer libs__trace_params__CastX_11 = (MR_Integer) libs__trace_params__HeadVar__1_1;
#line 168 "trace_params.m"
    MR_Integer libs__trace_params__CastY_12 = (MR_Integer) libs__trace_params__HeadVar__2_2;

#line 168 "trace_params.m"
    libs__trace_params__succeeded = (libs__trace_params__CastX_11 == libs__trace_params__CastY_12);
#line 168 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 168 "trace_params.m"
      libs__trace_params__succeeded = MR_TRUE;
#line 168 "trace_params.m"
    else
#line 168 "trace_params.m"
#line 168 "trace_params.m"
      switch (MR_tag((MR_Word) libs__trace_params__HeadVar__1_1)) {
#line 168 "trace_params.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 168 "trace_params.m"
        case (MR_Integer) 0:
#line 168 "trace_params.m"
#line 168 "trace_params.m"
          switch (MR_unmkbody(libs__trace_params__HeadVar__1_1)) {
#line 168 "trace_params.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 168 "trace_params.m"
            case (MR_Integer) 0:
#line 168 "trace_params.m"
              {
#line 168 "trace_params.m"
                MR_Integer libs__trace_params__CastX_5 = (MR_Integer) libs__trace_params__HeadVar__1_1;
#line 168 "trace_params.m"
                MR_Integer libs__trace_params__CastY_6 = (MR_Integer) libs__trace_params__HeadVar__2_2;

#line 168 "trace_params.m"
                libs__trace_params__succeeded = (libs__trace_params__CastY_6 == libs__trace_params__CastX_5);
#line 168 "trace_params.m"
              }
#line 168 "trace_params.m"
              break;
#line 168 "trace_params.m"
            case (MR_Integer) 1:
#line 168 "trace_params.m"
              {
#line 168 "trace_params.m"
                MR_Integer libs__trace_params__CastX_7 = (MR_Integer) libs__trace_params__HeadVar__1_1;
#line 168 "trace_params.m"
                MR_Integer libs__trace_params__CastY_8 = (MR_Integer) libs__trace_params__HeadVar__2_2;

#line 168 "trace_params.m"
                libs__trace_params__succeeded = (libs__trace_params__CastY_8 == libs__trace_params__CastX_7);
#line 168 "trace_params.m"
              }
#line 168 "trace_params.m"
              break;
#line 168 "trace_params.m"
            case (MR_Integer) 2:
#line 168 "trace_params.m"
              {
#line 168 "trace_params.m"
                MR_Integer libs__trace_params__CastX_9 = (MR_Integer) libs__trace_params__HeadVar__1_1;
#line 168 "trace_params.m"
                MR_Integer libs__trace_params__CastY_10 = (MR_Integer) libs__trace_params__HeadVar__2_2;

#line 168 "trace_params.m"
                libs__trace_params__succeeded = (libs__trace_params__CastY_10 == libs__trace_params__CastX_9);
#line 168 "trace_params.m"
              }
#line 168 "trace_params.m"
              break;
#line 168 "trace_params.m"
          }
#line 168 "trace_params.m"
          break;
#line 168 "trace_params.m"
        case (MR_Integer) 1:
#line 168 "trace_params.m"
          {
#line 168 "trace_params.m"
            MR_Word libs__trace_params__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__HeadVar__1_1, (MR_Integer) 0)));
#line 168 "trace_params.m"
            MR_Word libs__trace_params__V_4_4;

#line 168 "trace_params.m"
            libs__trace_params__succeeded = ((MR_tag((MR_Word) libs__trace_params__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 168 "trace_params.m"
            if (libs__trace_params__succeeded)
#line 168 "trace_params.m"
              {
#line 168 "trace_params.m"
                libs__trace_params__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__HeadVar__2_2, (MR_Integer) 0)));
#line 1857 "libs.trace_params.c"
                libs__trace_params__succeeded = (libs__trace_params__V_3_3 == libs__trace_params__V_4_4);
#line 168 "trace_params.m"
              }
#line 168 "trace_params.m"
          }
#line 168 "trace_params.m"
          break;
#line 168 "trace_params.m"
      }
#line 168 "trace_params.m"
    return libs__trace_params__succeeded;
#line 168 "trace_params.m"
  }
#line 168 "trace_params.m"
}

#line 160 "trace_params.m"
void MR_CALL 
libs__trace_params____Compare____trace_level_0_0(
#line 160 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__1_1,
#line 160 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2,
#line 160 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__3_3)
#line 160 "trace_params.m"
{
#line 160 "trace_params.m"
  {
#line 160 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 160 "trace_params.m"
    MR_Integer libs__trace_params__Cast_HeadVar1_4 = (MR_Integer) libs__trace_params__HeadVar__2_2;
#line 160 "trace_params.m"
    MR_Integer libs__trace_params__Cast_HeadVar2_5 = (MR_Integer) libs__trace_params__HeadVar__3_3;

#line 160 "trace_params.m"
    {
#line 160 "trace_params.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__trace_params__HeadVar__1_1, libs__trace_params__Cast_HeadVar1_4, libs__trace_params__Cast_HeadVar2_5);
#line 160 "trace_params.m"
      return;
    }
#line 160 "trace_params.m"
  }
#line 160 "trace_params.m"
}

#line 160 "trace_params.m"
MR_bool MR_CALL 
libs__trace_params____Unify____trace_level_0_0(
#line 160 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_1,
#line 160 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2)
#line 160 "trace_params.m"
{
#line 1915 "libs.trace_params.c"
  {
#line 1917 "libs.trace_params.c"
    MR_bool libs__trace_params__succeeded = (libs__trace_params__HeadVar__2_1 == libs__trace_params__HeadVar__2_2);

#line 1920 "libs.trace_params.c"
    return libs__trace_params__succeeded;
#line 1922 "libs.trace_params.c"
  }
#line 160 "trace_params.m"
}

#line 551 "trace_params.m"
static void MR_CALL 
libs__trace_params____Compare____port_category_0_0(
#line 551 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__1_1,
#line 551 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2,
#line 551 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__3_3)
#line 551 "trace_params.m"
{
#line 551 "trace_params.m"
  {
#line 551 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 551 "trace_params.m"
    MR_Integer libs__trace_params__Cast_HeadVar1_4 = (MR_Integer) libs__trace_params__HeadVar__2_2;
#line 551 "trace_params.m"
    MR_Integer libs__trace_params__Cast_HeadVar2_5 = (MR_Integer) libs__trace_params__HeadVar__3_3;

#line 551 "trace_params.m"
    {
#line 551 "trace_params.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__trace_params__HeadVar__1_1, libs__trace_params__Cast_HeadVar1_4, libs__trace_params__Cast_HeadVar2_5);
#line 551 "trace_params.m"
      return;
    }
#line 551 "trace_params.m"
  }
#line 551 "trace_params.m"
}

#line 551 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0(
#line 551 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_1,
#line 551 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2)
#line 551 "trace_params.m"
{
#line 1968 "libs.trace_params.c"
  {
#line 1970 "libs.trace_params.c"
    MR_bool libs__trace_params__succeeded = (libs__trace_params__HeadVar__2_1 == libs__trace_params__HeadVar__2_2);

#line 1973 "libs.trace_params.c"
    return libs__trace_params__succeeded;
#line 1975 "libs.trace_params.c"
  }
#line 551 "trace_params.m"
}

#line 625 "trace_params.m"
static void MR_CALL 
libs__trace_params__maybe_add_suppressed_event_3_p_0(
#line 625 "trace_params.m"
  MR_Word libs__trace_params__SuppressItem_4,
#line 625 "trace_params.m"
  MR_Integer libs__trace_params__SuppressedEventsInt0_5,
#line 625 "trace_params.m"
  MR_Integer * libs__trace_params__SuppressedEventsInt_6)
#line 625 "trace_params.m"
{
#line 631 "trace_params.m"
  {
#line 631 "trace_params.m"
    MR_bool libs__trace_params__succeeded;

#line 631 "trace_params.m"
#line 631 "trace_params.m"
    switch (MR_tag((MR_Word) libs__trace_params__SuppressItem_4)) {
#line 631 "trace_params.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 631 "trace_params.m"
      case (MR_Integer) 0:
#line 638 "trace_params.m"
        *libs__trace_params__SuppressedEventsInt_6 = libs__trace_params__SuppressedEventsInt0_5;
#line 631 "trace_params.m"
        break;
#line 631 "trace_params.m"
      case (MR_Integer) 1:
#line 631 "trace_params.m"
        {
#line 631 "trace_params.m"
          MR_Word libs__trace_params__Port_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__SuppressItem_4, (MR_Integer) 0)));
#line 631 "trace_params.m"
          MR_Integer libs__trace_params__V_8_8;
#line 631 "trace_params.m"
          MR_Integer libs__trace_params__V_10_10 = ((&libs__trace_params_vector_common_15[0 + libs__trace_params__Port_7]))->libs__trace_params__vector_common_type_15_0__vct_15_f_0;

#line 632 "trace_params.m"
          {
#line 632 "trace_params.m"
            libs__trace_params__V_8_8 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, libs__trace_params__V_10_10);
          }
#line 632 "trace_params.m"
          *libs__trace_params__SuppressedEventsInt_6 = (libs__trace_params__SuppressedEventsInt0_5 | libs__trace_params__V_8_8);
#line 631 "trace_params.m"
        }
#line 631 "trace_params.m"
        break;
#line 631 "trace_params.m"
    }
#line 631 "trace_params.m"
  }
#line 625 "trace_params.m"
}

#line 536 "trace_params.m"
static void MR_CALL 
libs__trace_params__wrap_port_2_p_0(
#line 536 "trace_params.m"
  MR_Word libs__trace_params__Port_3,
#line 536 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__2_2)
#line 536 "trace_params.m"
{
#line 538 "trace_params.m"
  {
#line 538 "trace_params.m"
    MR_bool libs__trace_params__succeeded;

#line 538 "trace_params.m"
    {
#line 538 "trace_params.m"
      MR_Word base;
#line 538 "trace_params.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 538 "trace_params.m"
      *libs__trace_params__HeadVar__2_2 = base;
#line 538 "trace_params.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__trace_params__Port_3));
#line 538 "trace_params.m"
    }
#line 538 "trace_params.m"
  }
#line 536 "trace_params.m"
}

#line 529 "trace_params.m"
static void MR_CALL 
libs__trace_params__convert_item_name_2_p_0_1(
#line 529 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 529 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 529 "trace_params.m"
  MR_Box * libs__trace_params__wrapper_arg_2)
#line 529 "trace_params.m"
{
#line 529 "trace_params.m"
  {
#line 529 "trace_params.m"
    MR_Box libs__trace_params__closure = libs__trace_params__closure_arg;
#line 529 "trace_params.m"
    MR_Word libs__trace_params__conv0_HeadVar__2_2;

#line 529 "trace_params.m"
    {
#line 529 "trace_params.m"
      libs__trace_params__wrap_port_2_p_0(((MR_Word) libs__trace_params__wrapper_arg_1), &libs__trace_params__conv0_HeadVar__2_2);
    }
#line 529 "trace_params.m"
    *libs__trace_params__wrapper_arg_2 = ((MR_Box) (libs__trace_params__conv0_HeadVar__2_2));
#line 529 "trace_params.m"
  }
#line 529 "trace_params.m"
}

#line 522 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__convert_item_name_2_p_0(
#line 522 "trace_params.m"
  MR_String libs__trace_params__String_3,
#line 522 "trace_params.m"
  MR_Word * libs__trace_params__Names_4)
#line 522 "trace_params.m"
{
#line 528 "trace_params.m"
  {
#line 528 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 528 "trace_params.m"
    MR_Word libs__trace_params__PortName_5;

#line 479 "trace_params.m"
    {
#line 479 "trace_params.m"
      MR_Integer libs__trace_params__case_num_0 = (MR_Integer) -1;

#line 479 "trace_params.m"
#line 479 "trace_params.m"
      switch (MR_nth_code_unit(libs__trace_params__String_3, 0)) {
#line 479 "trace_params.m"
        case (MR_Integer) 99:
#line 479 "trace_params.m"
          if (MR_offset_streq(1, libs__trace_params__String_3, (MR_String) "cond"))
#line 479 "trace_params.m"
            libs__trace_params__case_num_0 = (MR_Integer) 0;
#line 479 "trace_params.m"
          break;
#line 479 "trace_params.m"
        case (MR_Integer) 100:
#line 479 "trace_params.m"
          if (((((((((MR_nth_code_unit(libs__trace_params__String_3, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(libs__trace_params__String_3, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(libs__trace_params__String_3, 3)) == (MR_Integer) 106)))) && (((MR_nth_code_unit(libs__trace_params__String_3, 4)) == (MR_Integer) 95))))
#line 479 "trace_params.m"
#line 479 "trace_params.m"
            switch (MR_nth_code_unit(libs__trace_params__String_3, 5)) {
#line 479 "trace_params.m"
              case (MR_Integer) 102:
#line 479 "trace_params.m"
                if (MR_offset_streq(6, libs__trace_params__String_3, (MR_String) "disj_first"))
#line 479 "trace_params.m"
                  libs__trace_params__case_num_0 = (MR_Integer) 1;
#line 479 "trace_params.m"
                break;
#line 479 "trace_params.m"
              case (MR_Integer) 108:
#line 479 "trace_params.m"
                if (MR_offset_streq(6, libs__trace_params__String_3, (MR_String) "disj_later"))
#line 479 "trace_params.m"
                  libs__trace_params__case_num_0 = (MR_Integer) 2;
#line 479 "trace_params.m"
                break;
#line 479 "trace_params.m"
            }
#line 479 "trace_params.m"
          break;
#line 479 "trace_params.m"
        case (MR_Integer) 101:
#line 479 "trace_params.m"
#line 479 "trace_params.m"
          switch (MR_nth_code_unit(libs__trace_params__String_3, 1)) {
#line 479 "trace_params.m"
            case (MR_Integer) 108:
#line 479 "trace_params.m"
              if (MR_offset_streq(2, libs__trace_params__String_3, (MR_String) "else"))
#line 479 "trace_params.m"
                libs__trace_params__case_num_0 = (MR_Integer) 3;
#line 479 "trace_params.m"
              break;
#line 479 "trace_params.m"
            case (MR_Integer) 120:
#line 479 "trace_params.m"
#line 479 "trace_params.m"
              switch (MR_nth_code_unit(libs__trace_params__String_3, 2)) {
#line 479 "trace_params.m"
                case (MR_Integer) 99:
#line 479 "trace_params.m"
                  if (MR_offset_streq(3, libs__trace_params__String_3, (MR_String) "exception"))
#line 479 "trace_params.m"
                    libs__trace_params__case_num_0 = (MR_Integer) 4;
#line 479 "trace_params.m"
                  break;
#line 479 "trace_params.m"
                case (MR_Integer) 105:
#line 479 "trace_params.m"
                  if (MR_offset_streq(3, libs__trace_params__String_3, (MR_String) "exit"))
#line 479 "trace_params.m"
                    libs__trace_params__case_num_0 = (MR_Integer) 5;
#line 479 "trace_params.m"
                  break;
#line 479 "trace_params.m"
              }
#line 479 "trace_params.m"
              break;
#line 479 "trace_params.m"
          }
#line 479 "trace_params.m"
          break;
#line 479 "trace_params.m"
        case (MR_Integer) 102:
#line 479 "trace_params.m"
          if (MR_offset_streq(1, libs__trace_params__String_3, (MR_String) "fail"))
#line 479 "trace_params.m"
            libs__trace_params__case_num_0 = (MR_Integer) 6;
#line 479 "trace_params.m"
          break;
#line 479 "trace_params.m"
        case (MR_Integer) 105:
#line 479 "trace_params.m"
          if (((((((MR_nth_code_unit(libs__trace_params__String_3, 1)) == (MR_Integer) 116)) && (((MR_nth_code_unit(libs__trace_params__String_3, 2)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(libs__trace_params__String_3, 3)) == (MR_Integer) 95))))
#line 479 "trace_params.m"
#line 479 "trace_params.m"
            switch (MR_nth_code_unit(libs__trace_params__String_3, 4)) {
#line 479 "trace_params.m"
              case (MR_Integer) 99:
#line 479 "trace_params.m"
                if (MR_offset_streq(5, libs__trace_params__String_3, (MR_String) "ite_cond"))
#line 479 "trace_params.m"
                  libs__trace_params__case_num_0 = (MR_Integer) 7;
#line 479 "trace_params.m"
                break;
#line 479 "trace_params.m"
              case (MR_Integer) 101:
#line 479 "trace_params.m"
                if (MR_offset_streq(5, libs__trace_params__String_3, (MR_String) "ite_else"))
#line 479 "trace_params.m"
                  libs__trace_params__case_num_0 = (MR_Integer) 8;
#line 479 "trace_params.m"
                break;
#line 479 "trace_params.m"
              case (MR_Integer) 116:
#line 479 "trace_params.m"
                if (MR_offset_streq(5, libs__trace_params__String_3, (MR_String) "ite_then"))
#line 479 "trace_params.m"
                  libs__trace_params__case_num_0 = (MR_Integer) 9;
#line 479 "trace_params.m"
                break;
#line 479 "trace_params.m"
            }
#line 479 "trace_params.m"
          break;
#line 479 "trace_params.m"
        case (MR_Integer) 110:
#line 479 "trace_params.m"
          if (((((MR_nth_code_unit(libs__trace_params__String_3, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(libs__trace_params__String_3, 2)) == (MR_Integer) 103))))
#line 479 "trace_params.m"
#line 479 "trace_params.m"
            switch (MR_nth_code_unit(libs__trace_params__String_3, 3)) {
#line 479 "trace_params.m"
              case (MR_Integer) 95:
#line 479 "trace_params.m"
#line 479 "trace_params.m"
                switch (MR_nth_code_unit(libs__trace_params__String_3, 4)) {
#line 479 "trace_params.m"
                  case (MR_Integer) 101:
#line 479 "trace_params.m"
                    if (MR_offset_streq(5, libs__trace_params__String_3, (MR_String) "neg_enter"))
#line 479 "trace_params.m"
                      libs__trace_params__case_num_0 = (MR_Integer) 10;
#line 479 "trace_params.m"
                    break;
#line 479 "trace_params.m"
                  case (MR_Integer) 102:
#line 479 "trace_params.m"
                    if (MR_offset_streq(5, libs__trace_params__String_3, (MR_String) "neg_failure"))
#line 479 "trace_params.m"
                      libs__trace_params__case_num_0 = (MR_Integer) 11;
#line 479 "trace_params.m"
                    break;
#line 479 "trace_params.m"
                  case (MR_Integer) 115:
#line 479 "trace_params.m"
                    if (MR_offset_streq(5, libs__trace_params__String_3, (MR_String) "neg_success"))
#line 479 "trace_params.m"
                      libs__trace_params__case_num_0 = (MR_Integer) 12;
#line 479 "trace_params.m"
                    break;
#line 479 "trace_params.m"
                }
#line 479 "trace_params.m"
                break;
#line 479 "trace_params.m"
              case (MR_Integer) 101:
#line 479 "trace_params.m"
                if (MR_offset_streq(4, libs__trace_params__String_3, (MR_String) "nege"))
#line 479 "trace_params.m"
                  libs__trace_params__case_num_0 = (MR_Integer) 13;
#line 479 "trace_params.m"
                break;
#line 479 "trace_params.m"
              case (MR_Integer) 102:
#line 479 "trace_params.m"
                if (MR_offset_streq(4, libs__trace_params__String_3, (MR_String) "negf"))
#line 479 "trace_params.m"
                  libs__trace_params__case_num_0 = (MR_Integer) 14;
#line 479 "trace_params.m"
                break;
#line 479 "trace_params.m"
              case (MR_Integer) 115:
#line 479 "trace_params.m"
                if (MR_offset_streq(4, libs__trace_params__String_3, (MR_String) "negs"))
#line 479 "trace_params.m"
                  libs__trace_params__case_num_0 = (MR_Integer) 15;
#line 479 "trace_params.m"
                break;
#line 479 "trace_params.m"
            }
#line 479 "trace_params.m"
          break;
#line 479 "trace_params.m"
        case (MR_Integer) 114:
#line 479 "trace_params.m"
          if (MR_offset_streq(1, libs__trace_params__String_3, (MR_String) "redo"))
#line 479 "trace_params.m"
            libs__trace_params__case_num_0 = (MR_Integer) 16;
#line 479 "trace_params.m"
          break;
#line 479 "trace_params.m"
        case (MR_Integer) 115:
#line 479 "trace_params.m"
          if (((MR_nth_code_unit(libs__trace_params__String_3, 1)) == (MR_Integer) 119))
#line 479 "trace_params.m"
#line 479 "trace_params.m"
            switch (MR_nth_code_unit(libs__trace_params__String_3, 2)) {
#line 479 "trace_params.m"
              case (MR_Integer) 105:
#line 479 "trace_params.m"
                if (MR_offset_streq(3, libs__trace_params__String_3, (MR_String) "switch"))
#line 479 "trace_params.m"
                  libs__trace_params__case_num_0 = (MR_Integer) 17;
#line 479 "trace_params.m"
                break;
#line 479 "trace_params.m"
              case (MR_Integer) 116:
#line 479 "trace_params.m"
                if (MR_offset_streq(3, libs__trace_params__String_3, (MR_String) "swtc"))
#line 479 "trace_params.m"
                  libs__trace_params__case_num_0 = (MR_Integer) 18;
#line 479 "trace_params.m"
                break;
#line 479 "trace_params.m"
            }
#line 479 "trace_params.m"
          break;
#line 479 "trace_params.m"
        case (MR_Integer) 116:
#line 479 "trace_params.m"
#line 479 "trace_params.m"
          switch (MR_nth_code_unit(libs__trace_params__String_3, 1)) {
#line 479 "trace_params.m"
            case (MR_Integer) 97:
#line 479 "trace_params.m"
              if (MR_offset_streq(2, libs__trace_params__String_3, (MR_String) "tail"))
#line 479 "trace_params.m"
                libs__trace_params__case_num_0 = (MR_Integer) 19;
#line 479 "trace_params.m"
              break;
#line 479 "trace_params.m"
            case (MR_Integer) 104:
#line 479 "trace_params.m"
              if (MR_offset_streq(2, libs__trace_params__String_3, (MR_String) "then"))
#line 479 "trace_params.m"
                libs__trace_params__case_num_0 = (MR_Integer) 20;
#line 479 "trace_params.m"
              break;
#line 479 "trace_params.m"
          }
#line 479 "trace_params.m"
          break;
#line 479 "trace_params.m"
        case (MR_Integer) 117:
#line 479 "trace_params.m"
          if (MR_offset_streq(1, libs__trace_params__String_3, (MR_String) "user"))
#line 479 "trace_params.m"
            libs__trace_params__case_num_0 = (MR_Integer) 21;
#line 479 "trace_params.m"
          break;
#line 479 "trace_params.m"
      }
#line 479 "trace_params.m"
      if ((libs__trace_params__case_num_0 < (MR_Integer) 0))
#line 479 "trace_params.m"
        libs__trace_params__succeeded = MR_FALSE;
#line 479 "trace_params.m"
      else
#line 479 "trace_params.m"
        {
#line 479 "trace_params.m"
          /* we found a match; look up the results */
#line 479 "trace_params.m"
          libs__trace_params__PortName_5 = ((&libs__trace_params_vector_common_13[0 + libs__trace_params__case_num_0]))->libs__trace_params__vector_common_type_13_0__vct_13_f_0;
#line 479 "trace_params.m"
          libs__trace_params__succeeded = MR_TRUE;
#line 479 "trace_params.m"
        }
#line 479 "trace_params.m"
    }
#line 528 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 527 "trace_params.m"
      {
#line 527 "trace_params.m"
        MR_Word libs__trace_params__V_8_8;

#line 527 "trace_params.m"
        {
#line 527 "trace_params.m"
          libs__trace_params__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 527 "trace_params.m"
          MR_hl_field(MR_mktag(1), libs__trace_params__V_8_8, 0) = ((MR_Box) (libs__trace_params__PortName_5));
#line 527 "trace_params.m"
        }
#line 527 "trace_params.m"
        {
#line 527 "trace_params.m"
          MR_Word base;
#line 527 "trace_params.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "trace_params.m"
          *libs__trace_params__Names_4 = base;
#line 527 "trace_params.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__trace_params__V_8_8));
#line 527 "trace_params.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "trace_params.m"
        }
#line 527 "trace_params.m"
        libs__trace_params__succeeded = MR_TRUE;
#line 527 "trace_params.m"
      }
#line 528 "trace_params.m"
    else
#line 530 "trace_params.m"
      {
#line 530 "trace_params.m"
        MR_Word libs__trace_params__PortNames_6;

#line 505 "trace_params.m"
        if ((strcmp(libs__trace_params__String_3, (MR_String) "context") == 0))
#line 510 "trace_params.m"
          {
#line 510 "trace_params.m"
            libs__trace_params__PortNames_6 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[5]);
#line 510 "trace_params.m"
            libs__trace_params__succeeded = MR_TRUE;
#line 510 "trace_params.m"
          }
#line 505 "trace_params.m"
        else
#line 505 "trace_params.m"
        if ((strcmp(libs__trace_params__String_3, (MR_String) "internal") == 0))
#line 507 "trace_params.m"
          {
#line 507 "trace_params.m"
            libs__trace_params__PortNames_6 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[15]);
#line 507 "trace_params.m"
            libs__trace_params__succeeded = MR_TRUE;
#line 507 "trace_params.m"
          }
#line 505 "trace_params.m"
        else
#line 505 "trace_params.m"
        if ((strcmp(libs__trace_params__String_3, (MR_String) "interface") == 0))
#line 505 "trace_params.m"
          {
#line 505 "trace_params.m"
            libs__trace_params__PortNames_6 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[10]);
#line 505 "trace_params.m"
            libs__trace_params__succeeded = MR_TRUE;
#line 505 "trace_params.m"
          }
#line 505 "trace_params.m"
        else
#line 505 "trace_params.m"
          libs__trace_params__succeeded = MR_FALSE;
#line 530 "trace_params.m"
        if (libs__trace_params__succeeded)
#line 529 "trace_params.m"
          {
#line 529 "trace_params.m"
            {
#line 529 "trace_params.m"
              mercury__list__map_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0, (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0, (MR_Word) &libs__trace_params_scalar_common_5[3], libs__trace_params__PortNames_6, libs__trace_params__Names_4);
            }
#line 529 "trace_params.m"
            libs__trace_params__succeeded = MR_TRUE;
#line 529 "trace_params.m"
          }
#line 530 "trace_params.m"
        else
#line 532 "trace_params.m"
          {
#line 532 "trace_params.m"
            MR_Word libs__trace_params__OtherName_7;
#line 532 "trace_params.m"
            MR_Word libs__trace_params__V_11_11;
#line 515 "trace_params.m"
            MR_Integer libs__trace_params__lo_1;
#line 515 "trace_params.m"
            MR_Integer libs__trace_params__hi_2;
#line 515 "trace_params.m"
            MR_Integer libs__trace_params__mid_3;
#line 515 "trace_params.m"
            MR_Integer libs__trace_params__result_4;

#line 515 "trace_params.m"
            /* binary string simple lookup switch */
#line 515 "trace_params.m"
            libs__trace_params__lo_1 = (MR_Integer) 0;
#line 515 "trace_params.m"
            libs__trace_params__hi_2 = (MR_Integer) 5;
#line 515 "trace_params.m"
            do
#line 515 "trace_params.m"
              {
#line 515 "trace_params.m"
                libs__trace_params__mid_3 = (((libs__trace_params__lo_1 + libs__trace_params__hi_2)) / (MR_Integer) 2);
#line 515 "trace_params.m"
                libs__trace_params__result_4 = MR_strcmp(libs__trace_params__String_3, ((&libs__trace_params_vector_common_14[0 + libs__trace_params__mid_3]))->libs__trace_params__vector_common_type_14_0__vct_14_f_0);
#line 515 "trace_params.m"
                if ((libs__trace_params__result_4 == (MR_Integer) 0))
#line 515 "trace_params.m"
                  {
#line 515 "trace_params.m"
                    libs__trace_params__OtherName_7 = ((&libs__trace_params_vector_common_14[0 + libs__trace_params__mid_3]))->libs__trace_params__vector_common_type_14_0__vct_14_f_1;
#line 515 "trace_params.m"
                    libs__trace_params__succeeded = MR_TRUE;
#line 515 "trace_params.m"
                    /* jump out of search loop */
#line 515 "trace_params.m"
                    goto label_0;
#line 515 "trace_params.m"
                  }
#line 515 "trace_params.m"
                else
#line 515 "trace_params.m"
                if ((libs__trace_params__result_4 < (MR_Integer) 0))
#line 515 "trace_params.m"
                  libs__trace_params__hi_2 = (libs__trace_params__mid_3 - (MR_Integer) 1);
#line 515 "trace_params.m"
                else
#line 515 "trace_params.m"
                  libs__trace_params__lo_1 = (libs__trace_params__mid_3 + (MR_Integer) 1);
#line 515 "trace_params.m"
              }
#line 515 "trace_params.m"
            while ((libs__trace_params__lo_1 <= libs__trace_params__hi_2));
#line 515 "trace_params.m"
            libs__trace_params__succeeded = MR_FALSE;
#line 515 "trace_params.m"
          label_0:;
#line 532 "trace_params.m"
            if (libs__trace_params__succeeded)
#line 532 "trace_params.m"
              {
#line 531 "trace_params.m"
                libs__trace_params__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 531 "trace_params.m"
                {
#line 531 "trace_params.m"
                  MR_Word base;
#line 531 "trace_params.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "trace_params.m"
                  *libs__trace_params__Names_4 = base;
#line 531 "trace_params.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__trace_params__OtherName_7));
#line 531 "trace_params.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__trace_params__V_11_11));
#line 531 "trace_params.m"
                }
#line 531 "trace_params.m"
                libs__trace_params__succeeded = MR_TRUE;
#line 532 "trace_params.m"
              }
#line 532 "trace_params.m"
          }
#line 530 "trace_params.m"
      }
#line 528 "trace_params.m"
    return libs__trace_params__succeeded;
#line 528 "trace_params.m"
  }
#line 522 "trace_params.m"
}

#line 464 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__char_is_comma_1_p_0(
#line 464 "trace_params.m"
  MR_Char libs__trace_params__HeadVar__1_1)
#line 464 "trace_params.m"
{
#line 466 "trace_params.m"
  {
#line 466 "trace_params.m"
    MR_bool libs__trace_params__succeeded = (libs__trace_params__HeadVar__1_1 == (MR_Char) 44);

#line 466 "trace_params.m"
    return libs__trace_params__succeeded;
#line 466 "trace_params.m"
  }
#line 464 "trace_params.m"
}

#line 622 "trace_params.m"
static void MR_CALL 
libs__trace_params__encode_suppressed_events_1_f_0_1(
#line 622 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 622 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 622 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 622 "trace_params.m"
  MR_Box * libs__trace_params__wrapper_arg_3)
#line 622 "trace_params.m"
{
#line 622 "trace_params.m"
  {
#line 622 "trace_params.m"
    MR_Box libs__trace_params__closure = libs__trace_params__closure_arg;
#line 622 "trace_params.m"
    MR_Integer libs__trace_params__conv0_SuppressedEventsInt_6;

#line 622 "trace_params.m"
    {
#line 622 "trace_params.m"
      libs__trace_params__maybe_add_suppressed_event_3_p_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Integer) libs__trace_params__wrapper_arg_2), &libs__trace_params__conv0_SuppressedEventsInt_6);
    }
#line 622 "trace_params.m"
    *libs__trace_params__wrapper_arg_3 = ((MR_Box) (libs__trace_params__conv0_SuppressedEventsInt_6));
#line 622 "trace_params.m"
  }
#line 622 "trace_params.m"
}

#line 124 "trace_params.m"
MR_Integer MR_CALL 
libs__trace_params__encode_suppressed_events_1_f_0(
#line 124 "trace_params.m"
  MR_Word libs__trace_params__SuppressedEvents_3)
#line 124 "trace_params.m"
{
#line 621 "trace_params.m"
  {
#line 621 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 621 "trace_params.m"
    MR_Integer libs__trace_params__SuppressedEventsInt_4;
#line 622 "trace_params.m"
    MR_Box libs__trace_params__conv1_SuppressedEventsInt_4;

#line 622 "trace_params.m"
    {
#line 622 "trace_params.m"
      mercury__set__fold_4_p_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &libs__trace_params_scalar_common_5[2], libs__trace_params__SuppressedEvents_3, ((MR_Box) ((MR_Integer) 0)), &libs__trace_params__conv1_SuppressedEventsInt_4);
    }
#line 622 "trace_params.m"
    libs__trace_params__SuppressedEventsInt_4 = ((MR_Integer) libs__trace_params__conv1_SuppressedEventsInt_4);
#line 621 "trace_params.m"
    return libs__trace_params__SuppressedEventsInt_4;
#line 621 "trace_params.m"
  }
#line 124 "trace_params.m"
}

#line 122 "trace_params.m"
MR_String MR_CALL 
libs__trace_params__trace_level_rep_1_f_0(
#line 122 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__1_1)
#line 122 "trace_params.m"
{
#line 542 "trace_params.m"
  {
#line 542 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 542 "trace_params.m"
    MR_String libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_11[0 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_11_0__vct_11_f_0;

#line 542 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 542 "trace_params.m"
  }
#line 122 "trace_params.m"
}

#line 117 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__trace_level_for_unify_compare_1_f_0(
#line 117 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__1_1)
#line 117 "trace_params.m"
{
#line 178 "trace_params.m"
  {
#line 178 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 178 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_10[0 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_10_0__vct_10_f_0;

#line 178 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 178 "trace_params.m"
  }
#line 117 "trace_params.m"
}

#line 112 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__at_least_at_deep_1_f_0(
#line 112 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__1_1)
#line 112 "trace_params.m"
{
#line 192 "trace_params.m"
  {
#line 192 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 192 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_7[60 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

#line 192 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 192 "trace_params.m"
  }
#line 112 "trace_params.m"
}

#line 111 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__at_least_at_shallow_1_f_0(
#line 111 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__1_1)
#line 111 "trace_params.m"
{
#line 185 "trace_params.m"
  {
#line 185 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 185 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_7[54 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

#line 185 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 185 "trace_params.m"
  }
#line 111 "trace_params.m"
}

#line 109 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__trace_level_none_0_f_0(void)
#line 109 "trace_params.m"
{
#line 176 "trace_params.m"
  {
#line 176 "trace_params.m"
    MR_bool libs__trace_params__succeeded;

#line 176 "trace_params.m"
    return (MR_Integer) 0;
#line 176 "trace_params.m"
  }
#line 109 "trace_params.m"
}

#line 106 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__eff_trace_level_4_f_0(
#line 106 "trace_params.m"
  MR_Word libs__trace_params__ModuleInfo_6,
#line 106 "trace_params.m"
  MR_Word libs__trace_params__PredInfo_7,
#line 106 "trace_params.m"
  MR_Word libs__trace_params__ProcInfo_8,
#line 106 "trace_params.m"
  MR_Word libs__trace_params__TraceLevel_9)
#line 106 "trace_params.m"
{
#line 215 "trace_params.m"
  {
#line 215 "trace_params.m"
    MR_bool libs__trace_params__succeeded = (libs__trace_params__TraceLevel_9 == (MR_Integer) 0);
#line 215 "trace_params.m"
    MR_Word libs__trace_params__EffTraceLevel_10;

#line 215 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 214 "trace_params.m"
      libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
#line 215 "trace_params.m"
    else
#line 216 "trace_params.m"
      {
#line 216 "trace_params.m"
        MR_Word libs__trace_params__Origin_11;

#line 216 "trace_params.m"
        {
#line 216 "trace_params.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(libs__trace_params__PredInfo_7, &libs__trace_params__Origin_11);
        }
#line 243 "trace_params.m"
#line 243 "trace_params.m"
        switch (MR_tag((MR_Word) libs__trace_params__Origin_11)) {
#line 243 "trace_params.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 243 "trace_params.m"
          case (MR_Integer) 0:
#line 218 "trace_params.m"
            {
#line 218 "trace_params.m"
              MR_Word libs__trace_params__SpecialPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__trace_params__Origin_11, (MR_Integer) 0)));
#line 218 "trace_params.m"
              MR_Word libs__trace_params__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__trace_params__Origin_11, (MR_Integer) 1)));

#line 233 "trace_params.m"
#line 233 "trace_params.m"
              switch (libs__trace_params__SpecialPred_12) {
#line 233 "trace_params.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 233 "trace_params.m"
                case (MR_Integer) 2:
#line 235 "trace_params.m"
                  libs__trace_params__EffTraceLevel_10 = (MR_Integer) 3;
#line 233 "trace_params.m"
                  break;
#line 233 "trace_params.m"
                case (MR_Integer) 1:
#line 238 "trace_params.m"
                  libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
#line 233 "trace_params.m"
                  break;
#line 233 "trace_params.m"
                case (MR_Integer) 3:
#line 241 "trace_params.m"
                  libs__trace_params__EffTraceLevel_10 = libs__trace_params__TraceLevel_9;
#line 233 "trace_params.m"
                  break;
#line 233 "trace_params.m"
                case (MR_Integer) 0:
#line 232 "trace_params.m"
                  libs__trace_params__EffTraceLevel_10 = (MR_Integer) 3;
#line 233 "trace_params.m"
                  break;
#line 233 "trace_params.m"
              }
#line 218 "trace_params.m"
            }
#line 243 "trace_params.m"
            break;
#line 243 "trace_params.m"
          case (MR_Integer) 1:
#line 243 "trace_params.m"
          case (MR_Integer) 2:
#line 278 "trace_params.m"
            {
#line 278 "trace_params.m"
              MR_Word libs__trace_params__PredStatus_39;
#line 281 "trace_params.m"
              MR_Word libs__trace_params__V_42_42;
#line 281 "trace_params.m"
              MR_Word libs__trace_params__V_43_43;
#line 281 "trace_params.m"
              MR_Word libs__trace_params__V_44_44;

#line 279 "trace_params.m"
              {
#line 279 "trace_params.m"
                hlds__hlds_pred__pred_info_get_status_2_p_0(libs__trace_params__PredInfo_7, &libs__trace_params__PredStatus_39);
              }
#line 281 "trace_params.m"
              libs__trace_params__succeeded = (libs__trace_params__TraceLevel_9 == (MR_Integer) 3);
#line 281 "trace_params.m"
              if (libs__trace_params__succeeded)
#line 281 "trace_params.m"
                {
#line 282 "trace_params.m"
                  {
#line 282 "trace_params.m"
                    libs__trace_params__V_42_42 = hlds__status__pred_status_is_exported_1_f_0(libs__trace_params__PredStatus_39);
                  }
#line 282 "trace_params.m"
                  libs__trace_params__succeeded = (libs__trace_params__V_42_42 == (MR_Integer) 0);
#line 281 "trace_params.m"
                  if (libs__trace_params__succeeded)
#line 281 "trace_params.m"
                    {
#line 283 "trace_params.m"
                      libs__trace_params__V_43_43 = (MR_Integer) 1;
#line 283 "trace_params.m"
                      {
#line 283 "trace_params.m"
                        hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__V_44_44);
                      }
#line 283 "trace_params.m"
                      libs__trace_params__succeeded = (libs__trace_params__V_43_43 == libs__trace_params__V_44_44);
#line 281 "trace_params.m"
                    }
#line 281 "trace_params.m"
                }
#line 300 "trace_params.m"
              if (libs__trace_params__succeeded)
#line 285 "trace_params.m"
                {
#line 285 "trace_params.m"
                  MR_Word libs__trace_params__ProcHasUserEvent_40;

#line 285 "trace_params.m"
                  {
#line 285 "trace_params.m"
                    hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__ProcHasUserEvent_40);
                  }
#line 289 "trace_params.m"
#line 289 "trace_params.m"
                  switch (libs__trace_params__ProcHasUserEvent_40) {
#line 289 "trace_params.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 289 "trace_params.m"
                    case (MR_Integer) 1:
#line 290 "trace_params.m"
                      {
#line 290 "trace_params.m"
                        MR_Word libs__trace_params__ModuleHasUserEvent_41;

#line 291 "trace_params.m"
                        {
#line 291 "trace_params.m"
                          hlds__hlds_module__module_info_get_has_user_event_2_p_0(libs__trace_params__ModuleInfo_6, &libs__trace_params__ModuleHasUserEvent_41);
                        }
#line 295 "trace_params.m"
#line 295 "trace_params.m"
                        switch (libs__trace_params__ModuleHasUserEvent_41) {
#line 295 "trace_params.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 295 "trace_params.m"
                          case (MR_Integer) 1:
#line 297 "trace_params.m"
                            libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
#line 295 "trace_params.m"
                            break;
#line 295 "trace_params.m"
                          case (MR_Integer) 0:
#line 294 "trace_params.m"
                            libs__trace_params__EffTraceLevel_10 = (MR_Integer) 1;
#line 295 "trace_params.m"
                            break;
#line 295 "trace_params.m"
                        }
#line 290 "trace_params.m"
                      }
#line 289 "trace_params.m"
                      break;
#line 289 "trace_params.m"
                    case (MR_Integer) 0:
#line 288 "trace_params.m"
                      libs__trace_params__EffTraceLevel_10 = (MR_Integer) 2;
#line 289 "trace_params.m"
                      break;
#line 289 "trace_params.m"
                  }
#line 285 "trace_params.m"
                }
#line 300 "trace_params.m"
              else
#line 301 "trace_params.m"
                libs__trace_params__EffTraceLevel_10 = libs__trace_params__TraceLevel_9;
#line 278 "trace_params.m"
            }
#line 243 "trace_params.m"
            break;
#line 243 "trace_params.m"
          case (MR_Integer) 3:
#line 243 "trace_params.m"
#line 243 "trace_params.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__trace_params__Origin_11, (MR_Integer) 0)))) {
#line 243 "trace_params.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 243 "trace_params.m"
              case (MR_Integer) 0:
#line 244 "trace_params.m"
                {
#line 244 "trace_params.m"
                  MR_Word libs__trace_params__PredCreation_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__trace_params__Origin_11, (MR_Integer) 1)));

#line 254 "trace_params.m"
#line 254 "trace_params.m"
                  switch (libs__trace_params__PredCreation_14) {
#line 254 "trace_params.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 254 "trace_params.m"
                    case (MR_Integer) 0:
#line 278 "trace_params.m"
                      {
#line 278 "trace_params.m"
                        MR_Word libs__trace_params__PredStatus_50;
#line 281 "trace_params.m"
                        MR_Word libs__trace_params__V_53_53;
#line 281 "trace_params.m"
                        MR_Word libs__trace_params__V_54_54;
#line 281 "trace_params.m"
                        MR_Word libs__trace_params__V_55_55;

#line 279 "trace_params.m"
                        {
#line 279 "trace_params.m"
                          hlds__hlds_pred__pred_info_get_status_2_p_0(libs__trace_params__PredInfo_7, &libs__trace_params__PredStatus_50);
                        }
#line 281 "trace_params.m"
                        libs__trace_params__succeeded = (libs__trace_params__TraceLevel_9 == (MR_Integer) 3);
#line 281 "trace_params.m"
                        if (libs__trace_params__succeeded)
#line 281 "trace_params.m"
                          {
#line 282 "trace_params.m"
                            {
#line 282 "trace_params.m"
                              libs__trace_params__V_53_53 = hlds__status__pred_status_is_exported_1_f_0(libs__trace_params__PredStatus_50);
                            }
#line 282 "trace_params.m"
                            libs__trace_params__succeeded = (libs__trace_params__V_53_53 == (MR_Integer) 0);
#line 281 "trace_params.m"
                            if (libs__trace_params__succeeded)
#line 281 "trace_params.m"
                              {
#line 283 "trace_params.m"
                                libs__trace_params__V_54_54 = (MR_Integer) 1;
#line 283 "trace_params.m"
                                {
#line 283 "trace_params.m"
                                  hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__V_55_55);
                                }
#line 283 "trace_params.m"
                                libs__trace_params__succeeded = (libs__trace_params__V_54_54 == libs__trace_params__V_55_55);
#line 281 "trace_params.m"
                              }
#line 281 "trace_params.m"
                          }
#line 300 "trace_params.m"
                        if (libs__trace_params__succeeded)
#line 285 "trace_params.m"
                          {
#line 285 "trace_params.m"
                            MR_Word libs__trace_params__ProcHasUserEvent_51;

#line 285 "trace_params.m"
                            {
#line 285 "trace_params.m"
                              hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__ProcHasUserEvent_51);
                            }
#line 289 "trace_params.m"
#line 289 "trace_params.m"
                            switch (libs__trace_params__ProcHasUserEvent_51) {
#line 289 "trace_params.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 289 "trace_params.m"
                              case (MR_Integer) 1:
#line 290 "trace_params.m"
                                {
#line 290 "trace_params.m"
                                  MR_Word libs__trace_params__ModuleHasUserEvent_52;

#line 291 "trace_params.m"
                                  {
#line 291 "trace_params.m"
                                    hlds__hlds_module__module_info_get_has_user_event_2_p_0(libs__trace_params__ModuleInfo_6, &libs__trace_params__ModuleHasUserEvent_52);
                                  }
#line 295 "trace_params.m"
#line 295 "trace_params.m"
                                  switch (libs__trace_params__ModuleHasUserEvent_52) {
#line 295 "trace_params.m"
                                    default: /*NOTREACHED*/ MR_assert(0);
#line 295 "trace_params.m"
                                    case (MR_Integer) 1:
#line 297 "trace_params.m"
                                      libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
#line 295 "trace_params.m"
                                      break;
#line 295 "trace_params.m"
                                    case (MR_Integer) 0:
#line 294 "trace_params.m"
                                      libs__trace_params__EffTraceLevel_10 = (MR_Integer) 1;
#line 295 "trace_params.m"
                                      break;
#line 295 "trace_params.m"
                                  }
#line 290 "trace_params.m"
                                }
#line 289 "trace_params.m"
                                break;
#line 289 "trace_params.m"
                              case (MR_Integer) 0:
#line 288 "trace_params.m"
                                libs__trace_params__EffTraceLevel_10 = (MR_Integer) 2;
#line 289 "trace_params.m"
                                break;
#line 289 "trace_params.m"
                            }
#line 285 "trace_params.m"
                          }
#line 300 "trace_params.m"
                        else
#line 301 "trace_params.m"
                          libs__trace_params__EffTraceLevel_10 = libs__trace_params__TraceLevel_9;
#line 278 "trace_params.m"
                      }
#line 254 "trace_params.m"
                      break;
#line 254 "trace_params.m"
                    case (MR_Integer) 1:
#line 253 "trace_params.m"
                      libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
#line 254 "trace_params.m"
                      break;
#line 254 "trace_params.m"
                  }
#line 244 "trace_params.m"
                }
#line 243 "trace_params.m"
                break;
#line 243 "trace_params.m"
              case (MR_Integer) 1:
#line 243 "trace_params.m"
              case (MR_Integer) 2:
#line 243 "trace_params.m"
              case (MR_Integer) 3:
#line 243 "trace_params.m"
              case (MR_Integer) 4:
#line 243 "trace_params.m"
              case (MR_Integer) 5:
#line 243 "trace_params.m"
              case (MR_Integer) 6:
#line 278 "trace_params.m"
                {
#line 278 "trace_params.m"
                  MR_Word libs__trace_params__PredStatus_39;
#line 281 "trace_params.m"
                  MR_Word libs__trace_params__V_42_42;
#line 281 "trace_params.m"
                  MR_Word libs__trace_params__V_43_43;
#line 281 "trace_params.m"
                  MR_Word libs__trace_params__V_44_44;

#line 279 "trace_params.m"
                  {
#line 279 "trace_params.m"
                    hlds__hlds_pred__pred_info_get_status_2_p_0(libs__trace_params__PredInfo_7, &libs__trace_params__PredStatus_39);
                  }
#line 281 "trace_params.m"
                  libs__trace_params__succeeded = (libs__trace_params__TraceLevel_9 == (MR_Integer) 3);
#line 281 "trace_params.m"
                  if (libs__trace_params__succeeded)
#line 281 "trace_params.m"
                    {
#line 282 "trace_params.m"
                      {
#line 282 "trace_params.m"
                        libs__trace_params__V_42_42 = hlds__status__pred_status_is_exported_1_f_0(libs__trace_params__PredStatus_39);
                      }
#line 282 "trace_params.m"
                      libs__trace_params__succeeded = (libs__trace_params__V_42_42 == (MR_Integer) 0);
#line 281 "trace_params.m"
                      if (libs__trace_params__succeeded)
#line 281 "trace_params.m"
                        {
#line 283 "trace_params.m"
                          libs__trace_params__V_43_43 = (MR_Integer) 1;
#line 283 "trace_params.m"
                          {
#line 283 "trace_params.m"
                            hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__V_44_44);
                          }
#line 283 "trace_params.m"
                          libs__trace_params__succeeded = (libs__trace_params__V_43_43 == libs__trace_params__V_44_44);
#line 281 "trace_params.m"
                        }
#line 281 "trace_params.m"
                    }
#line 300 "trace_params.m"
                  if (libs__trace_params__succeeded)
#line 285 "trace_params.m"
                    {
#line 285 "trace_params.m"
                      MR_Word libs__trace_params__ProcHasUserEvent_40;

#line 285 "trace_params.m"
                      {
#line 285 "trace_params.m"
                        hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__ProcHasUserEvent_40);
                      }
#line 289 "trace_params.m"
#line 289 "trace_params.m"
                      switch (libs__trace_params__ProcHasUserEvent_40) {
#line 289 "trace_params.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 289 "trace_params.m"
                        case (MR_Integer) 1:
#line 290 "trace_params.m"
                          {
#line 290 "trace_params.m"
                            MR_Word libs__trace_params__ModuleHasUserEvent_41;

#line 291 "trace_params.m"
                            {
#line 291 "trace_params.m"
                              hlds__hlds_module__module_info_get_has_user_event_2_p_0(libs__trace_params__ModuleInfo_6, &libs__trace_params__ModuleHasUserEvent_41);
                            }
#line 295 "trace_params.m"
#line 295 "trace_params.m"
                            switch (libs__trace_params__ModuleHasUserEvent_41) {
#line 295 "trace_params.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 295 "trace_params.m"
                              case (MR_Integer) 1:
#line 297 "trace_params.m"
                                libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
#line 295 "trace_params.m"
                                break;
#line 295 "trace_params.m"
                              case (MR_Integer) 0:
#line 294 "trace_params.m"
                                libs__trace_params__EffTraceLevel_10 = (MR_Integer) 1;
#line 295 "trace_params.m"
                                break;
#line 295 "trace_params.m"
                            }
#line 290 "trace_params.m"
                          }
#line 289 "trace_params.m"
                          break;
#line 289 "trace_params.m"
                        case (MR_Integer) 0:
#line 288 "trace_params.m"
                          libs__trace_params__EffTraceLevel_10 = (MR_Integer) 2;
#line 289 "trace_params.m"
                          break;
#line 289 "trace_params.m"
                      }
#line 285 "trace_params.m"
                    }
#line 300 "trace_params.m"
                  else
#line 301 "trace_params.m"
                    libs__trace_params__EffTraceLevel_10 = libs__trace_params__TraceLevel_9;
#line 278 "trace_params.m"
                }
#line 243 "trace_params.m"
                break;
#line 243 "trace_params.m"
            }
#line 243 "trace_params.m"
            break;
#line 243 "trace_params.m"
        }
#line 216 "trace_params.m"
      }
#line 215 "trace_params.m"
    return libs__trace_params__EffTraceLevel_10;
#line 215 "trace_params.m"
  }
#line 106 "trace_params.m"
}

#line 103 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__eff_trace_needs_port_6_f_0(
#line 103 "trace_params.m"
  MR_Word libs__trace_params__ModuleInfo_8,
#line 103 "trace_params.m"
  MR_Word libs__trace_params__PredInfo_9,
#line 103 "trace_params.m"
  MR_Word libs__trace_params__ProcInfo_10,
#line 103 "trace_params.m"
  MR_Word libs__trace_params__TraceLevel_11,
#line 103 "trace_params.m"
  MR_Word libs__trace_params__SuppressItems_12,
#line 103 "trace_params.m"
  MR_Word libs__trace_params__Port_13)
#line 103 "trace_params.m"
{
#line 334 "trace_params.m"
  {
#line 334 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 334 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__7_7;
#line 334 "trace_params.m"
    MR_Word libs__trace_params__V_14_14;
#line 609 "trace_params.m"
    MR_Word libs__trace_params__Category_19;
#line 609 "trace_params.m"
    MR_Word libs__trace_params__V_20_20;
#line 612 "trace_params.m"
    MR_Word libs__trace_params__TypeCtorInfo_14_24;
#line 612 "trace_params.m"
    MR_Word libs__trace_params__V_22_22;

#line 336 "trace_params.m"
    {
#line 336 "trace_params.m"
      libs__trace_params__V_14_14 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_8, libs__trace_params__PredInfo_9, libs__trace_params__ProcInfo_10, libs__trace_params__TraceLevel_11);
    }
#line 570 "trace_params.m"
    libs__trace_params__Category_19 = ((&libs__trace_params_vector_common_8[0 + libs__trace_params__Port_13]))->libs__trace_params__vector_common_type_8_0__vct_8_f_0;
#line 589 "trace_params.m"
    libs__trace_params__V_20_20 = ((&libs__trace_params_vector_common_9[0 + libs__trace_params__V_14_14]))->libs__trace_params__vector_common_type_9_0__vct_9_f_0;
#line 610 "trace_params.m"
    {
#line 610 "trace_params.m"
      libs__trace_params__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_port_category_0, ((MR_Box) (libs__trace_params__Category_19)), libs__trace_params__V_20_20);
    }
#line 609 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 609 "trace_params.m"
      {
#line 600 "trace_params.m"
        if (((MR_Integer) 30 & (((MR_Integer) 1 << libs__trace_params__V_14_14))))
#line 600 "trace_params.m"
          {
#line 600 "trace_params.m"
            libs__trace_params__succeeded = MR_TRUE;
#line 600 "trace_params.m"
          }
#line 600 "trace_params.m"
        else
#line 600 "trace_params.m"
          libs__trace_params__succeeded = MR_FALSE;
#line 612 "trace_params.m"
        if (libs__trace_params__succeeded)
#line 612 "trace_params.m"
          {
#line 3333 "libs.trace_params.c"
            libs__trace_params__TypeCtorInfo_14_24 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
#line 613 "trace_params.m"
            {
#line 613 "trace_params.m"
              libs__trace_params__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "trace_params.m"
              MR_hl_field(MR_mktag(1), libs__trace_params__V_22_22, 0) = ((MR_Box) (libs__trace_params__Port_13));
#line 613 "trace_params.m"
            }
#line 613 "trace_params.m"
            {
#line 613 "trace_params.m"
              libs__trace_params__succeeded = mercury__set__member_2_p_0(libs__trace_params__TypeCtorInfo_14_24, ((MR_Box) (libs__trace_params__V_22_22)), libs__trace_params__SuppressItems_12);
            }
#line 612 "trace_params.m"
          }
#line 611 "trace_params.m"
        libs__trace_params__succeeded = !(libs__trace_params__succeeded);
#line 609 "trace_params.m"
      }
#line 617 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 616 "trace_params.m"
      libs__trace_params__HeadVar__7_7 = (MR_Integer) 1;
#line 617 "trace_params.m"
    else
#line 618 "trace_params.m"
      libs__trace_params__HeadVar__7_7 = (MR_Integer) 0;
#line 334 "trace_params.m"
    return libs__trace_params__HeadVar__7_7;
#line 334 "trace_params.m"
  }
#line 103 "trace_params.m"
}

#line 101 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__eff_trace_needs_proc_body_reps_5_f_0(
#line 101 "trace_params.m"
  MR_Word libs__trace_params__ModuleInfo_7,
#line 101 "trace_params.m"
  MR_Word libs__trace_params__PredInfo_8,
#line 101 "trace_params.m"
  MR_Word libs__trace_params__ProcInfo_9,
#line 101 "trace_params.m"
  MR_Word libs__trace_params__TraceLevel_10,
#line 101 "trace_params.m"
  MR_Word libs__trace_params__SuppressItems_11)
#line 101 "trace_params.m"
{
#line 329 "trace_params.m"
  {
#line 329 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 329 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__6_6;
#line 329 "trace_params.m"
    MR_Word libs__trace_params__V_12_12;

#line 331 "trace_params.m"
    {
#line 331 "trace_params.m"
      libs__trace_params__V_12_12 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_7, libs__trace_params__PredInfo_8, libs__trace_params__ProcInfo_9, libs__trace_params__TraceLevel_10);
    }
#line 330 "trace_params.m"
    {
#line 330 "trace_params.m"
      return libs__trace_params__HeadVar__6_6 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(libs__trace_params__V_12_12, libs__trace_params__SuppressItems_11);
    }
#line 329 "trace_params.m"
    return libs__trace_params__HeadVar__6_6;
#line 329 "trace_params.m"
  }
#line 101 "trace_params.m"
}

#line 99 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__eff_trace_needs_all_var_names_5_f_0(
#line 99 "trace_params.m"
  MR_Word libs__trace_params__ModuleInfo_7,
#line 99 "trace_params.m"
  MR_Word libs__trace_params__PredInfo_8,
#line 99 "trace_params.m"
  MR_Word libs__trace_params__ProcInfo_9,
#line 99 "trace_params.m"
  MR_Word libs__trace_params__TraceLevel_10,
#line 99 "trace_params.m"
  MR_Word libs__trace_params__SuppressItems_11)
#line 99 "trace_params.m"
{
#line 324 "trace_params.m"
  {
#line 324 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 324 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__6_6;
#line 324 "trace_params.m"
    MR_Word libs__trace_params__V_12_12;
#line 416 "trace_params.m"
    MR_Word libs__trace_params__TypeCtorInfo_9_18;
#line 416 "trace_params.m"
    MR_Word libs__trace_params__V_17_17;

#line 326 "trace_params.m"
    {
#line 326 "trace_params.m"
      libs__trace_params__V_12_12 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_7, libs__trace_params__PredInfo_8, libs__trace_params__ProcInfo_9, libs__trace_params__TraceLevel_10);
    }
#line 3443 "libs.trace_params.c"
    libs__trace_params__succeeded = (libs__trace_params__V_12_12 == (MR_Integer) 5);
#line 415 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 415 "trace_params.m"
      {
#line 416 "trace_params.m"
        libs__trace_params__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 3451 "libs.trace_params.c"
        libs__trace_params__TypeCtorInfo_9_18 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
#line 416 "trace_params.m"
        {
#line 416 "trace_params.m"
          libs__trace_params__succeeded = mercury__set__member_2_p_0(libs__trace_params__TypeCtorInfo_9_18, ((MR_Box) (libs__trace_params__V_17_17)), libs__trace_params__SuppressItems_11);
        }
#line 416 "trace_params.m"
        libs__trace_params__succeeded = !(libs__trace_params__succeeded);
#line 415 "trace_params.m"
      }
#line 419 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 418 "trace_params.m"
      libs__trace_params__HeadVar__6_6 = (MR_Integer) 1;
#line 419 "trace_params.m"
    else
#line 420 "trace_params.m"
      libs__trace_params__HeadVar__6_6 = (MR_Integer) 0;
#line 324 "trace_params.m"
    return libs__trace_params__HeadVar__6_6;
#line 324 "trace_params.m"
  }
#line 99 "trace_params.m"
}

#line 97 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(
#line 97 "trace_params.m"
  MR_Word libs__trace_params__ModuleInfo_6,
#line 97 "trace_params.m"
  MR_Word libs__trace_params__PredInfo_7,
#line 97 "trace_params.m"
  MR_Word libs__trace_params__ProcInfo_8,
#line 97 "trace_params.m"
  MR_Word libs__trace_params__TraceLevel_9)
#line 97 "trace_params.m"
{
#line 320 "trace_params.m"
  {
#line 320 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 320 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__5_5;
#line 320 "trace_params.m"
    MR_Word libs__trace_params__V_10_10;

#line 322 "trace_params.m"
    {
#line 322 "trace_params.m"
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
#line 375 "trace_params.m"
    libs__trace_params__HeadVar__5_5 = ((&libs__trace_params_vector_common_7[48 + libs__trace_params__V_10_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
#line 320 "trace_params.m"
    return libs__trace_params__HeadVar__5_5;
#line 320 "trace_params.m"
  }
#line 97 "trace_params.m"
}

#line 95 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__eff_trace_level_needs_fixed_slots_4_f_0(
#line 95 "trace_params.m"
  MR_Word libs__trace_params__ModuleInfo_6,
#line 95 "trace_params.m"
  MR_Word libs__trace_params__PredInfo_7,
#line 95 "trace_params.m"
  MR_Word libs__trace_params__ProcInfo_8,
#line 95 "trace_params.m"
  MR_Word libs__trace_params__TraceLevel_9)
#line 95 "trace_params.m"
{
#line 316 "trace_params.m"
  {
#line 316 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 316 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__5_5;
#line 316 "trace_params.m"
    MR_Word libs__trace_params__V_10_10;

#line 318 "trace_params.m"
    {
#line 318 "trace_params.m"
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
#line 368 "trace_params.m"
    libs__trace_params__HeadVar__5_5 = ((&libs__trace_params_vector_common_7[42 + libs__trace_params__V_10_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
#line 316 "trace_params.m"
    return libs__trace_params__HeadVar__5_5;
#line 316 "trace_params.m"
  }
#line 95 "trace_params.m"
}

#line 93 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(
#line 93 "trace_params.m"
  MR_Word libs__trace_params__ModuleInfo_6,
#line 93 "trace_params.m"
  MR_Word libs__trace_params__PredInfo_7,
#line 93 "trace_params.m"
  MR_Word libs__trace_params__ProcInfo_8,
#line 93 "trace_params.m"
  MR_Word libs__trace_params__TraceLevel_9)
#line 93 "trace_params.m"
{
#line 313 "trace_params.m"
  {
#line 313 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 313 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__5_5;
#line 313 "trace_params.m"
    MR_Word libs__trace_params__V_10_10;

#line 315 "trace_params.m"
    {
#line 315 "trace_params.m"
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
#line 361 "trace_params.m"
    libs__trace_params__HeadVar__5_5 = ((&libs__trace_params_vector_common_7[36 + libs__trace_params__V_10_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
#line 313 "trace_params.m"
    return libs__trace_params__HeadVar__5_5;
#line 313 "trace_params.m"
  }
#line 93 "trace_params.m"
}

#line 91 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__eff_trace_level_needs_input_vars_4_f_0(
#line 91 "trace_params.m"
  MR_Word libs__trace_params__ModuleInfo_6,
#line 91 "trace_params.m"
  MR_Word libs__trace_params__PredInfo_7,
#line 91 "trace_params.m"
  MR_Word libs__trace_params__ProcInfo_8,
#line 91 "trace_params.m"
  MR_Word libs__trace_params__TraceLevel_9)
#line 91 "trace_params.m"
{
#line 310 "trace_params.m"
  {
#line 310 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 310 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__5_5;
#line 310 "trace_params.m"
    MR_Word libs__trace_params__V_10_10;

#line 312 "trace_params.m"
    {
#line 312 "trace_params.m"
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
#line 354 "trace_params.m"
    libs__trace_params__HeadVar__5_5 = ((&libs__trace_params_vector_common_7[30 + libs__trace_params__V_10_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
#line 310 "trace_params.m"
    return libs__trace_params__HeadVar__5_5;
#line 310 "trace_params.m"
  }
#line 91 "trace_params.m"
}

#line 89 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__eff_trace_level_is_none_4_f_0(
#line 89 "trace_params.m"
  MR_Word libs__trace_params__ModuleInfo_6,
#line 89 "trace_params.m"
  MR_Word libs__trace_params__PredInfo_7,
#line 89 "trace_params.m"
  MR_Word libs__trace_params__ProcInfo_8,
#line 89 "trace_params.m"
  MR_Word libs__trace_params__TraceLevel_9)
#line 89 "trace_params.m"
{
#line 307 "trace_params.m"
  {
#line 307 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 307 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__5_5;
#line 307 "trace_params.m"
    MR_Word libs__trace_params__V_10_10;

#line 309 "trace_params.m"
    {
#line 309 "trace_params.m"
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
#line 347 "trace_params.m"
    libs__trace_params__HeadVar__5_5 = ((&libs__trace_params_vector_common_7[24 + libs__trace_params__V_10_10]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;
#line 307 "trace_params.m"
    return libs__trace_params__HeadVar__5_5;
#line 307 "trace_params.m"
  }
#line 89 "trace_params.m"
}

#line 84 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__trace_needs_proc_body_reps_2_f_0(
#line 84 "trace_params.m"
  MR_Word libs__trace_params__TraceLevel_4,
#line 84 "trace_params.m"
  MR_Word libs__trace_params__TraceSuppressItems_5)
#line 84 "trace_params.m"
{
#line 429 "trace_params.m"
  {
#line 429 "trace_params.m"
    MR_bool libs__trace_params__succeeded = (libs__trace_params__TraceLevel_4 == (MR_Integer) 5);
#line 429 "trace_params.m"
    MR_Word libs__trace_params__Need_6;
#line 426 "trace_params.m"
    MR_Word libs__trace_params__TypeCtorInfo_9_9;
#line 426 "trace_params.m"
    MR_Word libs__trace_params__V_8_8;

#line 425 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 425 "trace_params.m"
      {
#line 426 "trace_params.m"
        libs__trace_params__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 3683 "libs.trace_params.c"
        libs__trace_params__TypeCtorInfo_9_9 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
#line 426 "trace_params.m"
        {
#line 426 "trace_params.m"
          libs__trace_params__succeeded = mercury__set__member_2_p_0(libs__trace_params__TypeCtorInfo_9_9, ((MR_Box) (libs__trace_params__V_8_8)), libs__trace_params__TraceSuppressItems_5);
        }
#line 426 "trace_params.m"
        libs__trace_params__succeeded = !(libs__trace_params__succeeded);
#line 425 "trace_params.m"
      }
#line 429 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 428 "trace_params.m"
      libs__trace_params__Need_6 = (MR_Integer) 1;
#line 429 "trace_params.m"
    else
#line 430 "trace_params.m"
      libs__trace_params__Need_6 = (MR_Integer) 0;
#line 429 "trace_params.m"
    return libs__trace_params__Need_6;
#line 429 "trace_params.m"
  }
#line 84 "trace_params.m"
}

#line 80 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__trace_level_needs_meaningful_var_names_1_f_0(
#line 80 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__1_1)
#line 80 "trace_params.m"
{
#line 389 "trace_params.m"
  {
#line 389 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 389 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_7[18 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

#line 389 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 389 "trace_params.m"
  }
#line 80 "trace_params.m"
}

#line 75 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__trace_level_allows_tail_rec_1_f_0(
#line 75 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__1_1)
#line 75 "trace_params.m"
{
#line 396 "trace_params.m"
  {
#line 396 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 396 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_7[12 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

#line 396 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 396 "trace_params.m"
  }
#line 75 "trace_params.m"
}

#line 74 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__trace_needs_return_info_2_f_0(
#line 74 "trace_params.m"
  MR_Word libs__trace_params__TraceLevel_4,
#line 74 "trace_params.m"
  MR_Word libs__trace_params__TraceSuppressItems_5)
#line 74 "trace_params.m"
{
#line 409 "trace_params.m"
  {
#line 409 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 409 "trace_params.m"
    MR_Word libs__trace_params__Need_6;
#line 406 "trace_params.m"
    MR_Word libs__trace_params__TypeCtorInfo_9_9;
#line 406 "trace_params.m"
    MR_Word libs__trace_params__V_8_8;

#line 437 "trace_params.m"
    if (((MR_Integer) 62 & (((MR_Integer) 1 << libs__trace_params__TraceLevel_4))))
#line 437 "trace_params.m"
      {
#line 437 "trace_params.m"
        libs__trace_params__succeeded = MR_TRUE;
#line 437 "trace_params.m"
      }
#line 437 "trace_params.m"
    else
#line 437 "trace_params.m"
      libs__trace_params__succeeded = MR_FALSE;
#line 405 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 405 "trace_params.m"
      {
#line 406 "trace_params.m"
        libs__trace_params__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3789 "libs.trace_params.c"
        libs__trace_params__TypeCtorInfo_9_9 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
#line 406 "trace_params.m"
        {
#line 406 "trace_params.m"
          libs__trace_params__succeeded = mercury__set__member_2_p_0(libs__trace_params__TypeCtorInfo_9_9, ((MR_Box) (libs__trace_params__V_8_8)), libs__trace_params__TraceSuppressItems_5);
        }
#line 406 "trace_params.m"
        libs__trace_params__succeeded = !(libs__trace_params__succeeded);
#line 405 "trace_params.m"
      }
#line 409 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 408 "trace_params.m"
      libs__trace_params__Need_6 = (MR_Integer) 1;
#line 409 "trace_params.m"
    else
#line 410 "trace_params.m"
      libs__trace_params__Need_6 = (MR_Integer) 0;
#line 409 "trace_params.m"
    return libs__trace_params__Need_6;
#line 409 "trace_params.m"
  }
#line 74 "trace_params.m"
}

#line 73 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__trace_level_allows_delay_death_1_f_0(
#line 73 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__1_1)
#line 73 "trace_params.m"
{
#line 382 "trace_params.m"
  {
#line 382 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 382 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_7[6 + libs__trace_params__HeadVar__1_1]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

#line 382 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 382 "trace_params.m"
  }
#line 73 "trace_params.m"
}

#line 72 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__given_trace_level_is_none_1_f_0(
#line 72 "trace_params.m"
  MR_Word libs__trace_params__TraceLevel_3)
#line 72 "trace_params.m"
{
#line 347 "trace_params.m"
  {
#line 347 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 347 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2 = ((&libs__trace_params_vector_common_7[0 + libs__trace_params__TraceLevel_3]))->libs__trace_params__vector_common_type_7_0__vct_7_f_0;

#line 347 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 347 "trace_params.m"
  }
#line 72 "trace_params.m"
}

#line 68 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__default_trace_suppress_0_f_0(void)
#line 68 "trace_params.m"
{
#line 468 "trace_params.m"
  {
#line 468 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 468 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__1_1;

#line 468 "trace_params.m"
    {
#line 468 "trace_params.m"
      libs__trace_params__HeadVar__1_1 = mercury__set__init_0_f_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0);
    }
#line 468 "trace_params.m"
    return libs__trace_params__HeadVar__1_1;
#line 468 "trace_params.m"
  }
#line 68 "trace_params.m"
}

#line 460 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_2(
#line 460 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 460 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 460 "trace_params.m"
  MR_Box * libs__trace_params__wrapper_arg_2)
#line 460 "trace_params.m"
{
#line 460 "trace_params.m"
  {
#line 460 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 460 "trace_params.m"
    MR_Box libs__trace_params__closure = libs__trace_params__closure_arg;
#line 460 "trace_params.m"
    MR_Word libs__trace_params__conv0_Names_4;

#line 460 "trace_params.m"
    {
#line 460 "trace_params.m"
      libs__trace_params__succeeded = libs__trace_params__convert_item_name_2_p_0(((MR_String) libs__trace_params__wrapper_arg_1), &libs__trace_params__conv0_Names_4);
    }
#line 460 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 460 "trace_params.m"
      {
#line 460 "trace_params.m"
        *libs__trace_params__wrapper_arg_2 = ((MR_Box) (libs__trace_params__conv0_Names_4));
#line 460 "trace_params.m"
        libs__trace_params__succeeded = MR_TRUE;
#line 460 "trace_params.m"
      }
#line 460 "trace_params.m"
    return libs__trace_params__succeeded;
#line 460 "trace_params.m"
  }
#line 460 "trace_params.m"
}

#line 459 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_1(
#line 459 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 459 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1)
#line 459 "trace_params.m"
{
#line 459 "trace_params.m"
  {
#line 459 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 459 "trace_params.m"
    MR_Box libs__trace_params__closure = libs__trace_params__closure_arg;

#line 459 "trace_params.m"
    {
#line 459 "trace_params.m"
      return libs__trace_params__succeeded = libs__trace_params__char_is_comma_1_p_0(((MR_Char) (MR_Word) libs__trace_params__wrapper_arg_1));
    }
#line 459 "trace_params.m"
    return libs__trace_params__succeeded;
#line 459 "trace_params.m"
  }
#line 459 "trace_params.m"
}

#line 66 "trace_params.m"
MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0(
#line 66 "trace_params.m"
  MR_String libs__trace_params__SuppressString_3,
#line 66 "trace_params.m"
  MR_Word * libs__trace_params__SuppressItemSet_4)
#line 66 "trace_params.m"
{
#line 458 "trace_params.m"
  {
#line 458 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 458 "trace_params.m"
    MR_Word libs__trace_params__TypeCtorInfo_15_15;
#line 458 "trace_params.m"
    MR_Word libs__trace_params__SuppressWords_5;
#line 458 "trace_params.m"
    MR_Word libs__trace_params__SuppressItemLists_6;
#line 458 "trace_params.m"
    MR_Word libs__trace_params__SuppressItems_7;

#line 459 "trace_params.m"
    {
#line 459 "trace_params.m"
      libs__trace_params__SuppressWords_5 = mercury__string__words_separator_2_f_0((MR_Word) &libs__trace_params_scalar_common_5[0], libs__trace_params__SuppressString_3);
    }
#line 460 "trace_params.m"
    {
#line 460 "trace_params.m"
      libs__trace_params__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__trace_params_scalar_common_1[0], (MR_Word) &libs__trace_params_scalar_common_5[1], libs__trace_params__SuppressWords_5, &libs__trace_params__SuppressItemLists_6);
    }
#line 458 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 458 "trace_params.m"
      {
#line 3987 "libs.trace_params.c"
        libs__trace_params__TypeCtorInfo_15_15 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
#line 461 "trace_params.m"
        {
#line 461 "trace_params.m"
          mercury__list__condense_2_p_0(libs__trace_params__TypeCtorInfo_15_15, libs__trace_params__SuppressItemLists_6, &libs__trace_params__SuppressItems_7);
        }
#line 462 "trace_params.m"
        {
#line 462 "trace_params.m"
          mercury__set__list_to_set_2_p_0(libs__trace_params__TypeCtorInfo_15_15, libs__trace_params__SuppressItems_7, libs__trace_params__SuppressItemSet_4);
        }
#line 462 "trace_params.m"
        libs__trace_params__succeeded = MR_TRUE;
#line 458 "trace_params.m"
      }
#line 458 "trace_params.m"
    return libs__trace_params__succeeded;
#line 458 "trace_params.m"
  }
#line 66 "trace_params.m"
}

#line 63 "trace_params.m"
MR_bool MR_CALL 
libs__trace_params__convert_trace_level_4_p_0(
#line 63 "trace_params.m"
  MR_String libs__trace_params__HeadVar__1_1,
#line 63 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2,
#line 63 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__3_3,
#line 63 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__4_4)
#line 63 "trace_params.m"
{
#line 199 "trace_params.m"
  {
#line 199 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 199 "trace_params.m"
    MR_Integer libs__trace_params__lo_0;
#line 199 "trace_params.m"
    MR_Integer libs__trace_params__hi_1;
#line 199 "trace_params.m"
    MR_Integer libs__trace_params__mid_2;
#line 199 "trace_params.m"
    MR_Integer libs__trace_params__result_3;

#line 199 "trace_params.m"
    /* binary string jump switch */
#line 199 "trace_params.m"
    libs__trace_params__lo_0 = (MR_Integer) 0;
#line 199 "trace_params.m"
    libs__trace_params__hi_1 = (MR_Integer) 5;
#line 199 "trace_params.m"
    do
#line 199 "trace_params.m"
      {
#line 199 "trace_params.m"
        libs__trace_params__mid_2 = (((libs__trace_params__lo_0 + libs__trace_params__hi_1)) / (MR_Integer) 2);
#line 199 "trace_params.m"
        libs__trace_params__result_3 = MR_strcmp(libs__trace_params__HeadVar__1_1, ((&libs__trace_params_vector_common_2[0 + libs__trace_params__mid_2]))->libs__trace_params__vector_common_type_2_0__vct_2_f_0);
#line 199 "trace_params.m"
        if ((libs__trace_params__result_3 == (MR_Integer) 0))
#line 199 "trace_params.m"
          {
#line 199 "trace_params.m"
#line 199 "trace_params.m"
            switch (((&libs__trace_params_vector_common_2[0 + libs__trace_params__mid_2]))->libs__trace_params__vector_common_type_2_0__vct_2_f_1) {
#line 199 "trace_params.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 199 "trace_params.m"
              case (MR_Integer) 0:
#line 206 "trace_params.m"
                {
#line 206 "trace_params.m"
                  /* case "decl" */
#line 206 "trace_params.m"
                  *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[1]);
#line 206 "trace_params.m"
                  libs__trace_params__succeeded = MR_TRUE;
#line 206 "trace_params.m"
                }
#line 199 "trace_params.m"
                break;
#line 199 "trace_params.m"
              case (MR_Integer) 1:
#line 199 "trace_params.m"
                {
#line 199 "trace_params.m"
                  /* case "deep" */
#line 199 "trace_params.m"
#line 199 "trace_params.m"
                  switch (libs__trace_params__HeadVar__3_3) {
#line 199 "trace_params.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 199 "trace_params.m"
                    case (MR_Integer) 0:
#line 204 "trace_params.m"
                      {
#line 204 "trace_params.m"
                        *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[3]);
#line 204 "trace_params.m"
                      }
#line 199 "trace_params.m"
                      break;
#line 199 "trace_params.m"
                    case (MR_Integer) 1:
#line 205 "trace_params.m"
                      *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 199 "trace_params.m"
                      break;
#line 199 "trace_params.m"
                  }
#line 199 "trace_params.m"
                  libs__trace_params__succeeded = MR_TRUE;
#line 199 "trace_params.m"
                }
#line 199 "trace_params.m"
                break;
#line 199 "trace_params.m"
              case (MR_Integer) 2:
#line 199 "trace_params.m"
                {
#line 199 "trace_params.m"
                  /* case "default" */
#line 199 "trace_params.m"
#line 199 "trace_params.m"
                  switch (libs__trace_params__HeadVar__3_3) {
#line 199 "trace_params.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 199 "trace_params.m"
                    case (MR_Integer) 0:
#line 199 "trace_params.m"
#line 199 "trace_params.m"
                      switch (libs__trace_params__HeadVar__2_2) {
#line 199 "trace_params.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 199 "trace_params.m"
                        case (MR_Integer) 0:
#line 208 "trace_params.m"
                          {
#line 208 "trace_params.m"
                            *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[2]);
#line 208 "trace_params.m"
                          }
#line 199 "trace_params.m"
                          break;
#line 199 "trace_params.m"
                        case (MR_Integer) 1:
#line 209 "trace_params.m"
                          {
#line 209 "trace_params.m"
                            *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[3]);
#line 209 "trace_params.m"
                          }
#line 199 "trace_params.m"
                          break;
#line 199 "trace_params.m"
                      }
#line 199 "trace_params.m"
                      break;
#line 199 "trace_params.m"
                    case (MR_Integer) 1:
#line 210 "trace_params.m"
                      {
#line 210 "trace_params.m"
                        *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[1]);
#line 210 "trace_params.m"
                      }
#line 199 "trace_params.m"
                      break;
#line 199 "trace_params.m"
                  }
#line 199 "trace_params.m"
                  libs__trace_params__succeeded = MR_TRUE;
#line 199 "trace_params.m"
                }
#line 199 "trace_params.m"
                break;
#line 199 "trace_params.m"
              case (MR_Integer) 3:
#line 199 "trace_params.m"
                {
#line 199 "trace_params.m"
                  /* case "minimum" */
#line 199 "trace_params.m"
#line 199 "trace_params.m"
                  switch (libs__trace_params__HeadVar__3_3) {
#line 199 "trace_params.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 199 "trace_params.m"
                    case (MR_Integer) 0:
#line 199 "trace_params.m"
#line 199 "trace_params.m"
                      switch (libs__trace_params__HeadVar__2_2) {
#line 199 "trace_params.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 199 "trace_params.m"
                        case (MR_Integer) 0:
#line 199 "trace_params.m"
                          {
#line 199 "trace_params.m"
                            *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[2]);
#line 199 "trace_params.m"
                          }
#line 199 "trace_params.m"
                          break;
#line 199 "trace_params.m"
                        case (MR_Integer) 1:
#line 200 "trace_params.m"
                          {
#line 200 "trace_params.m"
                            *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[0]);
#line 200 "trace_params.m"
                          }
#line 199 "trace_params.m"
                          break;
#line 199 "trace_params.m"
                      }
#line 199 "trace_params.m"
                      break;
#line 199 "trace_params.m"
                    case (MR_Integer) 1:
#line 201 "trace_params.m"
                      {
#line 201 "trace_params.m"
                        *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[1]);
#line 201 "trace_params.m"
                      }
#line 199 "trace_params.m"
                      break;
#line 199 "trace_params.m"
                  }
#line 199 "trace_params.m"
                  libs__trace_params__succeeded = MR_TRUE;
#line 199 "trace_params.m"
                }
#line 199 "trace_params.m"
                break;
#line 199 "trace_params.m"
              case (MR_Integer) 4:
#line 207 "trace_params.m"
                {
#line 207 "trace_params.m"
                  /* case "rep" */
#line 207 "trace_params.m"
                  *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[1]);
#line 207 "trace_params.m"
                  libs__trace_params__succeeded = MR_TRUE;
#line 207 "trace_params.m"
                }
#line 199 "trace_params.m"
                break;
#line 199 "trace_params.m"
              case (MR_Integer) 5:
#line 199 "trace_params.m"
                {
#line 199 "trace_params.m"
                  /* case "shallow" */
#line 199 "trace_params.m"
#line 199 "trace_params.m"
                  switch (libs__trace_params__HeadVar__3_3) {
#line 199 "trace_params.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 199 "trace_params.m"
                    case (MR_Integer) 0:
#line 202 "trace_params.m"
                      {
#line 202 "trace_params.m"
                        *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_3[0]);
#line 202 "trace_params.m"
                      }
#line 199 "trace_params.m"
                      break;
#line 199 "trace_params.m"
                    case (MR_Integer) 1:
#line 203 "trace_params.m"
                      *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 199 "trace_params.m"
                      break;
#line 199 "trace_params.m"
                  }
#line 199 "trace_params.m"
                  libs__trace_params__succeeded = MR_TRUE;
#line 199 "trace_params.m"
                }
#line 199 "trace_params.m"
                break;
#line 199 "trace_params.m"
            }
#line 199 "trace_params.m"
            /* jump out of search loop */
#line 199 "trace_params.m"
            goto label_0;
#line 199 "trace_params.m"
          }
#line 199 "trace_params.m"
        else
#line 199 "trace_params.m"
        if ((libs__trace_params__result_3 < (MR_Integer) 0))
#line 199 "trace_params.m"
          libs__trace_params__hi_1 = (libs__trace_params__mid_2 - (MR_Integer) 1);
#line 199 "trace_params.m"
        else
#line 199 "trace_params.m"
          libs__trace_params__lo_0 = (libs__trace_params__mid_2 + (MR_Integer) 1);
#line 199 "trace_params.m"
      }
#line 199 "trace_params.m"
    while ((libs__trace_params__lo_0 <= libs__trace_params__hi_1));
#line 199 "trace_params.m"
    libs__trace_params__succeeded = MR_FALSE;
#line 199 "trace_params.m"
  label_0:;
#line 199 "trace_params.m"
    return libs__trace_params__succeeded;
#line 199 "trace_params.m"
  }
#line 63 "trace_params.m"
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
