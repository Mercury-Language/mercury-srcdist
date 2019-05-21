/*
** Automatically generated from `module_qual.qual_errors.m'
** by the Mercury compiler,
** version rotd-2017-07-15
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


/* :- module parse_tree.module_qual.qual_errors. */
/* :- implementation. */

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

static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0_10001(
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0_10001(
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_1,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0_10001(
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0_10001(
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_1,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_3);

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(
  MR_Word parse_tree__module_qual__qual_errors__SymName_3);

static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_redundant_import_context_3_p_0(
  MR_Word parse_tree__module_qual__qual_errors__ImportedModuleName_4,
  MR_Word parse_tree__module_qual__qual_errors__Context_5,
  MR_Word * parse_tree__module_qual__qual_errors__Msg_6);

static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0_1(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_3(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_2(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_1(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1);

static void MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_3(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_2(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_1(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__id_to_sym_name_and_arity_1_f_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1);

static void MR_CALL 
parse_tree__module_qual__qual_errors__id_types_to_string_2_p_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
  MR_String * parse_tree__module_qual__qual_errors__HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
  MR_String * parse_tree__module_qual__qual_errors__HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_4,
  MR_Word * parse_tree__module_qual__qual_errors__Context_5,
  MR_Word * parse_tree__module_qual__qual_errors__Pieces_6);

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_id_1_f_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1);

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_type_ctor_1_f_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1);

static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(
  MR_Word parse_tree__module_qual__qual_errors__ConstraintErrorContext_5,
  MR_Word * parse_tree__module_qual__qual_errors__Context_6,
  MR_String * parse_tree__module_qual__qual_errors__Start_7,
  MR_Word * parse_tree__module_qual__qual_errors__Pieces_8);

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__module_name_matches_some_2_f_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2);


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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_constraint_error_context_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_constraint_error_context_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__type_ctor_info_mq_constraint_error_context_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_2 = {
  (MR_String) "mqec_typeclass_constraint_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_4[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_4 = {
  (MR_String) "mqec_inst",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_5[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_5 = {
  (MR_String) "mqec_mode",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_6,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_7,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_type_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_8 = {
  (MR_String) "mqec_pragma",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_8,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_9 = {
  (MR_String) "mqec_lambda_expr",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_9,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_10 = {
  (MR_String) "mqec_clause_mode_annotation",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_10,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_11 = {
  (MR_String) "mqec_type_qual",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_11,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_12 = {
  (MR_String) "mqec_class",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 12,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_12,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_13 = {
  (MR_String) "mqec_instance",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 13,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_13,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_functor_desc_mq_error_context_0_14 = {
  (MR_String) "mqec_mutable",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 14,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_14,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 15,
  parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__field_types_mq_error_context_0_15,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__qual_errors__parse_tree__module_qual__qual_errors__du_stag_ordered_mq_error_context_0_2
  },
  {
    (MR_Integer) 13,
    mercury__private_builtin__MR_SECTAG_REMOTE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0_10001(
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

    {
      parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_2));
    }
    return parse_tree__module_qual__qual_errors__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0_10001(
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_1,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__qual_errors__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&parse_tree__module_qual__qual_errors__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_3));
    }
    *parse_tree__module_qual__qual_errors__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0_10001(
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

    {
      parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_2));
    }
    return parse_tree__module_qual__qual_errors__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0_10001(
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_1,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_qual__qual_errors__conv0_HeadVar__1_1;

    {
      parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0(&parse_tree__module_qual__qual_errors__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_3));
    }
    *parse_tree__module_qual__qual_errors__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_error_context_0_0(
  MR_Word * parse_tree__module_qual__qual_errors__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Integer parse_tree__module_qual__qual_errors__CastX_96 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__qual_errors__CastY_97 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__3_3;

    parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__CastX_96 == parse_tree__module_qual__qual_errors__CastY_97);
    if (parse_tree__module_qual__qual_errors__succeeded)
      *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer parse_tree__module_qual__qual_errors__Var_4;
        MR_Integer parse_tree__module_qual__qual_errors__Var_5;

        {
          parse_tree__module_qual__qual_errors____Index____mq_error_context_0_0(parse_tree__module_qual__qual_errors__HeadVar__2_2, &parse_tree__module_qual__qual_errors__Var_4);
        }
        {
          parse_tree__module_qual__qual_errors____Index____mq_error_context_0_0(parse_tree__module_qual__qual_errors__HeadVar__3_3, &parse_tree__module_qual__qual_errors__Var_5);
        }
        parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_4 < parse_tree__module_qual__qual_errors__Var_5);
        if (parse_tree__module_qual__qual_errors__succeeded)
          *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_4 > parse_tree__module_qual__qual_errors__Var_5);
            if (parse_tree__module_qual__qual_errors__succeeded)
              *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Word parse_tree__module_qual__qual_errors__Var_6;

                switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word parse_tree__module_qual__qual_errors__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word parse_tree__module_qual__qual_errors__ArgY1_8;
                      MR_Word parse_tree__module_qual__qual_errors__ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                      MR_Word parse_tree__module_qual__qual_errors__ArgY2_10;
                      MR_Word parse_tree__module_qual__qual_errors__Var_11;

                      parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0)));
                      if (parse_tree__module_qual__qual_errors__succeeded)
                        {
                          parse_tree__module_qual__qual_errors__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)));
                          parse_tree__module_qual__qual_errors__ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                          {
                            mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_11, parse_tree__module_qual__qual_errors__ArgX1_7, parse_tree__module_qual__qual_errors__ArgY1_8);
                          }
                          parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_11 == (MR_Integer) 0);
                          parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_11;
                          else
                            {
                              parse_tree__prog_data____Compare____type_ctor_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX2_9, parse_tree__module_qual__qual_errors__ArgY2_10);
                            }
                          parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__module_qual__qual_errors__ArgX1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word parse_tree__module_qual__qual_errors__ArgY1_13;
                      MR_Word parse_tree__module_qual__qual_errors__ArgX2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                      MR_Word parse_tree__module_qual__qual_errors__ArgY2_15;
                      MR_String parse_tree__module_qual__qual_errors__ArgX3_16 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                      MR_String parse_tree__module_qual__qual_errors__ArgY3_17;
                      MR_Integer parse_tree__module_qual__qual_errors__ArgX4_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                      MR_Integer parse_tree__module_qual__qual_errors__ArgY4_19;
                      MR_Word parse_tree__module_qual__qual_errors__ArgX5_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 4)));
                      MR_Word parse_tree__module_qual__qual_errors__ArgY5_21;
                      MR_Word parse_tree__module_qual__qual_errors__Var_22;

                      parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__module_qual__qual_errors__succeeded)
                        {
                          parse_tree__module_qual__qual_errors__ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)));
                          parse_tree__module_qual__qual_errors__ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                          parse_tree__module_qual__qual_errors__ArgY3_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                          parse_tree__module_qual__qual_errors__ArgY4_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
                          parse_tree__module_qual__qual_errors__ArgY5_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 4)));
                          {
                            mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_22, parse_tree__module_qual__qual_errors__ArgX1_12, parse_tree__module_qual__qual_errors__ArgY1_13);
                          }
                          parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_22 == (MR_Integer) 0);
                          parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_22;
                          else
                            {
                              MR_Word parse_tree__module_qual__qual_errors__Var_23;

                              {
                                parse_tree__prog_data____Compare____type_ctor_0_0(&parse_tree__module_qual__qual_errors__Var_23, parse_tree__module_qual__qual_errors__ArgX2_14, parse_tree__module_qual__qual_errors__ArgY2_15);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_23 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_23;
                              else
                                {
                                  MR_Word parse_tree__module_qual__qual_errors__Var_24;

                                  {
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__module_qual__qual_errors__Var_24, parse_tree__module_qual__qual_errors__ArgX3_16, parse_tree__module_qual__qual_errors__ArgY3_17);
                                  }
                                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_24 == (MR_Integer) 0);
                                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                                  if (parse_tree__module_qual__qual_errors__succeeded)
                                    parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_24;
                                  else
                                    {
                                      MR_Word parse_tree__module_qual__qual_errors__Var_25;

                                      {
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__qual_errors__Var_25, parse_tree__module_qual__qual_errors__ArgX4_18, parse_tree__module_qual__qual_errors__ArgY4_19);
                                      }
                                      parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_25 == (MR_Integer) 0);
                                      parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                                      if (parse_tree__module_qual__qual_errors__succeeded)
                                        parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_25;
                                      else
                                        {
                                          {
                                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[1], &parse_tree__module_qual__qual_errors__Var_6, ((MR_Box) (parse_tree__module_qual__qual_errors__ArgX5_20)), ((MR_Box) (parse_tree__module_qual__qual_errors__ArgY5_21)));
                                          }
                                        }
                                    }
                                }
                            }
                          parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word parse_tree__module_qual__qual_errors__ArgX1_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Word parse_tree__module_qual__qual_errors__ArgY1_27;

                      parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                      if (parse_tree__module_qual__qual_errors__succeeded)
                        {
                          parse_tree__module_qual__qual_errors__ArgY1_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)));
                          {
                            parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX1_26, parse_tree__module_qual__qual_errors__ArgY1_27);
                          }
                          parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_29;
                          MR_Integer parse_tree__module_qual__qual_errors__ArgX2_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Integer parse_tree__module_qual__qual_errors__ArgY2_31;
                          MR_Word parse_tree__module_qual__qual_errors__ArgX3_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY3_33;
                          MR_Word parse_tree__module_qual__qual_errors__Var_34;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              parse_tree__module_qual__qual_errors__ArgY2_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                              parse_tree__module_qual__qual_errors__ArgY3_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
                              {
                                mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_qual__qual_errors__Var_34, parse_tree__module_qual__qual_errors__ArgX1_28, parse_tree__module_qual__qual_errors__ArgY1_29);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_34 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_34;
                              else
                                {
                                  MR_Word parse_tree__module_qual__qual_errors__Var_35;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__qual_errors__Var_35, parse_tree__module_qual__qual_errors__ArgX2_30, parse_tree__module_qual__qual_errors__ArgY2_31);
                                  }
                                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_35 == (MR_Integer) 0);
                                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                                  if (parse_tree__module_qual__qual_errors__succeeded)
                                    parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_35;
                                  else
                                    {
                                      parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX3_32, parse_tree__module_qual__qual_errors__ArgY3_33);
                                    }
                                }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_37;
                          MR_Word parse_tree__module_qual__qual_errors__ArgX2_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY2_39;
                          MR_Word parse_tree__module_qual__qual_errors__Var_40;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              parse_tree__module_qual__qual_errors__ArgY2_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                              {
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_40, parse_tree__module_qual__qual_errors__ArgX1_36, parse_tree__module_qual__qual_errors__ArgY1_37);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_40 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_40;
                              else
                                {
                                  parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX2_38, parse_tree__module_qual__qual_errors__ArgY2_39);
                                }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_42;
                          MR_Word parse_tree__module_qual__qual_errors__ArgX2_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY2_44;
                          MR_Word parse_tree__module_qual__qual_errors__Var_45;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              parse_tree__module_qual__qual_errors__ArgY2_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                              {
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_45, parse_tree__module_qual__qual_errors__ArgX1_41, parse_tree__module_qual__qual_errors__ArgY1_42);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_45 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_45;
                              else
                                {
                                  parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX2_43, parse_tree__module_qual__qual_errors__ArgY2_44);
                                }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_47;
                          MR_Word parse_tree__module_qual__qual_errors__ArgX2_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY2_49;
                          MR_Word parse_tree__module_qual__qual_errors__ArgX3_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY3_51;
                          MR_Word parse_tree__module_qual__qual_errors__Var_52;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              parse_tree__module_qual__qual_errors__ArgY2_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                              parse_tree__module_qual__qual_errors__ArgY3_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
                              {
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_52, parse_tree__module_qual__qual_errors__ArgX1_46, parse_tree__module_qual__qual_errors__ArgY1_47);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_52 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_52;
                              else
                                {
                                  MR_Word parse_tree__module_qual__qual_errors__Var_53;
                                  MR_Integer parse_tree__module_qual__qual_errors__Var_133 = (MR_Integer) parse_tree__module_qual__qual_errors__ArgX2_48;
                                  MR_Integer parse_tree__module_qual__qual_errors__Var_134 = (MR_Integer) parse_tree__module_qual__qual_errors__ArgY2_49;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__qual_errors__Var_53, parse_tree__module_qual__qual_errors__Var_133, parse_tree__module_qual__qual_errors__Var_134);
                                  }
                                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_53 == (MR_Integer) 0);
                                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                                  if (parse_tree__module_qual__qual_errors__succeeded)
                                    parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_53;
                                  else
                                    {
                                      parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX3_50, parse_tree__module_qual__qual_errors__ArgY3_51);
                                    }
                                }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_55;
                          MR_Word parse_tree__module_qual__qual_errors__ArgX2_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY2_57;
                          MR_Word parse_tree__module_qual__qual_errors__ArgX3_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY3_59;
                          MR_Word parse_tree__module_qual__qual_errors__Var_60;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              parse_tree__module_qual__qual_errors__ArgY2_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                              parse_tree__module_qual__qual_errors__ArgY3_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
                              {
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_60, parse_tree__module_qual__qual_errors__ArgX1_54, parse_tree__module_qual__qual_errors__ArgY1_55);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_60 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_60;
                              else
                                {
                                  MR_Word parse_tree__module_qual__qual_errors__Var_61;

                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[2], &parse_tree__module_qual__qual_errors__Var_61, ((MR_Box) (parse_tree__module_qual__qual_errors__ArgX2_56)), ((MR_Box) (parse_tree__module_qual__qual_errors__ArgY2_57)));
                                  }
                                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_61 == (MR_Integer) 0);
                                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                                  if (parse_tree__module_qual__qual_errors__succeeded)
                                    parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_61;
                                  else
                                    {
                                      parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX3_58, parse_tree__module_qual__qual_errors__ArgY3_59);
                                    }
                                }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_63;
                          MR_Word parse_tree__module_qual__qual_errors__ArgX2_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY2_65;
                          MR_Word parse_tree__module_qual__qual_errors__Var_66;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              parse_tree__module_qual__qual_errors__ArgY2_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                              {
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_66, parse_tree__module_qual__qual_errors__ArgX1_62, parse_tree__module_qual__qual_errors__ArgY1_63);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_66 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_66;
                              else
                                {
                                  parse_tree__prog_item____Compare____pragma_type_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX2_64, parse_tree__module_qual__qual_errors__ArgY2_65);
                                }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_68;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX1_67, parse_tree__module_qual__qual_errors__ArgY1_68);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_70;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX1_69, parse_tree__module_qual__qual_errors__ArgY1_70);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_72;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX1_71, parse_tree__module_qual__qual_errors__ArgY1_72);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_74;
                          MR_Word parse_tree__module_qual__qual_errors__ArgX2_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY2_76;
                          MR_Word parse_tree__module_qual__qual_errors__Var_77;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              parse_tree__module_qual__qual_errors__ArgY2_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                              {
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_77, parse_tree__module_qual__qual_errors__ArgX1_73, parse_tree__module_qual__qual_errors__ArgY1_74);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_77 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_77;
                              else
                                {
                                  parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX2_75, parse_tree__module_qual__qual_errors__ArgY2_76);
                                }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_79;
                          MR_Word parse_tree__module_qual__qual_errors__ArgX2_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY2_81;
                          MR_Word parse_tree__module_qual__qual_errors__Var_82;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              parse_tree__module_qual__qual_errors__ArgY2_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                              {
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_82, parse_tree__module_qual__qual_errors__ArgX1_78, parse_tree__module_qual__qual_errors__ArgY1_79);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_82 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_82;
                              else
                                {
                                  parse_tree__module_qual__id_set____Compare____mq_id_0_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX2_80, parse_tree__module_qual__qual_errors__ArgY2_81);
                                }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_84;
                          MR_String parse_tree__module_qual__qual_errors__ArgX2_85 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                          MR_String parse_tree__module_qual__qual_errors__ArgY2_86;
                          MR_Word parse_tree__module_qual__qual_errors__Var_87;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              parse_tree__module_qual__qual_errors__ArgY2_86 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                              {
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_87, parse_tree__module_qual__qual_errors__ArgX1_83, parse_tree__module_qual__qual_errors__ArgY1_84);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_87 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_87;
                              else
                                {
                                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX2_85, parse_tree__module_qual__qual_errors__ArgY2_86);
                                }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgX1_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_89;
                          MR_String parse_tree__module_qual__qual_errors__ArgX2_90 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                          MR_String parse_tree__module_qual__qual_errors__ArgY2_91;
                          MR_String parse_tree__module_qual__qual_errors__ArgX3_92 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                          MR_String parse_tree__module_qual__qual_errors__ArgY3_93;
                          MR_Word parse_tree__module_qual__qual_errors__Var_94;

                          parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            {
                              parse_tree__module_qual__qual_errors__ArgY1_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                              parse_tree__module_qual__qual_errors__ArgY2_91 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                              parse_tree__module_qual__qual_errors__ArgY3_93 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
                              {
                                mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_94, parse_tree__module_qual__qual_errors__ArgX1_88, parse_tree__module_qual__qual_errors__ArgY1_89);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_94 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_94;
                              else
                                {
                                  MR_Word parse_tree__module_qual__qual_errors__Var_95;

                                  {
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__module_qual__qual_errors__Var_95, parse_tree__module_qual__qual_errors__ArgX2_90, parse_tree__module_qual__qual_errors__ArgY2_91);
                                  }
                                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_95 == (MR_Integer) 0);
                                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                                  if (parse_tree__module_qual__qual_errors__succeeded)
                                    parse_tree__module_qual__qual_errors__Var_6 = parse_tree__module_qual__qual_errors__Var_95;
                                  else
                                    {
                                      mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__module_qual__qual_errors__Var_6, parse_tree__module_qual__qual_errors__ArgX3_92, parse_tree__module_qual__qual_errors__ArgY3_93);
                                    }
                                }
                              parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
                            }
                        }
                        break;
                    }
                    break;
                }
                if (parse_tree__module_qual__qual_errors__succeeded)
                  *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__Var_6;
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
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
  MR_Integer * parse_tree__module_qual__qual_errors__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

    switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 3;
            break;
          case (MR_Integer) 1:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 4;
            break;
          case (MR_Integer) 2:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 5;
            break;
          case (MR_Integer) 3:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 6;
            break;
          case (MR_Integer) 4:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 7;
            break;
          case (MR_Integer) 5:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 8;
            break;
          case (MR_Integer) 6:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 9;
            break;
          case (MR_Integer) 7:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 10;
            break;
          case (MR_Integer) 8:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 11;
            break;
          case (MR_Integer) 9:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 12;
            break;
          case (MR_Integer) 10:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 13;
            break;
          case (MR_Integer) 11:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 14;
            break;
          case (MR_Integer) 12:
            *parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Integer) 15;
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_error_context_0_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Integer parse_tree__module_qual__qual_errors__CastX_73 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__1_1;
    MR_Integer parse_tree__module_qual__qual_errors__CastY_74 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__2_2;

    parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__CastX_73 == parse_tree__module_qual__qual_errors__CastY_74);
    if (parse_tree__module_qual__qual_errors__succeeded)
      parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__module_qual__qual_errors__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY1_4;
            MR_Word parse_tree__module_qual__qual_errors__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY2_6;

            parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__module_qual__qual_errors__succeeded)
              {
                parse_tree__module_qual__qual_errors__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__module_qual__qual_errors__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                {
                  parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_3, parse_tree__module_qual__qual_errors__ArgY1_4);
                }
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(parse_tree__module_qual__qual_errors__ArgX2_5, parse_tree__module_qual__qual_errors__ArgY2_6);
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__module_qual__qual_errors__TypeInfo_80_80;
            MR_Word parse_tree__module_qual__qual_errors__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY1_8;
            MR_Word parse_tree__module_qual__qual_errors__ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY2_10;
            MR_String parse_tree__module_qual__qual_errors__ArgX3_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
            MR_String parse_tree__module_qual__qual_errors__ArgY3_12;
            MR_Integer parse_tree__module_qual__qual_errors__ArgX4_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
            MR_Integer parse_tree__module_qual__qual_errors__ArgY4_14;
            MR_Word parse_tree__module_qual__qual_errors__ArgX5_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 4)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY5_16;

            parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__module_qual__qual_errors__succeeded)
              {
                parse_tree__module_qual__qual_errors__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__module_qual__qual_errors__ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                parse_tree__module_qual__qual_errors__ArgY3_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                parse_tree__module_qual__qual_errors__ArgY4_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                parse_tree__module_qual__qual_errors__ArgY5_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 4)));
                {
                  parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_7, parse_tree__module_qual__qual_errors__ArgY1_8);
                }
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    {
                      parse_tree__module_qual__qual_errors__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(parse_tree__module_qual__qual_errors__ArgX2_9, parse_tree__module_qual__qual_errors__ArgY2_10);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        parse_tree__module_qual__qual_errors__succeeded = (strcmp(parse_tree__module_qual__qual_errors__ArgX3_11, parse_tree__module_qual__qual_errors__ArgY3_12) == 0);
                        if (parse_tree__module_qual__qual_errors__succeeded)
                          {
                            parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__ArgX4_13 == parse_tree__module_qual__qual_errors__ArgY4_14);
                            if (parse_tree__module_qual__qual_errors__succeeded)
                              {
                                parse_tree__module_qual__qual_errors__TypeInfo_80_80 = (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[1];
                                {
                                  parse_tree__module_qual__qual_errors__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__qual_errors__TypeInfo_80_80, ((MR_Box) (parse_tree__module_qual__qual_errors__ArgX5_15)), ((MR_Box) (parse_tree__module_qual__qual_errors__ArgY5_16)));
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
            MR_Word parse_tree__module_qual__qual_errors__ArgX1_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY1_18;

            parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__module_qual__qual_errors__succeeded)
              {
                parse_tree__module_qual__qual_errors__ArgY1_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(parse_tree__module_qual__qual_errors__ArgX1_17, parse_tree__module_qual__qual_errors__ArgY1_18);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_20;
                MR_Integer parse_tree__module_qual__qual_errors__ArgX2_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer parse_tree__module_qual__qual_errors__ArgY2_22;
                MR_Word parse_tree__module_qual__qual_errors__ArgX3_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY3_24;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__module_qual__qual_errors__ArgY2_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                    parse_tree__module_qual__qual_errors__ArgY3_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__qual_errors__ArgX1_19, parse_tree__module_qual__qual_errors__ArgY1_20);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__ArgX2_21 == parse_tree__module_qual__qual_errors__ArgY2_22);
                        if (parse_tree__module_qual__qual_errors__succeeded)
                          {
                            parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(parse_tree__module_qual__qual_errors__ArgX3_23, parse_tree__module_qual__qual_errors__ArgY3_24);
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_26;
                MR_Word parse_tree__module_qual__qual_errors__ArgX2_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY2_28;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__module_qual__qual_errors__ArgY2_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_25, parse_tree__module_qual__qual_errors__ArgY1_26);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(parse_tree__module_qual__qual_errors__ArgX2_27, parse_tree__module_qual__qual_errors__ArgY2_28);
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_30;
                MR_Word parse_tree__module_qual__qual_errors__ArgX2_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY2_32;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__module_qual__qual_errors__ArgY2_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_29, parse_tree__module_qual__qual_errors__ArgY1_30);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(parse_tree__module_qual__qual_errors__ArgX2_31, parse_tree__module_qual__qual_errors__ArgY2_32);
                      }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_34;
                MR_Word parse_tree__module_qual__qual_errors__ArgX2_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY2_36;
                MR_Word parse_tree__module_qual__qual_errors__ArgX3_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY3_38;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__module_qual__qual_errors__ArgY2_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                    parse_tree__module_qual__qual_errors__ArgY3_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_33, parse_tree__module_qual__qual_errors__ArgY1_34);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__ArgX2_35 == parse_tree__module_qual__qual_errors__ArgY2_36);
                        if (parse_tree__module_qual__qual_errors__succeeded)
                          {
                            parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(parse_tree__module_qual__qual_errors__ArgX3_37, parse_tree__module_qual__qual_errors__ArgY3_38);
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word parse_tree__module_qual__qual_errors__TypeInfo_95_95;
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_40;
                MR_Word parse_tree__module_qual__qual_errors__ArgX2_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY2_42;
                MR_Word parse_tree__module_qual__qual_errors__ArgX3_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY3_44;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__module_qual__qual_errors__ArgY2_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                    parse_tree__module_qual__qual_errors__ArgY3_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_39, parse_tree__module_qual__qual_errors__ArgY1_40);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        parse_tree__module_qual__qual_errors__TypeInfo_95_95 = (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[2];
                        {
                          parse_tree__module_qual__qual_errors__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__qual_errors__TypeInfo_95_95, ((MR_Box) (parse_tree__module_qual__qual_errors__ArgX2_41)), ((MR_Box) (parse_tree__module_qual__qual_errors__ArgY2_42)));
                        }
                        if (parse_tree__module_qual__qual_errors__succeeded)
                          {
                            parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(parse_tree__module_qual__qual_errors__ArgX3_43, parse_tree__module_qual__qual_errors__ArgY3_44);
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_46;
                MR_Word parse_tree__module_qual__qual_errors__ArgX2_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY2_48;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__module_qual__qual_errors__ArgY2_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_45, parse_tree__module_qual__qual_errors__ArgY1_46);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        parse_tree__module_qual__qual_errors__succeeded = parse_tree__prog_item____Unify____pragma_type_0_0(parse_tree__module_qual__qual_errors__ArgX2_47, parse_tree__module_qual__qual_errors__ArgY2_48);
                      }
                  }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_50;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_49, parse_tree__module_qual__qual_errors__ArgY1_50);
                    }
                  }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_52;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_51, parse_tree__module_qual__qual_errors__ArgY1_52);
                    }
                  }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_54;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_53, parse_tree__module_qual__qual_errors__ArgY1_54);
                    }
                  }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_56;
                MR_Word parse_tree__module_qual__qual_errors__ArgX2_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY2_58;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__module_qual__qual_errors__ArgY2_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_55, parse_tree__module_qual__qual_errors__ArgY1_56);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(parse_tree__module_qual__qual_errors__ArgX2_57, parse_tree__module_qual__qual_errors__ArgY2_58);
                      }
                  }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_60;
                MR_Word parse_tree__module_qual__qual_errors__ArgX2_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY2_62;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__module_qual__qual_errors__ArgY2_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_59, parse_tree__module_qual__qual_errors__ArgY1_60);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        parse_tree__module_qual__qual_errors__succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(parse_tree__module_qual__qual_errors__ArgX2_61, parse_tree__module_qual__qual_errors__ArgY2_62);
                      }
                  }
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_64;
                MR_String parse_tree__module_qual__qual_errors__ArgX2_65 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_String parse_tree__module_qual__qual_errors__ArgY2_66;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__module_qual__qual_errors__ArgY2_66 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_63, parse_tree__module_qual__qual_errors__ArgY1_64);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      parse_tree__module_qual__qual_errors__succeeded = (strcmp(parse_tree__module_qual__qual_errors__ArgX2_65, parse_tree__module_qual__qual_errors__ArgY2_66) == 0);
                  }
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_68;
                MR_String parse_tree__module_qual__qual_errors__ArgX2_69 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_String parse_tree__module_qual__qual_errors__ArgY2_70;
                MR_String parse_tree__module_qual__qual_errors__ArgX3_71 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
                MR_String parse_tree__module_qual__qual_errors__ArgY3_72;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__module_qual__qual_errors__ArgY2_70 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                    parse_tree__module_qual__qual_errors__ArgY3_72 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_67, parse_tree__module_qual__qual_errors__ArgY1_68);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        parse_tree__module_qual__qual_errors__succeeded = (strcmp(parse_tree__module_qual__qual_errors__ArgX2_69, parse_tree__module_qual__qual_errors__ArgY2_70) == 0);
                        if (parse_tree__module_qual__qual_errors__succeeded)
                          parse_tree__module_qual__qual_errors__succeeded = (strcmp(parse_tree__module_qual__qual_errors__ArgX3_71, parse_tree__module_qual__qual_errors__ArgY3_72) == 0);
                      }
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__module_qual__qual_errors__succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__qual_errors____Compare____mq_constraint_error_context_0_0(
  MR_Word * parse_tree__module_qual__qual_errors__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Integer parse_tree__module_qual__qual_errors__CastX_175 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__2_2;
    MR_Integer parse_tree__module_qual__qual_errors__CastY_176 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__3_3;

    parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__CastX_175 == parse_tree__module_qual__qual_errors__CastY_176);
    if (parse_tree__module_qual__qual_errors__succeeded)
      *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer parse_tree__module_qual__qual_errors__Var_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word parse_tree__module_qual__qual_errors__Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__qual_errors__Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__module_qual__qual_errors__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word parse_tree__module_qual__qual_errors__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer parse_tree__module_qual__qual_errors__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__qual_errors__Var_10;

                  {
                    mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_10, parse_tree__module_qual__qual_errors__Var_195, parse_tree__module_qual__qual_errors__ArgY1_5);
                  }
                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_10 == (MR_Integer) 0);
                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                  if (parse_tree__module_qual__qual_errors__succeeded)
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__Var_10;
                  else
                    {
                      MR_Word parse_tree__module_qual__qual_errors__Var_11;

                      {
                        mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_qual__qual_errors__Var_11, parse_tree__module_qual__qual_errors__Var_194, parse_tree__module_qual__qual_errors__ArgY2_7);
                      }
                      parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_11 == (MR_Integer) 0);
                      parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                      if (parse_tree__module_qual__qual_errors__succeeded)
                        *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__Var_11;
                      else
                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__qual_errors__HeadVar__1_1, parse_tree__module_qual__qual_errors__Var_193, parse_tree__module_qual__qual_errors__ArgY3_9);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String parse_tree__module_qual__qual_errors__Var_196 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word parse_tree__module_qual__qual_errors__Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__qual_errors__Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__module_qual__qual_errors__ArgY1_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word parse_tree__module_qual__qual_errors__ArgY2_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                  MR_String parse_tree__module_qual__qual_errors__ArgY3_48 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__qual_errors__Var_49;

                  {
                    mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_49, parse_tree__module_qual__qual_errors__Var_198, parse_tree__module_qual__qual_errors__ArgY1_44);
                  }
                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_49 == (MR_Integer) 0);
                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                  if (parse_tree__module_qual__qual_errors__succeeded)
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__Var_49;
                  else
                    {
                      MR_Word parse_tree__module_qual__qual_errors__Var_50;
                      MR_Integer parse_tree__module_qual__qual_errors__Var_209 = (MR_Integer) parse_tree__module_qual__qual_errors__Var_197;
                      MR_Integer parse_tree__module_qual__qual_errors__Var_210 = (MR_Integer) parse_tree__module_qual__qual_errors__ArgY2_46;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__qual_errors__Var_50, parse_tree__module_qual__qual_errors__Var_209, parse_tree__module_qual__qual_errors__Var_210);
                      }
                      parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_50 == (MR_Integer) 0);
                      parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                      if (parse_tree__module_qual__qual_errors__succeeded)
                        *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__Var_50;
                      else
                        {
                          mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__module_qual__qual_errors__HeadVar__1_1, parse_tree__module_qual__qual_errors__Var_196, parse_tree__module_qual__qual_errors__ArgY3_48);
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__module_qual__qual_errors__Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word parse_tree__module_qual__qual_errors__Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__qual_errors__Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__module_qual__qual_errors__ArgY1_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word parse_tree__module_qual__qual_errors__ArgY2_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word parse_tree__module_qual__qual_errors__ArgY3_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word parse_tree__module_qual__qual_errors__Var_88;

                  {
                    mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_88, parse_tree__module_qual__qual_errors__Var_201, parse_tree__module_qual__qual_errors__ArgY1_83);
                  }
                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_88 == (MR_Integer) 0);
                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                  if (parse_tree__module_qual__qual_errors__succeeded)
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__Var_88;
                  else
                    {
                      MR_Word parse_tree__module_qual__qual_errors__Var_89;

                      {
                        mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_qual__qual_errors__Var_89, parse_tree__module_qual__qual_errors__Var_200, parse_tree__module_qual__qual_errors__ArgY2_85);
                      }
                      parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_89 == (MR_Integer) 0);
                      parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                      if (parse_tree__module_qual__qual_errors__succeeded)
                        *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__Var_89;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[0], parse_tree__module_qual__qual_errors__HeadVar__1_1, ((MR_Box) (parse_tree__module_qual__qual_errors__Var_199)), ((MR_Box) (parse_tree__module_qual__qual_errors__ArgY3_87)));
                          }
                        }
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String parse_tree__module_qual__qual_errors__Var_206 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word parse_tree__module_qual__qual_errors__Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word parse_tree__module_qual__qual_errors__Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY2_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                          MR_String parse_tree__module_qual__qual_errors__ArgY3_126 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word parse_tree__module_qual__qual_errors__Var_127;

                          {
                            mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_127, parse_tree__module_qual__qual_errors__Var_208, parse_tree__module_qual__qual_errors__ArgY1_122);
                          }
                          parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_127 == (MR_Integer) 0);
                          parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__Var_127;
                          else
                            {
                              MR_Word parse_tree__module_qual__qual_errors__Var_128;

                              {
                                parse_tree__prog_data____Compare____type_ctor_0_0(&parse_tree__module_qual__qual_errors__Var_128, parse_tree__module_qual__qual_errors__Var_207, parse_tree__module_qual__qual_errors__ArgY2_124);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_128 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__Var_128;
                              else
                                {
                                  mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__module_qual__qual_errors__HeadVar__1_1, parse_tree__module_qual__qual_errors__Var_206, parse_tree__module_qual__qual_errors__ArgY3_126);
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer parse_tree__module_qual__qual_errors__Var_202 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 4)));
                MR_Word parse_tree__module_qual__qual_errors__Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word parse_tree__module_qual__qual_errors__Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word parse_tree__module_qual__qual_errors__Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__module_qual__qual_errors__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word parse_tree__module_qual__qual_errors__ArgY1_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY2_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word parse_tree__module_qual__qual_errors__ArgY3_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Integer parse_tree__module_qual__qual_errors__ArgY4_171 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__3_3, (MR_Integer) 4)));
                          MR_Word parse_tree__module_qual__qual_errors__Var_172;

                          {
                            mercury__term____Compare____context_0_0(&parse_tree__module_qual__qual_errors__Var_172, parse_tree__module_qual__qual_errors__Var_205, parse_tree__module_qual__qual_errors__ArgY1_165);
                          }
                          parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_172 == (MR_Integer) 0);
                          parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                          if (parse_tree__module_qual__qual_errors__succeeded)
                            *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__Var_172;
                          else
                            {
                              MR_Word parse_tree__module_qual__qual_errors__Var_173;
                              MR_Integer parse_tree__module_qual__qual_errors__Var_211 = (MR_Integer) parse_tree__module_qual__qual_errors__Var_204;
                              MR_Integer parse_tree__module_qual__qual_errors__Var_212 = (MR_Integer) parse_tree__module_qual__qual_errors__ArgY2_167;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__module_qual__qual_errors__Var_173, parse_tree__module_qual__qual_errors__Var_211, parse_tree__module_qual__qual_errors__Var_212);
                              }
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_173 == (MR_Integer) 0);
                              parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                              if (parse_tree__module_qual__qual_errors__succeeded)
                                *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__Var_173;
                              else
                                {
                                  MR_Word parse_tree__module_qual__qual_errors__Var_174;

                                  {
                                    mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__module_qual__qual_errors__Var_174, parse_tree__module_qual__qual_errors__Var_203, parse_tree__module_qual__qual_errors__ArgY3_169);
                                  }
                                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_174 == (MR_Integer) 0);
                                  parse_tree__module_qual__qual_errors__succeeded = !(parse_tree__module_qual__qual_errors__succeeded);
                                  if (parse_tree__module_qual__qual_errors__succeeded)
                                    *parse_tree__module_qual__qual_errors__HeadVar__1_1 = parse_tree__module_qual__qual_errors__Var_174;
                                  else
                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__qual_errors__HeadVar__1_1, parse_tree__module_qual__qual_errors__Var_202, parse_tree__module_qual__qual_errors__ArgY4_171);
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
}

