/*
** Automatically generated from `module_qual.qual_errors.m'
** by the Mercury compiler,
** version rotd-2017-10-13
** configured for x86_64-pc-linux-gnu.
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


// :- module parse_tree.module_qual.qual_errors.
// :- implementation.

/*
INIT mercury__parse_tree__module_qual__qual_errors__init
ENDINIT
*/

#include "parse_tree.module_qual.qual_errors.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.get_dependencies.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qualify_items.mih"




static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_0[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_1[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_2[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_3[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4[4];

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

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_ctor_field_name_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_1[5];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_2[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_3[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_3;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_4[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_5[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_6[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_6;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_7[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_7;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_8[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_9[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_11[1];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14[2];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14;

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_15[3];

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15;

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_3[13];

static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_error_context_0[4];

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_error_context_0[16];

static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_error_context_0[16];

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

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__id_to_sym_name_and_arity_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__module_qual__qual_errors__id_types_to_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(
  MR_Word ErrorContext_4,
  MR_Word * Context_5,
  MR_Word * Pieces_6);

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_id_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_type_ctor_1_f_0(
  MR_Word HeadVar__1_1);

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


static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_1[97][2];

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_3[2][5];

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_4[6][3];

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_5[1][6];


/* sealed */ struct parse_tree__module_qual__qual_errors__vector_common_type_2_0_s {
  const MR_String parse_tree__module_qual__qual_errors__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct parse_tree__module_qual__qual_errors__vector_common_type_2_0_s parse_tree__module_qual__qual_errors_vector_common_2[8];



static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_1[97][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and thus it may not be used in the interface."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not exported,"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[8])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not been imported in the interface.)"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[8])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[8])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has been imported.)"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[8])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The possible matches are in modules"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may not be used in the interface."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[8])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may be necessary."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[8])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "An explicit module qualifier"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: variable used as inst constructor."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[8])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it is not used in the interface."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[8])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is imported in the interface,"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is also redundantly imported here."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[8])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "definition of type class"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "class method"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "instance definition for"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration of "))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "function symbol"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type constructor"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration of typeclass"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "clause mode annotation"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(field name"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the type"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "definition of inst"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration of instance of typeclass"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mode declaration for lambda expression"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "definition of mode"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for mutable "))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mode declaration for"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "definition of type"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "explicit type qualification"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type class constraint for "))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "undefined"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(The"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(Only fully module qualified names"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may refer to the entities defined in the"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(No module named"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(There"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "named"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "ambiguity error: multiple possible matches for"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "match"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in modules"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[87])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "matches"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[86])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[90])))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[30])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__module_qual__qual_errors_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In module"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: module"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Module"))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_4[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_3[1])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qual_errors_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
};


static /* final */ const struct parse_tree__module_qual__qual_errors__vector_common_type_2_0_s parse_tree__module_qual__qual_errors_vector_common_2[8] = {
  /* row 0 */   {     (MR_String) "type" },
  /* row 1 */   {     (MR_String) "mode" },
  /* row 2 */   {     (MR_String) "inst" },
  /* row 3 */   {     (MR_String) "typeclass" },
  /* row 4 */   {     (MR_String) "types" },
  /* row 5 */   {     (MR_String) "modes" },
  /* row 6 */   {     (MR_String) "insts" },
  /* row 7 */   {     (MR_String) "typeclasses" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_0 = {
  (MR_String) "mqcec_class_defn",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_1 = {
  (MR_String) "mqcec_class_method",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_2[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__qual_errors__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_2 = {
  (MR_String) "mqcec_instance_defn",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_3[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_3 = {
  (MR_String) "mqcec_type_defn_constructor",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_constraint_error_context_0_4 = {
  (MR_String) "mqcec_pred_decl",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0_10001)),
  (MR_String) "parse_tree.module_qual.qual_errors",
  (MR_String) "mq_constraint_error_context",
  {     parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_constraint_error_context_0 },
  {     parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_constraint_error_context_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_constraint_error_context_0
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_0 = {
  (MR_String) "mqec_type_defn",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_ctor_field_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0
  }
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_1[5] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__qual_errors__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_ctor_field_name_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1 = {
  (MR_String) "mqec_constructor_arg",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_constraint_error_context_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2 = {
  (MR_String) "mqec_typeclass_constraint_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_3[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_constraint_error_context_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_3 = {
  (MR_String) "mqec_typeclass_constraint",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_4[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4 = {
  (MR_String) "mqec_inst",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5 = {
  (MR_String) "mqec_mode",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_6[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_6 = {
  (MR_String) "mqec_pred_or_func",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__qual_errors__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
  }
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_7[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__qual_errors__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_7 = {
  (MR_String) "mqec_pred_or_func_mode",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_type_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8 = {
  (MR_String) "mqec_pragma",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9 = {
  (MR_String) "mqec_lambda_expr",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10 = {
  (MR_String) "mqec_clause_mode_annotation",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11 = {
  (MR_String) "mqec_type_qual",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12 = {
  (MR_String) "mqec_class",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 12,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13 = {
  (MR_String) "mqec_instance",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 13,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14 = {
  (MR_String) "mqec_mutable",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 14,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_15[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15 = {
  (MR_String) "mqec_event_spec_attr",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 15,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_3[13] = {
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
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15
};

static const MR_DuPtagLayout parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_error_context_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_2
  },
  {
    (MR_Integer) 13,
    MR_SECTAG_REMOTE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_3
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_error_context_0[16] = {
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_1,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_15,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_6,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_7,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_0,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_3,
  &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2
};

static const MR_Integer parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_error_context_0[16] = {
  (MR_Integer) 12,
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 14,
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 9,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 13,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_error_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0_10001)),
  (MR_String) "parse_tree.module_qual.qual_errors",
  (MR_String) "mq_error_context",
  {     parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_name_ordered_mq_error_context_0 },
  {     parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_ptag_ordered_mq_error_context_0 },
  (MR_Integer) 16,
  (MR_Integer) 4,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__functor_number_map_mq_error_context_0
};

void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_96 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_97 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_96 == CastY_97);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer Var_4;
      MR_Integer Var_5;

      parse_tree__module_qual__qual_errors____Index____mq_error_context_0_0(HeadVar__2_2, &Var_4);
      parse_tree__module_qual__qual_errors____Index____mq_error_context_0_0(HeadVar__3_3, &Var_5);
      succeeded = (Var_4 < Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_4 > Var_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word Var_6;

          switch (MR_tag((MR_Word) HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
                MR_Word ArgY1_8;
                MR_Word ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
                MR_Word ArgY2_10;
                MR_Word Var_11;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
                  ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
                  mercury__term____Compare____context_0_0(&Var_11, ArgX1_7, ArgY1_8);
                  succeeded = (Var_11 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    Var_6 = Var_11;
                  else
                    parse_tree__prog_data____Compare____type_ctor_0_0(&Var_6, ArgX2_9, ArgY2_10);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
                MR_Word ArgY1_13;
                MR_Word ArgX2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
                MR_Word ArgY2_15;
                MR_String ArgX3_16 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
                MR_String ArgY3_17;
                MR_Integer ArgX4_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
                MR_Integer ArgY4_19;
                MR_Word ArgX5_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4)));
                MR_Word ArgY5_21;
                MR_Word Var_22;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
                  ArgY3_17 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
                  ArgY4_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3)));
                  ArgY5_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4)));
                  mercury__term____Compare____context_0_0(&Var_22, ArgX1_12, ArgY1_13);
                  succeeded = (Var_22 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    Var_6 = Var_22;
                  else
                  {
                    MR_Word Var_23;

                    parse_tree__prog_data____Compare____type_ctor_0_0(&Var_23, ArgX2_14, ArgY2_15);
                    succeeded = (Var_23 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      Var_6 = Var_23;
                    else
                    {
                      MR_Word Var_24;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_24, ArgX3_16, ArgY3_17);
                      succeeded = (Var_24 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_24;
                      else
                      {
                        MR_Word Var_25;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_25, ArgX4_18, ArgY4_19);
                        succeeded = (Var_25 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          Var_6 = Var_25;
                        else
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[1], &Var_6, ((MR_Box) (ArgX5_20)), ((MR_Box) (ArgY5_21)));
                        }
                      }
                    }
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
                MR_Word ArgY1_27;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&Var_6, ArgX1_26, ArgY1_27);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ArgX1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_29;
                    MR_Integer ArgX2_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                    MR_Integer ArgY2_31;
                    MR_Word ArgX3_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                    MR_Word ArgY3_33;
                    MR_Word Var_34;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgY1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      ArgY2_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                      ArgY3_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                      mdbcomp__sym_name____Compare____sym_name_0_0(&Var_34, ArgX1_28, ArgY1_29);
                      succeeded = (Var_34 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_34;
                      else
                      {
                        MR_Word Var_35;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_35, ArgX2_30, ArgY2_31);
                        succeeded = (Var_35 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          Var_6 = Var_35;
                        else
                          parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&Var_6, ArgX3_32, ArgY3_33);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ArgX1_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_37;
                    MR_Word ArgX2_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word ArgY2_39;
                    MR_Word Var_40;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      ArgY1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      ArgY2_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                      mercury__term____Compare____context_0_0(&Var_40, ArgX1_36, ArgY1_37);
                      succeeded = (Var_40 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_40;
                      else
                        parse_tree__module_qual__id_set____Compare____mq_id_0_0(&Var_6, ArgX2_38, ArgY2_39);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ArgX1_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_42;
                    MR_Word ArgX2_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word ArgY2_44;
                    MR_Word Var_45;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      ArgY1_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      ArgY2_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                      mercury__term____Compare____context_0_0(&Var_45, ArgX1_41, ArgY1_42);
                      succeeded = (Var_45 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_45;
                      else
                        parse_tree__module_qual__id_set____Compare____mq_id_0_0(&Var_6, ArgX2_43, ArgY2_44);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word ArgX1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_47;
                    MR_Word ArgX2_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word ArgY2_49;
                    MR_Word ArgX3_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                    MR_Word ArgY3_51;
                    MR_Word Var_52;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      ArgY1_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      ArgY2_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                      ArgY3_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                      mercury__term____Compare____context_0_0(&Var_52, ArgX1_46, ArgY1_47);
                      succeeded = (Var_52 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_52;
                      else
                      {
                        MR_Word Var_53;
                        MR_Integer Var_133 = (MR_Integer) ArgX2_48;
                        MR_Integer Var_134 = (MR_Integer) ArgY2_49;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_53, Var_133, Var_134);
                        succeeded = (Var_53 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          Var_6 = Var_53;
                        else
                          parse_tree__module_qual__id_set____Compare____mq_id_0_0(&Var_6, ArgX3_50, ArgY3_51);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word ArgX1_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_55;
                    MR_Word ArgX2_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word ArgY2_57;
                    MR_Word ArgX3_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                    MR_Word ArgY3_59;
                    MR_Word Var_60;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      ArgY1_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      ArgY2_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                      ArgY3_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                      mercury__term____Compare____context_0_0(&Var_60, ArgX1_54, ArgY1_55);
                      succeeded = (Var_60 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_60;
                      else
                      {
                        MR_Word Var_61;

                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[2], &Var_61, ((MR_Box) (ArgX2_56)), ((MR_Box) (ArgY2_57)));
                        succeeded = (Var_61 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          Var_6 = Var_61;
                        else
                          parse_tree__module_qual__id_set____Compare____mq_id_0_0(&Var_6, ArgX3_58, ArgY3_59);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word ArgX1_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_63;
                    MR_Word ArgX2_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word ArgY2_65;
                    MR_Word Var_66;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      ArgY1_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      ArgY2_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                      mercury__term____Compare____context_0_0(&Var_66, ArgX1_62, ArgY1_63);
                      succeeded = (Var_66 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_66;
                      else
                        parse_tree__prog_item____Compare____pragma_type_0_0(&Var_6, ArgX2_64, ArgY2_65);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word ArgX1_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_68;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      ArgY1_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      mercury__term____Compare____context_0_0(&Var_6, ArgX1_67, ArgY1_68);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word ArgX1_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_70;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      ArgY1_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      mercury__term____Compare____context_0_0(&Var_6, ArgX1_69, ArgY1_70);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word ArgX1_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_72;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                    if (succeeded)
                    {
                      ArgY1_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      mercury__term____Compare____context_0_0(&Var_6, ArgX1_71, ArgY1_72);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word ArgX1_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_74;
                    MR_Word ArgX2_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word ArgY2_76;
                    MR_Word Var_77;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                    if (succeeded)
                    {
                      ArgY1_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      ArgY2_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                      mercury__term____Compare____context_0_0(&Var_77, ArgX1_73, ArgY1_74);
                      succeeded = (Var_77 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_77;
                      else
                        parse_tree__module_qual__id_set____Compare____mq_id_0_0(&Var_6, ArgX2_75, ArgY2_76);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word ArgX1_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_79;
                    MR_Word ArgX2_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word ArgY2_81;
                    MR_Word Var_82;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                    if (succeeded)
                    {
                      ArgY1_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      ArgY2_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                      mercury__term____Compare____context_0_0(&Var_82, ArgX1_78, ArgY1_79);
                      succeeded = (Var_82 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_82;
                      else
                        parse_tree__module_qual__id_set____Compare____mq_id_0_0(&Var_6, ArgX2_80, ArgY2_81);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    MR_Word ArgX1_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_84;
                    MR_String ArgX2_85 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                    MR_String ArgY2_86;
                    MR_Word Var_87;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                    if (succeeded)
                    {
                      ArgY1_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      ArgY2_86 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                      mercury__term____Compare____context_0_0(&Var_87, ArgX1_83, ArgY1_84);
                      succeeded = (Var_87 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_87;
                      else
                        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX2_85, ArgY2_86);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    MR_Word ArgX1_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                    MR_Word ArgY1_89;
                    MR_String ArgX2_90 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                    MR_String ArgY2_91;
                    MR_String ArgX3_92 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                    MR_String ArgY3_93;
                    MR_Word Var_94;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                    if (succeeded)
                    {
                      ArgY1_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                      ArgY2_91 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                      ArgY3_93 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                      mercury__term____Compare____context_0_0(&Var_94, ArgX1_88, ArgY1_89);
                      succeeded = (Var_94 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        Var_6 = Var_94;
                      else
                      {
                        MR_Word Var_95;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_95, ArgX2_90, ArgY2_91);
                        succeeded = (Var_95 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          Var_6 = Var_95;
                        else
                          mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX3_92, ArgY3_93);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
            *HeadVar__1_1 = Var_6;
          else
            {
              mercury__private_builtin__compare_error_0_p_0();
              return;
            }
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
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
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
      }
      break;
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_73 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_74 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_73 == CastY_74);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
              if (succeeded)
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_5, ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_80_80;
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_10;
            MR_String ArgX3_11 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
            MR_String ArgY3_12;
            MR_Integer ArgX4_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
            MR_Integer ArgY4_14;
            MR_Word ArgX5_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4)));
            MR_Word ArgY5_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_12 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
              ArgY4_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
              ArgY5_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4)));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_7, ArgY1_8);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_9, ArgY2_10);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX3_11, ArgY3_12) == 0);
                  if (succeeded)
                  {
                    succeeded = (ArgX4_13 == ArgY4_14);
                    if (succeeded)
                    {
                      TypeInfo_80_80 = (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[1];
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_80_80, ((MR_Box) (ArgX5_15)), ((MR_Box) (ArgY5_16)));
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(ArgX1_17, ArgY1_18);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_20;
                MR_Integer ArgX2_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer ArgY2_22;
                MR_Word ArgX3_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ArgY3_24;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_19, ArgY1_20);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_21 == ArgY2_22);
                    if (succeeded)
                      succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(ArgX3_23, ArgY3_24);
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_26;
                MR_Word ArgX2_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_28;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_25, ArgY1_26);
                  if (succeeded)
                    succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(ArgX2_27, ArgY2_28);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_30;
                MR_Word ArgX2_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_32;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_29, ArgY1_30);
                  if (succeeded)
                    succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(ArgX2_31, ArgY2_32);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgX1_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_34;
                MR_Word ArgX2_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_36;
                MR_Word ArgX3_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ArgY3_38;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_33, ArgY1_34);
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
                MR_Word TypeInfo_95_95;
                MR_Word ArgX1_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_40;
                MR_Word ArgX2_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_42;
                MR_Word ArgX3_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ArgY3_44;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_39, ArgY1_40);
                  if (succeeded)
                  {
                    TypeInfo_95_95 = (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[2];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_95_95, ((MR_Box) (ArgX2_41)), ((MR_Box) (ArgY2_42)));
                    if (succeeded)
                      succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(ArgX3_43, ArgY3_44);
                  }
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ArgX1_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_46;
                MR_Word ArgX2_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_48;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_45, ArgY1_46);
                  if (succeeded)
                    succeeded = parse_tree__prog_item____Unify____pragma_type_0_0(ArgX2_47, ArgY2_48);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ArgX1_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_50;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_49, ArgY1_50);
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ArgX1_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_52;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  ArgY1_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_51, ArgY1_52);
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word ArgX1_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_54;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (succeeded)
                {
                  ArgY1_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_53, ArgY1_54);
                }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word ArgX1_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_56;
                MR_Word ArgX2_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_58;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ArgY1_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_55, ArgY1_56);
                  if (succeeded)
                    succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(ArgX2_57, ArgY2_58);
                }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word ArgX1_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_60;
                MR_Word ArgX2_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_62;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
                if (succeeded)
                {
                  ArgY1_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_59, ArgY1_60);
                  if (succeeded)
                    succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(ArgX2_61, ArgY2_62);
                }
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word ArgX1_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_64;
                MR_String ArgX2_65 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_String ArgY2_66;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
                if (succeeded)
                {
                  ArgY1_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_66 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_63, ArgY1_64);
                  if (succeeded)
                    succeeded = (strcmp(ArgX2_65, ArgY2_66) == 0);
                }
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word ArgX1_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_68;
                MR_String ArgX2_69 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_String ArgY2_70;
                MR_String ArgX3_71 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_String ArgY3_72;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
                if (succeeded)
                {
                  ArgY1_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_70 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_72 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_67, ArgY1_68);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX2_69, ArgY2_70) == 0);
                    if (succeeded)
                      succeeded = (strcmp(ArgX3_71, ArgY3_72) == 0);
                  }
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_175 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_176 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_175 == CastY_176);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word Var_10;

                  mercury__term____Compare____context_0_0(&Var_10, Var_195, ArgY1_5);
                  succeeded = (Var_10 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_10;
                  else
                  {
                    MR_Word Var_11;

                    mdbcomp__sym_name____Compare____sym_name_0_0(&Var_11, Var_194, ArgY2_7);
                    succeeded = (Var_11 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_11;
                    else
                      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_193, ArgY3_9);
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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
            MR_String Var_196 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
                  MR_String ArgY3_48 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word Var_49;

                  mercury__term____Compare____context_0_0(&Var_49, Var_198, ArgY1_44);
                  succeeded = (Var_49 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_49;
                  else
                  {
                    MR_Word Var_50;
                    MR_Integer Var_209 = (MR_Integer) Var_197;
                    MR_Integer Var_210 = (MR_Integer) ArgY2_46;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_50, Var_209, Var_210);
                    succeeded = (Var_50 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_50;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_196, ArgY3_48);
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
            MR_Word Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ArgY3_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word Var_88;

                  mercury__term____Compare____context_0_0(&Var_88, Var_201, ArgY1_83);
                  succeeded = (Var_88 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_88;
                  else
                  {
                    MR_Word Var_89;

                    mdbcomp__sym_name____Compare____sym_name_0_0(&Var_89, Var_200, ArgY2_85);
                    succeeded = (Var_89 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_89;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_199)), ((MR_Box) (ArgY3_87)));
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_206 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Word Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word ArgY2_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_String ArgY3_126 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word Var_127;

                          mercury__term____Compare____context_0_0(&Var_127, Var_208, ArgY1_122);
                          succeeded = (Var_127 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_127;
                          else
                          {
                            MR_Word Var_128;

                            parse_tree__prog_data____Compare____type_ctor_0_0(&Var_128, Var_207, ArgY2_124);
                            succeeded = (Var_128 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_128;
                            else
                              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_206, ArgY3_126);
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
                MR_Integer Var_202 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                MR_Word Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                MR_Word Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_Word Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word ArgY2_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word ArgY3_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                          MR_Integer ArgY4_171 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word Var_172;

                          mercury__term____Compare____context_0_0(&Var_172, Var_205, ArgY1_165);
                          succeeded = (Var_172 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_172;
                          else
                          {
                            MR_Word Var_173;
                            MR_Integer Var_211 = (MR_Integer) Var_204;
                            MR_Integer Var_212 = (MR_Integer) ArgY2_167;

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_173, Var_211, Var_212);
                            succeeded = (Var_173 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_173;
                            else
                            {
                              MR_Word Var_174;

                              mdbcomp__sym_name____Compare____sym_name_0_0(&Var_174, Var_203, ArgY3_169);
                              succeeded = (Var_174 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_174;
                              else
                                mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_202, ArgY4_171);
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
}

MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_35 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_36 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_35 == CastY_36);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_6;
            MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer ArgY3_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
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
            MR_Word ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_12;
            MR_String ArgX3_13 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
            MR_String ArgY3_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_14 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_9, ArgY1_10);
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
            MR_Word ArgX1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_16;
            MR_Word ArgX2_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_18;
            MR_Word ArgX3_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_20;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_15, ArgY1_16);
              if (succeeded)
              {
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_17, ArgY2_18);
                if (succeeded)
                {
                  TypeInfo_42_42 = (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[0];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX3_19)), ((MR_Box) (ArgY3_20)));
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_22;
                MR_Word ArgX2_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_24;
                MR_String ArgX3_25 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_String ArgY3_26;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_26 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_21, ArgY1_22);
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
                MR_Word ArgX1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_28;
                MR_Word ArgX2_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_30;
                MR_Word ArgX3_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ArgY3_32;
                MR_Integer ArgX4_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer ArgY4_34;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  ArgY3_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
                  ArgY4_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4)));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_27, ArgY1_28);
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
}

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(
  MR_Word SymName_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (SymName_3));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_redundant_import_context_3_p_0(
  MR_Word ImportedModuleName_4,
  MR_Word Context_5,
  MR_Word * Msg_6)
{
  {
    MR_Word Pieces_7;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_18;
    MR_Word Var_19;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (ImportedModuleName_4));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[40])));
    }
    {
      Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[96])));
      MR_hl_field(MR_mktag(1), Pieces_7, 1) = ((MR_Box) (Var_10));
    }
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Pieces_7));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Msg_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Msg_6;

    parse_tree__module_qual__qual_errors__warn_redundant_import_context_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_Msg_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Msg_6));
  }
}

