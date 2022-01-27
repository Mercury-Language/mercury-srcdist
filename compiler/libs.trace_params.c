/*
** Automatically generated from `trace_params.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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
#include "cord.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 132 "libs.trace_params.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__trace_params__list__pti_list_1__plain_libs__trace_params__type_ctor_info_trace_suppress_item_0;

#line 135 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0;

#line 138 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1;

#line 141 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2;

#line 144 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3;

#line 147 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_value_ordered_port_category_0[4];

#line 150 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_name_ordered_port_category_0[4];

#line 153 "libs.trace_params.c"
static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_port_category_0[4];

#line 156 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0;

#line 159 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1;

#line 162 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2;

#line 165 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3;

#line 168 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4;

#line 171 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5;

#line 174 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_value_ordered_trace_level_0[6];

#line 177 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_name_ordered_trace_level_0[6];

#line 180 "libs.trace_params.c"
static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_trace_level_0[6];

#line 183 "libs.trace_params.c"
static const MR_PseudoTypeInfo libs__trace_params__libs__trace_params__field_types_trace_suppress_item_0_0[1];

#line 186 "libs.trace_params.c"
static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_0;

#line 189 "libs.trace_params.c"
static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_1;

#line 192 "libs.trace_params.c"
static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_2;

#line 195 "libs.trace_params.c"
static const MR_DuFunctorDesc libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_3;

#line 198 "libs.trace_params.c"
static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_0[3];

#line 201 "libs.trace_params.c"
static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_1[1];

#line 204 "libs.trace_params.c"
static const MR_DuPtagLayout libs__trace_params__libs__trace_params__du_ptag_ordered_trace_suppress_item_0[2];

#line 207 "libs.trace_params.c"
static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_name_ordered_trace_suppress_item_0[4];

#line 210 "libs.trace_params.c"
static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_trace_suppress_item_0[4];

#line 213 "libs.trace_params.c"
static const MR_FA_TypeInfo_Struct1 libs__trace_params__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

#line 216 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0_10001(
#line 219 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 221 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2);

#line 224 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____port_category_0_0_10001(
#line 227 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 229 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 231 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3);

#line 234 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____trace_level_0_0_10001(
#line 237 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 239 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2);

#line 242 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____trace_level_0_0_10001(
#line 245 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 247 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 249 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3);

#line 252 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_item_0_0_10001(
#line 255 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 257 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2);

#line 260 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____trace_suppress_item_0_0_10001(
#line 263 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 265 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 267 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3);

#line 270 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_items_0_0_10001(
#line 273 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 275 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2);

#line 278 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____trace_suppress_items_0_0_10001(
#line 281 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 283 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 285 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3);

#line 553 "trace_params.m"
static void MR_CALL 
libs__trace_params____Compare____port_category_0_0(
#line 553 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__1_1,
#line 553 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2,
#line 553 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__3_3);

#line 553 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0(
#line 553 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_1,
#line 553 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2);

#line 627 "trace_params.m"
static void MR_CALL 
libs__trace_params__maybe_add_suppressed_event_3_p_0(
#line 627 "trace_params.m"
  MR_Word libs__trace_params__SuppressItem_4,
#line 627 "trace_params.m"
  MR_Integer libs__trace_params__SuppressedEventsInt0_5,
#line 627 "trace_params.m"
  MR_Integer * libs__trace_params__SuppressedEventsInt_6);

#line 538 "trace_params.m"
static void MR_CALL 
libs__trace_params__wrap_port_2_p_0(
#line 538 "trace_params.m"
  MR_Word libs__trace_params__Port_3,
#line 538 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__2_2);

#line 531 "trace_params.m"
static void MR_CALL 
libs__trace_params__convert_item_name_2_p_0_1(
#line 531 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 531 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 531 "trace_params.m"
  MR_Box * libs__trace_params__wrapper_arg_2);

#line 524 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__convert_item_name_2_p_0(
#line 524 "trace_params.m"
  MR_String libs__trace_params__String_3,
#line 524 "trace_params.m"
  MR_Word * libs__trace_params__Names_4);

#line 466 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__char_is_comma_1_p_0(
#line 466 "trace_params.m"
  MR_Char libs__trace_params__HeadVar__1_1);

#line 624 "trace_params.m"
static void MR_CALL 
libs__trace_params__encode_suppressed_events_1_f_0_1(
#line 624 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 624 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 624 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 624 "trace_params.m"
  MR_Box * libs__trace_params__wrapper_arg_3);

#line 462 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_2(
#line 462 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 462 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 462 "trace_params.m"
  MR_Box * libs__trace_params__wrapper_arg_2);

#line 461 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_1(
#line 461 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 461 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1);


static /* final */ const MR_Box libs__trace_params_scalar_common_1[21][2];

static /* final */ const MR_Box libs__trace_params_scalar_common_2[4][1];

static /* final */ const MR_Box libs__trace_params_scalar_common_3[1][4];

static /* final */ const MR_Box libs__trace_params_scalar_common_4[4][3];

static /* final */ const MR_Box libs__trace_params_scalar_common_5[2][5];

static /* final */ const MR_Box libs__trace_params_scalar_common_6[1][6];




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

static /* final */ const MR_Box libs__trace_params_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
};

static /* final */ const MR_Box libs__trace_params_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box libs__trace_params_scalar_common_4[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__trace_params_scalar_common_3[0])),
    ((MR_Box) (libs__trace_params__convert_trace_suppress_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__trace_params_scalar_common_5[0])),
    ((MR_Box) (libs__trace_params__convert_trace_suppress_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__trace_params_scalar_common_6[0])),
    ((MR_Box) (libs__trace_params__encode_suppressed_events_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__trace_params_scalar_common_5[1])),
    ((MR_Box) (libs__trace_params__convert_item_name_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__trace_params_scalar_common_5[2][5] = {
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

static /* final */ const MR_Box libs__trace_params_scalar_common_6[1][6] = {
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 606 "libs.trace_params.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__trace_params__list__pti_list_1__plain_libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 614 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0 = {
  (MR_String) "port_cat_interface",
  (MR_Integer) 0
};

#line 620 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1 = {
  (MR_String) "port_cat_internal",
  (MR_Integer) 1
};

#line 626 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2 = {
  (MR_String) "port_cat_context",
  (MR_Integer) 2
};

#line 632 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3 = {
  (MR_String) "port_cat_user",
  (MR_Integer) 3
};

#line 638 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_value_ordered_port_category_0[4] = {
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3
};

#line 646 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_name_ordered_port_category_0[4] = {
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_2,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_0,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_1,
  &libs__trace_params__libs__trace_params__enum_functor_desc_port_category_0_3
};

#line 654 "libs.trace_params.c"
static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_port_category_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 662 "libs.trace_params.c"
const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_port_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__trace_params____Unify____port_category_0_0_10001)),
  ((MR_Box) (libs__trace_params____Compare____port_category_0_0_10001)),
  (MR_String) "libs.trace_params",
  (MR_String) "port_category",
  {
    libs__trace_params__libs__trace_params__enum_name_ordered_port_category_0
  },
  {
    libs__trace_params__libs__trace_params__enum_value_ordered_port_category_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__trace_params__libs__trace_params__functor_number_map_port_category_0
};

#line 683 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0
};

#line 689 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1 = {
  (MR_String) "basic",
  (MR_Integer) 1
};

#line 695 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2 = {
  (MR_String) "basic_user",
  (MR_Integer) 2
};

#line 701 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3 = {
  (MR_String) "shallow",
  (MR_Integer) 3
};

#line 707 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4 = {
  (MR_String) "deep",
  (MR_Integer) 4
};

#line 713 "libs.trace_params.c"
static const MR_EnumFunctorDesc libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5 = {
  (MR_String) "decl_rep",
  (MR_Integer) 5
};

#line 719 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_value_ordered_trace_level_0[6] = {
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5
};

#line 729 "libs.trace_params.c"
static const MR_EnumFunctorDescPtr libs__trace_params__libs__trace_params__enum_name_ordered_trace_level_0[6] = {
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_1,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_2,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_5,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_4,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_0,
  &libs__trace_params__libs__trace_params__enum_functor_desc_trace_level_0_3
};

#line 739 "libs.trace_params.c"
static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_trace_level_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 749 "libs.trace_params.c"
const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__trace_params____Unify____trace_level_0_0_10001)),
  ((MR_Box) (libs__trace_params____Compare____trace_level_0_0_10001)),
  (MR_String) "libs.trace_params",
  (MR_String) "trace_level",
  {
    libs__trace_params__libs__trace_params__enum_name_ordered_trace_level_0
  },
  {
    libs__trace_params__libs__trace_params__enum_value_ordered_trace_level_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  libs__trace_params__libs__trace_params__functor_number_map_trace_level_0
};

#line 770 "libs.trace_params.c"
static const MR_PseudoTypeInfo libs__trace_params__libs__trace_params__field_types_trace_suppress_item_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
};

#line 775 "libs.trace_params.c"
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

#line 790 "libs.trace_params.c"
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

#line 805 "libs.trace_params.c"
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

#line 820 "libs.trace_params.c"
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

#line 835 "libs.trace_params.c"
static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_0[3] = {
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_1,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_2,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_3
};

#line 842 "libs.trace_params.c"
static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_stag_ordered_trace_suppress_item_0_1[1] = {
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_0
};

#line 847 "libs.trace_params.c"
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

#line 861 "libs.trace_params.c"
static const MR_DuFunctorDescPtr libs__trace_params__libs__trace_params__du_name_ordered_trace_suppress_item_0[4] = {
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_2,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_0,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_3,
  &libs__trace_params__libs__trace_params__du_functor_desc_trace_suppress_item_0_1
};

#line 869 "libs.trace_params.c"
static const MR_Integer libs__trace_params__libs__trace_params__functor_number_map_trace_suppress_item_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 877 "libs.trace_params.c"
const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__trace_params____Unify____trace_suppress_item_0_0_10001)),
  ((MR_Box) (libs__trace_params____Compare____trace_suppress_item_0_0_10001)),
  (MR_String) "libs.trace_params",
  (MR_String) "trace_suppress_item",
  {
    libs__trace_params__libs__trace_params__du_name_ordered_trace_suppress_item_0
  },
  {
    libs__trace_params__libs__trace_params__du_ptag_ordered_trace_suppress_item_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  libs__trace_params__libs__trace_params__functor_number_map_trace_suppress_item_0
};

#line 898 "libs.trace_params.c"
static const MR_FA_TypeInfo_Struct1 libs__trace_params__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

#line 906 "libs.trace_params.c"
const MR_TypeCtorInfo_Struct libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__trace_params____Unify____trace_suppress_items_0_0_10001)),
  ((MR_Box) (libs__trace_params____Compare____trace_suppress_items_0_0_10001)),
  (MR_String) "libs.trace_params",
  (MR_String) "trace_suppress_items",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &libs__trace_params__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 927 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0_10001(
#line 930 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 932 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2)
#line 934 "libs.trace_params.c"
{
#line 936 "libs.trace_params.c"
  {
#line 938 "libs.trace_params.c"
    MR_bool libs__trace_params__succeeded;

#line 941 "libs.trace_params.c"
    {
#line 943 "libs.trace_params.c"
      libs__trace_params__succeeded = libs__trace_params____Unify____port_category_0_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Word) libs__trace_params__wrapper_arg_2));
    }
#line 946 "libs.trace_params.c"
    return libs__trace_params__succeeded;
#line 948 "libs.trace_params.c"
  }
#line 950 "libs.trace_params.c"
}

#line 953 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____port_category_0_0_10001(
#line 956 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 958 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 960 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3)
#line 962 "libs.trace_params.c"
{
#line 964 "libs.trace_params.c"
  {
#line 966 "libs.trace_params.c"
    MR_Word libs__trace_params__conv0_HeadVar__1_1;

#line 969 "libs.trace_params.c"
    {
#line 971 "libs.trace_params.c"
      libs__trace_params____Compare____port_category_0_0(&libs__trace_params__conv0_HeadVar__1_1, ((MR_Word) libs__trace_params__wrapper_arg_2), ((MR_Word) libs__trace_params__wrapper_arg_3));
    }
#line 974 "libs.trace_params.c"
    *libs__trace_params__wrapper_arg_1 = ((MR_Box) (libs__trace_params__conv0_HeadVar__1_1));
#line 976 "libs.trace_params.c"
  }
#line 978 "libs.trace_params.c"
}

#line 981 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____trace_level_0_0_10001(
#line 984 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 986 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2)
#line 988 "libs.trace_params.c"
{
#line 990 "libs.trace_params.c"
  {
#line 992 "libs.trace_params.c"
    MR_bool libs__trace_params__succeeded;

#line 995 "libs.trace_params.c"
    {
#line 997 "libs.trace_params.c"
      libs__trace_params__succeeded = libs__trace_params____Unify____trace_level_0_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Word) libs__trace_params__wrapper_arg_2));
    }
#line 1000 "libs.trace_params.c"
    return libs__trace_params__succeeded;
#line 1002 "libs.trace_params.c"
  }
#line 1004 "libs.trace_params.c"
}

#line 1007 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____trace_level_0_0_10001(
#line 1010 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 1012 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 1014 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3)
#line 1016 "libs.trace_params.c"
{
#line 1018 "libs.trace_params.c"
  {
#line 1020 "libs.trace_params.c"
    MR_Word libs__trace_params__conv0_HeadVar__1_1;

#line 1023 "libs.trace_params.c"
    {
#line 1025 "libs.trace_params.c"
      libs__trace_params____Compare____trace_level_0_0(&libs__trace_params__conv0_HeadVar__1_1, ((MR_Word) libs__trace_params__wrapper_arg_2), ((MR_Word) libs__trace_params__wrapper_arg_3));
    }
#line 1028 "libs.trace_params.c"
    *libs__trace_params__wrapper_arg_1 = ((MR_Box) (libs__trace_params__conv0_HeadVar__1_1));
#line 1030 "libs.trace_params.c"
  }
#line 1032 "libs.trace_params.c"
}

