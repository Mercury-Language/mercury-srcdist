/*
** Automatically generated from `parse_string_format.m'
** by the Mercury compiler,
** version rotd-2025-10-29
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


// :- module check_hlds.simplify.parse_string_format.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__parse_string_format__init
ENDINIT
*/

#include "check_hlds.simplify.parse_string_format.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.simplify.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_0[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_1[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_2[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_2;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_3[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_3;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_4[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_4;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_5[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_5;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_6[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_6;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_7[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_7;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_8[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_8;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_9[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_9;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_10[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_10;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_11[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_11;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_12[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_12;

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_abstract_poly_type_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_abstract_poly_type_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_abstract_poly_type_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_abstract_poly_type_0_3[10];

static const MR_DuPtagLayout check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_ptag_ordered_abstract_poly_type_0[4];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_name_ordered_abstract_poly_type_0[13];

static const MR_Integer check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_abstract_poly_type_0[13];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_maybe_prec_0_1[1];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_maybe_prec_0_2[1];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2;

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_2[1];

static const MR_DuPtagLayout check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_ptag_ordered_compiler_format_maybe_prec_0[3];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_name_ordered_compiler_format_maybe_prec_0[3];

static const MR_Integer check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_compiler_format_maybe_prec_0[3];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_maybe_width_0_1[1];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_maybe_width_0_2[1];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2;

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_2[1];

static const MR_DuPtagLayout check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_ptag_ordered_compiler_format_maybe_width_0[3];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_name_ordered_compiler_format_maybe_width_0[3];

static const MR_Integer check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_compiler_format_maybe_width_0[3];

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_0[2];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_1[4];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_2[5];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_2;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_3[6];

static const MR_DuArgLocn check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_locns_compiler_format_spec_0_3[6];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_3;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_4[7];

static const MR_DuArgLocn check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_locns_compiler_format_spec_0_4[7];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_4;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_5[7];

static const MR_DuArgLocn check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_locns_compiler_format_spec_0_5[7];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_5;

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_6[6];

static const MR_DuArgLocn check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_locns_compiler_format_spec_0_6[6];

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_6;

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_spec_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_spec_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_spec_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_spec_0_3[4];

static const MR_DuPtagLayout check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_ptag_ordered_compiler_format_spec_0[4];

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_name_ordered_compiler_format_spec_0[7];

static const MR_Integer check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_compiler_format_spec_0[7];

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_1;

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_2;

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_3;

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_4;

static const MR_EnumFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_ordinal_ordered_int_size_0[5];

static const MR_EnumFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_name_ordered_int_size_0[5];

static const MR_Integer check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_int_size_0[5];

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_1;

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_2;

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_3;

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_4;

static const MR_EnumFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_ordinal_ordered_uint_size_0[5];

static const MR_EnumFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_name_ordered_uint_size_0[5];

static const MR_Integer check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_uint_size_0[5];

static void MR_CALL 
check_hlds__simplify__parse_string_format__compiler_parse_format_string_6_p_0(
  MR_Word STATE_VARIABLE_Chars_0_29,
  MR_Word STATE_VARIABLE_PolyTypes_0_30,
  MR_Word Context_9,
  MR_Integer SpecNum_10,
  MR_Word * Specs_11,
  MR_Word * Errors_12);

static void MR_CALL 
check_hlds__simplify__parse_string_format__parse_conversion_specification_8_p_0(
  MR_Word STATE_VARIABLE_Chars_0_22,
  MR_Word * STATE_VARIABLE_Chars_23,
  MR_Word STATE_VARIABLE_PolyTypes_0_24,
  MR_Word * STATE_VARIABLE_PolyTypes_25,
  MR_Word Context_11,
  MR_Integer SpecNum_12,
  MR_Word * Spec_13,
  MR_Word * Errors_14);

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format__parse_spec_10_p_0(
  MR_Char SpecChar_11,
  MR_Word STATE_VARIABLE_PolyTypes_0_54,
  MR_Word * STATE_VARIABLE_PolyTypes_55,
  MR_Word OverallContext_13,
  MR_Word STATE_VARIABLE_Flags_0_56,
  MR_Word MaybeWidth_15,
  MR_Word MaybePrec_16,
  MR_Integer SpecNum_17,
  MR_Word * Spec_18,
  MR_Word * Errors_19);

static MR_Word MR_CALL 
check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____abstract_poly_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____abstract_poly_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_prec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_prec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____compiler_format_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____compiler_format_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____int_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____int_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____uint_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____uint_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__parse_string_format_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__simplify__parse_string_format_scalar_common_2[1][1];




