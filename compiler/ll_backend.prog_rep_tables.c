/*
** Automatically generated from `prog_rep_tables.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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


/* :- module ll_backend.prog_rep_tables. */
/* :- implementation. */

/*
INIT mercury__ll_backend__prog_rep_tables__init
ENDINIT
*/

#include "ll_backend.prog_rep_tables.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "ll_backend.mih"
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
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
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




#line 133 "ll_backend.prog_rep_tables.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 136 "ll_backend.prog_rep_tables.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0;

#line 139 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 142 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__list__ti_list_1builtin__type_ctor_info_string_0;

#line 145 "ll_backend.prog_rep_tables.c"
static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_string_table_info_0_0[3];

#line 148 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0;

#line 151 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_string_table_info_0_0[1];

#line 154 "ll_backend.prog_rep_tables.c"
static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_string_table_info_0[1];

#line 157 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_string_table_info_0[1];

#line 160 "ll_backend.prog_rep_tables.c"
static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_string_table_info_0[1];

#line 163 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0;

#line 166 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__cord__ti_cord_1builtin__type_ctor_info_int_0;

#line 169 "ll_backend.prog_rep_tables.c"
static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_type_table_info_0_0[3];

#line 172 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0;

#line 175 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_type_table_info_0_0[1];

#line 178 "ll_backend.prog_rep_tables.c"
static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_type_table_info_0[1];

#line 181 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_type_table_info_0[1];

#line 184 "ll_backend.prog_rep_tables.c"
static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_type_table_info_0[1];

#line 187 "ll_backend.prog_rep_tables.c"
static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____string_table_info_0_0_10001(
#line 190 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 192 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2);

#line 195 "ll_backend.prog_rep_tables.c"
static void MR_CALL 
ll_backend__prog_rep_tables____Compare____string_table_info_0_0_10001(
#line 198 "ll_backend.prog_rep_tables.c"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_1,
#line 200 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2,
#line 202 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3);

#line 205 "ll_backend.prog_rep_tables.c"
static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____type_table_info_0_0_10001(
#line 208 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 210 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2);

#line 213 "ll_backend.prog_rep_tables.c"
static void MR_CALL 
ll_backend__prog_rep_tables____Compare____type_table_info_0_0_10001(
#line 216 "ll_backend.prog_rep_tables.c"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_1,
#line 218 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2,
#line 220 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3);

#line 390 "prog_rep_tables.m"
static MR_Word MR_CALL 
ll_backend__prog_rep_tables__IntroducedFrom__func__encode_arg_type_codes__390__1_1_f_0(
#line 390 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_18);

#line 390 "prog_rep_tables.m"
static MR_Box MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_2(
#line 390 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 390 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1);

#line 389 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_1(
#line 389 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 389 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 389 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2);

#line 386 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(
#line 386 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_3,
#line 386 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__ArgTypeBytesCord_4);

#line 340 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_3(
#line 340 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 340 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 340 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
#line 340 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
#line 340 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
#line 340 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
#line 340 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6);

#line 347 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_2(
#line 347 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 347 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 347 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
#line 347 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
#line 347 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
#line 347 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
#line 347 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6);

#line 288 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_1(
#line 288 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 288 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 288 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
#line 288 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
#line 288 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
#line 288 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
#line 288 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6);

#line 279 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0(
#line 279 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__Type_7,
#line 279 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__TypeCode_8,
#line 279 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48,
#line 279 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49,
#line 279 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50,
#line 279 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_51);

#line 220 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__lookup_raw_string_in_table_4_p_0(
#line 220 "prog_rep_tables.m"
  MR_String ll_backend__prog_rep_tables__String_5,
#line 220 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__MaybeOffset_6,
#line 220 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16,
#line 220 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17);

#line 206 "prog_rep_tables.m"
static MR_bool MR_CALL 
ll_backend__prog_rep_tables__rev_find_number_suffix_6_p_0(
#line 206 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_1,
#line 206 "prog_rep_tables.m"
  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13,
#line 206 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__STATE_VARIABLE_Num_14,
#line 206 "prog_rep_tables.m"
  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15,
#line 206 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_16,
#line 206 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__RevRest_11);


static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_2[7][3];

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_3[1][9];

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_4[2][5];




static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_3[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__add_type_to_table_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_3[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__add_type_to_table_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_3[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__add_type_to_table_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_4[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_4[1])),
    ((MR_Box) (ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0))
  },
};



#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
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



#line 479 "ll_backend.prog_rep_tables.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 487 "ll_backend.prog_rep_tables.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 495 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 504 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 512 "ll_backend.prog_rep_tables.c"
static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_string_table_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__prog_rep_tables__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep_tables__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 519 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0 = {
  (MR_String) "string_table_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_string_table_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 534 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_string_table_info_0_0[1] = {
  &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0
};

#line 539 "ll_backend.prog_rep_tables.c"
static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_string_table_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_string_table_info_0_0
  }
};

#line 548 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_string_table_info_0[1] = {
  &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0
};

#line 553 "ll_backend.prog_rep_tables.c"
static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_string_table_info_0[1] = {
  (MR_Integer) 0
};

#line 558 "ll_backend.prog_rep_tables.c"
const MR_TypeCtorInfo_Struct ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__prog_rep_tables____Unify____string_table_info_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep_tables____Compare____string_table_info_0_0_10001)),
  (MR_String) "ll_backend.prog_rep_tables",
  (MR_String) "string_table_info",
  {
    ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_string_table_info_0
  },
  {
    ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_string_table_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_string_table_info_0
};

#line 579 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 588 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 596 "ll_backend.prog_rep_tables.c"
static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_type_table_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__prog_rep_tables__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep_tables__cord__ti_cord_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 603 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0 = {
  (MR_String) "type_table_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_type_table_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 618 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_type_table_info_0_0[1] = {
  &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0
};

#line 623 "ll_backend.prog_rep_tables.c"
static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_type_table_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_type_table_info_0_0
  }
};

#line 632 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_type_table_info_0[1] = {
  &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0
};

#line 637 "ll_backend.prog_rep_tables.c"
static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_type_table_info_0[1] = {
  (MR_Integer) 0
};

#line 642 "ll_backend.prog_rep_tables.c"
const MR_TypeCtorInfo_Struct ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__prog_rep_tables____Unify____type_table_info_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep_tables____Compare____type_table_info_0_0_10001)),
  (MR_String) "ll_backend.prog_rep_tables",
  (MR_String) "type_table_info",
  {
    ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_type_table_info_0
  },
  {
    ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_type_table_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_type_table_info_0
};

#line 663 "ll_backend.prog_rep_tables.c"
static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____string_table_info_0_0_10001(
#line 666 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 668 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2)
#line 670 "ll_backend.prog_rep_tables.c"
{
#line 672 "ll_backend.prog_rep_tables.c"
  {
#line 674 "ll_backend.prog_rep_tables.c"
    MR_bool ll_backend__prog_rep_tables__succeeded;

#line 677 "ll_backend.prog_rep_tables.c"
    {
#line 679 "ll_backend.prog_rep_tables.c"
      ll_backend__prog_rep_tables__succeeded = ll_backend__prog_rep_tables____Unify____string_table_info_0_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_2));
    }
#line 682 "ll_backend.prog_rep_tables.c"
    return ll_backend__prog_rep_tables__succeeded;
#line 684 "ll_backend.prog_rep_tables.c"
  }
#line 686 "ll_backend.prog_rep_tables.c"
}

#line 689 "ll_backend.prog_rep_tables.c"
static void MR_CALL 
ll_backend__prog_rep_tables____Compare____string_table_info_0_0_10001(
#line 692 "ll_backend.prog_rep_tables.c"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_1,
#line 694 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2,
#line 696 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3)
#line 698 "ll_backend.prog_rep_tables.c"
{
#line 700 "ll_backend.prog_rep_tables.c"
  {
#line 702 "ll_backend.prog_rep_tables.c"
    MR_Word ll_backend__prog_rep_tables__conv0_HeadVar__1_1;

#line 705 "ll_backend.prog_rep_tables.c"
    {
#line 707 "ll_backend.prog_rep_tables.c"
      ll_backend__prog_rep_tables____Compare____string_table_info_0_0(&ll_backend__prog_rep_tables__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3));
    }
#line 710 "ll_backend.prog_rep_tables.c"
    *ll_backend__prog_rep_tables__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep_tables__conv0_HeadVar__1_1));
#line 712 "ll_backend.prog_rep_tables.c"
  }
#line 714 "ll_backend.prog_rep_tables.c"
}

#line 717 "ll_backend.prog_rep_tables.c"
static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____type_table_info_0_0_10001(
#line 720 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 722 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2)
#line 724 "ll_backend.prog_rep_tables.c"
{
#line 726 "ll_backend.prog_rep_tables.c"
  {
#line 728 "ll_backend.prog_rep_tables.c"
    MR_bool ll_backend__prog_rep_tables__succeeded;

#line 731 "ll_backend.prog_rep_tables.c"
    {
#line 733 "ll_backend.prog_rep_tables.c"
      ll_backend__prog_rep_tables__succeeded = ll_backend__prog_rep_tables____Unify____type_table_info_0_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_2));
    }
#line 736 "ll_backend.prog_rep_tables.c"
    return ll_backend__prog_rep_tables__succeeded;
#line 738 "ll_backend.prog_rep_tables.c"
  }
#line 740 "ll_backend.prog_rep_tables.c"
}

#line 743 "ll_backend.prog_rep_tables.c"
static void MR_CALL 
ll_backend__prog_rep_tables____Compare____type_table_info_0_0_10001(
#line 746 "ll_backend.prog_rep_tables.c"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_1,
#line 748 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2,
#line 750 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3)
#line 752 "ll_backend.prog_rep_tables.c"
{
#line 754 "ll_backend.prog_rep_tables.c"
  {
#line 756 "ll_backend.prog_rep_tables.c"
    MR_Word ll_backend__prog_rep_tables__conv0_HeadVar__1_1;

#line 759 "ll_backend.prog_rep_tables.c"
    {
#line 761 "ll_backend.prog_rep_tables.c"
      ll_backend__prog_rep_tables____Compare____type_table_info_0_0(&ll_backend__prog_rep_tables__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3));
    }
#line 764 "ll_backend.prog_rep_tables.c"
    *ll_backend__prog_rep_tables__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep_tables__conv0_HeadVar__1_1));