#line 1035 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_item_0_0_10001(
#line 1038 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 1040 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2)
#line 1042 "libs.trace_params.c"
{
#line 1044 "libs.trace_params.c"
  {
#line 1046 "libs.trace_params.c"
    MR_bool libs__trace_params__succeeded;

#line 1049 "libs.trace_params.c"
    {
#line 1051 "libs.trace_params.c"
      libs__trace_params__succeeded = libs__trace_params____Unify____trace_suppress_item_0_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Word) libs__trace_params__wrapper_arg_2));
    }
#line 1054 "libs.trace_params.c"
    return libs__trace_params__succeeded;
#line 1056 "libs.trace_params.c"
  }
#line 1058 "libs.trace_params.c"
}

#line 1061 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____trace_suppress_item_0_0_10001(
#line 1064 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 1066 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 1068 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3)
#line 1070 "libs.trace_params.c"
{
#line 1072 "libs.trace_params.c"
  {
#line 1074 "libs.trace_params.c"
    MR_Word libs__trace_params__conv0_HeadVar__1_1;

#line 1077 "libs.trace_params.c"
    {
#line 1079 "libs.trace_params.c"
      libs__trace_params____Compare____trace_suppress_item_0_0(&libs__trace_params__conv0_HeadVar__1_1, ((MR_Word) libs__trace_params__wrapper_arg_2), ((MR_Word) libs__trace_params__wrapper_arg_3));
    }
#line 1082 "libs.trace_params.c"
    *libs__trace_params__wrapper_arg_1 = ((MR_Box) (libs__trace_params__conv0_HeadVar__1_1));
#line 1084 "libs.trace_params.c"
  }
#line 1086 "libs.trace_params.c"
}

#line 1089 "libs.trace_params.c"
static MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_items_0_0_10001(
#line 1092 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 1094 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2)
#line 1096 "libs.trace_params.c"
{
#line 1098 "libs.trace_params.c"
  {
#line 1100 "libs.trace_params.c"
    MR_bool libs__trace_params__succeeded;

#line 1103 "libs.trace_params.c"
    {
#line 1105 "libs.trace_params.c"
      libs__trace_params__succeeded = libs__trace_params____Unify____trace_suppress_items_0_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Word) libs__trace_params__wrapper_arg_2));
    }
#line 1108 "libs.trace_params.c"
    return libs__trace_params__succeeded;
#line 1110 "libs.trace_params.c"
  }
#line 1112 "libs.trace_params.c"
}

#line 1115 "libs.trace_params.c"
static void MR_CALL 
libs__trace_params____Compare____trace_suppress_items_0_0_10001(
#line 1118 "libs.trace_params.c"
  MR_Box * libs__trace_params__wrapper_arg_1,
#line 1120 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 1122 "libs.trace_params.c"
  MR_Box libs__trace_params__wrapper_arg_3)
#line 1124 "libs.trace_params.c"
{
#line 1126 "libs.trace_params.c"
  {
#line 1128 "libs.trace_params.c"
    MR_Word libs__trace_params__conv0_HeadVar__1_1;

#line 1131 "libs.trace_params.c"
    {
#line 1133 "libs.trace_params.c"
      libs__trace_params____Compare____trace_suppress_items_0_0(&libs__trace_params__conv0_HeadVar__1_1, ((MR_Word) libs__trace_params__wrapper_arg_2), ((MR_Word) libs__trace_params__wrapper_arg_3));
    }
#line 1136 "libs.trace_params.c"
    *libs__trace_params__wrapper_arg_1 = ((MR_Box) (libs__trace_params__conv0_HeadVar__1_1));
#line 1138 "libs.trace_params.c"
  }
#line 1140 "libs.trace_params.c"
}