static /* final */ const MR_Box check_hlds__simplify__parse_string_format_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__parse_string_format_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_0 = {
  (MR_String) "apt_f",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_1[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_1 = {
  (MR_String) "apt_i",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_2[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_2 = {
  (MR_String) "apt_i8",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_3[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_3 = {
  (MR_String) "apt_i16",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_4[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_4 = {
  (MR_String) "apt_i32",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_5[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_5 = {
  (MR_String) "apt_i64",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_6[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_6 = {
  (MR_String) "apt_u",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_7[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_7 = {
  (MR_String) "apt_u8",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_8[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_8 = {
  (MR_String) "apt_u16",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_9[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_9 = {
  (MR_String) "apt_u32",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_10[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_10 = {
  (MR_String) "apt_u64",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_11[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_11 = {
  (MR_String) "apt_s",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_12[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_12 = {
  (MR_String) "apt_c",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(12),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_abstract_poly_type_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_abstract_poly_type_0_0[1] = { &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_0 };

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_abstract_poly_type_0_1[1] = { &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_1 };

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_abstract_poly_type_0_2[1] = { &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_2 };

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_abstract_poly_type_0_3[10] = {
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_3,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_4,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_5,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_6,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_7,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_8,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_9,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_10,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_11,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_12
};

static const MR_DuPtagLayout check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_ptag_ordered_abstract_poly_type_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_abstract_poly_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_abstract_poly_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_abstract_poly_type_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(10),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_abstract_poly_type_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_name_ordered_abstract_poly_type_0[13] = {
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_12,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_0,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_1,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_3,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_4,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_5,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_2,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_11,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_6,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_8,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_9,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_10,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_abstract_poly_type_0_7
};

static const MR_Integer check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_abstract_poly_type_0[13] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 12,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 7,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__parse_string_format____Unify____abstract_poly_type_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__parse_string_format____Compare____abstract_poly_type_0_0_10001)),
  (MR_String) "check_hlds.simplify.parse_string_format",
  (MR_String) "abstract_poly_type",
  { check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_name_ordered_abstract_poly_type_0 },
  { check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_ptag_ordered_abstract_poly_type_0 },
  (MR_Integer) 13,
  UINT16_C(12),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_abstract_poly_type_0,

};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0 = {
  (MR_String) "compiler_no_specified_prec",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_maybe_prec_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1 = {
  (MR_String) "compiler_manifest_prec",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_maybe_prec_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_maybe_prec_0_2[1] = { (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2 = {
  (MR_String) "compiler_var_prec",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_maybe_prec_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0[1] = { &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0 };

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1[1] = { &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1 };

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_2[1] = { &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2 };

static const MR_DuPtagLayout check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_ptag_ordered_compiler_format_maybe_prec_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_prec_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_name_ordered_compiler_format_maybe_prec_0[3] = {
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_1,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_0,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_prec_0_2
};

static const MR_Integer check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_compiler_format_maybe_prec_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_prec_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_prec_0_0_10001)),
  (MR_String) "check_hlds.simplify.parse_string_format",
  (MR_String) "compiler_format_maybe_prec",
  { check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_name_ordered_compiler_format_maybe_prec_0 },
  { check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_ptag_ordered_compiler_format_maybe_prec_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_compiler_format_maybe_prec_0,

};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0 = {
  (MR_String) "compiler_no_specified_width",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_maybe_width_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1 = {
  (MR_String) "compiler_manifest_width",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_maybe_width_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_maybe_width_0_2[1] = { (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2 = {
  (MR_String) "compiler_var_width",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_maybe_width_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0[1] = { &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0 };

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1[1] = { &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1 };

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_2[1] = { &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2 };

static const MR_DuPtagLayout check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_ptag_ordered_compiler_format_maybe_width_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_maybe_width_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_name_ordered_compiler_format_maybe_width_0[3] = {
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_1,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_0,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_maybe_width_0_2
};

static const MR_Integer check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_compiler_format_maybe_width_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_width_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_width_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_width_0_0_10001)),
  (MR_String) "check_hlds.simplify.parse_string_format",
  (MR_String) "compiler_format_maybe_width",
  { check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_name_ordered_compiler_format_maybe_width_0 },
  { check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_ptag_ordered_compiler_format_maybe_width_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_compiler_format_maybe_width_0,

};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_0 = {
  (MR_String) "compiler_const_string",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_1[4] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_1 = {
  (MR_String) "compiler_spec_char",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_2[5] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_2 = {
  (MR_String) "compiler_spec_string",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_3[6] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_int_size_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuArgLocn check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_locns_compiler_format_spec_0_3[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_3 = {
  (MR_String) "compiler_spec_signed_int",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_3,
  NULL,
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_locns_compiler_format_spec_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_4[7] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_int_size_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuArgLocn check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_locns_compiler_format_spec_0_4[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 3,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_4 = {
  (MR_String) "compiler_spec_unsigned_int",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_4,
  NULL,
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_locns_compiler_format_spec_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_5[7] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_int_base_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_uint_size_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuArgLocn check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_locns_compiler_format_spec_0_5[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 3,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_5 = {
  (MR_String) "compiler_spec_uint",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_5,
  NULL,
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_locns_compiler_format_spec_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_6[6] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_width_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0),
  (MR_PseudoTypeInfo) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_float_kind_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuArgLocn check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_locns_compiler_format_spec_0_6[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_6 = {
  (MR_String) "compiler_spec_float",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_types_compiler_format_spec_0_6,
  NULL,
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__field_locns_compiler_format_spec_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_spec_0_0[1] = { &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_0 };

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_spec_0_1[1] = { &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_1 };

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_spec_0_2[1] = { &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_2 };

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_spec_0_3[4] = {
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_3,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_4,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_5,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_6
};

static const MR_DuPtagLayout check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_ptag_ordered_compiler_format_spec_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_spec_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_spec_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_stag_ordered_compiler_format_spec_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_name_ordered_compiler_format_spec_0[7] = {
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_0,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_1,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_6,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_3,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_2,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_5,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_functor_desc_compiler_format_spec_0_4
};

static const MR_Integer check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_compiler_format_spec_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__parse_string_format____Unify____compiler_format_spec_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__parse_string_format____Compare____compiler_format_spec_0_0_10001)),
  (MR_String) "check_hlds.simplify.parse_string_format",
  (MR_String) "compiler_format_spec",
  { check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_name_ordered_compiler_format_spec_0 },
  { check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__du_ptag_ordered_compiler_format_spec_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_compiler_format_spec_0,

};

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_0 = {
  (MR_String) "int_size_word",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_1 = {
  (MR_String) "int_size_8",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_2 = {
  (MR_String) "int_size_16",
  INT32_C(2)
};

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_3 = {
  (MR_String) "int_size_32",
  INT32_C(3)
};

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_4 = {
  (MR_String) "int_size_64",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_ordinal_ordered_int_size_0[5] = {
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_0,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_1,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_2,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_3,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_4
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_name_ordered_int_size_0[5] = {
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_2,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_3,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_4,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_1,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_int_size_0_0
};

static const MR_Integer check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_int_size_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_int_size_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__parse_string_format____Unify____int_size_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__parse_string_format____Compare____int_size_0_0_10001)),
  (MR_String) "check_hlds.simplify.parse_string_format",
  (MR_String) "int_size",
  { check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_name_ordered_int_size_0 },
  { check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_ordinal_ordered_int_size_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_int_size_0,

};

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_0 = {
  (MR_String) "uint_size_word",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_1 = {
  (MR_String) "uint_size_8",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_2 = {
  (MR_String) "uint_size_16",
  INT32_C(2)
};

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_3 = {
  (MR_String) "uint_size_32",
  INT32_C(3)
};

static const MR_EnumFunctorDesc check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_4 = {
  (MR_String) "uint_size_64",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_ordinal_ordered_uint_size_0[5] = {
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_0,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_1,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_2,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_3,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_4
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_name_ordered_uint_size_0[5] = {
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_2,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_3,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_4,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_1,
  &check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_functor_desc_uint_size_0_0
};

static const MR_Integer check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_uint_size_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_uint_size_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__parse_string_format____Unify____uint_size_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__parse_string_format____Compare____uint_size_0_0_10001)),
  (MR_String) "check_hlds.simplify.parse_string_format",
  (MR_String) "uint_size",
  { check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_name_ordered_uint_size_0 },
  { check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__enum_ordinal_ordered_uint_size_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__functor_number_map_uint_size_0,

};

void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____uint_size_0_0(
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
check_hlds__simplify__parse_string_format____Unify____uint_size_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____int_size_0_0(
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
check_hlds__simplify__parse_string_format____Unify____int_size_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____compiler_format_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_108 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_109 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_108 == CastY_109);
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
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
              MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
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
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
              MR_Word ArgX4_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
              MR_Word ArgY4_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 3))));
              MR_Word SubResult1_11;

              mercury__term_context____Compare____term_context_0_0(&SubResult1_11, ArgX1_9, ArgY1_10);
              succeeded = (SubResult1_11 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_11;
              else
              {
                MR_Word SubResult2_14;

                mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult2_14, ArgX2_12, ArgY2_13);
                succeeded = (SubResult2_14 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_14;
                else
                {
                  MR_Word SubResult3_17;

                  check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_width_0_0(&SubResult3_17, ArgX3_15, ArgY3_16);
                  succeeded = (SubResult3_17 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_17;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX4_18)), ((MR_Box) (ArgY4_19)));
                }
              }
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
              MR_Word ArgX1_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word ArgX3_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Word ArgY3_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_Word ArgX4_29 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 3))));
              MR_Word ArgY4_30 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 3))));
              MR_Word ArgX5_32 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 4))));
              MR_Word ArgY5_33 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 4))));
              MR_Word SubResult1_22;

              mercury__term_context____Compare____term_context_0_0(&SubResult1_22, ArgX1_20, ArgY1_21);
              succeeded = (SubResult1_22 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_22;
              else
              {
                MR_Word SubResult2_25;

                mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult2_25, ArgX2_23, ArgY2_24);
                succeeded = (SubResult2_25 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_25;
                else
                {
                  MR_Word SubResult3_28;

                  check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_width_0_0(&SubResult3_28, ArgX3_26, ArgY3_27);
                  succeeded = (SubResult3_28 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_28;
                  else
                  {
                    MR_Word SubResult4_31;

                    check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&SubResult4_31, ArgX4_29, ArgY4_30);
                    succeeded = (SubResult4_31 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult4_31;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX5_32)), ((MR_Box) (ArgY5_33)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word ArgX5_46 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) & (MR_Integer) 7);
                      MR_Word ArgY5_47 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 5))) & (MR_Integer) 7);
                      MR_Word ArgX6_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                      MR_Word ArgY6_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 6))));
                      MR_Word SubResult1_36;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_36, ArgX1_34, ArgY1_35);
                      succeeded = (SubResult1_36 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_36;
                      else
                      {
                        MR_Word SubResult2_39;

                        mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult2_39, ArgX2_37, ArgY2_38);
                        succeeded = (SubResult2_39 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_39;
                        else
                        {
                          MR_Word SubResult3_42;

                          check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_width_0_0(&SubResult3_42, ArgX3_40, ArgY3_41);
                          succeeded = (SubResult3_42 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_42;
                          else
                          {
                            MR_Word SubResult4_45;

                            check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&SubResult4_45, ArgX4_43, ArgY4_44);
                            succeeded = (SubResult4_45 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_45;
                            else
                            {
                              MR_Word SubResult5_48;
                              MR_Integer Var_157 = (MR_Integer) (ArgX5_46);
                              MR_Integer Var_158 = (MR_Integer) (ArgY5_47);

                              succeeded = (Var_157 < Var_158);
                              if (succeeded)
                              {
                                SubResult5_48 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_157 > Var_158);
                                if (succeeded)
                                {
                                  SubResult5_48 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult5_48;
                              else
                                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX6_49)), ((MR_Box) (ArgY6_50)));
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_61 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word ArgX5_63 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) >> 3)) & (MR_Integer) 7);
                      MR_Word ArgY5_64 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 5))) >> 3)) & (MR_Integer) 7);
                      MR_Word ArgX6_66 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) & (MR_Integer) 7);
                      MR_Word ArgY6_67 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 5))) & (MR_Integer) 7);
                      MR_Word ArgX7_69 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                      MR_Word ArgY7_70 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 6))));
                      MR_Word SubResult1_53;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_53, ArgX1_51, ArgY1_52);
                      succeeded = (SubResult1_53 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_53;
                      else
                      {
                        MR_Word SubResult2_56;

                        mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult2_56, ArgX2_54, ArgY2_55);
                        succeeded = (SubResult2_56 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_56;
                        else
                        {
                          MR_Word SubResult3_59;

                          check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_width_0_0(&SubResult3_59, ArgX3_57, ArgY3_58);
                          succeeded = (SubResult3_59 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_59;
                          else
                          {
                            MR_Word SubResult4_62;

                            check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&SubResult4_62, ArgX4_60, ArgY4_61);
                            succeeded = (SubResult4_62 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_62;
                            else
                            {
                              MR_Word SubResult5_65;
                              MR_Integer Var_153 = (MR_Integer) (ArgX5_63);
                              MR_Integer Var_154 = (MR_Integer) (ArgY5_64);

                              succeeded = (Var_153 < Var_154);
                              if (succeeded)
                              {
                                SubResult5_65 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_153 > Var_154);
                                if (succeeded)
                                {
                                  SubResult5_65 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult5_65;
                              else
                              {
                                MR_Word SubResult6_68;
                                MR_Integer Var_155 = (MR_Integer) (ArgX6_66);
                                MR_Integer Var_156 = (MR_Integer) (ArgY6_67);

                                succeeded = (Var_155 < Var_156);
                                if (succeeded)
                                {
                                  SubResult6_68 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_155 > Var_156);
                                  if (succeeded)
                                  {
                                    SubResult6_68 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult6_68;
                                else
                                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX7_69)), ((MR_Box) (ArgY7_70)));
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_71 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_72 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_74 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_75 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_77 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_78 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_80 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_81 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word ArgX5_83 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) >> 3)) & (MR_Integer) 7);
                      MR_Word ArgY5_84 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 5))) >> 3)) & (MR_Integer) 7);
                      MR_Word ArgX6_86 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) & (MR_Integer) 7);
                      MR_Word ArgY6_87 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 5))) & (MR_Integer) 7);
                      MR_Word ArgX7_89 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                      MR_Word ArgY7_90 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 6))));
                      MR_Word SubResult1_73;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_73, ArgX1_71, ArgY1_72);
                      succeeded = (SubResult1_73 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_73;
                      else
                      {
                        MR_Word SubResult2_76;

                        mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult2_76, ArgX2_74, ArgY2_75);
                        succeeded = (SubResult2_76 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_76;
                        else
                        {
                          MR_Word SubResult3_79;

                          check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_width_0_0(&SubResult3_79, ArgX3_77, ArgY3_78);
                          succeeded = (SubResult3_79 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_79;
                          else
                          {
                            MR_Word SubResult4_82;

                            check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&SubResult4_82, ArgX4_80, ArgY4_81);
                            succeeded = (SubResult4_82 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_82;
                            else
                            {
                              MR_Word SubResult5_85;
                              MR_Integer Var_149 = (MR_Integer) (ArgX5_83);
                              MR_Integer Var_150 = (MR_Integer) (ArgY5_84);

                              succeeded = (Var_149 < Var_150);
                              if (succeeded)
                              {
                                SubResult5_85 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_149 > Var_150);
                                if (succeeded)
                                {
                                  SubResult5_85 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult5_85;
                              else
                              {
                                MR_Word SubResult6_88;
                                MR_Integer Var_151 = (MR_Integer) (ArgX6_86);
                                MR_Integer Var_152 = (MR_Integer) (ArgY6_87);

                                succeeded = (Var_151 < Var_152);
                                if (succeeded)
                                {
                                  SubResult6_88 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_151 > Var_152);
                                  if (succeeded)
                                  {
                                    SubResult6_88 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult6_88;
                                else
                                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX7_89)), ((MR_Box) (ArgY7_90)));
                              }
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ArgX1_91 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_92 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_94 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_95 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_97 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_98 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_100 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_101 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word ArgX5_103 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) & (MR_Integer) 7);
                      MR_Word ArgY5_104 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 5))) & (MR_Integer) 7);
                      MR_Word ArgX6_106 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                      MR_Word ArgY6_107 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 6))));
                      MR_Word SubResult1_93;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_93, ArgX1_91, ArgY1_92);
                      succeeded = (SubResult1_93 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_93;
                      else
                      {
                        MR_Word SubResult2_96;

                        mercury__string__parse_util____Compare____string_format_flags_0_0(&SubResult2_96, ArgX2_94, ArgY2_95);
                        succeeded = (SubResult2_96 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_96;
                        else
                        {
                          MR_Word SubResult3_99;

                          check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_width_0_0(&SubResult3_99, ArgX3_97, ArgY3_98);
                          succeeded = (SubResult3_99 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_99;
                          else
                          {
                            MR_Word SubResult4_102;

                            check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&SubResult4_102, ArgX4_100, ArgY4_101);
                            succeeded = (SubResult4_102 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_102;
                            else
                            {
                              MR_Word SubResult5_105;
                              MR_Integer Var_147 = (MR_Integer) (ArgX5_103);
                              MR_Integer Var_148 = (MR_Integer) (ArgY5_104);

                              succeeded = (Var_147 < Var_148);
                              if (succeeded)
                              {
                                SubResult5_105 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_147 > Var_148);
                                if (succeeded)
                                {
                                  SubResult5_105 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult5_105;
                              else
                                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX6_106)), ((MR_Box) (ArgY6_107)));
                            }
                          }
                        }
                      }
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____compiler_format_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_77 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_78 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_77 == CastY_78);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_String ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_82_82;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_10;
          MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Word ArgY3_12;
          MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 3))));
          MR_Word ArgY4_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
            ArgY4_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
            {
              succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_9, ArgY2_10);
              if (succeeded)
              {
                succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_11, ArgY3_12);
                if (succeeded)
                {
                  TypeInfo_82_82 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_82_82, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_91_91;
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_18;
          MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Word ArgY3_20;
          MR_Word ArgX4_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 3))));
          MR_Word ArgY4_22;
          MR_Word ArgX5_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 4))));
          MR_Word ArgY5_24;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
            ArgY4_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 3))));
            ArgY5_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 4))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_15, ArgY1_16);
            if (succeeded)
            {
              succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_17, ArgY2_18);
              if (succeeded)
              {
                succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_19, ArgY3_20);
                if (succeeded)
                {
                  succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_prec_0_0(ArgX4_21, ArgY4_22);
                  if (succeeded)
                  {
                    TypeInfo_91_91 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_91_91, ((MR_Box) (ArgX5_23)), ((MR_Box) (ArgY5_24)));
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_88_88;
              MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_26;
              MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_28;
              MR_Word ArgX3_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_30;
              MR_Word ArgX4_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_32;
              MR_Word ArgX5_33 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 5))) & (MR_Integer) 7);
              MR_Word ArgY5_34;
              MR_Word ArgX6_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 6))));
              MR_Word ArgY6_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_34 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) & (MR_Integer) 7);
                ArgY6_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_25, ArgY1_26);
                if (succeeded)
                {
                  succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_27, ArgY2_28);
                  if (succeeded)
                  {
                    succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_29, ArgY3_30);
                    if (succeeded)
                    {
                      succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_prec_0_0(ArgX4_31, ArgY4_32);
                      if (succeeded)
                      {
                        succeeded = (ArgX5_33 == ArgY5_34);
                        if (succeeded)
                        {
                          TypeInfo_88_88 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_88_88, ((MR_Box) (ArgX6_35)), ((MR_Box) (ArgY6_36)));
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_97_97;
              MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_38;
              MR_Word ArgX2_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_40;
              MR_Word ArgX3_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_42;
              MR_Word ArgX4_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_44;
              MR_Word ArgX5_45 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 5))) >> 3)) & (MR_Integer) 7);
              MR_Word ArgY5_46;
              MR_Word ArgX6_47 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 5))) & (MR_Integer) 7);
              MR_Word ArgY6_48;
              MR_Word ArgX7_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 6))));
              MR_Word ArgY7_50;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_46 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) >> 3)) & (MR_Integer) 7);
                ArgY6_48 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) & (MR_Integer) 7);
                ArgY7_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_37, ArgY1_38);
                if (succeeded)
                {
                  succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_39, ArgY2_40);
                  if (succeeded)
                  {
                    succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_41, ArgY3_42);
                    if (succeeded)
                    {
                      succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_prec_0_0(ArgX4_43, ArgY4_44);
                      if (succeeded)
                      {
                        succeeded = (ArgX5_45 == ArgY5_46);
                        if (succeeded)
                        {
                          succeeded = (ArgX6_47 == ArgY6_48);
                          if (succeeded)
                          {
                            TypeInfo_97_97 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_97_97, ((MR_Box) (ArgX7_49)), ((MR_Box) (ArgY7_50)));
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_94_94;
              MR_Word ArgX1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_52;
              MR_Word ArgX2_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_54;
              MR_Word ArgX3_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_56;
              MR_Word ArgX4_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_58;
              MR_Word ArgX5_59 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 5))) >> 3)) & (MR_Integer) 7);
              MR_Word ArgY5_60;
              MR_Word ArgX6_61 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 5))) & (MR_Integer) 7);
              MR_Word ArgY6_62;
              MR_Word ArgX7_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 6))));
              MR_Word ArgY7_64;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_60 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) >> 3)) & (MR_Integer) 7);
                ArgY6_62 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) & (MR_Integer) 7);
                ArgY7_64 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_51, ArgY1_52);
                if (succeeded)
                {
                  succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_53, ArgY2_54);
                  if (succeeded)
                  {
                    succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_55, ArgY3_56);
                    if (succeeded)
                    {
                      succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_prec_0_0(ArgX4_57, ArgY4_58);
                      if (succeeded)
                      {
                        succeeded = (ArgX5_59 == ArgY5_60);
                        if (succeeded)
                        {
                          succeeded = (ArgX6_61 == ArgY6_62);
                          if (succeeded)
                          {
                            TypeInfo_94_94 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_94_94, ((MR_Box) (ArgX7_63)), ((MR_Box) (ArgY7_64)));
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_85_85;
              MR_Word ArgX1_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_66;
              MR_Word ArgX2_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_68;
              MR_Word ArgX3_69 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_70;
              MR_Word ArgX4_71 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_72;
              MR_Word ArgX5_73 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 5))) & (MR_Integer) 7);
              MR_Word ArgY5_74;
              MR_Word ArgX6_75 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 6))));
              MR_Word ArgY6_76;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_66 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_70 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_72 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_74 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 5))) & (MR_Integer) 7);
                ArgY6_76 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 6))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_65, ArgY1_66);
                if (succeeded)
                {
                  succeeded = mercury__string__parse_util____Unify____string_format_flags_0_0(ArgX2_67, ArgY2_68);
                  if (succeeded)
                  {
                    succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_width_0_0(ArgX3_69, ArgY3_70);
                    if (succeeded)
                    {
                      succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_prec_0_0(ArgX4_71, ArgY4_72);
                      if (succeeded)
                      {
                        succeeded = (ArgX5_73 == ArgY5_74);
                        if (succeeded)
                        {
                          TypeInfo_85_85 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_85_85, ((MR_Box) (ArgX6_75)), ((MR_Box) (ArgY6_76)));
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_width_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
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
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_4 > ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
          case (MR_Integer) 2:
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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_width_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_11_11;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            TypeInfo_11_11 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_prec_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
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
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_4 > ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
          case (MR_Integer) 2:
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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_prec_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_11_11;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            TypeInfo_11_11 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____abstract_poly_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_69 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_70 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_69 == CastY_70);
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
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
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
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_11;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_11, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
              succeeded = (SubResult1_11 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_11;
              else
                mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_12, ArgY2_13);
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
              MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_16;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_16, ((MR_Box) (ArgX1_14)), ((MR_Box) (ArgY1_15)));
              succeeded = (SubResult1_16 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_16;
              else
                mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_17, ArgY2_18);
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_21;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_21, ((MR_Box) (ArgX1_19)), ((MR_Box) (ArgY1_20)));
                      succeeded = (SubResult1_21 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_21;
                      else
                        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_22, ArgY2_23);
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_26;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_26, ((MR_Box) (ArgX1_24)), ((MR_Box) (ArgY1_25)));
                      succeeded = (SubResult1_26 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_26;
                      else
                        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_27, ArgY2_28);
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_31;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_31, ((MR_Box) (ArgX1_29)), ((MR_Box) (ArgY1_30)));
                      succeeded = (SubResult1_31 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_31;
                      else
                        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_32, ArgY2_33);
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ArgX1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_36;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_36, ((MR_Box) (ArgX1_34)), ((MR_Box) (ArgY1_35)));
                      succeeded = (SubResult1_36 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_36;
                      else
                        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_37, ArgY2_38);
                    }
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ArgX1_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_41;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_41, ((MR_Box) (ArgX1_39)), ((MR_Box) (ArgY1_40)));
                      succeeded = (SubResult1_41 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_41;
                      else
                        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_42, ArgY2_43);
                    }
                    break;
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word ArgX1_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_46;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_46, ((MR_Box) (ArgX1_44)), ((MR_Box) (ArgY1_45)));
                      succeeded = (SubResult1_46 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_46;
                      else
                        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_47, ArgY2_48);
                    }
                    break;
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 6:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word ArgX1_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_51;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_51, ((MR_Box) (ArgX1_49)), ((MR_Box) (ArgY1_50)));
                      succeeded = (SubResult1_51 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_51;
                      else
                        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_52, ArgY2_53);
                    }
                    break;
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 7:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word ArgX1_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_56;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_56, ((MR_Box) (ArgX1_54)), ((MR_Box) (ArgY1_55)));
                      succeeded = (SubResult1_56 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_56;
                      else
                        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_57, ArgY2_58);
                    }
                    break;
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 8:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word ArgX1_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_61;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_61, ((MR_Box) (ArgX1_59)), ((MR_Box) (ArgY1_60)));
                      succeeded = (SubResult1_61 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_61;
                      else
                        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_62, ArgY2_63);
                    }
                    break;
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 9:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 9:
                    {
                      MR_Word ArgX1_64 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_66;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]), &SubResult1_66, ((MR_Box) (ArgX1_64)), ((MR_Box) (ArgY1_65)));
                      succeeded = (SubResult1_66 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_66;
                      else
                        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_67, ArgY2_68);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____abstract_poly_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_55 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_56 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_55 == CastY_56);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_59_59;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            TypeInfo_59_59 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            if (succeeded)
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_61_61;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            TypeInfo_61_61 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_61_61, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            if (succeeded)
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_9, ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_69_69;
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            TypeInfo_69_69 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_69_69, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
            if (succeeded)
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_13, ArgY2_14);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_63_63;
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_16;
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_63_63 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_63_63, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_17, ArgY2_18);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_65_65;
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_20;
              MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_65_65 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_65_65, ((MR_Box) (ArgX1_19)), ((MR_Box) (ArgY1_20)));
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_21, ArgY2_22);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_67_67;
              MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_24;
              MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_67_67 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (ArgX1_23)), ((MR_Box) (ArgY1_24)));
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_25, ArgY2_26);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_73_73;
              MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_28;
              MR_Word ArgX2_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_73_73 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (ArgX1_27)), ((MR_Box) (ArgY1_28)));
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_29, ArgY2_30);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeInfo_81_81;
              MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_32;
              MR_Word ArgX2_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_81_81 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_81_81, ((MR_Box) (ArgX1_31)), ((MR_Box) (ArgY1_32)));
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_33, ArgY2_34);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TypeInfo_75_75;
              MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_36;
              MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_75_75 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_75_75, ((MR_Box) (ArgX1_35)), ((MR_Box) (ArgY1_36)));
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_37, ArgY2_38);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TypeInfo_77_77;
              MR_Word ArgX1_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_40;
              MR_Word ArgX2_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_77_77 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_77_77, ((MR_Box) (ArgX1_39)), ((MR_Box) (ArgY1_40)));
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_41, ArgY2_42);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word TypeInfo_79_79;
              MR_Word ArgX1_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_44;
              MR_Word ArgX2_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_79_79 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_79_79, ((MR_Box) (ArgX1_43)), ((MR_Box) (ArgY1_44)));
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_45, ArgY2_46);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TypeInfo_71_71;
              MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_48;
              MR_Word ArgX2_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_50;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_71_71 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_71_71, ((MR_Box) (ArgX1_47)), ((MR_Box) (ArgY1_48)));
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_49, ArgY2_50);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word TypeInfo_57_57;
              MR_Word ArgX1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_52;
              MR_Word ArgX2_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_54;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_57_57 = (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (ArgX1_51)), ((MR_Box) (ArgY1_52)));
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_53, ArgY2_54);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__parse_string_format__merge_adjacent_const_strs_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadSpec_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TailSpecs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word TailMergedSpecs_6;

    check_hlds__simplify__parse_string_format__merge_adjacent_const_strs_2_p_0(TailSpecs_4, &TailMergedSpecs_6);
    switch (MR_tag((MR_Word) HeadSpec_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word HeadContext_7 = ((MR_Word) ((MR_hl_field(0, HeadSpec_3, 0))));
          MR_String HeadConstString_8 = ((MR_String) ((MR_hl_field(0, HeadSpec_3, 1))));
          MR_Word LaterTailMergedSpecs_10;
          MR_String TailConstString_12;
          MR_Word FirstTailMergedSpec_9;

          succeeded = (TailMergedSpecs_6 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FirstTailMergedSpec_9 = ((MR_Word) ((MR_hl_field(1, TailMergedSpecs_6, 0))));
            LaterTailMergedSpecs_10 = ((MR_Word) ((MR_hl_field(1, TailMergedSpecs_6, 1))));
            succeeded = ((MR_tag((MR_Word) FirstTailMergedSpec_9)) == (MR_Integer) 0);
            if (succeeded)
              TailConstString_12 = ((MR_String) ((MR_hl_field(0, FirstTailMergedSpec_9, 1))));
          }
          if (succeeded)
          {
            MR_Word HeadMergedSpec_13;
            MR_String Var_49;

            Var_49 = mercury__string__f_43_43_2_f_0(HeadConstString_8, TailConstString_12);
            {
              HeadMergedSpec_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, HeadMergedSpec_13, 0) = ((MR_Box) (HeadContext_7));
              MR_hl_field(0, HeadMergedSpec_13, 1) = ((MR_Box) (Var_49));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HeadMergedSpec_13));
              MR_hl_field(1, base, 1) = ((MR_Box) (LaterTailMergedSpecs_10));
            }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HeadSpec_3));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailMergedSpecs_6));
            }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadSpec_3));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailMergedSpecs_6));
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__simplify__parse_string_format__parse_format_string_abstract_4_p_0(
  MR_Word Chars_5,
  MR_Word PolyTypes_6,
  MR_Word Context_7,
  MR_Word * MaybeSpecs_8)
{
  MR_Word Specs_9;
  MR_Word Errors_10;

  check_hlds__simplify__parse_string_format__compiler_parse_format_string_6_p_0(Chars_5, PolyTypes_6, Context_7, (MR_Integer) 1, &Specs_9, &Errors_10);
  if ((Errors_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSpecs_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_9));
    }
  else
  {
    MR_Word HeadError_11 = ((MR_Word) ((MR_hl_field(1, Errors_10, 0))));
    MR_Word TailErrors_12 = ((MR_Word) ((MR_hl_field(1, Errors_10, 1))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeSpecs_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadError_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailErrors_12));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__parse_string_format__compiler_parse_format_string_6_p_0(
  MR_Word STATE_VARIABLE_Chars_0_29,
  MR_Word STATE_VARIABLE_PolyTypes_0_30,
  MR_Word Context_9,
  MR_Integer SpecNum_10,
  MR_Word * Specs_11,
  MR_Word * Errors_12)
{
  MR_Word NonConversionSpecChars_13;
  MR_Word GatherEndedBy_14;
  MR_Word Specs0_15;

  mercury__string__parse_util__gather_non_percent_chars_3_p_0(STATE_VARIABLE_Chars_0_29, &NonConversionSpecChars_13, &GatherEndedBy_14);
  if ((GatherEndedBy_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    Specs0_15 = (MR_Word) ((MR_Unsigned) 0U);
    if ((STATE_VARIABLE_PolyTypes_0_30 == (MR_Word) ((MR_Unsigned) 0U)))
      *Errors_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Error_18;
      MR_Integer Var_31;

      Var_31 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0), STATE_VARIABLE_PolyTypes_0_30);
      {
        Error_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Error_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Error_18, 1) = ((MR_Box) (SpecNum_10));
        MR_hl_field(3, Error_18, 2) = ((MR_Box) (Var_31));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Errors_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Error_18));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
  else
  {
    MR_Word HeadSpec_19;
    MR_Word HeadErrors_20;
    MR_Word TailSpecs_21;
    MR_Word TailErrors_22;
    MR_Word STATE_VARIABLE_Chars_1_33 = ((MR_Word) ((MR_hl_field(1, GatherEndedBy_14, 0))));
    MR_Word STATE_VARIABLE_Chars_2_34;
    MR_Word STATE_VARIABLE_PolyTypes_1_35;
    MR_Integer Var_36;

    check_hlds__simplify__parse_string_format__parse_conversion_specification_8_p_0(STATE_VARIABLE_Chars_1_33, &STATE_VARIABLE_Chars_2_34, STATE_VARIABLE_PolyTypes_0_30, &STATE_VARIABLE_PolyTypes_1_35, Context_9, SpecNum_10, &HeadSpec_19, &HeadErrors_20);
    Var_36 = (MR_Integer) ((MR_Unsigned) SpecNum_10 + (MR_Unsigned) 1);
    check_hlds__simplify__parse_string_format__compiler_parse_format_string_6_p_0(STATE_VARIABLE_Chars_2_34, STATE_VARIABLE_PolyTypes_1_35, Context_9, Var_36, &TailSpecs_21, &TailErrors_22);
    if ((HeadErrors_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        Specs0_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Specs0_15, 0) = ((MR_Box) (HeadSpec_19));
        MR_hl_field(1, Specs0_15, 1) = ((MR_Box) (TailSpecs_21));
      }
      *Errors_12 = TailErrors_22;
    }
    else
    {
      Specs0_15 = TailSpecs_21;
      *Errors_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), HeadErrors_20, TailErrors_22);
    }
  }
  if ((NonConversionSpecChars_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *Specs_11 = Specs0_15;
  else
  {
    MR_String NonConversionSpecString_27;
    MR_Word StringConst_28;

    NonConversionSpecString_27 = mercury__string__from_char_list_1_f_0(NonConversionSpecChars_13);
    {
      StringConst_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, StringConst_28, 0) = ((MR_Box) (Context_9));
      MR_hl_field(0, StringConst_28, 1) = ((MR_Box) (NonConversionSpecString_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (StringConst_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (Specs0_15));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__parse_string_format__parse_conversion_specification_8_p_0(
  MR_Word STATE_VARIABLE_Chars_0_22,
  MR_Word * STATE_VARIABLE_Chars_23,
  MR_Word STATE_VARIABLE_PolyTypes_0_24,
  MR_Word * STATE_VARIABLE_PolyTypes_25,
  MR_Word Context_11,
  MR_Integer SpecNum_12,
  MR_Word * Spec_13,
  MR_Word * Errors_14)
{
  MR_bool succeeded;
  MR_Word Flags_16;
  MR_Word MaybeWidth_17;
  MR_Word WidthErrors_18;
  MR_Word MaybePrec_19;
  MR_Word PrecErrors_20;
  MR_Word SpecErrors_21;
  MR_Word STATE_VARIABLE_Chars_1_31;
  MR_Word STATE_VARIABLE_Chars_2_32;
  MR_Word STATE_VARIABLE_PolyTypes_1_33;
  MR_Word STATE_VARIABLE_Chars_3_34;
  MR_Word STATE_VARIABLE_PolyTypes_2_35;
  MR_Word Var_38;
  MR_Word STATE_VARIABLE_Chars_1_44;
  MR_Char Var_45;
  MR_Word STATE_VARIABLE_Chars_1_56;
  MR_Char Var_57;

  mercury__string__parse_util__gather_flag_chars_4_p_0(STATE_VARIABLE_Chars_0_22, &STATE_VARIABLE_Chars_1_31, (MR_Word) (&check_hlds__simplify__parse_string_format_scalar_common_2[0]), &Flags_16);
  succeeded = (STATE_VARIABLE_Chars_1_31 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_45 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_1_31, 0)));
    STATE_VARIABLE_Chars_1_44 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_1_31, 1))));
    succeeded = (Var_45 == (MR_Char) 42);
  }
  if (succeeded)
  {
    STATE_VARIABLE_Chars_2_32 = STATE_VARIABLE_Chars_1_44;
    if ((STATE_VARIABLE_PolyTypes_0_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_49;

      MaybeWidth_17 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (SpecNum_12));
      }
      {
        WidthErrors_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, WidthErrors_18, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, WidthErrors_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_PolyTypes_1_33 = STATE_VARIABLE_PolyTypes_0_24;
    }
    else
    {
      MR_Word PolyType_40 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_24, 0))));
      MR_Word PolyWidthVar_41;

      STATE_VARIABLE_PolyTypes_1_33 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_24, 1))));
      succeeded = ((MR_tag((MR_Word) PolyType_40)) == (MR_Integer) 1);
      if (succeeded)
      {
        PolyWidthVar_41 = ((MR_Word) ((MR_hl_field(1, PolyType_40, 0))));
        {
          MaybeWidth_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, MaybeWidth_17, 0) = ((MR_Box) (PolyWidthVar_41));
        }
        WidthErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Var_46;
        MR_Word Var_47;

        MaybeWidth_17 = (MR_Word) ((MR_Unsigned) 0U);
        Var_47 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(PolyType_40);
        {
          Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_46, 1) = ((MR_Box) (SpecNum_12));
          MR_hl_field(3, Var_46, 2) = (MR_Box) ((MR_Unsigned) (Var_47));
        }
        {
          WidthErrors_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, WidthErrors_18, 0) = ((MR_Box) (Var_46));
          MR_hl_field(1, WidthErrors_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  else
  {
    MR_Integer Width_43;
    MR_Word STATE_VARIABLE_Chars_2_51;

    succeeded = mercury__string__parse_util__get_nonzero_number_prefix_3_p_0(STATE_VARIABLE_Chars_1_31, &STATE_VARIABLE_Chars_2_51, &Width_43);
    if (succeeded)
    {
      STATE_VARIABLE_Chars_2_32 = STATE_VARIABLE_Chars_2_51;
      {
        MaybeWidth_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeWidth_17, 0) = ((MR_Box) (Width_43));
      }
      WidthErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MaybeWidth_17 = (MR_Word) ((MR_Unsigned) 0U);
      WidthErrors_18 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Chars_2_32 = STATE_VARIABLE_Chars_1_31;
    }
    STATE_VARIABLE_PolyTypes_1_33 = STATE_VARIABLE_PolyTypes_0_24;
  }
  succeeded = (STATE_VARIABLE_Chars_2_32 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_57 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_2_32, 0)));
    STATE_VARIABLE_Chars_1_56 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_2_32, 1))));
    succeeded = (Var_57 == (MR_Char) 46);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Chars_2_58;
    MR_Char Var_59;

    succeeded = (STATE_VARIABLE_Chars_1_56 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_59 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_1_56, 0)));
      STATE_VARIABLE_Chars_2_58 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_1_56, 1))));
      succeeded = (Var_59 == (MR_Char) 42);
    }
    if (succeeded)
    {
      STATE_VARIABLE_Chars_3_34 = STATE_VARIABLE_Chars_2_58;
      if ((STATE_VARIABLE_PolyTypes_1_33 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_63;

        MaybePrec_19 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_63, 1) = ((MR_Box) (SpecNum_12));
        }
        {
          PrecErrors_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PrecErrors_20, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, PrecErrors_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_PolyTypes_2_35 = STATE_VARIABLE_PolyTypes_1_33;
      }
      else
      {
        MR_Word PolyType_52 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_1_33, 0))));
        MR_Word PolyPrecVar_53;

        STATE_VARIABLE_PolyTypes_2_35 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_1_33, 1))));
        succeeded = ((MR_tag((MR_Word) PolyType_52)) == (MR_Integer) 1);
        if (succeeded)
        {
          PolyPrecVar_53 = ((MR_Word) ((MR_hl_field(1, PolyType_52, 0))));
          {
            MaybePrec_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, MaybePrec_19, 0) = ((MR_Box) (PolyPrecVar_53));
          }
          PrecErrors_20 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Var_60;
          MR_Word Var_61;

          MaybePrec_19 = (MR_Word) ((MR_Unsigned) 0U);
          Var_61 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(PolyType_52);
          {
            Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_60, 1) = ((MR_Box) (SpecNum_12));
            MR_hl_field(3, Var_60, 2) = (MR_Box) ((MR_Unsigned) (Var_61));
          }
          {
            PrecErrors_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PrecErrors_20, 0) = ((MR_Box) (Var_60));
            MR_hl_field(1, PrecErrors_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    else
    {
      MR_Integer Prec_55;

      mercury__string__parse_util__get_number_prefix_3_p_0(STATE_VARIABLE_Chars_1_56, &STATE_VARIABLE_Chars_3_34, &Prec_55);
      {
        MaybePrec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybePrec_19, 0) = ((MR_Box) (Prec_55));
      }
      PrecErrors_20 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_PolyTypes_2_35 = STATE_VARIABLE_PolyTypes_1_33;
    }
  }
  else
  {
    MaybePrec_19 = (MR_Word) ((MR_Unsigned) 0U);
    PrecErrors_20 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_PolyTypes_2_35 = STATE_VARIABLE_PolyTypes_1_33;
    STATE_VARIABLE_Chars_3_34 = STATE_VARIABLE_Chars_2_32;
  }
  if ((STATE_VARIABLE_Chars_3_34 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_77;
    MR_Integer Var_78;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Spec_13 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Context_11));
      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
    }
    Var_78 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0), STATE_VARIABLE_PolyTypes_2_35);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (SpecNum_12));
      MR_hl_field(0, Var_77, 1) = ((MR_Box) (Var_78));
    }
    {
      SpecErrors_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SpecErrors_21, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, SpecErrors_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_PolyTypes_25 = STATE_VARIABLE_PolyTypes_2_35;
    *STATE_VARIABLE_Chars_23 = STATE_VARIABLE_Chars_3_34;
  }
  else
  {
    MR_Char SpecChar_87 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_Chars_3_34, 0)));
    MR_Word SpecPrime_88;
    MR_Word ErrorsPrime_89;
    MR_Word STATE_VARIABLE_PolyTypes_1_95;

    *STATE_VARIABLE_Chars_23 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Chars_3_34, 1))));
    succeeded = check_hlds__simplify__parse_string_format__parse_spec_10_p_0(SpecChar_87, STATE_VARIABLE_PolyTypes_2_35, &STATE_VARIABLE_PolyTypes_1_95, Context_11, Flags_16, MaybeWidth_17, MaybePrec_19, SpecNum_12, &SpecPrime_88, &ErrorsPrime_89);
    if (succeeded)
    {
      *STATE_VARIABLE_PolyTypes_25 = STATE_VARIABLE_PolyTypes_1_95;
      *Spec_13 = SpecPrime_88;
      SpecErrors_21 = ErrorsPrime_89;
    }
    else
    {
      MR_Word Error_90;

      {
        Error_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Error_90, 0) = ((MR_Box) (SpecNum_12));
        MR_hl_field(1, Error_90, 1) = ((MR_Box) (MR_Word) (SpecChar_87));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Spec_13 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Context_11));
        MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        SpecErrors_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SpecErrors_21, 0) = ((MR_Box) (Error_90));
        MR_hl_field(1, SpecErrors_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_PolyTypes_25 = STATE_VARIABLE_PolyTypes_2_35;
    }
  }
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), PrecErrors_20, SpecErrors_21);
  *Errors_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), WidthErrors_18, Var_38);
}

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format__parse_spec_10_p_0(
  MR_Char SpecChar_11,
  MR_Word STATE_VARIABLE_PolyTypes_0_54,
  MR_Word * STATE_VARIABLE_PolyTypes_55,
  MR_Word OverallContext_13,
  MR_Word STATE_VARIABLE_Flags_0_56,
  MR_Word MaybeWidth_15,
  MR_Word MaybePrec_16,
  MR_Integer SpecNum_17,
  MR_Word * Spec_18,
  MR_Word * Errors_19)
{
  MR_bool succeeded;

  switch (SpecChar_11) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 37:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Spec_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) "%"));
        }
        *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 69:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_122;

          {
            Error_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_122, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_122, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_122, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_122));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_119 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));
          MR_Word FloatVar_51;
          MR_Word PolyContext_117;

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_119)) == (MR_Integer) 0);
          if (succeeded)
          {
            FloatVar_51 = ((MR_Word) ((MR_hl_field(0, SpecPolyType_119, 0))));
            PolyContext_117 = ((MR_Word) ((MR_hl_field(0, SpecPolyType_119, 1))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Spec_18 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_117));
              MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
              MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
              MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(3, base, 6) = ((MR_Box) (FloatVar_51));
            }
            *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_73;
            MR_Word Error_116;

            Var_73 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_119);
            {
              Error_116 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_116, 0) = ((MR_Box) (SpecNum_17));
              MR_hl_field(2, Error_116, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
              MR_hl_field(2, Error_116, 2) = (MR_Box) ((MR_Unsigned) (Var_73));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Spec_18 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_116));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 70:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_156;

          {
            Error_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_156, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_156, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_156, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_156));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_173 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));
          MR_Word FloatVar_161;
          MR_Word PolyContext_166;

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_173)) == (MR_Integer) 0);
          if (succeeded)
          {
            FloatVar_161 = ((MR_Word) ((MR_hl_field(0, SpecPolyType_173, 0))));
            PolyContext_166 = ((MR_Word) ((MR_hl_field(0, SpecPolyType_173, 1))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Spec_18 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_166));
              MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
              MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
              MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
              MR_hl_field(3, base, 6) = ((MR_Box) (FloatVar_161));
            }
            *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_157;
            MR_Word Error_160;

            Var_157 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_173);
            {
              Error_160 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_160, 0) = ((MR_Box) (SpecNum_17));
              MR_hl_field(2, Error_160, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
              MR_hl_field(2, Error_160, 2) = (MR_Box) ((MR_Unsigned) (Var_157));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Spec_18 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_160));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 71:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_197;

          {
            Error_197 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_197, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_197, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_197, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_197));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_214 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));
          MR_Word FloatVar_202;
          MR_Word PolyContext_207;

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_214)) == (MR_Integer) 0);
          if (succeeded)
          {
            FloatVar_202 = ((MR_Word) ((MR_hl_field(0, SpecPolyType_214, 0))));
            PolyContext_207 = ((MR_Word) ((MR_hl_field(0, SpecPolyType_214, 1))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Spec_18 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_207));
              MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
              MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
              MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
              MR_hl_field(3, base, 6) = ((MR_Box) (FloatVar_202));
            }
            *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_198;
            MR_Word Error_201;

            Var_198 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_214);
            {
              Error_201 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_201, 0) = ((MR_Box) (SpecNum_17));
              MR_hl_field(2, Error_201, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
              MR_hl_field(2, Error_201, 2) = (MR_Box) ((MR_Unsigned) (Var_198));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Spec_18 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_201));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 88:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_105;

          {
            Error_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_105, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_105, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_105, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_105));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_100 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          switch (MR_tag((MR_Word) SpecPolyType_100)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_67;
                MR_Word Error_95;

                Var_67 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_100);
                {
                  Error_95 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_95, 0) = ((MR_Box) (SpecNum_17));
                  MR_hl_field(2, Error_95, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
                  MR_hl_field(2, Error_95, 2) = (MR_Box) ((MR_Unsigned) (Var_67));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Spec_18 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
                  MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_19 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_95));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntVar_91 = ((MR_Word) ((MR_hl_field(1, SpecPolyType_100, 0))));
                MR_Word PolyContext_92 = ((MR_Word) ((MR_hl_field(1, SpecPolyType_100, 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_92));
                  MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                  MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                  MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 3) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                  MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_91));
                }
                *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word IntVar_245 = ((MR_Word) ((MR_hl_field(2, SpecPolyType_100, 0))));
                MR_Word PolyContext_246 = ((MR_Word) ((MR_hl_field(2, SpecPolyType_100, 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_246));
                  MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                  MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                  MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 3) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                  MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_245));
                }
                *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_100, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word IntVar_236 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 1))));
                    MR_Word PolyContext_237 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_237));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 3) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_236));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntVar_239 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 1))));
                    MR_Word PolyContext_240 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_240));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 3) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_239));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word IntVar_242 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 1))));
                    MR_Word PolyContext_243 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_243));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 3) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_242));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word UIntVar_42 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 1))));
                    MR_Word PolyContext_94 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_94));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 3) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_42));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word UIntVar_257 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 1))));
                    MR_Word PolyContext_259 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_259));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 3) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_257));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word UIntVar_248 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 1))));
                    MR_Word PolyContext_250 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_250));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 3) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_248));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word UIntVar_251 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 1))));
                    MR_Word PolyContext_253 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_253));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 3) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_251));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word UIntVar_254 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 1))));
                    MR_Word PolyContext_256 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_100, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_256));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 3) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_254));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_67;
                    MR_Word Error_95;

                    Var_67 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_100);
                    {
                      Error_95 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_95, 0) = ((MR_Box) (SpecNum_17));
                      MR_hl_field(2, Error_95, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
                      MR_hl_field(2, Error_95, 2) = (MR_Box) ((MR_Unsigned) (Var_67));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Spec_18 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
                      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_19 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_95));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              break;
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 99:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_135;

          {
            Error_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_135, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_135, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_135, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_135));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_132 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));
          MR_Word CharVar_52;
          MR_Word PolyContext_130;

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          succeeded = ((((MR_tag((MR_Word) SpecPolyType_132)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SpecPolyType_132, 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            CharVar_52 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_132, 1))));
            PolyContext_130 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_132, 2))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Spec_18 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (PolyContext_130));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
              MR_hl_field(1, base, 2) = ((MR_Box) (MaybeWidth_15));
              MR_hl_field(1, base, 3) = ((MR_Box) (CharVar_52));
            }
            *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_79;
            MR_Word Error_129;

            Var_79 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_132);
            {
              Error_129 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_129, 0) = ((MR_Box) (SpecNum_17));
              MR_hl_field(2, Error_129, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
              MR_hl_field(2, Error_129, 2) = (MR_Box) ((MR_Unsigned) (Var_79));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Spec_18 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_129));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 100:
    case (MR_Char) 105:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_90;

          {
            Error_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_90, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_90, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_90, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_90));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_20 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          switch (MR_tag((MR_Word) SpecPolyType_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Error_40;
                MR_Word Var_59;

                Var_59 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_20);
                {
                  Error_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_40, 0) = ((MR_Box) (SpecNum_17));
                  MR_hl_field(2, Error_40, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
                  MR_hl_field(2, Error_40, 2) = (MR_Box) ((MR_Unsigned) (Var_59));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Spec_18 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
                  MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_19 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_40));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntVar_21 = ((MR_Word) ((MR_hl_field(1, SpecPolyType_20, 0))));
                MR_Word PolyContext_22 = ((MR_Word) ((MR_hl_field(1, SpecPolyType_20, 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_22));
                  MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                  MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                  MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_21));
                }
                *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word IntVar_269 = ((MR_Word) ((MR_hl_field(2, SpecPolyType_20, 0))));
                MR_Word PolyContext_270 = ((MR_Word) ((MR_hl_field(2, SpecPolyType_20, 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_270));
                  MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                  MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                  MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_269));
                }
                *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_20, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word IntVar_260 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_20, 1))));
                    MR_Word PolyContext_261 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_20, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_261));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_260));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntVar_263 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_20, 1))));
                    MR_Word PolyContext_264 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_20, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_264));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_263));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word IntVar_266 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_20, 1))));
                    MR_Word PolyContext_267 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_20, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_267));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_266));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                case (MR_Integer) 6:
                case (MR_Integer) 7:
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Error_40;
                    MR_Word Var_59;

                    Var_59 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_20);
                    {
                      Error_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_40, 0) = ((MR_Box) (SpecNum_17));
                      MR_hl_field(2, Error_40, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
                      MR_hl_field(2, Error_40, 2) = (MR_Box) ((MR_Unsigned) (Var_59));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Spec_18 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
                      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_19 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_40));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              break;
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 101:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_274;

          {
            Error_274 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_274, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_274, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_274, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_274));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_291 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));
          MR_Word FloatVar_279;
          MR_Word PolyContext_284;

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_291)) == (MR_Integer) 0);
          if (succeeded)
          {
            FloatVar_279 = ((MR_Word) ((MR_hl_field(0, SpecPolyType_291, 0))));
            PolyContext_284 = ((MR_Word) ((MR_hl_field(0, SpecPolyType_291, 1))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Spec_18 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_284));
              MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
              MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
              MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, base, 6) = ((MR_Box) (FloatVar_279));
            }
            *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_275;
            MR_Word Error_278;

            Var_275 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_291);
            {
              Error_278 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_278, 0) = ((MR_Box) (SpecNum_17));
              MR_hl_field(2, Error_278, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
              MR_hl_field(2, Error_278, 2) = (MR_Box) ((MR_Unsigned) (Var_275));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Spec_18 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_278));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 102:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_315;

          {
            Error_315 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_315, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_315, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_315, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_315));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_332 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));
          MR_Word FloatVar_320;
          MR_Word PolyContext_325;

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_332)) == (MR_Integer) 0);
          if (succeeded)
          {
            FloatVar_320 = ((MR_Word) ((MR_hl_field(0, SpecPolyType_332, 0))));
            PolyContext_325 = ((MR_Word) ((MR_hl_field(0, SpecPolyType_332, 1))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Spec_18 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_325));
              MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
              MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
              MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              MR_hl_field(3, base, 6) = ((MR_Box) (FloatVar_320));
            }
            *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_316;
            MR_Word Error_319;

            Var_316 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_332);
            {
              Error_319 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_319, 0) = ((MR_Box) (SpecNum_17));
              MR_hl_field(2, Error_319, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
              MR_hl_field(2, Error_319, 2) = (MR_Box) ((MR_Unsigned) (Var_316));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Spec_18 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_319));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 103:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_356;

          {
            Error_356 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_356, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_356, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_356, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_356));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_373 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));
          MR_Word FloatVar_361;
          MR_Word PolyContext_366;

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          succeeded = ((MR_tag((MR_Word) SpecPolyType_373)) == (MR_Integer) 0);
          if (succeeded)
          {
            FloatVar_361 = ((MR_Word) ((MR_hl_field(0, SpecPolyType_373, 0))));
            PolyContext_366 = ((MR_Word) ((MR_hl_field(0, SpecPolyType_373, 1))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Spec_18 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_366));
              MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
              MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
              MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
              MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
              MR_hl_field(3, base, 6) = ((MR_Box) (FloatVar_361));
            }
            *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_357;
            MR_Word Error_360;

            Var_357 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_373);
            {
              Error_360 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_360, 0) = ((MR_Box) (SpecNum_17));
              MR_hl_field(2, Error_360, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
              MR_hl_field(2, Error_360, 2) = (MR_Box) ((MR_Unsigned) (Var_357));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Spec_18 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_360));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 111:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_397;

          {
            Error_397 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_397, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_397, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_397, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_397));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_452 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          switch (MR_tag((MR_Word) SpecPolyType_452)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_398;
                MR_Word Error_401;

                Var_398 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_452);
                {
                  Error_401 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_401, 0) = ((MR_Box) (SpecNum_17));
                  MR_hl_field(2, Error_401, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
                  MR_hl_field(2, Error_401, 2) = (MR_Box) ((MR_Unsigned) (Var_398));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Spec_18 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
                  MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_19 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_401));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntVar_402 = ((MR_Word) ((MR_hl_field(1, SpecPolyType_452, 0))));
                MR_Word PolyContext_403 = ((MR_Word) ((MR_hl_field(1, SpecPolyType_452, 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_403));
                  MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                  MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                  MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                  MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_402));
                }
                *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word IntVar_414 = ((MR_Word) ((MR_hl_field(2, SpecPolyType_452, 0))));
                MR_Word PolyContext_415 = ((MR_Word) ((MR_hl_field(2, SpecPolyType_452, 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_415));
                  MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                  MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                  MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                  MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_414));
                }
                *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_452, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word IntVar_405 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 1))));
                    MR_Word PolyContext_406 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_406));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_405));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntVar_408 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 1))));
                    MR_Word PolyContext_409 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_409));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_408));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word IntVar_411 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 1))));
                    MR_Word PolyContext_412 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_412));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_411));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word UIntVar_417 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 1))));
                    MR_Word PolyContext_419 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_419));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_417));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word UIntVar_429 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 1))));
                    MR_Word PolyContext_431 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_431));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_429));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word UIntVar_420 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 1))));
                    MR_Word PolyContext_422 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_422));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_420));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word UIntVar_423 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 1))));
                    MR_Word PolyContext_425 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_425));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_423));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word UIntVar_426 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 1))));
                    MR_Word PolyContext_428 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_452, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_428));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_426));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_398;
                    MR_Word Error_401;

                    Var_398 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_452);
                    {
                      Error_401 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_401, 0) = ((MR_Box) (SpecNum_17));
                      MR_hl_field(2, Error_401, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
                      MR_hl_field(2, Error_401, 2) = (MR_Box) ((MR_Unsigned) (Var_398));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Spec_18 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
                      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_19 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_401));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              break;
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 112:
      {
        MR_Word STATE_VARIABLE_Flags_1_558;
        MR_Word Var_150 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Flags_0_56, 0))) >> 3)) & (MR_Integer) 1);
        MR_Word Var_151 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Flags_0_56, 0))) >> 2)) & (MR_Integer) 1);
        MR_Word Var_152 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Flags_0_56, 0))) >> 1)) & (MR_Integer) 1);
        MR_Word Var_153 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Flags_0_56, 0))) & (MR_Integer) 1);

        {
          STATE_VARIABLE_Flags_1_558 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Flags_1_558, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 4)) | (((((MR_Unsigned) (Var_150) << 3)) | (((((MR_Unsigned) (Var_151) << 2)) | (((((MR_Unsigned) (Var_152) << 1)) | (MR_Unsigned) (Var_153)))))))));
        }
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_485;

          {
            Error_485 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_485, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_485, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_485, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_485));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_540 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          switch (MR_tag((MR_Word) SpecPolyType_540)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_486;
                MR_Word Error_489;

                Var_486 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_540);
                {
                  Error_489 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_489, 0) = ((MR_Box) (SpecNum_17));
                  MR_hl_field(2, Error_489, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
                  MR_hl_field(2, Error_489, 2) = (MR_Box) ((MR_Unsigned) (Var_486));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Spec_18 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
                  MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_19 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_489));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntVar_490 = ((MR_Word) ((MR_hl_field(1, SpecPolyType_540, 0))));
                MR_Word PolyContext_491 = ((MR_Word) ((MR_hl_field(1, SpecPolyType_540, 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_491));
                  MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_1_558));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                  MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                  MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 4) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                  MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_490));
                }
                *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word IntVar_502 = ((MR_Word) ((MR_hl_field(2, SpecPolyType_540, 0))));
                MR_Word PolyContext_503 = ((MR_Word) ((MR_hl_field(2, SpecPolyType_540, 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_503));
                  MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_1_558));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                  MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                  MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 4) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                  MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_502));
                }
                *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_540, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word IntVar_493 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 1))));
                    MR_Word PolyContext_494 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_494));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_1_558));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 4) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_493));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntVar_496 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 1))));
                    MR_Word PolyContext_497 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_497));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_1_558));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 4) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_496));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word IntVar_499 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 1))));
                    MR_Word PolyContext_500 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_500));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_1_558));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 4) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_499));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word UIntVar_505 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 1))));
                    MR_Word PolyContext_507 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_507));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_1_558));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 4) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_505));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word UIntVar_517 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 1))));
                    MR_Word PolyContext_519 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_519));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_1_558));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 4) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_517));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word UIntVar_508 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 1))));
                    MR_Word PolyContext_510 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_510));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_1_558));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 4) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_508));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word UIntVar_511 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 1))));
                    MR_Word PolyContext_513 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_513));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_1_558));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 4) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_511));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word UIntVar_514 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 1))));
                    MR_Word PolyContext_516 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_540, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_516));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_1_558));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 4) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_514));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_486;
                    MR_Word Error_489;

                    Var_486 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_540);
                    {
                      Error_489 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_489, 0) = ((MR_Box) (SpecNum_17));
                      MR_hl_field(2, Error_489, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
                      MR_hl_field(2, Error_489, 2) = (MR_Box) ((MR_Unsigned) (Var_486));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Spec_18 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
                      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_19 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_489));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              break;
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 115:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_148;

          {
            Error_148 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_148, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_148, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_148, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_148));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_145 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));
          MR_Word StrVar_53;
          MR_Word PolyContext_143;

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          succeeded = ((((MR_tag((MR_Word) SpecPolyType_145)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SpecPolyType_145, 0)))) == (MR_Integer) 8)));
          if (succeeded)
          {
            StrVar_53 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_145, 1))));
            PolyContext_143 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_145, 2))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Spec_18 = base;
              MR_hl_field(2, base, 0) = ((MR_Box) (PolyContext_143));
              MR_hl_field(2, base, 1) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
              MR_hl_field(2, base, 2) = ((MR_Box) (MaybeWidth_15));
              MR_hl_field(2, base, 3) = ((MR_Box) (MaybePrec_16));
              MR_hl_field(2, base, 4) = ((MR_Box) (StrVar_53));
            }
            *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_85;
            MR_Word Error_142;

            Var_85 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_145);
            {
              Error_142 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Error_142, 0) = ((MR_Box) (SpecNum_17));
              MR_hl_field(2, Error_142, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
              MR_hl_field(2, Error_142, 2) = (MR_Box) ((MR_Unsigned) (Var_85));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Spec_18 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Errors_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_142));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 117:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_573;

          {
            Error_573 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_573, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_573, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_573, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_573));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_628 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          switch (MR_tag((MR_Word) SpecPolyType_628)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_574;
                MR_Word Error_577;

                Var_574 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_628);
                {
                  Error_577 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_577, 0) = ((MR_Box) (SpecNum_17));
                  MR_hl_field(2, Error_577, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
                  MR_hl_field(2, Error_577, 2) = (MR_Box) ((MR_Unsigned) (Var_574));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Spec_18 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
                  MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_19 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_577));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntVar_578 = ((MR_Word) ((MR_hl_field(1, SpecPolyType_628, 0))));
                MR_Word PolyContext_579 = ((MR_Word) ((MR_hl_field(1, SpecPolyType_628, 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_579));
                  MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                  MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                  MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                  MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_578));
                }
                *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word IntVar_590 = ((MR_Word) ((MR_hl_field(2, SpecPolyType_628, 0))));
                MR_Word PolyContext_591 = ((MR_Word) ((MR_hl_field(2, SpecPolyType_628, 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_591));
                  MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                  MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                  MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                  MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_590));
                }
                *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_628, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word IntVar_581 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 1))));
                    MR_Word PolyContext_582 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_582));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_581));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntVar_584 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 1))));
                    MR_Word PolyContext_585 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_585));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_584));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word IntVar_587 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 1))));
                    MR_Word PolyContext_588 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_588));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_587));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word UIntVar_593 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 1))));
                    MR_Word PolyContext_595 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_595));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_593));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word UIntVar_605 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 1))));
                    MR_Word PolyContext_607 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_607));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_605));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word UIntVar_596 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 1))));
                    MR_Word PolyContext_598 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_598));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_596));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word UIntVar_599 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 1))));
                    MR_Word PolyContext_601 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_601));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_599));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word UIntVar_602 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 1))));
                    MR_Word PolyContext_604 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_628, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_604));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_602));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_574;
                    MR_Word Error_577;

                    Var_574 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_628);
                    {
                      Error_577 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_577, 0) = ((MR_Box) (SpecNum_17));
                      MR_hl_field(2, Error_577, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
                      MR_hl_field(2, Error_577, 2) = (MR_Box) ((MR_Unsigned) (Var_574));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Spec_18 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
                      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_19 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_577));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              break;
          }
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 120:
      {
        if ((STATE_VARIABLE_PolyTypes_0_54 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Error_661;

          {
            Error_661 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Error_661, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Error_661, 1) = ((MR_Box) (SpecNum_17));
            MR_hl_field(3, Error_661, 2) = ((MR_Box) (MR_Word) (SpecChar_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Spec_18 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Errors_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_661));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_PolyTypes_55 = STATE_VARIABLE_PolyTypes_0_54;
        }
        else
        {
          MR_Word SpecPolyType_716 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 0))));

          *STATE_VARIABLE_PolyTypes_55 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PolyTypes_0_54, 1))));
          switch (MR_tag((MR_Word) SpecPolyType_716)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_662;
                MR_Word Error_665;

                Var_662 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_716);
                {
                  Error_665 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Error_665, 0) = ((MR_Box) (SpecNum_17));
                  MR_hl_field(2, Error_665, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
                  MR_hl_field(2, Error_665, 2) = (MR_Box) ((MR_Unsigned) (Var_662));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Spec_18 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
                  MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Errors_19 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Error_665));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntVar_666 = ((MR_Word) ((MR_hl_field(1, SpecPolyType_716, 0))));
                MR_Word PolyContext_667 = ((MR_Word) ((MR_hl_field(1, SpecPolyType_716, 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_667));
                  MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                  MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                  MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                  MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_666));
                }
                *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word IntVar_678 = ((MR_Word) ((MR_hl_field(2, SpecPolyType_716, 0))));
                MR_Word PolyContext_679 = ((MR_Word) ((MR_hl_field(2, SpecPolyType_716, 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  *Spec_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_679));
                  MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                  MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                  MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                  MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                  MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_678));
                }
                *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, SpecPolyType_716, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word IntVar_669 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 1))));
                    MR_Word PolyContext_670 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_670));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_669));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntVar_672 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 1))));
                    MR_Word PolyContext_673 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_673));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_672));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word IntVar_675 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 1))));
                    MR_Word PolyContext_676 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_676));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (IntVar_675));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word UIntVar_681 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 1))));
                    MR_Word PolyContext_683 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_683));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_681));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word UIntVar_693 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 1))));
                    MR_Word PolyContext_695 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_695));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_693));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word UIntVar_684 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 1))));
                    MR_Word PolyContext_686 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_686));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_684));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word UIntVar_687 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 1))));
                    MR_Word PolyContext_689 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_689));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_687));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word UIntVar_690 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 1))));
                    MR_Word PolyContext_692 = ((MR_Word) ((MR_hl_field(3, SpecPolyType_716, 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      *Spec_18 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (PolyContext_692));
                      MR_hl_field(3, base, 2) = ((MR_Box) (STATE_VARIABLE_Flags_0_56));
                      MR_hl_field(3, base, 3) = ((MR_Box) (MaybeWidth_15));
                      MR_hl_field(3, base, 4) = ((MR_Box) (MaybePrec_16));
                      MR_hl_field(3, base, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
                      MR_hl_field(3, base, 6) = ((MR_Box) (UIntVar_690));
                    }
                    *Errors_19 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  {
                    MR_Word Var_662;
                    MR_Word Error_665;

                    Var_662 = check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(SpecPolyType_716);
                    {
                      Error_665 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Error_665, 0) = ((MR_Box) (SpecNum_17));
                      MR_hl_field(2, Error_665, 1) = ((MR_Box) (MR_Word) (SpecChar_11));
                      MR_hl_field(2, Error_665, 2) = (MR_Box) ((MR_Unsigned) (Var_662));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Spec_18 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (OverallContext_13));
                      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_String) ""));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Errors_19 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (Error_665));
                      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              break;
          }
        }
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__simplify__parse_string_format__abstract_poly_type_to_kind_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 12;
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 3;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 4:
          HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 6:
          HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 7:
          HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 8:
          HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 9:
          HeadVar__2_2 = (MR_Integer) 0;
          break;
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____abstract_poly_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__parse_string_format____Unify____abstract_poly_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____abstract_poly_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__parse_string_format____Compare____abstract_poly_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_prec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_prec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_prec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_prec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_width_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_maybe_width_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_width_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__parse_string_format____Compare____compiler_format_maybe_width_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____compiler_format_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__parse_string_format____Unify____compiler_format_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____compiler_format_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__parse_string_format____Compare____compiler_format_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____int_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__parse_string_format____Unify____int_size_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____int_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__parse_string_format____Compare____int_size_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__parse_string_format____Unify____uint_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__parse_string_format____Unify____uint_size_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__parse_string_format____Compare____uint_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__parse_string_format____Compare____uint_size_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__parse_string_format__init(void)
{
}

void mercury__check_hlds__simplify__parse_string_format__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0);
  MR_register_type_ctor_info(&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_prec_0);
  MR_register_type_ctor_info(&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_maybe_width_0);
  MR_register_type_ctor_info(&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_spec_0);
  MR_register_type_ctor_info(&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_int_size_0);
  MR_register_type_ctor_info(&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_uint_size_0);
}

void mercury__check_hlds__simplify__parse_string_format__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__parse_string_format__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.parse_string_format.