#line 766 "ll_backend.prog_rep_tables.c"
  }
#line 768 "ll_backend.prog_rep_tables.c"
}

#line 390 "prog_rep_tables.m"
static MR_Word MR_CALL 
ll_backend__prog_rep_tables__IntroducedFrom__func__encode_arg_type_codes__390__1_1_f_0(
#line 390 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_18)
#line 390 "prog_rep_tables.m"
{
#line 390 "prog_rep_tables.m"
  {
#line 390 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 390 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__HeadVar__2_19;

#line 390 "prog_rep_tables.m"
    {
#line 390 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__HeadVar__2_19 = mercury__cord__from_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__HeadVar__1_18);
    }
#line 390 "prog_rep_tables.m"
    return ll_backend__prog_rep_tables__HeadVar__2_19;
#line 390 "prog_rep_tables.m"
  }
#line 390 "prog_rep_tables.m"
}

#line 257 "prog_rep_tables.m"
void MR_CALL 
ll_backend__prog_rep_tables____Compare____type_table_info_0_0(
#line 257 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__HeadVar__1_1,
#line 257 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__2_2,
#line 257 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__3_3)
#line 257 "prog_rep_tables.m"
{
#line 257 "prog_rep_tables.m"
  {
#line 257 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 257 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastX_12 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__2_2;
#line 257 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastY_13 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__3_3;

#line 257 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__CastX_12 == ll_backend__prog_rep_tables__CastY_13);
#line 257 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 821 "ll_backend.prog_rep_tables.c"
      *ll_backend__prog_rep_tables__HeadVar__1_1 = (MR_Integer) 0;
#line 257 "prog_rep_tables.m"
    else
#line 257 "prog_rep_tables.m"
      {
#line 257 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 0)));
#line 257 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 1)));
#line 257 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 2)));
#line 257 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 0)));
#line 257 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 1)));
#line 257 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 2)));
#line 257 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_10_10;

#line 257 "prog_rep_tables.m"
        {
#line 257 "prog_rep_tables.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[1], &ll_backend__prog_rep_tables__V_10_10, ((MR_Box) (ll_backend__prog_rep_tables__V_4_4)), ((MR_Box) (ll_backend__prog_rep_tables__V_7_7)));
        }
#line 847 "ll_backend.prog_rep_tables.c"
        ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__V_10_10 == (MR_Integer) 0);
#line 257 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = !(ll_backend__prog_rep_tables__succeeded);
#line 257 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 257 "prog_rep_tables.m"
          *ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__V_10_10;
#line 257 "prog_rep_tables.m"
        else
#line 257 "prog_rep_tables.m"
          {
#line 257 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__V_11_11;

#line 257 "prog_rep_tables.m"
            {
#line 257 "prog_rep_tables.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[1], &ll_backend__prog_rep_tables__V_11_11, ((MR_Box) (ll_backend__prog_rep_tables__V_5_5)), ((MR_Box) (ll_backend__prog_rep_tables__V_8_8)));
            }
#line 867 "ll_backend.prog_rep_tables.c"
            ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__V_11_11 == (MR_Integer) 0);
#line 257 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__succeeded = !(ll_backend__prog_rep_tables__succeeded);
#line 257 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 257 "prog_rep_tables.m"
              *ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__V_11_11;
#line 257 "prog_rep_tables.m"
            else
#line 257 "prog_rep_tables.m"
              {
#line 257 "prog_rep_tables.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__prog_rep_tables__HeadVar__1_1, ll_backend__prog_rep_tables__V_6_6, ll_backend__prog_rep_tables__V_9_9);
#line 257 "prog_rep_tables.m"
                return;
              }
#line 257 "prog_rep_tables.m"
          }
#line 257 "prog_rep_tables.m"
      }
#line 257 "prog_rep_tables.m"
  }
#line 257 "prog_rep_tables.m"
}

#line 257 "prog_rep_tables.m"
MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____type_table_info_0_0(
#line 257 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_1,
#line 257 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__2_2)
#line 257 "prog_rep_tables.m"
{
#line 257 "prog_rep_tables.m"
  {
#line 257 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 257 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastX_9 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__1_1;
#line 257 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastY_10 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__2_2;

#line 257 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__CastX_9 == ll_backend__prog_rep_tables__CastY_10);
#line 257 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 257 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 257 "prog_rep_tables.m"
    else
#line 257 "prog_rep_tables.m"
      {
#line 257 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__TypeInfo_12_12;
#line 257 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 0)));
#line 257 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 1)));
#line 257 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 2)));
#line 257 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 0)));
#line 257 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 1)));
#line 257 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 2)));

#line 936 "ll_backend.prog_rep_tables.c"
        {
#line 938 "ll_backend.prog_rep_tables.c"
          ll_backend__prog_rep_tables__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[1], ((MR_Box) (ll_backend__prog_rep_tables__V_3_3)), ((MR_Box) (ll_backend__prog_rep_tables__V_6_6)));
        }
#line 257 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 257 "prog_rep_tables.m"
          {
#line 945 "ll_backend.prog_rep_tables.c"
            ll_backend__prog_rep_tables__TypeInfo_12_12 = (MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[1];
#line 947 "ll_backend.prog_rep_tables.c"
            {
#line 949 "ll_backend.prog_rep_tables.c"
              ll_backend__prog_rep_tables__succeeded = mercury__builtin__unify_2_p_0(ll_backend__prog_rep_tables__TypeInfo_12_12, ((MR_Box) (ll_backend__prog_rep_tables__V_4_4)), ((MR_Box) (ll_backend__prog_rep_tables__V_7_7)));
            }
#line 257 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 954 "ll_backend.prog_rep_tables.c"
              ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__V_5_5 == ll_backend__prog_rep_tables__V_8_8);
#line 257 "prog_rep_tables.m"
          }
#line 257 "prog_rep_tables.m"
      }
#line 257 "prog_rep_tables.m"
    return ll_backend__prog_rep_tables__succeeded;
#line 257 "prog_rep_tables.m"
  }
#line 257 "prog_rep_tables.m"
}

#line 69 "prog_rep_tables.m"
void MR_CALL 
ll_backend__prog_rep_tables____Compare____string_table_info_0_0(
#line 69 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__HeadVar__1_1,
#line 69 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__2_2,
#line 69 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__3_3)
#line 69 "prog_rep_tables.m"
{
#line 69 "prog_rep_tables.m"
  {
#line 69 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 69 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastX_12 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__2_2;
#line 69 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastY_13 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__3_3;

#line 69 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__CastX_12 == ll_backend__prog_rep_tables__CastY_13);
#line 69 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 991 "ll_backend.prog_rep_tables.c"
      *ll_backend__prog_rep_tables__HeadVar__1_1 = (MR_Integer) 0;
#line 69 "prog_rep_tables.m"
    else
#line 69 "prog_rep_tables.m"
      {
#line 69 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 2)));
#line 69 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 0)));
#line 69 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 1)));
#line 69 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 2)));
#line 69 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_10_10;

#line 69 "prog_rep_tables.m"
        {
#line 69 "prog_rep_tables.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[0], &ll_backend__prog_rep_tables__V_10_10, ((MR_Box) (ll_backend__prog_rep_tables__V_4_4)), ((MR_Box) (ll_backend__prog_rep_tables__V_7_7)));
        }
#line 1017 "ll_backend.prog_rep_tables.c"
        ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__V_10_10 == (MR_Integer) 0);
#line 69 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = !(ll_backend__prog_rep_tables__succeeded);
#line 69 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 69 "prog_rep_tables.m"
          *ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__V_10_10;
#line 69 "prog_rep_tables.m"
        else
#line 69 "prog_rep_tables.m"
          {
#line 69 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__V_11_11;

#line 69 "prog_rep_tables.m"
            {
#line 69 "prog_rep_tables.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[2], &ll_backend__prog_rep_tables__V_11_11, ((MR_Box) (ll_backend__prog_rep_tables__V_5_5)), ((MR_Box) (ll_backend__prog_rep_tables__V_8_8)));
            }
#line 1037 "ll_backend.prog_rep_tables.c"
            ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__V_11_11 == (MR_Integer) 0);
#line 69 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__succeeded = !(ll_backend__prog_rep_tables__succeeded);
#line 69 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 69 "prog_rep_tables.m"
              *ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__V_11_11;
#line 69 "prog_rep_tables.m"
            else
#line 69 "prog_rep_tables.m"
              {
#line 69 "prog_rep_tables.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__prog_rep_tables__HeadVar__1_1, ll_backend__prog_rep_tables__V_6_6, ll_backend__prog_rep_tables__V_9_9);
#line 69 "prog_rep_tables.m"
                return;
              }
#line 69 "prog_rep_tables.m"
          }
#line 69 "prog_rep_tables.m"
      }
#line 69 "prog_rep_tables.m"
  }
#line 69 "prog_rep_tables.m"
}

#line 69 "prog_rep_tables.m"
MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____string_table_info_0_0(
#line 69 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_1,
#line 69 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__2_2)
#line 69 "prog_rep_tables.m"
{
#line 69 "prog_rep_tables.m"
  {
#line 69 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 69 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastX_9 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__1_1;
#line 69 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastY_10 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__2_2;

#line 69 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__CastX_9 == ll_backend__prog_rep_tables__CastY_10);
#line 69 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 69 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 69 "prog_rep_tables.m"
    else
#line 69 "prog_rep_tables.m"
      {
#line 69 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__TypeInfo_12_12;
#line 69 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 0)));
#line 69 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 1)));
#line 69 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 2)));
#line 69 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 2)));

#line 1106 "ll_backend.prog_rep_tables.c"
        {
#line 1108 "ll_backend.prog_rep_tables.c"
          ll_backend__prog_rep_tables__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[0], ((MR_Box) (ll_backend__prog_rep_tables__V_3_3)), ((MR_Box) (ll_backend__prog_rep_tables__V_6_6)));
        }
#line 69 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 69 "prog_rep_tables.m"
          {
#line 1115 "ll_backend.prog_rep_tables.c"
            ll_backend__prog_rep_tables__TypeInfo_12_12 = (MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[2];
#line 1117 "ll_backend.prog_rep_tables.c"
            {
#line 1119 "ll_backend.prog_rep_tables.c"
              ll_backend__prog_rep_tables__succeeded = mercury__builtin__unify_2_p_0(ll_backend__prog_rep_tables__TypeInfo_12_12, ((MR_Box) (ll_backend__prog_rep_tables__V_4_4)), ((MR_Box) (ll_backend__prog_rep_tables__V_7_7)));
            }
#line 69 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 1124 "ll_backend.prog_rep_tables.c"
              ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__V_5_5 == ll_backend__prog_rep_tables__V_8_8);
#line 69 "prog_rep_tables.m"
          }
#line 69 "prog_rep_tables.m"
      }
#line 69 "prog_rep_tables.m"
    return ll_backend__prog_rep_tables__succeeded;
#line 69 "prog_rep_tables.m"
  }
#line 69 "prog_rep_tables.m"
}