#line 175 "trace_params.m"
void MR_CALL 
libs__trace_params____Compare____trace_suppress_items_0_0(
#line 175 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__1_1,
#line 175 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2,
#line 175 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__3_3)
#line 175 "trace_params.m"
{
#line 175 "trace_params.m"
  {
#line 175 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 175 "trace_params.m"
    MR_Word libs__trace_params__Cast_HeadVar1_4 = libs__trace_params__HeadVar__2_2;
#line 175 "trace_params.m"
    MR_Word libs__trace_params__Cast_HeadVar2_5 = libs__trace_params__HeadVar__3_3;

#line 175 "trace_params.m"
    {
#line 175 "trace_params.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__trace_params_scalar_common_1[1], libs__trace_params__HeadVar__1_1, ((MR_Box) (libs__trace_params__Cast_HeadVar1_4)), ((MR_Box) (libs__trace_params__Cast_HeadVar2_5)));
#line 175 "trace_params.m"
      return;
    }
#line 175 "trace_params.m"
  }
#line 175 "trace_params.m"
}

#line 175 "trace_params.m"
MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_items_0_0(
#line 175 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__1_1,
#line 175 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2)
#line 175 "trace_params.m"
{
#line 175 "trace_params.m"
  {
#line 175 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 175 "trace_params.m"
    MR_Word libs__trace_params__Cast_HeadVar1_3 = libs__trace_params__HeadVar__1_1;
#line 175 "trace_params.m"
    MR_Word libs__trace_params__Cast_HeadVar2_4 = libs__trace_params__HeadVar__2_2;

#line 175 "trace_params.m"
    {
#line 175 "trace_params.m"
      return libs__trace_params__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__trace_params_scalar_common_1[1], ((MR_Box) (libs__trace_params__Cast_HeadVar1_3)), ((MR_Box) (libs__trace_params__Cast_HeadVar2_4)));
    }
#line 175 "trace_params.m"
    return libs__trace_params__succeeded;
#line 175 "trace_params.m"
  }
#line 175 "trace_params.m"
}

#line 169 "trace_params.m"
void MR_CALL 
libs__trace_params____Compare____trace_suppress_item_0_0(
#line 169 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__1_1,
#line 169 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2,
#line 169 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__3_3)
#line 169 "trace_params.m"
{
#line 169 "trace_params.m"
  {
#line 169 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 169 "trace_params.m"
    MR_Integer libs__trace_params__CastX_12 = (MR_Integer) libs__trace_params__HeadVar__2_2;
#line 169 "trace_params.m"
    MR_Integer libs__trace_params__CastY_13 = (MR_Integer) libs__trace_params__HeadVar__3_3;

#line 169 "trace_params.m"
    libs__trace_params__succeeded = (libs__trace_params__CastX_12 == libs__trace_params__CastY_13);
#line 169 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 1229 "libs.trace_params.c"
      *libs__trace_params__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "trace_params.m"
    else
#line 169 "trace_params.m"
      if ((libs__trace_params__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 169 "trace_params.m"
        if ((libs__trace_params__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 169 "trace_params.m"
          *libs__trace_params__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "trace_params.m"
        else
#line 169 "trace_params.m"
          if ((libs__trace_params__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 169 "trace_params.m"
            *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "trace_params.m"
          else
#line 169 "trace_params.m"
            if ((libs__trace_params__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "trace_params.m"
              *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "trace_params.m"
            else
#line 1253 "libs.trace_params.c"
              *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "trace_params.m"
      else
#line 169 "trace_params.m"
        if ((libs__trace_params__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 169 "trace_params.m"
          if ((libs__trace_params__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 169 "trace_params.m"
            *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "trace_params.m"
          else
#line 169 "trace_params.m"
            if ((libs__trace_params__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 169 "trace_params.m"
              *libs__trace_params__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "trace_params.m"
            else
#line 169 "trace_params.m"
              if ((libs__trace_params__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "trace_params.m"
                *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "trace_params.m"
              else
#line 1277 "libs.trace_params.c"
                *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "trace_params.m"
        else
#line 169 "trace_params.m"
          if ((libs__trace_params__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "trace_params.m"
            if ((libs__trace_params__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 169 "trace_params.m"
              *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "trace_params.m"
            else
#line 169 "trace_params.m"
              if ((libs__trace_params__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 169 "trace_params.m"
                *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "trace_params.m"
              else
#line 169 "trace_params.m"
                if ((libs__trace_params__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "trace_params.m"
                  *libs__trace_params__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "trace_params.m"
                else
#line 1301 "libs.trace_params.c"
                  *libs__trace_params__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "trace_params.m"
          else
#line 169 "trace_params.m"
            {
#line 169 "trace_params.m"
              MR_Word libs__trace_params__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__HeadVar__2_2, (MR_Integer) 0)));

#line 169 "trace_params.m"
              if ((libs__trace_params__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1312 "libs.trace_params.c"
                *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "trace_params.m"
              else
#line 169 "trace_params.m"
                if ((libs__trace_params__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1318 "libs.trace_params.c"
                  *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "trace_params.m"
                else
#line 169 "trace_params.m"
                  if ((libs__trace_params__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1324 "libs.trace_params.c"
                    *libs__trace_params__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "trace_params.m"
                  else
#line 169 "trace_params.m"
                    {
#line 169 "trace_params.m"
                      MR_Word libs__trace_params__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__HeadVar__3_3, (MR_Integer) 0)));
#line 169 "trace_params.m"
                      MR_Integer libs__trace_params__V_16_16 = (MR_Integer) libs__trace_params__V_15_15;
#line 169 "trace_params.m"
                      MR_Integer libs__trace_params__V_17_17 = (MR_Integer) libs__trace_params__V_5_5;

#line 169 "trace_params.m"
                      {
#line 169 "trace_params.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(libs__trace_params__HeadVar__1_1, libs__trace_params__V_16_16, libs__trace_params__V_17_17);
#line 169 "trace_params.m"
                        return;
                      }
#line 169 "trace_params.m"
                    }
#line 169 "trace_params.m"
            }
#line 169 "trace_params.m"
  }
#line 169 "trace_params.m"
}

#line 169 "trace_params.m"
MR_bool MR_CALL 
libs__trace_params____Unify____trace_suppress_item_0_0(
#line 169 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__1_1,
#line 169 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2)
#line 169 "trace_params.m"
{
#line 169 "trace_params.m"
  {
#line 169 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 169 "trace_params.m"
    MR_Integer libs__trace_params__CastX_11 = (MR_Integer) libs__trace_params__HeadVar__1_1;
#line 169 "trace_params.m"
    MR_Integer libs__trace_params__CastY_12 = (MR_Integer) libs__trace_params__HeadVar__2_2;

#line 169 "trace_params.m"
    libs__trace_params__succeeded = (libs__trace_params__CastX_11 == libs__trace_params__CastY_12);
#line 169 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 169 "trace_params.m"
      libs__trace_params__succeeded = MR_TRUE;
#line 169 "trace_params.m"
    else
#line 169 "trace_params.m"
      if ((libs__trace_params__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 169 "trace_params.m"
        {
#line 169 "trace_params.m"
          MR_Integer libs__trace_params__CastX_7 = (MR_Integer) libs__trace_params__HeadVar__1_1;
#line 169 "trace_params.m"
          MR_Integer libs__trace_params__CastY_8 = (MR_Integer) libs__trace_params__HeadVar__2_2;

#line 169 "trace_params.m"
          libs__trace_params__succeeded = (libs__trace_params__CastY_8 == libs__trace_params__CastX_7);
#line 169 "trace_params.m"
        }
#line 169 "trace_params.m"
      else
#line 169 "trace_params.m"
        if ((libs__trace_params__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 169 "trace_params.m"
          {
#line 169 "trace_params.m"
            MR_Integer libs__trace_params__CastX_9 = (MR_Integer) libs__trace_params__HeadVar__1_1;
#line 169 "trace_params.m"
            MR_Integer libs__trace_params__CastY_10 = (MR_Integer) libs__trace_params__HeadVar__2_2;

#line 169 "trace_params.m"
            libs__trace_params__succeeded = (libs__trace_params__CastY_10 == libs__trace_params__CastX_9);
#line 169 "trace_params.m"
          }
#line 169 "trace_params.m"
        else
#line 169 "trace_params.m"
          if ((libs__trace_params__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "trace_params.m"
            {
#line 169 "trace_params.m"
              MR_Integer libs__trace_params__CastX_5 = (MR_Integer) libs__trace_params__HeadVar__1_1;
#line 169 "trace_params.m"
              MR_Integer libs__trace_params__CastY_6 = (MR_Integer) libs__trace_params__HeadVar__2_2;

#line 169 "trace_params.m"
              libs__trace_params__succeeded = (libs__trace_params__CastY_6 == libs__trace_params__CastX_5);
#line 169 "trace_params.m"
            }
#line 169 "trace_params.m"
          else
#line 169 "trace_params.m"
            {
#line 169 "trace_params.m"
              MR_Word libs__trace_params__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "trace_params.m"
              MR_Word libs__trace_params__V_4_4;

#line 169 "trace_params.m"
              libs__trace_params__succeeded = ((MR_tag((MR_Word) libs__trace_params__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 169 "trace_params.m"
              if (libs__trace_params__succeeded)
#line 169 "trace_params.m"
                {
#line 169 "trace_params.m"
                  libs__trace_params__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__HeadVar__2_2, (MR_Integer) 0)));
#line 1439 "libs.trace_params.c"
                  libs__trace_params__succeeded = (libs__trace_params__V_3_3 == libs__trace_params__V_4_4);
#line 169 "trace_params.m"
                }
#line 169 "trace_params.m"
            }
#line 169 "trace_params.m"
    return libs__trace_params__succeeded;
#line 169 "trace_params.m"
  }
#line 169 "trace_params.m"
}

#line 161 "trace_params.m"
void MR_CALL 
libs__trace_params____Compare____trace_level_0_0(
#line 161 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__1_1,
#line 161 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2,
#line 161 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__3_3)
#line 161 "trace_params.m"
{
#line 161 "trace_params.m"
  {
#line 161 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 161 "trace_params.m"
    MR_Integer libs__trace_params__Cast_HeadVar1_4 = (MR_Integer) libs__trace_params__HeadVar__2_2;
#line 161 "trace_params.m"
    MR_Integer libs__trace_params__Cast_HeadVar2_5 = (MR_Integer) libs__trace_params__HeadVar__3_3;

#line 161 "trace_params.m"
    {
#line 161 "trace_params.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__trace_params__HeadVar__1_1, libs__trace_params__Cast_HeadVar1_4, libs__trace_params__Cast_HeadVar2_5);
#line 161 "trace_params.m"
      return;
    }
#line 161 "trace_params.m"
  }
#line 161 "trace_params.m"
}

#line 161 "trace_params.m"
MR_bool MR_CALL 
libs__trace_params____Unify____trace_level_0_0(
#line 161 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_1,
#line 161 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2)
#line 161 "trace_params.m"
{
#line 1493 "libs.trace_params.c"
  {
#line 1495 "libs.trace_params.c"
    MR_bool libs__trace_params__succeeded = (libs__trace_params__HeadVar__2_1 == libs__trace_params__HeadVar__2_2);

#line 1498 "libs.trace_params.c"
    return libs__trace_params__succeeded;
#line 1500 "libs.trace_params.c"
  }
#line 161 "trace_params.m"
}

#line 553 "trace_params.m"
static void MR_CALL 
libs__trace_params____Compare____port_category_0_0(
#line 553 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__1_1,
#line 553 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2,
#line 553 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__3_3)
#line 553 "trace_params.m"
{
#line 553 "trace_params.m"
  {
#line 553 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 553 "trace_params.m"
    MR_Integer libs__trace_params__Cast_HeadVar1_4 = (MR_Integer) libs__trace_params__HeadVar__2_2;
#line 553 "trace_params.m"
    MR_Integer libs__trace_params__Cast_HeadVar2_5 = (MR_Integer) libs__trace_params__HeadVar__3_3;

#line 553 "trace_params.m"
    {
#line 553 "trace_params.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__trace_params__HeadVar__1_1, libs__trace_params__Cast_HeadVar1_4, libs__trace_params__Cast_HeadVar2_5);
#line 553 "trace_params.m"
      return;
    }
#line 553 "trace_params.m"
  }
#line 553 "trace_params.m"
}

#line 553 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params____Unify____port_category_0_0(
#line 553 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_1,
#line 553 "trace_params.m"
  MR_Word libs__trace_params__HeadVar__2_2)
#line 553 "trace_params.m"
{
#line 1546 "libs.trace_params.c"
  {
#line 1548 "libs.trace_params.c"
    MR_bool libs__trace_params__succeeded = (libs__trace_params__HeadVar__2_1 == libs__trace_params__HeadVar__2_2);

#line 1551 "libs.trace_params.c"
    return libs__trace_params__succeeded;
#line 1553 "libs.trace_params.c"
  }
#line 553 "trace_params.m"
}

#line 627 "trace_params.m"
static void MR_CALL 
libs__trace_params__maybe_add_suppressed_event_3_p_0(
#line 627 "trace_params.m"
  MR_Word libs__trace_params__SuppressItem_4,
#line 627 "trace_params.m"
  MR_Integer libs__trace_params__SuppressedEventsInt0_5,
#line 627 "trace_params.m"
  MR_Integer * libs__trace_params__SuppressedEventsInt_6)
#line 627 "trace_params.m"
{
#line 633 "trace_params.m"
  {
#line 633 "trace_params.m"
    MR_bool libs__trace_params__succeeded;

#line 633 "trace_params.m"
    if (((MR_tag((MR_Word) libs__trace_params__SuppressItem_4)) == (MR_mktag((MR_Integer) 1))))
#line 633 "trace_params.m"
      {
#line 633 "trace_params.m"
        MR_Word libs__trace_params__Port_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__trace_params__SuppressItem_4, (MR_Integer) 0)));
#line 633 "trace_params.m"
        MR_Integer libs__trace_params__V_8_8;
#line 633 "trace_params.m"
        MR_Integer libs__trace_params__V_10_10;

#line 645 "trace_params.m"
        if ((libs__trace_params__Port_7 == (MR_Integer) 0))
#line 645 "trace_params.m"
          libs__trace_params__V_10_10 = (MR_Integer) 0;
#line 645 "trace_params.m"
        else
#line 645 "trace_params.m"
          if ((libs__trace_params__Port_7 == (MR_Integer) 12))
#line 657 "trace_params.m"
            libs__trace_params__V_10_10 = (MR_Integer) 12;
#line 645 "trace_params.m"
          else
#line 645 "trace_params.m"
            if ((libs__trace_params__Port_7 == (MR_Integer) 13))
#line 658 "trace_params.m"
              libs__trace_params__V_10_10 = (MR_Integer) 13;
#line 645 "trace_params.m"
            else
#line 645 "trace_params.m"
              if ((libs__trace_params__Port_7 == (MR_Integer) 5))
#line 650 "trace_params.m"
                libs__trace_params__V_10_10 = (MR_Integer) 5;
#line 645 "trace_params.m"
              else
#line 645 "trace_params.m"
                if ((libs__trace_params__Port_7 == (MR_Integer) 1))
#line 646 "trace_params.m"
                  libs__trace_params__V_10_10 = (MR_Integer) 1;
#line 645 "trace_params.m"
                else
#line 645 "trace_params.m"
                  if ((libs__trace_params__Port_7 == (MR_Integer) 3))
#line 648 "trace_params.m"
                    libs__trace_params__V_10_10 = (MR_Integer) 3;
#line 645 "trace_params.m"
                  else
#line 645 "trace_params.m"
                    if ((libs__trace_params__Port_7 == (MR_Integer) 6))
#line 651 "trace_params.m"
                      libs__trace_params__V_10_10 = (MR_Integer) 6;
#line 645 "trace_params.m"
                    else
#line 645 "trace_params.m"
                      if ((libs__trace_params__Port_7 == (MR_Integer) 8))
#line 653 "trace_params.m"
                        libs__trace_params__V_10_10 = (MR_Integer) 8;
#line 645 "trace_params.m"
                      else
#line 645 "trace_params.m"
                        if ((libs__trace_params__Port_7 == (MR_Integer) 7))
#line 652 "trace_params.m"
                          libs__trace_params__V_10_10 = (MR_Integer) 7;
#line 645 "trace_params.m"
                        else
#line 645 "trace_params.m"
                          if ((libs__trace_params__Port_7 == (MR_Integer) 9))
#line 654 "trace_params.m"
                            libs__trace_params__V_10_10 = (MR_Integer) 9;
#line 645 "trace_params.m"
                          else
#line 645 "trace_params.m"
                            if ((libs__trace_params__Port_7 == (MR_Integer) 11))
#line 656 "trace_params.m"
                              libs__trace_params__V_10_10 = (MR_Integer) 11;
#line 645 "trace_params.m"
                            else
#line 645 "trace_params.m"
                              if ((libs__trace_params__Port_7 == (MR_Integer) 10))
#line 655 "trace_params.m"
                                libs__trace_params__V_10_10 = (MR_Integer) 10;
#line 645 "trace_params.m"
                              else
#line 645 "trace_params.m"
                                if ((libs__trace_params__Port_7 == (MR_Integer) 2))
#line 647 "trace_params.m"
                                  libs__trace_params__V_10_10 = (MR_Integer) 2;
#line 645 "trace_params.m"
                                else
#line 645 "trace_params.m"
                                  if ((libs__trace_params__Port_7 == (MR_Integer) 14))
#line 659 "trace_params.m"
                                    libs__trace_params__V_10_10 = (MR_Integer) 14;
#line 645 "trace_params.m"
                                  else
#line 645 "trace_params.m"
                                    if ((libs__trace_params__Port_7 == (MR_Integer) 4))
#line 649 "trace_params.m"
                                      libs__trace_params__V_10_10 = (MR_Integer) 4;
#line 645 "trace_params.m"
                                    else
#line 660 "trace_params.m"
                                      libs__trace_params__V_10_10 = (MR_Integer) 15;
#line 634 "trace_params.m"
        {
#line 634 "trace_params.m"
          libs__trace_params__V_8_8 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, libs__trace_params__V_10_10);
        }
#line 634 "trace_params.m"
        *libs__trace_params__SuppressedEventsInt_6 = (libs__trace_params__SuppressedEventsInt0_5 | libs__trace_params__V_8_8);
#line 633 "trace_params.m"
      }
#line 633 "trace_params.m"
    else
#line 640 "trace_params.m"
      *libs__trace_params__SuppressedEventsInt_6 = libs__trace_params__SuppressedEventsInt0_5;
#line 633 "trace_params.m"
  }
#line 627 "trace_params.m"
}

#line 538 "trace_params.m"
static void MR_CALL 
libs__trace_params__wrap_port_2_p_0(
#line 538 "trace_params.m"
  MR_Word libs__trace_params__Port_3,
#line 538 "trace_params.m"
  MR_Word * libs__trace_params__HeadVar__2_2)
#line 538 "trace_params.m"
{
#line 540 "trace_params.m"
  {
#line 540 "trace_params.m"
    MR_bool libs__trace_params__succeeded;

#line 540 "trace_params.m"
    {
#line 540 "trace_params.m"
      MR_Word base;
#line 540 "trace_params.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "trace_params.m"
      *libs__trace_params__HeadVar__2_2 = base;
#line 540 "trace_params.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__trace_params__Port_3));
#line 540 "trace_params.m"
    }
#line 540 "trace_params.m"
  }
#line 538 "trace_params.m"
}

#line 531 "trace_params.m"
static void MR_CALL 
libs__trace_params__convert_item_name_2_p_0_1(
#line 531 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 531 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 531 "trace_params.m"
  MR_Box * libs__trace_params__wrapper_arg_2)
#line 531 "trace_params.m"
{
#line 531 "trace_params.m"
  {
#line 531 "trace_params.m"
    MR_Box libs__trace_params__closure = libs__trace_params__closure_arg;
#line 531 "trace_params.m"
    MR_Word libs__trace_params__conv0_HeadVar__2_2;

#line 531 "trace_params.m"
    {
#line 531 "trace_params.m"
      libs__trace_params__wrap_port_2_p_0(((MR_Word) libs__trace_params__wrapper_arg_1), &libs__trace_params__conv0_HeadVar__2_2);
    }
#line 531 "trace_params.m"
    *libs__trace_params__wrapper_arg_2 = ((MR_Box) (libs__trace_params__conv0_HeadVar__2_2));
#line 531 "trace_params.m"
  }
#line 531 "trace_params.m"
}

#line 524 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__convert_item_name_2_p_0(
#line 524 "trace_params.m"
  MR_String libs__trace_params__String_3,
#line 524 "trace_params.m"
  MR_Word * libs__trace_params__Names_4)
#line 524 "trace_params.m"
{
#line 530 "trace_params.m"
  {
#line 530 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 530 "trace_params.m"
    MR_Word libs__trace_params__PortName_5;

#line 481 "trace_params.m"
    if ((strcmp(libs__trace_params__String_3, (MR_String) "cond") == 0))
#line 486 "trace_params.m"
      {
#line 486 "trace_params.m"
        libs__trace_params__PortName_5 = (MR_Integer) 6;
#line 486 "trace_params.m"
        libs__trace_params__succeeded = MR_TRUE;
#line 486 "trace_params.m"
      }
#line 481 "trace_params.m"
    else
#line 481 "trace_params.m"
      if ((strcmp(libs__trace_params__String_3, (MR_String) "else") == 0))
#line 490 "trace_params.m"
        {
#line 490 "trace_params.m"
          libs__trace_params__PortName_5 = (MR_Integer) 8;
#line 490 "trace_params.m"
          libs__trace_params__succeeded = MR_TRUE;
#line 490 "trace_params.m"
        }
#line 481 "trace_params.m"
      else
#line 481 "trace_params.m"
        if ((strcmp(libs__trace_params__String_3, (MR_String) "exit") == 0))
#line 481 "trace_params.m"
          {
#line 481 "trace_params.m"
            libs__trace_params__PortName_5 = (MR_Integer) 1;
#line 481 "trace_params.m"
            libs__trace_params__succeeded = MR_TRUE;
#line 481 "trace_params.m"
          }
#line 481 "trace_params.m"
        else
#line 481 "trace_params.m"
          if ((strcmp(libs__trace_params__String_3, (MR_String) "fail") == 0))
#line 482 "trace_params.m"
            {
#line 482 "trace_params.m"
              libs__trace_params__PortName_5 = (MR_Integer) 3;
#line 482 "trace_params.m"
              libs__trace_params__succeeded = MR_TRUE;
#line 482 "trace_params.m"
            }
#line 481 "trace_params.m"
          else
#line 481 "trace_params.m"
            if ((strcmp(libs__trace_params__String_3, (MR_String) "nege") == 0))
#line 492 "trace_params.m"
              {
#line 492 "trace_params.m"
                libs__trace_params__PortName_5 = (MR_Integer) 9;
#line 492 "trace_params.m"
                libs__trace_params__succeeded = MR_TRUE;
#line 492 "trace_params.m"
              }
#line 481 "trace_params.m"
            else
#line 481 "trace_params.m"
              if ((strcmp(libs__trace_params__String_3, (MR_String) "negf") == 0))
#line 496 "trace_params.m"
                {
#line 496 "trace_params.m"
                  libs__trace_params__PortName_5 = (MR_Integer) 11;
#line 496 "trace_params.m"
                  libs__trace_params__succeeded = MR_TRUE;
#line 496 "trace_params.m"
                }
#line 481 "trace_params.m"
              else
#line 481 "trace_params.m"
                if ((strcmp(libs__trace_params__String_3, (MR_String) "negs") == 0))
#line 494 "trace_params.m"
                  {
#line 494 "trace_params.m"
                    libs__trace_params__PortName_5 = (MR_Integer) 10;
#line 494 "trace_params.m"
                    libs__trace_params__succeeded = MR_TRUE;
#line 494 "trace_params.m"
                  }
#line 481 "trace_params.m"
                else
#line 481 "trace_params.m"
                  if ((strcmp(libs__trace_params__String_3, (MR_String) "redo") == 0))
#line 483 "trace_params.m"
                    {
#line 483 "trace_params.m"
                      libs__trace_params__PortName_5 = (MR_Integer) 2;
#line 483 "trace_params.m"
                      libs__trace_params__succeeded = MR_TRUE;
#line 483 "trace_params.m"
                    }
#line 481 "trace_params.m"
                  else
#line 481 "trace_params.m"
                    if ((strcmp(libs__trace_params__String_3, (MR_String) "swtc") == 0))
#line 498 "trace_params.m"
                      {
#line 498 "trace_params.m"
                        libs__trace_params__PortName_5 = (MR_Integer) 14;
#line 498 "trace_params.m"
                        libs__trace_params__succeeded = MR_TRUE;
#line 498 "trace_params.m"
                      }
#line 481 "trace_params.m"
                    else
#line 481 "trace_params.m"
                      if ((strcmp(libs__trace_params__String_3, (MR_String) "tail") == 0))
#line 502 "trace_params.m"
                        {
#line 502 "trace_params.m"
                          libs__trace_params__PortName_5 = (MR_Integer) 4;
#line 502 "trace_params.m"
                          libs__trace_params__succeeded = MR_TRUE;
#line 502 "trace_params.m"
                        }
#line 481 "trace_params.m"
                      else
#line 481 "trace_params.m"
                        if ((strcmp(libs__trace_params__String_3, (MR_String) "then") == 0))
#line 488 "trace_params.m"
                          {
#line 488 "trace_params.m"
                            libs__trace_params__PortName_5 = (MR_Integer) 7;
#line 488 "trace_params.m"
                            libs__trace_params__succeeded = MR_TRUE;
#line 488 "trace_params.m"
                          }
#line 481 "trace_params.m"
                        else
#line 481 "trace_params.m"
                          if ((strcmp(libs__trace_params__String_3, (MR_String) "user") == 0))
#line 503 "trace_params.m"
                            {
#line 503 "trace_params.m"
                              libs__trace_params__PortName_5 = (MR_Integer) 15;
#line 503 "trace_params.m"
                              libs__trace_params__succeeded = MR_TRUE;
#line 503 "trace_params.m"
                            }
#line 481 "trace_params.m"
                          else
#line 481 "trace_params.m"
                            if ((strcmp(libs__trace_params__String_3, (MR_String) "switch") == 0))
#line 499 "trace_params.m"
                              {
#line 499 "trace_params.m"
                                libs__trace_params__PortName_5 = (MR_Integer) 14;
#line 499 "trace_params.m"
                                libs__trace_params__succeeded = MR_TRUE;
#line 499 "trace_params.m"
                              }
#line 481 "trace_params.m"
                            else
#line 481 "trace_params.m"
                              if ((strcmp(libs__trace_params__String_3, (MR_String) "ite_cond") == 0))
#line 487 "trace_params.m"
                                {
#line 487 "trace_params.m"
                                  libs__trace_params__PortName_5 = (MR_Integer) 6;
#line 487 "trace_params.m"
                                  libs__trace_params__succeeded = MR_TRUE;
#line 487 "trace_params.m"
                                }
#line 481 "trace_params.m"
                              else
#line 481 "trace_params.m"
                                if ((strcmp(libs__trace_params__String_3, (MR_String) "ite_else") == 0))
#line 491 "trace_params.m"
                                  {
#line 491 "trace_params.m"
                                    libs__trace_params__PortName_5 = (MR_Integer) 8;
#line 491 "trace_params.m"
                                    libs__trace_params__succeeded = MR_TRUE;
#line 491 "trace_params.m"
                                  }
#line 481 "trace_params.m"
                                else
#line 481 "trace_params.m"
                                  if ((strcmp(libs__trace_params__String_3, (MR_String) "ite_then") == 0))
#line 489 "trace_params.m"
                                    {
#line 489 "trace_params.m"
                                      libs__trace_params__PortName_5 = (MR_Integer) 7;
#line 489 "trace_params.m"
                                      libs__trace_params__succeeded = MR_TRUE;
#line 489 "trace_params.m"
                                    }
#line 481 "trace_params.m"
                                  else
#line 481 "trace_params.m"
                                    if ((strcmp(libs__trace_params__String_3, (MR_String) "exception") == 0))
#line 485 "trace_params.m"
                                      {
#line 485 "trace_params.m"
                                        libs__trace_params__PortName_5 = (MR_Integer) 5;
#line 485 "trace_params.m"
                                        libs__trace_params__succeeded = MR_TRUE;
#line 485 "trace_params.m"
                                      }
#line 481 "trace_params.m"
                                    else
#line 481 "trace_params.m"
                                      if ((strcmp(libs__trace_params__String_3, (MR_String) "neg_enter") == 0))
#line 493 "trace_params.m"
                                        {
#line 493 "trace_params.m"
                                          libs__trace_params__PortName_5 = (MR_Integer) 9;
#line 493 "trace_params.m"
                                          libs__trace_params__succeeded = MR_TRUE;
#line 493 "trace_params.m"
                                        }
#line 481 "trace_params.m"
                                      else
#line 481 "trace_params.m"
                                        if ((strcmp(libs__trace_params__String_3, (MR_String) "disj_first") == 0))
#line 500 "trace_params.m"
                                          {
#line 500 "trace_params.m"
                                            libs__trace_params__PortName_5 = (MR_Integer) 12;
#line 500 "trace_params.m"
                                            libs__trace_params__succeeded = MR_TRUE;
#line 500 "trace_params.m"
                                          }
#line 481 "trace_params.m"
                                        else
#line 481 "trace_params.m"
                                          if ((strcmp(libs__trace_params__String_3, (MR_String) "disj_later") == 0))
#line 501 "trace_params.m"
                                            {
#line 501 "trace_params.m"
                                              libs__trace_params__PortName_5 = (MR_Integer) 13;
#line 501 "trace_params.m"
                                              libs__trace_params__succeeded = MR_TRUE;
#line 501 "trace_params.m"
                                            }
#line 481 "trace_params.m"
                                          else
#line 481 "trace_params.m"
                                            if ((strcmp(libs__trace_params__String_3, (MR_String) "neg_failure") == 0))
#line 497 "trace_params.m"
                                              {
#line 497 "trace_params.m"
                                                libs__trace_params__PortName_5 = (MR_Integer) 11;
#line 497 "trace_params.m"
                                                libs__trace_params__succeeded = MR_TRUE;
#line 497 "trace_params.m"
                                              }
#line 481 "trace_params.m"
                                            else
#line 481 "trace_params.m"
                                              if ((strcmp(libs__trace_params__String_3, (MR_String) "neg_success") == 0))
#line 495 "trace_params.m"
                                                {
#line 495 "trace_params.m"
                                                  libs__trace_params__PortName_5 = (MR_Integer) 10;
#line 495 "trace_params.m"
                                                  libs__trace_params__succeeded = MR_TRUE;
#line 495 "trace_params.m"
                                                }
#line 481 "trace_params.m"
                                              else
#line 481 "trace_params.m"
                                                libs__trace_params__succeeded = MR_FALSE;
#line 530 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 529 "trace_params.m"
      {
#line 529 "trace_params.m"
        MR_Word libs__trace_params__V_8_8;

#line 529 "trace_params.m"
        {
#line 529 "trace_params.m"
          libs__trace_params__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 529 "trace_params.m"
          MR_hl_field(MR_mktag(1), libs__trace_params__V_8_8, 0) = ((MR_Box) (libs__trace_params__PortName_5));
#line 529 "trace_params.m"
        }
#line 529 "trace_params.m"
        {
#line 529 "trace_params.m"
          MR_Word base;
#line 529 "trace_params.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "trace_params.m"
          *libs__trace_params__Names_4 = base;
#line 529 "trace_params.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__trace_params__V_8_8));
#line 529 "trace_params.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "trace_params.m"
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
        MR_Word libs__trace_params__PortNames_6;

#line 507 "trace_params.m"
        if ((strcmp(libs__trace_params__String_3, (MR_String) "context") == 0))
#line 512 "trace_params.m"
          {
#line 512 "trace_params.m"
            libs__trace_params__PortNames_6 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[5]);
#line 512 "trace_params.m"
            libs__trace_params__succeeded = MR_TRUE;
#line 512 "trace_params.m"
          }
#line 507 "trace_params.m"
        else
#line 507 "trace_params.m"
          if ((strcmp(libs__trace_params__String_3, (MR_String) "internal") == 0))
#line 509 "trace_params.m"
            {
#line 509 "trace_params.m"
              libs__trace_params__PortNames_6 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[15]);
#line 509 "trace_params.m"
              libs__trace_params__succeeded = MR_TRUE;
#line 509 "trace_params.m"
            }
#line 507 "trace_params.m"
          else
#line 507 "trace_params.m"
            if ((strcmp(libs__trace_params__String_3, (MR_String) "interface") == 0))
#line 507 "trace_params.m"
              {
#line 507 "trace_params.m"
                libs__trace_params__PortNames_6 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[10]);
#line 507 "trace_params.m"
                libs__trace_params__succeeded = MR_TRUE;
#line 507 "trace_params.m"
              }
#line 507 "trace_params.m"
            else
#line 507 "trace_params.m"
              libs__trace_params__succeeded = MR_FALSE;
#line 532 "trace_params.m"
        if (libs__trace_params__succeeded)
#line 531 "trace_params.m"
          {
#line 531 "trace_params.m"
            {
#line 531 "trace_params.m"
              mercury__list__map_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0, (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0, (MR_Word) &libs__trace_params_scalar_common_4[3], libs__trace_params__PortNames_6, libs__trace_params__Names_4);
            }
#line 531 "trace_params.m"
            libs__trace_params__succeeded = MR_TRUE;
#line 531 "trace_params.m"
          }
#line 532 "trace_params.m"
        else
#line 534 "trace_params.m"
          {
#line 534 "trace_params.m"
            MR_Word libs__trace_params__OtherName_7;
#line 534 "trace_params.m"
            MR_Word libs__trace_params__V_11_11;

#line 517 "trace_params.m"
            if ((strcmp(libs__trace_params__String_3, (MR_String) "names") == 0))
#line 519 "trace_params.m"
              {
#line 519 "trace_params.m"
                libs__trace_params__OtherName_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 519 "trace_params.m"
                libs__trace_params__succeeded = MR_TRUE;
#line 519 "trace_params.m"
              }
#line 517 "trace_params.m"
            else
#line 517 "trace_params.m"
              if ((strcmp(libs__trace_params__String_3, (MR_String) "bodies") == 0))
#line 521 "trace_params.m"
                {
#line 521 "trace_params.m"
                  libs__trace_params__OtherName_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 521 "trace_params.m"
                  libs__trace_params__succeeded = MR_TRUE;
#line 521 "trace_params.m"
                }
#line 517 "trace_params.m"
              else
#line 517 "trace_params.m"
                if ((strcmp(libs__trace_params__String_3, (MR_String) "return") == 0))
#line 517 "trace_params.m"
                  {
#line 517 "trace_params.m"
                    libs__trace_params__OtherName_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "trace_params.m"
                    libs__trace_params__succeeded = MR_TRUE;
#line 517 "trace_params.m"
                  }
#line 517 "trace_params.m"
                else
#line 517 "trace_params.m"
                  if ((strcmp(libs__trace_params__String_3, (MR_String) "return_info") == 0))
#line 518 "trace_params.m"
                    {
#line 518 "trace_params.m"
                      libs__trace_params__OtherName_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 518 "trace_params.m"
                      libs__trace_params__succeeded = MR_TRUE;
#line 518 "trace_params.m"
                    }
#line 517 "trace_params.m"
                  else
#line 517 "trace_params.m"
                    if ((strcmp(libs__trace_params__String_3, (MR_String) "all_var_names") == 0))
#line 520 "trace_params.m"
                      {
#line 520 "trace_params.m"
                        libs__trace_params__OtherName_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 520 "trace_params.m"
                        libs__trace_params__succeeded = MR_TRUE;
#line 520 "trace_params.m"
                      }
#line 517 "trace_params.m"
                    else
#line 517 "trace_params.m"
                      if ((strcmp(libs__trace_params__String_3, (MR_String) "proc_body_reps") == 0))
#line 522 "trace_params.m"
                        {
#line 522 "trace_params.m"
                          libs__trace_params__OtherName_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 522 "trace_params.m"
                          libs__trace_params__succeeded = MR_TRUE;
#line 522 "trace_params.m"
                        }
#line 517 "trace_params.m"
                      else
#line 517 "trace_params.m"
                        libs__trace_params__succeeded = MR_FALSE;
#line 534 "trace_params.m"
            if (libs__trace_params__succeeded)
#line 534 "trace_params.m"
              {
#line 533 "trace_params.m"
                libs__trace_params__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "trace_params.m"
                {
#line 533 "trace_params.m"
                  MR_Word base;
#line 533 "trace_params.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "trace_params.m"
                  *libs__trace_params__Names_4 = base;
#line 533 "trace_params.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__trace_params__OtherName_7));
#line 533 "trace_params.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (libs__trace_params__V_11_11));
#line 533 "trace_params.m"
                }
#line 533 "trace_params.m"
                libs__trace_params__succeeded = MR_TRUE;
#line 534 "trace_params.m"
              }
#line 534 "trace_params.m"
          }
#line 532 "trace_params.m"
      }
#line 530 "trace_params.m"
    return libs__trace_params__succeeded;
#line 530 "trace_params.m"
  }
#line 524 "trace_params.m"
}

#line 466 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__char_is_comma_1_p_0(
#line 466 "trace_params.m"
  MR_Char libs__trace_params__HeadVar__1_1)
#line 466 "trace_params.m"
{
#line 468 "trace_params.m"
  {
#line 468 "trace_params.m"
    MR_bool libs__trace_params__succeeded = (libs__trace_params__HeadVar__1_1 == (MR_Char) 44);

#line 468 "trace_params.m"
    return libs__trace_params__succeeded;
#line 468 "trace_params.m"
  }
#line 466 "trace_params.m"
}

#line 624 "trace_params.m"
static void MR_CALL 
libs__trace_params__encode_suppressed_events_1_f_0_1(
#line 624 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 624 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 624 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_2,
#line 624 "trace_params.m"
  MR_Box * libs__trace_params__wrapper_arg_3)
#line 624 "trace_params.m"
{
#line 624 "trace_params.m"
  {
#line 624 "trace_params.m"
    MR_Box libs__trace_params__closure = libs__trace_params__closure_arg;
#line 624 "trace_params.m"
    MR_Integer libs__trace_params__conv0_SuppressedEventsInt_6;

#line 624 "trace_params.m"
    {
#line 624 "trace_params.m"
      libs__trace_params__maybe_add_suppressed_event_3_p_0(((MR_Word) libs__trace_params__wrapper_arg_1), ((MR_Integer) libs__trace_params__wrapper_arg_2), &libs__trace_params__conv0_SuppressedEventsInt_6);
    }
#line 624 "trace_params.m"
    *libs__trace_params__wrapper_arg_3 = ((MR_Box) (libs__trace_params__conv0_SuppressedEventsInt_6));
#line 624 "trace_params.m"
  }
#line 624 "trace_params.m"
}

#line 124 "trace_params.m"
MR_Integer MR_CALL 
libs__trace_params__encode_suppressed_events_1_f_0(
#line 124 "trace_params.m"
  MR_Word libs__trace_params__SuppressedEvents_3)
#line 124 "trace_params.m"
{
#line 623 "trace_params.m"
  {
#line 623 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 623 "trace_params.m"
    MR_Integer libs__trace_params__SuppressedEventsInt_4;
#line 624 "trace_params.m"
    MR_Box libs__trace_params__conv1_SuppressedEventsInt_4;

#line 624 "trace_params.m"
    {
#line 624 "trace_params.m"
      mercury__set__fold_4_p_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &libs__trace_params_scalar_common_4[2], libs__trace_params__SuppressedEvents_3, ((MR_Box) ((MR_Integer) 0)), &libs__trace_params__conv1_SuppressedEventsInt_4);
    }
#line 624 "trace_params.m"
    libs__trace_params__SuppressedEventsInt_4 = ((MR_Integer) libs__trace_params__conv1_SuppressedEventsInt_4);
#line 623 "trace_params.m"
    return libs__trace_params__SuppressedEventsInt_4;
#line 623 "trace_params.m"
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
#line 544 "trace_params.m"
  {
#line 544 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 544 "trace_params.m"
    MR_String libs__trace_params__HeadVar__2_2;

#line 544 "trace_params.m"
    if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 1))
#line 545 "trace_params.m"
      libs__trace_params__HeadVar__2_2 = (MR_String) "MR_TRACE_LEVEL_BASIC";
#line 544 "trace_params.m"
    else
#line 544 "trace_params.m"
      if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 2))
#line 546 "trace_params.m"
        libs__trace_params__HeadVar__2_2 = (MR_String) "MR_TRACE_LEVEL_BASIC_USER";
#line 544 "trace_params.m"
      else
#line 544 "trace_params.m"
        if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 5))
#line 549 "trace_params.m"
          libs__trace_params__HeadVar__2_2 = (MR_String) "MR_TRACE_LEVEL_DECL_REP";
#line 544 "trace_params.m"
        else
#line 544 "trace_params.m"
          if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 4))
#line 548 "trace_params.m"
            libs__trace_params__HeadVar__2_2 = (MR_String) "MR_TRACE_LEVEL_DEEP";
#line 544 "trace_params.m"
          else
#line 544 "trace_params.m"
            if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 0))
#line 544 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_String) "MR_TRACE_LEVEL_NONE";
#line 544 "trace_params.m"
            else
#line 547 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_String) "MR_TRACE_LEVEL_SHALLOW";
#line 544 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 544 "trace_params.m"
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
#line 179 "trace_params.m"
  {
#line 179 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 179 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2;

#line 179 "trace_params.m"
    if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 1))
#line 180 "trace_params.m"
      libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 179 "trace_params.m"
    else
#line 179 "trace_params.m"
      if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 2))
#line 181 "trace_params.m"
        libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 179 "trace_params.m"
      else
#line 179 "trace_params.m"
        if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 5))
#line 184 "trace_params.m"
          libs__trace_params__HeadVar__2_2 = (MR_Integer) 3;
#line 179 "trace_params.m"
        else
#line 179 "trace_params.m"
          if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 4))
#line 183 "trace_params.m"
            libs__trace_params__HeadVar__2_2 = (MR_Integer) 3;
#line 179 "trace_params.m"
          else
#line 179 "trace_params.m"
            if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 0))
#line 179 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 179 "trace_params.m"
            else
#line 182 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 3;
#line 179 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 179 "trace_params.m"
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
#line 193 "trace_params.m"
  {
#line 193 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 193 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2;

#line 193 "trace_params.m"
    if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 1))
#line 194 "trace_params.m"
      libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 193 "trace_params.m"
    else
#line 193 "trace_params.m"
      if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 2))
#line 195 "trace_params.m"
        libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 193 "trace_params.m"
      else
#line 193 "trace_params.m"
        if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 5))
#line 198 "trace_params.m"
          libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 193 "trace_params.m"
        else
#line 193 "trace_params.m"
          if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 4))
#line 197 "trace_params.m"
            libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 193 "trace_params.m"
          else
#line 193 "trace_params.m"
            if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 0))
#line 193 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 193 "trace_params.m"
            else
#line 196 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 193 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 193 "trace_params.m"
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
#line 186 "trace_params.m"
  {
#line 186 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 186 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2;

#line 186 "trace_params.m"
    if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 1))
