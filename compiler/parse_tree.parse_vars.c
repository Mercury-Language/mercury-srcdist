/*
** Automatically generated from `parse_vars.m'
** by the Mercury compiler,
** version rotd-2025-01-26
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


// :- module parse_tree.parse_vars.
// :- implementation.

/*
INIT mercury__parse_tree__parse_vars__init
ENDINIT
*/

#include "parse_tree.parse_vars.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_vars__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_vars__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_vars__term__pti_var_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_0[1];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_0;

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_1[1];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_1;

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_2[1];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_2;

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_3[1];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_3;

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1];

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_ordinary_state_dot_colon_var_1[4];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_ordinary_state_dot_colon_var_1[4];

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_ordinary_state_dot_colon_var_1[4];

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_var_1_0[1];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_0;

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_var_1_1[1];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_1;

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_var_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_var_1_1[1];

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_ordinary_state_var_1[2];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_ordinary_state_var_1[2];

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_ordinary_state_var_1[2];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_plain_state_dot_colon_vars_1_0[4];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_dot_colon_vars_1_0;

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_plain_state_dot_colon_vars_1_0[1];

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_plain_state_dot_colon_vars_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_plain_state_dot_colon_vars_1[1];

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_plain_state_dot_colon_vars_1[1];

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_plain_state_vars_1_0[2];

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_vars_1_0;

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_plain_state_vars_1_0[1];

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_plain_state_vars_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_plain_state_vars_1[1];

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_plain_state_vars_1[1];

static const MR_EnumFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_quantifier_type_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_quantifier_type_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__enum_ordinal_ordered_quantifier_type_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__enum_name_ordered_quantifier_type_0[2];

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_quantifier_type_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_var_or_type_var_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_var_or_type_var_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__enum_ordinal_ordered_var_or_type_var_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__enum_name_ordered_var_or_type_var_0[2];

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_var_or_type_var_0[2];

static void MR_CALL 
parse_tree__parse_vars__IntroducedFrom__pred__parse_and_check_quant_vars__115__1_3_p_0(
  MR_Word VarSet_10,
  MR_Word HeadVar__2_99,
  MR_String * HeadVar__3_100);

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_var_1_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_var_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_dot_colon_var_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_dot_colon_var_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_vars__generate_repeated_state_var_msg_4_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * Spec_8);

static void MR_CALL 
parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * Spec_8);

static void MR_CALL 
parse_tree__parse_vars__parse_and_check_quant_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word ContextPieces_6,
  MR_Word VarSet_7,
  MR_String Expected_8,
  MR_Word Term_9,
  MR_Word * Spec_10);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_dot_colon_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_dot_colon_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____plain_state_dot_colon_vars_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_vars____Compare____plain_state_dot_colon_vars_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____plain_state_vars_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_vars____Compare____plain_state_vars_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____quantifier_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_vars____Compare____quantifier_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____var_or_type_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_vars____Compare____var_or_type_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_1[35][2];

static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_2[3][1];

static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_4[1][6];




static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_1[35][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[1])))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In first argument of"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[3])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a list of"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but here,"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "being quantified may include each variable just once,"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "repeated."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Repeated variable"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Repeated state variable"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Expected a"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { ((MR_Box) (&parse_tree__parse_vars_scalar_common_1[20])) },
  /* row   2 */
  { ((MR_Box) (&parse_tree__parse_vars_scalar_common_3[0])) },
};

static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__parse_vars_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_vars__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_vars__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_vars__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_vars__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_vars__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_vars__term__pti_var_1__pseudo_1) };

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_0 = {
  (MR_String) "osdc_ordinary_var",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_vars__term__pti_var_1__pseudo_1) };

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_1 = {
  (MR_String) "osdc_state_var",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_vars__term__pti_var_1__pseudo_1) };

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_2 = {
  (MR_String) "osdc_dot_var",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_vars__term__pti_var_1__pseudo_1) };

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_3 = {
  (MR_String) "osdc_colon_var",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_dot_colon_var_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1] = { &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1] = { &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_1 };

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1] = { &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_2 };

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1] = { &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_3 };

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_ordinary_state_dot_colon_var_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_dot_colon_var_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_ordinary_state_dot_colon_var_1[4] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_3,
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_2,
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_0,
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_ordinary_state_dot_colon_var_1[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_ordinary_state_dot_colon_var_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_vars____Unify____ordinary_state_dot_colon_var_1_0_10001)),
  ((MR_Box) (parse_tree__parse_vars____Compare____ordinary_state_dot_colon_var_1_0_10001)),
  (MR_String) "parse_tree.parse_vars",
  (MR_String) "ordinary_state_dot_colon_var",
  { parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_ordinary_state_dot_colon_var_1 },
  { parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_ordinary_state_dot_colon_var_1 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_ordinary_state_dot_colon_var_1,

};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_var_1_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_vars__term__pti_var_1__pseudo_1) };

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_0 = {
  (MR_String) "os_ordinary_var",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_var_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_var_1_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_vars__term__pti_var_1__pseudo_1) };

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_1 = {
  (MR_String) "os_state_var",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_ordinary_state_var_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_var_1_0[1] = { &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_var_1_1[1] = { &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_1 };

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_ordinary_state_var_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_var_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_ordinary_state_var_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_ordinary_state_var_1[2] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_0,
  &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_ordinary_state_var_1_1
};

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_ordinary_state_var_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_ordinary_state_var_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_vars____Unify____ordinary_state_var_1_0_10001)),
  ((MR_Box) (parse_tree__parse_vars____Compare____ordinary_state_var_1_0_10001)),
  (MR_String) "parse_tree.parse_vars",
  (MR_String) "ordinary_state_var",
  { parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_ordinary_state_var_1 },
  { parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_ordinary_state_var_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_ordinary_state_var_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__parse_vars__term__pti_var_1__pseudo_1) }
};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_plain_state_dot_colon_vars_1_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1),
  (MR_PseudoTypeInfo) (&parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1),
  (MR_PseudoTypeInfo) (&parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1),
  (MR_PseudoTypeInfo) (&parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1)
};

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_dot_colon_vars_1_0 = {
  (MR_String) "plain_state_dot_colon_vars",
  INT16_C(4),
  UINT16_C(15),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_plain_state_dot_colon_vars_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_plain_state_dot_colon_vars_1_0[1] = { &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_dot_colon_vars_1_0 };

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_plain_state_dot_colon_vars_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_plain_state_dot_colon_vars_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_plain_state_dot_colon_vars_1[1] = { &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_dot_colon_vars_1_0 };

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_plain_state_dot_colon_vars_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_dot_colon_vars_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_vars____Unify____plain_state_dot_colon_vars_1_0_10001)),
  ((MR_Box) (parse_tree__parse_vars____Compare____plain_state_dot_colon_vars_1_0_10001)),
  (MR_String) "parse_tree.parse_vars",
  (MR_String) "plain_state_dot_colon_vars",
  { parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_plain_state_dot_colon_vars_1 },
  { parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_plain_state_dot_colon_vars_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_plain_state_dot_colon_vars_1,

};