#line 390 "prog_rep_tables.m"
static MR_Box MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_2(
#line 390 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 390 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1)
#line 390 "prog_rep_tables.m"
{
#line 390 "prog_rep_tables.m"
  {
#line 390 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__wrapper_arg_2;
#line 390 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
#line 390 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv1_HeadVar__2_19;

#line 390 "prog_rep_tables.m"
    {
#line 390 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__conv1_HeadVar__2_19 = ll_backend__prog_rep_tables__IntroducedFrom__func__encode_arg_type_codes__390__1_1_f_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1));
    }
#line 390 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv1_HeadVar__2_19));
#line 390 "prog_rep_tables.m"
    return ll_backend__prog_rep_tables__wrapper_arg_2;
#line 390 "prog_rep_tables.m"
  }
#line 390 "prog_rep_tables.m"
}

#line 389 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_1(
#line 389 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 389 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 389 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2)
#line 389 "prog_rep_tables.m"
{
#line 389 "prog_rep_tables.m"
  {
#line 389 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
#line 389 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv0_HeadVar__2_2;

#line 389 "prog_rep_tables.m"
    {
#line 389 "prog_rep_tables.m"
      mdbcomp__rtti_access__encode_num_det_2_p_0(((MR_Integer) ll_backend__prog_rep_tables__wrapper_arg_1), &ll_backend__prog_rep_tables__conv0_HeadVar__2_2);
    }
#line 389 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv0_HeadVar__2_2));
#line 389 "prog_rep_tables.m"
  }
#line 389 "prog_rep_tables.m"
}

#line 386 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(
#line 386 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_3,
#line 386 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__ArgTypeBytesCord_4)
#line 386 "prog_rep_tables.m"
{
#line 388 "prog_rep_tables.m"
  {
#line 388 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 388 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 388 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeInfo_16_16 = (MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[0];
#line 388 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__ArgTypeByteLists_5;
#line 388 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__ArgTypeByteCords_6;
#line 388 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__ArgTypeBytesCord0_7;
#line 388 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__NumArgTypeCodes_8;
#line 388 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_11_11;
#line 388 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_12_12;

#line 389 "prog_rep_tables.m"
    {
#line 389 "prog_rep_tables.m"
      mercury__list__map_3_p_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__TypeInfo_16_16, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[5], ll_backend__prog_rep_tables__ArgTypeCodes_3, &ll_backend__prog_rep_tables__ArgTypeByteLists_5);
    }
#line 390 "prog_rep_tables.m"
    {
#line 390 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__ArgTypeByteCords_6 = mercury__list__map_2_f_0(ll_backend__prog_rep_tables__TypeInfo_16_16, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[1], (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[6], ll_backend__prog_rep_tables__ArgTypeByteLists_5);
    }
#line 391 "prog_rep_tables.m"
    {
#line 391 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__ArgTypeBytesCord0_7 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__ArgTypeByteCords_6);
    }
#line 392 "prog_rep_tables.m"
    {
#line 392 "prog_rep_tables.m"
      mercury__list__length_2_p_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__ArgTypeCodes_3, &ll_backend__prog_rep_tables__NumArgTypeCodes_8);
    }
#line 393 "prog_rep_tables.m"
    {
#line 393 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__V_12_12 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__NumArgTypeCodes_8);
    }
#line 394 "prog_rep_tables.m"
    {
#line 394 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__V_11_11 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__V_12_12);
    }
#line 393 "prog_rep_tables.m"
    {
#line 393 "prog_rep_tables.m"
      *ll_backend__prog_rep_tables__ArgTypeBytesCord_4 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__V_11_11, ll_backend__prog_rep_tables__ArgTypeBytesCord0_7);
    }
#line 388 "prog_rep_tables.m"
  }
#line 386 "prog_rep_tables.m"
}

#line 340 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_3(
#line 340 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 340 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 340 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
#line 340 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
#line 340 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
#line 340 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
#line 340 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6)
#line 340 "prog_rep_tables.m"
{
#line 340 "prog_rep_tables.m"
  {
#line 340 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
#line 340 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__conv12_TypeCode_8;
#line 340 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv11_STATE_VARIABLE_StringTable_16;
#line 340 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv10_STATE_VARIABLE_TypeTable_18;

#line 340 "prog_rep_tables.m"
    {
#line 340 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), &ll_backend__prog_rep_tables__conv12_TypeCode_8, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3), &ll_backend__prog_rep_tables__conv11_STATE_VARIABLE_StringTable_16, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_5), &ll_backend__prog_rep_tables__conv10_STATE_VARIABLE_TypeTable_18);
    }
#line 340 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv12_TypeCode_8));
#line 340 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep_tables__conv11_STATE_VARIABLE_StringTable_16));
#line 340 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep_tables__conv10_STATE_VARIABLE_TypeTable_18));
#line 340 "prog_rep_tables.m"
  }
#line 340 "prog_rep_tables.m"
}

#line 347 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_2(
#line 347 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 347 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 347 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
#line 347 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
#line 347 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
#line 347 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
#line 347 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6)
#line 347 "prog_rep_tables.m"
{
#line 347 "prog_rep_tables.m"
  {
#line 347 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
#line 347 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__conv7_TypeCode_8;
#line 347 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv6_STATE_VARIABLE_StringTable_16;
#line 347 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv5_STATE_VARIABLE_TypeTable_18;

#line 347 "prog_rep_tables.m"
    {
#line 347 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), &ll_backend__prog_rep_tables__conv7_TypeCode_8, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3), &ll_backend__prog_rep_tables__conv6_STATE_VARIABLE_StringTable_16, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_5), &ll_backend__prog_rep_tables__conv5_STATE_VARIABLE_TypeTable_18);
    }
#line 347 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv7_TypeCode_8));
#line 347 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep_tables__conv6_STATE_VARIABLE_StringTable_16));
#line 347 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep_tables__conv5_STATE_VARIABLE_TypeTable_18));
#line 347 "prog_rep_tables.m"
  }
#line 347 "prog_rep_tables.m"
}

#line 288 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_1(
#line 288 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 288 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 288 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
#line 288 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
#line 288 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
#line 288 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
#line 288 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6)
#line 288 "prog_rep_tables.m"
{
#line 288 "prog_rep_tables.m"
  {
#line 288 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
#line 288 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__conv2_TypeCode_8;
#line 288 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv1_STATE_VARIABLE_StringTable_16;
#line 288 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv0_STATE_VARIABLE_TypeTable_18;

#line 288 "prog_rep_tables.m"
    {
#line 288 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), &ll_backend__prog_rep_tables__conv2_TypeCode_8, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3), &ll_backend__prog_rep_tables__conv1_STATE_VARIABLE_StringTable_16, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_5), &ll_backend__prog_rep_tables__conv0_STATE_VARIABLE_TypeTable_18);
    }
#line 288 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv2_TypeCode_8));
#line 288 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep_tables__conv1_STATE_VARIABLE_StringTable_16));
#line 288 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep_tables__conv0_STATE_VARIABLE_TypeTable_18));
#line 288 "prog_rep_tables.m"
  }
#line 288 "prog_rep_tables.m"
}

#line 279 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0(
#line 279 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__Type_7,
#line 279 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__TypeCode_8,
#line 279 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48,
#line 279 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49,
#line 279 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50,
#line 279 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_51)
#line 279 "prog_rep_tables.m"
{
#line 283 "prog_rep_tables.m"
  {
#line 283 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 283 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_160_160;
#line 283 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeBytesCord_28;
#line 283 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeMap0_42;
#line 283 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeTableCord0_43;
#line 283 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__NextTypeNum_45;
#line 283 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeMap_46;
#line 283 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeTableCord_47;
#line 283 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75;

#line 321 "prog_rep_tables.m"
    if (((MR_tag((MR_Word) ll_backend__prog_rep_tables__Type_7)) == (MR_mktag((MR_Integer) 2))))
#line 322 "prog_rep_tables.m"
      {
#line 322 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__BuiltinType_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)));
#line 322 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__Selector_105;

#line 326 "prog_rep_tables.m"
        if ((ll_backend__prog_rep_tables__BuiltinType_29 == (MR_Integer) 3))
#line 333 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__Selector_105 = (MR_Integer) 8;
#line 326 "prog_rep_tables.m"
        else
#line 326 "prog_rep_tables.m"
          if ((ll_backend__prog_rep_tables__BuiltinType_29 == (MR_Integer) 1))
#line 327 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__Selector_105 = (MR_Integer) 6;
#line 326 "prog_rep_tables.m"
          else
#line 326 "prog_rep_tables.m"
            if ((ll_backend__prog_rep_tables__BuiltinType_29 == (MR_Integer) 0))
#line 324 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__Selector_105 = (MR_Integer) 5;
#line 326 "prog_rep_tables.m"
            else
#line 330 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__Selector_105 = (MR_Integer) 7;
#line 336 "prog_rep_tables.m"
        {
#line 336 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__prog_rep_tables__Selector_105)));
        }
#line 336 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48;
#line 336 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75 = ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50;
#line 322 "prog_rep_tables.m"
      }
#line 321 "prog_rep_tables.m"
    else
#line 321 "prog_rep_tables.m"
      if (((MR_tag((MR_Word) ll_backend__prog_rep_tables__Type_7)) == (MR_mktag((MR_Integer) 1))))
#line 287 "prog_rep_tables.m"
        {
#line 287 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_133_133 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 287 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__TypeCtorSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)));
#line 287 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__ArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 1)));
#line 287 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_14;
#line 287 "prog_rep_tables.m"
          MR_String ll_backend__prog_rep_tables__TypeCtorSymNameStr_15;
#line 287 "prog_rep_tables.m"
          MR_Integer ll_backend__prog_rep_tables__TypeCtorSymNameCode_16;
#line 287 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__TypeCtorSymNameBytes_17;
#line 287 "prog_rep_tables.m"
          MR_Integer ll_backend__prog_rep_tables__Selector_18;
#line 287 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__ArgTypeBytesCord_19;
#line 287 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_74_74;
#line 287 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__V_98_98;
#line 287 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__V_99_99;
#line 287 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables___Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 2)));
#line 288 "prog_rep_tables.m"
          MR_Box ll_backend__prog_rep_tables__conv4_STATE_VARIABLE_StringTable_74_74;
#line 288 "prog_rep_tables.m"
          MR_Box ll_backend__prog_rep_tables__conv3_STATE_VARIABLE_TypeTable_75_75;

#line 288 "prog_rep_tables.m"
          {
#line 288 "prog_rep_tables.m"
            mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_133_133, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[2], ll_backend__prog_rep_tables__ArgTypes_12, &ll_backend__prog_rep_tables__ArgTypeCodes_14, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48)), &ll_backend__prog_rep_tables__conv4_STATE_VARIABLE_StringTable_74_74, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50)), &ll_backend__prog_rep_tables__conv3_STATE_VARIABLE_TypeTable_75_75);
          }