#line 187 "trace_params.m"
      libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "trace_params.m"
    else
#line 186 "trace_params.m"
      if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 2))
#line 188 "trace_params.m"
        libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "trace_params.m"
      else
#line 186 "trace_params.m"
        if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 5))
#line 191 "trace_params.m"
          libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 186 "trace_params.m"
        else
#line 186 "trace_params.m"
          if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 4))
#line 190 "trace_params.m"
            libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 186 "trace_params.m"
          else
#line 186 "trace_params.m"
            if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 0))
#line 186 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 186 "trace_params.m"
            else
#line 189 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 186 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 186 "trace_params.m"
  }
#line 111 "trace_params.m"
}

#line 109 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__trace_level_none_0_f_0(void)
#line 109 "trace_params.m"
{
#line 177 "trace_params.m"
  {
#line 177 "trace_params.m"
    MR_bool libs__trace_params__succeeded;

#line 177 "trace_params.m"
    return (MR_Integer) 0;
#line 177 "trace_params.m"
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
#line 216 "trace_params.m"
  {
#line 216 "trace_params.m"
    MR_bool libs__trace_params__succeeded = (libs__trace_params__TraceLevel_9 == (MR_Integer) 0);
#line 216 "trace_params.m"
    MR_Word libs__trace_params__EffTraceLevel_10;

#line 216 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 215 "trace_params.m"
      libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
#line 216 "trace_params.m"
    else
#line 217 "trace_params.m"
      {
#line 217 "trace_params.m"
        MR_Word libs__trace_params__Origin_11;

#line 217 "trace_params.m"
        {
#line 217 "trace_params.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(libs__trace_params__PredInfo_7, &libs__trace_params__Origin_11);
        }
#line 244 "trace_params.m"
        if (((MR_tag((MR_Word) libs__trace_params__Origin_11)) == (MR_mktag((MR_Integer) 0))))
#line 219 "trace_params.m"
          {
#line 219 "trace_params.m"
            MR_Word libs__trace_params__SpecialPred_12;
#line 219 "trace_params.m"
            MR_Word libs__trace_params__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__trace_params__Origin_11, (MR_Integer) 0)));
#line 219 "trace_params.m"
            MR_Word libs__trace_params__V_13_13;

#line 219 "trace_params.m"
            libs__trace_params__SpecialPred_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__trace_params__V_34_34, (MR_Integer) 0)));