static const MR_PseudoTypeInfo parse_tree__parse_vars__parse_tree__parse_vars__field_types_plain_state_vars_1_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1),
  (MR_PseudoTypeInfo) (&parse_tree__parse_vars__list__pti_list_1__pseudo_term__pti_var_1__pseudo_1)
};

static const MR_DuFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_vars_1_0 = {
  (MR_String) "plain_state_vars",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_vars__parse_tree__parse_vars__field_types_plain_state_vars_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_plain_state_vars_1_0[1] = { &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_vars_1_0 };

static const MR_DuPtagLayout parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_plain_state_vars_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_vars__parse_tree__parse_vars__du_stag_ordered_plain_state_vars_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_plain_state_vars_1[1] = { &parse_tree__parse_vars__parse_tree__parse_vars__du_functor_desc_plain_state_vars_1_0 };

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_plain_state_vars_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_vars_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_vars____Unify____plain_state_vars_1_0_10001)),
  ((MR_Box) (parse_tree__parse_vars____Compare____plain_state_vars_1_0_10001)),
  (MR_String) "parse_tree.parse_vars",
  (MR_String) "plain_state_vars",
  { parse_tree__parse_vars__parse_tree__parse_vars__du_name_ordered_plain_state_vars_1 },
  { parse_tree__parse_vars__parse_tree__parse_vars__du_ptag_ordered_plain_state_vars_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_plain_state_vars_1,

};

static const MR_EnumFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_quantifier_type_0_0 = {
  (MR_String) "quant_type_exist",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_quantifier_type_0_1 = {
  (MR_String) "quant_type_univ",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__enum_ordinal_ordered_quantifier_type_0[2] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_quantifier_type_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__enum_name_ordered_quantifier_type_0[2] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_quantifier_type_0_1
};

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_quantifier_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_quantifier_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_vars____Unify____quantifier_type_0_0_10001)),
  ((MR_Box) (parse_tree__parse_vars____Compare____quantifier_type_0_0_10001)),
  (MR_String) "parse_tree.parse_vars",
  (MR_String) "quantifier_type",
  { parse_tree__parse_vars__parse_tree__parse_vars__enum_name_ordered_quantifier_type_0 },
  { parse_tree__parse_vars__parse_tree__parse_vars__enum_ordinal_ordered_quantifier_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_quantifier_type_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_var_or_type_var_0_0 = {
  (MR_String) "ordinary_var",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_var_or_type_var_0_1 = {
  (MR_String) "type_var",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__enum_ordinal_ordered_var_or_type_var_0[2] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_var_or_type_var_0_0,
  &parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_var_or_type_var_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_vars__parse_tree__parse_vars__enum_name_ordered_var_or_type_var_0[2] = {
  &parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_var_or_type_var_0_0,
  &parse_tree__parse_vars__parse_tree__parse_vars__enum_functor_desc_var_or_type_var_0_1
};

static const MR_Integer parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_var_or_type_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_var_or_type_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_vars____Unify____var_or_type_var_0_0_10001)),
  ((MR_Box) (parse_tree__parse_vars____Compare____var_or_type_var_0_0_10001)),
  (MR_String) "parse_tree.parse_vars",
  (MR_String) "var_or_type_var",
  { parse_tree__parse_vars__parse_tree__parse_vars__enum_name_ordered_var_or_type_var_0 },
  { parse_tree__parse_vars__parse_tree__parse_vars__enum_ordinal_ordered_var_or_type_var_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_vars__parse_tree__parse_vars__functor_number_map_var_or_type_var_0,

};

static void MR_CALL 
parse_tree__parse_vars__IntroducedFrom__pred__parse_and_check_quant_vars__115__1_3_p_0(
  MR_Word VarSet_10,
  MR_Word HeadVar__2_99,
  MR_String * HeadVar__3_100)
{
  mercury__varset__lookup_name_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_10, HeadVar__2_99, HeadVar__3_100);
}