#line 288 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_74_74 = ((MR_Word) ll_backend__prog_rep_tables__conv4_STATE_VARIABLE_StringTable_74_74);
#line 288 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75 = ((MR_Word) ll_backend__prog_rep_tables__conv3_STATE_VARIABLE_TypeTable_75_75);
#line 290 "prog_rep_tables.m"
          {
#line 290 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__TypeCtorSymNameStr_15 = mdbcomp__prim_data__sym_name_to_string_1_f_0(ll_backend__prog_rep_tables__TypeCtorSymName_11);
          }
#line 291 "prog_rep_tables.m"
          {
#line 291 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep_tables__TypeCtorSymNameStr_15, &ll_backend__prog_rep_tables__TypeCtorSymNameCode_16, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_74_74, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49);
          }
#line 293 "prog_rep_tables.m"
          {
#line 293 "prog_rep_tables.m"
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep_tables__TypeCtorSymNameCode_16, &ll_backend__prog_rep_tables__TypeCtorSymNameBytes_17);
          }
#line 298 "prog_rep_tables.m"
          if ((ll_backend__prog_rep_tables__ArgTypeCodes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "prog_rep_tables.m"
            {
#line 296 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 0;
#line 297 "prog_rep_tables.m"
              {
#line 297 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__ArgTypeBytesCord_19 = mercury__cord__init_0_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133);
              }
#line 295 "prog_rep_tables.m"
            }
#line 298 "prog_rep_tables.m"
          else
#line 298 "prog_rep_tables.m"
            {
#line 298 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__ArgTypeCodes_14, (MR_Integer) 1)));
#line 298 "prog_rep_tables.m"
              MR_Integer ll_backend__prog_rep_tables__V_162_162 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__ArgTypeCodes_14, (MR_Integer) 0)));

#line 298 "prog_rep_tables.m"
              if ((ll_backend__prog_rep_tables__V_161_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "prog_rep_tables.m"
                {
#line 299 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__V_97_97;

#line 300 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 1;
#line 301 "prog_rep_tables.m"
                  {
#line 301 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_97_97 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__V_162_162);
                  }
#line 301 "prog_rep_tables.m"
                  {
#line 301 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__ArgTypeBytesCord_19 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_97_97);
                  }
#line 299 "prog_rep_tables.m"
                }
#line 298 "prog_rep_tables.m"
              else
#line 298 "prog_rep_tables.m"
                {
#line 298 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__V_161_161, (MR_Integer) 1)));
#line 298 "prog_rep_tables.m"
                  MR_Integer ll_backend__prog_rep_tables__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__V_161_161, (MR_Integer) 0)));

#line 298 "prog_rep_tables.m"
                  if ((ll_backend__prog_rep_tables__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "prog_rep_tables.m"
                    {
#line 303 "prog_rep_tables.m"
                      MR_Word ll_backend__prog_rep_tables__V_92_92;
#line 303 "prog_rep_tables.m"
                      MR_Word ll_backend__prog_rep_tables__V_93_93;
#line 303 "prog_rep_tables.m"
                      MR_Word ll_backend__prog_rep_tables__V_94_94;
#line 303 "prog_rep_tables.m"
                      MR_Word ll_backend__prog_rep_tables__V_95_95;

#line 304 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 2;
#line 305 "prog_rep_tables.m"
                      {
#line 305 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__V_93_93 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__V_162_162);
                      }
#line 306 "prog_rep_tables.m"
                      {
#line 306 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__V_92_92 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_93_93);
                      }
#line 306 "prog_rep_tables.m"
                      {
#line 306 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__V_95_95 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__V_164_164);
                      }
#line 306 "prog_rep_tables.m"
                      {
#line 306 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__V_94_94 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_95_95);
                      }
#line 305 "prog_rep_tables.m"
                      {
#line 305 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__ArgTypeBytesCord_19 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_92_92, ll_backend__prog_rep_tables__V_94_94);
                      }
#line 303 "prog_rep_tables.m"
                    }
#line 298 "prog_rep_tables.m"
                  else
#line 298 "prog_rep_tables.m"
                    {
#line 298 "prog_rep_tables.m"
                      MR_Word ll_backend__prog_rep_tables__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__V_163_163, (MR_Integer) 1)));
#line 298 "prog_rep_tables.m"
                      MR_Integer ll_backend__prog_rep_tables__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__V_163_163, (MR_Integer) 0)));

#line 298 "prog_rep_tables.m"
                      if ((ll_backend__prog_rep_tables__V_165_165 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 308 "prog_rep_tables.m"
                        {
#line 308 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_83_83;
#line 308 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_84_84;
#line 308 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_85_85;
#line 308 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_86_86;
#line 308 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_87_87;
#line 308 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_88_88;
#line 308 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_89_89;

#line 309 "prog_rep_tables.m"
                          ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 3;
#line 310 "prog_rep_tables.m"
                          {
#line 310 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_84_84 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__V_162_162);
                          }
#line 311 "prog_rep_tables.m"
                          {
#line 311 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_83_83 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_84_84);
                          }
#line 311 "prog_rep_tables.m"
                          {
#line 311 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_87_87 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__V_164_164);
                          }
#line 312 "prog_rep_tables.m"
                          {
#line 312 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_86_86 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_87_87);
                          }
#line 312 "prog_rep_tables.m"
                          {
#line 312 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_89_89 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__V_166_166);
                          }
#line 312 "prog_rep_tables.m"
                          {
#line 312 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_88_88 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_89_89);
                          }
#line 311 "prog_rep_tables.m"
                          {
#line 311 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_85_85 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_86_86, ll_backend__prog_rep_tables__V_88_88);
                          }
#line 310 "prog_rep_tables.m"
                          {
#line 310 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__ArgTypeBytesCord_19 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_83_83, ll_backend__prog_rep_tables__V_85_85);
                          }
#line 308 "prog_rep_tables.m"
                        }
#line 298 "prog_rep_tables.m"
                      else
#line 314 "prog_rep_tables.m"
                        {
#line 315 "prog_rep_tables.m"
                          ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 4;
#line 316 "prog_rep_tables.m"
                          {
#line 316 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(ll_backend__prog_rep_tables__ArgTypeCodes_14, &ll_backend__prog_rep_tables__ArgTypeBytesCord_19);
                          }
#line 314 "prog_rep_tables.m"
                        }
#line 298 "prog_rep_tables.m"
                    }
#line 298 "prog_rep_tables.m"
                }
#line 298 "prog_rep_tables.m"
            }
#line 319 "prog_rep_tables.m"
          {
#line 319 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_rep_tables.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__V_99_99, 0) = ((MR_Box) (ll_backend__prog_rep_tables__Selector_18));
#line 319 "prog_rep_tables.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__V_99_99, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TypeCtorSymNameBytes_17));
#line 319 "prog_rep_tables.m"
          }
#line 320 "prog_rep_tables.m"
          {
#line 320 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__V_98_98 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_99_99);
          }
#line 318 "prog_rep_tables.m"
          {
#line 318 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_98_98, ll_backend__prog_rep_tables__ArgTypeBytesCord_19);
          }
#line 287 "prog_rep_tables.m"
        }
#line 321 "prog_rep_tables.m"
      else
#line 321 "prog_rep_tables.m"
        if (((MR_tag((MR_Word) ll_backend__prog_rep_tables__Type_7)) == (MR_mktag((MR_Integer) 0))))
#line 372 "prog_rep_tables.m"
          {
#line 372 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_158_158;
#line 372 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__TVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)));
#line 372 "prog_rep_tables.m"
            MR_Integer ll_backend__prog_rep_tables__TVarNum_40;
#line 372 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__TVarNumBytes_41;
#line 372 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__V_52_52;
#line 372 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__V_53_53;
#line 372 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables___Kind_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 1)));

#line 374 "prog_rep_tables.m"
            {
#line 374 "prog_rep_tables.m"
              mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, ll_backend__prog_rep_tables__TVar_39, &ll_backend__prog_rep_tables__TVarNum_40);
            }
#line 375 "prog_rep_tables.m"
            {
#line 375 "prog_rep_tables.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep_tables__TVarNum_40, &ll_backend__prog_rep_tables__TVarNumBytes_41);
            }
#line 1784 "ll_backend.prog_rep_tables.c"
            ll_backend__prog_rep_tables__TypeCtorInfo_158_158 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 376 "prog_rep_tables.m"
            {
#line 376 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__V_52_52 = mercury__cord__singleton_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_158_158, ((MR_Box) ((MR_Integer) 12)));
            }
#line 376 "prog_rep_tables.m"
            {
#line 376 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__V_53_53 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_158_158, ll_backend__prog_rep_tables__TVarNumBytes_41);
            }
#line 376 "prog_rep_tables.m"
            {
#line 376 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_158_158, ll_backend__prog_rep_tables__V_52_52, ll_backend__prog_rep_tables__V_53_53);
            }
#line 376 "prog_rep_tables.m"
            *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48;