#line 219 "trace_params.m"
            libs__trace_params__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__trace_params__V_34_34, (MR_Integer) 1)));
#line 234 "trace_params.m"
            if ((libs__trace_params__SpecialPred_12 == (MR_Integer) 2))
#line 236 "trace_params.m"
              libs__trace_params__EffTraceLevel_10 = (MR_Integer) 3;
#line 234 "trace_params.m"
            else
#line 234 "trace_params.m"
              if ((libs__trace_params__SpecialPred_12 == (MR_Integer) 1))
#line 239 "trace_params.m"
                libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
#line 234 "trace_params.m"
              else
#line 234 "trace_params.m"
                if ((libs__trace_params__SpecialPred_12 == (MR_Integer) 3))
#line 242 "trace_params.m"
                  libs__trace_params__EffTraceLevel_10 = libs__trace_params__TraceLevel_9;
#line 234 "trace_params.m"
                else
#line 233 "trace_params.m"
                  libs__trace_params__EffTraceLevel_10 = (MR_Integer) 3;
#line 219 "trace_params.m"
          }
#line 244 "trace_params.m"
        else
#line 244 "trace_params.m"
          if (((((MR_tag((MR_Word) libs__trace_params__Origin_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__trace_params__Origin_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 245 "trace_params.m"
            {
#line 245 "trace_params.m"
              MR_Word libs__trace_params__PredCreation_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__trace_params__Origin_11, (MR_Integer) 1)));

#line 255 "trace_params.m"
              if ((libs__trace_params__PredCreation_14 == (MR_Integer) 0))
#line 279 "trace_params.m"
                {
#line 279 "trace_params.m"
                  MR_Word libs__trace_params__Status_51;
#line 282 "trace_params.m"
                  MR_Word libs__trace_params__V_54_54;
#line 282 "trace_params.m"
                  MR_Word libs__trace_params__V_55_55;
#line 282 "trace_params.m"
                  MR_Word libs__trace_params__V_56_56;

#line 280 "trace_params.m"
                  {
#line 280 "trace_params.m"
                    hlds__hlds_pred__pred_info_get_import_status_2_p_0(libs__trace_params__PredInfo_7, &libs__trace_params__Status_51);
                  }
#line 282 "trace_params.m"
                  libs__trace_params__succeeded = (libs__trace_params__TraceLevel_9 == (MR_Integer) 3);
#line 282 "trace_params.m"
                  if (libs__trace_params__succeeded)
#line 282 "trace_params.m"
                    {
#line 283 "trace_params.m"
                      {
#line 283 "trace_params.m"
                        libs__trace_params__V_54_54 = hlds__hlds_pred__status_is_exported_1_f_0(libs__trace_params__Status_51);
                      }
#line 283 "trace_params.m"
                      libs__trace_params__succeeded = (libs__trace_params__V_54_54 == (MR_Integer) 0);
#line 282 "trace_params.m"
                      if (libs__trace_params__succeeded)
#line 282 "trace_params.m"
                        {
#line 284 "trace_params.m"
                          libs__trace_params__V_55_55 = (MR_Integer) 1;
#line 284 "trace_params.m"
                          {
#line 284 "trace_params.m"
                            hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__V_56_56);
                          }
#line 284 "trace_params.m"
                          libs__trace_params__succeeded = (libs__trace_params__V_55_55 == libs__trace_params__V_56_56);
#line 282 "trace_params.m"
                        }
#line 282 "trace_params.m"
                    }
#line 302 "trace_params.m"
                  if (libs__trace_params__succeeded)
#line 286 "trace_params.m"
                    {
#line 286 "trace_params.m"
                      MR_Word libs__trace_params__ProcHasUserEvent_52;

#line 286 "trace_params.m"
                      {
#line 286 "trace_params.m"
                        hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__ProcHasUserEvent_52);
                      }
#line 290 "trace_params.m"
                      if ((libs__trace_params__ProcHasUserEvent_52 == (MR_Integer) 1))
#line 291 "trace_params.m"
                        {
#line 291 "trace_params.m"
                          MR_Word libs__trace_params__ModuleHasUserEvent_53;

#line 292 "trace_params.m"
                          {
#line 292 "trace_params.m"
                            hlds__hlds_module__module_info_get_has_user_event_2_p_0(libs__trace_params__ModuleInfo_6, &libs__trace_params__ModuleHasUserEvent_53);
                          }
#line 297 "trace_params.m"
                          if ((libs__trace_params__ModuleHasUserEvent_53 == (MR_Integer) 1))
#line 299 "trace_params.m"
                            libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
#line 297 "trace_params.m"
                          else
#line 296 "trace_params.m"
                            libs__trace_params__EffTraceLevel_10 = (MR_Integer) 1;
#line 291 "trace_params.m"
                        }
#line 290 "trace_params.m"
                      else
#line 289 "trace_params.m"
                        libs__trace_params__EffTraceLevel_10 = (MR_Integer) 2;
#line 286 "trace_params.m"
                    }
#line 302 "trace_params.m"
                  else
#line 303 "trace_params.m"
                    libs__trace_params__EffTraceLevel_10 = libs__trace_params__TraceLevel_9;
#line 279 "trace_params.m"
                }
#line 255 "trace_params.m"
              else
#line 254 "trace_params.m"
                libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
#line 245 "trace_params.m"
            }
#line 244 "trace_params.m"
          else
#line 279 "trace_params.m"
            {
#line 279 "trace_params.m"
              MR_Word libs__trace_params__Status_40;
#line 282 "trace_params.m"
              MR_Word libs__trace_params__V_43_43;
#line 282 "trace_params.m"
              MR_Word libs__trace_params__V_44_44;
#line 282 "trace_params.m"
              MR_Word libs__trace_params__V_45_45;

#line 280 "trace_params.m"
              {
#line 280 "trace_params.m"
                hlds__hlds_pred__pred_info_get_import_status_2_p_0(libs__trace_params__PredInfo_7, &libs__trace_params__Status_40);
              }
#line 282 "trace_params.m"
              libs__trace_params__succeeded = (libs__trace_params__TraceLevel_9 == (MR_Integer) 3);
#line 282 "trace_params.m"
              if (libs__trace_params__succeeded)
#line 282 "trace_params.m"
                {
#line 283 "trace_params.m"
                  {
#line 283 "trace_params.m"
                    libs__trace_params__V_43_43 = hlds__hlds_pred__status_is_exported_1_f_0(libs__trace_params__Status_40);
                  }
#line 283 "trace_params.m"
                  libs__trace_params__succeeded = (libs__trace_params__V_43_43 == (MR_Integer) 0);
#line 282 "trace_params.m"
                  if (libs__trace_params__succeeded)
#line 282 "trace_params.m"
                    {
#line 284 "trace_params.m"
                      libs__trace_params__V_44_44 = (MR_Integer) 1;
#line 284 "trace_params.m"
                      {
#line 284 "trace_params.m"
                        hlds__hlds_pred__proc_info_get_is_address_taken_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__V_45_45);
                      }
#line 284 "trace_params.m"
                      libs__trace_params__succeeded = (libs__trace_params__V_44_44 == libs__trace_params__V_45_45);
#line 282 "trace_params.m"
                    }
#line 282 "trace_params.m"
                }
#line 302 "trace_params.m"
              if (libs__trace_params__succeeded)
#line 286 "trace_params.m"
                {
#line 286 "trace_params.m"
                  MR_Word libs__trace_params__ProcHasUserEvent_41;

#line 286 "trace_params.m"
                  {
#line 286 "trace_params.m"
                    hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(libs__trace_params__ProcInfo_8, &libs__trace_params__ProcHasUserEvent_41);
                  }
#line 290 "trace_params.m"
                  if ((libs__trace_params__ProcHasUserEvent_41 == (MR_Integer) 1))
#line 291 "trace_params.m"
                    {
#line 291 "trace_params.m"
                      MR_Word libs__trace_params__ModuleHasUserEvent_42;

#line 292 "trace_params.m"
                      {
#line 292 "trace_params.m"
                        hlds__hlds_module__module_info_get_has_user_event_2_p_0(libs__trace_params__ModuleInfo_6, &libs__trace_params__ModuleHasUserEvent_42);
                      }
#line 297 "trace_params.m"
                      if ((libs__trace_params__ModuleHasUserEvent_42 == (MR_Integer) 1))
#line 299 "trace_params.m"
                        libs__trace_params__EffTraceLevel_10 = (MR_Integer) 0;
#line 297 "trace_params.m"
                      else
#line 296 "trace_params.m"
                        libs__trace_params__EffTraceLevel_10 = (MR_Integer) 1;
#line 291 "trace_params.m"
                    }
#line 290 "trace_params.m"
                  else
#line 289 "trace_params.m"
                    libs__trace_params__EffTraceLevel_10 = (MR_Integer) 2;
#line 286 "trace_params.m"
                }
#line 302 "trace_params.m"
              else
#line 303 "trace_params.m"
                libs__trace_params__EffTraceLevel_10 = libs__trace_params__TraceLevel_9;
#line 279 "trace_params.m"
            }
