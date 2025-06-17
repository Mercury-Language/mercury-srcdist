/*
** Automatically generated from `module_qual.qual_errors.m'
** by the Mercury compiler,
** version rotd-2025-06-17
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


// :- module parse_tree.module_qual.qual_errors.
// :- implementation.

/*
INIT mercury__parse_tree__module_qual__qual_errors__init
ENDINIT
*/

#include "parse_tree.module_qual.qual_errors.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_0[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_1[5];

static const MR_DuArgLocn parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_constraint_error_context_0_1[5];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_2[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_3[4];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_5[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_5;

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_3[3];

static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_constraint_error_context_0[4];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_constraint_error_context_0[6];

static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_constraint_error_context_0[6];

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_0[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_1[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_2[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_ctor_field_name_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_3[5];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_3;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_4[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_5[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_6[3];

static const MR_DuArgLocn parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_error_context_0_6[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_6;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_7[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_7;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_8[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_9[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_11[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_15[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_16[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_16;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_17[5];

static const MR_DuArgLocn parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_error_context_0_17[5];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_17;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_18[5];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_18;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_19[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_19;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_20[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_20;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_21[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_21;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_22[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_22;

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_3[20];

static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_error_context_0[4];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_error_context_0[23];

static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_error_context_0[23];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_user_arity_if_known_0_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_user_arity_if_known_0_1[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_user_arity_if_known_0_1;

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_user_arity_if_known_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_user_arity_if_known_0_1[1];

static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_user_arity_if_known_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_user_arity_if_known_0[2];

static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_user_arity_if_known_0[2];

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(
  MR_Word SymName_3);

static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_redundant_import_context_3_p_0(
  MR_Word ImportedModuleName_4,
  MR_Word Context_5,
  MR_Word * Msg_6);

static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_qual__qual_errors__qual_id_kinds_to_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors__qual_id_kind_to_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_4_p_0(
  MR_Word ErrorContext_5,
  MR_Word * Context_6,
  MR_Word * ShouldUnqualId_7,
  MR_Word * Pieces_8);

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__get_class_method_id_piece_2_f_0(
  MR_String MethodName_4,
  MR_Word UserArityIfKnown_5);

static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(
  MR_Word ConstraintErrorContext_5,
  MR_Word * Context_6,
  MR_String * Start_7,
  MR_Word * Pieces_8);

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__module_name_matches_some_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____user_arity_if_known_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____user_arity_if_known_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_1[129][2];

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_4[6][3];

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_5[1][6];


struct parse_tree__module_qual__qual_errors__vector_common_type_2_0_s {
  const MR_String parse_tree__module_qual__qual_errors__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct parse_tree__module_qual__qual_errors__vector_common_type_2_0_s parse_tree__module_qual__qual_errors_vector_common_2[12];



static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_1[129][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not exported, and thus"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it may not be used in the interface."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undefined."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(The"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not been imported in the interface.)"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(Only"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "fully module qualified names"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may refer to the entities defined in"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[15])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(No module named"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has been imported.)"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(There"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "named"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "ambiguity error:"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "there are several possible matches"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The possible matches are in modules"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "match"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in modules"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not be used in the interface."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "matches"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[52])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[58])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may be necessary."))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[15])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "An explicit module qualifier"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: expected an"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[65])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[66])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "inst constructor,"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "got a"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variable."))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning: module"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[76])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[77])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but it is"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is imported in the interface,"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[80])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not used in the interface."))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Module"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is also redundantly imported here."))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[15])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "definition of type class"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "method"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "instance definition for"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration of"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "function symbol"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for type constructor"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "type_spec_constrained_preds"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration of typeclass"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration of the"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration of the mode of"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[98]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "clause mode annotation"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(field name"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the type"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "attribute"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[107]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[108])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[108])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "definition of inst"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration of instance of typeclass"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mode declaration for lambda expression"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[117]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "definition of mode"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for mutable"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "mode declaration for"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "definition of type"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "explicit type qualification"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[123]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "representation information for type"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type class constraint for"))
  },
  /* row 127 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[63])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__module_qual__qual_errors_scalar_common_1[127]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_4[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_3[1])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
};


static /* final */ const struct parse_tree__module_qual__qual_errors__vector_common_type_2_0_s parse_tree__module_qual__qual_errors_vector_common_2[12] = {
  /* row   0 */   { (MR_String) "type" },
  /* row   1 */   { (MR_String) "inst" },
  /* row   2 */   { (MR_String) "mode" },
  /* row   3 */   { (MR_String) "typeclass" },
  /* row   4 */   { (MR_String) "types" },
  /* row   5 */   { (MR_String) "insts" },
  /* row   6 */   { (MR_String) "modes" },
  /* row   7 */   { (MR_String) "typeclasses" },
  /* row   8 */   { (MR_String) "type" },
  /* row   9 */   { (MR_String) "inst" },
  /* row  10 */   { (MR_String) "mode" },
  /* row  11 */   { (MR_String) "typeclass" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0 = {
  (MR_String) "mqcec_class_defn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_1[5] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_user_arity_if_known_0)
};

static const MR_DuArgLocn parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_constraint_error_context_0_1[5] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1 = {
  (MR_String) "mqcec_class_method",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_1,
  NULL,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_constraint_error_context_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_2[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__qual_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2 = {
  (MR_String) "mqcec_instance_defn",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_3[4] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3 = {
  (MR_String) "mqcec_type_defn_constructor",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4 = {
  (MR_String) "mqcec_pred_decl",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_5[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_5 = {
  (MR_String) "mqcec_type_spec_constr",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_0[1] = { &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0 };

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_1[1] = { &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1 };

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_2[1] = { &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2 };

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_3[3] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_5
};

static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_constraint_error_context_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_constraint_error_context_0[6] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_5
};

static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_constraint_error_context_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_constraint_error_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0_10001)),
  (MR_String) "parse_tree.module_qual.qual_errors",
  (MR_String) "mq_constraint_error_context",
  { parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_constraint_error_context_0 },
  { parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_constraint_error_context_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_constraint_error_context_0,

};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_0 = {
  (MR_String) "mqec_type_defn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1 = {
  (MR_String) "mqec_inst_defn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2 = {
  (MR_String) "mqec_mode_defn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_ctor_field_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0) }
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_3[5] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__qual_errors__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_ctor_field_name_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_3 = {
  (MR_String) "mqec_constructor_arg",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_4[1] = { (MR_PseudoTypeInfo) (&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_constraint_error_context_0) };

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4 = {
  (MR_String) "mqec_typeclass_constraint_name",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_5[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_constraint_error_context_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5 = {
  (MR_String) "mqec_typeclass_constraint",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_6[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0)
};

static const MR_DuArgLocn parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_error_context_0_6[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_6 = {
  (MR_String) "mqec_pred_or_func",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_6,
  NULL,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_error_context_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0) }
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_7[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__qual_errors__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_7 = {
  (MR_String) "mqec_pred_or_func_mode",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_8[1] = { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) };

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8 = {
  (MR_String) "mqec_foreign_proc",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_9[1] = { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) };

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9 = {
  (MR_String) "mqec_foreign_enum",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10[1] = { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) };

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10 = {
  (MR_String) "mqec_foreign_export_enum",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_11[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11 = {
  (MR_String) "mqec_pragma_decl",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12 = {
  (MR_String) "mqec_pragma_impl",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(12),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13[1] = { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) };

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13 = {
  (MR_String) "mqec_lambda_expr",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(13),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14[1] = { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) };

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14 = {
  (MR_String) "mqec_clause_mode_annotation",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(14),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_15[1] = { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) };

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15 = {
  (MR_String) "mqec_type_qual",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(15),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_16[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_16 = {
  (MR_String) "mqec_class",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 13,
  INT32_C(16),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_17[5] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_user_arity_if_known_0)
};

static const MR_DuArgLocn parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_error_context_0_17[5] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_17 = {
  (MR_String) "mqec_class_method",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 14,
  INT32_C(17),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_17,
  NULL,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_error_context_0_17,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_18[5] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__qual_errors__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_user_arity_if_known_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_18 = {
  (MR_String) "mqec_class_method_mode",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 15,
  INT32_C(18),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_18,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_19[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_19 = {
  (MR_String) "mqec_instance",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 16,
  INT32_C(19),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_19,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_20[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_20 = {
  (MR_String) "mqec_mutable",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 17,
  INT32_C(20),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_20,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_21[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_21 = {
  (MR_String) "mqec_type_repn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 18,
  INT32_C(21),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_21,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_22[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_22 = {
  (MR_String) "mqec_event_spec_attr",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 19,
  INT32_C(22),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_22,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_0[1] = { &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_0 };

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_1[1] = { &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1 };

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_2[1] = { &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2 };

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_3[20] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_3,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_6,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_7,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_16,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_17,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_18,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_19,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_20,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_21,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_22
};

static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_error_context_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(20),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_error_context_0[23] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_16,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_17,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_18,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_3,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_22,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_19,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_20,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_6,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_7,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_0,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_21,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4
};

static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_error_context_0[23] = {
  (MR_Integer) 18,
  (MR_Integer) 9,
  (MR_Integer) 12,
  (MR_Integer) 4,
  (MR_Integer) 22,
  (MR_Integer) 21,
  (MR_Integer) 16,
  (MR_Integer) 17,
  (MR_Integer) 8,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 14,
  (MR_Integer) 15,
  (MR_Integer) 11,
  (MR_Integer) 3,
  (MR_Integer) 19,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 10,
  (MR_Integer) 13,
  (MR_Integer) 20,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_error_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0_10001)),
  (MR_String) "parse_tree.module_qual.qual_errors",
  (MR_String) "mq_error_context",
  { parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_error_context_0 },
  { parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_error_context_0 },
  (MR_Integer) 23,
  UINT16_C(12),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_error_context_0,

};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_user_arity_if_known_0_0 = {
  (MR_String) "user_arity_unknown",
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_user_arity_if_known_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0) };

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_user_arity_if_known_0_1 = {
  (MR_String) "user_arity_known",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_user_arity_if_known_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_user_arity_if_known_0_0[1] = { &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_user_arity_if_known_0_0 };

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_user_arity_if_known_0_1[1] = { &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_user_arity_if_known_0_1 };

static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_user_arity_if_known_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_user_arity_if_known_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_user_arity_if_known_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_user_arity_if_known_0[2] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_user_arity_if_known_0_1,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_user_arity_if_known_0_0
};

static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_user_arity_if_known_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_user_arity_if_known_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__qual_errors____Unify____user_arity_if_known_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__qual_errors____Compare____user_arity_if_known_0_0_10001)),
  (MR_String) "parse_tree.module_qual.qual_errors",
  (MR_String) "user_arity_if_known",
  { parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_user_arity_if_known_0 },
  { parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_user_arity_if_known_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_user_arity_if_known_0,

};

void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_140 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_141 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_140 == CastY_141);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    parse_tree__module_qual__qual_errors____Index____mq_error_context_0_0(HeadVar__2_2, &IndexX_4);
    parse_tree__module_qual__qual_errors____Index____mq_error_context_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_8;
              MR_Word ArgX2_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Word ArgY2_11;
              MR_Word SubResult1_9;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
                ArgY2_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
                mercury__term_context____Compare____term_context_0_0(&SubResult1_9, ArgX1_7, ArgY1_8);
                succeeded = (SubResult1_9 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_9;
                else
                  parse_tree__prog_data____Compare____type_ctor_0_0(&CompareResult_6, ArgX2_10, ArgY2_11);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_13;
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_16;
              MR_Word SubResult1_14;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
                ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
                mercury__term_context____Compare____term_context_0_0(&SubResult1_14, ArgX1_12, ArgY1_13);
                succeeded = (SubResult1_14 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_14;
                else
                  parse_tree__prog_data____Compare____inst_ctor_0_0(&CompareResult_6, ArgX2_15, ArgY2_16);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_18;
              MR_Word ArgX2_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_21;
              MR_Word SubResult1_19;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
                ArgY2_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
                mercury__term_context____Compare____term_context_0_0(&SubResult1_19, ArgX1_17, ArgY1_18);
                succeeded = (SubResult1_19 != (MR_Integer) 0);
                if (succeeded)
                  CompareResult_6 = SubResult1_19;
                else
                  parse_tree__prog_data____Compare____mode_ctor_0_0(&CompareResult_6, ArgX2_20, ArgY2_21);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_23;
                  MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_26;
                  MR_String ArgX3_28 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_29;
                  MR_Integer ArgX4_31 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Integer ArgY4_32;
                  MR_Word ArgX5_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_35;
                  MR_Word SubResult1_24;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_29 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_32 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_24, ArgX1_22, ArgY1_23);
                    succeeded = (SubResult1_24 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_24;
                    else
                    {
                      MR_Word SubResult2_27;

                      parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult2_27, ArgX2_25, ArgY2_26);
                      succeeded = (SubResult2_27 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_27;
                      else
                      {
                        MR_Word SubResult3_30;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_30, ArgX3_28, ArgY3_29);
                        succeeded = (SubResult3_30 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_30;
                        else
                        {
                          MR_Word SubResult4_33;

                          succeeded = (ArgX4_31 < ArgY4_32);
                          if (succeeded)
                          {
                            SubResult4_33 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX4_31 > ArgY4_32);
                            if (succeeded)
                            {
                              SubResult4_33 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult4_33 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            CompareResult_6 = SubResult4_33;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[2]), &CompareResult_6, ((MR_Box) (ArgX5_34)), ((MR_Box) (ArgY5_35)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_37;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&CompareResult_6, ArgX1_36, ArgY1_37);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_39;
                  MR_Integer ArgX2_41 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_42;
                  MR_Word ArgX3_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_45;
                  MR_Word SubResult1_40;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_42 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_40, ArgX1_38, ArgY1_39);
                    succeeded = (SubResult1_40 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_40;
                    else
                    {
                      MR_Word SubResult2_43;

                      succeeded = (ArgX2_41 < ArgY2_42);
                      if (succeeded)
                      {
                        SubResult2_43 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_41 > ArgY2_42);
                        if (succeeded)
                        {
                          SubResult2_43 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_43 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_43;
                      else
                        parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&CompareResult_6, ArgX3_44, ArgY3_45);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_47;
                  MR_Word ArgX2_49 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                  MR_Word ArgY2_50;
                  MR_Word ArgX3_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_53;
                  MR_Word SubResult1_48;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_50 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                    ArgY3_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_48, ArgX1_46, ArgY1_47);
                    succeeded = (SubResult1_48 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_48;
                    else
                    {
                      MR_Word SubResult2_51;
                      MR_Integer Var_196 = (MR_Integer) (ArgX2_49);
                      MR_Integer Var_197 = (MR_Integer) (ArgY2_50);

                      succeeded = (Var_196 < Var_197);
                      if (succeeded)
                      {
                        SubResult2_51 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_196 > Var_197);
                        if (succeeded)
                        {
                          SubResult2_51 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_51 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_51;
                      else
                        parse_tree__module_qual__id_set____Compare____mq_id_0_0(&CompareResult_6, ArgX3_52, ArgY3_53);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ArgX1_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_55;
                  MR_Word ArgX2_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_58;
                  MR_Word ArgX3_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_61;
                  MR_Word SubResult1_56;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_61 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_56, ArgX1_54, ArgY1_55);
                    succeeded = (SubResult1_56 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_56;
                    else
                    {
                      MR_Word SubResult2_59;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[1]), &SubResult2_59, ((MR_Box) (ArgX2_57)), ((MR_Box) (ArgY2_58)));
                      succeeded = (SubResult2_59 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_59;
                      else
                        parse_tree__module_qual__id_set____Compare____mq_id_0_0(&CompareResult_6, ArgX3_60, ArgY3_61);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ArgX1_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_63;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__term_context____Compare____term_context_0_0(&CompareResult_6, ArgX1_62, ArgY1_63);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ArgX1_64 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_65;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__term_context____Compare____term_context_0_0(&CompareResult_6, ArgX1_64, ArgY1_65);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ArgX1_66 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_67;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__term_context____Compare____term_context_0_0(&CompareResult_6, ArgX1_66, ArgY1_67);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ArgX1_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_69;
                  MR_Word ArgX2_71 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_72;
                  MR_Word SubResult1_70;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_69 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_72 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_70, ArgX1_68, ArgY1_69);
                    succeeded = (SubResult1_70 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_70;
                    else
                      parse_tree__prog_item____Compare____item_decl_pragma_info_0_0(&CompareResult_6, ArgX2_71, ArgY2_72);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ArgX1_73 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_74;
                  MR_Word ArgX2_76 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_77;
                  MR_Word SubResult1_75;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_74 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_77 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_75, ArgX1_73, ArgY1_74);
                    succeeded = (SubResult1_75 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_75;
                    else
                      parse_tree__prog_item____Compare____item_impl_pragma_info_0_0(&CompareResult_6, ArgX2_76, ArgY2_77);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word ArgX1_78 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_79;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_79 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__term_context____Compare____term_context_0_0(&CompareResult_6, ArgX1_78, ArgY1_79);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word ArgX1_80 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_81;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_81 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__term_context____Compare____term_context_0_0(&CompareResult_6, ArgX1_80, ArgY1_81);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ArgX1_82 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_83;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_83 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    mercury__term_context____Compare____term_context_0_0(&CompareResult_6, ArgX1_82, ArgY1_83);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word ArgX1_84 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_85;
                  MR_Word ArgX2_87 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_88;
                  MR_Word SubResult1_86;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_85 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_88 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_86, ArgX1_84, ArgY1_85);
                    succeeded = (SubResult1_86 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_86;
                    else
                      parse_tree__prog_data____Compare____class_id_0_0(&CompareResult_6, ArgX2_87, ArgY2_88);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word ArgX1_89 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_90;
                  MR_Word ArgX2_92 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_93;
                  MR_Word ArgX3_95 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))) & (MR_Integer) 1);
                  MR_Word ArgY3_96;
                  MR_String ArgX4_98 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_99;
                  MR_Word ArgX5_101 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_102;
                  MR_Word SubResult1_91;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_90 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_93 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_96 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 3))) & (MR_Integer) 1);
                    ArgY4_99 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_102 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_91, ArgX1_89, ArgY1_90);
                    succeeded = (SubResult1_91 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_91;
                    else
                    {
                      MR_Word SubResult2_94;

                      parse_tree__prog_data____Compare____class_id_0_0(&SubResult2_94, ArgX2_92, ArgY2_93);
                      succeeded = (SubResult2_94 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_94;
                      else
                      {
                        MR_Word SubResult3_97;
                        MR_Integer Var_194 = (MR_Integer) (ArgX3_95);
                        MR_Integer Var_195 = (MR_Integer) (ArgY3_96);

                        succeeded = (Var_194 < Var_195);
                        if (succeeded)
                        {
                          SubResult3_97 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_194 > Var_195);
                          if (succeeded)
                          {
                            SubResult3_97 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult3_97 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          CompareResult_6 = SubResult3_97;
                        else
                        {
                          MR_Word SubResult4_100;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_100, ArgX4_98, ArgY4_99);
                          succeeded = (SubResult4_100 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_100;
                          else
                            parse_tree__module_qual__qual_errors____Compare____user_arity_if_known_0_0(&CompareResult_6, ArgX5_101, ArgY5_102);
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word ArgX1_103 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_104;
                  MR_Word ArgX2_106 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_107;
                  MR_Word ArgX3_109 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_110;
                  MR_String ArgX4_112 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_String ArgY4_113;
                  MR_Word ArgX5_115 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                  MR_Word ArgY5_116;
                  MR_Word SubResult1_105;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_104 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_107 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_110 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY4_113 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    ArgY5_116 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_105, ArgX1_103, ArgY1_104);
                    succeeded = (SubResult1_105 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_105;
                    else
                    {
                      MR_Word SubResult2_108;

                      parse_tree__prog_data____Compare____class_id_0_0(&SubResult2_108, ArgX2_106, ArgY2_107);
                      succeeded = (SubResult2_108 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_108;
                      else
                      {
                        MR_Word SubResult3_111;

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[1]), &SubResult3_111, ((MR_Box) (ArgX3_109)), ((MR_Box) (ArgY3_110)));
                        succeeded = (SubResult3_111 != (MR_Integer) 0);
                        if (succeeded)
                          CompareResult_6 = SubResult3_111;
                        else
                        {
                          MR_Word SubResult4_114;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_114, ArgX4_112, ArgY4_113);
                          succeeded = (SubResult4_114 != (MR_Integer) 0);
                          if (succeeded)
                            CompareResult_6 = SubResult4_114;
                          else
                            parse_tree__module_qual__qual_errors____Compare____user_arity_if_known_0_0(&CompareResult_6, ArgX5_115, ArgY5_116);
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word ArgX1_117 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_118;
                  MR_Word ArgX2_120 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_121;
                  MR_Word SubResult1_119;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_118 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_121 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_119, ArgX1_117, ArgY1_118);
                    succeeded = (SubResult1_119 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_119;
                    else
                      parse_tree__prog_data____Compare____class_id_0_0(&CompareResult_6, ArgX2_120, ArgY2_121);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ArgX1_122 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_123;
                  MR_String ArgX2_125 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_126;
                  MR_Word SubResult1_124;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 17)));
                  if (succeeded)
                  {
                    ArgY1_123 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_126 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_124, ArgX1_122, ArgY1_123);
                    succeeded = (SubResult1_124 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_124;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_125, ArgY2_126);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 18:
                {
                  MR_Word ArgX1_127 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_128;
                  MR_Word ArgX2_130 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_131;
                  MR_Word SubResult1_129;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 18)));
                  if (succeeded)
                  {
                    ArgY1_128 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_131 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_129, ArgX1_127, ArgY1_128);
                    succeeded = (SubResult1_129 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_129;
                    else
                      parse_tree__prog_data____Compare____type_ctor_0_0(&CompareResult_6, ArgX2_130, ArgY2_131);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 19:
                {
                  MR_Word ArgX1_132 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_133;
                  MR_String ArgX2_135 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_String ArgY2_136;
                  MR_String ArgX3_138 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_String ArgY3_139;
                  MR_Word SubResult1_134;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 19)));
                  if (succeeded)
                  {
                    ArgY1_133 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_136 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_139 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_134, ArgX1_132, ArgY1_133);
                    succeeded = (SubResult1_134 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_134;
                    else
                    {
                      MR_Word SubResult2_137;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_137, ArgX2_135, ArgY2_136);
                      succeeded = (SubResult2_137 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_137;
                      else
                        mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX3_138, ArgY3_139);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
parse_tree__module_qual__qual_errors____Index____mq_error_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
        case (MR_Integer) 18:
          *HeadVar__2_2 = (MR_Integer) 21;
          break;
        case (MR_Integer) 19:
          *HeadVar__2_2 = (MR_Integer) 22;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_107 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_108 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_107 == CastY_108);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____inst_ctor_0_0(ArgX2_9, ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_11, ArgY1_12);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____mode_ctor_0_0(ArgX2_13, ArgY2_14);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_119_119;
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_16;
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_18;
              MR_String ArgX3_19 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_20;
              MR_Integer ArgX4_21 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Integer ArgY4_22;
              MR_Word ArgX5_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_22 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_15, ArgY1_16);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_17, ArgY2_18);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_19, ArgY3_20) == 0);
                    if (succeeded)
                    {
                      succeeded = (ArgX4_21 == ArgY4_22);
                      if (succeeded)
                      {
                        TypeInfo_119_119 = (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[2]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_119_119, ((MR_Box) (ArgX5_23)), ((MR_Box) (ArgY5_24)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(ArgX1_25, ArgY1_26);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_28;
              MR_Integer ArgX2_29 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_30;
              MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_30 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_27, ArgY1_28);
                if (succeeded)
                {
                  succeeded = (ArgX2_29 == ArgY2_30);
                  if (succeeded)
                    succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(ArgX3_31, ArgY3_32);
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_34;
              MR_Word ArgX2_35 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_36;
              MR_Word ArgX3_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_36 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                ArgY3_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_33, ArgY1_34);
                if (succeeded)
                {
                  succeeded = (ArgX2_35 == ArgY2_36);
                  if (succeeded)
                    succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(ArgX3_37, ArgY3_38);
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeInfo_139_139;
              MR_Word ArgX1_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_40;
              MR_Word ArgX2_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_42;
              MR_Word ArgX3_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_44;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_39, ArgY1_40);
                if (succeeded)
                {
                  TypeInfo_139_139 = (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_139_139, ((MR_Box) (ArgX2_41)), ((MR_Box) (ArgY2_42)));
                  if (succeeded)
                    succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(ArgX3_43, ArgY3_44);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_45, ArgY1_46);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_48;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_47, ArgY1_48);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArgX1_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_50;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_49, ArgY1_50);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ArgX1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_52;
              MR_Word ArgX2_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_54;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_51, ArgY1_52);
                if (succeeded)
                  succeeded = parse_tree__prog_item____Unify____item_decl_pragma_info_0_0(ArgX2_53, ArgY2_54);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ArgX1_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_56;
              MR_Word ArgX2_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_55, ArgY1_56);
                if (succeeded)
                  succeeded = parse_tree__prog_item____Unify____item_impl_pragma_info_0_0(ArgX2_57, ArgY2_58);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ArgX1_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_59, ArgY1_60);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ArgX1_61 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_62;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_61, ArgY1_62);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgX1_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_64;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_64 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_63, ArgY1_64);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ArgX1_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_66;
              MR_Word ArgX2_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_68;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_66 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_65, ArgY1_66);
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX2_67, ArgY2_68);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ArgX1_69 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_70;
              MR_Word ArgX2_71 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_72;
              MR_Word ArgX3_73 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 3))) & (MR_Integer) 1);
              MR_Word ArgY3_74;
              MR_String ArgX4_75 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_76;
              MR_Word ArgX5_77 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_78;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_70 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_72 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_74 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))) & (MR_Integer) 1);
                ArgY4_76 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_78 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_69, ArgY1_70);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX2_71, ArgY2_72);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_73 == ArgY3_74);
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_75, ArgY4_76) == 0);
                      if (succeeded)
                        succeeded = parse_tree__module_qual__qual_errors____Unify____user_arity_if_known_0_0(ArgX5_77, ArgY5_78);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TypeInfo_115_115;
              MR_Word ArgX1_79 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_80;
              MR_Word ArgX2_81 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_82;
              MR_Word ArgX3_83 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_84;
              MR_String ArgX4_85 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_86;
              MR_Word ArgX5_87 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_88;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_80 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_82 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_84 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_86 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_88 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_79, ArgY1_80);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX2_81, ArgY2_82);
                  if (succeeded)
                  {
                    TypeInfo_115_115 = (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_115_115, ((MR_Box) (ArgX3_83)), ((MR_Box) (ArgY3_84)));
                    if (succeeded)
                    {
                      succeeded = (strcmp(ArgX4_85, ArgY4_86) == 0);
                      if (succeeded)
                        succeeded = parse_tree__module_qual__qual_errors____Unify____user_arity_if_known_0_0(ArgX5_87, ArgY5_88);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ArgX1_89 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_90;
              MR_Word ArgX2_91 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_92;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_90 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_92 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_89, ArgY1_90);
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX2_91, ArgY2_92);
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ArgX1_93 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_94;
              MR_String ArgX2_95 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_96;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 17)));
              if (succeeded)
              {
                ArgY1_94 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_96 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_93, ArgY1_94);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_95, ArgY2_96) == 0);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ArgX1_97 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_98;
              MR_Word ArgX2_99 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_100;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 18)));
              if (succeeded)
              {
                ArgY1_98 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_100 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_97, ArgY1_98);
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_99, ArgY2_100);
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word ArgX1_101 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_102;
              MR_String ArgX2_103 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_104;
              MR_String ArgX3_105 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_106;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 19)));
              if (succeeded)
              {
                ArgY1_102 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_104 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_106 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_101, ArgY1_102);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_103, ArgY2_104) == 0);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_105, ArgY3_106) == 0);
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
parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_52 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_53 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_52 == CastY_53);
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

              mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                parse_tree__prog_data____Compare____class_id_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
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
              MR_Word ArgX3_15 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 2))) & (MR_Integer) 1);
              MR_Word ArgY3_16 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 2))) & (MR_Integer) 1);
              MR_String ArgX4_18 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 3))));
              MR_String ArgY4_19 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 3))));
              MR_Word ArgX5_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
              MR_Word ArgY5_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 4))));
              MR_Word SubResult1_11;

              mercury__term_context____Compare____term_context_0_0(&SubResult1_11, ArgX1_9, ArgY1_10);
              succeeded = (SubResult1_11 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_11;
              else
              {
                MR_Word SubResult2_14;

                parse_tree__prog_data____Compare____class_id_0_0(&SubResult2_14, ArgX2_12, ArgY2_13);
                succeeded = (SubResult2_14 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_14;
                else
                {
                  MR_Word SubResult3_17;
                  MR_Integer Var_72 = (MR_Integer) (ArgX3_15);
                  MR_Integer Var_73 = (MR_Integer) (ArgY3_16);

                  succeeded = (Var_72 < Var_73);
                  if (succeeded)
                  {
                    SubResult3_17 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_72 > Var_73);
                    if (succeeded)
                    {
                      SubResult3_17 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult3_17 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_17;
                  else
                  {
                    MR_Word SubResult4_20;

                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_20, ArgX4_18, ArgY4_19);
                    succeeded = (SubResult4_20 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult4_20;
                    else
                      parse_tree__module_qual__qual_errors____Compare____user_arity_if_known_0_0(HeadVar__1_1, ArgX5_21, ArgY5_22);
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
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word ArgX3_29 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Word ArgY3_30 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_Word SubResult1_25;

              mercury__term_context____Compare____term_context_0_0(&SubResult1_25, ArgX1_23, ArgY1_24);
              succeeded = (SubResult1_25 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_25;
              else
              {
                MR_Word SubResult2_28;

                mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_28, ArgX2_26, ArgY2_27);
                succeeded = (SubResult2_28 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_28;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX3_29)), ((MR_Box) (ArgY3_30)));
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
                      MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_String ArgX3_37 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_String ArgY3_38 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Integer ArgX4_40 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Integer ArgY4_41 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word SubResult1_33;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_33, ArgX1_31, ArgY1_32);
                      succeeded = (SubResult1_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_33;
                      else
                      {
                        MR_Word SubResult2_36;

                        parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult2_36, ArgX2_34, ArgY2_35);
                        succeeded = (SubResult2_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_36;
                        else
                        {
                          MR_Word SubResult3_39;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_39, ArgX3_37, ArgY3_38);
                          succeeded = (SubResult3_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_39;
                          else
                          {
                            succeeded = (ArgX4_40 < ArgY4_41);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (ArgX4_40 > ArgY4_41);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 2;
                              else
                                *HeadVar__1_1 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
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
                      MR_Word ArgX1_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_44;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_44, ArgX1_42, ArgY1_43);
                      succeeded = (SubResult1_44 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_44;
                      else
                        parse_tree__prog_data____Compare____pf_sym_name_arity_0_0(HeadVar__1_1, ArgX2_45, ArgY2_46);
                    }
                    break;
                  case (MR_Integer) 2:
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
                      MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_49;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_49, ArgX1_47, ArgY1_48);
                      succeeded = (SubResult1_49 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_49;
                      else
                        mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX2_50, ArgY2_51);
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

void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____user_arity_if_known_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_39 == CastY_40);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_10;
          MR_Word ArgX3_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 2))) & (MR_Integer) 1);
          MR_Word ArgY3_12;
          MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 3))));
          MR_String ArgY4_14;
          MR_Word ArgX5_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 4))));
          MR_Word ArgY5_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_12 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 2))) & (MR_Integer) 1);
            ArgY4_14 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 3))));
            ArgY5_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 4))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX2_9, ArgY2_10);
              if (succeeded)
              {
                succeeded = (ArgX3_11 == ArgY3_12);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX4_13, ArgY4_14) == 0);
                  if (succeeded)
                    succeeded = parse_tree__module_qual__qual_errors____Unify____user_arity_if_known_0_0(ArgX5_15, ArgY5_16);
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_47_47;
          MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_18;
          MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_20;
          MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Word ArgY3_22;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_17, ArgY1_18);
            if (succeeded)
            {
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_19, ArgY2_20);
              if (succeeded)
              {
                TypeInfo_47_47 = (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX3_21)), ((MR_Box) (ArgY3_22)));
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
              MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_24;
              MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_26;
              MR_String ArgX3_27 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_String ArgY3_28;
              MR_Integer ArgX4_29 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Integer ArgY4_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_28 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_30 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_23, ArgY1_24);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_25, ArgY2_26);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX3_27, ArgY3_28) == 0);
                    if (succeeded)
                      succeeded = (ArgX4_29 == ArgY4_30);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_32;
              MR_Word ArgX2_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_31, ArgY1_32);
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____pf_sym_name_arity_0_0(ArgX2_33, ArgY2_34);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_36;
              MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_35, ArgY1_36);
                if (succeeded)
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_37, ArgY2_38);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____user_arity_if_known_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Integer Var_10;
    MR_Integer Var_11;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Var_10 = (MR_Integer) (ArgX1_3);
      Var_11 = (MR_Integer) (ArgY1_4);
      succeeded = (Var_10 == Var_11);
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(
  MR_Word SymName_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (SymName_3));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_redundant_import_context_3_p_0(
  MR_Word ImportedModuleName_4,
  MR_Word Context_5,
  MR_Word * Msg_6)
{
  MR_Word Pieces_7;
  MR_Word Var_10;
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_11, 1) = ((MR_Box) (ImportedModuleName_4));
  }
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_11));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[87])));
  }
  {
    Pieces_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_7, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[85])));
    MR_hl_field(1, Pieces_7, 1) = ((MR_Box) (Var_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Msg_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Context_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (Pieces_7));
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Msg_6;

  parse_tree__module_qual__qual_errors__warn_redundant_import_context_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Msg_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Msg_6));
}