#line 376 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75 = ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50;
#line 372 "prog_rep_tables.m"
          }
#line 321 "prog_rep_tables.m"
        else
#line 321 "prog_rep_tables.m"
          if (((((MR_tag((MR_Word) ll_backend__prog_rep_tables__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 366 "prog_rep_tables.m"
            {
#line 367 "prog_rep_tables.m"
              {
#line 367 "prog_rep_tables.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep_tables", (MR_String) "predicate \140ll_backend.prog_rep_tables.add_type_to_table\'/6", (MR_String) "apply_n_type");
#line 367 "prog_rep_tables.m"
                return;
              }
#line 366 "prog_rep_tables.m"
            }
#line 321 "prog_rep_tables.m"
          else
#line 321 "prog_rep_tables.m"
            if (((((MR_tag((MR_Word) ll_backend__prog_rep_tables__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 346 "prog_rep_tables.m"
              {
#line 346 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_154_154 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 346 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__MaybeReturnType_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 2)));
#line 346 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_61_61;
#line 346 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_62_62;
#line 346 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__ArgTypes_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 1)));
#line 346 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_116;
#line 346 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__ArgTypeBytesCord_118;
#line 345 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables___Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 3)));
#line 347 "prog_rep_tables.m"
                MR_Box ll_backend__prog_rep_tables__conv9_STATE_VARIABLE_StringTable_61_61;
#line 347 "prog_rep_tables.m"
                MR_Box ll_backend__prog_rep_tables__conv8_STATE_VARIABLE_TypeTable_62_62;

#line 347 "prog_rep_tables.m"
                {
#line 347 "prog_rep_tables.m"
                  mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_154_154, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[3], ll_backend__prog_rep_tables__ArgTypes_115, &ll_backend__prog_rep_tables__ArgTypeCodes_116, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48)), &ll_backend__prog_rep_tables__conv9_STATE_VARIABLE_StringTable_61_61, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50)), &ll_backend__prog_rep_tables__conv8_STATE_VARIABLE_TypeTable_62_62);
                }
#line 347 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_61_61 = ((MR_Word) ll_backend__prog_rep_tables__conv9_STATE_VARIABLE_StringTable_61_61);
#line 347 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_62_62 = ((MR_Word) ll_backend__prog_rep_tables__conv8_STATE_VARIABLE_TypeTable_62_62);
#line 349 "prog_rep_tables.m"
                {
#line 349 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(ll_backend__prog_rep_tables__ArgTypeCodes_116, &ll_backend__prog_rep_tables__ArgTypeBytesCord_118);
                }
#line 355 "prog_rep_tables.m"
                if ((ll_backend__prog_rep_tables__MaybeReturnType_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "prog_rep_tables.m"
                  {
#line 351 "prog_rep_tables.m"
                    MR_Word ll_backend__prog_rep_tables__V_68_68;

#line 354 "prog_rep_tables.m"
                    {
#line 354 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__V_68_68 = mercury__cord__singleton_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_154_154, ((MR_Box) ((MR_Integer) 10)));
                    }
#line 353 "prog_rep_tables.m"
                    {
#line 353 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_154_154, ll_backend__prog_rep_tables__V_68_68, ll_backend__prog_rep_tables__ArgTypeBytesCord_118);
                    }
#line 354 "prog_rep_tables.m"
                    *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_61_61;
#line 354 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75 = ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_62_62;
#line 351 "prog_rep_tables.m"
                  }
#line 355 "prog_rep_tables.m"
                else
#line 356 "prog_rep_tables.m"
                  {
#line 356 "prog_rep_tables.m"
                    MR_Word ll_backend__prog_rep_tables__ReturnType_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeReturnType_30, (MR_Integer) 0)));
#line 356 "prog_rep_tables.m"
                    MR_Integer ll_backend__prog_rep_tables__ReturnTypeCode_34;
#line 356 "prog_rep_tables.m"
                    MR_Word ll_backend__prog_rep_tables__ReturnTypeBytes_35;
#line 356 "prog_rep_tables.m"
                    MR_Word ll_backend__prog_rep_tables__V_65_65;
#line 356 "prog_rep_tables.m"
                    MR_Word ll_backend__prog_rep_tables__V_66_66;
#line 356 "prog_rep_tables.m"
                    MR_Word ll_backend__prog_rep_tables__V_67_67;

#line 358 "prog_rep_tables.m"
                    {
#line 358 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(ll_backend__prog_rep_tables__ReturnType_33, &ll_backend__prog_rep_tables__ReturnTypeCode_34, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_61_61, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49, ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_62_62, &ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75);
                    }
#line 360 "prog_rep_tables.m"
                    {
#line 360 "prog_rep_tables.m"
                      mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep_tables__ReturnTypeCode_34, &ll_backend__prog_rep_tables__ReturnTypeBytes_35);
                    }
#line 362 "prog_rep_tables.m"
                    {
#line 362 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__V_65_65 = mercury__cord__singleton_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_154_154, ((MR_Box) ((MR_Integer) 11)));
                    }
#line 363 "prog_rep_tables.m"
                    {
#line 363 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__V_67_67 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_154_154, ll_backend__prog_rep_tables__ReturnTypeBytes_35);
                    }
#line 362 "prog_rep_tables.m"
                    {
#line 362 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__V_66_66 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_154_154, ll_backend__prog_rep_tables__ArgTypeBytesCord_118, ll_backend__prog_rep_tables__V_67_67);
                    }
#line 361 "prog_rep_tables.m"
                    {
#line 361 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_154_154, ll_backend__prog_rep_tables__V_65_65, ll_backend__prog_rep_tables__V_66_66);
                    }
#line 356 "prog_rep_tables.m"
                  }
#line 346 "prog_rep_tables.m"
              }
#line 321 "prog_rep_tables.m"
            else
#line 321 "prog_rep_tables.m"
              if (((((MR_tag((MR_Word) ll_backend__prog_rep_tables__Type_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 369 "prog_rep_tables.m"
                {
#line 370 "prog_rep_tables.m"
                  {
#line 370 "prog_rep_tables.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep_tables", (MR_String) "predicate \140ll_backend.prog_rep_tables.add_type_to_table\'/6", (MR_String) "kinded_type");
#line 370 "prog_rep_tables.m"
                    return;
                  }
#line 369 "prog_rep_tables.m"
                }
#line 321 "prog_rep_tables.m"
              else
#line 338 "prog_rep_tables.m"
                {
#line 338 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_144_144 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 338 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__V_72_72;
#line 338 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__ArgTypes_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 1)));
#line 338 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_109;
#line 338 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__ArgTypeBytesCord_111;
#line 338 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables___Kind_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 2)));
#line 340 "prog_rep_tables.m"
                  MR_Box ll_backend__prog_rep_tables__conv14_STATE_VARIABLE_StringTable_49;
#line 340 "prog_rep_tables.m"
                  MR_Box ll_backend__prog_rep_tables__conv13_STATE_VARIABLE_TypeTable_75_75;

#line 340 "prog_rep_tables.m"
                  {
#line 340 "prog_rep_tables.m"
                    mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_144_144, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[4], ll_backend__prog_rep_tables__ArgTypes_107, &ll_backend__prog_rep_tables__ArgTypeCodes_109, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48)), &ll_backend__prog_rep_tables__conv14_STATE_VARIABLE_StringTable_49, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50)), &ll_backend__prog_rep_tables__conv13_STATE_VARIABLE_TypeTable_75_75);
                  }
#line 340 "prog_rep_tables.m"
                  *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49 = ((MR_Word) ll_backend__prog_rep_tables__conv14_STATE_VARIABLE_StringTable_49);
#line 340 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75 = ((MR_Word) ll_backend__prog_rep_tables__conv13_STATE_VARIABLE_TypeTable_75_75);
#line 342 "prog_rep_tables.m"
                  {
#line 342 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(ll_backend__prog_rep_tables__ArgTypeCodes_109, &ll_backend__prog_rep_tables__ArgTypeBytesCord_111);
                  }
#line 343 "prog_rep_tables.m"
                  {
#line 343 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_72_72 = mercury__cord__singleton_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_144_144, ((MR_Box) ((MR_Integer) 9)));
                  }
#line 343 "prog_rep_tables.m"
                  {
#line 343 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_144_144, ll_backend__prog_rep_tables__V_72_72, ll_backend__prog_rep_tables__ArgTypeBytesCord_111);
                  }
#line 338 "prog_rep_tables.m"
                }
#line 379 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__TypeMap0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75, (MR_Integer) 0)));
#line 379 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__TypeTableCord0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75, (MR_Integer) 1)));
#line 379 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__TypeCode_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75, (MR_Integer) 2)));
#line 381 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__NextTypeNum_45 = (*ll_backend__prog_rep_tables__TypeCode_8 + (MR_Integer) 1);
#line 2007 "ll_backend.prog_rep_tables.c"
    ll_backend__prog_rep_tables__TypeCtorInfo_160_160 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 382 "prog_rep_tables.m"
    {
#line 382 "prog_rep_tables.m"
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_160_160, ((MR_Box) (ll_backend__prog_rep_tables__Type_7)), ((MR_Box) (*ll_backend__prog_rep_tables__TypeCode_8)), ll_backend__prog_rep_tables__TypeMap0_42, &ll_backend__prog_rep_tables__TypeMap_46);
    }
#line 383 "prog_rep_tables.m"
    {
#line 383 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__TypeTableCord_47 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_160_160, ll_backend__prog_rep_tables__TypeTableCord0_43, ll_backend__prog_rep_tables__TypeBytesCord_28);
    }
#line 384 "prog_rep_tables.m"
    {
#line 384 "prog_rep_tables.m"
      MR_Word base;
#line 384 "prog_rep_tables.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 384 "prog_rep_tables.m"
      *ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_51 = base;
#line 384 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TypeMap_46));
#line 384 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TypeTableCord_47));
#line 384 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__prog_rep_tables__NextTypeNum_45));
#line 384 "prog_rep_tables.m"
    }
#line 283 "prog_rep_tables.m"
  }
#line 279 "prog_rep_tables.m"
}

#line 220 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__lookup_raw_string_in_table_4_p_0(
#line 220 "prog_rep_tables.m"
  MR_String ll_backend__prog_rep_tables__String_5,
#line 220 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__MaybeOffset_6,
#line 220 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16,
#line 220 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17)
#line 220 "prog_rep_tables.m"
{
#line 223 "prog_rep_tables.m"
  {
#line 223 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 223 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TableMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16, (MR_Integer) 0)));
#line 223 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TableList0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16, (MR_Integer) 1)));
#line 223 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__TableOffset0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16, (MR_Integer) 2)));
#line 227 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__OldOffset_11;
#line 225 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__conv0_OldOffset_11;

#line 225 "prog_rep_tables.m"
    {
#line 225 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__TableMap0_8, ((MR_Box) (ll_backend__prog_rep_tables__String_5)), &ll_backend__prog_rep_tables__conv0_OldOffset_11);
    }
#line 225 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 225 "prog_rep_tables.m"
      {
#line 225 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__OldOffset_11 = ((MR_Integer) ll_backend__prog_rep_tables__conv0_OldOffset_11);
#line 225 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 225 "prog_rep_tables.m"
      }
#line 227 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 226 "prog_rep_tables.m"
      {
#line 226 "prog_rep_tables.m"
        {
#line 226 "prog_rep_tables.m"
          MR_Word base;
#line 226 "prog_rep_tables.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 226 "prog_rep_tables.m"
          *ll_backend__prog_rep_tables__MaybeOffset_6 = base;
#line 226 "prog_rep_tables.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep_tables__OldOffset_11));
#line 226 "prog_rep_tables.m"
        }
#line 226 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16;
#line 226 "prog_rep_tables.m"
      }
#line 227 "prog_rep_tables.m"
    else
#line 244 "prog_rep_tables.m"
      {
#line 244 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__TableOffset_13;
#line 228 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__Length_12;
#line 228 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_18_18;

#line 228 "prog_rep_tables.m"
        {
#line 228 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__Length_12 = mercury__string__count_utf8_code_units_1_f_0(ll_backend__prog_rep_tables__String_5);
        }
#line 229 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_18_18 = (ll_backend__prog_rep_tables__TableOffset0_10 + ll_backend__prog_rep_tables__Length_12);
#line 229 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__TableOffset_13 = (ll_backend__prog_rep_tables__V_18_18 + (MR_Integer) 1);
#line 238 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__TableOffset_13 < (MR_Integer) 1073741824);
#line 244 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 240 "prog_rep_tables.m"
          {
#line 240 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__TableMap_14;
#line 240 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__TableList_15;

#line 240 "prog_rep_tables.m"
            {
#line 240 "prog_rep_tables.m"
              MR_Word base;
#line 240 "prog_rep_tables.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 240 "prog_rep_tables.m"
              *ll_backend__prog_rep_tables__MaybeOffset_6 = base;
#line 240 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TableOffset0_10));
#line 240 "prog_rep_tables.m"
            }
#line 241 "prog_rep_tables.m"
            {
#line 241 "prog_rep_tables.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__prog_rep_tables__String_5)), ((MR_Box) (ll_backend__prog_rep_tables__TableOffset0_10)), ll_backend__prog_rep_tables__TableMap0_8, &ll_backend__prog_rep_tables__TableMap_14);
            }
#line 242 "prog_rep_tables.m"
            {
#line 242 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__TableList_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__TableList_15, 0) = ((MR_Box) (ll_backend__prog_rep_tables__String_5));
#line 242 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__TableList_15, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TableList0_9));
#line 242 "prog_rep_tables.m"
            }
#line 243 "prog_rep_tables.m"
            {
#line 243 "prog_rep_tables.m"
              MR_Word base;
#line 243 "prog_rep_tables.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 243 "prog_rep_tables.m"
              *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17 = base;
#line 243 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TableMap_14));
#line 243 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TableList_15));
#line 243 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__prog_rep_tables__TableOffset_13));
#line 243 "prog_rep_tables.m"
            }
#line 240 "prog_rep_tables.m"
          }
#line 244 "prog_rep_tables.m"
        else
#line 245 "prog_rep_tables.m"
          {
#line 245 "prog_rep_tables.m"
            *ll_backend__prog_rep_tables__MaybeOffset_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 245 "prog_rep_tables.m"
            *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16;
#line 245 "prog_rep_tables.m"
          }
#line 244 "prog_rep_tables.m"
      }
#line 223 "prog_rep_tables.m"
  }
#line 220 "prog_rep_tables.m"
}

#line 206 "prog_rep_tables.m"
static MR_bool MR_CALL 
ll_backend__prog_rep_tables__rev_find_number_suffix_6_p_0(
#line 206 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_1,
#line 206 "prog_rep_tables.m"
  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13,
#line 206 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__STATE_VARIABLE_Num_14,
#line 206 "prog_rep_tables.m"
  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15,
#line 206 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_16,
#line 206 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__RevRest_11)
#line 206 "prog_rep_tables.m"
{
#line 209 "prog_rep_tables.m"
  while (MR_TRUE)
#line 209 "prog_rep_tables.m"
    {
#line 209 "prog_rep_tables.m"
      /* tailcall optimized into a loop */
#line 209 "prog_rep_tables.m"
      {
#line 209 "prog_rep_tables.m"
        MR_bool ll_backend__prog_rep_tables__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep_tables__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 209 "prog_rep_tables.m"
        MR_Char ll_backend__prog_rep_tables__RevHead_7;
#line 209 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__RevTail_8;
#line 214 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__Digit_12;

#line 209 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 209 "prog_rep_tables.m"
          {
#line 209 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__RevHead_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 0)));
#line 209 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__RevTail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 1)));
#line 210 "prog_rep_tables.m"
            {
#line 210 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__succeeded = mercury__char__digit_to_int_2_p_0(ll_backend__prog_rep_tables__RevHead_7, &ll_backend__prog_rep_tables__Digit_12);
            }
#line 214 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 211 "prog_rep_tables.m"
              {
#line 211 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Num_17_17;
#line 211 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__V_18_18 = (ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15 * ll_backend__prog_rep_tables__Digit_12);
#line 211 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_19_19;

#line 211 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__STATE_VARIABLE_Num_17_17 = (ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13 + ll_backend__prog_rep_tables__V_18_18);
#line 212 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_19_19 = (ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15 * (MR_Integer) 10);
#line 213 "prog_rep_tables.m"
                /* direct tailcall eliminated */
#line 213 "prog_rep_tables.m"
                {
#line 213 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__HeadVar__1__tmp_copy_1 = ll_backend__prog_rep_tables__RevTail_8;
#line 213 "prog_rep_tables.m"
                  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0__tmp_copy_13 = ll_backend__prog_rep_tables__STATE_VARIABLE_Num_17_17;
#line 213 "prog_rep_tables.m"
                  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0__tmp_copy_15 = ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_19_19;

#line 213 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15 = ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0__tmp_copy_15;
#line 213 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13 = ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0__tmp_copy_13;
#line 213 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__HeadVar__1__tmp_copy_1;
#line 213 "prog_rep_tables.m"
                }
#line 213 "prog_rep_tables.m"
                continue;
#line 211 "prog_rep_tables.m"
              }
#line 214 "prog_rep_tables.m"
            else
#line 216 "prog_rep_tables.m"
              {
#line 214 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__RevHead_7 == (MR_Char) 95);
#line 216 "prog_rep_tables.m"
                if (ll_backend__prog_rep_tables__succeeded)
#line 216 "prog_rep_tables.m"
                  {
#line 215 "prog_rep_tables.m"
                    *ll_backend__prog_rep_tables__RevRest_11 = ll_backend__prog_rep_tables__RevTail_8;
#line 217 "prog_rep_tables.m"
                    *ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_16 = ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15;
#line 217 "prog_rep_tables.m"
                    *ll_backend__prog_rep_tables__STATE_VARIABLE_Num_14 = ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13;
#line 217 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 216 "prog_rep_tables.m"
                  }
#line 216 "prog_rep_tables.m"
              }
#line 209 "prog_rep_tables.m"
          }
#line 209 "prog_rep_tables.m"
        return ll_backend__prog_rep_tables__succeeded;
#line 209 "prog_rep_tables.m"
      }
#line 209 "prog_rep_tables.m"
      break;
#line 209 "prog_rep_tables.m"
    }
#line 206 "prog_rep_tables.m"
}

#line 46 "prog_rep_tables.m"
void MR_CALL 
ll_backend__prog_rep_tables__get_type_table_contents_3_p_0(
#line 46 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__TypeTable_4,
#line 46 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__NumTypes_5,
#line 46 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__TypeBytes_6)
#line 46 "prog_rep_tables.m"
{
#line 396 "prog_rep_tables.m"
  {
#line 396 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 396 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeBytesCord_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__TypeTable_4, (MR_Integer) 1)));
#line 397 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__TypeTable_4, (MR_Integer) 0)));

#line 397 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__NumTypes_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__TypeTable_4, (MR_Integer) 2)));
#line 398 "prog_rep_tables.m"
    {
#line 398 "prog_rep_tables.m"
      *ll_backend__prog_rep_tables__TypeBytes_6 = mercury__cord__list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__TypeBytesCord_8);
    }
#line 396 "prog_rep_tables.m"
  }
#line 46 "prog_rep_tables.m"
}

#line 42 "prog_rep_tables.m"
void MR_CALL 
ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(
#line 42 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__Type_7,
#line 42 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__TypeCode_8,
#line 42 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_15,
#line 42 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_16,
#line 42 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17,
#line 42 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_18)
#line 42 "prog_rep_tables.m"
{
#line 271 "prog_rep_tables.m"
  {
#line 271 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 271 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17, (MR_Integer) 0)));
#line 272 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17, (MR_Integer) 1)));
#line 272 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17, (MR_Integer) 2)));
#line 275 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__TypeCodePrime_14;
#line 273 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__conv0_TypeCodePrime_14;

#line 273 "prog_rep_tables.m"
    {
#line 273 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__TypeMap0_11, ((MR_Box) (ll_backend__prog_rep_tables__Type_7)), &ll_backend__prog_rep_tables__conv0_TypeCodePrime_14);
    }
#line 273 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 273 "prog_rep_tables.m"
      {
#line 273 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__TypeCodePrime_14 = ((MR_Integer) ll_backend__prog_rep_tables__conv0_TypeCodePrime_14);
#line 273 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 273 "prog_rep_tables.m"
      }
#line 275 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 274 "prog_rep_tables.m"
      {
#line 274 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__TypeCode_8 = ll_backend__prog_rep_tables__TypeCodePrime_14;
#line 274 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_18 = ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17;
#line 274 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_16 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_15;
#line 274 "prog_rep_tables.m"
      }
#line 275 "prog_rep_tables.m"
    else
#line 276 "prog_rep_tables.m"
      {
#line 276 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__add_type_to_table_6_p_0(ll_backend__prog_rep_tables__Type_7, ll_backend__prog_rep_tables__TypeCode_8, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_15, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_16, ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17, ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_18);
#line 276 "prog_rep_tables.m"
        return;
      }
#line 271 "prog_rep_tables.m"
  }
#line 42 "prog_rep_tables.m"
}

#line 40 "prog_rep_tables.m"
MR_Word MR_CALL 
ll_backend__prog_rep_tables__init_type_table_info_0_f_0(void)
#line 40 "prog_rep_tables.m"
{
#line 269 "prog_rep_tables.m"
  {
#line 269 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 269 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__HeadVar__1_1;
#line 269 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 269 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_2_2;
#line 269 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_3_3;

#line 269 "prog_rep_tables.m"
    {
#line 269 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__V_2_2 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_6_6);
    }
#line 269 "prog_rep_tables.m"
    {
#line 269 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__V_3_3 = mercury__cord__init_0_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_6_6);
    }
#line 269 "prog_rep_tables.m"
    {
#line 269 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, 0) = ((MR_Box) (ll_backend__prog_rep_tables__V_2_2));
#line 269 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, 1) = ((MR_Box) (ll_backend__prog_rep_tables__V_3_3));
#line 269 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 269 "prog_rep_tables.m"
    }
#line 269 "prog_rep_tables.m"
    return ll_backend__prog_rep_tables__HeadVar__1_1;
#line 269 "prog_rep_tables.m"
  }
#line 40 "prog_rep_tables.m"
}

#line 33 "prog_rep_tables.m"
void MR_CALL 
ll_backend__prog_rep_tables__get_string_table_contents_3_p_0(
#line 33 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__StringTable_4,
#line 33 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__Strings_5,
#line 33 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__StringTableSize_6)
#line 33 "prog_rep_tables.m"
{
#line 248 "prog_rep_tables.m"
  {
#line 248 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 248 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__RevStrings_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__StringTable_4, (MR_Integer) 1)));
#line 249 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__StringTable_4, (MR_Integer) 0)));

#line 249 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__StringTableSize_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__StringTable_4, (MR_Integer) 2)));
#line 250 "prog_rep_tables.m"
    {
#line 250 "prog_rep_tables.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__prog_rep_tables__RevStrings_8, ll_backend__prog_rep_tables__Strings_5);
#line 250 "prog_rep_tables.m"
      return;
    }
#line 248 "prog_rep_tables.m"
  }
#line 33 "prog_rep_tables.m"
}

#line 30 "prog_rep_tables.m"
void MR_CALL 
ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(
#line 30 "prog_rep_tables.m"
  MR_String ll_backend__prog_rep_tables__String_5,
#line 30 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__StringCode_6,
#line 30 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14,
#line 30 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_15)
#line 30 "prog_rep_tables.m"
{
#line 113 "prog_rep_tables.m"
  {
#line 113 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 113 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__KindCode_8;
#line 113 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__N_10;
#line 113 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__Offset_13;
#line 113 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19;
#line 92 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__MaybeBaseName_9;
#line 92 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__V_16_16;
#line 158 "prog_rep_tables.m"
    MR_String ll_backend__prog_rep_tables__NoPrefix_40;

#line 147 "prog_rep_tables.m"
    {
#line 147 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "STATE_VARIABLE_", ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__NoPrefix_40);
    }
#line 158 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 148 "prog_rep_tables.m"
      {
#line 148 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__NoPrefixChars_41;
#line 154 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__BaseNameChars_42;
#line 154 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__Num_43;
#line 200 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_13_68;
#line 200 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__RevString_62;
#line 200 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__Scale_63;
#line 200 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__RevRest_64;
#line 200 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_67_67;

#line 148 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__KindCode_8 = (MR_Integer) 0;
#line 149 "prog_rep_tables.m"
        {
#line 149 "prog_rep_tables.m"
          mercury__string__to_char_list_2_p_0(ll_backend__prog_rep_tables__NoPrefix_40, &ll_backend__prog_rep_tables__NoPrefixChars_41);
        }
#line 2567 "ll_backend.prog_rep_tables.c"
        ll_backend__prog_rep_tables__TypeCtorInfo_13_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 201 "prog_rep_tables.m"
        {
#line 201 "prog_rep_tables.m"
          mercury__list__reverse_2_p_0(ll_backend__prog_rep_tables__TypeCtorInfo_13_68, ll_backend__prog_rep_tables__NoPrefixChars_41, &ll_backend__prog_rep_tables__RevString_62);
        }
#line 202 "prog_rep_tables.m"
        {
#line 202 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__succeeded = ll_backend__prog_rep_tables__rev_find_number_suffix_6_p_0(ll_backend__prog_rep_tables__RevString_62, (MR_Integer) 0, &ll_backend__prog_rep_tables__Num_43, (MR_Integer) 1, &ll_backend__prog_rep_tables__Scale_63, &ll_backend__prog_rep_tables__RevRest_64);
        }
#line 200 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 200 "prog_rep_tables.m"
          {
#line 203 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__V_67_67 = (MR_Integer) 1;
#line 203 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__Scale_63 > ll_backend__prog_rep_tables__V_67_67);
#line 200 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 200 "prog_rep_tables.m"
              {
#line 204 "prog_rep_tables.m"
                {
#line 204 "prog_rep_tables.m"
                  mercury__list__reverse_2_p_0(ll_backend__prog_rep_tables__TypeCtorInfo_13_68, ll_backend__prog_rep_tables__RevRest_64, &ll_backend__prog_rep_tables__BaseNameChars_42);
                }
#line 204 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 200 "prog_rep_tables.m"
              }
#line 200 "prog_rep_tables.m"
          }
#line 154 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 151 "prog_rep_tables.m"
          {
#line 151 "prog_rep_tables.m"
            MR_String ll_backend__prog_rep_tables__BaseName_44;

#line 151 "prog_rep_tables.m"
            {
#line 151 "prog_rep_tables.m"
              mercury__string__from_char_list_2_p_0(ll_backend__prog_rep_tables__BaseNameChars_42, &ll_backend__prog_rep_tables__BaseName_44);
            }
#line 152 "prog_rep_tables.m"
            {
#line 152 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 152 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeBaseName_9, 0) = ((MR_Box) (ll_backend__prog_rep_tables__BaseName_44));
#line 152 "prog_rep_tables.m"
            }
#line 153 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__N_10 = (ll_backend__prog_rep_tables__Num_43 + (MR_Integer) 1);
#line 151 "prog_rep_tables.m"
          }
#line 154 "prog_rep_tables.m"
        else
#line 155 "prog_rep_tables.m"
          {
#line 155 "prog_rep_tables.m"
            {
#line 155 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 155 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeBaseName_9, 0) = ((MR_Box) (ll_backend__prog_rep_tables__NoPrefix_40));
#line 155 "prog_rep_tables.m"
            }
#line 156 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__N_10 = (MR_Integer) 0;
#line 155 "prog_rep_tables.m"
          }
#line 148 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 148 "prog_rep_tables.m"
      }
#line 158 "prog_rep_tables.m"
    else
#line 166 "prog_rep_tables.m"
      {
#line 166 "prog_rep_tables.m"
        MR_String ll_backend__prog_rep_tables__NoPrefix_57;

#line 158 "prog_rep_tables.m"
        {
#line 158 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeCtorInfo_", ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__NoPrefix_57);
        }
#line 166 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 163 "prog_rep_tables.m"
          {
#line 159 "prog_rep_tables.m"
            {
#line 159 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__succeeded = mercury__string__to_int_2_p_0(ll_backend__prog_rep_tables__NoPrefix_57, &ll_backend__prog_rep_tables__N_10);
            }
#line 163 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 163 "prog_rep_tables.m"
              {
#line 160 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__KindCode_8 = (MR_Integer) 1;
#line 161 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 161 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 163 "prog_rep_tables.m"
              }
#line 163 "prog_rep_tables.m"
          }
#line 166 "prog_rep_tables.m"
        else
#line 182 "prog_rep_tables.m"
          {
#line 182 "prog_rep_tables.m"
            MR_String ll_backend__prog_rep_tables__NoPrefix_55;

#line 166 "prog_rep_tables.m"
            {
#line 166 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeInfo_", ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__NoPrefix_55);
            }
#line 182 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 171 "prog_rep_tables.m"
              {
#line 167 "prog_rep_tables.m"
                {
#line 167 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__succeeded = mercury__string__to_int_2_p_0(ll_backend__prog_rep_tables__NoPrefix_55, &ll_backend__prog_rep_tables__N_10);
                }
#line 171 "prog_rep_tables.m"
                if (ll_backend__prog_rep_tables__succeeded)
#line 171 "prog_rep_tables.m"
                  {
#line 168 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__KindCode_8 = (MR_Integer) 2;
#line 169 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 169 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 171 "prog_rep_tables.m"
                  }
#line 171 "prog_rep_tables.m"
              }
#line 182 "prog_rep_tables.m"
            else
#line 190 "prog_rep_tables.m"
              {
#line 190 "prog_rep_tables.m"
                MR_String ll_backend__prog_rep_tables__NoPrefix_53;

#line 182 "prog_rep_tables.m"
                {
#line 182 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "PolyConst", ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__NoPrefix_53);
                }
#line 190 "prog_rep_tables.m"
                if (ll_backend__prog_rep_tables__succeeded)
#line 190 "prog_rep_tables.m"
                  {
#line 183 "prog_rep_tables.m"
                    {
#line 183 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__succeeded = mercury__string__to_int_2_p_0(ll_backend__prog_rep_tables__NoPrefix_53, &ll_backend__prog_rep_tables__N_10);
                    }
#line 190 "prog_rep_tables.m"
                    if (ll_backend__prog_rep_tables__succeeded)
#line 190 "prog_rep_tables.m"
                      {
#line 184 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__KindCode_8 = (MR_Integer) 5;
#line 185 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 185 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 190 "prog_rep_tables.m"
                      }
#line 190 "prog_rep_tables.m"
                  }
#line 190 "prog_rep_tables.m"
              }
#line 182 "prog_rep_tables.m"
          }
#line 166 "prog_rep_tables.m"
      }
#line 92 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 92 "prog_rep_tables.m"
      {
#line 93 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_16_16 = (MR_Integer) 1024;
#line 93 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__N_10 < ll_backend__prog_rep_tables__V_16_16);
#line 92 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 99 "prog_rep_tables.m"
          {
#line 99 "prog_rep_tables.m"
            if ((ll_backend__prog_rep_tables__MaybeBaseName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 100 "prog_rep_tables.m"
              {
#line 101 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__Offset_13 = (MR_Integer) 0;
#line 101 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14;
#line 100 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 100 "prog_rep_tables.m"
              }
#line 99 "prog_rep_tables.m"
            else
#line 95 "prog_rep_tables.m"
              {
#line 95 "prog_rep_tables.m"
                MR_String ll_backend__prog_rep_tables__BaseName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeBaseName_9, (MR_Integer) 0)));
#line 95 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__MaybeOffset_12;
#line 95 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__V_20_20;
#line 95 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__TableMap0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14, (MR_Integer) 0)));
#line 95 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__TableList0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14, (MR_Integer) 1)));
#line 95 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__TableOffset0_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14, (MR_Integer) 2)));
#line 227 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__OldOffset_77;
#line 225 "prog_rep_tables.m"
                MR_Box ll_backend__prog_rep_tables__conv0_OldOffset_77;

#line 225 "prog_rep_tables.m"
                {
#line 225 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__TableMap0_74, ((MR_Box) (ll_backend__prog_rep_tables__BaseName_11)), &ll_backend__prog_rep_tables__conv0_OldOffset_77);
                }
#line 225 "prog_rep_tables.m"
                if (ll_backend__prog_rep_tables__succeeded)
#line 225 "prog_rep_tables.m"
                  {
#line 225 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__OldOffset_77 = ((MR_Integer) ll_backend__prog_rep_tables__conv0_OldOffset_77);
#line 225 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 225 "prog_rep_tables.m"
                  }
#line 227 "prog_rep_tables.m"
                if (ll_backend__prog_rep_tables__succeeded)
#line 226 "prog_rep_tables.m"
                  {
#line 226 "prog_rep_tables.m"
                    {
#line 226 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__MaybeOffset_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 226 "prog_rep_tables.m"
                      MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeOffset_12, 0) = ((MR_Box) (ll_backend__prog_rep_tables__OldOffset_77));
#line 226 "prog_rep_tables.m"
                    }
#line 226 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14;
#line 226 "prog_rep_tables.m"
                  }
#line 227 "prog_rep_tables.m"
                else
#line 244 "prog_rep_tables.m"
                  {
#line 244 "prog_rep_tables.m"
                    MR_Integer ll_backend__prog_rep_tables__TableOffset_79;
#line 228 "prog_rep_tables.m"
                    MR_Integer ll_backend__prog_rep_tables__Length_78;
#line 228 "prog_rep_tables.m"
                    MR_Integer ll_backend__prog_rep_tables__V_82_82;

#line 228 "prog_rep_tables.m"
                    {
#line 228 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__Length_78 = mercury__string__count_utf8_code_units_1_f_0(ll_backend__prog_rep_tables__BaseName_11);
                    }
#line 229 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_82_82 = (ll_backend__prog_rep_tables__TableOffset0_76 + ll_backend__prog_rep_tables__Length_78);
#line 229 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__TableOffset_79 = (ll_backend__prog_rep_tables__V_82_82 + (MR_Integer) 1);
#line 238 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__TableOffset_79 < (MR_Integer) 1073741824);
#line 244 "prog_rep_tables.m"
                    if (ll_backend__prog_rep_tables__succeeded)
#line 240 "prog_rep_tables.m"
                      {
#line 240 "prog_rep_tables.m"
                        MR_Word ll_backend__prog_rep_tables__TableMap_80;
#line 240 "prog_rep_tables.m"
                        MR_Word ll_backend__prog_rep_tables__TableList_81;

#line 240 "prog_rep_tables.m"
                        {
#line 240 "prog_rep_tables.m"
                          ll_backend__prog_rep_tables__MaybeOffset_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 240 "prog_rep_tables.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeOffset_12, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TableOffset0_76));
#line 240 "prog_rep_tables.m"
                        }
#line 241 "prog_rep_tables.m"
                        {
#line 241 "prog_rep_tables.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__prog_rep_tables__BaseName_11)), ((MR_Box) (ll_backend__prog_rep_tables__TableOffset0_76)), ll_backend__prog_rep_tables__TableMap0_74, &ll_backend__prog_rep_tables__TableMap_80);
                        }
#line 242 "prog_rep_tables.m"
                        {
#line 242 "prog_rep_tables.m"
                          ll_backend__prog_rep_tables__TableList_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "prog_rep_tables.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__TableList_81, 0) = ((MR_Box) (ll_backend__prog_rep_tables__BaseName_11));
#line 242 "prog_rep_tables.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__TableList_81, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TableList0_75));
#line 242 "prog_rep_tables.m"
                        }
#line 243 "prog_rep_tables.m"
                        {
#line 243 "prog_rep_tables.m"
                          ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 243 "prog_rep_tables.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TableMap_80));
#line 243 "prog_rep_tables.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TableList_81));
#line 243 "prog_rep_tables.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19, 2) = ((MR_Box) (ll_backend__prog_rep_tables__TableOffset_79));
#line 243 "prog_rep_tables.m"
                        }
#line 240 "prog_rep_tables.m"
                      }
#line 244 "prog_rep_tables.m"
                    else
#line 245 "prog_rep_tables.m"
                      {
#line 245 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__MaybeOffset_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 245 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14;
#line 245 "prog_rep_tables.m"
                      }
#line 244 "prog_rep_tables.m"
                  }
#line 97 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep_tables__MaybeOffset_12)) == (MR_mktag((MR_Integer) 1)));
#line 97 "prog_rep_tables.m"
                if (ll_backend__prog_rep_tables__succeeded)
#line 97 "prog_rep_tables.m"
                  {
#line 97 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__Offset_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeOffset_12, (MR_Integer) 0)));
#line 98 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_20_20 = (MR_Integer) 65536;
#line 98 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__Offset_13 < ll_backend__prog_rep_tables__V_20_20);
#line 97 "prog_rep_tables.m"
                  }
#line 95 "prog_rep_tables.m"
              }
#line 99 "prog_rep_tables.m"
          }
#line 92 "prog_rep_tables.m"
      }
#line 113 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 109 "prog_rep_tables.m"
      {
#line 109 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_23_23;
#line 109 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_24_24;
#line 109 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_26_26;
#line 109 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_28_28;
#line 109 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_30_30;

#line 109 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_15 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19;
#line 109 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_26_26 = (ll_backend__prog_rep_tables__KindCode_8 << (MR_Integer) 1);
#line 110 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_24_24 = ((MR_Integer) 1 | ll_backend__prog_rep_tables__V_26_26);
#line 110 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_28_28 = (ll_backend__prog_rep_tables__N_10 << (MR_Integer) 6);
#line 111 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_23_23 = (ll_backend__prog_rep_tables__V_24_24 | ll_backend__prog_rep_tables__V_28_28);
#line 111 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_30_30 = (ll_backend__prog_rep_tables__Offset_13 << (MR_Integer) 16);
#line 109 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__StringCode_6 = (ll_backend__prog_rep_tables__V_23_23 | ll_backend__prog_rep_tables__V_30_30);
#line 109 "prog_rep_tables.m"
      }
#line 113 "prog_rep_tables.m"
    else
#line 114 "prog_rep_tables.m"
      {
#line 114 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__MaybeOffset_34;
#line 114 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__Offset_35;

#line 114 "prog_rep_tables.m"
        {
#line 114 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__lookup_raw_string_in_table_4_p_0(ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__MaybeOffset_34, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_15);
        }
#line 117 "prog_rep_tables.m"
        if ((ll_backend__prog_rep_tables__MaybeOffset_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 120 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__Offset_35 = (MR_Integer) 1;
#line 117 "prog_rep_tables.m"
        else
#line 116 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__Offset_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeOffset_34, (MR_Integer) 0)));
#line 122 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__StringCode_6 = (ll_backend__prog_rep_tables__Offset_35 << (MR_Integer) 1);
#line 114 "prog_rep_tables.m"
      }
#line 113 "prog_rep_tables.m"
  }
#line 30 "prog_rep_tables.m"
}

#line 28 "prog_rep_tables.m"
MR_Word MR_CALL 
ll_backend__prog_rep_tables__init_string_table_info_0_f_0(void)
#line 28 "prog_rep_tables.m"
{
#line 81 "prog_rep_tables.m"
  {
#line 81 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 81 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_6;
#line 81 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__StringMap0_3;
#line 81 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7;
#line 81 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_11_11;
#line 84 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__V_4_4;
#line 85 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__V_5_5;

#line 82 "prog_rep_tables.m"
    {
#line 82 "prog_rep_tables.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &ll_backend__prog_rep_tables__StringMap0_3);
    }
#line 83 "prog_rep_tables.m"
    {
#line 83 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 83 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7, 0) = ((MR_Box) (ll_backend__prog_rep_tables__StringMap0_3));
#line 83 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 83 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7, 2) = ((MR_Box) ((MR_Integer) 0));
#line 83 "prog_rep_tables.m"
    }
#line 84 "prog_rep_tables.m"
    {
#line 84 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((MR_String) "", &ll_backend__prog_rep_tables__V_4_4, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7, &ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_11_11);
    }
#line 85 "prog_rep_tables.m"
    {
#line 85 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((MR_String) "<too many variables>", &ll_backend__prog_rep_tables__V_5_5, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_11_11, &ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_6);
    }
#line 81 "prog_rep_tables.m"
    return ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_6;
#line 81 "prog_rep_tables.m"
  }
#line 28 "prog_rep_tables.m"
}

void mercury__ll_backend__prog_rep_tables__init(void)
{
}

void mercury__ll_backend__prog_rep_tables__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0);
	MR_register_type_ctor_info(&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0);
}

void mercury__ll_backend__prog_rep_tables__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.prog_rep_tables. */