#line 217 "trace_params.m"
      }
#line 216 "trace_params.m"
    return libs__trace_params__EffTraceLevel_10;
#line 216 "trace_params.m"
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
#line 336 "trace_params.m"
  {
#line 336 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 336 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__7_7;
#line 336 "trace_params.m"
    MR_Word libs__trace_params__V_14_14;
#line 611 "trace_params.m"
    MR_Word libs__trace_params__Category_19;
#line 611 "trace_params.m"
    MR_Word libs__trace_params__V_20_20;
#line 614 "trace_params.m"
    MR_Word libs__trace_params__TypeCtorInfo_14_24;
#line 614 "trace_params.m"
    MR_Word libs__trace_params__V_22_22;

#line 338 "trace_params.m"
    {
#line 338 "trace_params.m"
      libs__trace_params__V_14_14 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_8, libs__trace_params__PredInfo_9, libs__trace_params__ProcInfo_10, libs__trace_params__TraceLevel_11);
    }
#line 572 "trace_params.m"
    if ((libs__trace_params__Port_13 == (MR_Integer) 0))
#line 572 "trace_params.m"
      libs__trace_params__Category_19 = (MR_Integer) 0;
#line 572 "trace_params.m"
    else
#line 572 "trace_params.m"
      if ((libs__trace_params__Port_13 == (MR_Integer) 12))
#line 584 "trace_params.m"
        libs__trace_params__Category_19 = (MR_Integer) 1;
#line 572 "trace_params.m"
      else
#line 572 "trace_params.m"
        if ((libs__trace_params__Port_13 == (MR_Integer) 13))
#line 585 "trace_params.m"
          libs__trace_params__Category_19 = (MR_Integer) 1;
#line 572 "trace_params.m"
        else
#line 572 "trace_params.m"
          if ((libs__trace_params__Port_13 == (MR_Integer) 5))
#line 576 "trace_params.m"
            libs__trace_params__Category_19 = (MR_Integer) 0;
#line 572 "trace_params.m"
          else
#line 572 "trace_params.m"
            if ((libs__trace_params__Port_13 == (MR_Integer) 1))
#line 573 "trace_params.m"
              libs__trace_params__Category_19 = (MR_Integer) 0;
#line 572 "trace_params.m"
            else
#line 572 "trace_params.m"
              if ((libs__trace_params__Port_13 == (MR_Integer) 3))
#line 574 "trace_params.m"
                libs__trace_params__Category_19 = (MR_Integer) 0;
#line 572 "trace_params.m"
              else
#line 572 "trace_params.m"
                if ((libs__trace_params__Port_13 == (MR_Integer) 6))
#line 577 "trace_params.m"
                  libs__trace_params__Category_19 = (MR_Integer) 2;
#line 572 "trace_params.m"
                else
#line 572 "trace_params.m"
                  if ((libs__trace_params__Port_13 == (MR_Integer) 8))
#line 579 "trace_params.m"
                    libs__trace_params__Category_19 = (MR_Integer) 1;
#line 572 "trace_params.m"
                  else
#line 572 "trace_params.m"
                    if ((libs__trace_params__Port_13 == (MR_Integer) 7))
#line 578 "trace_params.m"
                      libs__trace_params__Category_19 = (MR_Integer) 1;
#line 572 "trace_params.m"
                    else
#line 572 "trace_params.m"
                      if ((libs__trace_params__Port_13 == (MR_Integer) 9))
#line 580 "trace_params.m"
                        libs__trace_params__Category_19 = (MR_Integer) 2;
#line 572 "trace_params.m"
                      else
#line 572 "trace_params.m"
                        if ((libs__trace_params__Port_13 == (MR_Integer) 11))
#line 582 "trace_params.m"
                          libs__trace_params__Category_19 = (MR_Integer) 2;
#line 572 "trace_params.m"
                        else
#line 572 "trace_params.m"
                          if ((libs__trace_params__Port_13 == (MR_Integer) 10))
#line 581 "trace_params.m"
                            libs__trace_params__Category_19 = (MR_Integer) 2;
#line 572 "trace_params.m"
                          else
#line 572 "trace_params.m"
                            if ((libs__trace_params__Port_13 == (MR_Integer) 2))
#line 575 "trace_params.m"
                              libs__trace_params__Category_19 = (MR_Integer) 0;
#line 572 "trace_params.m"
                            else
#line 572 "trace_params.m"
                              if ((libs__trace_params__Port_13 == (MR_Integer) 14))
#line 583 "trace_params.m"
                                libs__trace_params__Category_19 = (MR_Integer) 1;
#line 572 "trace_params.m"
                              else
#line 572 "trace_params.m"
                                if ((libs__trace_params__Port_13 == (MR_Integer) 4))
#line 586 "trace_params.m"
                                  libs__trace_params__Category_19 = (MR_Integer) 0;
#line 572 "trace_params.m"
                                else
#line 587 "trace_params.m"
                                  libs__trace_params__Category_19 = (MR_Integer) 3;
#line 591 "trace_params.m"
    if ((libs__trace_params__V_14_14 == (MR_Integer) 1))
#line 592 "trace_params.m"
      libs__trace_params__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 591 "trace_params.m"
    else
#line 591 "trace_params.m"
      if ((libs__trace_params__V_14_14 == (MR_Integer) 2))
#line 593 "trace_params.m"
        {
#line 593 "trace_params.m"
          libs__trace_params__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[16]);
#line 593 "trace_params.m"
        }
#line 591 "trace_params.m"
      else
#line 591 "trace_params.m"
        if ((libs__trace_params__V_14_14 == (MR_Integer) 5))
#line 597 "trace_params.m"
          libs__trace_params__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[19]);
#line 591 "trace_params.m"
        else
#line 591 "trace_params.m"
          if ((libs__trace_params__V_14_14 == (MR_Integer) 4))
#line 595 "trace_params.m"
            libs__trace_params__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[19]);
#line 591 "trace_params.m"
          else
#line 591 "trace_params.m"
            if ((libs__trace_params__V_14_14 == (MR_Integer) 0))
#line 591 "trace_params.m"
              libs__trace_params__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 591 "trace_params.m"
            else
#line 594 "trace_params.m"
              {
#line 594 "trace_params.m"
                libs__trace_params__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_1[20]);
#line 594 "trace_params.m"
              }
#line 612 "trace_params.m"
    {
#line 612 "trace_params.m"
      libs__trace_params__succeeded = mercury__list__member_2_p_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_port_category_0, ((MR_Box) (libs__trace_params__Category_19)), libs__trace_params__V_20_20);
    }
#line 611 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 611 "trace_params.m"
      {
#line 602 "trace_params.m"
        if ((libs__trace_params__V_14_14 == (MR_Integer) 1))
#line 603 "trace_params.m"
          libs__trace_params__succeeded = MR_TRUE;
#line 602 "trace_params.m"
        else
#line 602 "trace_params.m"
          if ((libs__trace_params__V_14_14 == (MR_Integer) 2))
#line 604 "trace_params.m"
            libs__trace_params__succeeded = MR_TRUE;
#line 602 "trace_params.m"
          else
#line 602 "trace_params.m"
            if ((libs__trace_params__V_14_14 == (MR_Integer) 4))
#line 606 "trace_params.m"
              libs__trace_params__succeeded = MR_TRUE;
#line 602 "trace_params.m"
            else
#line 602 "trace_params.m"
              if ((libs__trace_params__V_14_14 == (MR_Integer) 3))
#line 605 "trace_params.m"
                libs__trace_params__succeeded = MR_TRUE;
#line 602 "trace_params.m"
              else
#line 602 "trace_params.m"
                libs__trace_params__succeeded = MR_FALSE;
#line 614 "trace_params.m"
        if (libs__trace_params__succeeded)
#line 614 "trace_params.m"
          {
#line 3052 "libs.trace_params.c"
            libs__trace_params__TypeCtorInfo_14_24 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
#line 615 "trace_params.m"
            {
#line 615 "trace_params.m"
              libs__trace_params__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 615 "trace_params.m"
              MR_hl_field(MR_mktag(1), libs__trace_params__V_22_22, 0) = ((MR_Box) (libs__trace_params__Port_13));
#line 615 "trace_params.m"
            }
#line 615 "trace_params.m"
            {
#line 615 "trace_params.m"
              libs__trace_params__succeeded = mercury__set__member_2_p_0(libs__trace_params__TypeCtorInfo_14_24, ((MR_Box) (libs__trace_params__V_22_22)), libs__trace_params__SuppressItems_12);
            }
#line 614 "trace_params.m"
          }
#line 613 "trace_params.m"
        libs__trace_params__succeeded = !(libs__trace_params__succeeded);
#line 611 "trace_params.m"
      }
#line 619 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 618 "trace_params.m"
      libs__trace_params__HeadVar__7_7 = (MR_Integer) 1;
#line 619 "trace_params.m"
    else
#line 620 "trace_params.m"
      libs__trace_params__HeadVar__7_7 = (MR_Integer) 0;
#line 336 "trace_params.m"
    return libs__trace_params__HeadVar__7_7;
#line 336 "trace_params.m"
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
#line 331 "trace_params.m"
  {
#line 331 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 331 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__6_6;
#line 331 "trace_params.m"
    MR_Word libs__trace_params__V_12_12;

#line 333 "trace_params.m"
    {
#line 333 "trace_params.m"
      libs__trace_params__V_12_12 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_7, libs__trace_params__PredInfo_8, libs__trace_params__ProcInfo_9, libs__trace_params__TraceLevel_10);
    }