void MR_CALL 
parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(
  MR_Word ParentModuleName_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word ImportedModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ImportContexts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word HeadContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImportContexts_7, (MR_Integer) 0)));
    MR_Word TailContexts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ImportContexts_7, (MR_Integer) 1)));
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
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_46;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (ParentModuleName_5));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (ImportedModuleName_6));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[38])));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[95])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[81])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      HeadPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[94])));
      MR_hl_field(MR_mktag(1), HeadPieces_11, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (HeadPieces_11));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      HeadMsg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadMsg_12, 0) = ((MR_Box) (HeadContext_9));
      MR_hl_field(MR_mktag(0), HeadMsg_12, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (ImportedModuleName_6));
    }
    mercury__list__map_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_context_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, Var_43, TailContexts_10, &TailMsgs_13);
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (HeadMsg_12));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (TailMsgs_13));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_46));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
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
  {
    MR_Word TypeCtorInfo_41_41;
    MR_Word Context_10;
    MR_Word ErrorContextPieces_11;
    MR_Word Pieces_12;
    MR_Word Msg_13;
    MR_Word Spec_14;
    MR_Word Var_21;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_38;

    parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(ErrorContext_8, &Context_10, &ErrorContextPieces_11);
    TypeCtorInfo_41_41 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    Var_21 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_41_41, ErrorContextPieces_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[34]));
    Pieces_12 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_41_41, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[72]), Var_21);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Pieces_12));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Msg_13));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0(
  MR_Word ErrorContext_8,
  MR_Word Id_9,
  MR_Word IdType_10,
  MR_Word UsableModuleNames_11,
  MR_Word UnusableModuleNames_12,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_Word TypeCtorInfo_108_108;
    MR_Word TypeCtorInfo_109_109;
    MR_Word Context_14;
    MR_Word ErrorContextPieces_15;
    MR_String IdTypeStr_16;
    MR_Word UsableModuleSymNames_17;
    MR_Word MainPieces_18;
    MR_Word UnusablePieces_19;
    MR_Word Msg_27;
    MR_Word Spec_28;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_105;

    parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(ErrorContext_8, &Context_14, &ErrorContextPieces_15);
    parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(IdType_10, &IdTypeStr_16);
    TypeCtorInfo_108_108 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeCtorInfo_109_109 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    UsableModuleSymNames_17 = mercury__list__map_2_f_0(TypeCtorInfo_108_108, TypeCtorInfo_109_109, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_4[3], UsableModuleNames_11);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (IdTypeStr_16));
    }
    Var_49 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(Id_9);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[24])));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[81])));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
    }
    Var_60 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", UsableModuleSymNames_17);
    Var_59 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_109_109, Var_60, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[14]));
    Var_37 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_109_109, Var_38, Var_59);
    Var_36 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_109_109, ErrorContextPieces_15, Var_37);
    MainPieces_18 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_109_109, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[72]), Var_36);
    if ((UnusableModuleNames_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      UnusablePieces_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnusableModuleNames_12, (MR_Integer) 1)));
      MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnusableModuleNames_12, (MR_Integer) 0)));

      if ((Var_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word UnusableModuleSymNames_25;
        MR_Word Var_80;

        UnusableModuleSymNames_25 = mercury__list__map_2_f_0(TypeCtorInfo_108_108, TypeCtorInfo_109_109, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_4[4], UnusableModuleNames_12);
        Var_80 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_109_109, UnusableModuleSymNames_25, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[26]));
        UnusablePieces_19 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_109_109, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[88]), Var_80);
      }
      else
      {
        MR_Word UnusableModuleSymNames_117;
        MR_Word Var_128;

        UnusableModuleSymNames_117 = mercury__list__map_2_f_0(TypeCtorInfo_108_108, TypeCtorInfo_109_109, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_4[5], UnusableModuleNames_12);
        Var_128 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_109_109, UnusableModuleSymNames_117, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[26]));
        UnusablePieces_19 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_109_109, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[91]), Var_128);
      }
    }
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (MainPieces_18));
    }
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (UnusablePieces_19));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[93])));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_97));
    }
    {
      Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_27, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), Msg_27, 1) = ((MR_Box) (Var_95));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Msg_27));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_28, 2) = ((MR_Box) (Var_105));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_30 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv5_HeadVar__2_2;

    mercury__string__int_to_string_2_p_0(((MR_Integer) wrapper_arg_1), &conv5_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
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
  MR_Word STATE_VARIABLE_Specs_0_68,
  MR_Word * STATE_VARIABLE_Specs_69)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_205_205;
    MR_Word TypeCtorInfo_206_206;
    MR_Word TypeCtorInfo_211_211;
    MR_Word Context_20;
    MR_Word ErrorContextPieces_21;
    MR_Word InPieces_22;
    MR_String IdTypeStr_23;
    MR_Word IdSymName_24;
    MR_Integer IdArity_25;
    MR_String IdBaseName_26;
    MR_Word IntMismatches_27;
    MR_Word QualMismatches_28;
    MR_Word OtherIntMismatches_30;
    MR_Word UndefPieces_33;
    MR_Word ThisIntPieces_34;
    MR_Word OtherIntPieces_35;
    MR_Word QualPieces_43;
    MR_Word NonImportedPieces_54;
    MR_Word PossibleArities_55;
    MR_Word OtherArityPieces_64;
    MR_Word AllPieces_65;
    MR_Word Msg_66;
    MR_Word Spec_67;
    MR_Word Var_74;
    MR_Word Var_192;
    MR_Word Var_193;
    MR_Word Var_194;
    MR_Word Var_195;
    MR_Word Var_196;
    MR_Word Var_197;
    MR_Word Var_198;
    MR_Word Var_202;
    MR_Word OtherIntMismatchesPrime_29;
    MR_Word IdModuleName_50;
    MR_Word ImportedModuleNames_52;
    MR_Word AvailModuleNames_53;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_215;
    MR_String Var_51;
    MR_Integer Var_56;
    MR_Word Var_57;

    parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(ErrorContext_12, &Context_20, &ErrorContextPieces_21);
    TypeCtorInfo_205_205 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    Var_74 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, ErrorContextPieces_21, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[7]));
    InPieces_22 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[72]), Var_74);
    parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(IdType_14, &IdTypeStr_23);
    IdSymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Id_13, (MR_Integer) 0)));
    IdArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Id_13, (MR_Integer) 1)));
    IdBaseName_26 = mdbcomp__sym_name__unqualify_name_1_f_0(IdSymName_24);
    TypeCtorInfo_206_206 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_206_206, IntMismatches0_16, &IntMismatches_27);
    mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_206_206, QualMismatches0_17, &QualMismatches_28);
    succeeded = mercury__list__delete_first_3_p_0(TypeCtorInfo_206_206, IntMismatches_27, ((MR_Box) (ThisModuleName_15)), &OtherIntMismatchesPrime_29);
    if (succeeded)
    {
      MR_Word ThisModulesSN_31;
      MR_Word ThisModuleSNA_32;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;

      OtherIntMismatches_30 = OtherIntMismatchesPrime_29;
      {
        ThisModulesSN_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ThisModulesSN_31, 0) = ((MR_Box) (ThisModuleName_15));
        MR_hl_field(MR_mktag(1), ThisModulesSN_31, 1) = ((MR_Box) (IdBaseName_26));
      }
      {
        ThisModuleSNA_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ThisModuleSNA_32, 0) = ((MR_Box) (ThisModulesSN_31));
        MR_hl_field(MR_mktag(0), ThisModuleSNA_32, 1) = ((MR_Box) (IdArity_25));
      }
      UndefPieces_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (IdTypeStr_23));
      }
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
        MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (ThisModuleSNA_32));
      }
      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[12])));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_88));
      }
      {
        ThisIntPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ThisIntPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[53])));
        MR_hl_field(MR_mktag(1), ThisIntPieces_34, 1) = ((MR_Box) (Var_86));
      }
    }
    else
    {
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;

      OtherIntMismatches_30 = IntMismatches_27;
      {
        Var_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_102, 0) = ((MR_Box) (IdTypeStr_23));
      }
      Var_105 = parse_tree__module_qual__qual_errors__id_to_sym_name_and_arity_1_f_0(Id_13);
      {
        Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (Var_105));
      }
      {
        Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
        MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[14])));
      }
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_103));
      }
      {
        UndefPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), UndefPieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[73])));
        MR_hl_field(MR_mktag(1), UndefPieces_33, 1) = ((MR_Box) (Var_101));
      }
      ThisIntPieces_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    if ((OtherIntMismatches_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      OtherIntPieces_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word OtherIntMismatchesTail_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), OtherIntMismatches_30, (MR_Integer) 1)));
      MR_String OtherIntModuleWord_38;
      MR_String OtherIntHasWord_39;
      MR_Word OtherIntSymNames_42;
      MR_Word Var_113;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), OtherIntMismatches_30, (MR_Integer) 0)));

      if ((OtherIntMismatchesTail_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        OtherIntModuleWord_38 = (MR_String) "module";
        OtherIntHasWord_39 = (MR_String) "has";
      }
      else
      {
        OtherIntModuleWord_38 = (MR_String) "modules";
        OtherIntHasWord_39 = (MR_String) "have";
      }
      OtherIntSymNames_42 = mercury__list__map_2_f_0(TypeCtorInfo_206_206, TypeCtorInfo_205_205, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_4[0], OtherIntMismatches_30);
      {
        Var_117 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_117, 0) = ((MR_Box) (OtherIntModuleWord_38));
      }
      {
        Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[74])));
        MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_116));
      }
      Var_120 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", OtherIntSymNames_42);
      {
        Var_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_123, 0) = ((MR_Box) (OtherIntHasWord_39));
      }
      {
        Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[16])));
      }
      Var_119 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, Var_120, Var_122);
      OtherIntPieces_35 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, Var_113, Var_119);
    }
    if ((QualMismatches_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      QualPieces_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word QualMismatchesTail_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), QualMismatches_28, (MR_Integer) 1)));
      MR_String QualModuleWord_46;
      MR_Word QualSymNames_49;
      MR_Word Var_131;
      MR_Word Var_134;
      MR_Word Var_137;
      MR_Word Var_138;
      MR_Word Var_140;
      MR_Word Var_141;
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), QualMismatches_28, (MR_Integer) 0)));

      if ((QualMismatchesTail_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        QualModuleWord_46 = (MR_String) "module";
      else
        QualModuleWord_46 = (MR_String) "modules";
      QualSymNames_49 = mercury__list__map_2_f_0(TypeCtorInfo_206_206, TypeCtorInfo_205_205, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_4[1], QualMismatches_28);
      {
        Var_138 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_138, 0) = ((MR_Box) (QualModuleWord_46));
      }
      {
        Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Var_138));
        MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[76])));
        MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_137));
      }
      {
        Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[75])));
        MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_134));
      }
      Var_141 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", QualSymNames_49);
      Var_140 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, Var_141, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[18]));
      QualPieces_43 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, Var_131, Var_140);
    }
    succeeded = ((MR_tag((MR_Word) IdSymName_24)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      IdModuleName_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), IdSymName_24, (MR_Integer) 0)));
      Var_51 = ((MR_String) (MR_hl_field(MR_mktag(1), IdSymName_24, (MR_Integer) 1)));
      parse_tree__module_qual__mq_info_get_this_module_2_p_0(Info_11, &Var_215);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModuleName_15, Var_215);
      if (succeeded)
      {
        parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(Info_11, &ImportedModuleNames_52);
        Var_149 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_206_206, ImportedModuleNames_52);
        {
          AvailModuleNames_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AvailModuleNames_53, 0) = ((MR_Box) (ThisModuleName_15));
          MR_hl_field(MR_mktag(1), AvailModuleNames_53, 1) = ((MR_Box) (Var_149));
        }
        Var_150 = parse_tree__module_qual__qual_errors__module_name_matches_some_2_f_0(IdModuleName_50, AvailModuleNames_53);
        succeeded = (Var_150 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      MR_Word Var_153;
      MR_Word Var_154;

      {
        Var_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(3), Var_154, 1) = ((MR_Box) (IdModuleName_50));
      }
      {
        Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Var_154));
        MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[20])));
      }
      {
        NonImportedPieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NonImportedPieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[77])));
        MR_hl_field(MR_mktag(1), NonImportedPieces_54, 1) = ((MR_Box) (Var_153));
      }
    }
    else
      NonImportedPieces_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    TypeCtorInfo_211_211 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_211_211, PossibleAritiesSet_18, &PossibleArities_55);
    succeeded = ((MR_tag((MR_Word) PossibleArities_55)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), PossibleArities_55, (MR_Integer) 0)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), PossibleArities_55, (MR_Integer) 1)));
      succeeded = (ThisIntPieces_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (OtherIntPieces_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = (QualPieces_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
            succeeded = (NonImportedPieces_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_212_212;
      MR_String IdTypesStr_58;
      MR_String IsAre_59;
      MR_String KindKinds_60;
      MR_String ArityArities_61;
      MR_Word PossibleArityStrs_62;
      MR_Word PossibleAritiesPieces_63;
      MR_Word Var_166;
      MR_Word Var_169;
      MR_Word Var_170;
      MR_Word Var_171;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_176;
      MR_Word Var_177;
      MR_String Var_178;
      MR_Word Var_179;
      MR_Word Var_182;
      MR_Word Var_183;
      MR_Word Var_185;
      MR_Box conv2_IsAre_59;
      MR_Box conv3_KindKinds_60;
      MR_Box conv4_ArityArities_61;

      parse_tree__module_qual__qual_errors__id_types_to_string_2_p_0(IdType_14, &IdTypesStr_58);
      TypeCtorInfo_212_212 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      conv2_IsAre_59 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_211_211, TypeCtorInfo_212_212, PossibleArities_55, ((MR_Box) ((MR_String) "is a")), ((MR_Box) ((MR_String) "are")));
      IsAre_59 = ((MR_String) conv2_IsAre_59);
      conv3_KindKinds_60 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_211_211, TypeCtorInfo_212_212, PossibleArities_55, ((MR_Box) (IdTypeStr_23)), ((MR_Box) (IdTypesStr_58)));
      KindKinds_60 = ((MR_String) conv3_KindKinds_60);
      conv4_ArityArities_61 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_211_211, TypeCtorInfo_212_212, PossibleArities_55, ((MR_Box) ((MR_String) "arity")), ((MR_Box) ((MR_String) "arities")));
      ArityArities_61 = ((MR_String) conv4_ArityArities_61);
      mercury__list__map_3_p_0(TypeCtorInfo_211_211, TypeCtorInfo_212_212, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_4[2], PossibleArities_55, &PossibleArityStrs_62);
      PossibleAritiesPieces_63 = parse_tree__error_util__list_to_pieces_1_f_0(PossibleArityStrs_62);
      {
        Var_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_170, 1) = ((MR_Box) (IsAre_59));
      }
      {
        Var_172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_172, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_172, 1) = ((MR_Box) (KindKinds_60));
      }
      Var_178 = mdbcomp__sym_name__unqualify_name_1_f_0(IdSymName_24);
      {
        Var_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_177, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_177, 1) = ((MR_Box) (Var_178));
      }
      {
        Var_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_183, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_183, 1) = ((MR_Box) (ArityArities_61));
      }
      {
        Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (Var_183));
        MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[80])));
        MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_182));
      }
      {
        Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (Var_177));
        MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) (Var_179));
      }
      {
        Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[79])));
        MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) (Var_176));
      }
      {
        Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (Var_172));
        MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_173));
      }
      {
        Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (Var_170));
        MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) (Var_171));
      }
      {
        Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[78])));
        MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_169));
      }
      Var_185 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, PossibleAritiesPieces_63, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[18]));
      OtherArityPieces_64 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, Var_166, Var_185);
    }
    else
      OtherArityPieces_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    Var_196 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, NonImportedPieces_54, OtherArityPieces_64);
    Var_195 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, QualPieces_43, Var_196);
    Var_194 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, OtherIntPieces_35, Var_195);
    Var_193 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, ThisIntPieces_34, Var_194);
    Var_192 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, UndefPieces_33, Var_193);
    AllPieces_65 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_205_205, InPieces_22, Var_192);
    {
      Var_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_198, 0) = ((MR_Box) (AllPieces_65));
    }
    {
      Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (Var_198));
      MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_66, 0) = ((MR_Box) (Context_20));
      MR_hl_field(MR_mktag(0), Msg_66, 1) = ((MR_Box) (Var_197));
    }
    {
      Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (Msg_66));
      MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_67, 2) = ((MR_Box) (Var_202));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_69 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_67));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_68));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__id_to_sym_name_and_arity_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__id_types_to_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    *HeadVar__2_2 = ((&parse_tree__module_qual__qual_errors_vector_common_2[4 + HeadVar__1_1]))->parse_tree__module_qual__qual_errors__vector_common_type_2_0__vct_2_f_0;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    *HeadVar__2_2 = ((&parse_tree__module_qual__qual_errors_vector_common_2[0 + HeadVar__1_1]))->parse_tree__module_qual__qual_errors__vector_common_type_2_0__vct_2_f_0;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(
  MR_Word ErrorContext_4,
  MR_Word * Context_5,
  MR_Word * Pieces_6)
{
  switch (MR_tag((MR_Word) ErrorContext_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtor_7;
        MR_Word Var_180;
        MR_Word Var_181;

        *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ErrorContext_4, (MR_Integer) 0)));
        TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ErrorContext_4, (MR_Integer) 1)));
        Var_181 = parse_tree__module_qual__qual_errors__wrap_type_ctor_1_f_0(TypeCtor_7);
        {
          Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (Var_181));
          MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[67])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_180));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeCtorInfo_201_201;
        MR_Word ContainingTypeCtor_8;
        MR_String FunctionSymbol_9;
        MR_Integer ArgNum_10;
        MR_Word MaybeCtorFieldName_11;
        MR_Word FieldNamePieces_12;
        MR_Word Var_157;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_162;
        MR_Word Var_165;
        MR_Word Var_168;
        MR_Word Var_169;
        MR_Word Var_171;
        MR_Word Var_172;
        MR_Word Var_175;
        MR_Word Var_176;

        *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ErrorContext_4, (MR_Integer) 0)));
        ContainingTypeCtor_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ErrorContext_4, (MR_Integer) 1)));
        FunctionSymbol_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ErrorContext_4, (MR_Integer) 2)));
        ArgNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ErrorContext_4, (MR_Integer) 3)));
        MaybeCtorFieldName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ErrorContext_4, (MR_Integer) 4)));
        if ((MaybeCtorFieldName_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          FieldNamePieces_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
        {
          MR_Word CtorFieldName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCtorFieldName_11, (MR_Integer) 0)));
          MR_Word FieldSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorFieldName_13, (MR_Integer) 0)));
          MR_Word Var_150;
          MR_Word Var_151;
          MR_String Var_152;
          MR_Word _FieldContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorFieldName_13, (MR_Integer) 1)));

          Var_152 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldSymName_14);
          {
            Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_151, 1) = ((MR_Box) (Var_152));
          }
          {
            Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
            MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[52])));
          }
          {
            FieldNamePieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FieldNamePieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[50])));
            MR_hl_field(MR_mktag(1), FieldNamePieces_12, 1) = ((MR_Box) (Var_150));
          }
        }
        TypeCtorInfo_201_201 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          Var_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_161, 1) = ((MR_Box) (ArgNum_10));
        }
        {
          Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (FunctionSymbol_9));
        }
        {
          Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
          MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[45])));
          MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_168));
        }
        {
          Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[54])));
          MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (Var_165));
        }
        {
          Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (Var_161));
          MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) (Var_162));
        }
        {
          Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[53])));
          MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (Var_160));
        }
        Var_176 = parse_tree__module_qual__qual_errors__wrap_type_ctor_1_f_0(ContainingTypeCtor_8);
        {
          Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (Var_176));
          MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[55])));
          MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_175));
        }
        Var_171 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_201_201, FieldNamePieces_12, Var_172);
        *Pieces_6 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_201_201, Var_157, Var_171);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ConstraintErrorContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ErrorContext_4, (MR_Integer) 0)));
        MR_String _Start_17;

        parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(ConstraintErrorContext_16, Context_5, &_Start_17, Pieces_6);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ClassName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            MR_Integer Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 2)));
            MR_String Start_20;
            MR_Word ConstraintErrorContextPieces_21;
            MR_Word Var_143;
            MR_Word Var_144;
            MR_Word Var_145;
            MR_Word Var_146;
            MR_Word Var_147;
            MR_Word ConstraintErrorContext_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 3)));

            parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(ConstraintErrorContext_183, Context_5, &Start_20, &ConstraintErrorContextPieces_21);
            {
              Var_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_145, 0) = ((MR_Box) (ClassName_18));
              MR_hl_field(MR_mktag(0), Var_145, 1) = ((MR_Box) (Arity_19));
            }
            {
              Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (Var_145));
            }
            {
              Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) (Start_20));
            }
            {
              Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
              MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (ConstraintErrorContextPieces_21));
            }
            {
              Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Var_144));
              MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_146));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[70])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_143));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_133;
            MR_Word Var_134;
            MR_Word Id_184;

            *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            Id_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 2)));
            Var_134 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(Id_184);
            {
              Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
              MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[58])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_133));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Id_22;
            MR_Word Var_138;
            MR_Word Var_139;

            *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            Id_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 2)));
            Var_139 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(Id_22);
            {
              Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
              MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[62])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_138));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word PredOrFunc_23;
            MR_Word SymName_24;
            MR_Integer OrigArity_25;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_String Var_126;
            MR_Word Var_127;
            MR_Word Var_128;
            MR_Word Var_129;
            MR_Integer Arity_185;
            MR_Word Id_186;

            *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 2)));
            Id_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 3)));
            SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Id_186, (MR_Integer) 0)));
            OrigArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Id_186, (MR_Integer) 1)));
            parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_23, OrigArity_25, &Arity_185);
            Var_126 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_23);
            {
              Var_125 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_125, 0) = ((MR_Box) (Var_126));
            }
            {
              Var_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (SymName_24));
              MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (Arity_185));
            }
            {
              Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (Var_129));
            }
            {
              Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
              MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
              MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[44])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_124));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word MaybePredOrFunc_26;
            MR_Word Id_192;
            MR_Word SymName_194;
            MR_Integer OrigArity_195;

            *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            MaybePredOrFunc_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 2)));
            Id_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 3)));
            SymName_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), Id_192, (MR_Integer) 0)));
            OrigArity_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Id_192, (MR_Integer) 1)));
            if ((MaybePredOrFunc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word Var_111;

              {
                Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (SymName_194));
                MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (OrigArity_195));
              }
              {
                Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (Var_111));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
                MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Pieces_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[66])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_109));
              }
            }
            else
            {
              MR_Word Var_115;
              MR_Word Var_116;
              MR_String Var_117;
              MR_Word Var_118;
              MR_Word Var_119;
              MR_Word Var_120;
              MR_Integer Arity_187;
              MR_Word PredOrFunc_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePredOrFunc_26, (MR_Integer) 0)));

              parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_188, OrigArity_195, &Arity_187);
              Var_117 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_188);
              {
                Var_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_116, 0) = ((MR_Box) (Var_117));
              }
              {
                Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (SymName_194));
                MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (Arity_187));
              }
              {
                Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Var_120));
              }
              {
                Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
                MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
                MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_118));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Pieces_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[66])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_115));
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Pragma_27;
            MR_String PragmaName_29;
            MR_Word Var_96;

            *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            Pragma_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 2)));
            switch (MR_tag((MR_Word) Pragma_27)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                PragmaName_29 = (MR_String) "foreign_decl";
                break;
              case (MR_Integer) 1:
                PragmaName_29 = (MR_String) "foreign_code";
                break;
              case (MR_Integer) 2:
                PragmaName_29 = (MR_String) "foreign_proc";
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Pragma_27, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    PragmaName_29 = (MR_String) "foreign_proc_export";
                    break;
                  case (MR_Integer) 1:
                    PragmaName_29 = (MR_String) "foreign_export_enum";
                    break;
                  case (MR_Integer) 2:
                    PragmaName_29 = (MR_String) "foreign_enum";
                    break;
                  case (MR_Integer) 3:
                    PragmaName_29 = (MR_String) "external_proc";
                    break;
                  case (MR_Integer) 4:
                    PragmaName_29 = (MR_String) "type_spec";
                    break;
                  case (MR_Integer) 5:
                    PragmaName_29 = (MR_String) "inline";
                    break;
                  case (MR_Integer) 6:
                    PragmaName_29 = (MR_String) "no_inline";
                    break;
                  case (MR_Integer) 7:
                    PragmaName_29 = (MR_String) "consider_used";
                    break;
                  case (MR_Integer) 8:
                    PragmaName_29 = (MR_String) "unused_args";
                    break;
                  case (MR_Integer) 9:
                    PragmaName_29 = (MR_String) "exceptions";
                    break;
                  case (MR_Integer) 10:
                    PragmaName_29 = (MR_String) "trailing_info";
                    break;
                  case (MR_Integer) 11:
                    PragmaName_29 = (MR_String) "mm_tabling_info";
                    break;
                  case (MR_Integer) 12:
                    PragmaName_29 = (MR_String) "obsolete";
                    break;
                  case (MR_Integer) 13:
                    PragmaName_29 = (MR_String) "no_detism_warning";
                    break;
                  case (MR_Integer) 14:
                    PragmaName_29 = (MR_String) "require_tail_recursion";
                    break;
                  case (MR_Integer) 15:
                    {
                      MR_Word PragmaInfoTabled_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Pragma_27, (MR_Integer) 1)));
                      MR_Word EvalMethod_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaInfoTabled_48, (MR_Integer) 0)));
                      MR_Word Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaInfoTabled_48, (MR_Integer) 1)));
                      MR_Word Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaInfoTabled_48, (MR_Integer) 2)));
                      MR_Word Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaInfoTabled_48, (MR_Integer) 3)));

                      PragmaName_29 = parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(EvalMethod_49);
                    }
                    break;
                  case (MR_Integer) 16:
                    PragmaName_29 = (MR_String) "fact_table";
                    break;
                  case (MR_Integer) 17:
                    PragmaName_29 = (MR_String) "oisu";
                    break;
                  case (MR_Integer) 18:
                    PragmaName_29 = (MR_String) "promise_equivalent_clauses";
                    break;
                  case (MR_Integer) 19:
                    PragmaName_29 = (MR_String) "promise_pure";
                    break;
                  case (MR_Integer) 20:
                    PragmaName_29 = (MR_String) "promise_semipure";
                    break;
                  case (MR_Integer) 21:
                    PragmaName_29 = (MR_String) "termination_info";
                    break;
                  case (MR_Integer) 22:
                    PragmaName_29 = (MR_String) "termination2_info";
                    break;
                  case (MR_Integer) 23:
                    PragmaName_29 = (MR_String) "terminates";
                    break;
                  case (MR_Integer) 24:
                    PragmaName_29 = (MR_String) "does_not_terminate";
                    break;
                  case (MR_Integer) 25:
                    PragmaName_29 = (MR_String) "check_termination";
                    break;
                  case (MR_Integer) 26:
                    PragmaName_29 = (MR_String) "mode_check_clauses";
                    break;
                  case (MR_Integer) 27:
                    PragmaName_29 = (MR_String) "structure_sharing";
                    break;
                  case (MR_Integer) 28:
                    PragmaName_29 = (MR_String) "structure_reuse";
                    break;
                  case (MR_Integer) 29:
                    PragmaName_29 = (MR_String) "foreign_import_module";
                    break;
                  case (MR_Integer) 30:
                    PragmaName_29 = (MR_String) "reserve_tag";
                    break;
                  case (MR_Integer) 31:
                    PragmaName_29 = (MR_String) "require_feature_set";
                    break;
                }
                break;
            }
            {
              Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
              MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (PragmaName_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_96));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[65])));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            *Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[61]);
          }
          break;
        case (MR_Integer) 7:
          {
            *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            *Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[49]);
          }
          break;
        case (MR_Integer) 8:
          {
            *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            *Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[69]);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Id_196;

            *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            Id_196 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 2)));
            Var_91 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(Id_196);
            {
              Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
              MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[47])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_90));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Id_197;

            *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            Id_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 2)));
            Var_86 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(Id_197);
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
              MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[59])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_85));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String Name_65;
            MR_Word Var_80;
            MR_Word Var_81;

            *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            Name_65 = ((MR_String) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 2)));
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Name_65));
            }
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[63])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_80));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_String EventName_66;
            MR_String AttrName_67;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_75;
            MR_Word Var_76;

            *Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 1)));
            EventName_66 = ((MR_String) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 2)));
            AttrName_67 = ((MR_String) (MR_hl_field(MR_mktag(3), ErrorContext_4, (MR_Integer) 3)));
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (AttrName_67));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (EventName_66));
            }
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[57])));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[56])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_70));
            }
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_5;

    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_5, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), Var_5, 1) = ((MR_Box) (Arity_4));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_type_ctor_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_5;

    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_5, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), Var_5, 1) = ((MR_Box) (Arity_4));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    }
    return HeadVar__2_2;
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
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;

        *Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstraintErrorContext_5, (MR_Integer) 0)));
        ClassName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstraintErrorContext_5, (MR_Integer) 1)));
        Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConstraintErrorContext_5, (MR_Integer) 2)));
        *Start_7 = (MR_String) "in";
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (ClassName_9));
          MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (Arity_10));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[41])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_56));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredOrFunc_11;
        MR_String MethodName_12;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;

        *Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstraintErrorContext_5, (MR_Integer) 0)));
        PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstraintErrorContext_5, (MR_Integer) 1)));
        MethodName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ConstraintErrorContext_5, (MR_Integer) 2)));
        *Start_7 = (MR_String) "on";
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
          MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (PredOrFunc_11));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (MethodName_12));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[42])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_49));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ArgTypes_13;
        MR_Integer NumArgTypes_14;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word ClassName_60;

        *Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ConstraintErrorContext_5, (MR_Integer) 0)));
        ClassName_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), ConstraintErrorContext_5, (MR_Integer) 1)));
        ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ConstraintErrorContext_5, (MR_Integer) 2)));
        *Start_7 = (MR_String) "on";
        mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes_13, &NumArgTypes_14);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (ClassName_60));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (NumArgTypes_14));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Pieces_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[43])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_43));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeCtor_15;
            MR_String FunctionSymbol_16;
            MR_Word TypeCtorSymName_17;
            MR_Integer TypeCtorArity_18;
            MR_Word Var_32;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_39;

            *Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 1)));
            TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 2)));
            FunctionSymbol_16 = ((MR_String) (MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 3)));
            *Start_7 = (MR_String) "on";
            TypeCtorSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0)));
            TypeCtorArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1)));
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (FunctionSymbol_16));
            }
            {
              Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (TypeCtorSymName_17));
              MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (TypeCtorArity_18));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
            }
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[46])));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
            }
            {
              Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[45])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_32));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SymName_19;
            MR_Integer OrigArity_20;
            MR_Word Var_23;
            MR_Word Var_24;
            MR_String Var_25;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_28;
            MR_Integer Arity_61;
            MR_Word PredOrFunc_62;

            *Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 1)));
            PredOrFunc_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 2)));
            SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 3)));
            OrigArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConstraintErrorContext_5, (MR_Integer) 4)));
            *Start_7 = (MR_String) "on";
            parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_62, OrigArity_20, &Arity_61);
            Var_25 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_62);
            {
              Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (Var_25));
            }
            {
              Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (SymName_19));
              MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Arity_61));
            }
            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Var_28));
            }
            {
              Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
              MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
              MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Pieces_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[44])));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_23));
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
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ModuleNames_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(HeadVar__1_1, ModuleName_6);
      if (succeeded)
        HeadVar__3_3 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = ModuleNames_7;

        // direct tailcall eliminated
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
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