MR_bool MR_CALL 
parse_tree__module_qual__qual_errors____Unify____mq_constraint_error_context_0_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Integer parse_tree__module_qual__qual_errors__CastX_35 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__1_1;
    MR_Integer parse_tree__module_qual__qual_errors__CastY_36 = (MR_Integer) parse_tree__module_qual__qual_errors__HeadVar__2_2;

    parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__CastX_35 == parse_tree__module_qual__qual_errors__CastY_36);
    if (parse_tree__module_qual__qual_errors__succeeded)
      parse_tree__module_qual__qual_errors__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__module_qual__qual_errors__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY1_4;
            MR_Word parse_tree__module_qual__qual_errors__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY2_6;
            MR_Integer parse_tree__module_qual__qual_errors__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer parse_tree__module_qual__qual_errors__ArgY3_8;

            parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__module_qual__qual_errors__succeeded)
              {
                parse_tree__module_qual__qual_errors__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__module_qual__qual_errors__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                parse_tree__module_qual__qual_errors__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                {
                  parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_3, parse_tree__module_qual__qual_errors__ArgY1_4);
                }
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__qual_errors__ArgX2_5, parse_tree__module_qual__qual_errors__ArgY2_6);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__ArgX3_7 == parse_tree__module_qual__qual_errors__ArgY3_8);
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__module_qual__qual_errors__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY1_10;
            MR_Word parse_tree__module_qual__qual_errors__ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY2_12;
            MR_String parse_tree__module_qual__qual_errors__ArgX3_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
            MR_String parse_tree__module_qual__qual_errors__ArgY3_14;

            parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__module_qual__qual_errors__succeeded)
              {
                parse_tree__module_qual__qual_errors__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__module_qual__qual_errors__ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                parse_tree__module_qual__qual_errors__ArgY3_14 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                {
                  parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_9, parse_tree__module_qual__qual_errors__ArgY1_10);
                }
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__ArgX2_11 == parse_tree__module_qual__qual_errors__ArgY2_12);
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      parse_tree__module_qual__qual_errors__succeeded = (strcmp(parse_tree__module_qual__qual_errors__ArgX3_13, parse_tree__module_qual__qual_errors__ArgY3_14) == 0);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__module_qual__qual_errors__TypeInfo_42_42;
            MR_Word parse_tree__module_qual__qual_errors__ArgX1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY1_16;
            MR_Word parse_tree__module_qual__qual_errors__ArgX2_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY2_18;
            MR_Word parse_tree__module_qual__qual_errors__ArgX3_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word parse_tree__module_qual__qual_errors__ArgY3_20;

            parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__module_qual__qual_errors__succeeded)
              {
                parse_tree__module_qual__qual_errors__ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__module_qual__qual_errors__ArgY2_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                parse_tree__module_qual__qual_errors__ArgY3_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                {
                  parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_15, parse_tree__module_qual__qual_errors__ArgY1_16);
                }
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__qual_errors__ArgX2_17, parse_tree__module_qual__qual_errors__ArgY2_18);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        parse_tree__module_qual__qual_errors__TypeInfo_42_42 = (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_1[0];
                        {
                          parse_tree__module_qual__qual_errors__succeeded = mercury__builtin__unify_2_p_0(parse_tree__module_qual__qual_errors__TypeInfo_42_42, ((MR_Box) (parse_tree__module_qual__qual_errors__ArgX3_19)), ((MR_Box) (parse_tree__module_qual__qual_errors__ArgY3_20)));
                        }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_22;
                MR_Word parse_tree__module_qual__qual_errors__ArgX2_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY2_24;
                MR_String parse_tree__module_qual__qual_errors__ArgX3_25 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
                MR_String parse_tree__module_qual__qual_errors__ArgY3_26;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__module_qual__qual_errors__ArgY2_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                    parse_tree__module_qual__qual_errors__ArgY3_26 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_21, parse_tree__module_qual__qual_errors__ArgY1_22);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        {
                          parse_tree__module_qual__qual_errors__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(parse_tree__module_qual__qual_errors__ArgX2_23, parse_tree__module_qual__qual_errors__ArgY2_24);
                        }
                        if (parse_tree__module_qual__qual_errors__succeeded)
                          parse_tree__module_qual__qual_errors__succeeded = (strcmp(parse_tree__module_qual__qual_errors__ArgX3_25, parse_tree__module_qual__qual_errors__ArgY3_26) == 0);
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__module_qual__qual_errors__ArgX1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY1_28;
                MR_Word parse_tree__module_qual__qual_errors__ArgX2_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY2_30;
                MR_Word parse_tree__module_qual__qual_errors__ArgX3_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word parse_tree__module_qual__qual_errors__ArgY3_32;
                MR_Integer parse_tree__module_qual__qual_errors__ArgX4_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 4)));
                MR_Integer parse_tree__module_qual__qual_errors__ArgY4_34;

                parse_tree__module_qual__qual_errors__succeeded = ((((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  {
                    parse_tree__module_qual__qual_errors__ArgY1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__module_qual__qual_errors__ArgY2_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 2)));
                    parse_tree__module_qual__qual_errors__ArgY3_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 3)));
                    parse_tree__module_qual__qual_errors__ArgY4_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 4)));
                    {
                      parse_tree__module_qual__qual_errors__succeeded = mercury__term____Unify____context_0_0(parse_tree__module_qual__qual_errors__ArgX1_27, parse_tree__module_qual__qual_errors__ArgY1_28);
                    }
                    if (parse_tree__module_qual__qual_errors__succeeded)
                      {
                        parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__ArgX2_29 == parse_tree__module_qual__qual_errors__ArgY2_30);
                        if (parse_tree__module_qual__qual_errors__succeeded)
                          {
                            {
                              parse_tree__module_qual__qual_errors__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__qual_errors__ArgX3_31, parse_tree__module_qual__qual_errors__ArgY3_32);
                            }
                            if (parse_tree__module_qual__qual_errors__succeeded)
                              parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__ArgX4_33 == parse_tree__module_qual__qual_errors__ArgY4_34);
                          }
                      }
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__module_qual__qual_errors__succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(
  MR_Word parse_tree__module_qual__qual_errors__SymName_3)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2;

    {
      parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_3));
    }
    return parse_tree__module_qual__qual_errors__HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_redundant_import_context_3_p_0(
  MR_Word parse_tree__module_qual__qual_errors__ImportedModuleName_4,
  MR_Word parse_tree__module_qual__qual_errors__Context_5,
  MR_Word * parse_tree__module_qual__qual_errors__Msg_6)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Word parse_tree__module_qual__qual_errors__Pieces_7;
    MR_Word parse_tree__module_qual__qual_errors__Var_10;
    MR_Word parse_tree__module_qual__qual_errors__Var_11;
    MR_Word parse_tree__module_qual__qual_errors__Var_18;
    MR_Word parse_tree__module_qual__qual_errors__Var_19;

    {
      parse_tree__module_qual__qual_errors__Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_11, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ImportedModuleName_4));
    }
    {
      parse_tree__module_qual__qual_errors__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_10, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_11));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[40])));
    }
    {
      parse_tree__module_qual__qual_errors__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[96])));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Pieces_7, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_10));
    }
    {
      parse_tree__module_qual__qual_errors__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_19, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Pieces_7));
    }
    {
      parse_tree__module_qual__qual_errors__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_18, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_19));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__qual_errors__Msg_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Context_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_18));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0_1(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_2)
{
  {
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
    MR_Word parse_tree__module_qual__qual_errors__conv0_Msg_6;

    {
      parse_tree__module_qual__qual_errors__warn_redundant_import_context_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1), &parse_tree__module_qual__qual_errors__conv0_Msg_6);
    }
    *parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv0_Msg_6));
  }
}