#line 332 "trace_params.m"
    {
#line 332 "trace_params.m"
      return libs__trace_params__HeadVar__6_6 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(libs__trace_params__V_12_12, libs__trace_params__SuppressItems_11);
    }
#line 331 "trace_params.m"
    return libs__trace_params__HeadVar__6_6;
#line 331 "trace_params.m"
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
#line 326 "trace_params.m"
  {
#line 326 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 326 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__6_6;
#line 326 "trace_params.m"
    MR_Word libs__trace_params__V_12_12;
#line 418 "trace_params.m"
    MR_Word libs__trace_params__TypeCtorInfo_9_18;
#line 418 "trace_params.m"
    MR_Word libs__trace_params__V_17_17;

#line 328 "trace_params.m"
    {
#line 328 "trace_params.m"
      libs__trace_params__V_12_12 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_7, libs__trace_params__PredInfo_8, libs__trace_params__ProcInfo_9, libs__trace_params__TraceLevel_10);
    }
#line 3162 "libs.trace_params.c"
    libs__trace_params__succeeded = (libs__trace_params__V_12_12 == (MR_Integer) 5);
#line 417 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 417 "trace_params.m"
      {
#line 418 "trace_params.m"
        libs__trace_params__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 3170 "libs.trace_params.c"
        libs__trace_params__TypeCtorInfo_9_18 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
#line 418 "trace_params.m"
        {
#line 418 "trace_params.m"
          libs__trace_params__succeeded = mercury__set__member_2_p_0(libs__trace_params__TypeCtorInfo_9_18, ((MR_Box) (libs__trace_params__V_17_17)), libs__trace_params__SuppressItems_11);
        }
#line 418 "trace_params.m"
        libs__trace_params__succeeded = !(libs__trace_params__succeeded);
#line 417 "trace_params.m"
      }
#line 421 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 420 "trace_params.m"
      libs__trace_params__HeadVar__6_6 = (MR_Integer) 1;
#line 421 "trace_params.m"
    else
#line 422 "trace_params.m"
      libs__trace_params__HeadVar__6_6 = (MR_Integer) 0;
#line 326 "trace_params.m"
    return libs__trace_params__HeadVar__6_6;
#line 326 "trace_params.m"
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
#line 322 "trace_params.m"
  {
#line 322 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 322 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__5_5;
#line 322 "trace_params.m"
    MR_Word libs__trace_params__V_10_10;

#line 324 "trace_params.m"
    {
#line 324 "trace_params.m"
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
#line 377 "trace_params.m"
    if ((libs__trace_params__V_10_10 == (MR_Integer) 1))
#line 378 "trace_params.m"
      libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 377 "trace_params.m"
    else
#line 377 "trace_params.m"
      if ((libs__trace_params__V_10_10 == (MR_Integer) 2))
#line 379 "trace_params.m"
        libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 377 "trace_params.m"
      else
#line 377 "trace_params.m"
        if ((libs__trace_params__V_10_10 == (MR_Integer) 5))
#line 382 "trace_params.m"
          libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 377 "trace_params.m"
        else
#line 377 "trace_params.m"
          if ((libs__trace_params__V_10_10 == (MR_Integer) 4))
#line 381 "trace_params.m"
            libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 377 "trace_params.m"
          else
#line 377 "trace_params.m"
            if ((libs__trace_params__V_10_10 == (MR_Integer) 0))
#line 377 "trace_params.m"
              libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 377 "trace_params.m"
            else
#line 380 "trace_params.m"
              libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 322 "trace_params.m"
    return libs__trace_params__HeadVar__5_5;
#line 322 "trace_params.m"
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
#line 318 "trace_params.m"
  {
#line 318 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 318 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__5_5;
#line 318 "trace_params.m"
    MR_Word libs__trace_params__V_10_10;

#line 320 "trace_params.m"
    {
#line 320 "trace_params.m"
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
#line 370 "trace_params.m"
    if ((libs__trace_params__V_10_10 == (MR_Integer) 1))
#line 371 "trace_params.m"
      libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 370 "trace_params.m"
    else
#line 370 "trace_params.m"
      if ((libs__trace_params__V_10_10 == (MR_Integer) 2))
#line 372 "trace_params.m"
        libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 370 "trace_params.m"
      else
#line 370 "trace_params.m"
        if ((libs__trace_params__V_10_10 == (MR_Integer) 5))
#line 375 "trace_params.m"
          libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 370 "trace_params.m"
        else
#line 370 "trace_params.m"
          if ((libs__trace_params__V_10_10 == (MR_Integer) 4))
#line 374 "trace_params.m"
            libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 370 "trace_params.m"
          else
#line 370 "trace_params.m"
            if ((libs__trace_params__V_10_10 == (MR_Integer) 0))
#line 370 "trace_params.m"
              libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 370 "trace_params.m"
            else
#line 373 "trace_params.m"
              libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 318 "trace_params.m"
    return libs__trace_params__HeadVar__5_5;
#line 318 "trace_params.m"
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
#line 315 "trace_params.m"
  {
#line 315 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 315 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__5_5;
#line 315 "trace_params.m"
    MR_Word libs__trace_params__V_10_10;

#line 317 "trace_params.m"
    {
#line 317 "trace_params.m"
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
#line 363 "trace_params.m"
    if ((libs__trace_params__V_10_10 == (MR_Integer) 1))
#line 364 "trace_params.m"
      libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 363 "trace_params.m"
    else
#line 363 "trace_params.m"
      if ((libs__trace_params__V_10_10 == (MR_Integer) 2))
#line 365 "trace_params.m"
        libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 363 "trace_params.m"
      else
#line 363 "trace_params.m"
        if ((libs__trace_params__V_10_10 == (MR_Integer) 5))
#line 368 "trace_params.m"
          libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 363 "trace_params.m"
        else
#line 363 "trace_params.m"
          if ((libs__trace_params__V_10_10 == (MR_Integer) 4))
#line 367 "trace_params.m"
            libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 363 "trace_params.m"
          else
#line 363 "trace_params.m"
            if ((libs__trace_params__V_10_10 == (MR_Integer) 0))
#line 363 "trace_params.m"
              libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 363 "trace_params.m"
            else
#line 366 "trace_params.m"
              libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 315 "trace_params.m"
    return libs__trace_params__HeadVar__5_5;
#line 315 "trace_params.m"
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
#line 312 "trace_params.m"
  {
#line 312 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 312 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__5_5;
#line 312 "trace_params.m"
    MR_Word libs__trace_params__V_10_10;

#line 314 "trace_params.m"
    {
#line 314 "trace_params.m"
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
#line 356 "trace_params.m"
    if ((libs__trace_params__V_10_10 == (MR_Integer) 1))
#line 357 "trace_params.m"
      libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 356 "trace_params.m"
    else
#line 356 "trace_params.m"
      if ((libs__trace_params__V_10_10 == (MR_Integer) 2))
#line 358 "trace_params.m"
        libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 356 "trace_params.m"
      else
#line 356 "trace_params.m"
        if ((libs__trace_params__V_10_10 == (MR_Integer) 5))
#line 361 "trace_params.m"
          libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 356 "trace_params.m"
        else
#line 356 "trace_params.m"
          if ((libs__trace_params__V_10_10 == (MR_Integer) 4))
#line 360 "trace_params.m"
            libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 356 "trace_params.m"
          else
#line 356 "trace_params.m"
            if ((libs__trace_params__V_10_10 == (MR_Integer) 0))
#line 356 "trace_params.m"
              libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 356 "trace_params.m"
            else
#line 359 "trace_params.m"
              libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 312 "trace_params.m"
    return libs__trace_params__HeadVar__5_5;
#line 312 "trace_params.m"
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
#line 309 "trace_params.m"
  {
#line 309 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 309 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__5_5;
#line 309 "trace_params.m"
    MR_Word libs__trace_params__V_10_10;

#line 311 "trace_params.m"
    {
#line 311 "trace_params.m"
      libs__trace_params__V_10_10 = libs__trace_params__eff_trace_level_4_f_0(libs__trace_params__ModuleInfo_6, libs__trace_params__PredInfo_7, libs__trace_params__ProcInfo_8, libs__trace_params__TraceLevel_9);
    }
#line 349 "trace_params.m"
    if ((libs__trace_params__V_10_10 == (MR_Integer) 1))
#line 350 "trace_params.m"
      libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 349 "trace_params.m"
    else
#line 349 "trace_params.m"
      if ((libs__trace_params__V_10_10 == (MR_Integer) 2))
#line 351 "trace_params.m"
        libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 349 "trace_params.m"
      else
#line 349 "trace_params.m"
        if ((libs__trace_params__V_10_10 == (MR_Integer) 5))
#line 354 "trace_params.m"
          libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 349 "trace_params.m"
        else
#line 349 "trace_params.m"
          if ((libs__trace_params__V_10_10 == (MR_Integer) 4))
#line 353 "trace_params.m"
            libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 349 "trace_params.m"
          else
#line 349 "trace_params.m"
            if ((libs__trace_params__V_10_10 == (MR_Integer) 0))
#line 349 "trace_params.m"
              libs__trace_params__HeadVar__5_5 = (MR_Integer) 1;
#line 349 "trace_params.m"
            else
#line 352 "trace_params.m"
              libs__trace_params__HeadVar__5_5 = (MR_Integer) 0;
#line 309 "trace_params.m"
    return libs__trace_params__HeadVar__5_5;
#line 309 "trace_params.m"
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
#line 431 "trace_params.m"
  {
#line 431 "trace_params.m"
    MR_bool libs__trace_params__succeeded = (libs__trace_params__TraceLevel_4 == (MR_Integer) 5);
#line 431 "trace_params.m"
    MR_Word libs__trace_params__Need_6;
#line 428 "trace_params.m"
    MR_Word libs__trace_params__TypeCtorInfo_9_9;
#line 428 "trace_params.m"
    MR_Word libs__trace_params__V_8_8;

#line 427 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 427 "trace_params.m"
      {
#line 428 "trace_params.m"
        libs__trace_params__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 3552 "libs.trace_params.c"
        libs__trace_params__TypeCtorInfo_9_9 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
#line 428 "trace_params.m"
        {
#line 428 "trace_params.m"
          libs__trace_params__succeeded = mercury__set__member_2_p_0(libs__trace_params__TypeCtorInfo_9_9, ((MR_Box) (libs__trace_params__V_8_8)), libs__trace_params__TraceSuppressItems_5);
        }
#line 428 "trace_params.m"
        libs__trace_params__succeeded = !(libs__trace_params__succeeded);
#line 427 "trace_params.m"
      }
#line 431 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 430 "trace_params.m"
      libs__trace_params__Need_6 = (MR_Integer) 1;
#line 431 "trace_params.m"
    else
#line 432 "trace_params.m"
      libs__trace_params__Need_6 = (MR_Integer) 0;
#line 431 "trace_params.m"
    return libs__trace_params__Need_6;
#line 431 "trace_params.m"
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
#line 391 "trace_params.m"
  {
#line 391 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 391 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2;

#line 391 "trace_params.m"
    if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 1))
#line 392 "trace_params.m"
      libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 391 "trace_params.m"
    else
#line 391 "trace_params.m"
      if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 2))
#line 393 "trace_params.m"
        libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 391 "trace_params.m"
      else
#line 391 "trace_params.m"
        if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 5))
#line 396 "trace_params.m"
          libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 391 "trace_params.m"
        else
#line 391 "trace_params.m"
          if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 4))
#line 395 "trace_params.m"
            libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 391 "trace_params.m"
          else
#line 391 "trace_params.m"
            if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 0))
#line 391 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 391 "trace_params.m"
            else
#line 394 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 391 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 391 "trace_params.m"
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
#line 398 "trace_params.m"
  {
#line 398 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 398 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2;

#line 398 "trace_params.m"
    if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 1))
#line 399 "trace_params.m"
      libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 398 "trace_params.m"
    else
#line 398 "trace_params.m"
      if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 2))
#line 400 "trace_params.m"
        libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 398 "trace_params.m"
      else
#line 398 "trace_params.m"
        if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 5))
#line 403 "trace_params.m"
          libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 398 "trace_params.m"
        else
#line 398 "trace_params.m"
          if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 4))
#line 402 "trace_params.m"
            libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 398 "trace_params.m"
          else
#line 398 "trace_params.m"
            if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 0))
#line 398 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 398 "trace_params.m"
            else