void MR_CALL 
parse_tree__parse_vars____Compare____var_or_type_var_0_0(
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
parse_tree__parse_vars____Unify____var_or_type_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_vars____Compare____quantifier_type_0_0(
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
parse_tree__parse_vars____Unify____quantifier_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_vars____Compare____plain_state_vars_1_0(
  MR_Word TypeInfo_for_T_11,
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Word TypeInfo_13_13;

    {
      TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
    }
    mercury__list____Compare____list_1_0(TypeInfo_13_13, &SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word TypeInfo_17_17;

      {
        TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      mercury__list____Compare____list_1_0(TypeInfo_17_17, HeadVar__1_1, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_vars____Unify____plain_state_vars_1_0(
  MR_Word TypeInfo_for_T_9,
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
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_9));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_15_15, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
    if (succeeded)
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_15_15, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_vars____Compare____plain_state_dot_colon_vars_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;
    MR_Word TypeInfo_19_19;

    {
      TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_19_19, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_T_17));
    }
    mercury__list____Compare____list_1_0(TypeInfo_19_19, &SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Word TypeInfo_23_23;

      {
        TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_17));
      }
      mercury__list____Compare____list_1_0(TypeInfo_23_23, &SubResult2_9, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Word TypeInfo_27_27;

        {
          TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_17));
        }
        mercury__list____Compare____list_1_0(TypeInfo_27_27, &SubResult3_12, (MR_Word) (ArgX3_10), (MR_Word) (ArgY3_11));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word TypeInfo_31_31;

          {
            TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_31_31, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_17));
          }
          mercury__list____Compare____list_1_0(TypeInfo_31_31, HeadVar__1_1, (MR_Word) (ArgX4_13), (MR_Word) (ArgY4_14));
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_vars____Unify____plain_state_dot_colon_vars_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_27_27;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    {
      TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_27_27, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
    if (succeeded)
    {
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_27_27, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
      if (succeeded)
      {
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_27_27, (MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
        if (succeeded)
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_27_27, (MR_Word) (ArgX4_9), (MR_Word) (ArgY4_10));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_var_1_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__term____Compare____var_1_0(TypeInfo_for_T_10, HeadVar__1_1, ArgX1_4, ArgY1_5);
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

    mercury__term____Compare____var_1_0(TypeInfo_for_T_10, HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_var_1_0(
  MR_Word TypeInfo_for_T_9,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_9, ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_dot_colon_var_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

              mercury__term____Compare____var_1_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__term____Compare____var_1_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              mercury__term____Compare____var_1_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX1_8, ArgY1_9);
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

              mercury__term____Compare____var_1_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX1_10, ArgY1_11);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_dot_colon_var_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_13, ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_13, ArgX1_7, ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_13, ArgX1_9, ArgY1_10);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0(
  MR_Word TypeInfo_for_T_102,
  MR_Word Term_5,
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeVars_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word Var_40;
  MR_String Var_41;
  MR_Word Var_42;

  if (succeeded)
  {
    Var_40 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_41 = ((MR_String) ((MR_hl_field(0, Var_40, (MR_Integer) 0))));
        succeeded = (strcmp(Var_41, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeVars_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_2[2]));
  else
  {
    MR_Word HeadTerm_10;
    MR_Word Tail_11;
    MR_Word Var_48;
    MR_String Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;

    succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_48 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
      Var_50 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_49 = ((MR_String) ((MR_hl_field(0, Var_48, (MR_Integer) 0))));
        succeeded = (strcmp(Var_49, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 0))));
            Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 1))));
            succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Tail_11 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 0))));
              Var_52 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 1))));
              succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeHeadVar_23;
      MR_Word MaybeTailVars_25;
      MR_Word VarKind0_15;
      MR_Word VarKind_26;
      MR_Word TailVars_27;
      MR_Word TailStateVars_28;
      MR_Word TailDotVars_29;
      MR_Word TailColonVars_30;
      MR_Word Var_71;

      if (((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0))
      {
        MR_Word Var_129 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 1))));
        MR_Word Var_130 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 0))));
        MR_Word Var_131;
        MR_Word Var_132;
        MR_String Var_133;
        MR_Word Var_135;

        succeeded = (Var_129 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_132 = ((MR_Word) ((MR_hl_field(1, Var_129, (MR_Integer) 0))));
          Var_131 = ((MR_Word) ((MR_hl_field(1, Var_129, (MR_Integer) 1))));
          succeeded = (Var_131 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_130)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_133 = ((MR_String) ((MR_hl_field(0, Var_130, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_132)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_135 = ((MR_Word) ((MR_hl_field(1, Var_132, (MR_Integer) 0))));
                if ((strcmp(Var_133, (MR_String) "!") == 0))
                {
                  {
                    VarKind0_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, VarKind0_15, 0) = ((MR_Box) (Var_135));
                  }
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(Var_133, (MR_String) "!.") == 0))
                {
                  {
                    VarKind0_15 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, VarKind0_15, 0) = ((MR_Box) (Var_135));
                  }
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(Var_133, (MR_String) "!:") == 0))
                {
                  {
                    VarKind0_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, VarKind0_15, 0) = ((MR_Box) (Var_135));
                  }
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
              }
            }
          }
        }
      }
      else
      {
        MR_Word V0_13 = ((MR_Word) ((MR_hl_field(1, HeadTerm_10, (MR_Integer) 0))));

        {
          VarKind0_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, VarKind0_15, 0) = ((MR_Box) (V0_13));
        }
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MaybeHeadVar_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeHeadVar_23, 0) = ((MR_Box) (VarKind0_15));
        }
      else
      {
        MR_Word HeadSpec_24;
        MR_Word Var_69;

        parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(TypeInfo_for_T_102, ContextPieces_7, VarSet_6, (MR_String) "variable or state variable", HeadTerm_10, &HeadSpec_24);
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (HeadSpec_24));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeHeadVar_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeHeadVar_23, 0) = ((MR_Box) (Var_69));
        }
      }
      parse_tree__parse_vars__parse_vars_state_dot_colon_vars_4_p_0(TypeInfo_for_T_102, Tail_11, VarSet_6, ContextPieces_7, &MaybeTailVars_25);
      succeeded = ((MR_tag((MR_Word) MaybeHeadVar_23)) == (MR_Integer) 1);
      if (succeeded)
      {
        VarKind_26 = ((MR_Word) ((MR_hl_field(1, MaybeHeadVar_23, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailVars_25)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_71 = ((MR_Word) ((MR_hl_field(1, MaybeTailVars_25, (MR_Integer) 0))));
          TailVars_27 = ((MR_Word) ((MR_hl_field(0, Var_71, (MR_Integer) 0))));
          TailStateVars_28 = ((MR_Word) ((MR_hl_field(0, Var_71, (MR_Integer) 1))));
          TailDotVars_29 = ((MR_Word) ((MR_hl_field(0, Var_71, (MR_Integer) 2))));
          TailColonVars_30 = ((MR_Word) ((MR_hl_field(0, Var_71, (MR_Integer) 3))));
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        switch (MR_tag((MR_Word) VarKind_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word V_31 = ((MR_Word) ((MR_hl_field(0, VarKind_26, (MR_Integer) 0))));
              MR_Word TypeInfo_104_104;

              {
                TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_104_104, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                MR_hl_field(0, TypeInfo_104_104, 1) = ((MR_Box) (TypeInfo_for_T_102));
              }
              succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_102, TypeInfo_104_104, V_31, TailVars_27);
              if (succeeded)
              {
                MR_Word Spec_32;
                MR_Word Var_72;

                parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(TypeInfo_for_T_102, ContextPieces_7, VarSet_6, HeadTerm_10, &Spec_32);
                {
                  Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_32));
                  MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeVars_8 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
                }
              }
              else
              {
                MR_Word Vars_33;
                MR_Word Var_74;

                {
                  Vars_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Vars_33, 0) = ((MR_Box) (V_31));
                  MR_hl_field(1, Vars_33, 1) = ((MR_Box) (TailVars_27));
                }
                {
                  Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_74, 0) = ((MR_Box) (Vars_33));
                  MR_hl_field(0, Var_74, 1) = ((MR_Box) (TailStateVars_28));
                  MR_hl_field(0, Var_74, 2) = ((MR_Box) (TailDotVars_29));
                  MR_hl_field(0, Var_74, 3) = ((MR_Box) (TailColonVars_30));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeVars_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_74));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SV_34 = ((MR_Word) ((MR_hl_field(1, VarKind_26, (MR_Integer) 0))));

              {
                MR_Word TypeInfo_106_106;

                {
                  TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeInfo_106_106, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(0, TypeInfo_106_106, 1) = ((MR_Box) (TypeInfo_for_T_102));
                }
                succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_102, TypeInfo_106_106, SV_34, TailStateVars_28);
              }
              if (!(succeeded))
              {
                {
                  MR_Word TypeInfo_108_108;

                  {
                    TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_108_108, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(0, TypeInfo_108_108, 1) = ((MR_Box) (TypeInfo_for_T_102));
                  }
                  succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_102, TypeInfo_108_108, SV_34, TailDotVars_29);
                }
                if (!(succeeded))
                {
                  MR_Word TypeInfo_110_110;

                  {
                    TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_110_110, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(0, TypeInfo_110_110, 1) = ((MR_Box) (TypeInfo_for_T_102));
                  }
                  succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_102, TypeInfo_110_110, SV_34, TailColonVars_30);
                }
              }
              if (succeeded)
              {
                MR_Word Var_75;
                MR_Word Spec_90;

                parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(TypeInfo_for_T_102, ContextPieces_7, VarSet_6, HeadTerm_10, &Spec_90);
                {
                  Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_75, 0) = ((MR_Box) (Spec_90));
                  MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeVars_8 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_75));
                }
              }
              else
              {
                MR_Word StateVars_35;
                MR_Word Var_77;

                {
                  StateVars_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, StateVars_35, 0) = ((MR_Box) (SV_34));
                  MR_hl_field(1, StateVars_35, 1) = ((MR_Box) (TailStateVars_28));
                }
                {
                  Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_77, 0) = ((MR_Box) (TailVars_27));
                  MR_hl_field(0, Var_77, 1) = ((MR_Box) (StateVars_35));
                  MR_hl_field(0, Var_77, 2) = ((MR_Box) (TailDotVars_29));
                  MR_hl_field(0, Var_77, 3) = ((MR_Box) (TailColonVars_30));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeVars_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_77));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SV_96 = ((MR_Word) ((MR_hl_field(2, VarKind_26, (MR_Integer) 0))));

              {
                MR_Word TypeInfo_112_112;

                {
                  TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeInfo_112_112, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(0, TypeInfo_112_112, 1) = ((MR_Box) (TypeInfo_for_T_102));
                }
                succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_102, TypeInfo_112_112, SV_96, TailStateVars_28);
              }
              if (!(succeeded))
              {
                {
                  MR_Word TypeInfo_114_114;

                  {
                    TypeInfo_114_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_114_114, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(0, TypeInfo_114_114, 1) = ((MR_Box) (TypeInfo_for_T_102));
                  }
                  succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_102, TypeInfo_114_114, SV_96, TailDotVars_29);
                }
                if (!(succeeded))
                {
                  MR_Word TypeInfo_116_116;

                  {
                    TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_116_116, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(0, TypeInfo_116_116, 1) = ((MR_Box) (TypeInfo_for_T_102));
                  }
                  succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_102, TypeInfo_116_116, SV_96, TailColonVars_30);
                }
              }
              if (succeeded)
              {
                MR_Word Var_78;
                MR_Word Spec_93;

                parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(TypeInfo_for_T_102, ContextPieces_7, VarSet_6, HeadTerm_10, &Spec_93);
                {
                  Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_78, 0) = ((MR_Box) (Spec_93));
                  MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeVars_8 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_78));
                }
              }
              else
              {
                MR_Word DotVars_36;
                MR_Word Var_80;

                {
                  DotVars_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, DotVars_36, 0) = ((MR_Box) (SV_96));
                  MR_hl_field(1, DotVars_36, 1) = ((MR_Box) (TailDotVars_29));
                }
                {
                  Var_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_80, 0) = ((MR_Box) (TailVars_27));
                  MR_hl_field(0, Var_80, 1) = ((MR_Box) (TailStateVars_28));
                  MR_hl_field(0, Var_80, 2) = ((MR_Box) (DotVars_36));
                  MR_hl_field(0, Var_80, 3) = ((MR_Box) (TailColonVars_30));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeVars_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_80));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SV_100 = ((MR_Word) ((MR_hl_field(3, VarKind_26, (MR_Integer) 0))));

              {
                MR_Word TypeInfo_118_118;

                {
                  TypeInfo_118_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypeInfo_118_118, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                  MR_hl_field(0, TypeInfo_118_118, 1) = ((MR_Box) (TypeInfo_for_T_102));
                }
                succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_102, TypeInfo_118_118, SV_100, TailStateVars_28);
              }
              if (!(succeeded))
              {
                {
                  MR_Word TypeInfo_120_120;

                  {
                    TypeInfo_120_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_120_120, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(0, TypeInfo_120_120, 1) = ((MR_Box) (TypeInfo_for_T_102));
                  }
                  succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_102, TypeInfo_120_120, SV_100, TailDotVars_29);
                }
                if (!(succeeded))
                {
                  MR_Word TypeInfo_122_122;

                  {
                    TypeInfo_122_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_122_122, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(0, TypeInfo_122_122, 1) = ((MR_Box) (TypeInfo_for_T_102));
                  }
                  succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_102, TypeInfo_122_122, SV_100, TailColonVars_30);
                }
              }
              if (succeeded)
              {
                MR_Word Var_81;
                MR_Word Spec_97;

                parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(TypeInfo_for_T_102, ContextPieces_7, VarSet_6, HeadTerm_10, &Spec_97);
                {
                  Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_81, 0) = ((MR_Box) (Spec_97));
                  MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *MaybeVars_8 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_81));
                }
              }
              else
              {
                MR_Word ColonVars_37;
                MR_Word Var_83;

                {
                  ColonVars_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ColonVars_37, 0) = ((MR_Box) (SV_100));
                  MR_hl_field(1, ColonVars_37, 1) = ((MR_Box) (TailColonVars_30));
                }
                {
                  Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_83, 0) = ((MR_Box) (TailVars_27));
                  MR_hl_field(0, Var_83, 1) = ((MR_Box) (TailStateVars_28));
                  MR_hl_field(0, Var_83, 2) = ((MR_Box) (TailDotVars_29));
                  MR_hl_field(0, Var_83, 3) = ((MR_Box) (ColonVars_37));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeVars_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_83));
                }
              }
            }
            break;
        }
      else
      {
        MR_Word TypeInfo_124_124;
        MR_Word TypeInfo_126_126;
        MR_Word HeadSpecs_38;
        MR_Word TailSpecs_39;
        MR_Word Var_84;

        {
          TypeInfo_124_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_124_124, 0) = ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_ordinary_state_dot_colon_var_1));
          MR_hl_field(0, TypeInfo_124_124, 1) = ((MR_Box) (TypeInfo_for_T_102));
        }
        HeadSpecs_38 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_124_124, (MR_Word) (MaybeHeadVar_23));
        {
          TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_126_126, 0) = ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_dot_colon_vars_1));
          MR_hl_field(0, TypeInfo_126_126, 1) = ((MR_Box) (TypeInfo_for_T_102));
        }
        TailSpecs_39 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_126_126, (MR_Word) (MaybeTailVars_25));
        Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), HeadSpecs_38, TailSpecs_39);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeVars_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_84));
        }
      }
    }
    else
    {
      MR_Word Var_86;
      MR_Word Spec_101;

      parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(TypeInfo_for_T_102, ContextPieces_7, VarSet_6, (MR_String) "list of variables and/or state variables", Term_5, &Spec_101);
      {
        Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_86, 0) = ((MR_Box) (Spec_101));
        MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVars_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_vars__parse_vars_state_vars_4_p_0(
  MR_Word TypeInfo_for_T_66,
  MR_Word Term_5,
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeVars_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word Var_31;
  MR_String Var_32;
  MR_Word Var_33;

  if (succeeded)
  {
    Var_31 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_32 = ((MR_String) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
        succeeded = (strcmp(Var_32, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeVars_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_2[1]));
  else
  {
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_37;
    MR_String Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;

    succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_37 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
      Var_39 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_38 = ((MR_String) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
        succeeded = (strcmp(Var_38, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
            Var_40 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 1))));
            succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
              Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 1))));
              succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeHeadVar_19;
      MR_Word MaybeTailVars_21;
      MR_Word VarKind0_15;
      MR_Word VarKind_22;
      MR_Word TailVars_23;
      MR_Word TailStateVars_24;
      MR_Word Var_50;

      if (((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0))
      {
        MR_Word SV0_16;
        MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 0))));
        MR_String Var_43;
        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, HeadTerm_10, (MR_Integer) 1))));
        MR_Word Var_45;
        MR_Word Var_46;

        succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_43 = ((MR_String) ((MR_hl_field(0, Var_42, (MR_Integer) 0))));
          succeeded = (strcmp(Var_43, (MR_String) "!") == 0);
          if (succeeded)
          {
            succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
              Var_46 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
              succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 1);
                if (succeeded)
                {
                  SV0_16 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 0))));
                  {
                    VarKind0_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, VarKind0_15, 0) = ((MR_Box) (SV0_16));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
      else
      {
        MR_Word V0_13 = ((MR_Word) ((MR_hl_field(1, HeadTerm_10, (MR_Integer) 0))));

        {
          VarKind0_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, VarKind0_15, 0) = ((MR_Box) (V0_13));
        }
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MaybeHeadVar_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeHeadVar_19, 0) = ((MR_Box) (VarKind0_15));
        }
      else
      {
        MR_Word HeadSpec_20;
        MR_Word Var_48;

        parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(TypeInfo_for_T_66, ContextPieces_7, VarSet_6, (MR_String) "variable or state variable", HeadTerm_10, &HeadSpec_20);
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (HeadSpec_20));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeHeadVar_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeHeadVar_19, 0) = ((MR_Box) (Var_48));
        }
      }
      parse_tree__parse_vars__parse_vars_state_vars_4_p_0(TypeInfo_for_T_66, TailTerm_11, VarSet_6, ContextPieces_7, &MaybeTailVars_21);
      succeeded = ((MR_tag((MR_Word) MaybeHeadVar_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        VarKind_22 = ((MR_Word) ((MR_hl_field(1, MaybeHeadVar_19, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailVars_21)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_50 = ((MR_Word) ((MR_hl_field(1, MaybeTailVars_21, (MR_Integer) 0))));
          TailVars_23 = ((MR_Word) ((MR_hl_field(0, Var_50, (MR_Integer) 0))));
          TailStateVars_24 = ((MR_Word) ((MR_hl_field(0, Var_50, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        if (((MR_tag((MR_Word) VarKind_22)) == (MR_Integer) 0))
        {
          MR_Word V_25 = ((MR_Word) ((MR_hl_field(0, VarKind_22, (MR_Integer) 0))));
          MR_Word TypeInfo_68_68;

          {
            TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_68_68, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_68_68, 1) = ((MR_Box) (TypeInfo_for_T_66));
          }
          succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_66, TypeInfo_68_68, V_25, TailVars_23);
          if (succeeded)
          {
            MR_Word Spec_26;
            MR_Word Var_51;

            parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(TypeInfo_for_T_66, ContextPieces_7, VarSet_6, HeadTerm_10, &Spec_26);
            {
              Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_51, 0) = ((MR_Box) (Spec_26));
              MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeVars_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
            }
          }
          else
          {
            MR_Word Vars_27;
            MR_Word Var_53;

            {
              Vars_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Vars_27, 0) = ((MR_Box) (V_25));
              MR_hl_field(1, Vars_27, 1) = ((MR_Box) (TailVars_23));
            }
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_53, 0) = ((MR_Box) (Vars_27));
              MR_hl_field(0, Var_53, 1) = ((MR_Box) (TailStateVars_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeVars_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_53));
            }
          }
        }
        else
        {
          MR_Word SV_28 = ((MR_Word) ((MR_hl_field(1, VarKind_22, (MR_Integer) 0))));
          MR_Word TypeInfo_70_70;

          {
            TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_70_70, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(0, TypeInfo_70_70, 1) = ((MR_Box) (TypeInfo_for_T_66));
          }
          succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_2_p_0(TypeInfo_for_T_66, TypeInfo_70_70, SV_28, TailStateVars_24);
          if (succeeded)
          {
            MR_Word Var_54;
            MR_Word Spec_62;

            parse_tree__parse_vars__generate_repeated_state_var_msg_4_p_0(TypeInfo_for_T_66, ContextPieces_7, VarSet_6, HeadTerm_10, &Spec_62);
            {
              Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_54, 0) = ((MR_Box) (Spec_62));
              MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeVars_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
            }
          }
          else
          {
            MR_Word StateVars_29;
            MR_Word Var_56;

            {
              StateVars_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, StateVars_29, 0) = ((MR_Box) (SV_28));
              MR_hl_field(1, StateVars_29, 1) = ((MR_Box) (TailStateVars_24));
            }
            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_56, 0) = ((MR_Box) (TailVars_23));
              MR_hl_field(0, Var_56, 1) = ((MR_Box) (StateVars_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeVars_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_56));
            }
          }
        }
      else
      {
        MR_Word TypeInfo_73_73;
        MR_Word TypeInfo_75_75;
        MR_Word Specs_30;
        MR_Word Var_57;
        MR_Word Var_58;

        {
          TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_73_73, 0) = ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_ordinary_state_var_1));
          MR_hl_field(0, TypeInfo_73_73, 1) = ((MR_Box) (TypeInfo_for_T_66));
        }
        Var_57 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_73_73, (MR_Word) (MaybeHeadVar_19));
        {
          TypeInfo_75_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_75_75, 0) = ((MR_Box) (&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_vars_1));
          MR_hl_field(0, TypeInfo_75_75, 1) = ((MR_Box) (TypeInfo_for_T_66));
        }
        Var_58 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_75_75, (MR_Word) (MaybeTailVars_21));
        Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_57, Var_58);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeVars_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_30));
        }
      }
    }
    else
    {
      MR_Word Var_60;
      MR_Word Spec_65;

      parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(TypeInfo_for_T_66, ContextPieces_7, VarSet_6, (MR_String) "list of variables and/or state variables", Term_5, &Spec_65);
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (Spec_65));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVars_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_vars__generate_repeated_state_var_msg_4_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * Spec_8)
{
  MR_String TermStr_9;
  MR_Word Pieces_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_36;

  TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_37, VarSet_6, Term_7);
  Var_11 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
  Var_17 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[27])));
  {
    Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_25, 1) = ((MR_Box) (TermStr_9));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[25])));
  }
  Var_23 = parse_tree__error_spec__color_as_subject_1_f_0(Var_24);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[1])));
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_22);
  Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[21])), Var_16);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_11, Var_12);
  Var_36 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_37, Term_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_vars.generate_repeated_state_var_msg\'/4"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_10));
  }
}