void MR_CALL 
parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0(
  MR_Word parse_tree__module_qual__qual_errors__ParentModuleName_5,
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_15,
  MR_Word * parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Word parse_tree__module_qual__qual_errors__ImportedModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__qual_errors__ImportContexts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__qual_errors__HeadContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ImportContexts_7, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__qual_errors__TailContexts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ImportContexts_7, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__qual_errors__HeadPieces_11;
    MR_Word parse_tree__module_qual__qual_errors__HeadMsg_12;
    MR_Word parse_tree__module_qual__qual_errors__TailMsgs_13;
    MR_Word parse_tree__module_qual__qual_errors__Spec_14;
    MR_Word parse_tree__module_qual__qual_errors__Var_19;
    MR_Word parse_tree__module_qual__qual_errors__Var_20;
    MR_Word parse_tree__module_qual__qual_errors__Var_21;
    MR_Word parse_tree__module_qual__qual_errors__Var_24;
    MR_Word parse_tree__module_qual__qual_errors__Var_26;
    MR_Word parse_tree__module_qual__qual_errors__Var_29;
    MR_Word parse_tree__module_qual__qual_errors__Var_30;
    MR_Word parse_tree__module_qual__qual_errors__Var_40;
    MR_Word parse_tree__module_qual__qual_errors__Var_41;
    MR_Word parse_tree__module_qual__qual_errors__Var_43;
    MR_Word parse_tree__module_qual__qual_errors__Var_46;

    {
      parse_tree__module_qual__qual_errors__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_20, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ParentModuleName_5));
    }
    {
      parse_tree__module_qual__qual_errors__Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_30, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ImportedModuleName_6));
    }
    {
      parse_tree__module_qual__qual_errors__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_29, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_30));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[38])));
    }
    {
      parse_tree__module_qual__qual_errors__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[95])));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_26, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_29));
    }
    {
      parse_tree__module_qual__qual_errors__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_24, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_26));
    }
    {
      parse_tree__module_qual__qual_errors__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[81])));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_21, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_24));
    }
    {
      parse_tree__module_qual__qual_errors__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_19, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_20));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_19, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_21));
    }
    {
      parse_tree__module_qual__qual_errors__HeadPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[94])));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadPieces_11, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_19));
    }
    {
      parse_tree__module_qual__qual_errors__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_41, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__HeadPieces_11));
    }
    {
      parse_tree__module_qual__qual_errors__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_40, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_41));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__module_qual__qual_errors__HeadMsg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadMsg_12, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__HeadContext_9));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadMsg_12, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_40));
    }
    {
      parse_tree__module_qual__qual_errors__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_43, 0) = ((MR_Box) (&parse_tree__module_qual__qual_errors_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_43, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__warn_unused_interface_import_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_43, 3) = ((MR_Box) (parse_tree__module_qual__qual_errors__ImportedModuleName_6));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_context_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, parse_tree__module_qual__qual_errors__Var_43, parse_tree__module_qual__qual_errors__TailContexts_10, &parse_tree__module_qual__qual_errors__TailMsgs_13);
    }
    {
      parse_tree__module_qual__qual_errors__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_46, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__HeadMsg_12));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_46, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__TailMsgs_13));
    }
    {
      parse_tree__module_qual__qual_errors__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_14, 2) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_46));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_15));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__qual_errors__report_invalid_user_inst_5_p_0(
  MR_Word parse_tree__module_qual__qual_errors___SymName_6,
  MR_Word parse_tree__module_qual__qual_errors___Insts_7,
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_8,
  MR_Word parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_15,
  MR_Word * parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

    {
      parse_tree__module_qual__qual_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_105_110_118_97_108_105_100_95_117_115_101_114_95_105_110_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(parse_tree__module_qual__qual_errors__ErrorContext_8, parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_15, parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_16);
    }
  }
}