void MR_CALL 
parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(
  MR_Word ParentModuleName_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word ImportedModuleName_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word ImportContexts_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word HeadContext_9 = ((MR_Word) ((MR_hl_field(0, ImportContexts_7, 0))));
  MR_Word TailContexts_10 = ((MR_Word) ((MR_hl_field(0, ImportContexts_7, 1))));
  MR_Word HeadPieces_11;
  MR_Word HeadMsg_12;
  MR_Word TailMsgs_13;
  MR_Word Spec_14;
  MR_Word Var_17;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_53;
  MR_Word Var_59;

  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (ParentModuleName_5));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[78])));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[74])));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) (ImportedModuleName_6));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_32 = parse_tree__error_spec__color_as_subject_1_f_0(Var_33);
  Var_45 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[84])));
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[15])));
  Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[82])), Var_44);
  Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_36);
  HeadPieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_31);
  {
    HeadMsg_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadMsg_12, 0) = ((MR_Box) (HeadContext_9));
    MR_hl_field(0, HeadMsg_12, 1) = ((MR_Box) (HeadPieces_11));
  }
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_5[0]));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0_1));
    MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_53, 3) = ((MR_Box) (ImportedModuleName_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_53, TailContexts_10, &TailMsgs_13);
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (HeadMsg_12));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (TailMsgs_13));
  }
  {
    Spec_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.module_qual.qual_errors.warn_unused_interface_import\'/4"));
    MR_hl_field(3, Spec_14, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 60) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(3, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Spec_14, 3) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(3, Spec_14, 4) = ((MR_Box) (Var_59));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
  }
}

