/*
** Automatically generated from `module_qual.qual_errors.m'
** by the Mercury compiler,
** version rotd-2022-09-24
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
#include "bimap.mih"
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qualify_items.mih"




static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_0[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_1[3];

static const MR_DuArgLocn parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_constraint_error_context_0_1[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_2[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_3[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4[4];

static const MR_DuArgLocn parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_constraint_error_context_0_4[4];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4;

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_3[2];

static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_constraint_error_context_0[4];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_constraint_error_context_0[5];

static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_constraint_error_context_0[5];

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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_11[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_15[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_16[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_16;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_17[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_17;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_18[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_18;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_19[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_19;

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_3[17];

static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_error_context_0[4];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_error_context_0[20];

static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_error_context_0[20];

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
parse_tree__module_qual__qual_errors__id_types_to_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_4_p_0(
  MR_Word ErrorContext_5,
  MR_Word * Context_6,
  MR_Word * ShouldUnqualId_7,
  MR_Word * Pieces_8);

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


static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_1[101][2];

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_4[6][3];

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_5[1][6];


struct parse_tree__module_qual__qual_errors__vector_common_type_2_0_s {
  const MR_String parse_tree__module_qual__qual_errors__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct parse_tree__module_qual__qual_errors__vector_common_type_2_0_s parse_tree__module_qual__qual_errors_vector_common_2[12];



static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_1[101][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and thus it may not be used in the interface."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not exported,"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "undefined"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[11])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(The"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not been imported in the interface.)"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[11])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(Only fully module qualified names"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may refer to the entities defined in"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[11])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(No module named"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has been imported.)"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[11])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(There"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "named"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "ambiguity error: multiple possible matches for"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The possible matches are in modules"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[35])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "match"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in modules"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may not be used in the interface."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[11])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "matches"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[40])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may be necessary."))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[11])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "An explicit module qualifier"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: variable used as inst constructor."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[11])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning: module"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but it is not used in the interface."))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[11])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is imported in the interface,"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[59])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Module"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is also redundantly imported here."))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[11])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition of type class"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "class method"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instance definition for"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration of "))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "function symbol"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type constructor"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration of typeclass"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "clause mode annotation"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(field name"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the type"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[82])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[82])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition of inst"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration of instance of typeclass"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode declaration for lambda expression"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition of mode"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for mutable "))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode declaration for"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition of type"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "explicit type qualification"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[95]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "representation information for type"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type class constraint for "))
  },
  /* row  99 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[51])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__module_qual__qual_errors_scalar_common_1[99]))),
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
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
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
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
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



static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0 = {
  (MR_String) "mqcec_class_defn",
  INT16_C(3),
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuArgLocn parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_constraint_error_context_0_1[3] = {
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

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1 = {
  (MR_String) "mqcec_class_method",
  INT16_C(3),
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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_3[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3 = {
  (MR_String) "mqcec_type_defn_constructor",
  INT16_C(3),
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4[4] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_constraint_error_context_0_4[4] = {
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
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4 = {
  (MR_String) "mqcec_pred_decl",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4,
  NULL,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_locns_mq_constraint_error_context_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_0[1] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_1[1] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_2[1] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_3[2] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4
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
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_constraint_error_context_0[5] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3
};

static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_constraint_error_context_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 3
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
  (MR_Integer) 5,
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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0)
  }
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_4[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_constraint_error_context_0)
};

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
  {
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
  }
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_8[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8 = {
  (MR_String) "mqec_foreign_enum",
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_9[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9 = {
  (MR_String) "mqec_foreign_export_enum",
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10 = {
  (MR_String) "mqec_pragma_decl",
  INT16_C(2),
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
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11 = {
  (MR_String) "mqec_pragma_impl",
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12 = {
  (MR_String) "mqec_lambda_expr",
  INT16_C(1),
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13 = {
  (MR_String) "mqec_clause_mode_annotation",
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14[1] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14 = {
  (MR_String) "mqec_type_qual",
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_15[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15 = {
  (MR_String) "mqec_class",
  INT16_C(2),
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
  (MR_String) "mqec_instance",
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_17[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_17 = {
  (MR_String) "mqec_mutable",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 14,
  INT32_C(17),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_17,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_18[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_18 = {
  (MR_String) "mqec_type_repn",
  INT16_C(2),
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

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_19[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_19 = {
  (MR_String) "mqec_event_spec_attr",
  INT16_C(3),
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

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_0[1] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_0
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_1[1] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_2[1] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_3[17] = {
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
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_19
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
    UINT32_C(17),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_error_context_0[20] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_3,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_19,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_16,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_17,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_6,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_7,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_0,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_18,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4
};

static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_error_context_0[20] = {
  (MR_Integer) 15,
  (MR_Integer) 6,
  (MR_Integer) 9,
  (MR_Integer) 2,
  (MR_Integer) 19,
  (MR_Integer) 18,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 8,
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 10,
  (MR_Integer) 17,
  (MR_Integer) 3
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
  (MR_Integer) 20,
  UINT16_C(12),
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_error_context_0,

};

void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_110 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_111 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_110 == CastY_111);
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
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_8;
              MR_Word ArgX2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_11;
              MR_Word SubResult1_9;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                ArgY2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
              MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_13;
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_16;
              MR_Word SubResult1_14;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
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
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_18;
              MR_Word ArgX2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_21;
              MR_Word SubResult1_19;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                ArgY2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
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
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_23;
                  MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_26;
                  MR_String ArgX3_28 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_String ArgY3_29;
                  MR_Integer ArgX4_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  MR_Integer ArgY4_32;
                  MR_Word ArgX5_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
                  MR_Word ArgY5_35;
                  MR_Word SubResult1_24;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_29 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    ArgY4_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                    ArgY5_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 5))));
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
                            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[1]), &CompareResult_6, ((MR_Box) (ArgX5_34)), ((MR_Box) (ArgY5_35)));
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_37;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&CompareResult_6, ArgX1_36, ArgY1_37);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_39;
                  MR_Integer ArgX2_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_42;
                  MR_Word ArgX3_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_45;
                  MR_Word SubResult1_40;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                  MR_Word ArgX1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_47;
                  MR_Word ArgX2_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                  MR_Word ArgY2_50;
                  MR_Word ArgX3_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_53;
                  MR_Word SubResult1_48;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                    ArgY3_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_48, ArgX1_46, ArgY1_47);
                    succeeded = (SubResult1_48 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_48;
                    else
                    {
                      MR_Word SubResult2_51;
                      MR_Integer Var_153 = (MR_Integer) (ArgX2_49);
                      MR_Integer Var_154 = (MR_Integer) (ArgY2_50);

                      succeeded = (Var_153 < Var_154);
                      if (succeeded)
                      {
                        SubResult2_51 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_153 > Var_154);
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
                  MR_Word ArgX1_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_55;
                  MR_Word ArgX2_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_58;
                  MR_Word ArgX3_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_61;
                  MR_Word SubResult1_56;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_56, ArgX1_54, ArgY1_55);
                    succeeded = (SubResult1_56 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_56;
                    else
                    {
                      MR_Word SubResult2_59;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[2]), &SubResult2_59, ((MR_Box) (ArgX2_57)), ((MR_Box) (ArgY2_58)));
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
                  MR_Word ArgX1_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_63;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    mercury__term_context____Compare____term_context_0_0(&CompareResult_6, ArgX1_62, ArgY1_63);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ArgX1_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_65;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    mercury__term_context____Compare____term_context_0_0(&CompareResult_6, ArgX1_64, ArgY1_65);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ArgX1_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_67;
                  MR_Word ArgX2_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_70;
                  MR_Word SubResult1_68;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_68, ArgX1_66, ArgY1_67);
                    succeeded = (SubResult1_68 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_68;
                    else
                      parse_tree__prog_item____Compare____decl_pragma_0_0(&CompareResult_6, ArgX2_69, ArgY2_70);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ArgX1_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_72;
                  MR_Word ArgX2_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_75;
                  MR_Word SubResult1_73;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_73, ArgX1_71, ArgY1_72);
                    succeeded = (SubResult1_73 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_73;
                    else
                      parse_tree__prog_item____Compare____impl_pragma_0_0(&CompareResult_6, ArgX2_74, ArgY2_75);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ArgX1_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_77;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    mercury__term_context____Compare____term_context_0_0(&CompareResult_6, ArgX1_76, ArgY1_77);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word ArgX1_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_79;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    mercury__term_context____Compare____term_context_0_0(&CompareResult_6, ArgX1_78, ArgY1_79);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word ArgX1_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_81;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    mercury__term_context____Compare____term_context_0_0(&CompareResult_6, ArgX1_80, ArgY1_81);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ArgX1_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_83;
                  MR_Word ArgX2_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_86;
                  MR_Word SubResult1_84;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_84, ArgX1_82, ArgY1_83);
                    succeeded = (SubResult1_84 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_84;
                    else
                      parse_tree__prog_data____Compare____class_id_0_0(&CompareResult_6, ArgX2_85, ArgY2_86);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word ArgX1_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_88;
                  MR_Word ArgX2_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_91;
                  MR_Word SubResult1_89;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_89, ArgX1_87, ArgY1_88);
                    succeeded = (SubResult1_89 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_89;
                    else
                      parse_tree__prog_data____Compare____class_id_0_0(&CompareResult_6, ArgX2_90, ArgY2_91);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word ArgX1_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_93;
                  MR_String ArgX2_95 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_String ArgY2_96;
                  MR_Word SubResult1_94;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_96 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_94, ArgX1_92, ArgY1_93);
                    succeeded = (SubResult1_94 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_94;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX2_95, ArgY2_96);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word ArgX1_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_98;
                  MR_Word ArgX2_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_101;
                  MR_Word SubResult1_99;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_99, ArgX1_97, ArgY1_98);
                    succeeded = (SubResult1_99 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_99;
                    else
                      parse_tree__prog_data____Compare____type_ctor_0_0(&CompareResult_6, ArgX2_100, ArgY2_101);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word ArgX1_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_103;
                  MR_String ArgX2_105 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_String ArgY2_106;
                  MR_String ArgX3_108 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_String ArgY3_109;
                  MR_Word SubResult1_104;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_106 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_109 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    mercury__term_context____Compare____term_context_0_0(&SubResult1_104, ArgX1_102, ArgY1_103);
                    succeeded = (SubResult1_104 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_104;
                    else
                    {
                      MR_Word SubResult2_107;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_107, ArgX2_105, ArgY2_106);
                      succeeded = (SubResult2_107 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_107;
                      else
                        mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX3_108, ArgY3_109);
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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
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
  MR_Integer CastX_85 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_86 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_85 == CastY_86);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____inst_ctor_0_0(ArgX2_9, ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_11, ArgY1_12);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____mode_ctor_0_0(ArgX2_13, ArgY2_14);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_92_92;
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_16;
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_18;
              MR_String ArgX3_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_String ArgY3_20;
              MR_Integer ArgX4_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ArgY4_22;
              MR_Word ArgX5_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5))));
              MR_Word ArgY5_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                ArgY5_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 5))));
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
                        TypeInfo_92_92 = (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_92_92, ((MR_Box) (ArgX5_23)), ((MR_Box) (ArgY5_24)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(ArgX1_25, ArgY1_26);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_28;
              MR_Integer ArgX2_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_30;
              MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
              MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_34;
              MR_Word ArgX2_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word ArgY2_36;
              MR_Word ArgX3_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                ArgY3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
              MR_Word TypeInfo_111_111;
              MR_Word ArgX1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_40;
              MR_Word ArgX2_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_42;
              MR_Word ArgX3_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_44;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_39, ArgY1_40);
                if (succeeded)
                {
                  TypeInfo_111_111 = (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_111_111, ((MR_Box) (ArgX2_41)), ((MR_Box) (ArgY2_42)));
                  if (succeeded)
                    succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(ArgX3_43, ArgY3_44);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_45, ArgY1_46);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_48;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_47, ArgY1_48);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArgX1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_50;
              MR_Word ArgX2_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_52;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_49, ArgY1_50);
                if (succeeded)
                  succeeded = parse_tree__prog_item____Unify____decl_pragma_0_0(ArgX2_51, ArgY2_52);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ArgX1_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_54;
              MR_Word ArgX2_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_56;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_53, ArgY1_54);
                if (succeeded)
                  succeeded = parse_tree__prog_item____Unify____impl_pragma_0_0(ArgX2_55, ArgY2_56);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ArgX1_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_57, ArgY1_58);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ArgX1_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_59, ArgY1_60);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ArgX1_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_62;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_61, ArgY1_62);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgX1_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_64;
              MR_Word ArgX2_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_66;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_63, ArgY1_64);
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX2_65, ArgY2_66);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ArgX1_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_68;
              MR_Word ArgX2_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_70;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_67, ArgY1_68);
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX2_69, ArgY2_70);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ArgX1_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_72;
              MR_String ArgX2_73 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_74;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_74 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_71, ArgY1_72);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_73, ArgY2_74) == 0);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ArgX1_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_76;
              MR_Word ArgX2_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_78;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_75, ArgY1_76);
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_77, ArgY2_78);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ArgX1_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_80;
              MR_String ArgX2_81 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_82;
              MR_String ArgX3_83 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_String ArgY3_84;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_82 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_84 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_79, ArgY1_80);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_81, ArgY2_82) == 0);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_83, ArgY3_84) == 0);
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
  MR_Integer CastX_175 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_176 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_175 == CastY_176);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Var_193 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_6;

                mercury__term_context____Compare____term_context_0_0(&SubResult1_6, Var_195, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  MR_Word SubResult2_9;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, Var_194, ArgY2_8);
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                  {
                    succeeded = (Var_193 < ArgY3_11);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_193 > ArgY3_11);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_196 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_197 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_String ArgY3_50 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_45;

                mercury__term_context____Compare____term_context_0_0(&SubResult1_45, Var_198, ArgY1_44);
                succeeded = (SubResult1_45 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_45;
                else
                {
                  MR_Word SubResult2_48;
                  MR_Integer Var_209 = (MR_Integer) (Var_197);
                  MR_Integer Var_210 = (MR_Integer) (ArgY2_47);

                  succeeded = (Var_209 < Var_210);
                  if (succeeded)
                  {
                    SubResult2_48 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_209 > Var_210);
                    if (succeeded)
                    {
                      SubResult2_48 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_48 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_48;
                  else
                    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_196, ArgY3_50);
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_89 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_84;

                mercury__term_context____Compare____term_context_0_0(&SubResult1_84, Var_201, ArgY1_83);
                succeeded = (SubResult1_84 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_84;
                else
                {
                  MR_Word SubResult2_87;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_87, Var_200, ArgY2_86);
                  succeeded = (SubResult2_87 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_87;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_199)), ((MR_Box) (ArgY3_89)));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_206 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              MR_Word Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgY1_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_String ArgY3_128 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_123;

                        mercury__term_context____Compare____term_context_0_0(&SubResult1_123, Var_208, ArgY1_122);
                        succeeded = (SubResult1_123 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_123;
                        else
                        {
                          MR_Word SubResult2_126;

                          parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult2_126, Var_207, ArgY2_125);
                          succeeded = (SubResult2_126 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_126;
                          else
                            mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_206, ArgY3_128);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
              MR_Word Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              MR_Word Var_204 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_168 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                        MR_Word ArgY3_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                        MR_Integer ArgY4_174 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                        MR_Word SubResult1_166;

                        mercury__term_context____Compare____term_context_0_0(&SubResult1_166, Var_205, ArgY1_165);
                        succeeded = (SubResult1_166 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_166;
                        else
                        {
                          MR_Word SubResult2_169;
                          MR_Integer Var_211 = (MR_Integer) (Var_204);
                          MR_Integer Var_212 = (MR_Integer) (ArgY2_168);

                          succeeded = (Var_211 < Var_212);
                          if (succeeded)
                          {
                            SubResult2_169 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_211 > Var_212);
                            if (succeeded)
                            {
                              SubResult2_169 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult2_169 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_169;
                          else
                          {
                            MR_Word SubResult3_172;

                            mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult3_172, Var_203, ArgY3_171);
                            succeeded = (SubResult3_172 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult3_172;
                            else
                            {
                              succeeded = (Var_202 < ArgY4_174);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (Var_202 > ArgY4_174);
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
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_35 == CastY_36);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
                succeeded = (ArgX3_7 == ArgY3_8);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word ArgY2_12;
          MR_String ArgX3_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_String ArgY3_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
            ArgY3_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_9, ArgY1_10);
            if (succeeded)
            {
              succeeded = (ArgX2_11 == ArgY2_12);
              if (succeeded)
                succeeded = (strcmp(ArgX3_13, ArgY3_14) == 0);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_42_42;
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_18;
          MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_15, ArgY1_16);
            if (succeeded)
            {
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_17, ArgY2_18);
              if (succeeded)
              {
                TypeInfo_42_42 = (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX3_19)), ((MR_Box) (ArgY3_20)));
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_22;
              MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_24;
              MR_String ArgX3_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_String ArgY3_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_26 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_21, ArgY1_22);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_23, ArgY2_24);
                  if (succeeded)
                    succeeded = (strcmp(ArgX3_25, ArgY3_26) == 0);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_28;
              MR_Word ArgX2_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word ArgY2_30;
              MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_32;
              MR_Integer ArgX4_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ArgY4_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                ArgY3_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_27, ArgY1_28);
                if (succeeded)
                {
                  succeeded = (ArgX2_29 == ArgY2_30);
                  if (succeeded)
                  {
                    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_31, ArgY3_32);
                    if (succeeded)
                      succeeded = (ArgX4_33 == ArgY4_34);
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

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(
  MR_Word SymName_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (SymName_3));
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
    Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (ImportedModuleName_4));
  }
  {
    Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[64])));
  }
  {
    Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[62])));
    MR_hl_field(MR_mktag(1), Pieces_7, 1) = ((MR_Box) (Var_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Msg_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Context_5));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Pieces_7));
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

  parse_tree__module_qual__qual_errors__warn_redundant_import_context_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Msg_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Msg_6));
}

void MR_CALL 
parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(
  MR_Word ParentModuleName_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word ImportedModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ImportContexts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word HeadContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportContexts_7, (MR_Integer) 0))));
  MR_Word TailContexts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportContexts_7, (MR_Integer) 1))));
  MR_Word HeadPieces_11;
  MR_Word HeadMsg_12;
  MR_Word TailMsgs_13;
  MR_Word Spec_14;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_40;
  MR_Word Var_46;

  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (ParentModuleName_5));
  }
  {
    Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (ImportedModuleName_6));
  }
  {
    Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[61])));
  }
  {
    Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[57])));
    MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[8])));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
  }
  {
    HeadPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), HeadPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[56])));
    MR_hl_field(MR_mktag(1), HeadPieces_11, 1) = ((MR_Box) (Var_19));
  }
  {
    HeadMsg_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadMsg_12, 0) = ((MR_Box) (HeadContext_9));
    MR_hl_field(MR_mktag(0), HeadMsg_12, 1) = ((MR_Box) (HeadPieces_11));
  }
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ImportedModuleName_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_40, TailContexts_10, &TailMsgs_13);
  {
    Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (HeadMsg_12));
    MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (TailMsgs_13));
  }
  {
    Spec_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.module_qual.qual_errors.warn_unused_interface_import\'/4"));
    MR_hl_field(MR_mktag(3), Spec_14, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 53) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(MR_mktag(3), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(3), Spec_14, 3) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(3), Spec_14, 4) = ((MR_Box) (Var_46));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_16 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
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
  MR_Word _ShouldUnqualId_11;

  parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_4_p_0(ErrorContext_8, &Context_10, &_ShouldUnqualId_11, &ErrorContextPieces_12);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ErrorContextPieces_12, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[55])));
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[4])), Var_21);
  {
    Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.module_qual.qual_errors.report_invalid_user_inst\'/5"));
    MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (Context_10));
    MR_hl_field(MR_mktag(1), Spec_14, 4) = ((MR_Box) (Pieces_13));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_16 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
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
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_107;
  MR_Word SymName_133;
  MR_Integer Arity_134;
  MR_Word Var_135;
  MR_Word _ShouldUnqualId_15;

  parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_4_p_0(ErrorContext_8, &Context_14, &_ShouldUnqualId_15, &ErrorContextPieces_16);
  IdTypeStr_17 = ((&parse_tree__module_qual__qual_errors_vector_common_2[8 + IdType_10]))->parse_tree__module_qual__qual_errors__vector_common_type_2_0__vct_2_f_0;
  UsableModuleSymNames_18 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_4[3]), UsableModuleNames_11);
  {
    Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (IdTypeStr_17));
  }
  SymName_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Id_9, (MR_Integer) 0))));
  Arity_134 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Id_9, (MR_Integer) 1))));
  {
    Var_135 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (SymName_133));
    MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (Arity_134));
  }
  {
    Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[36])));
  }
  {
    Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[32])));
    MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[8])));
    MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
  }
  Var_61 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", UsableModuleSymNames_18);
  Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_61, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[18])));
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_39, Var_60);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ErrorContextPieces_16, Var_38);
  MainPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[4])), Var_37);
  if ((UnusableModuleNames_12 == (MR_Word) ((MR_Unsigned) 0U)))
    UnusablePieces_20 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnusableModuleNames_12, (MR_Integer) 1))));

    if ((Var_131 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word UnusableModuleSymNames_26;
      MR_Word Var_81;

      UnusableModuleSymNames_26 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_4[4]), UnusableModuleNames_12);
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), UnusableModuleSymNames_26, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[44])));
      UnusablePieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[42])), Var_81);
    }
    else
    {
      MR_Word UnusableModuleSymNames_118;
      MR_Word Var_129;

      UnusableModuleSymNames_118 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_4[5]), UnusableModuleNames_12);
      Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), UnusableModuleSymNames_118, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[44])));
      UnusablePieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[47])), Var_129);
    }
  }
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (MainPieces_19));
  }
  {
    Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (UnusablePieces_20));
  }
  {
    Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
    MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[100])));
  }
  {
    Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
    MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_98));
  }
  {
    Msg_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Msg_28, 0) = ((MR_Box) (Context_14));
    MR_hl_field(MR_mktag(2), Msg_28, 1) = ((MR_Box) (Var_96));
  }
  {
    Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Msg_28));
    MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.module_qual.qual_errors.report_ambiguous_match\'/7"));
    MR_hl_field(MR_mktag(0), Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(0), Spec_29, 3) = ((MR_Box) (Var_107));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_31 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_29));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
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
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70)
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
  MR_Word NonImportedPieces_56;
  MR_Word PossibleArities_57;
  MR_Word OtherArityPieces_66;
  MR_Word AllPieces_67;
  MR_Word Spec_68;
  MR_Word Var_75;
  MR_Word Var_193;
  MR_Word Var_194;
  MR_Word Var_195;
  MR_Word Var_196;
  MR_Word Var_197;
  MR_Word OtherIntMismatchesPrime_30;
  MR_Word IdModuleName_52;
  MR_Word ImportedModuleNames_54;
  MR_Word Var_151;
  MR_Word Var_211;
  MR_Word ModuleNames_216;

  parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_4_p_0(ErrorContext_12, &Context_20, &ShouldUnqualId_21, &ErrorContextPieces_22);
  Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ErrorContextPieces_22, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[9])));
  InPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[4])), Var_75);
  parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(IdType_14, &IdTypeStr_24);
  IdSymName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Id_13, (MR_Integer) 0))));
  IdArity_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Id_13, (MR_Integer) 1))));
  IdBaseName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(IdSymName_25);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntMismatches0_16, &IntMismatches_28);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), QualMismatches0_17, &QualMismatches_29);
  succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntMismatches_28, ((MR_Box) (ThisModuleName_15)), &OtherIntMismatchesPrime_30);
  if (succeeded)
  {
    MR_Word ThisModulesSN_32;
    MR_Word ThisModuleSNA_33;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;

    OtherIntMismatches_31 = OtherIntMismatchesPrime_30;
    {
      ThisModulesSN_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ThisModulesSN_32, 0) = ((MR_Box) (ThisModuleName_15));
      MR_hl_field(MR_mktag(1), ThisModulesSN_32, 1) = ((MR_Box) (IdBaseName_27));
    }
    {
      ThisModuleSNA_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThisModuleSNA_33, 0) = ((MR_Box) (ThisModulesSN_32));
      MR_hl_field(MR_mktag(0), ThisModuleSNA_33, 1) = ((MR_Box) (IdArity_26));
    }
    UndefPieces_34 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_88, 0) = ((MR_Box) (IdTypeStr_24));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (ThisModuleSNA_33));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[15])));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_89));
    }
    {
      ThisIntPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ThisIntPieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[10])));
      MR_hl_field(MR_mktag(1), ThisIntPieces_35, 1) = ((MR_Box) (Var_87));
    }
  }
  else
  {
    MR_Word SNA_36;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;

    OtherIntMismatches_31 = IntMismatches_28;
    switch (ShouldUnqualId_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          SNA_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SNA_36, 0) = ((MR_Box) (IdSymName_25));
          MR_hl_field(MR_mktag(0), SNA_36, 1) = ((MR_Box) (IdArity_26));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_100;

          {
            Var_100 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (IdBaseName_27));
          }
          {
            SNA_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SNA_36, 0) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(0), SNA_36, 1) = ((MR_Box) (IdArity_26));
          }
        }
        break;
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_104, 0) = ((MR_Box) (IdTypeStr_24));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (SNA_36));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[18])));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_105));
    }
    {
      UndefPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UndefPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), UndefPieces_34, 1) = ((MR_Box) (Var_103));
    }
    ThisIntPieces_35 = (MR_Word) ((MR_Unsigned) 0U);
  }
  if ((OtherIntMismatches_31 == (MR_Word) ((MR_Unsigned) 0U)))
    OtherIntPieces_37 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word OtherIntMismatchesTail_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherIntMismatches_31, (MR_Integer) 1))));
    MR_String OtherIntModuleWord_40;
    MR_String OtherIntHasWord_41;
    MR_Word OtherIntSymNames_44;
    MR_Word Var_114;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_123;
    MR_Word Var_124;

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
    OtherIntSymNames_44 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_4[0]), OtherIntMismatches_31);
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_118, 0) = ((MR_Box) (OtherIntModuleWord_40));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[19])));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_117));
    }
    Var_121 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", OtherIntSymNames_44);
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_124, 0) = ((MR_Box) (OtherIntHasWord_41));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[21])));
    }
    Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_121, Var_123);
    OtherIntPieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_114, Var_120);
  }
  if ((QualMismatches_29 == (MR_Word) ((MR_Unsigned) 0U)))
    QualPieces_45 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word QualMismatchesTail_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), QualMismatches_29, (MR_Integer) 1))));
    MR_String QualModuleWord_48;
    MR_Word QualSymNames_51;
    MR_Word Var_132;
    MR_Word Var_135;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_141;
    MR_Word Var_142;

    if ((QualMismatchesTail_47 == (MR_Word) ((MR_Unsigned) 0U)))
      QualModuleWord_48 = (MR_String) "module";
    else
      QualModuleWord_48 = (MR_String) "modules";
    QualSymNames_51 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_4[1]), QualMismatches_29);
    {
      Var_139 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_139, 0) = ((MR_Box) (QualModuleWord_48));
    }
    {
      Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
      MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[23])));
      MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_138));
    }
    {
      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[22])));
      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_135));
    }
    Var_142 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", QualSymNames_51);
    Var_141 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_142, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[25])));
    QualPieces_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_132, Var_141);
  }
  succeeded = ((MR_tag((MR_Word) IdSymName_25)) == (MR_Integer) 1);
  if (succeeded)
  {
    IdModuleName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IdSymName_25, (MR_Integer) 0))));
    parse_tree__module_qual__mq_info_get_this_module_2_p_0(Info_11, &Var_211);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModuleName_15, Var_211);
    if (succeeded)
    {
      parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(Info_11, &ImportedModuleNames_54);
      ModuleNames_216 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportedModuleNames_54);
      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(IdModuleName_52, ThisModuleName_15);
      if (succeeded)
        Var_151 = (MR_Integer) 1;
      else
        Var_151 = parse_tree__module_qual__qual_errors__module_name_matches_some_2_f_0(IdModuleName_52, ModuleNames_216);
      succeeded = (Var_151 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    MR_Word Var_154;
    MR_Word Var_155;

    {
      Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) (IdModuleName_52));
    }
    {
      Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var_155));
      MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[28])));
    }
    {
      NonImportedPieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NonImportedPieces_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[26])));
      MR_hl_field(MR_mktag(1), NonImportedPieces_56, 1) = ((MR_Box) (Var_154));
    }
  }
  else
    NonImportedPieces_56 = (MR_Word) ((MR_Unsigned) 0U);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PossibleAritiesSet_18, &PossibleArities_57);
  succeeded = (PossibleArities_57 != (MR_Word) ((MR_Unsigned) 0U));
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
          succeeded = (NonImportedPieces_56 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_String IdTypesStr_60;
    MR_String IsAre_61;
    MR_String KindKinds_62;
    MR_String ArityArities_63;
    MR_Word PossibleArityStrs_64;
    MR_Word PossibleAritiesPieces_65;
    MR_Word Var_167;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Word Var_172;
    MR_Word Var_173;
    MR_Word Var_174;
    MR_Word Var_177;
    MR_Word Var_178;
    MR_String Var_179;
    MR_Word Var_180;
    MR_Word Var_183;
    MR_Word Var_184;
    MR_Word Var_186;
    MR_Box conv2_IsAre_61;
    MR_Box conv3_KindKinds_62;
    MR_Box conv4_ArityArities_63;

    parse_tree__module_qual__qual_errors__id_types_to_string_2_p_0(IdType_14, &IdTypesStr_60);
    conv2_IsAre_61 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PossibleArities_57, ((MR_Box) ((MR_String) "is a")), ((MR_Box) ((MR_String) "are")));
    IsAre_61 = ((MR_String) (conv2_IsAre_61));
    conv3_KindKinds_62 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PossibleArities_57, ((MR_Box) (IdTypeStr_24)), ((MR_Box) (IdTypesStr_60)));
    KindKinds_62 = ((MR_String) (conv3_KindKinds_62));
    conv4_ArityArities_63 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PossibleArities_57, ((MR_Box) ((MR_String) "arity")), ((MR_Box) ((MR_String) "arities")));
    ArityArities_63 = ((MR_String) (conv4_ArityArities_63));
    mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__qual_errors_scalar_common_4[2]), PossibleArities_57, &PossibleArityStrs_64);
    PossibleAritiesPieces_65 = parse_tree__error_util__list_to_pieces_1_f_0(PossibleArityStrs_64);
    {
      Var_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_171, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_171, 1) = ((MR_Box) (IsAre_61));
    }
    {
      Var_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_173, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_173, 1) = ((MR_Box) (KindKinds_62));
    }
    Var_179 = mdbcomp__sym_name__unqualify_name_1_f_0(IdSymName_25);
    {
      Var_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_178, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_178, 1) = ((MR_Box) (Var_179));
    }
    {
      Var_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_184, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_184, 1) = ((MR_Box) (ArityArities_63));
    }
    {
      Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (Var_184));
      MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[31])));
      MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (Var_183));
    }
    {
      Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (Var_178));
      MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) (Var_180));
    }
    {
      Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[30])));
      MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) (Var_177));
    }
    {
      Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (Var_173));
      MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_174));
    }
    {
      Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (Var_171));
      MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (Var_172));
    }
    {
      Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[29])));
      MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_170));
    }
    Var_186 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PossibleAritiesPieces_65, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[25])));
    OtherArityPieces_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_167, Var_186);
  }
  else
    OtherArityPieces_66 = (MR_Word) ((MR_Unsigned) 0U);
  Var_197 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NonImportedPieces_56, OtherArityPieces_66);
  Var_196 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), QualPieces_45, Var_197);
  Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OtherIntPieces_37, Var_196);
  Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ThisIntPieces_35, Var_195);
  Var_193 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), UndefPieces_34, Var_194);
  AllPieces_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InPieces_23, Var_193);
  {
    Spec_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_68, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.module_qual.qual_errors.report_undefined_mq_id\'/10"));
    MR_hl_field(MR_mktag(1), Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_68, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), Spec_68, 3) = ((MR_Box) (Context_20));
    MR_hl_field(MR_mktag(1), Spec_68, 4) = ((MR_Box) (AllPieces_67));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_70 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_68));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_69));
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__id_types_to_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  *HeadVar__2_2 = ((&parse_tree__module_qual__qual_errors_vector_common_2[4 + HeadVar__1_1]))->parse_tree__module_qual__qual_errors__vector_common_type_2_0__vct_2_f_0;
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(
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
        MR_Word Var_39;
        MR_Word Var_40;

        *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ErrorContext_5, (MR_Integer) 0))));
        TypeCtor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ErrorContext_5, (MR_Integer) 1))));
        *ShouldUnqualId_7 = (MR_Integer) 0;
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (TypeCtor_9));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[94])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_39));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstCtor_10;
        MR_Word Var_44;
        MR_Word Var_45;

        *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ErrorContext_5, (MR_Integer) 0))));
        InstCtor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ErrorContext_5, (MR_Integer) 1))));
        *ShouldUnqualId_7 = (MR_Integer) 0;
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (InstCtor_10));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[87])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_44));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModeCtor_11;
        MR_Word Var_49;
        MR_Word Var_50;

        *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ErrorContext_5, (MR_Integer) 0))));
        ModeCtor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ErrorContext_5, (MR_Integer) 1))));
        *ShouldUnqualId_7 = (MR_Integer) 0;
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 21U));
          MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (ModeCtor_11));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[91])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_49));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ContainingTypeCtor_12;
            MR_String FunctionSymbol_13;
            MR_Integer ArgNum_14;
            MR_Word MaybeCtorFieldName_15;
            MR_Word FieldNamePieces_16;
            MR_Word Var_61;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_69;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_79;
            MR_Word Var_80;

            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            ContainingTypeCtor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 2))));
            FunctionSymbol_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 3))));
            ArgNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 4))));
            MaybeCtorFieldName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 5))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            if ((MaybeCtorFieldName_15 == (MR_Word) ((MR_Unsigned) 0U)))
              FieldNamePieces_16 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word CtorFieldName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCtorFieldName_15, (MR_Integer) 0))));
              MR_Word FieldSymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorFieldName_17, (MR_Integer) 0))));
              MR_Word Var_54;
              MR_Word Var_55;
              MR_String Var_56;

              Var_56 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldSymName_18);
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Var_56));
              }
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[76])));
              }
              {
                FieldNamePieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), FieldNamePieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[74])));
                MR_hl_field(MR_mktag(1), FieldNamePieces_16, 1) = ((MR_Box) (Var_54));
              }
            }
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (ArgNum_14));
            }
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (FunctionSymbol_13));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[69])));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
            }
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[77])));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
            }
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[10])));
              MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
            }
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (ContainingTypeCtor_12));
            }
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[78])));
              MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
            }
            Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), FieldNamePieces_16, Var_76);
            *Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_61, Var_75);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ConstraintErrorContext_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            MR_String _Start_21;

            *ShouldUnqualId_7 = (MR_Integer) 0;
            parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(ConstraintErrorContext_20, Context_6, &_Start_21, Pieces_8);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ClassName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            MR_Integer Arity_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 2))));
            MR_String Start_24;
            MR_Word ConstraintErrorContextPieces_25;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word ConstraintErrorContext_164 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 3))));

            *ShouldUnqualId_7 = (MR_Integer) 0;
            parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(ConstraintErrorContext_164, Context_6, &Start_24, &ConstraintErrorContextPieces_25);
            {
              Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (ClassName_22));
              MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (Arity_23));
            }
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
            }
            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (Start_24));
            }
            {
              Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (ConstraintErrorContextPieces_25));
            }
            {
              Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_87));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[98])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_84));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word PredOrFunc_26;
            MR_Word Id_27;
            MR_Word SymName_28;
            MR_Integer OrigArity_29;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_String Var_93;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Integer Arity_165;

            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            PredOrFunc_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 2))) & (MR_Integer) 1);
            Id_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 3))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            SymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Id_27, (MR_Integer) 0))));
            OrigArity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Id_27, (MR_Integer) 1))));
            parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_26, OrigArity_29, &Arity_165);
            Var_93 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_26);
            {
              Var_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_92, 0) = ((MR_Box) (Var_93));
            }
            {
              Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (SymName_28));
              MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (Arity_165));
            }
            {
              Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (Var_96));
            }
            {
              Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
              MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[68])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_91));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word MaybePredOrFunc_30;
            MR_Word Id_172;
            MR_Word SymName_173;
            MR_Integer OrigArity_174;

            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            MaybePredOrFunc_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 2))));
            Id_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 3))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            SymName_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Id_172, (MR_Integer) 0))));
            OrigArity_174 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Id_172, (MR_Integer) 1))));
            if ((MaybePredOrFunc_30 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word Var_111;

              {
                Var_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (SymName_173));
                MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (OrigArity_174));
              }
              {
                Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (Var_111));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
                MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Pieces_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[93])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_109));
              }
            }
            else
            {
              MR_Word Var_100;
              MR_Word Var_101;
              MR_String Var_102;
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Integer Arity_166;
              MR_Word PredOrFunc_167 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_30, (MR_Integer) 0))));

              parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_167, OrigArity_174, &Arity_166);
              Var_102 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_167);
              {
                Var_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_101, 0) = ((MR_Box) (Var_102));
              }
              {
                Var_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (SymName_173));
                MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (Arity_166));
              }
              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (Var_105));
              }
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
                MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
                MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_103));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Pieces_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[93])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_100));
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            *ShouldUnqualId_7 = (MR_Integer) 1;
            *Pieces_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[84]));
          }
          break;
        case (MR_Integer) 6:
          {
            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[86]));
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word DeclPragma_31;

            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            DeclPragma_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 2))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = parse_tree__item_util__decl_pragma_desc_pieces_1_f_0(DeclPragma_31);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word ImplPragma_32;

            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            ImplPragma_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 2))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = parse_tree__item_util__impl_pragma_desc_pieces_1_f_0(ImplPragma_32);
          }
          break;
        case (MR_Integer) 9:
          {
            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[90]));
          }
          break;
        case (MR_Integer) 10:
          {
            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[73]));
          }
          break;
        case (MR_Integer) 11:
          {
            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            *Pieces_8 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[96]));
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word ClassId_33;
            MR_Word Var_136;
            MR_Word Var_137;

            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            ClassId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 2))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            {
              Var_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_137, 0) = ((MR_Box) ((MR_Unsigned) 23U));
              MR_hl_field(MR_mktag(3), Var_137, 1) = ((MR_Box) (ClassId_33));
            }
            {
              Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
              MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[71])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_136));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Var_141;
            MR_Word Var_142;
            MR_Word ClassId_175;

            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            ClassId_175 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 2))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            {
              Var_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_142, 0) = ((MR_Box) ((MR_Unsigned) 22U));
              MR_hl_field(MR_mktag(3), Var_142, 1) = ((MR_Box) (ClassId_175));
            }
            {
              Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
              MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[88])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_141));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String Name_34;
            MR_Word Var_146;
            MR_Word Var_147;

            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            Name_34 = ((MR_String) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 2))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            {
              Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) (Name_34));
            }
            {
              Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
              MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[92])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_146));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Var_151;
            MR_Word Var_152;
            MR_Word TypeCtor_176;

            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            TypeCtor_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 2))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            {
              Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_152, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(MR_mktag(3), Var_152, 1) = ((MR_Box) (TypeCtor_176));
            }
            {
              Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (Var_152));
              MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[97])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_151));
            }
          }
          break;
        case (MR_Integer) 16:
          {
            MR_String EventName_35;
            MR_String AttrName_36;
            MR_Word Var_156;
            MR_Word Var_157;
            MR_Word Var_158;
            MR_Word Var_161;
            MR_Word Var_162;

            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 1))));
            EventName_35 = ((MR_String) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 2))));
            AttrName_36 = ((MR_String) ((MR_hl_field(MR_mktag(3), ErrorContext_5, (MR_Integer) 3))));
            *ShouldUnqualId_7 = (MR_Integer) 0;
            {
              Var_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_157, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_157, 1) = ((MR_Box) (AttrName_36));
            }
            {
              Var_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_162, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_162, 1) = ((MR_Box) (EventName_35));
            }
            {
              Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (Var_162));
              MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[80])));
              MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_161));
            }
            {
              Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_157));
              MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_158));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[79])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_156));
            }
          }
          break;
      }
      break;
  }
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
        MR_Word ClassName_9;
        MR_Integer Arity_10;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_25;

        *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintErrorContext_5, (MR_Integer) 0))));
        ClassName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintErrorContext_5, (MR_Integer) 1))));
        Arity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConstraintErrorContext_5, (MR_Integer) 2))));
        *Start_7 = (MR_String) "in";
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (ClassName_9));
          MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Arity_10));
        }
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[65])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_23));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredOrFunc_11;
        MR_String MethodName_12;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;

        *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstraintErrorContext_5, (MR_Integer) 0))));
        PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ConstraintErrorContext_5, (MR_Integer) 1))) & (MR_Integer) 1);
        MethodName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConstraintErrorContext_5, (MR_Integer) 2))));
        *Start_7 = (MR_String) "on";
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 27U));
          MR_hl_field(MR_mktag(3), Var_30, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (MethodName_12));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[66])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_29));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ArgTypes_13;
        MR_Integer NumArgTypes_14;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word ClassName_60;

        *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConstraintErrorContext_5, (MR_Integer) 0))));
        ClassName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConstraintErrorContext_5, (MR_Integer) 1))));
        ArgTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConstraintErrorContext_5, (MR_Integer) 2))));
        *Start_7 = (MR_String) "on";
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_13, &NumArgTypes_14);
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (ClassName_60));
          MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (NumArgTypes_14));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[67])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_36));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeCtor_15;
            MR_String FunctionSymbol_16;
            MR_Word TypeCtorSymName_17;
            MR_Integer TypeCtorArity_18;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_49;

            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 1))));
            TypeCtor_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 2))));
            FunctionSymbol_16 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 3))));
            *Start_7 = (MR_String) "on";
            TypeCtorSymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0))));
            TypeCtorArity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1))));
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (FunctionSymbol_16));
            }
            {
              Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (TypeCtorSymName_17));
              MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (TypeCtorArity_18));
            }
            {
              Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
            }
            {
              Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
              MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[70])));
              MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
            }
            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[69])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_42));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SymName_19;
            MR_Integer OrigArity_20;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_String Var_55;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Integer Arity_61;
            MR_Word PredOrFunc_62;

            *Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 1))));
            PredOrFunc_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 2))) & (MR_Integer) 1);
            SymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 3))));
            OrigArity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 4))));
            *Start_7 = (MR_String) "on";
            parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_62, OrigArity_20, &Arity_61);
            Var_55 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_62);
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (Var_55));
            }
            {
              Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (SymName_19));
              MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (Arity_61));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
            }
            {
              Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
              MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[68])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_53));
            }
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
      MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ModuleNames_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

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