static void MR_CALL 
parse_tree__parse_vars__generate_repeated_var_msg_4_p_0(
  MR_Word TypeInfo_for_T_37,
  MR_Word ContextPieces_5,
  MR_Word VarSet_6,
  MR_Word Term_7,
  MR_Word * Spec_8)
{
  MR_String TermStr_9;
  MR_Word Pieces_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_36;

  TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_37, VarSet_6, Term_7);
  Var_11 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5);
  Var_17 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[23])));
  {
    Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_25, 1) = ((MR_Box) (TermStr_9));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[25])));
  }
  Var_23 = parse_tree__error_spec__color_as_subject_1_f_0(Var_24);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[1])));
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_22);
  Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[21])), Var_16);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_11, Var_12);
  Var_36 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_37, Term_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_vars.generate_repeated_var_msg\'/4"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_10));
  }
}

static void MR_CALL 
parse_tree__parse_vars__parse_and_check_quant_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_100;

  parse_tree__parse_vars__IntroducedFrom__pred__parse_and_check_quant_vars__115__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_100);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_100));
}

void MR_CALL 
parse_tree__parse_vars__parse_and_check_quant_vars_6_p_0(
  MR_Word QuantType_7,
  MR_Word VarOrTypeVar_8,
  MR_Word InitContextPieces_9,
  MR_Word VarSet_10,
  MR_Word VarsTerm_11,
  MR_Word * MaybeVars_12)
{
  MR_Word VarsContextPieces_13;
  MR_Word ContextPieces_14;
  MR_Word MaybeVars0_15;
  MR_Word Var_52;

  switch (QuantType_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      VarsContextPieces_13 = (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[8]));
      break;
    case (MR_Integer) 1:
      VarsContextPieces_13 = (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[12]));
      break;
  }
  Var_52 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarsContextPieces_13);
  ContextPieces_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InitContextPieces_9, Var_52);
  parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_11, VarSet_10, ContextPieces_14, &MaybeVars0_15);
  if (((MR_tag((MR_Word) MaybeVars0_15)) == (MR_Integer) 0))
    *MaybeVars_12 = MaybeVars0_15;
  else
  {
    MR_Word QuantVars_16 = ((MR_Word) ((MR_hl_field(1, MaybeVars0_15, (MR_Integer) 0))));
    MR_Word QuantVarsBag_17;
    MR_Word DuplicateQuantVars_18;

    QuantVarsBag_17 = mercury__bag__from_list_1_f_0((MR_Word) (&parse_tree__parse_vars_scalar_common_1[0]), QuantVars_16);
    DuplicateQuantVars_18 = mercury__bag__to_list_only_duplicates_1_f_0((MR_Word) (&parse_tree__parse_vars_scalar_common_1[0]), QuantVarsBag_17);
    if ((DuplicateQuantVars_18 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeVars_12 = MaybeVars0_15;
    else
    {
      MR_Word DuplicateQuantVarNames_21;
      MR_String Vars_22;
      MR_Word Pieces_23;
      MR_Word Spec_24;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_57;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_String Var_77;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Box conv1_Var_77;

      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_53, 0) = ((MR_Box) (&parse_tree__parse_vars_scalar_common_4[0]));
        MR_hl_field(0, Var_53, 1) = ((MR_Box) (parse_tree__parse_vars__parse_and_check_quant_vars_6_p_0_1));
        MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_53, 3) = ((MR_Box) (VarSet_10));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__parse_vars_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_53, DuplicateQuantVars_18, &DuplicateQuantVarNames_21);
      switch (VarOrTypeVar_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Vars_22 = (MR_String) "variables";
          break;
        case (MR_Integer) 1:
          Vars_22 = (MR_String) "type variables";
          break;
      }
      {
        Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_61, 1) = ((MR_Box) (Vars_22));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[17])));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_vars_scalar_common_1[13])));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_57));
      }
      Var_70 = parse_tree__error_spec__fixed_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), DuplicateQuantVarNames_21);
      conv1_Var_77 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DuplicateQuantVarNames_21, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
      Var_77 = ((MR_String) (conv1_Var_77));
      {
        Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_76, 1) = ((MR_Box) (Var_77));
      }
      {
        Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_82 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[19])));
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[1])));
      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_81);
      Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_74);
      Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_69);
      Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarsContextPieces_13, Var_54);
      Var_93 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarsTerm_11);
      {
        Spec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_vars.parse_and_check_quant_vars\'/6"));
        MR_hl_field(0, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Spec_24, 3) = ((MR_Box) (Var_93));
        MR_hl_field(0, Spec_24, 4) = ((MR_Box) (Pieces_23));
      }
      {
        Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_94, 0) = ((MR_Box) (Spec_24));
        MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVars_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_94));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0(
  MR_Word TypeInfo_for_T_43,
  MR_Word Term_5,
  MR_Word VarSet_6,
  MR_Word ContextPieces_7,
  MR_Word * MaybeVars_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
  MR_Word Var_24;
  MR_String Var_25;
  MR_Word Var_26;

  if (succeeded)
  {
    Var_24 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
    succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_25 = ((MR_String) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
        succeeded = (strcmp(Var_25, (MR_String) "[]") == 0);
      }
    }
  }
  if (succeeded)
    *MaybeVars_8 = (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_2[0]));
  else
  {
    MR_Word HeadTerm_10;
    MR_Word TailTerm_11;
    MR_Word Var_28;
    MR_String Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

    succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_28 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(0, Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_29 = ((MR_String) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
        succeeded = (strcmp(Var_29, (MR_String) "[|]") == 0);
        if (succeeded)
        {
          succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadTerm_10 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));
            Var_31 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 1))));
            succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TailTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));
              Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 1))));
              succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeHeadVar_15;
      MR_Word MaybeTailVars_20;
      MR_Word HeadVar_21;
      MR_Word TailVars_22;

      if (((MR_tag((MR_Word) HeadTerm_10)) == (MR_Integer) 0))
      {
        MR_Word Spec_19;
        MR_Word Var_34;

        parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(TypeInfo_for_T_43, ContextPieces_7, VarSet_6, (MR_String) "variable", HeadTerm_10, &Spec_19);
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeHeadVar_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, MaybeHeadVar_15, 0) = ((MR_Box) (Var_34));
        }
      }
      else
      {
        MR_Word HeadVar0_13 = ((MR_Word) ((MR_hl_field(1, HeadTerm_10, (MR_Integer) 0))));

        {
          MaybeHeadVar_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeHeadVar_15, 0) = ((MR_Box) (HeadVar0_13));
        }
      }
      parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0(TypeInfo_for_T_43, TailTerm_11, VarSet_6, ContextPieces_7, &MaybeTailVars_20);
      succeeded = ((MR_tag((MR_Word) MaybeHeadVar_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        HeadVar_21 = ((MR_Word) ((MR_hl_field(1, MaybeHeadVar_15, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeTailVars_20)) == (MR_Integer) 1);
        if (succeeded)
          TailVars_22 = ((MR_Word) ((MR_hl_field(1, MaybeTailVars_20, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (HeadVar_21));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (TailVars_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeVars_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_36));
        }
      }
      else
      {
        MR_Word TypeInfo_46_46;
        MR_Word TypeInfo_48_48;
        MR_Word Specs_23;
        MR_Word Var_37;
        MR_Word Var_38;

        {
          TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_46_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(0, TypeInfo_46_46, 1) = ((MR_Box) (TypeInfo_for_T_43));
        }
        Var_37 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_46_46, (MR_Word) (MaybeHeadVar_15));
        {
          TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_48_48, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
          MR_hl_field(0, TypeInfo_48_48, 1) = ((MR_Box) (TypeInfo_46_46));
        }
        Var_38 = parse_tree__maybe_error__get_any_errors1_1_f_0(TypeInfo_48_48, (MR_Word) (MaybeTailVars_20));
        Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_37, Var_38);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeVars_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Specs_23));
        }
      }
    }
    else
    {
      MR_Word Var_40;
      MR_Word Spec_42;

      parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(TypeInfo_for_T_43, ContextPieces_7, VarSet_6, (MR_String) "list of variables", Term_5, &Spec_42);
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (Spec_42));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeVars_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_vars__generate_unexpected_term_message_5_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word ContextPieces_6,
  MR_Word VarSet_7,
  MR_String Expected_8,
  MR_Word Term_9,
  MR_Word * Spec_10)
{
  MR_String TermStr_11;
  MR_Word Pieces_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_29;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_48;

  TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeInfo_for_T_49, VarSet_7, Term_9);
  Var_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Expected_8));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[32])));
  }
  Var_22 = parse_tree__error_spec__color_as_correct_1_f_0(Var_23);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (TermStr_11));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[25])));
  }
  Var_35 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_36);
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[1])));
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[34])), Var_34);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_29);
  Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_vars_scalar_common_1[30])), Var_21);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_13, Var_14);
  Var_48 = mercury__term__get_term_context_1_f_0(TypeInfo_for_T_49, Term_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_vars.generate_unexpected_term_message\'/5"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_12));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_dot_colon_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_vars____Unify____ordinary_state_dot_colon_var_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_dot_colon_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_vars____Compare____ordinary_state_dot_colon_var_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____ordinary_state_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_vars____Unify____ordinary_state_var_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_vars____Compare____ordinary_state_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_vars____Compare____ordinary_state_var_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____plain_state_dot_colon_vars_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_vars____Unify____plain_state_dot_colon_vars_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_vars____Compare____plain_state_dot_colon_vars_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_vars____Compare____plain_state_dot_colon_vars_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____plain_state_vars_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_vars____Unify____plain_state_vars_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_vars____Compare____plain_state_vars_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_vars____Compare____plain_state_vars_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____quantifier_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_vars____Unify____quantifier_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_vars____Compare____quantifier_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_vars____Compare____quantifier_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_vars____Unify____var_or_type_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_vars____Unify____var_or_type_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_vars____Compare____var_or_type_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_vars____Compare____var_or_type_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_vars__init(void)
{
}

void mercury__parse_tree__parse_vars__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_ordinary_state_dot_colon_var_1);
	MR_register_type_ctor_info(&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_ordinary_state_var_1);
	MR_register_type_ctor_info(&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_dot_colon_vars_1);
	MR_register_type_ctor_info(&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_plain_state_vars_1);
	MR_register_type_ctor_info(&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_quantifier_type_0);
	MR_register_type_ctor_info(&parse_tree__parse_vars__parse_tree__parse_vars__type_ctor_info_var_or_type_var_0);
}

void mercury__parse_tree__parse_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_vars__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_vars.