void MR_CALL 
parse_tree__module_qual__qual_errors__report_invalid_user_inst_5_p_0(
  MR_Word _SymName_6,
  MR_Word _Insts_7,
  MR_Word ErrorContext_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  parse_tree__module_qual__qual_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_105_110_118_97_108_105_100_95_117_115_101_114_95_105_110_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(ErrorContext_8, STATE_VARIABLE_Specs_0_15, STATE_VARIABLE_Specs_16);
}

void MR_CALL 
parse_tree__module_qual__qual_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_105_110_118_97_108_105_100_95_117_115_101_114_95_105_110_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word ErrorContext_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word Context_10;
  MR_Word ErrorContextPieces_12;
  MR_Word Pieces_13;
  MR_Word Spec_14;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word _ShouldUnqualId_11;

  parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_4_p_0(ErrorContext_8, &Context_10, &_ShouldUnqualId_11, &ErrorContextPieces_12);
  Var_33 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[69])));
  Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[73])));
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[15])));
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[71])), Var_43);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_38);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[67])), Var_32);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorContextPieces_12, Var_22);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[4])), Var_21);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.module_qual.qual_errors.report_invalid_user_inst\'/5"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0(
  MR_Word ErrorContext_8,
  MR_Word Id_9,
  MR_Word IdType_10,
  MR_Word UsableModuleNames_11,
  MR_Word UnusableModuleNames_12,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  MR_Word Context_14;
  MR_Word ErrorContextPieces_16;
  MR_String IdTypeStr_17;
  MR_Word UsableModuleSymNames_18;
  MR_Word MainPieces_19;
  MR_Word UnusablePieces_20;
  MR_Word Msg_28;
  MR_Word Spec_29;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_69;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_128;
  MR_Word SymName_162;
  MR_Integer Arity_163;
  MR_Word Var_164;
  MR_Word _ShouldUnqualId_15;

  parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_4_p_0(ErrorContext_8, &Context_14, &_ShouldUnqualId_15, &ErrorContextPieces_16);
  IdTypeStr_17 = ((&parse_tree__module_qual__qual_errors_vector_common_2[8 + IdType_10]))->parse_tree__module_qual__qual_errors__vector_common_type_2_0__vct_2_f_0;
  UsableModuleSymNames_18 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_4[3]), UsableModuleNames_11);
  Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[44])));
  {
    Var_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_59, 0) = ((MR_Box) (IdTypeStr_17));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[45])));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
  }
  SymName_162 = ((MR_Word) ((MR_hl_field(0, Id_9, 0))));
  Arity_163 = ((MR_Integer) ((MR_hl_field(0, Id_9, 1))));
  {
    Var_164 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_164, 0) = ((MR_Box) (SymName_162));
    MR_hl_field(0, Var_164, 1) = ((MR_Box) (Arity_163));
  }
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (Var_164));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[29])));
  }
  Var_62 = parse_tree__error_spec__color_as_subject_1_f_0(Var_63);
  Var_77 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 4, (MR_String) "and", (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[29])), UsableModuleSymNames_18);
  Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[15])));
  Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[48])), Var_76);
  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_69);
  Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_61);
  Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_54);
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[42])), Var_48);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorContextPieces_16, Var_38);
  MainPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[4])), Var_37);
  if ((UnusableModuleNames_12 == (MR_Word) ((MR_Unsigned) 0U)))
    UnusablePieces_20 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_160 = ((MR_Word) ((MR_hl_field(1, UnusableModuleNames_12, 1))));

    if ((Var_160 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word UnusableModuleSymNames_26;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;

      UnusableModuleSymNames_26 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_4[4]), UnusableModuleNames_12);
      Var_101 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[56])));
      Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[15])));
      Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnusableModuleSymNames_26, Var_100);
      UnusablePieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[54])), Var_99);
    }
    else
    {
      MR_Word UnusableModuleSymNames_139;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_Word Var_152;

      UnusableModuleSymNames_139 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_4[5]), UnusableModuleNames_12);
      Var_152 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[56])));
      Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_152, (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[15])));
      Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UnusableModuleSymNames_139, Var_151);
      UnusablePieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[59])), Var_150);
    }
  }
  {
    Var_118 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_118, 0) = ((MR_Box) (MainPieces_19));
  }
  {
    Var_120 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_120, 0) = ((MR_Box) (UnusablePieces_20));
  }
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
    MR_hl_field(1, Var_119, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[128])));
  }
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_119));
  }
  {
    Msg_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_28, 0) = ((MR_Box) (Context_14));
    MR_hl_field(2, Msg_28, 1) = ((MR_Box) (Var_117));
  }
  {
    Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_128, 0) = ((MR_Box) (Msg_28));
    MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.module_qual.qual_errors.report_ambiguous_match\'/7"));
    MR_hl_field(2, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(2, Spec_29, 3) = ((MR_Box) (Var_128));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_31 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_29));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv5_HeadVar__2_2;

  mercury__string__int_to_string_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv5_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0(
  MR_Word Info_11,
  MR_Word ErrorContext_12,
  MR_Word Id_13,
  MR_Word IdType_14,
  MR_Word ThisModuleName_15,
  MR_Word IntMismatches0_16,
  MR_Word QualMismatches0_17,
  MR_Word PossibleAritiesSet_18,
  MR_Word STATE_VARIABLE_Specs_0_73,
  MR_Word * STATE_VARIABLE_Specs_74)
{
  MR_bool succeeded;
  MR_Word Context_20;
  MR_Word ShouldUnqualId_21;
  MR_Word ErrorContextPieces_22;
  MR_Word InPieces_23;
  MR_String IdTypeStr_24;
  MR_Word IdSymName_25;
  MR_Integer IdArity_26;
  MR_String IdBaseName_27;
  MR_Word IntMismatches_28;
  MR_Word QualMismatches_29;
  MR_Word OtherIntMismatches_31;
  MR_Word UndefPieces_34;
  MR_Word ThisIntPieces_35;
  MR_Word OtherIntPieces_37;
  MR_Word QualPieces_45;
  MR_Word NonImportedPieces_57;
  MR_Word PossibleArities_58;
  MR_Word OtherArityPieces_67;
  MR_Word DidYouMeanPieces_70;
  MR_Word AllPieces_71;
  MR_Word Spec_72;
  MR_Word Var_79;
  MR_Word Var_252;
  MR_Word Var_253;
  MR_Word Var_254;
  MR_Word Var_255;
  MR_Word Var_256;
  MR_Word Var_257;
  MR_Word OtherIntMismatchesPrime_30;
  MR_Word IdModuleName_52;
  MR_Word ImportedModuleNames_54;
  MR_Word Ancestors_56;
  MR_Word Var_196;
  MR_Word Var_275;
  MR_Word ModuleNames_280;

  parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_4_p_0(ErrorContext_12, &Context_20, &ShouldUnqualId_21, &ErrorContextPieces_22);
  Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorContextPieces_22, (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[9])));
  InPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[4])), Var_79);
  parse_tree__module_qual__qual_errors__qual_id_kind_to_string_2_p_0(IdType_14, &IdTypeStr_24);
  IdSymName_25 = ((MR_Word) ((MR_hl_field(0, Id_13, 0))));
  IdArity_26 = ((MR_Integer) ((MR_hl_field(0, Id_13, 1))));
  IdBaseName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(IdSymName_25);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntMismatches0_16, &IntMismatches_28);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), QualMismatches0_17, &QualMismatches_29);
  succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntMismatches_28, ((MR_Box) (ThisModuleName_15)), &OtherIntMismatchesPrime_30);
  if (succeeded)
  {
    MR_Word ThisModulesSN_32;
    MR_Word ThisModuleSNA_33;
    MR_Word Var_89;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_100;
    MR_Word Var_105;
    MR_Word Var_106;

    OtherIntMismatches_31 = OtherIntMismatchesPrime_30;
    {
      ThisModulesSN_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ThisModulesSN_32, 0) = ((MR_Box) (ThisModuleName_15));
      MR_hl_field(1, ThisModulesSN_32, 1) = ((MR_Box) (IdBaseName_27));
    }
    {
      ThisModuleSNA_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ThisModuleSNA_33, 0) = ((MR_Box) (ThisModulesSN_32));
      MR_hl_field(0, ThisModuleSNA_33, 1) = ((MR_Box) (IdArity_26));
    }
    UndefPieces_34 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_93, 0) = ((MR_Box) (IdTypeStr_24));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) (UndefPieces_34));
    }
    {
      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_89, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[10])));
      MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
    }
    {
      Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(3, Var_98, 1) = ((MR_Box) (ThisModuleSNA_33));
    }
    {
      Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(1, Var_97, 1) = ((MR_Box) (UndefPieces_34));
    }
    Var_96 = parse_tree__error_spec__color_as_subject_1_f_0(Var_97);
    Var_106 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[14])));
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[15])));
    Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[12])), Var_105);
    Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, Var_100);
    ThisIntPieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, Var_95);
  }
  else
  {
    MR_Word SNA_36;
    MR_Word Var_115;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_126;
    MR_Word Var_131;
    MR_Word Var_132;

    OtherIntMismatches_31 = IntMismatches_28;
    switch (ShouldUnqualId_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          SNA_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_36, 0) = ((MR_Box) (IdSymName_25));
          MR_hl_field(0, SNA_36, 1) = ((MR_Box) (IdArity_26));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_114;

          {
            Var_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_114, 0) = ((MR_Box) (IdBaseName_27));
          }
          {
            SNA_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SNA_36, 0) = ((MR_Box) (Var_114));
            MR_hl_field(0, SNA_36, 1) = ((MR_Box) (IdArity_26));
          }
        }
        break;
    }
    {
      Var_119 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_119, 0) = ((MR_Box) (IdTypeStr_24));
    }
    {
      Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
      MR_hl_field(1, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_115, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[10])));
      MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_124, 1) = ((MR_Box) (SNA_36));
    }
    {
      Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
      MR_hl_field(1, Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_122 = parse_tree__error_spec__color_as_subject_1_f_0(Var_123);
    Var_132 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[19])));
    Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[15])));
    Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[17])), Var_131);
    Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, Var_126);
    UndefPieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_115, Var_121);
    ThisIntPieces_35 = (MR_Word) ((MR_Unsigned) 0U);
  }
  if ((OtherIntMismatches_31 == (MR_Word) ((MR_Unsigned) 0U)))
    OtherIntPieces_37 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word OtherIntMismatchesTail_39 = ((MR_Word) ((MR_hl_field(1, OtherIntMismatches_31, 1))));
    MR_String OtherIntModuleWord_40;
    MR_String OtherIntHasWord_41;
    MR_Word OtherIntSymNames_44;
    MR_Word Var_141;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_152;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;

    if ((OtherIntMismatchesTail_39 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      OtherIntModuleWord_40 = (MR_String) "module";
      OtherIntHasWord_41 = (MR_String) "has";
    }
    else
    {
      OtherIntModuleWord_40 = (MR_String) "modules";
      OtherIntHasWord_41 = (MR_String) "have";
    }
    OtherIntSymNames_44 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_4[0]), OtherIntMismatches_31);
    {
      Var_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_145, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_145, 1) = ((MR_Box) (OtherIntModuleWord_40));
    }
    {
      Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
      MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_141, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[20])));
      MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_144));
    }
    Var_148 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), OtherIntSymNames_44);
    {
      Var_155 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_155, 0) = ((MR_Box) (OtherIntHasWord_41));
    }
    {
      Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
      MR_hl_field(1, Var_154, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[22])));
    }
    Var_153 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_154);
    Var_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_153, (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[15])));
    Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_148, Var_152);
    OtherIntPieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_141, Var_147);
  }
  if ((QualMismatches_29 == (MR_Word) ((MR_Unsigned) 0U)))
    QualPieces_45 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word QualMismatchesTail_47 = ((MR_Word) ((MR_hl_field(1, QualMismatches_29, 1))));
    MR_String QualModuleWord_48;
    MR_Word QualSymNames_51;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_174;
    MR_Word Var_175;
    MR_Word Var_178;
    MR_Word Var_179;
    MR_Word Var_181;
    MR_Word Var_182;

    if ((QualMismatchesTail_47 == (MR_Word) ((MR_Unsigned) 0U)))
      QualModuleWord_48 = (MR_String) "module";
    else
      QualModuleWord_48 = (MR_String) "modules";
    QualSymNames_51 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_4[1]), QualMismatches_29);
    Var_169 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[26])));
    {
      Var_179 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_179, 0) = ((MR_Box) (QualModuleWord_48));
    }
    {
      Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_178, 0) = ((MR_Box) (Var_179));
      MR_hl_field(1, Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_175, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[27])));
      MR_hl_field(1, Var_175, 1) = ((MR_Box) (Var_178));
    }
    Var_182 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[29])), QualSymNames_51);
    Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_182, (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[31])));
    Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_175, Var_181);
    Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_169, Var_174);
    QualPieces_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[24])), Var_168);
  }
  succeeded = ((MR_tag((MR_Word) IdSymName_25)) == (MR_Integer) 1);
  if (succeeded)
  {
    IdModuleName_52 = ((MR_Word) ((MR_hl_field(1, IdSymName_25, 0))));
    parse_tree__module_qual__mq_info__mq_info_get_this_module_2_p_0(Info_11, &Var_275);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModuleName_15, Var_275);
    if (succeeded)
    {
      parse_tree__module_qual__mq_info__mq_info_get_imported_modules_2_p_0(Info_11, &ImportedModuleNames_54);
      ModuleNames_280 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportedModuleNames_54);
      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(IdModuleName_52, ThisModuleName_15);
      if (succeeded)
        Var_196 = (MR_Integer) 1;
      else
        Var_196 = parse_tree__module_qual__qual_errors__module_name_matches_some_2_f_0(IdModuleName_52, ModuleNames_280);
      succeeded = (Var_196 == (MR_Integer) 0);
      if (succeeded)
      {
        Ancestors_56 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ThisModuleName_15);
        succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_56, ((MR_Box) (IdModuleName_52)));
        succeeded = !(succeeded);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_201;
    MR_Word Var_202;
    MR_Word Var_203;
    MR_Word Var_204;
    MR_Word Var_206;
    MR_Word Var_207;

    {
      Var_204 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_204, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_204, 1) = ((MR_Box) (IdModuleName_52));
    }
    {
      Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_203, 0) = ((MR_Box) (Var_204));
      MR_hl_field(1, Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_202 = parse_tree__error_spec__color_as_subject_1_f_0(Var_203);
    Var_207 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[35])));
    Var_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_207, (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[15])));
    Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_202, Var_206);
    NonImportedPieces_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[33])), Var_201);
  }
  else
    NonImportedPieces_57 = (MR_Word) ((MR_Unsigned) 0U);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PossibleAritiesSet_18, &PossibleArities_58);
  succeeded = (PossibleArities_58 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (ThisIntPieces_35 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (OtherIntPieces_37 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (QualPieces_45 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (NonImportedPieces_57 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_String IdTypesStr_61;
    MR_String IsAre_62;
    MR_String KindKinds_63;
    MR_String ArityArities_64;
    MR_Word PossibleArityStrs_65;
    MR_Word PossibleAritiesDotPieces_66;
    MR_Word Var_226;
    MR_Word Var_229;
    MR_Word Var_230;
    MR_Word Var_231;
    MR_Word Var_232;
    MR_Word Var_233;
    MR_Word Var_236;
    MR_Word Var_237;
    MR_String Var_238;
    MR_Word Var_239;
    MR_Word Var_242;
    MR_Word Var_243;
    MR_Word Var_245;
    MR_Box conv2_IsAre_62;
    MR_Box conv3_KindKinds_63;
    MR_Box conv4_ArityArities_64;

    parse_tree__module_qual__qual_errors__qual_id_kinds_to_string_2_p_0(IdType_14, &IdTypesStr_61);
    conv2_IsAre_62 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PossibleArities_58, ((MR_Box) ((MR_String) "is a")), ((MR_Box) ((MR_String) "are")));
    IsAre_62 = ((MR_String) (conv2_IsAre_62));
    conv3_KindKinds_63 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PossibleArities_58, ((MR_Box) (IdTypeStr_24)), ((MR_Box) (IdTypesStr_61)));
    KindKinds_63 = ((MR_String) (conv3_KindKinds_63));
    conv4_ArityArities_64 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PossibleArities_58, ((MR_Box) ((MR_String) "arity")), ((MR_Box) ((MR_String) "arities")));
    ArityArities_64 = ((MR_String) (conv4_ArityArities_64));
    mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_4[2]), PossibleArities_58, &PossibleArityStrs_65);
    PossibleAritiesDotPieces_66 = parse_tree__error_spec__fixed_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "and", (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[29])), PossibleArityStrs_65);
    {
      Var_230 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_230, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_230, 1) = ((MR_Box) (IsAre_62));
    }
    {
      Var_232 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_232, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_232, 1) = ((MR_Box) (KindKinds_63));
    }
    Var_238 = mdbcomp__sym_name__unqualify_name_1_f_0(IdSymName_25);
    {
      Var_237 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_237, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_237, 1) = ((MR_Box) (Var_238));
    }
    {
      Var_243 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_243, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_243, 1) = ((MR_Box) (ArityArities_64));
    }
    {
      Var_242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_242, 0) = ((MR_Box) (Var_243));
      MR_hl_field(1, Var_242, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_239 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_239, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[38])));
      MR_hl_field(1, Var_239, 1) = ((MR_Box) (Var_242));
    }
    {
      Var_236 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_236, 0) = ((MR_Box) (Var_237));
      MR_hl_field(1, Var_236, 1) = ((MR_Box) (Var_239));
    }
    {
      Var_233 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_233, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[37])));
      MR_hl_field(1, Var_233, 1) = ((MR_Box) (Var_236));
    }
    {
      Var_231 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_231, 0) = ((MR_Box) (Var_232));
      MR_hl_field(1, Var_231, 1) = ((MR_Box) (Var_233));
    }
    {
      Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_229, 0) = ((MR_Box) (Var_230));
      MR_hl_field(1, Var_229, 1) = ((MR_Box) (Var_231));
    }
    {
      Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_226, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[36])));
      MR_hl_field(1, Var_226, 1) = ((MR_Box) (Var_229));
    }
    Var_245 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PossibleAritiesDotPieces_66, (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[31])));
    OtherArityPieces_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_226, Var_245);
  }
  else
    OtherArityPieces_67 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (ThisIntPieces_35 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (OtherIntPieces_37 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (QualPieces_45 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (NonImportedPieces_57 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (OtherArityPieces_67 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Word KnownNames_69;

    switch (IdType_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          MR_Word IdSet_264;

          parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(Info_11, &IdSet_264);
          parse_tree__module_qual__id_set__get_names_in_id_set_2_p_0(IdSet_264, &KnownNames_69);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IdSet_262;

          parse_tree__module_qual__mq_info__mq_info_get_insts_2_p_0(Info_11, &IdSet_262);
          parse_tree__module_qual__id_set__get_names_in_id_set_2_p_0(IdSet_262, &KnownNames_69);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word IdSet_263;

          parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(Info_11, &IdSet_263);
          parse_tree__module_qual__id_set__get_names_in_id_set_2_p_0(IdSet_263, &KnownNames_69);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word IdSet_68;

          parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(Info_11, &IdSet_68);
          parse_tree__module_qual__id_set__get_names_in_id_set_2_p_0(IdSet_68, &KnownNames_69);
        }
        break;
    }
    parse_tree__error_spec__maybe_construct_did_you_mean_pieces_3_p_0(IdBaseName_27, KnownNames_69, &DidYouMeanPieces_70);
  }
  else
    DidYouMeanPieces_70 = (MR_Word) ((MR_Unsigned) 0U);
  Var_257 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OtherArityPieces_67, DidYouMeanPieces_70);
  Var_256 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NonImportedPieces_57, Var_257);
  Var_255 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), QualPieces_45, Var_256);
  Var_254 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OtherIntPieces_37, Var_255);
  Var_253 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ThisIntPieces_35, Var_254);
  Var_252 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), UndefPieces_34, Var_253);
  AllPieces_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InPieces_23, Var_252);
  {
    Spec_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_72, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.module_qual.qual_errors.report_undefined_mq_id\'/10"));
    MR_hl_field(0, Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_72, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_72, 3) = ((MR_Box) (Context_20));
    MR_hl_field(0, Spec_72, 4) = ((MR_Box) (AllPieces_71));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_74 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_72));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_73));
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__qual_id_kinds_to_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  *HeadVar__2_2 = ((&parse_tree__module_qual__qual_errors_vector_common_2[4 + HeadVar__1_1]))->parse_tree__module_qual__qual_errors__vector_common_type_2_0__vct_2_f_0;
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__qual_id_kind_to_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  *HeadVar__2_2 = ((&parse_tree__module_qual__qual_errors_vector_common_2[0 + HeadVar__1_1]))->parse_tree__module_qual__qual_errors__vector_common_type_2_0__vct_2_f_0;
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_4_p_0(
  MR_Word ErrorContext_5,
  MR_Word * Context_6,
  MR_Word * ShouldUnqualId_7,
  MR_Word * Pieces_8)
{
  switch (MR_tag((MR_Word) ErrorContext_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtor_9;
        MR_Word Var_43;
        MR_Word Var_44;

        *Context_6 = ((MR_Word) ((MR_hl_field(0, ErrorContext_5, 0))));
        TypeCtor_9 = ((MR_Word) ((MR_hl_field(0, ErrorContext_5, 1))));
        *ShouldUnqualId_7 = (MR_Integer) 0;
        {
          Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 21U));
          MR_hl_field(3, Var_44, 1) = ((MR_Box) (TypeCtor_9));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[122])));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_43));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstCtor_10;
        MR_Word Var_48;
        MR_Word Var_49;

        *Context_6 = ((MR_Word) ((MR_hl_field(1, ErrorContext_5, 0))));
        InstCtor_10 = ((MR_Word) ((MR_hl_field(1, ErrorContext_5, 1))));
        *ShouldUnqualId_7 = (MR_Integer) 0;
        {
          Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 23U));
          MR_hl_field(3, Var_49, 1) = ((MR_Box) (InstCtor_10));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[115])));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_48));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModeCtor_11;
        MR_Word Var_53;
        MR_Word Var_54;

        *Context_6 = ((MR_Word) ((MR_hl_field(2, ErrorContext_5, 0))));
        ModeCtor_11 = ((MR_Word) ((MR_hl_field(2, ErrorContext_5, 1))));
        *ShouldUnqualId_7 = (MR_Integer) 0;
        {
          Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 25U));
          MR_hl_field(3, Var_54, 1) = ((MR_Box) (ModeCtor_11));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[119])));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_53));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ErrorContext_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ContainingTypeCtor_12;
            MR_String FunctionSymbol_13;
            MR_Integer ArgNum_14;
            MR_Word MaybeCtorFieldName_15;
            MR_Word FieldNamePieces_16;
            MR_Word Var_65;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_73;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_83;
            MR_Word Var_84;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            ContainingTypeCtor_12 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 2))));
            FunctionSymbol_13 = ((MR_String) ((MR_hl_field(3, ErrorContext_5, 3))));
            ArgNum_14 = ((MR_Integer) ((MR_hl_field(3, ErrorContext_5, 4))));
            MaybeCtorFieldName_15 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 5))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            if ((MaybeCtorFieldName_15 == (MR_Word) ((MR_Unsigned) 0U)))
              FieldNamePieces_16 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word CtorFieldName_17 = ((MR_Word) ((MR_hl_field(1, MaybeCtorFieldName_15, 0))));
              MR_Word FieldSymName_18 = ((MR_Word) ((MR_hl_field(0, CtorFieldName_17, 0))));
              MR_Word Var_58;
              MR_Word Var_59;
              MR_String Var_60;

              Var_60 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldSymName_18);
              {
                Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_59, 1) = ((MR_Box) (Var_60));
              }
              {
                Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
                MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[103])));
              }
              {
                FieldNamePieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, FieldNamePieces_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[102])));
                MR_hl_field(1, FieldNamePieces_16, 1) = ((MR_Box) (Var_58));
              }
            }
            {
              Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Var_69, 1) = ((MR_Box) (ArgNum_14));
            }
            {
              Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_77, 1) = ((MR_Box) (FunctionSymbol_13));
            }
            {
              Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
              MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[92])));
              MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
            }
            {
              Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[104])));
              MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
            }
            {
              Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
              MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
            }
            {
              Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[10])));
              MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
            }
            {
              Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(3, Var_84, 1) = ((MR_Box) (ContainingTypeCtor_12));
            }
            {
              Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
              MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[105])));
              MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
            }
            Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FieldNamePieces_16, Var_80);
            *Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_79);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ConstraintErrorContext_20 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            MR_String _Start_21;

            *ShouldUnqualId_7 = (MR_Integer) 0;
            parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(ConstraintErrorContext_20, Context_6, &_Start_21, Pieces_8);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ClassName_22 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            MR_Integer Arity_23 = ((MR_Integer) ((MR_hl_field(3, ErrorContext_5, 2))));
            MR_String Start_24;
            MR_Word ConstraintErrorContextPieces_25;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word ConstraintErrorContext_205 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 3))));

            *ShouldUnqualId_7 = (MR_Integer) 0;
            parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(ConstraintErrorContext_205, Context_6, &Start_24, &ConstraintErrorContextPieces_25);
            {
              Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_90, 0) = ((MR_Box) (ClassName_22));
              MR_hl_field(0, Var_90, 1) = ((MR_Box) (Arity_23));
            }
            {
              Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, Var_89, 1) = ((MR_Box) (Var_90));
            }
            {
              Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_92, 1) = ((MR_Box) (Start_24));
            }
            {
              Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
              MR_hl_field(1, Var_91, 1) = ((MR_Box) (ConstraintErrorContextPieces_25));
            }
            {
              Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
              MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[126])));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_88));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word PredOrFunc_26;
            MR_Word Id_27;
            MR_Word SymName_28;
            MR_Integer OrigArity_29;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_String Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Word Var_100;
            MR_Integer Arity_206;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            PredOrFunc_26 = ((MR_Unsigned) ((MR_hl_field(3, ErrorContext_5, 2))) & (MR_Integer) 1);
            Id_27 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 3))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            SymName_28 = ((MR_Word) ((MR_hl_field(0, Id_27, 0))));
            OrigArity_29 = ((MR_Integer) ((MR_hl_field(0, Id_27, 1))));
            parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_26, OrigArity_29, &Arity_206);
            Var_97 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_26);
            {
              Var_96 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_96, 0) = ((MR_Box) (Var_97));
            }
            {
              Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_100, 0) = ((MR_Box) (SymName_28));
              MR_hl_field(0, Var_100, 1) = ((MR_Box) (Arity_206));
            }
            {
              Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, Var_99, 1) = ((MR_Box) (Var_100));
            }
            {
              Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
              MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
              MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[91])));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_95));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word MaybePredOrFunc_30;
            MR_Word Id_213;
            MR_Word SymName_214;
            MR_Integer OrigArity_215;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            MaybePredOrFunc_30 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 2))));
            Id_213 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 3))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            SymName_214 = ((MR_Word) ((MR_hl_field(0, Id_213, 0))));
            OrigArity_215 = ((MR_Integer) ((MR_hl_field(0, Id_213, 1))));
            if ((MaybePredOrFunc_30 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_115;

              {
                Var_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_115, 0) = ((MR_Box) (SymName_214));
                MR_hl_field(0, Var_115, 1) = ((MR_Box) (OrigArity_215));
              }
              {
                Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                MR_hl_field(3, Var_114, 1) = ((MR_Box) (Var_115));
              }
              {
                Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
                MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Pieces_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[121])));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_113));
              }
            }
            else
            {
              MR_Word Var_104;
              MR_Word Var_105;
              MR_String Var_106;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Word Var_109;
              MR_Integer Arity_207;
              MR_Word PredOrFunc_208 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_30, 0))));

              parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_208, OrigArity_215, &Arity_207);
              Var_106 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_208);
              {
                Var_105 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_105, 0) = ((MR_Box) (Var_106));
              }
              {
                Var_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_109, 0) = ((MR_Box) (SymName_214));
                MR_hl_field(0, Var_109, 1) = ((MR_Box) (Arity_207));
              }
              {
                Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                MR_hl_field(3, Var_108, 1) = ((MR_Box) (Var_109));
              }
              {
                Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
                MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
                MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_107));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Pieces_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[121])));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_104));
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[114]));
          }
          break;
        case (MR_Integer) 6:
          {
            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            *ShouldUnqualId_7 = (MR_Integer) 1;
            *Pieces_8 = (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[110]));
          }
          break;
        case (MR_Integer) 7:
          {
            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[112]));
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word DeclPragma_31;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            DeclPragma_31 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 2))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = parse_tree__item_util__decl_pragma_desc_pieces_1_f_0(DeclPragma_31);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ImplPragma_32;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            ImplPragma_32 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 2))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = parse_tree__item_util__impl_pragma_desc_pieces_1_f_0(ImplPragma_32);
          }
          break;
        case (MR_Integer) 10:
          {
            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[118]));
          }
          break;
        case (MR_Integer) 11:
          {
            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[101]));
          }
          break;
        case (MR_Integer) 12:
          {
            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[124]));
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word ClassId_33;
            MR_Word Var_146;
            MR_Word Var_147;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            ClassId_33 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 2))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            {
              Var_147 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_147, 0) = ((MR_Box) ((MR_Unsigned) 27U));
              MR_hl_field(3, Var_147, 1) = ((MR_Box) (ClassId_33));
            }
            {
              Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_146, 0) = ((MR_Box) (Var_147));
              MR_hl_field(1, Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[96])));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_146));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String MethodName_34;
            MR_Word UserArityIfKnown_35;
            MR_Word MethodIdPiece_36;
            MR_Word Var_151;
            MR_Word Var_152;
            MR_Word Var_153;
            MR_Word Var_156;
            MR_Word Var_157;
            MR_Word Var_160;
            MR_Word Var_161;
            MR_Word PredOrFunc_216;
            MR_Word ClassId_217;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            ClassId_217 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 2))));
            PredOrFunc_216 = ((MR_Unsigned) ((MR_hl_field(3, ErrorContext_5, 3))) & (MR_Integer) 1);
            MethodName_34 = ((MR_String) ((MR_hl_field(3, ErrorContext_5, 4))));
            UserArityIfKnown_35 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 5))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            MethodIdPiece_36 = parse_tree__module_qual__qual_errors__get_class_method_id_piece_2_f_0(MethodName_34, UserArityIfKnown_35);
            {
              Var_152 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_152, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(3, Var_152, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_216));
            }
            {
              Var_161 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_161, 0) = ((MR_Box) ((MR_Unsigned) 27U));
              MR_hl_field(3, Var_161, 1) = ((MR_Box) (ClassId_217));
            }
            {
              Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_160, 0) = ((MR_Box) (Var_161));
              MR_hl_field(1, Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_157, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[45])));
              MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_160));
            }
            {
              Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_156, 0) = ((MR_Box) (MethodIdPiece_36));
              MR_hl_field(1, Var_156, 1) = ((MR_Box) (Var_157));
            }
            {
              Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_153, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[89])));
              MR_hl_field(1, Var_153, 1) = ((MR_Box) (Var_156));
            }
            {
              Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_151, 0) = ((MR_Box) (Var_152));
              MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_153));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[97])));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_151));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word PredOrFuncPieces_37;
            MR_Word Var_169;
            MR_Word Var_170;
            MR_Word Var_173;
            MR_Word Var_174;
            MR_Word Var_177;
            MR_Word Var_178;
            MR_Word MaybePredOrFunc_221;
            MR_Word ClassId_222;
            MR_String MethodName_223;
            MR_Word UserArityIfKnown_224;
            MR_Word MethodIdPiece_225;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            ClassId_222 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 2))));
            MaybePredOrFunc_221 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 3))));
            MethodName_223 = ((MR_String) ((MR_hl_field(3, ErrorContext_5, 4))));
            UserArityIfKnown_224 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 5))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            if ((MaybePredOrFunc_221 == (MR_Word) ((MR_Unsigned) 0U)))
              PredOrFuncPieces_37 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Var_163;
              MR_Word PredOrFunc_218 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_221, 0))));

              {
                Var_163 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_163, 0) = ((MR_Box) ((MR_Unsigned) 31U));
                MR_hl_field(3, Var_163, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_218));
              }
              {
                PredOrFuncPieces_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, PredOrFuncPieces_37, 0) = ((MR_Box) (Var_163));
                MR_hl_field(1, PredOrFuncPieces_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            MethodIdPiece_225 = parse_tree__module_qual__qual_errors__get_class_method_id_piece_2_f_0(MethodName_223, UserArityIfKnown_224);
            {
              Var_178 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_178, 0) = ((MR_Box) ((MR_Unsigned) 27U));
              MR_hl_field(3, Var_178, 1) = ((MR_Box) (ClassId_222));
            }
            {
              Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_177, 0) = ((MR_Box) (Var_178));
              MR_hl_field(1, Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_174, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[45])));
              MR_hl_field(1, Var_174, 1) = ((MR_Box) (Var_177));
            }
            {
              Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_173, 0) = ((MR_Box) (MethodIdPiece_225));
              MR_hl_field(1, Var_173, 1) = ((MR_Box) (Var_174));
            }
            {
              Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_170, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[89])));
              MR_hl_field(1, Var_170, 1) = ((MR_Box) (Var_173));
            }
            Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredOrFuncPieces_37, Var_170);
            *Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[99])), Var_169);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word Var_182;
            MR_Word Var_183;
            MR_Word ClassId_226;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            ClassId_226 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 2))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            {
              Var_183 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_183, 0) = ((MR_Box) ((MR_Unsigned) 26U));
              MR_hl_field(3, Var_183, 1) = ((MR_Box) (ClassId_226));
            }
            {
              Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_182, 0) = ((MR_Box) (Var_183));
              MR_hl_field(1, Var_182, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[116])));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_182));
            }
          }
          break;
        case (MR_Integer) 17:
          {
            MR_String Name_38;
            MR_Word Var_187;
            MR_Word Var_188;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            Name_38 = ((MR_String) ((MR_hl_field(3, ErrorContext_5, 2))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            {
              Var_188 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_188, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_188, 1) = ((MR_Box) (Name_38));
            }
            {
              Var_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_187, 0) = ((MR_Box) (Var_188));
              MR_hl_field(1, Var_187, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[120])));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_187));
            }
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word Var_192;
            MR_Word Var_193;
            MR_Word TypeCtor_227;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            TypeCtor_227 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 2))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            {
              Var_193 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_193, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(3, Var_193, 1) = ((MR_Box) (TypeCtor_227));
            }
            {
              Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_192, 0) = ((MR_Box) (Var_193));
              MR_hl_field(1, Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[125])));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_192));
            }
          }
          break;
        case (MR_Integer) 19:
          {
            MR_String EventName_39;
            MR_String AttrName_40;
            MR_Word Var_197;
            MR_Word Var_198;
            MR_Word Var_199;
            MR_Word Var_202;
            MR_Word Var_203;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ErrorContext_5, 1))));
            EventName_39 = ((MR_String) ((MR_hl_field(3, ErrorContext_5, 2))));
            AttrName_40 = ((MR_String) ((MR_hl_field(3, ErrorContext_5, 3))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            {
              Var_198 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_198, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_198, 1) = ((MR_Box) (AttrName_40));
            }
            {
              Var_203 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_203, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_203, 1) = ((MR_Box) (EventName_39));
            }
            {
              Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_202, 0) = ((MR_Box) (Var_203));
              MR_hl_field(1, Var_202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_199, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[45])));
              MR_hl_field(1, Var_199, 1) = ((MR_Box) (Var_202));
            }
            {
              Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_197, 0) = ((MR_Box) (Var_198));
              MR_hl_field(1, Var_197, 1) = ((MR_Box) (Var_199));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[106])));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_197));
            }
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__get_class_method_id_piece_2_f_0(
  MR_String MethodName_4,
  MR_Word UserArityIfKnown_5)
{
  MR_Word MethodIdPiece_6;

  if ((UserArityIfKnown_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MethodIdPiece_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MethodIdPiece_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, MethodIdPiece_6, 1) = ((MR_Box) (MethodName_4));
    }
  else
  {
    MR_Integer Arity_7;
    MR_Word NameArity_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, UserArityIfKnown_5, 0))));

    Arity_7 = (MR_Integer) (Var_9);
    {
      NameArity_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NameArity_8, 0) = ((MR_Box) (MethodName_4));
      MR_hl_field(0, NameArity_8, 1) = ((MR_Box) (Arity_7));
    }
    {
      MethodIdPiece_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MethodIdPiece_6, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(3, MethodIdPiece_6, 1) = ((MR_Box) (NameArity_8));
    }
  }
  return MethodIdPiece_6;
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(
  MR_Word ConstraintErrorContext_5,
  MR_Word * Context_6,
  MR_String * Start_7,
  MR_Word * Pieces_8)
{
  switch (MR_tag((MR_Word) ConstraintErrorContext_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ClassId_9;
        MR_Word Var_25;
        MR_Word Var_26;

        *Context_6 = ((MR_Word) ((MR_hl_field(0, ConstraintErrorContext_5, 0))));
        ClassId_9 = ((MR_Word) ((MR_hl_field(0, ConstraintErrorContext_5, 1))));
        *Start_7 = (MR_String) "in";
        {
          Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 26U));
          MR_hl_field(3, Var_26, 1) = ((MR_Box) (ClassId_9));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[88])));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_25));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredOrFunc_10;
        MR_String MethodName_11;
        MR_Word UserArityIfKnown_12;
        MR_Word MethodIdPiece_13;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word ClassId_63;

        *Context_6 = ((MR_Word) ((MR_hl_field(1, ConstraintErrorContext_5, 0))));
        ClassId_63 = ((MR_Word) ((MR_hl_field(1, ConstraintErrorContext_5, 1))));
        PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(1, ConstraintErrorContext_5, 2))) & (MR_Integer) 1);
        MethodName_11 = ((MR_String) ((MR_hl_field(1, ConstraintErrorContext_5, 3))));
        UserArityIfKnown_12 = ((MR_Word) ((MR_hl_field(1, ConstraintErrorContext_5, 4))));
        *Start_7 = (MR_String) "on";
        if ((UserArityIfKnown_12 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MethodIdPiece_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, MethodIdPiece_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, MethodIdPiece_13, 1) = ((MR_Box) (MethodName_11));
          }
        else
        {
          MR_Integer Arity_65;
          MR_Word NameArity_66;
          MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, UserArityIfKnown_12, 0))));

          Arity_65 = (MR_Integer) (Var_67);
          {
            NameArity_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NameArity_66, 0) = ((MR_Box) (MethodName_11));
            MR_hl_field(0, NameArity_66, 1) = ((MR_Box) (Arity_65));
          }
          {
            MethodIdPiece_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, MethodIdPiece_13, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, MethodIdPiece_13, 1) = ((MR_Box) (NameArity_66));
          }
        }
        {
          Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_28, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_10));
        }
        {
          Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 27U));
          MR_hl_field(3, Var_37, 1) = ((MR_Box) (ClassId_63));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[45])));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MethodIdPiece_13));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[89])));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_28));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_29));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ClassName_14;
        MR_Word ArgTypes_15;
        MR_Integer NumArgTypes_16;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;

        *Context_6 = ((MR_Word) ((MR_hl_field(2, ConstraintErrorContext_5, 0))));
        ClassName_14 = ((MR_Word) ((MR_hl_field(2, ConstraintErrorContext_5, 1))));
        ArgTypes_15 = ((MR_Word) ((MR_hl_field(2, ConstraintErrorContext_5, 2))));
        *Start_7 = (MR_String) "on";
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_15, &NumArgTypes_16);
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (ClassName_14));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (NumArgTypes_16));
        }
        {
          Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 26U));
          MR_hl_field(3, Var_42, 1) = ((MR_Box) (Var_43));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[90])));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_41));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConstraintErrorContext_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeCtor_17;
            MR_String FunctionSymbol_18;
            MR_Integer Arity_19;
            MR_Word NameArity_20;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_52;
            MR_Word Var_53;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ConstraintErrorContext_5, 1))));
            TypeCtor_17 = ((MR_Word) ((MR_hl_field(3, ConstraintErrorContext_5, 2))));
            FunctionSymbol_18 = ((MR_String) ((MR_hl_field(3, ConstraintErrorContext_5, 3))));
            Arity_19 = ((MR_Integer) ((MR_hl_field(3, ConstraintErrorContext_5, 4))));
            *Start_7 = (MR_String) "on";
            {
              NameArity_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameArity_20, 0) = ((MR_Box) (FunctionSymbol_18));
              MR_hl_field(0, NameArity_20, 1) = ((MR_Box) (Arity_19));
            }
            {
              Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, Var_48, 1) = ((MR_Box) (NameArity_20));
            }
            {
              Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(3, Var_53, 1) = ((MR_Box) (TypeCtor_17));
            }
            {
              Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
              MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[93])));
              MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
            }
            {
              Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
              MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_49));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[92])));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_47));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PFSymNameArity_21;
            MR_Word Var_57;
            MR_Word Var_58;

            *Context_6 = ((MR_Word) ((MR_hl_field(3, ConstraintErrorContext_5, 1))));
            PFSymNameArity_21 = ((MR_Word) ((MR_hl_field(3, ConstraintErrorContext_5, 2))));
            *Start_7 = (MR_String) "on";
            {
              Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(3, Var_58, 1) = ((MR_Box) (PFSymNameArity_21));
            }
            {
              Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
              MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__module_qual__qual_errors_scalar_common_1[91])));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_57));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *Context_6 = ((MR_Word) ((MR_hl_field(3, ConstraintErrorContext_5, 1))));
            *Start_7 = (MR_String) "in";
            *Pieces_8 = (MR_Word) (MR_mkword(1, &parse_tree__module_qual__qual_errors_scalar_common_1[95]));
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__module_name_matches_some_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ModuleNames_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(HeadVar__1_1, ModuleName_6);
      if (succeeded)
        HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = ModuleNames_7;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____user_arity_if_known_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__qual_errors____Unify____user_arity_if_known_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____user_arity_if_known_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__qual_errors____Compare____user_arity_if_known_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__module_qual__qual_errors__init(void)
{
}

void mercury__parse_tree__module_qual__qual_errors__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_constraint_error_context_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_error_context_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_user_arity_if_known_0);
}

void mercury__parse_tree__module_qual__qual_errors__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_qual__qual_errors__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_qual.qual_errors.