void MR_CALL 
parse_tree__module_qual__qual_errors__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_105_110_118_97_108_105_100_95_117_115_101_114_95_105_110_115_116_95_95_91_49_44_32_50_93_95_48_5_p_0(
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_8,
  MR_Word parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_15,
  MR_Word * parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_41_41;
    MR_Word parse_tree__module_qual__qual_errors__Context_10;
    MR_Word parse_tree__module_qual__qual_errors__ErrorContextPieces_11;
    MR_Word parse_tree__module_qual__qual_errors__Pieces_12;
    MR_Word parse_tree__module_qual__qual_errors__Msg_13;
    MR_Word parse_tree__module_qual__qual_errors__Spec_14;
    MR_Word parse_tree__module_qual__qual_errors__Var_21;
    MR_Word parse_tree__module_qual__qual_errors__Var_33;
    MR_Word parse_tree__module_qual__qual_errors__Var_34;
    MR_Word parse_tree__module_qual__qual_errors__Var_38;

    {
      parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(parse_tree__module_qual__qual_errors__ErrorContext_8, &parse_tree__module_qual__qual_errors__Context_10, &parse_tree__module_qual__qual_errors__ErrorContextPieces_11);
    }
    parse_tree__module_qual__qual_errors__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__module_qual__qual_errors__Var_21 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_41_41, parse_tree__module_qual__qual_errors__ErrorContextPieces_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[34]));
    }
    {
      parse_tree__module_qual__qual_errors__Pieces_12 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_41_41, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[72]), parse_tree__module_qual__qual_errors__Var_21);
    }
    {
      parse_tree__module_qual__qual_errors__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_34, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Pieces_12));
    }
    {
      parse_tree__module_qual__qual_errors__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_33, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_34));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__module_qual__qual_errors__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_13, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Context_10));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_13, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_33));
    }
    {
      parse_tree__module_qual__qual_errors__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_38, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Msg_13));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__module_qual__qual_errors__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_14, 2) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_15));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_3(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1)
{
  {
    MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2;
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
    MR_Word parse_tree__module_qual__qual_errors__conv2_HeadVar__2_2;

    {
      parse_tree__module_qual__qual_errors__conv2_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1));
    }
    parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv2_HeadVar__2_2));
    return parse_tree__module_qual__qual_errors__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_2(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1)
{
  {
    MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2;
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
    MR_Word parse_tree__module_qual__qual_errors__conv1_HeadVar__2_2;

    {
      parse_tree__module_qual__qual_errors__conv1_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1));
    }
    parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv1_HeadVar__2_2));
    return parse_tree__module_qual__qual_errors__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0_1(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1)
{
  {
    MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2;
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
    MR_Word parse_tree__module_qual__qual_errors__conv0_HeadVar__2_2;

    {
      parse_tree__module_qual__qual_errors__conv0_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1));
    }
    parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv0_HeadVar__2_2));
    return parse_tree__module_qual__qual_errors__wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__module_qual__qual_errors__report_ambiguous_match_7_p_0(
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_8,
  MR_Word parse_tree__module_qual__qual_errors__Id_9,
  MR_Word parse_tree__module_qual__qual_errors__IdType_10,
  MR_Word parse_tree__module_qual__qual_errors__UsableModuleNames_11,
  MR_Word parse_tree__module_qual__qual_errors__UnusableModuleNames_12,
  MR_Word parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_29,
  MR_Word * parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_30)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107;
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108;
    MR_Word parse_tree__module_qual__qual_errors__Context_14;
    MR_Word parse_tree__module_qual__qual_errors__ErrorContextPieces_15;
    MR_String parse_tree__module_qual__qual_errors__IdTypeStr_16;
    MR_Word parse_tree__module_qual__qual_errors__UsableModuleSymNames_17;
    MR_Word parse_tree__module_qual__qual_errors__MainPieces_18;
    MR_Word parse_tree__module_qual__qual_errors__UnusablePieces_19;
    MR_Word parse_tree__module_qual__qual_errors__Msg_27;
    MR_Word parse_tree__module_qual__qual_errors__Spec_28;
    MR_Word parse_tree__module_qual__qual_errors__Var_36;
    MR_Word parse_tree__module_qual__qual_errors__Var_37;
    MR_Word parse_tree__module_qual__qual_errors__Var_38;
    MR_Word parse_tree__module_qual__qual_errors__Var_41;
    MR_Word parse_tree__module_qual__qual_errors__Var_43;
    MR_Word parse_tree__module_qual__qual_errors__Var_46;
    MR_Word parse_tree__module_qual__qual_errors__Var_47;
    MR_Word parse_tree__module_qual__qual_errors__Var_48;
    MR_Word parse_tree__module_qual__qual_errors__Var_49;
    MR_Word parse_tree__module_qual__qual_errors__Var_59;
    MR_Word parse_tree__module_qual__qual_errors__Var_60;
    MR_Word parse_tree__module_qual__qual_errors__Var_94;
    MR_Word parse_tree__module_qual__qual_errors__Var_95;
    MR_Word parse_tree__module_qual__qual_errors__Var_96;
    MR_Word parse_tree__module_qual__qual_errors__Var_97;
    MR_Word parse_tree__module_qual__qual_errors__Var_104;

    {
      parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(parse_tree__module_qual__qual_errors__ErrorContext_8, &parse_tree__module_qual__qual_errors__Context_14, &parse_tree__module_qual__qual_errors__ErrorContextPieces_15);
    }
    {
      parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(parse_tree__module_qual__qual_errors__IdType_10, &parse_tree__module_qual__qual_errors__IdTypeStr_16);
    }
    parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__module_qual__qual_errors__UsableModuleSymNames_17 = mercury__list__map_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_4[3], parse_tree__module_qual__qual_errors__UsableModuleNames_11);
    }
    {
      parse_tree__module_qual__qual_errors__Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__Var_47, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__IdTypeStr_16));
    }
    {
      parse_tree__module_qual__qual_errors__Var_49 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(parse_tree__module_qual__qual_errors__Id_9);
    }
    {
      parse_tree__module_qual__qual_errors__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_48, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_49));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[24])));
    }
    {
      parse_tree__module_qual__qual_errors__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_46, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_47));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_46, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_48));
    }
    {
      parse_tree__module_qual__qual_errors__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_43, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_46));
    }
    {
      parse_tree__module_qual__qual_errors__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_41, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_43));
    }
    {
      parse_tree__module_qual__qual_errors__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[81])));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_38, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_41));
    }
    {
      parse_tree__module_qual__qual_errors__Var_60 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__module_qual__qual_errors__UsableModuleSymNames_17);
    }
    {
      parse_tree__module_qual__qual_errors__Var_59 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108, parse_tree__module_qual__qual_errors__Var_60, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[14]));
    }
    {
      parse_tree__module_qual__qual_errors__Var_37 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108, parse_tree__module_qual__qual_errors__Var_38, parse_tree__module_qual__qual_errors__Var_59);
    }
    {
      parse_tree__module_qual__qual_errors__Var_36 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108, parse_tree__module_qual__qual_errors__ErrorContextPieces_15, parse_tree__module_qual__qual_errors__Var_37);
    }
    {
      parse_tree__module_qual__qual_errors__MainPieces_18 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[72]), parse_tree__module_qual__qual_errors__Var_36);
    }
    if ((parse_tree__module_qual__qual_errors__UnusableModuleNames_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__module_qual__qual_errors__UnusablePieces_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__module_qual__qual_errors__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__UnusableModuleNames_12, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qual_errors__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__UnusableModuleNames_12, (MR_Integer) 0)));

        if ((parse_tree__module_qual__qual_errors__Var_129 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__module_qual__qual_errors__UnusableModuleSymNames_25;
            MR_Word parse_tree__module_qual__qual_errors__Var_79;

            {
              parse_tree__module_qual__qual_errors__UnusableModuleSymNames_25 = mercury__list__map_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_4[4], parse_tree__module_qual__qual_errors__UnusableModuleNames_12);
            }
            {
              parse_tree__module_qual__qual_errors__Var_79 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108, parse_tree__module_qual__qual_errors__UnusableModuleSymNames_25, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[26]));
            }
            {
              parse_tree__module_qual__qual_errors__UnusablePieces_19 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[88]), parse_tree__module_qual__qual_errors__Var_79);
            }
          }
        else
          {
            MR_Word parse_tree__module_qual__qual_errors__UnusableModuleSymNames_116;
            MR_Word parse_tree__module_qual__qual_errors__Var_127;

            {
              parse_tree__module_qual__qual_errors__UnusableModuleSymNames_116 = mercury__list__map_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_107_107, parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_4[5], parse_tree__module_qual__qual_errors__UnusableModuleNames_12);
            }
            {
              parse_tree__module_qual__qual_errors__Var_127 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108, parse_tree__module_qual__qual_errors__UnusableModuleSymNames_116, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[26]));
            }
            {
              parse_tree__module_qual__qual_errors__UnusablePieces_19 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_108_108, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[91]), parse_tree__module_qual__qual_errors__Var_127);
            }
          }
      }
    {
      parse_tree__module_qual__qual_errors__Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_95, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__MainPieces_18));
    }
    {
      parse_tree__module_qual__qual_errors__Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_97, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__UnusablePieces_19));
    }
    {
      parse_tree__module_qual__qual_errors__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_96, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_97));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[93])));
    }
    {
      parse_tree__module_qual__qual_errors__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_94, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_95));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_94, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_96));
    }
    {
      parse_tree__module_qual__qual_errors__Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_27, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Context_14));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_27, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_94));
    }
    {
      parse_tree__module_qual__qual_errors__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_104, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Msg_27));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__module_qual__qual_errors__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_28, 2) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_104));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_30 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Spec_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_29));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_3(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__qual_errors__wrapper_arg_2)
{
  {
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
    MR_String parse_tree__module_qual__qual_errors__conv5_HeadVar__2_2;

    {
      mercury__string__int_to_string_2_p_0(((MR_Integer) parse_tree__module_qual__qual_errors__wrapper_arg_1), &parse_tree__module_qual__qual_errors__conv5_HeadVar__2_2);
    }
    *parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv5_HeadVar__2_2));
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_2(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1)
{
  {
    MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2;
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
    MR_Word parse_tree__module_qual__qual_errors__conv1_HeadVar__2_2;

    {
      parse_tree__module_qual__qual_errors__conv1_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1));
    }
    parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv1_HeadVar__2_2));
    return parse_tree__module_qual__qual_errors__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0_1(
  MR_Box parse_tree__module_qual__qual_errors__closure_arg,
  MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_1)
{
  {
    MR_Box parse_tree__module_qual__qual_errors__wrapper_arg_2;
    MR_Box parse_tree__module_qual__qual_errors__closure = parse_tree__module_qual__qual_errors__closure_arg;
    MR_Word parse_tree__module_qual__qual_errors__conv0_HeadVar__2_2;

    {
      parse_tree__module_qual__qual_errors__conv0_HeadVar__2_2 = parse_tree__module_qual__qual_errors__wrap_module_name_1_f_0(((MR_Word) parse_tree__module_qual__qual_errors__wrapper_arg_1));
    }
    parse_tree__module_qual__qual_errors__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qual_errors__conv0_HeadVar__2_2));
    return parse_tree__module_qual__qual_errors__wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__module_qual__qual_errors__report_undefined_mq_id_10_p_0(
  MR_Word parse_tree__module_qual__qual_errors__Info_11,
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_12,
  MR_Word parse_tree__module_qual__qual_errors__Id_13,
  MR_Word parse_tree__module_qual__qual_errors__IdType_14,
  MR_Word parse_tree__module_qual__qual_errors__ThisModuleName_15,
  MR_Word parse_tree__module_qual__qual_errors__IntMismatches0_16,
  MR_Word parse_tree__module_qual__qual_errors__QualMismatches0_17,
  MR_Word parse_tree__module_qual__qual_errors__PossibleAritiesSet_18,
  MR_Word parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_68,
  MR_Word * parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_69)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203;
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_204_204;
    MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_209_209;
    MR_Word parse_tree__module_qual__qual_errors__Context_20;
    MR_Word parse_tree__module_qual__qual_errors__ErrorContextPieces_21;
    MR_Word parse_tree__module_qual__qual_errors__InPieces_22;
    MR_String parse_tree__module_qual__qual_errors__IdTypeStr_23;
    MR_Word parse_tree__module_qual__qual_errors__IdSymName_24;
    MR_Integer parse_tree__module_qual__qual_errors__IdArity_25;
    MR_String parse_tree__module_qual__qual_errors__IdBaseName_26;
    MR_Word parse_tree__module_qual__qual_errors__IntMismatches_27;
    MR_Word parse_tree__module_qual__qual_errors__QualMismatches_28;
    MR_Word parse_tree__module_qual__qual_errors__OtherIntMismatches_30;
    MR_Word parse_tree__module_qual__qual_errors__UndefPieces_33;
    MR_Word parse_tree__module_qual__qual_errors__ThisIntPieces_34;
    MR_Word parse_tree__module_qual__qual_errors__OtherIntPieces_35;
    MR_Word parse_tree__module_qual__qual_errors__QualPieces_43;
    MR_Word parse_tree__module_qual__qual_errors__NonImportedPieces_54;
    MR_Word parse_tree__module_qual__qual_errors__PossibleArities_55;
    MR_Word parse_tree__module_qual__qual_errors__OtherArityPieces_64;
    MR_Word parse_tree__module_qual__qual_errors__AllPieces_65;
    MR_Word parse_tree__module_qual__qual_errors__Msg_66;
    MR_Word parse_tree__module_qual__qual_errors__Spec_67;
    MR_Word parse_tree__module_qual__qual_errors__Var_74;
    MR_Word parse_tree__module_qual__qual_errors__Var_190;
    MR_Word parse_tree__module_qual__qual_errors__Var_191;
    MR_Word parse_tree__module_qual__qual_errors__Var_192;
    MR_Word parse_tree__module_qual__qual_errors__Var_193;
    MR_Word parse_tree__module_qual__qual_errors__Var_194;
    MR_Word parse_tree__module_qual__qual_errors__Var_195;
    MR_Word parse_tree__module_qual__qual_errors__Var_196;
    MR_Word parse_tree__module_qual__qual_errors__Var_200;
    MR_Word parse_tree__module_qual__qual_errors__OtherIntMismatchesPrime_29;
    MR_Word parse_tree__module_qual__qual_errors__IdModuleName_50;
    MR_Word parse_tree__module_qual__qual_errors__ImportedModuleNames_52;
    MR_Word parse_tree__module_qual__qual_errors__AvailModuleNames_53;
    MR_Word parse_tree__module_qual__qual_errors__Var_147;
    MR_Word parse_tree__module_qual__qual_errors__Var_148;
    MR_Word parse_tree__module_qual__qual_errors__Var_213;
    MR_String parse_tree__module_qual__qual_errors__Var_51;
    MR_Integer parse_tree__module_qual__qual_errors__Var_56;
    MR_Word parse_tree__module_qual__qual_errors__Var_57;

    {
      parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(parse_tree__module_qual__qual_errors__ErrorContext_12, &parse_tree__module_qual__qual_errors__Context_20, &parse_tree__module_qual__qual_errors__ErrorContextPieces_21);
    }
    parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__module_qual__qual_errors__Var_74 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__ErrorContextPieces_21, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[7]));
    }
    {
      parse_tree__module_qual__qual_errors__InPieces_22 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[72]), parse_tree__module_qual__qual_errors__Var_74);
    }
    {
      parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(parse_tree__module_qual__qual_errors__IdType_14, &parse_tree__module_qual__qual_errors__IdTypeStr_23);
    }
    parse_tree__module_qual__qual_errors__IdSymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_13, (MR_Integer) 0)));
    parse_tree__module_qual__qual_errors__IdArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_13, (MR_Integer) 1)));
    {
      parse_tree__module_qual__qual_errors__IdBaseName_26 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__qual_errors__IdSymName_24);
    }
    parse_tree__module_qual__qual_errors__TypeCtorInfo_204_204 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_204_204, parse_tree__module_qual__qual_errors__IntMismatches0_16, &parse_tree__module_qual__qual_errors__IntMismatches_27);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_204_204, parse_tree__module_qual__qual_errors__QualMismatches0_17, &parse_tree__module_qual__qual_errors__QualMismatches_28);
    }
    {
      parse_tree__module_qual__qual_errors__succeeded = mercury__list__delete_first_3_p_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_204_204, parse_tree__module_qual__qual_errors__IntMismatches_27, ((MR_Box) (parse_tree__module_qual__qual_errors__ThisModuleName_15)), &parse_tree__module_qual__qual_errors__OtherIntMismatchesPrime_29);
    }
    if (parse_tree__module_qual__qual_errors__succeeded)
      {
        MR_Word parse_tree__module_qual__qual_errors__ThisModulesSN_31;
        MR_Word parse_tree__module_qual__qual_errors__ThisModuleSNA_32;
        MR_Word parse_tree__module_qual__qual_errors__Var_86;
        MR_Word parse_tree__module_qual__qual_errors__Var_87;
        MR_Word parse_tree__module_qual__qual_errors__Var_88;
        MR_Word parse_tree__module_qual__qual_errors__Var_89;

        parse_tree__module_qual__qual_errors__OtherIntMismatches_30 = parse_tree__module_qual__qual_errors__OtherIntMismatchesPrime_29;
        {
          parse_tree__module_qual__qual_errors__ThisModulesSN_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ThisModulesSN_31, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__ThisModuleName_15));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ThisModulesSN_31, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__IdBaseName_26));
        }
        {
          parse_tree__module_qual__qual_errors__ThisModuleSNA_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ThisModuleSNA_32, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__ThisModulesSN_31));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ThisModuleSNA_32, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__IdArity_25));
        }
        parse_tree__module_qual__qual_errors__UndefPieces_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          parse_tree__module_qual__qual_errors__Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__Var_87, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__IdTypeStr_23));
        }
        {
          parse_tree__module_qual__qual_errors__Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_89, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ThisModuleSNA_32));
        }
        {
          parse_tree__module_qual__qual_errors__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_88, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_89));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[12])));
        }
        {
          parse_tree__module_qual__qual_errors__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_86, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_87));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_86, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_88));
        }
        {
          parse_tree__module_qual__qual_errors__ThisIntPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ThisIntPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[53])));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ThisIntPieces_34, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_86));
        }
      }
    else
      {
        MR_Word parse_tree__module_qual__qual_errors__Var_101;
        MR_Word parse_tree__module_qual__qual_errors__Var_102;
        MR_Word parse_tree__module_qual__qual_errors__Var_103;
        MR_Word parse_tree__module_qual__qual_errors__Var_104;
        MR_Word parse_tree__module_qual__qual_errors__Var_105;

        parse_tree__module_qual__qual_errors__OtherIntMismatches_30 = parse_tree__module_qual__qual_errors__IntMismatches_27;
        {
          parse_tree__module_qual__qual_errors__Var_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__Var_102, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__IdTypeStr_23));
        }
        {
          parse_tree__module_qual__qual_errors__Var_105 = parse_tree__module_qual__qual_errors__id_to_sym_name_and_arity_1_f_0(parse_tree__module_qual__qual_errors__Id_13);
        }
        {
          parse_tree__module_qual__qual_errors__Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_104, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_105));
        }
        {
          parse_tree__module_qual__qual_errors__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_103, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_104));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[14])));
        }
        {
          parse_tree__module_qual__qual_errors__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_101, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_102));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_101, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_103));
        }
        {
          parse_tree__module_qual__qual_errors__UndefPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__UndefPieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[73])));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__UndefPieces_33, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_101));
        }
        parse_tree__module_qual__qual_errors__ThisIntPieces_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    if ((parse_tree__module_qual__qual_errors__OtherIntMismatches_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__module_qual__qual_errors__OtherIntPieces_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__module_qual__qual_errors__OtherIntMismatchesTail_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__OtherIntMismatches_30, (MR_Integer) 1)));
        MR_String parse_tree__module_qual__qual_errors__OtherIntModuleWord_38;
        MR_String parse_tree__module_qual__qual_errors__OtherIntHasWord_39;
        MR_Word parse_tree__module_qual__qual_errors__OtherIntSymNames_42;
        MR_Word parse_tree__module_qual__qual_errors__Var_113;
        MR_Word parse_tree__module_qual__qual_errors__Var_116;
        MR_Word parse_tree__module_qual__qual_errors__Var_117;
        MR_Word parse_tree__module_qual__qual_errors__Var_119;
        MR_Word parse_tree__module_qual__qual_errors__Var_120;
        MR_Word parse_tree__module_qual__qual_errors__Var_121;
        MR_Word parse_tree__module_qual__qual_errors__Var_122;
        MR_Word parse_tree__module_qual__qual_errors__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__OtherIntMismatches_30, (MR_Integer) 0)));

        if ((parse_tree__module_qual__qual_errors__OtherIntMismatchesTail_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            parse_tree__module_qual__qual_errors__OtherIntModuleWord_38 = (MR_String) "module";
            parse_tree__module_qual__qual_errors__OtherIntHasWord_39 = (MR_String) "has";
          }
        else
          {
            parse_tree__module_qual__qual_errors__OtherIntModuleWord_38 = (MR_String) "modules";
            parse_tree__module_qual__qual_errors__OtherIntHasWord_39 = (MR_String) "have";
          }
        {
          parse_tree__module_qual__qual_errors__OtherIntSymNames_42 = mercury__list__map_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_204_204, parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_4[0], parse_tree__module_qual__qual_errors__OtherIntMismatches_30);
        }
        {
          parse_tree__module_qual__qual_errors__Var_117 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__Var_117, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__OtherIntModuleWord_38));
        }
        {
          parse_tree__module_qual__qual_errors__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_116, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_117));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__module_qual__qual_errors__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[74])));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_113, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_116));
        }
        {
          parse_tree__module_qual__qual_errors__Var_120 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__module_qual__qual_errors__OtherIntSymNames_42);
        }
        {
          parse_tree__module_qual__qual_errors__Var_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__Var_122, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__OtherIntHasWord_39));
        }
        {
          parse_tree__module_qual__qual_errors__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_121, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_122));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[16])));
        }
        {
          parse_tree__module_qual__qual_errors__Var_119 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__Var_120, parse_tree__module_qual__qual_errors__Var_121);
        }
        {
          parse_tree__module_qual__qual_errors__OtherIntPieces_35 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__Var_113, parse_tree__module_qual__qual_errors__Var_119);
        }
      }
    if ((parse_tree__module_qual__qual_errors__QualMismatches_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__module_qual__qual_errors__QualPieces_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__module_qual__qual_errors__QualMismatchesTail_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__QualMismatches_28, (MR_Integer) 1)));
        MR_String parse_tree__module_qual__qual_errors__QualModuleWord_46;
        MR_Word parse_tree__module_qual__qual_errors__QualSymNames_49;
        MR_Word parse_tree__module_qual__qual_errors__Var_130;
        MR_Word parse_tree__module_qual__qual_errors__Var_133;
        MR_Word parse_tree__module_qual__qual_errors__Var_136;
        MR_Word parse_tree__module_qual__qual_errors__Var_137;
        MR_Word parse_tree__module_qual__qual_errors__Var_139;
        MR_Word parse_tree__module_qual__qual_errors__Var_140;
        MR_Word parse_tree__module_qual__qual_errors__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__QualMismatches_28, (MR_Integer) 0)));

        if ((parse_tree__module_qual__qual_errors__QualMismatchesTail_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__module_qual__qual_errors__QualModuleWord_46 = (MR_String) "module";
        else
          parse_tree__module_qual__qual_errors__QualModuleWord_46 = (MR_String) "modules";
        {
          parse_tree__module_qual__qual_errors__QualSymNames_49 = mercury__list__map_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_204_204, parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_4[1], parse_tree__module_qual__qual_errors__QualMismatches_28);
        }
        {
          parse_tree__module_qual__qual_errors__Var_137 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__Var_137, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__QualModuleWord_46));
        }
        {
          parse_tree__module_qual__qual_errors__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_136, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_137));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__module_qual__qual_errors__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_133, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[76])));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_133, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_136));
        }
        {
          parse_tree__module_qual__qual_errors__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[75])));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_130, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_133));
        }
        {
          parse_tree__module_qual__qual_errors__Var_140 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__module_qual__qual_errors__QualSymNames_49);
        }
        {
          parse_tree__module_qual__qual_errors__Var_139 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__Var_140, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[18]));
        }
        {
          parse_tree__module_qual__qual_errors__QualPieces_43 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__Var_130, parse_tree__module_qual__qual_errors__Var_139);
        }
      }
    parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__IdSymName_24)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__module_qual__qual_errors__succeeded)
      {
        parse_tree__module_qual__qual_errors__IdModuleName_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__IdSymName_24, (MR_Integer) 0)));
        parse_tree__module_qual__qual_errors__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__IdSymName_24, (MR_Integer) 1)));
        {
          parse_tree__module_qual__mq_info_get_this_module_2_p_0(parse_tree__module_qual__qual_errors__Info_11, &parse_tree__module_qual__qual_errors__Var_213);
        }
        {
          parse_tree__module_qual__qual_errors__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__module_qual__qual_errors__ThisModuleName_15, parse_tree__module_qual__qual_errors__Var_213);
        }
        if (parse_tree__module_qual__qual_errors__succeeded)
          {
            {
              parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(parse_tree__module_qual__qual_errors__Info_11, &parse_tree__module_qual__qual_errors__ImportedModuleNames_52);
            }
            {
              parse_tree__module_qual__qual_errors__Var_147 = mercury__set__to_sorted_list_1_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_204_204, parse_tree__module_qual__qual_errors__ImportedModuleNames_52);
            }
            {
              parse_tree__module_qual__qual_errors__AvailModuleNames_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__AvailModuleNames_53, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__ThisModuleName_15));
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__AvailModuleNames_53, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_147));
            }
            {
              parse_tree__module_qual__qual_errors__Var_148 = parse_tree__module_qual__qual_errors__module_name_matches_some_2_f_0(parse_tree__module_qual__qual_errors__IdModuleName_50, parse_tree__module_qual__qual_errors__AvailModuleNames_53);
            }
            parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__Var_148 == (MR_Integer) 0);
          }
      }
    if (parse_tree__module_qual__qual_errors__succeeded)
      {
        MR_Word parse_tree__module_qual__qual_errors__Var_151;
        MR_Word parse_tree__module_qual__qual_errors__Var_152;

        {
          parse_tree__module_qual__qual_errors__Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_152, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__IdModuleName_50));
        }
        {
          parse_tree__module_qual__qual_errors__Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_151, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_152));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[20])));
        }
        {
          parse_tree__module_qual__qual_errors__NonImportedPieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__NonImportedPieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[77])));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__NonImportedPieces_54, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_151));
        }
      }
    else
      parse_tree__module_qual__qual_errors__NonImportedPieces_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    parse_tree__module_qual__qual_errors__TypeCtorInfo_209_209 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__set__to_sorted_list_2_p_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_209_209, parse_tree__module_qual__qual_errors__PossibleAritiesSet_18, &parse_tree__module_qual__qual_errors__PossibleArities_55);
    }
    parse_tree__module_qual__qual_errors__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qual_errors__PossibleArities_55)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__module_qual__qual_errors__succeeded)
      {
        parse_tree__module_qual__qual_errors__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__PossibleArities_55, (MR_Integer) 0)));
        parse_tree__module_qual__qual_errors__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__PossibleArities_55, (MR_Integer) 1)));
        parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__ThisIntPieces_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__module_qual__qual_errors__succeeded)
          {
            parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__OtherIntPieces_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__module_qual__qual_errors__succeeded)
              {
                parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__QualPieces_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__module_qual__qual_errors__succeeded)
                  parse_tree__module_qual__qual_errors__succeeded = (parse_tree__module_qual__qual_errors__NonImportedPieces_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (parse_tree__module_qual__qual_errors__succeeded)
      {
        MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_210_210;
        MR_String parse_tree__module_qual__qual_errors__IdTypesStr_58;
        MR_String parse_tree__module_qual__qual_errors__IsAre_59;
        MR_String parse_tree__module_qual__qual_errors__KindKinds_60;
        MR_String parse_tree__module_qual__qual_errors__ArityArities_61;
        MR_Word parse_tree__module_qual__qual_errors__PossibleArityStrs_62;
        MR_Word parse_tree__module_qual__qual_errors__PossibleAritiesPieces_63;
        MR_Word parse_tree__module_qual__qual_errors__Var_164;
        MR_Word parse_tree__module_qual__qual_errors__Var_167;
        MR_Word parse_tree__module_qual__qual_errors__Var_168;
        MR_Word parse_tree__module_qual__qual_errors__Var_169;
        MR_Word parse_tree__module_qual__qual_errors__Var_170;
        MR_Word parse_tree__module_qual__qual_errors__Var_171;
        MR_Word parse_tree__module_qual__qual_errors__Var_174;
        MR_Word parse_tree__module_qual__qual_errors__Var_175;
        MR_String parse_tree__module_qual__qual_errors__Var_176;
        MR_Word parse_tree__module_qual__qual_errors__Var_177;
        MR_Word parse_tree__module_qual__qual_errors__Var_180;
        MR_Word parse_tree__module_qual__qual_errors__Var_181;
        MR_Word parse_tree__module_qual__qual_errors__Var_183;
        MR_Box parse_tree__module_qual__qual_errors__conv2_IsAre_59;
        MR_Box parse_tree__module_qual__qual_errors__conv3_KindKinds_60;
        MR_Box parse_tree__module_qual__qual_errors__conv4_ArityArities_61;

        {
          parse_tree__module_qual__qual_errors__id_types_to_string_2_p_0(parse_tree__module_qual__qual_errors__IdType_14, &parse_tree__module_qual__qual_errors__IdTypesStr_58);
        }
        parse_tree__module_qual__qual_errors__TypeCtorInfo_210_210 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          parse_tree__module_qual__qual_errors__conv2_IsAre_59 = parse_tree__error_util__choose_number_3_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_209_209, parse_tree__module_qual__qual_errors__TypeCtorInfo_210_210, parse_tree__module_qual__qual_errors__PossibleArities_55, ((MR_Box) ((MR_String) "is a")), ((MR_Box) ((MR_String) "are")));
        }
        parse_tree__module_qual__qual_errors__IsAre_59 = ((MR_String) parse_tree__module_qual__qual_errors__conv2_IsAre_59);
        {
          parse_tree__module_qual__qual_errors__conv3_KindKinds_60 = parse_tree__error_util__choose_number_3_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_209_209, parse_tree__module_qual__qual_errors__TypeCtorInfo_210_210, parse_tree__module_qual__qual_errors__PossibleArities_55, ((MR_Box) (parse_tree__module_qual__qual_errors__IdTypeStr_23)), ((MR_Box) (parse_tree__module_qual__qual_errors__IdTypesStr_58)));
        }
        parse_tree__module_qual__qual_errors__KindKinds_60 = ((MR_String) parse_tree__module_qual__qual_errors__conv3_KindKinds_60);
        {
          parse_tree__module_qual__qual_errors__conv4_ArityArities_61 = parse_tree__error_util__choose_number_3_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_209_209, parse_tree__module_qual__qual_errors__TypeCtorInfo_210_210, parse_tree__module_qual__qual_errors__PossibleArities_55, ((MR_Box) ((MR_String) "arity")), ((MR_Box) ((MR_String) "arities")));
        }
        parse_tree__module_qual__qual_errors__ArityArities_61 = ((MR_String) parse_tree__module_qual__qual_errors__conv4_ArityArities_61);
        {
          mercury__list__map_3_p_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_209_209, parse_tree__module_qual__qual_errors__TypeCtorInfo_210_210, (MR_Word) &parse_tree__module_qual__qual_errors_scalar_common_4[2], parse_tree__module_qual__qual_errors__PossibleArities_55, &parse_tree__module_qual__qual_errors__PossibleArityStrs_62);
        }
        {
          parse_tree__module_qual__qual_errors__PossibleAritiesPieces_63 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__module_qual__qual_errors__PossibleArityStrs_62);
        }
        {
          parse_tree__module_qual__qual_errors__Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_168, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__IsAre_59));
        }
        {
          parse_tree__module_qual__qual_errors__Var_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_170, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__KindKinds_60));
        }
        {
          parse_tree__module_qual__qual_errors__Var_176 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__qual_errors__IdSymName_24);
        }
        {
          parse_tree__module_qual__qual_errors__Var_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_175, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_176));
        }
        {
          parse_tree__module_qual__qual_errors__Var_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_181, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_181, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ArityArities_61));
        }
        {
          parse_tree__module_qual__qual_errors__Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_180, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_181));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__module_qual__qual_errors__Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_177, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[80])));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_177, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_180));
        }
        {
          parse_tree__module_qual__qual_errors__Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_174, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_175));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_174, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_177));
        }
        {
          parse_tree__module_qual__qual_errors__Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_171, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[79])));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_171, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_174));
        }
        {
          parse_tree__module_qual__qual_errors__Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_169, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_170));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_169, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_171));
        }
        {
          parse_tree__module_qual__qual_errors__Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_167, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_168));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_167, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_169));
        }
        {
          parse_tree__module_qual__qual_errors__Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_164, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[78])));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_164, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_167));
        }
        {
          parse_tree__module_qual__qual_errors__Var_183 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__PossibleAritiesPieces_63, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[18]));
        }
        {
          parse_tree__module_qual__qual_errors__OtherArityPieces_64 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__Var_164, parse_tree__module_qual__qual_errors__Var_183);
        }
      }
    else
      parse_tree__module_qual__qual_errors__OtherArityPieces_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      parse_tree__module_qual__qual_errors__Var_194 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__NonImportedPieces_54, parse_tree__module_qual__qual_errors__OtherArityPieces_64);
    }
    {
      parse_tree__module_qual__qual_errors__Var_193 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__QualPieces_43, parse_tree__module_qual__qual_errors__Var_194);
    }
    {
      parse_tree__module_qual__qual_errors__Var_192 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__OtherIntPieces_35, parse_tree__module_qual__qual_errors__Var_193);
    }
    {
      parse_tree__module_qual__qual_errors__Var_191 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__ThisIntPieces_34, parse_tree__module_qual__qual_errors__Var_192);
    }
    {
      parse_tree__module_qual__qual_errors__Var_190 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__UndefPieces_33, parse_tree__module_qual__qual_errors__Var_191);
    }
    {
      parse_tree__module_qual__qual_errors__AllPieces_65 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_203_203, parse_tree__module_qual__qual_errors__InPieces_22, parse_tree__module_qual__qual_errors__Var_190);
    }
    {
      parse_tree__module_qual__qual_errors__Var_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_196, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__AllPieces_65));
    }
    {
      parse_tree__module_qual__qual_errors__Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_195, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_196));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__module_qual__qual_errors__Msg_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_66, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Context_20));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Msg_66, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_195));
    }
    {
      parse_tree__module_qual__qual_errors__Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_200, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Msg_66));
      MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__module_qual__qual_errors__Spec_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Spec_67, 2) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_200));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_69 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Spec_67));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__STATE_VARIABLE_Specs_0_68));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__id_to_sym_name_and_arity_1_f_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2;
    MR_Word parse_tree__module_qual__qual_errors__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer parse_tree__module_qual__qual_errors__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));

    {
      parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_3));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_4));
    }
    return parse_tree__module_qual__qual_errors__HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__id_types_to_string_2_p_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
  MR_String * parse_tree__module_qual__qual_errors__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

    *parse_tree__module_qual__qual_errors__HeadVar__2_2 = ((&parse_tree__module_qual__qual_errors_vector_common_2[4 + parse_tree__module_qual__qual_errors__HeadVar__1_1]))->parse_tree__module_qual__qual_errors__vector_common_type_2_0__vct_2_f_0;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__id_type_to_string_2_p_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
  MR_String * parse_tree__module_qual__qual_errors__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

    *parse_tree__module_qual__qual_errors__HeadVar__2_2 = ((&parse_tree__module_qual__qual_errors_vector_common_2[0 + parse_tree__module_qual__qual_errors__HeadVar__1_1]))->parse_tree__module_qual__qual_errors__vector_common_type_2_0__vct_2_f_0;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_error_context_to_pieces_3_p_0(
  MR_Word parse_tree__module_qual__qual_errors__ErrorContext_4,
  MR_Word * parse_tree__module_qual__qual_errors__Context_5,
  MR_Word * parse_tree__module_qual__qual_errors__Pieces_6)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

    switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__ErrorContext_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__module_qual__qual_errors__TypeCtor_7;
          MR_Word parse_tree__module_qual__qual_errors__Var_180;
          MR_Word parse_tree__module_qual__qual_errors__Var_181;

          *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 0)));
          parse_tree__module_qual__qual_errors__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
          {
            parse_tree__module_qual__qual_errors__Var_181 = parse_tree__module_qual__qual_errors__wrap_type_ctor_1_f_0(parse_tree__module_qual__qual_errors__TypeCtor_7);
          }
          {
            parse_tree__module_qual__qual_errors__Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_180, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_181));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__module_qual__qual_errors__Pieces_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[67])));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_180));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__module_qual__qual_errors__TypeCtorInfo_201_201;
          MR_Word parse_tree__module_qual__qual_errors__ContainingTypeCtor_8;
          MR_String parse_tree__module_qual__qual_errors__FunctionSymbol_9;
          MR_Integer parse_tree__module_qual__qual_errors__ArgNum_10;
          MR_Word parse_tree__module_qual__qual_errors__MaybeCtorFieldName_11;
          MR_Word parse_tree__module_qual__qual_errors__FieldNamePieces_12;
          MR_Word parse_tree__module_qual__qual_errors__Var_157;
          MR_Word parse_tree__module_qual__qual_errors__Var_160;
          MR_Word parse_tree__module_qual__qual_errors__Var_161;
          MR_Word parse_tree__module_qual__qual_errors__Var_162;
          MR_Word parse_tree__module_qual__qual_errors__Var_165;
          MR_Word parse_tree__module_qual__qual_errors__Var_168;
          MR_Word parse_tree__module_qual__qual_errors__Var_169;
          MR_Word parse_tree__module_qual__qual_errors__Var_171;
          MR_Word parse_tree__module_qual__qual_errors__Var_172;
          MR_Word parse_tree__module_qual__qual_errors__Var_175;
          MR_Word parse_tree__module_qual__qual_errors__Var_176;

          *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 0)));
          parse_tree__module_qual__qual_errors__ContainingTypeCtor_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
          parse_tree__module_qual__qual_errors__FunctionSymbol_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
          parse_tree__module_qual__qual_errors__ArgNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 3)));
          parse_tree__module_qual__qual_errors__MaybeCtorFieldName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 4)));
          if ((parse_tree__module_qual__qual_errors__MaybeCtorFieldName_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            parse_tree__module_qual__qual_errors__FieldNamePieces_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Word parse_tree__module_qual__qual_errors__CtorFieldName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__MaybeCtorFieldName_11, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qual_errors__FieldSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__CtorFieldName_13, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qual_errors__Var_150;
              MR_Word parse_tree__module_qual__qual_errors__Var_151;
              MR_String parse_tree__module_qual__qual_errors__Var_152;
              MR_Word parse_tree__module_qual__qual_errors___FieldContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__CtorFieldName_13, (MR_Integer) 1)));

              {
                parse_tree__module_qual__qual_errors__Var_152 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__qual_errors__FieldSymName_14);
              }
              {
                parse_tree__module_qual__qual_errors__Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_151, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_152));
              }
              {
                parse_tree__module_qual__qual_errors__Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_150, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_151));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[52])));
              }
              {
                parse_tree__module_qual__qual_errors__FieldNamePieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__FieldNamePieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[50])));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__FieldNamePieces_12, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_150));
              }
            }
          parse_tree__module_qual__qual_errors__TypeCtorInfo_201_201 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          {
            parse_tree__module_qual__qual_errors__Var_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_161, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ArgNum_10));
          }
          {
            parse_tree__module_qual__qual_errors__Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_169, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__FunctionSymbol_9));
          }
          {
            parse_tree__module_qual__qual_errors__Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_168, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_169));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__module_qual__qual_errors__Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_165, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[45])));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_165, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_168));
          }
          {
            parse_tree__module_qual__qual_errors__Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[54])));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_162, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_165));
          }
          {
            parse_tree__module_qual__qual_errors__Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_160, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_161));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_160, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_162));
          }
          {
            parse_tree__module_qual__qual_errors__Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[53])));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_157, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_160));
          }
          {
            parse_tree__module_qual__qual_errors__Var_176 = parse_tree__module_qual__qual_errors__wrap_type_ctor_1_f_0(parse_tree__module_qual__qual_errors__ContainingTypeCtor_8);
          }
          {
            parse_tree__module_qual__qual_errors__Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_175, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_176));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__module_qual__qual_errors__Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[55])));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_172, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_175));
          }
          {
            parse_tree__module_qual__qual_errors__Var_171 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_201_201, parse_tree__module_qual__qual_errors__FieldNamePieces_12, parse_tree__module_qual__qual_errors__Var_172);
          }
          {
            *parse_tree__module_qual__qual_errors__Pieces_6 = mercury__list__f_43_43_2_f_0(parse_tree__module_qual__qual_errors__TypeCtorInfo_201_201, parse_tree__module_qual__qual_errors__Var_157, parse_tree__module_qual__qual_errors__Var_171);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__module_qual__qual_errors__ConstraintErrorContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 0)));
          MR_String parse_tree__module_qual__qual_errors___Start_17;

          {
            parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(parse_tree__module_qual__qual_errors__ConstraintErrorContext_16, parse_tree__module_qual__qual_errors__Context_5, &parse_tree__module_qual__qual_errors___Start_17, parse_tree__module_qual__qual_errors__Pieces_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__module_qual__qual_errors__ClassName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              MR_Integer parse_tree__module_qual__qual_errors__Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
              MR_String parse_tree__module_qual__qual_errors__Start_20;
              MR_Word parse_tree__module_qual__qual_errors__ConstraintErrorContextPieces_21;
              MR_Word parse_tree__module_qual__qual_errors__Var_143;
              MR_Word parse_tree__module_qual__qual_errors__Var_144;
              MR_Word parse_tree__module_qual__qual_errors__Var_145;
              MR_Word parse_tree__module_qual__qual_errors__Var_146;
              MR_Word parse_tree__module_qual__qual_errors__Var_147;
              MR_Word parse_tree__module_qual__qual_errors__ConstraintErrorContext_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 3)));

              {
                parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(parse_tree__module_qual__qual_errors__ConstraintErrorContext_183, parse_tree__module_qual__qual_errors__Context_5, &parse_tree__module_qual__qual_errors__Start_20, &parse_tree__module_qual__qual_errors__ConstraintErrorContextPieces_21);
              }
              {
                parse_tree__module_qual__qual_errors__Var_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_145, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__ClassName_18));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_145, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_19));
              }
              {
                parse_tree__module_qual__qual_errors__Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_144, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_145));
              }
              {
                parse_tree__module_qual__qual_errors__Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_147, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Start_20));
              }
              {
                parse_tree__module_qual__qual_errors__Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_146, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_147));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_146, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__ConstraintErrorContextPieces_21));
              }
              {
                parse_tree__module_qual__qual_errors__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_143, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_144));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_143, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_146));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[70])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_143));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__module_qual__qual_errors__Var_133;
              MR_Word parse_tree__module_qual__qual_errors__Var_134;
              MR_Word parse_tree__module_qual__qual_errors__Id_184;

              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              parse_tree__module_qual__qual_errors__Id_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
              {
                parse_tree__module_qual__qual_errors__Var_134 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(parse_tree__module_qual__qual_errors__Id_184);
              }
              {
                parse_tree__module_qual__qual_errors__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_133, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_134));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[58])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_133));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__module_qual__qual_errors__Id_22;
              MR_Word parse_tree__module_qual__qual_errors__Var_138;
              MR_Word parse_tree__module_qual__qual_errors__Var_139;

              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              parse_tree__module_qual__qual_errors__Id_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
              {
                parse_tree__module_qual__qual_errors__Var_139 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(parse_tree__module_qual__qual_errors__Id_22);
              }
              {
                parse_tree__module_qual__qual_errors__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_138, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_139));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[62])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_138));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__module_qual__qual_errors__PredOrFunc_23;
              MR_Word parse_tree__module_qual__qual_errors__SymName_24;
              MR_Integer parse_tree__module_qual__qual_errors__OrigArity_25;
              MR_Word parse_tree__module_qual__qual_errors__Var_124;
              MR_Word parse_tree__module_qual__qual_errors__Var_125;
              MR_String parse_tree__module_qual__qual_errors__Var_126;
              MR_Word parse_tree__module_qual__qual_errors__Var_127;
              MR_Word parse_tree__module_qual__qual_errors__Var_128;
              MR_Word parse_tree__module_qual__qual_errors__Var_129;
              MR_Integer parse_tree__module_qual__qual_errors__Arity_185;
              MR_Word parse_tree__module_qual__qual_errors__Id_186;

              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              parse_tree__module_qual__qual_errors__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
              parse_tree__module_qual__qual_errors__Id_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 3)));
              parse_tree__module_qual__qual_errors__SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_186, (MR_Integer) 0)));
              parse_tree__module_qual__qual_errors__OrigArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_186, (MR_Integer) 1)));
              {
                parse_tree__prog_util__adjust_func_arity_3_p_0(parse_tree__module_qual__qual_errors__PredOrFunc_23, parse_tree__module_qual__qual_errors__OrigArity_25, &parse_tree__module_qual__qual_errors__Arity_185);
              }
              {
                parse_tree__module_qual__qual_errors__Var_126 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(parse_tree__module_qual__qual_errors__PredOrFunc_23);
              }
              {
                parse_tree__module_qual__qual_errors__Var_125 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__Var_125, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_126));
              }
              {
                parse_tree__module_qual__qual_errors__Var_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_129, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_24));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_129, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_185));
              }
              {
                parse_tree__module_qual__qual_errors__Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_128, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_129));
              }
              {
                parse_tree__module_qual__qual_errors__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_127, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_128));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__module_qual__qual_errors__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_124, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_125));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_124, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_127));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[44])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_124));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__module_qual__qual_errors__MaybePredOrFunc_26;
              MR_Word parse_tree__module_qual__qual_errors__Id_192;
              MR_Word parse_tree__module_qual__qual_errors__SymName_194;
              MR_Integer parse_tree__module_qual__qual_errors__OrigArity_195;

              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              parse_tree__module_qual__qual_errors__MaybePredOrFunc_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
              parse_tree__module_qual__qual_errors__Id_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 3)));
              parse_tree__module_qual__qual_errors__SymName_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_192, (MR_Integer) 0)));
              parse_tree__module_qual__qual_errors__OrigArity_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Id_192, (MR_Integer) 1)));
              if ((parse_tree__module_qual__qual_errors__MaybePredOrFunc_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word parse_tree__module_qual__qual_errors__Var_109;
                  MR_Word parse_tree__module_qual__qual_errors__Var_110;
                  MR_Word parse_tree__module_qual__qual_errors__Var_111;

                  {
                    parse_tree__module_qual__qual_errors__Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_111, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_194));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_111, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__OrigArity_195));
                  }
                  {
                    parse_tree__module_qual__qual_errors__Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_110, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_111));
                  }
                  {
                    parse_tree__module_qual__qual_errors__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_109, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_110));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__module_qual__qual_errors__Pieces_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[66])));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_109));
                  }
                }
              else
                {
                  MR_Word parse_tree__module_qual__qual_errors__Var_115;
                  MR_Word parse_tree__module_qual__qual_errors__Var_116;
                  MR_String parse_tree__module_qual__qual_errors__Var_117;
                  MR_Word parse_tree__module_qual__qual_errors__Var_118;
                  MR_Word parse_tree__module_qual__qual_errors__Var_119;
                  MR_Word parse_tree__module_qual__qual_errors__Var_120;
                  MR_Integer parse_tree__module_qual__qual_errors__Arity_187;
                  MR_Word parse_tree__module_qual__qual_errors__PredOrFunc_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__MaybePredOrFunc_26, (MR_Integer) 0)));

                  {
                    parse_tree__prog_util__adjust_func_arity_3_p_0(parse_tree__module_qual__qual_errors__PredOrFunc_188, parse_tree__module_qual__qual_errors__OrigArity_195, &parse_tree__module_qual__qual_errors__Arity_187);
                  }
                  {
                    parse_tree__module_qual__qual_errors__Var_117 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(parse_tree__module_qual__qual_errors__PredOrFunc_188);
                  }
                  {
                    parse_tree__module_qual__qual_errors__Var_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__Var_116, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_117));
                  }
                  {
                    parse_tree__module_qual__qual_errors__Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_120, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_194));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_120, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_187));
                  }
                  {
                    parse_tree__module_qual__qual_errors__Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_119, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_120));
                  }
                  {
                    parse_tree__module_qual__qual_errors__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_118, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_119));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__module_qual__qual_errors__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_115, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_116));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_115, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_118));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__module_qual__qual_errors__Pieces_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[66])));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_115));
                  }
                }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__module_qual__qual_errors__Pragma_27;
              MR_String parse_tree__module_qual__qual_errors__PragmaName_29;
              MR_Word parse_tree__module_qual__qual_errors__Var_96;

              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              parse_tree__module_qual__qual_errors__Pragma_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
              switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__Pragma_27)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_decl";
                  break;
                case (MR_Integer) 1:
                  parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_code";
                  break;
                case (MR_Integer) 2:
                  parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_proc";
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Pragma_27, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_proc_export";
                      break;
                    case (MR_Integer) 1:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_export_enum";
                      break;
                    case (MR_Integer) 2:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_enum";
                      break;
                    case (MR_Integer) 3:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "external_proc";
                      break;
                    case (MR_Integer) 4:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "type_spec";
                      break;
                    case (MR_Integer) 5:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "inline";
                      break;
                    case (MR_Integer) 6:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "no_inline";
                      break;
                    case (MR_Integer) 7:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "consider_used";
                      break;
                    case (MR_Integer) 8:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "unused_args";
                      break;
                    case (MR_Integer) 9:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "exceptions";
                      break;
                    case (MR_Integer) 10:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "trailing_info";
                      break;
                    case (MR_Integer) 11:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "mm_tabling_info";
                      break;
                    case (MR_Integer) 12:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "obsolete";
                      break;
                    case (MR_Integer) 13:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "no_detism_warning";
                      break;
                    case (MR_Integer) 14:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "require_tail_recursion";
                      break;
                    case (MR_Integer) 15:
                      {
                        MR_Word parse_tree__module_qual__qual_errors__PragmaInfoTabled_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Pragma_27, (MR_Integer) 1)));
                        MR_Word parse_tree__module_qual__qual_errors__EvalMethod_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__PragmaInfoTabled_48, (MR_Integer) 0)));
                        MR_Word parse_tree__module_qual__qual_errors__Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__PragmaInfoTabled_48, (MR_Integer) 1)));
                        MR_Word parse_tree__module_qual__qual_errors__Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__PragmaInfoTabled_48, (MR_Integer) 2)));
                        MR_Word parse_tree__module_qual__qual_errors__Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__PragmaInfoTabled_48, (MR_Integer) 3)));

                        {
                          parse_tree__module_qual__qual_errors__PragmaName_29 = parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(parse_tree__module_qual__qual_errors__EvalMethod_49);
                        }
                      }
                      break;
                    case (MR_Integer) 16:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "fact_table";
                      break;
                    case (MR_Integer) 17:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "oisu";
                      break;
                    case (MR_Integer) 18:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "promise_equivalent_clauses";
                      break;
                    case (MR_Integer) 19:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "promise_pure";
                      break;
                    case (MR_Integer) 20:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "promise_semipure";
                      break;
                    case (MR_Integer) 21:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "termination_info";
                      break;
                    case (MR_Integer) 22:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "termination2_info";
                      break;
                    case (MR_Integer) 23:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "terminates";
                      break;
                    case (MR_Integer) 24:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "does_not_terminate";
                      break;
                    case (MR_Integer) 25:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "check_termination";
                      break;
                    case (MR_Integer) 26:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "mode_check_clauses";
                      break;
                    case (MR_Integer) 27:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "structure_sharing";
                      break;
                    case (MR_Integer) 28:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "structure_reuse";
                      break;
                    case (MR_Integer) 29:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "foreign_import_module";
                      break;
                    case (MR_Integer) 30:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "reserve_tag";
                      break;
                    case (MR_Integer) 31:
                      parse_tree__module_qual__qual_errors__PragmaName_29 = (MR_String) "require_feature_set";
                      break;
                  }
                  break;
              }
              {
                parse_tree__module_qual__qual_errors__Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_96, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__PragmaName_29));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_96));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[65])));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              *parse_tree__module_qual__qual_errors__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[61]);
            }
            break;
          case (MR_Integer) 7:
            {
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              *parse_tree__module_qual__qual_errors__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[49]);
            }
            break;
          case (MR_Integer) 8:
            {
              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              *parse_tree__module_qual__qual_errors__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__module_qual__qual_errors_scalar_common_1[69]);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word parse_tree__module_qual__qual_errors__Var_90;
              MR_Word parse_tree__module_qual__qual_errors__Var_91;
              MR_Word parse_tree__module_qual__qual_errors__Id_196;

              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              parse_tree__module_qual__qual_errors__Id_196 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
              {
                parse_tree__module_qual__qual_errors__Var_91 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(parse_tree__module_qual__qual_errors__Id_196);
              }
              {
                parse_tree__module_qual__qual_errors__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_90, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_91));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[47])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_90));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word parse_tree__module_qual__qual_errors__Var_85;
              MR_Word parse_tree__module_qual__qual_errors__Var_86;
              MR_Word parse_tree__module_qual__qual_errors__Id_197;

              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              parse_tree__module_qual__qual_errors__Id_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
              {
                parse_tree__module_qual__qual_errors__Var_86 = parse_tree__module_qual__qual_errors__wrap_id_1_f_0(parse_tree__module_qual__qual_errors__Id_197);
              }
              {
                parse_tree__module_qual__qual_errors__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_85, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_86));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[59])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_85));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String parse_tree__module_qual__qual_errors__Name_65;
              MR_Word parse_tree__module_qual__qual_errors__Var_80;
              MR_Word parse_tree__module_qual__qual_errors__Var_81;

              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              parse_tree__module_qual__qual_errors__Name_65 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
              {
                parse_tree__module_qual__qual_errors__Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_81, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Name_65));
              }
              {
                parse_tree__module_qual__qual_errors__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_80, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_81));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[63])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_80));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String parse_tree__module_qual__qual_errors__EventName_66;
              MR_String parse_tree__module_qual__qual_errors__AttrName_67;
              MR_Word parse_tree__module_qual__qual_errors__Var_70;
              MR_Word parse_tree__module_qual__qual_errors__Var_71;
              MR_Word parse_tree__module_qual__qual_errors__Var_72;
              MR_Word parse_tree__module_qual__qual_errors__Var_75;
              MR_Word parse_tree__module_qual__qual_errors__Var_76;

              *parse_tree__module_qual__qual_errors__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 1)));
              parse_tree__module_qual__qual_errors__EventName_66 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 2)));
              parse_tree__module_qual__qual_errors__AttrName_67 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ErrorContext_4, (MR_Integer) 3)));
              {
                parse_tree__module_qual__qual_errors__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_71, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__AttrName_67));
              }
              {
                parse_tree__module_qual__qual_errors__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_76, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__EventName_66));
              }
              {
                parse_tree__module_qual__qual_errors__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_75, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_76));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__module_qual__qual_errors__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[57])));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_72, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_75));
              }
              {
                parse_tree__module_qual__qual_errors__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_70, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_71));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_70, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_72));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qual_errors__Pieces_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[56])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_70));
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_id_1_f_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2;
    MR_Word parse_tree__module_qual__qual_errors__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer parse_tree__module_qual__qual_errors__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__qual_errors__Var_5;

    {
      parse_tree__module_qual__qual_errors__Var_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_5, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_3));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_5, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_4));
    }
    {
      parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_5));
    }
    return parse_tree__module_qual__qual_errors__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__wrap_type_ctor_1_f_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;
    MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2;
    MR_Word parse_tree__module_qual__qual_errors__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer parse_tree__module_qual__qual_errors__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__qual_errors__Var_5;

    {
      parse_tree__module_qual__qual_errors__Var_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_5, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_3));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_5, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_4));
    }
    {
      parse_tree__module_qual__qual_errors__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_5));
    }
    return parse_tree__module_qual__qual_errors__HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__qual_errors__mq_constraint_error_context_to_pieces_4_p_0(
  MR_Word parse_tree__module_qual__qual_errors__ConstraintErrorContext_5,
  MR_Word * parse_tree__module_qual__qual_errors__Context_6,
  MR_String * parse_tree__module_qual__qual_errors__Start_7,
  MR_Word * parse_tree__module_qual__qual_errors__Pieces_8)
{
  {
    MR_bool parse_tree__module_qual__qual_errors__succeeded;

    switch (MR_tag((MR_Word) parse_tree__module_qual__qual_errors__ConstraintErrorContext_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__module_qual__qual_errors__ClassName_9;
          MR_Integer parse_tree__module_qual__qual_errors__Arity_10;
          MR_Word parse_tree__module_qual__qual_errors__Var_56;
          MR_Word parse_tree__module_qual__qual_errors__Var_57;
          MR_Word parse_tree__module_qual__qual_errors__Var_58;

          *parse_tree__module_qual__qual_errors__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 0)));
          parse_tree__module_qual__qual_errors__ClassName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 1)));
          parse_tree__module_qual__qual_errors__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 2)));
          *parse_tree__module_qual__qual_errors__Start_7 = (MR_String) "in";
          {
            parse_tree__module_qual__qual_errors__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_58, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__ClassName_9));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_58, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_10));
          }
          {
            parse_tree__module_qual__qual_errors__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_57, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_58));
          }
          {
            parse_tree__module_qual__qual_errors__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_56, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_57));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__module_qual__qual_errors__Pieces_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[41])));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_56));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__module_qual__qual_errors__PredOrFunc_11;
          MR_String parse_tree__module_qual__qual_errors__MethodName_12;
          MR_Word parse_tree__module_qual__qual_errors__Var_49;
          MR_Word parse_tree__module_qual__qual_errors__Var_50;
          MR_Word parse_tree__module_qual__qual_errors__Var_51;
          MR_Word parse_tree__module_qual__qual_errors__Var_52;

          *parse_tree__module_qual__qual_errors__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 0)));
          parse_tree__module_qual__qual_errors__PredOrFunc_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 1)));
          parse_tree__module_qual__qual_errors__MethodName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 2)));
          *parse_tree__module_qual__qual_errors__Start_7 = (MR_String) "on";
          {
            parse_tree__module_qual__qual_errors__Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_50, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__PredOrFunc_11));
          }
          {
            parse_tree__module_qual__qual_errors__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_52, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__MethodName_12));
          }
          {
            parse_tree__module_qual__qual_errors__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_51, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_52));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__module_qual__qual_errors__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_49, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_50));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_49, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_51));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__module_qual__qual_errors__Pieces_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[42])));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_49));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__module_qual__qual_errors__ArgTypes_13;
          MR_Integer parse_tree__module_qual__qual_errors__NumArgTypes_14;
          MR_Word parse_tree__module_qual__qual_errors__Var_43;
          MR_Word parse_tree__module_qual__qual_errors__Var_44;
          MR_Word parse_tree__module_qual__qual_errors__Var_45;
          MR_Word parse_tree__module_qual__qual_errors__ClassName_60;

          *parse_tree__module_qual__qual_errors__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 0)));
          parse_tree__module_qual__qual_errors__ClassName_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 1)));
          parse_tree__module_qual__qual_errors__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 2)));
          *parse_tree__module_qual__qual_errors__Start_7 = (MR_String) "on";
          {
            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__module_qual__qual_errors__ArgTypes_13, &parse_tree__module_qual__qual_errors__NumArgTypes_14);
          }
          {
            parse_tree__module_qual__qual_errors__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_45, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__ClassName_60));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_45, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__NumArgTypes_14));
          }
          {
            parse_tree__module_qual__qual_errors__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_44, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_45));
          }
          {
            parse_tree__module_qual__qual_errors__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_43, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_44));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__module_qual__qual_errors__Pieces_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[43])));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_43));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__module_qual__qual_errors__TypeCtor_15;
              MR_String parse_tree__module_qual__qual_errors__FunctionSymbol_16;
              MR_Word parse_tree__module_qual__qual_errors__TypeCtorSymName_17;
              MR_Integer parse_tree__module_qual__qual_errors__TypeCtorArity_18;
              MR_Word parse_tree__module_qual__qual_errors__Var_32;
              MR_Word parse_tree__module_qual__qual_errors__Var_33;
              MR_Word parse_tree__module_qual__qual_errors__Var_34;
              MR_Word parse_tree__module_qual__qual_errors__Var_37;
              MR_Word parse_tree__module_qual__qual_errors__Var_38;
              MR_Word parse_tree__module_qual__qual_errors__Var_39;

              *parse_tree__module_qual__qual_errors__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 1)));
              parse_tree__module_qual__qual_errors__TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 2)));
              parse_tree__module_qual__qual_errors__FunctionSymbol_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 3)));
              *parse_tree__module_qual__qual_errors__Start_7 = (MR_String) "on";
              parse_tree__module_qual__qual_errors__TypeCtorSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__TypeCtor_15, (MR_Integer) 0)));
              parse_tree__module_qual__qual_errors__TypeCtorArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__TypeCtor_15, (MR_Integer) 1)));
              {
                parse_tree__module_qual__qual_errors__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_33, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__FunctionSymbol_16));
              }
              {
                parse_tree__module_qual__qual_errors__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_39, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__TypeCtorSymName_17));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_39, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__TypeCtorArity_18));
              }
              {
                parse_tree__module_qual__qual_errors__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_38, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_39));
              }
              {
                parse_tree__module_qual__qual_errors__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_37, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_38));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__module_qual__qual_errors__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[46])));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_34, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_37));
              }
              {
                parse_tree__module_qual__qual_errors__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_32, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_33));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_32, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_34));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qual_errors__Pieces_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[45])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_32));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__module_qual__qual_errors__SymName_19;
              MR_Integer parse_tree__module_qual__qual_errors__OrigArity_20;
              MR_Word parse_tree__module_qual__qual_errors__Var_23;
              MR_Word parse_tree__module_qual__qual_errors__Var_24;
              MR_String parse_tree__module_qual__qual_errors__Var_25;
              MR_Word parse_tree__module_qual__qual_errors__Var_26;
              MR_Word parse_tree__module_qual__qual_errors__Var_27;
              MR_Word parse_tree__module_qual__qual_errors__Var_28;
              MR_Integer parse_tree__module_qual__qual_errors__Arity_61;
              MR_Word parse_tree__module_qual__qual_errors__PredOrFunc_62;

              *parse_tree__module_qual__qual_errors__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 1)));
              parse_tree__module_qual__qual_errors__PredOrFunc_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 2)));
              parse_tree__module_qual__qual_errors__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 3)));
              parse_tree__module_qual__qual_errors__OrigArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__ConstraintErrorContext_5, (MR_Integer) 4)));
              *parse_tree__module_qual__qual_errors__Start_7 = (MR_String) "on";
              {
                parse_tree__prog_util__adjust_func_arity_3_p_0(parse_tree__module_qual__qual_errors__PredOrFunc_62, parse_tree__module_qual__qual_errors__OrigArity_20, &parse_tree__module_qual__qual_errors__Arity_61);
              }
              {
                parse_tree__module_qual__qual_errors__Var_25 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(parse_tree__module_qual__qual_errors__PredOrFunc_62);
              }
              {
                parse_tree__module_qual__qual_errors__Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), parse_tree__module_qual__qual_errors__Var_24, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_25));
              }
              {
                parse_tree__module_qual__qual_errors__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_28, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__SymName_19));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qual_errors__Var_28, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Arity_61));
              }
              {
                parse_tree__module_qual__qual_errors__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qual_errors__Var_27, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_28));
              }
              {
                parse_tree__module_qual__qual_errors__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_26, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_27));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__module_qual__qual_errors__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_23, 0) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_24));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__Var_23, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_26));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qual_errors__Pieces_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__module_qual__qual_errors_scalar_common_1[44])));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qual_errors__Var_23));
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__qual_errors__module_name_matches_some_2_f_0(
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qual_errors__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__module_qual__qual_errors__succeeded;
        MR_Word parse_tree__module_qual__qual_errors__HeadVar__3_3;

        if ((parse_tree__module_qual__qual_errors__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__module_qual__qual_errors__HeadVar__3_3 = (MR_Integer) 0;
        else
          {
            MR_Word parse_tree__module_qual__qual_errors__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qual_errors__ModuleNames_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qual_errors__HeadVar__2_2, (MR_Integer) 1)));

            {
              parse_tree__module_qual__qual_errors__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__module_qual__qual_errors__HeadVar__1_1, parse_tree__module_qual__qual_errors__ModuleName_6);
            }
            if (parse_tree__module_qual__qual_errors__succeeded)
              parse_tree__module_qual__qual_errors__HeadVar__3_3 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__module_qual__qual_errors__next_value_of_HeadVar__2_2 = parse_tree__module_qual__qual_errors__ModuleNames_7;

                  parse_tree__module_qual__qual_errors__HeadVar__2_2 = parse_tree__module_qual__qual_errors__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return parse_tree__module_qual__qual_errors__HeadVar__3_3;
      }
      break;
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

/* :- end_module parse_tree.module_qual.qual_errors. */