#line 401 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 398 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 398 "trace_params.m"
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
#line 411 "trace_params.m"
  {
#line 411 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 411 "trace_params.m"
    MR_Word libs__trace_params__Need_6;
#line 408 "trace_params.m"
    MR_Word libs__trace_params__TypeCtorInfo_9_9;
#line 408 "trace_params.m"
    MR_Word libs__trace_params__V_8_8;

#line 439 "trace_params.m"
    if ((libs__trace_params__TraceLevel_4 == (MR_Integer) 1))
#line 440 "trace_params.m"
      libs__trace_params__succeeded = MR_TRUE;
#line 439 "trace_params.m"
    else
#line 439 "trace_params.m"
      if ((libs__trace_params__TraceLevel_4 == (MR_Integer) 2))
#line 441 "trace_params.m"
        libs__trace_params__succeeded = MR_TRUE;
#line 439 "trace_params.m"
      else
#line 439 "trace_params.m"
        if ((libs__trace_params__TraceLevel_4 == (MR_Integer) 5))
#line 444 "trace_params.m"
          libs__trace_params__succeeded = MR_TRUE;
#line 439 "trace_params.m"
        else
#line 439 "trace_params.m"
          if ((libs__trace_params__TraceLevel_4 == (MR_Integer) 4))
#line 443 "trace_params.m"
            libs__trace_params__succeeded = MR_TRUE;
#line 439 "trace_params.m"
          else
#line 439 "trace_params.m"
            if ((libs__trace_params__TraceLevel_4 == (MR_Integer) 3))
#line 442 "trace_params.m"
              libs__trace_params__succeeded = MR_TRUE;
#line 439 "trace_params.m"
            else
#line 439 "trace_params.m"
              libs__trace_params__succeeded = MR_FALSE;
#line 407 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 407 "trace_params.m"
      {
#line 408 "trace_params.m"
        libs__trace_params__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3742 "libs.trace_params.c"
        libs__trace_params__TypeCtorInfo_9_9 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
#line 408 "trace_params.m"
        {
#line 408 "trace_params.m"
          libs__trace_params__succeeded = mercury__set__member_2_p_0(libs__trace_params__TypeCtorInfo_9_9, ((MR_Box) (libs__trace_params__V_8_8)), libs__trace_params__TraceSuppressItems_5);
        }
#line 408 "trace_params.m"
        libs__trace_params__succeeded = !(libs__trace_params__succeeded);
#line 407 "trace_params.m"
      }
#line 411 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 410 "trace_params.m"
      libs__trace_params__Need_6 = (MR_Integer) 1;
#line 411 "trace_params.m"
    else
#line 412 "trace_params.m"
      libs__trace_params__Need_6 = (MR_Integer) 0;
#line 411 "trace_params.m"
    return libs__trace_params__Need_6;
#line 411 "trace_params.m"
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
#line 384 "trace_params.m"
  {
#line 384 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 384 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2;

#line 384 "trace_params.m"
    if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 1))
#line 385 "trace_params.m"
      libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 384 "trace_params.m"
    else
#line 384 "trace_params.m"
      if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 2))
#line 386 "trace_params.m"
        libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 384 "trace_params.m"
      else
#line 384 "trace_params.m"
        if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 5))
#line 389 "trace_params.m"
          libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 384 "trace_params.m"
        else
#line 384 "trace_params.m"
          if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 4))
#line 388 "trace_params.m"
            libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 384 "trace_params.m"
          else
#line 384 "trace_params.m"
            if ((libs__trace_params__HeadVar__1_1 == (MR_Integer) 0))
#line 384 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 384 "trace_params.m"
            else
#line 387 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 384 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 384 "trace_params.m"
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
#line 349 "trace_params.m"
  {
#line 349 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 349 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__2_2;

#line 349 "trace_params.m"
    if ((libs__trace_params__TraceLevel_3 == (MR_Integer) 1))
#line 350 "trace_params.m"
      libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 349 "trace_params.m"
    else
#line 349 "trace_params.m"
      if ((libs__trace_params__TraceLevel_3 == (MR_Integer) 2))
#line 351 "trace_params.m"
        libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 349 "trace_params.m"
      else
#line 349 "trace_params.m"
        if ((libs__trace_params__TraceLevel_3 == (MR_Integer) 5))
#line 354 "trace_params.m"
          libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 349 "trace_params.m"
        else
#line 349 "trace_params.m"
          if ((libs__trace_params__TraceLevel_3 == (MR_Integer) 4))
#line 353 "trace_params.m"
            libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 349 "trace_params.m"
          else
#line 349 "trace_params.m"
            if ((libs__trace_params__TraceLevel_3 == (MR_Integer) 0))
#line 349 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 1;
#line 349 "trace_params.m"
            else
#line 352 "trace_params.m"
              libs__trace_params__HeadVar__2_2 = (MR_Integer) 0;
#line 349 "trace_params.m"
    return libs__trace_params__HeadVar__2_2;
#line 349 "trace_params.m"
  }
#line 72 "trace_params.m"
}

#line 68 "trace_params.m"
MR_Word MR_CALL 
libs__trace_params__default_trace_suppress_0_f_0(void)
#line 68 "trace_params.m"
{
#line 470 "trace_params.m"
  {
#line 470 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 470 "trace_params.m"
    MR_Word libs__trace_params__HeadVar__1_1;

#line 470 "trace_params.m"
    {
#line 470 "trace_params.m"
      libs__trace_params__HeadVar__1_1 = mercury__set__init_0_f_0((MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0);
    }
#line 470 "trace_params.m"
    return libs__trace_params__HeadVar__1_1;
#line 470 "trace_params.m"
  }
#line 68 "trace_params.m"
}

#line 462 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_2(
#line 462 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 462 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1,
#line 462 "trace_params.m"
  MR_Box * libs__trace_params__wrapper_arg_2)
#line 462 "trace_params.m"
{
#line 462 "trace_params.m"
  {
#line 462 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 462 "trace_params.m"
    MR_Box libs__trace_params__closure = libs__trace_params__closure_arg;
#line 462 "trace_params.m"
    MR_Word libs__trace_params__conv0_Names_4;

#line 462 "trace_params.m"
    {
#line 462 "trace_params.m"
      libs__trace_params__succeeded = libs__trace_params__convert_item_name_2_p_0(((MR_String) libs__trace_params__wrapper_arg_1), &libs__trace_params__conv0_Names_4);
    }
#line 462 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 462 "trace_params.m"
      {
#line 462 "trace_params.m"
        *libs__trace_params__wrapper_arg_2 = ((MR_Box) (libs__trace_params__conv0_Names_4));
#line 462 "trace_params.m"
        libs__trace_params__succeeded = MR_TRUE;
#line 462 "trace_params.m"
      }
#line 462 "trace_params.m"
    return libs__trace_params__succeeded;
#line 462 "trace_params.m"
  }
#line 462 "trace_params.m"
}

#line 461 "trace_params.m"
static MR_bool MR_CALL 
libs__trace_params__convert_trace_suppress_2_p_0_1(
#line 461 "trace_params.m"
  MR_Box libs__trace_params__closure_arg,
#line 461 "trace_params.m"
  MR_Box libs__trace_params__wrapper_arg_1)
#line 461 "trace_params.m"
{
#line 461 "trace_params.m"
  {
#line 461 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 461 "trace_params.m"
    MR_Box libs__trace_params__closure = libs__trace_params__closure_arg;

#line 461 "trace_params.m"
    {
#line 461 "trace_params.m"
      return libs__trace_params__succeeded = libs__trace_params__char_is_comma_1_p_0(((MR_Char) (MR_Word) libs__trace_params__wrapper_arg_1));
    }
#line 461 "trace_params.m"
    return libs__trace_params__succeeded;
#line 461 "trace_params.m"
  }
#line 461 "trace_params.m"
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
#line 460 "trace_params.m"
  {
#line 460 "trace_params.m"
    MR_bool libs__trace_params__succeeded;
#line 460 "trace_params.m"
    MR_Word libs__trace_params__TypeCtorInfo_15_15;
#line 460 "trace_params.m"
    MR_Word libs__trace_params__SuppressWords_5;
#line 460 "trace_params.m"
    MR_Word libs__trace_params__SuppressItemLists_6;
#line 460 "trace_params.m"
    MR_Word libs__trace_params__SuppressItems_7;

#line 461 "trace_params.m"
    {
#line 461 "trace_params.m"
      libs__trace_params__SuppressWords_5 = mercury__string__words_separator_2_f_0((MR_Word) &libs__trace_params_scalar_common_4[0], libs__trace_params__SuppressString_3);
    }
#line 462 "trace_params.m"
    {
#line 462 "trace_params.m"
      libs__trace_params__succeeded = mercury__list__map_3_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__trace_params_scalar_common_1[0], (MR_Word) &libs__trace_params_scalar_common_4[1], libs__trace_params__SuppressWords_5, &libs__trace_params__SuppressItemLists_6);
    }
#line 460 "trace_params.m"
    if (libs__trace_params__succeeded)
#line 460 "trace_params.m"
      {
#line 4004 "libs.trace_params.c"
        libs__trace_params__TypeCtorInfo_15_15 = (MR_Word) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0;
#line 463 "trace_params.m"
        {
#line 463 "trace_params.m"
          mercury__list__condense_2_p_0(libs__trace_params__TypeCtorInfo_15_15, libs__trace_params__SuppressItemLists_6, &libs__trace_params__SuppressItems_7);
        }
#line 464 "trace_params.m"
        {
#line 464 "trace_params.m"
          mercury__set__list_to_set_2_p_0(libs__trace_params__TypeCtorInfo_15_15, libs__trace_params__SuppressItems_7, libs__trace_params__SuppressItemSet_4);
        }
#line 464 "trace_params.m"
        libs__trace_params__succeeded = MR_TRUE;
#line 460 "trace_params.m"
      }
#line 460 "trace_params.m"
    return libs__trace_params__succeeded;
#line 460 "trace_params.m"
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
#line 200 "trace_params.m"
  {
#line 200 "trace_params.m"
    MR_bool libs__trace_params__succeeded;

#line 200 "trace_params.m"
    if ((strcmp(libs__trace_params__HeadVar__1_1, (MR_String) "rep") == 0))
#line 208 "trace_params.m"
      {
#line 208 "trace_params.m"
        *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_2[0]);
#line 208 "trace_params.m"
        libs__trace_params__succeeded = MR_TRUE;
#line 208 "trace_params.m"
      }
#line 200 "trace_params.m"
    else
#line 200 "trace_params.m"
      if ((strcmp(libs__trace_params__HeadVar__1_1, (MR_String) "decl") == 0))
#line 207 "trace_params.m"
        {
#line 207 "trace_params.m"
          *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_2[0]);
#line 207 "trace_params.m"
          libs__trace_params__succeeded = MR_TRUE;
#line 207 "trace_params.m"
        }
#line 200 "trace_params.m"
      else
#line 200 "trace_params.m"
        if ((strcmp(libs__trace_params__HeadVar__1_1, (MR_String) "deep") == 0))
#line 200 "trace_params.m"
          {
#line 200 "trace_params.m"
            if ((libs__trace_params__HeadVar__3_3 == (MR_Integer) 0))
#line 205 "trace_params.m"
              {
#line 205 "trace_params.m"
                *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_2[1]);
#line 205 "trace_params.m"
              }
#line 200 "trace_params.m"
            else
#line 206 "trace_params.m"
              *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 200 "trace_params.m"
            libs__trace_params__succeeded = MR_TRUE;
#line 200 "trace_params.m"
          }
#line 200 "trace_params.m"
        else
#line 200 "trace_params.m"
          if ((strcmp(libs__trace_params__HeadVar__1_1, (MR_String) "default") == 0))
#line 200 "trace_params.m"
            {
#line 200 "trace_params.m"
              if ((libs__trace_params__HeadVar__3_3 == (MR_Integer) 0))
#line 200 "trace_params.m"
                if ((libs__trace_params__HeadVar__2_2 == (MR_Integer) 0))
#line 209 "trace_params.m"
                  {
#line 209 "trace_params.m"
                    *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_2[2]);
#line 209 "trace_params.m"
                  }
#line 200 "trace_params.m"
                else
#line 210 "trace_params.m"
                  {
#line 210 "trace_params.m"
                    *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_2[1]);
#line 210 "trace_params.m"
                  }
#line 200 "trace_params.m"
              else
#line 211 "trace_params.m"
                {
#line 211 "trace_params.m"
                  *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_2[0]);
#line 211 "trace_params.m"
                }
#line 200 "trace_params.m"
              libs__trace_params__succeeded = MR_TRUE;
#line 200 "trace_params.m"
            }
#line 200 "trace_params.m"
          else
#line 200 "trace_params.m"
            if ((strcmp(libs__trace_params__HeadVar__1_1, (MR_String) "minimum") == 0))
#line 200 "trace_params.m"
              {
#line 200 "trace_params.m"
                if ((libs__trace_params__HeadVar__3_3 == (MR_Integer) 0))
#line 200 "trace_params.m"
                  if ((libs__trace_params__HeadVar__2_2 == (MR_Integer) 0))
#line 200 "trace_params.m"
                    {
#line 200 "trace_params.m"
                      *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_2[2]);
#line 200 "trace_params.m"
                    }
#line 200 "trace_params.m"
                  else
#line 201 "trace_params.m"
                    {
#line 201 "trace_params.m"
                      *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_2[3]);
#line 201 "trace_params.m"
                    }
#line 200 "trace_params.m"
                else
#line 202 "trace_params.m"
                  {
#line 202 "trace_params.m"
                    *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_2[0]);
#line 202 "trace_params.m"
                  }
#line 200 "trace_params.m"
                libs__trace_params__succeeded = MR_TRUE;
#line 200 "trace_params.m"
              }
#line 200 "trace_params.m"
            else
#line 200 "trace_params.m"
              if ((strcmp(libs__trace_params__HeadVar__1_1, (MR_String) "shallow") == 0))
#line 200 "trace_params.m"
                {
#line 200 "trace_params.m"
                  if ((libs__trace_params__HeadVar__3_3 == (MR_Integer) 0))
#line 203 "trace_params.m"
                    {
#line 203 "trace_params.m"
                      *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &libs__trace_params_scalar_common_2[3]);
#line 203 "trace_params.m"
                    }
#line 200 "trace_params.m"
                  else
#line 204 "trace_params.m"
                    *libs__trace_params__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 200 "trace_params.m"
                  libs__trace_params__succeeded = MR_TRUE;
#line 200 "trace_params.m"
                }
#line 200 "trace_params.m"
              else
#line 200 "trace_params.m"
                libs__trace_params__succeeded = MR_FALSE;
#line 200 "trace_params.m"
    return libs__trace_params__succeeded;
#line 200 "trace_params.m"
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
