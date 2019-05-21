/*
** Automatically generated from `make_tags.m'
** by the Mercury compiler,
** version rotd-2017-08-15
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


/* :- module hlds.make_tags. */
/* :- implementation. */

/*
INIT mercury__hlds__make_tags__init
ENDINIT
*/

#include "hlds.make_tags.mih"


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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "require.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct2 hlds__make_tags__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_tags__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_tags__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_DuFunctorDesc hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_0;

static const MR_DuFunctorDesc hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_1;

static const MR_PseudoTypeInfo hlds__make_tags__hlds__make_tags__field_types_direct_arg_cond_0_2[1];

static const MR_DuFunctorDesc hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_2;

static const MR_DuFunctorDesc hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_3;

static const MR_DuFunctorDescPtr hlds__make_tags__hlds__make_tags__du_stag_ordered_direct_arg_cond_0_0[3];

static const MR_DuFunctorDescPtr hlds__make_tags__hlds__make_tags__du_stag_ordered_direct_arg_cond_0_1[1];

static const MR_DuPtagLayout hlds__make_tags__hlds__make_tags__du_ptag_ordered_direct_arg_cond_0[2];

static const MR_DuFunctorDescPtr hlds__make_tags__hlds__make_tags__du_name_ordered_direct_arg_cond_0[4];

static const MR_Integer hlds__make_tags__hlds__make_tags__functor_number_map_direct_arg_cond_0[4];

static MR_bool MR_CALL 
hlds__make_tags__IntroducedFrom__pred__is_direct_arg_ctor__597__1_2_p_0(
  MR_Integer Arity_17,
  MR_Integer HeadVar__2_52);

static MR_bool MR_CALL 
hlds__make_tags__IntroducedFrom__pred__assign_constructor_tags__131__1_2_p_0(
  MR_Integer NumReservedObjects_19,
  MR_Integer HeadVar__2_43);

static void MR_CALL 
hlds__make_tags____Compare____direct_arg_cond_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_tags____Unify____direct_arg_cond_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__make_tags__constructor_to_sym_name_and_arity_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__make_tags__is_direct_arg_ctor_6_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_tags__is_direct_arg_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word Target_8,
  MR_Word TypeCtorModule_9,
  MR_Word TypeStatus_10,
  MR_Word AssertedDirectArgCtors_11,
  MR_Word Ctor_12);

static MR_bool MR_CALL 
hlds__make_tags__is_foreign_type_for_target_3_p_0(
  MR_Word TypeBody_4,
  MR_Word Target_5,
  MR_Word * Assertions_6);

static MR_bool MR_CALL 
hlds__make_tags__is_reserved_address_tag_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * RA_3);

static void MR_CALL 
hlds__make_tags__convert_direct_arg_functors_9_p_0(
  MR_Word Target_1,
  MR_Word ModuleName_2,
  MR_Word DebugTypeRep_3,
  MR_Integer MaxTag_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeTable_0_6,
  MR_Word * STATE_VARIABLE_TypeTable_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static MR_Box MR_CALL 
hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0(
  MR_Word Target_11,
  MR_Word ModuleName_12,
  MR_Word DebugTypeRep_13,
  MR_Integer MaxTag_14,
  MR_Word TypeCtor_15,
  MR_Word TypeDefn_16,
  MR_Word STATE_VARIABLE_TypeTable_0_59,
  MR_Word * STATE_VARIABLE_TypeTable_60,
  MR_Word STATE_VARIABLE_Specs_0_61,
  MR_Word * STATE_VARIABLE_Specs_62);

static void MR_CALL 
hlds__make_tags__output_direct_arg_functor_summary_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_tags__output_direct_arg_functor_summary_5_p_0(
  MR_Word ModuleName_6,
  MR_Word TypeCtor_7,
  MR_Word DirectArgFunctorNames_8);

static void MR_CALL 
hlds__make_tags__check_incorrect_direct_arg_assertions_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4);

static void MR_CALL 
hlds__make_tags__assign_direct_arg_tags_8_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Val_0_3,
  MR_Integer * STATE_VARIABLE_Val_4,
  MR_Integer MaxTag_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_CtorTags_0_7,
  MR_Word * STATE_VARIABLE_CtorTags_8);

static void MR_CALL 
hlds__make_tags__assign_constant_tags_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Constants_8,
  MR_Integer InitTag_9,
  MR_Integer * NextTag_10,
  MR_Word STATE_VARIABLE_CtorTags_0_14,
  MR_Word * STATE_VARIABLE_CtorTags_15);

static MR_bool MR_CALL 
hlds__make_tags__assign_constructor_tags_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_tags__assign_constructor_tags_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_tags__separate_out_constants_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_tags__ctors_are_all_constants_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__make_tags__assign_shared_local_tags_6_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer PrimaryVal_3,
  MR_Integer SecondaryVal_4,
  MR_Word STATE_VARIABLE_CtorTags_0_5,
  MR_Word * STATE_VARIABLE_CtorTags_6);

static void MR_CALL 
hlds__make_tags__assign_unshared_tags_7_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer Val_3,
  MR_Integer MaxTag_4,
  MR_Word ReservedAddresses_5,
  MR_Word STATE_VARIABLE_CtorTags_0_6,
  MR_Word * STATE_VARIABLE_CtorTags_7);

static void MR_CALL 
hlds__make_tags__assign_shared_remote_tags_7_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer PrimaryVal_3,
  MR_Integer SecondaryVal_4,
  MR_Word ReservedAddresses_5,
  MR_Word STATE_VARIABLE_CtorTags_0_6,
  MR_Word * STATE_VARIABLE_CtorTags_7);

static void MR_CALL 
hlds__make_tags__assign_reserved_symbolic_addresses_9_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CtorTags_0_4,
  MR_Word * STATE_VARIABLE_CtorTags_5,
  MR_Integer Num_6,
  MR_Integer Max_7,
  MR_Word STATE_VARIABLE_ReservedAddr_0_8,
  MR_Word * STATE_VARIABLE_ReservedAddr_9);

static void MR_CALL 
hlds__make_tags__assign_reserved_numeric_addresses_9_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CtorTags_0_4,
  MR_Word * STATE_VARIABLE_CtorTags_5,
  MR_Integer Address_6,
  MR_Integer NumReservedAddresses_7,
  MR_Word STATE_VARIABLE_ReservedAddr_0_8,
  MR_Word * STATE_VARIABLE_ReservedAddr_9);

static void MR_CALL 
hlds__make_tags__assign_enum_constants_5_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer Val_3,
  MR_Word STATE_VARIABLE_CtorTags_0_4,
  MR_Word * STATE_VARIABLE_CtorTags_5);

static MR_bool MR_CALL 
hlds__make_tags____Unify____direct_arg_cond_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_tags____Compare____direct_arg_cond_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_tags_scalar_common_1[7][2];

static /* final */ const MR_Box hlds__make_tags_scalar_common_2[3][5];

static /* final */ const MR_Box hlds__make_tags_scalar_common_3[3][3];

static /* final */ const MR_Box hlds__make_tags_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__make_tags_scalar_common_5[1][9];




static /* final */ const MR_Box hlds__make_tags_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "sole argument."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_tags_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_tags_scalar_common_1[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be represented as a direct pointer to its"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_tags_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_tags_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
};

static /* final */ const MR_Box hlds__make_tags_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
};

static /* final */ const MR_Box hlds__make_tags_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_tags_scalar_common_2[1])),
    ((MR_Box) (hlds__make_tags__assign_constructor_tags_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_tags_scalar_common_4[0])),
    ((MR_Box) (hlds__make_tags__output_direct_arg_functor_summary_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_tags_scalar_common_2[2])),
    ((MR_Box) (hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_tags_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__make_tags_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__make_tags__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&hlds__make_tags__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 hlds__make_tags__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_tags__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__make_tags__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_tags__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

static const MR_DuFunctorDesc hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_0 = {
  (MR_String) "direct_arg_asserted",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_1 = {
  (MR_String) "arg_type_is_word_aligned_pointer",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__make_tags__hlds__make_tags__field_types_direct_arg_cond_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_type_status_0
};

static const MR_DuFunctorDesc hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_2 = {
  (MR_String) "arg_type_defined_in_same_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__make_tags__hlds__make_tags__field_types_direct_arg_cond_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_3 = {
  (MR_String) "arg_type_defined_in_different_module",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__make_tags__hlds__make_tags__du_stag_ordered_direct_arg_cond_0_0[3] = {
  &hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_0,
  &hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_1,
  &hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_3
};

static const MR_DuFunctorDescPtr hlds__make_tags__hlds__make_tags__du_stag_ordered_direct_arg_cond_0_1[1] = {
  &hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_2
};

static const MR_DuPtagLayout hlds__make_tags__hlds__make_tags__du_ptag_ordered_direct_arg_cond_0[2] = {
  {
    (MR_Integer) 3,
    MR_SECTAG_LOCAL,
    hlds__make_tags__hlds__make_tags__du_stag_ordered_direct_arg_cond_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__make_tags__hlds__make_tags__du_stag_ordered_direct_arg_cond_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__make_tags__hlds__make_tags__du_name_ordered_direct_arg_cond_0[4] = {
  &hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_3,
  &hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_2,
  &hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_1,
  &hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_0
};

static const MR_Integer hlds__make_tags__hlds__make_tags__functor_number_map_direct_arg_cond_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_tags__hlds__make_tags__type_ctor_info_direct_arg_cond_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_tags____Unify____direct_arg_cond_0_0_10001)),
  ((MR_Box) (hlds__make_tags____Compare____direct_arg_cond_0_0_10001)),
  (MR_String) "hlds.make_tags",
  (MR_String) "direct_arg_cond",
  {     hlds__make_tags__hlds__make_tags__du_name_ordered_direct_arg_cond_0 },
  {     hlds__make_tags__hlds__make_tags__du_ptag_ordered_direct_arg_cond_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__make_tags__hlds__make_tags__functor_number_map_direct_arg_cond_0
};

static MR_bool MR_CALL 
hlds__make_tags__IntroducedFrom__pred__is_direct_arg_ctor__597__1_2_p_0(
  MR_Integer Arity_17,
  MR_Integer HeadVar__2_52)
{
  {
    MR_bool succeeded = (Arity_17 == HeadVar__2_52);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_tags__IntroducedFrom__pred__assign_constructor_tags__131__1_2_p_0(
  MR_Integer NumReservedObjects_19,
  MR_Integer HeadVar__2_43)
{
  {
    MR_bool succeeded = (NumReservedObjects_19 == HeadVar__2_43);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_tags____Compare____direct_arg_cond_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  hlds__status____Compare____type_status_0_0(HeadVar__1_1, Var_15, ArgY1_9);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
hlds__make_tags____Unify____direct_arg_cond_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = hlds__status____Unify____type_status_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_tags__constructor_to_sym_name_and_arity_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
    MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word _Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Name_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_7));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__make_tags__is_direct_arg_ctor_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_tags__IntroducedFrom__pred__is_direct_arg_ctor__597__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_tags__is_direct_arg_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word Target_8,
  MR_Word TypeCtorModule_9,
  MR_Word TypeStatus_10,
  MR_Word AssertedDirectArgCtors_11,
  MR_Word Ctor_12)
{
  {
    MR_bool succeeded;
    MR_Word ExistQTVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 0)));
    MR_Word ExistConstraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 1)));
    MR_Word ConsName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 2)));
    MR_Word ConsArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 3)));
    MR_Integer Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 4)));
    MR_Word ConsArg_19;
    MR_Word ArgType_21;
    MR_Word ArgTypeCtor_24;
    MR_Word ArgTypeCtorArgTypes_25;
    MR_Word ArgCond_26;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_String Var_49;
    MR_String Var_50;
    MR_String Var_51;
    MR_Integer Var_52;
    MR_Word OldImportStatus_70;
    MR_Word _CtorContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 5)));
    MR_Word _MaybeFieldName_20;
    MR_Word _ArgWidth_22;
    MR_Word _ArgContext_23;
    MR_Word TypeCtorInfo_62_62;
    MR_Word Var_53;
    MR_Word Var_54;

    succeeded = (ExistQTVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = (ExistConstraints_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ConsArgs_16)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ConsArg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsArgs_16, (MR_Integer) 0)));
          Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsArgs_16, (MR_Integer) 1)));
          succeeded = (Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            Var_52 = (MR_Integer) 1;
            Var_49 = (MR_String) "hlds.make_tags";
            Var_50 = (MR_String) "predicate \140hlds.make_tags.is_direct_arg_ctor\'/6";
            Var_51 = (MR_String) "Arity != 1";
            {
              Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&hlds__make_tags_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (hlds__make_tags__is_direct_arg_ctor_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (Arity_17));
              MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Var_52));
            }
            mercury__require__expect_4_p_0(Var_48, Var_49, Var_50, Var_51);
            _MaybeFieldName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_19, (MR_Integer) 0)));
            ArgType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_19, (MR_Integer) 1)));
            _ArgWidth_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_19, (MR_Integer) 2)));
            _ArgContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_19, (MR_Integer) 3)));
            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ArgType_21, &ArgTypeCtor_24, &ArgTypeCtorArgTypes_25);
            if (succeeded)
            {
              Var_53 = hlds__status__type_status_is_imported_1_f_0(TypeStatus_10);
              succeeded = (Var_53 == (MR_Integer) 1);
              if (succeeded)
              {
                TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
                {
                  Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (ConsName_15));
                  MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Arity_17));
                }
                succeeded = mercury__list__contains_2_p_0(TypeCtorInfo_62_62, AssertedDirectArgCtors_11, ((MR_Box) (Var_54)));
              }
              if (succeeded)
              {
                ArgCond_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(ArgTypeCtor_24);
                if (succeeded)
                {
                  ArgCond_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word ArgTypeDefn_27;
                  MR_Word ArgBody_28;
                  MR_Word Assertions_29;

                  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, ArgTypeCtor_24, &ArgTypeDefn_27);
                  if (succeeded)
                  {
                    hlds__hlds_data__get_type_defn_body_2_p_0(ArgTypeDefn_27, &ArgBody_28);
                    succeeded = hlds__make_tags__is_foreign_type_for_target_3_p_0(ArgBody_28, Target_8, &Assertions_29);
                    if (succeeded)
                    {
                      succeeded = hlds__hlds_data__asserted_word_aligned_pointer_1_p_0(Assertions_29);
                      if (succeeded)
                      {
                        ArgCond_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                        succeeded = MR_TRUE;
                      }
                    }
                    else
                    {
                      MR_Word TypeCtorInfo_63_63;
                      MR_Word TypeCtorInfo_64_64;
                      MR_Word ArgCtors_30;
                      MR_Word ArgConsTagValues_31;
                      MR_Word ArgMaybeCheaperTagTest_32;
                      MR_Word ArgDuKind_33;
                      MR_Word ArgDirectArgCtors_35;
                      MR_Word ArgReservedTag_36;
                      MR_Word ArgReservedAddr_37;
                      MR_Word ArgMaybeForeign_38;
                      MR_Word ArgConsTagValueList_40;
                      MR_Word ArgConsTagValue_41;
                      MR_Word Var_55;
                      MR_Word Var_56;
                      MR_Word Var_57;
                      MR_Word _ArgMaybeUserEqComp_34;
                      MR_Word Var_39;
                      MR_Word _ConsId_42;
                      MR_Word TypeCtorInfo_65_65;
                      MR_Word Var_58;
                      MR_Word Var_59;

                      succeeded = (ArgTypeCtorArgTypes_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) ArgBody_28)) == (MR_mktag((MR_Integer) 1)));
                        if (succeeded)
                        {
                          ArgCtors_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgBody_28, (MR_Integer) 0)));
                          ArgConsTagValues_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgBody_28, (MR_Integer) 1)));
                          ArgMaybeCheaperTagTest_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgBody_28, (MR_Integer) 2)));
                          ArgDuKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgBody_28, (MR_Integer) 3)));
                          _ArgMaybeUserEqComp_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgBody_28, (MR_Integer) 4)));
                          ArgDirectArgCtors_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgBody_28, (MR_Integer) 5)));
                          ArgReservedTag_36 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ArgBody_28, (MR_Integer) 6)))) & (MR_Integer) 1);
                          ArgReservedAddr_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ArgBody_28, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                          ArgMaybeForeign_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgBody_28, (MR_Integer) 7)));
                          succeeded = (ArgMaybeCheaperTagTest_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            succeeded = (ArgDuKind_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                            if (succeeded)
                            {
                              succeeded = (ArgDirectArgCtors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = (ArgReservedTag_36 == (MR_Integer) 1);
                                if (succeeded)
                                {
                                  succeeded = (ArgReservedAddr_37 == (MR_Integer) 1);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgMaybeForeign_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (succeeded)
                                    {
                                      succeeded = ((MR_tag((MR_Word) ArgCtors_30)) == (MR_mktag((MR_Integer) 1)));
                                      if (succeeded)
                                      {
                                        Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgCtors_30, (MR_Integer) 0)));
                                        Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgCtors_30, (MR_Integer) 1)));
                                        succeeded = (Var_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (succeeded)
                                        {
                                          TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                                          TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
                                          mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_63_63, TypeCtorInfo_64_64, ArgConsTagValues_31, &ArgConsTagValueList_40);
                                          succeeded = ((MR_tag((MR_Word) ArgConsTagValueList_40)) == (MR_mktag((MR_Integer) 1)));
                                          if (succeeded)
                                          {
                                            ArgConsTagValue_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgConsTagValueList_40, (MR_Integer) 0)));
                                            Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgConsTagValueList_40, (MR_Integer) 1)));
                                            succeeded = (Var_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (succeeded)
                                            {
                                              _ConsId_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgConsTagValue_41, (MR_Integer) 0)));
                                              Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgConsTagValue_41, (MR_Integer) 1)));
                                              succeeded = (Var_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (succeeded)
                                              {
                                                Var_58 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_10);
                                                succeeded = (Var_58 == (MR_Integer) 1);
                                                if (succeeded)
                                                {
                                                  TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
                                                  {
                                                    Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                    MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (ConsName_15));
                                                    MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (Arity_17));
                                                  }
                                                  succeeded = mercury__list__contains_2_p_0(TypeCtorInfo_65_65, AssertedDirectArgCtors_11, ((MR_Box) (Var_59)));
                                                }
                                                if (succeeded)
                                                {
                                                  ArgCond_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  MR_Word ArgTypeCtorSymName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypeCtor_24, (MR_Integer) 0)));
                                                  MR_Word ArgTypeCtorModule_45;
                                                  MR_Integer _ArgTypeCtorArity_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ArgTypeCtor_24, (MR_Integer) 1)));

                                                  succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(ArgTypeCtorSymName_43, &ArgTypeCtorModule_45);
                                                  if (succeeded)
                                                  {
                                                    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeCtorModule_9, ArgTypeCtorModule_45);
                                                    if (succeeded)
                                                    {
                                                      MR_Word ArgTypeStatus_46;

                                                      hlds__hlds_data__get_type_defn_status_2_p_0(ArgTypeDefn_27, &ArgTypeStatus_46);
                                                      {
                                                        ArgCond_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(1), ArgCond_26, 0) = ((MR_Box) (ArgTypeStatus_46));
                                                      }
                                                    }
                                                    else
                                                      ArgCond_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                OldImportStatus_70 = (MR_Word) TypeStatus_10;
                switch (MR_tag((MR_Word) OldImportStatus_70)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(OldImportStatus_70)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                        succeeded = (ArgCond_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 6:
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_tags", (MR_String) "function \140hlds.make_tags.module_visibilities_allow_direct_arg\'/2", (MR_String) "inappropriate status for type");
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                      case (MR_Integer) 7:
                        switch (MR_tag((MR_Word) ArgCond_26)) {
                          default:
                            succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(ArgCond_26)) {
                              default:
                                succeeded = MR_FALSE;
                                break;
                              case (MR_Integer) 0:
                              case (MR_Integer) 1:
                                succeeded = MR_TRUE;
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word ArgTypeStatus_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgCond_26, (MR_Integer) 0)));
                              MR_Word ArgOldTypeStatus_72 = (MR_Word) ArgTypeStatus_71;

                              if ((OldImportStatus_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
                                succeeded = (ArgOldTypeStatus_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                              else
                                switch (MR_tag((MR_Word) ArgOldTypeStatus_72)) {
                                  default:
                                    succeeded = MR_FALSE;
                                    break;
                                  case (MR_Integer) 0:
                                    switch (MR_unmkbody(ArgOldTypeStatus_72)) {
                                      default:
                                        succeeded = MR_FALSE;
                                        break;
                                      case (MR_Integer) 3:
                                        succeeded = MR_TRUE;
                                        break;
                                      case (MR_Integer) 5:
                                        succeeded = MR_TRUE;
                                        break;
                                      case (MR_Integer) 7:
                                        succeeded = MR_TRUE;
                                        break;
                                    }
                                    break;
                                }
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 4:
                        succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 5:
                      case (MR_Integer) 8:
                        succeeded = MR_TRUE;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_tags", (MR_String) "function \140hlds.make_tags.module_visibilities_allow_direct_arg\'/2", (MR_String) "inappropriate status for type");
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word TypeImportLocn_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), OldImportStatus_70, (MR_Integer) 0)));

                      switch (MR_tag((MR_Word) ArgCond_26)) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ArgCond_26)) {
                            default:
                              succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 0:
                            case (MR_Integer) 1:
                              succeeded = MR_TRUE;
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ArgImportLocn_74;
                            MR_Word Var_80;
                            MR_Word ArgTypeStatus_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgCond_26, (MR_Integer) 0)));

                            Var_80 = (MR_Word) ArgTypeStatus_81;
                            succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_mktag((MR_Integer) 2)));
                            if (succeeded)
                            {
                              ArgImportLocn_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_80, (MR_Integer) 0)));
                              succeeded = (ArgImportLocn_74 == (MR_Integer) 3);
                              if (succeeded)
                              {
                                succeeded = (TypeImportLocn_73 == (MR_Integer) 3);
                                succeeded = !(succeeded);
                              }
                              succeeded = !(succeeded);
                            }
                          }
                          break;
                      }
                    }
                    break;
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_tags__is_foreign_type_for_target_3_p_0(
  MR_Word TypeBody_4,
  MR_Word Target_5,
  MR_Word * Assertions_6)
{
  {
    MR_bool succeeded;
    MR_Word ForeignType_16;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;

    if (((MR_tag((MR_Word) TypeBody_4)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word MaybeForeignType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 7)));
      MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 0)));
      MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 1)));
      MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 2)));
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 3)));
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 4)));
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 5)));
      MR_Word Var_13 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 6)))) & (MR_Integer) 1);
      MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

      succeeded = ((MR_tag((MR_Word) MaybeForeignType_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        ForeignType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeForeignType_15, (MR_Integer) 0)));
    }
    else
    if (((MR_tag((MR_Word) TypeBody_4)) == (MR_mktag((MR_Integer) 0))))
    {
      ForeignType_16 = (MR_Word) MR_body(((MR_Word) TypeBody_4), (MR_Integer) 0);
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_16, (MR_Integer) 0)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_16, (MR_Integer) 1)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_16, (MR_Integer) 2)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_16, (MR_Integer) 3)));
      switch (Target_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_32;
            MR_Word Var_17;
            MR_Word Var_18;

            succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0)));
              Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0)));
              Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1)));
              *Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 2)));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_28;
            MR_Word Var_21;
            MR_Word Var_22;

            succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0)));
              Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0)));
              Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1)));
              *Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 2)));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_26;
            MR_Word Var_24;

            succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0)));
              Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1)));
              *Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 2)));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_30;
            MR_Word Var_19;
            MR_Word Var_20;

            succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0)));
              Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1)));
              *Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 2)));
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_tags__is_reserved_address_tag_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * RA_3)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15)));

    if (succeeded)
      *RA_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
    return succeeded;
  }
}

void MR_CALL 
hlds__make_tags__post_process_type_defns_3_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word * Specs_5)
{
  {
    MR_bool succeeded;
    MR_Word Globals_6;
    MR_Word Target_7;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_6);
    libs__globals__get_target_2_p_0(Globals_6, &Target_7);
    switch (Target_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermSizeWords_8;
          MR_Word TermSizeCells_9;

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 223, &TermSizeWords_8);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 224, &TermSizeCells_9);
          succeeded = (TermSizeWords_8 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (TermSizeCells_9 == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word TypeTable0_10;
            MR_Word ModuleName_11;
            MR_Word TypeCtorsDefns_12;
            MR_Integer NumTagBits_13;
            MR_Word DebugTypeRep_14;
            MR_Integer MaxTag_15;
            MR_Word TypeTable_16;
            MR_Integer Var_23;

            hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_HLDS_0_17, &TypeTable0_10);
            hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_17, &ModuleName_11);
            hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable0_10, &TypeCtorsDefns_12);
            libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 248, &NumTagBits_13);
            libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 93, &DebugTypeRep_14);
            mercury__int__pow_3_p_0((MR_Integer) 2, NumTagBits_13, &Var_23);
            MaxTag_15 = (Var_23 - (MR_Integer) 1);
            hlds__make_tags__convert_direct_arg_functors_9_p_0(Target_7, ModuleName_11, DebugTypeRep_14, MaxTag_15, TypeCtorsDefns_12, TypeTable0_10, &TypeTable_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Specs_5);
            hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_16, STATE_VARIABLE_HLDS_0_17, STATE_VARIABLE_HLDS_18);
          }
          else
          {
            *Specs_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          *Specs_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_tags__convert_direct_arg_functors_9_p_0(
  MR_Word Target_1,
  MR_Word ModuleName_2,
  MR_Word DebugTypeRep_3,
  MR_Integer MaxTag_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeTable_0_6,
  MR_Word * STATE_VARIABLE_TypeTable_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_TypeTable_7 = STATE_VARIABLE_TypeTable_0_6;
    }
    else
    {
      MR_Word TypeCtorDefn_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
      MR_Word TypeCtorsDefns_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
      MR_Word TypeCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorDefn_24, (MR_Integer) 0)));
      MR_Word TypeDefn_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorDefn_24, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_TypeTable_34_34;
      MR_Word STATE_VARIABLE_Specs_35_35;

      hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0(Target_1, ModuleName_2, DebugTypeRep_3, MaxTag_4, TypeCtor_28, TypeDefn_29, STATE_VARIABLE_TypeTable_0_6, &STATE_VARIABLE_TypeTable_34_34, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_35_35);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__5_5 = TypeCtorsDefns_25;
        MR_Word next_value_of_STATE_VARIABLE_TypeTable_0_6 = STATE_VARIABLE_TypeTable_34_34;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_35_35;

        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_TypeTable_0_6 = next_value_of_STATE_VARIABLE_TypeTable_0_6;
        STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      }
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__make_tags__constructor_to_sym_name_and_arity_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_tags__is_direct_arg_ctor_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0(
  MR_Word Target_11,
  MR_Word ModuleName_12,
  MR_Word DebugTypeRep_13,
  MR_Integer MaxTag_14,
  MR_Word TypeCtor_15,
  MR_Word TypeDefn_16,
  MR_Word STATE_VARIABLE_TypeTable_0_59,
  MR_Word * STATE_VARIABLE_TypeTable_60,
  MR_Word STATE_VARIABLE_Specs_0_61,
  MR_Word * STATE_VARIABLE_Specs_62)
{
  {
    MR_bool succeeded;
    MR_Word Body_19;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_16, &Body_19);
    switch (MR_tag((MR_Word) Body_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_TypeTable_60 = STATE_VARIABLE_TypeTable_0_59;
          *STATE_VARIABLE_Specs_62 = STATE_VARIABLE_Specs_0_61;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 0)));
          MR_Word DuKind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 3)));
          MR_Word MaybeUserEqComp_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 4)));
          MR_Word MaybeAssertedDirectArgCtors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 5)));
          MR_Word ReservedTag_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word ReservedAddr_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word MaybeForeign_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 7)));
          MR_Word _ConsTagValues_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 1)));
          MR_Word _MaybeCheaperTagTest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 2)));
          MR_Word TypeCtorModule_34;
          MR_Word TypeCtorSymName_32;
          MR_Word Var_63;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Integer _TypeCtorArity_33;

          succeeded = (DuKind_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          if (succeeded)
          {
            succeeded = (ReservedTag_26 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (ReservedAddr_27 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = (MaybeForeign_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Ctors_20)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_20, (MR_Integer) 0)));
                    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_20, (MR_Integer) 1)));
                    succeeded = ((MR_tag((MR_Word) Var_63)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 0)));
                      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 1)));
                      TypeCtorSymName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0)));
                      _TypeCtorArity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1)));
                      succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(TypeCtorSymName_32, &TypeCtorModule_34);
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word TypeCtorInfo_82_82;
            MR_Word TypeStatus_35;
            MR_Word AssertedDirectArgFunctors_36;
            MR_Word Constants_37;
            MR_Word Functors_38;
            MR_Word DirectArgFunctors_39;
            MR_Word NonDirectArgFunctors_40;
            MR_Word Var_64;
            MR_Word Ctor_88;
            MR_Word Ctors_89;
            MR_Word Constants0_92;
            MR_Word Functors0_93;
            MR_Word Args_94;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Integer Var_100;
            MR_Word Var_101;

            hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_16, &TypeStatus_35);
            if ((MaybeAssertedDirectArgCtors_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              AssertedDirectArgFunctors_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              AssertedDirectArgFunctors_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeAssertedDirectArgCtors_25, (MR_Integer) 0)));
            Ctor_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_20, (MR_Integer) 0)));
            Ctors_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_20, (MR_Integer) 1)));
            hlds__make_tags__separate_out_constants_3_p_0(Ctors_89, &Constants0_92, &Functors0_93);
            Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_88, (MR_Integer) 0)));
            Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_88, (MR_Integer) 1)));
            Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_88, (MR_Integer) 2)));
            Args_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_88, (MR_Integer) 3)));
            Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_88, (MR_Integer) 4)));
            Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_88, (MR_Integer) 5)));
            if ((Args_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                Constants_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Constants_37, 0) = ((MR_Box) (Ctor_88));
                MR_hl_field(MR_mktag(1), Constants_37, 1) = ((MR_Box) (Constants0_92));
              }
              Functors_38 = Functors0_93;
            }
            else
            {
              Constants_37 = Constants0_92;
              {
                Functors_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Functors_38, 0) = ((MR_Box) (Ctor_88));
                MR_hl_field(MR_mktag(1), Functors_38, 1) = ((MR_Box) (Functors0_93));
              }
            }
            {
              Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&hlds__make_tags_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0_1));
              MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (STATE_VARIABLE_TypeTable_0_59));
              MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (Target_11));
              MR_hl_field(MR_mktag(0), Var_64, 5) = ((MR_Box) (TypeCtorModule_34));
              MR_hl_field(MR_mktag(0), Var_64, 6) = ((MR_Box) (TypeStatus_35));
              MR_hl_field(MR_mktag(0), Var_64, 7) = ((MR_Box) (AssertedDirectArgFunctors_36));
            }
            TypeCtorInfo_82_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
            mercury__list__filter_4_p_0(TypeCtorInfo_82_82, Var_64, Functors_38, &DirectArgFunctors_39, &NonDirectArgFunctors_40);
            if ((DirectArgFunctors_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *STATE_VARIABLE_TypeTable_60 = STATE_VARIABLE_TypeTable_0_59;
            else
            {
              MR_Integer MaxTagForDirect_45;
              MR_Word LeftOverDirectArgFunctors_48;
              MR_Word DirectArgConsTagValues_49;
              MR_Word MaybeCheaperTagTest_50;
              MR_Word DirectArgFunctorNames_51;
              MR_Word DirectArgBody_53;
              MR_Word DirectArgTypeDefn_54;
              MR_Word STATE_VARIABLE_CtorTags_66_66;
              MR_Integer STATE_VARIABLE_NextTag_67_67;
              MR_Word STATE_VARIABLE_CtorTags_68_68;
              MR_Integer STATE_VARIABLE_NextTag_70_70;
              MR_Word STATE_VARIABLE_CtorTags_71_71;
              MR_Word Var_72;
              MR_Word Var_78;

              mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, &STATE_VARIABLE_CtorTags_66_66);
              hlds__make_tags__assign_constant_tags_6_p_0(TypeCtor_15, Constants_37, (MR_Integer) 0, &STATE_VARIABLE_NextTag_67_67, STATE_VARIABLE_CtorTags_66_66, &STATE_VARIABLE_CtorTags_68_68);
              if ((NonDirectArgFunctors_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                MaxTagForDirect_45 = MaxTag_14;
              else
              {
                MaxTagForDirect_45 = (MaxTag_14 - (MR_Integer) 1);
              }
              hlds__make_tags__assign_direct_arg_tags_8_p_0(TypeCtor_15, DirectArgFunctors_39, STATE_VARIABLE_NextTag_67_67, &STATE_VARIABLE_NextTag_70_70, MaxTagForDirect_45, &LeftOverDirectArgFunctors_48, STATE_VARIABLE_CtorTags_68_68, &STATE_VARIABLE_CtorTags_71_71);
              Var_72 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_82_82, LeftOverDirectArgFunctors_48, NonDirectArgFunctors_40);
              hlds__make_tags__assign_unshared_tags_7_p_0(TypeCtor_15, Var_72, STATE_VARIABLE_NextTag_70_70, MaxTag_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_CtorTags_71_71, &DirectArgConsTagValues_49);
              hlds__make_tags__compute_cheaper_tag_test_2_p_0(DirectArgConsTagValues_49, &MaybeCheaperTagTest_50);
              DirectArgFunctorNames_51 = mercury__list__map_2_f_0(TypeCtorInfo_82_82, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, (MR_Word) &hlds__make_tags_scalar_common_3[2], DirectArgFunctors_39);
              switch (DebugTypeRep_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__make_tags__output_direct_arg_functor_summary_5_p_0(ModuleName_12, TypeCtor_15, DirectArgFunctorNames_51);
                  break;
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (DirectArgFunctorNames_51));
              }
              {
                DirectArgBody_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DirectArgBody_53, 0) = ((MR_Box) (Ctors_20));
                MR_hl_field(MR_mktag(1), DirectArgBody_53, 1) = ((MR_Box) (DirectArgConsTagValues_49));
                MR_hl_field(MR_mktag(1), DirectArgBody_53, 2) = ((MR_Box) (MaybeCheaperTagTest_50));
                MR_hl_field(MR_mktag(1), DirectArgBody_53, 3) = ((MR_Box) (DuKind_23));
                MR_hl_field(MR_mktag(1), DirectArgBody_53, 4) = ((MR_Box) (MaybeUserEqComp_24));
                MR_hl_field(MR_mktag(1), DirectArgBody_53, 5) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(1), DirectArgBody_53, 6) = ((MR_Box) ((ReservedTag_26 | ((ReservedAddr_27 << (MR_Integer) 1)))));
                MR_hl_field(MR_mktag(1), DirectArgBody_53, 7) = ((MR_Box) (MaybeForeign_28));
              }
              hlds__hlds_data__set_type_defn_body_3_p_0(DirectArgBody_53, TypeDefn_16, &DirectArgTypeDefn_54);
              hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_15, DirectArgTypeDefn_54, STATE_VARIABLE_TypeTable_0_59, STATE_VARIABLE_TypeTable_60);
            }
            hlds__make_tags__check_incorrect_direct_arg_assertions_4_p_0(AssertedDirectArgFunctors_36, NonDirectArgFunctors_40, STATE_VARIABLE_Specs_0_61, STATE_VARIABLE_Specs_62);
          }
          else
          {
            *STATE_VARIABLE_Specs_62 = STATE_VARIABLE_Specs_0_61;
            *STATE_VARIABLE_TypeTable_60 = STATE_VARIABLE_TypeTable_0_59;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_TypeTable_60 = STATE_VARIABLE_TypeTable_0_59;
          *STATE_VARIABLE_Specs_62 = STATE_VARIABLE_Specs_0_61;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body_19, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_TypeTable_60 = STATE_VARIABLE_TypeTable_0_59;
              *STATE_VARIABLE_Specs_62 = STATE_VARIABLE_Specs_0_61;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_TypeTable_60 = STATE_VARIABLE_TypeTable_0_59;
              *STATE_VARIABLE_Specs_62 = STATE_VARIABLE_Specs_0_61;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_tags__output_direct_arg_functor_summary_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__prog_out__write_sym_name_and_arity_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
hlds__make_tags__output_direct_arg_functor_summary_5_p_0(
  MR_Word ModuleName_6,
  MR_Word TypeCtor_7,
  MR_Word DirectArgFunctorNames_8)
{
  {
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_6);
    mercury__io__write_string_3_p_0((MR_String) " : ");
    parse_tree__prog_out__write_type_ctor_3_p_0(TypeCtor_7);
    mercury__io__write_string_3_p_0((MR_String) " : ");
    mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, DirectArgFunctorNames_8, (MR_String) ", ", (MR_Word) &hlds__make_tags_scalar_common_3[1]);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__make_tags__check_incorrect_direct_arg_assertions_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_4 = STATE_VARIABLE_Specs_0_3;
    else
    {
      MR_Word Ctor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Specs_46_46;
      MR_Word Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 5)));
      MR_Word Var_24;
      MR_Word SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 2)));
      MR_Integer Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 4)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 0)));
      MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 1)));
      MR_Word _Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 3)));

      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (SymName_15));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Arity_17));
      }
      succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, HeadVar__1_1, ((MR_Box) (Var_24)));
      if (succeeded)
      {
        MR_Word Pieces_19;
        MR_Word Msg_20;
        MR_Word Spec_21;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_44;

        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_24));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_tags_scalar_common_1[4])));
        }
        {
          Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_tags_scalar_common_1[6])));
          MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_27));
        }
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Pieces_19));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_20, 0) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(0), Msg_20, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Msg_20));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_44));
        }
        {
          STATE_VARIABLE_Specs_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_46_46, 0) = ((MR_Box) (Spec_21));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_46_46, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_3));
        }
      }
      else
        STATE_VARIABLE_Specs_46_46 = STATE_VARIABLE_Specs_0_3;
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__2_2 = Ctors_11;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_3 = STATE_VARIABLE_Specs_46_46;

        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Specs_0_3 = next_value_of_STATE_VARIABLE_Specs_0_3;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_tags__assign_direct_arg_tags_8_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Val_0_3,
  MR_Integer * STATE_VARIABLE_Val_4,
  MR_Integer MaxTag_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_CtorTags_0_7,
  MR_Word * STATE_VARIABLE_CtorTags_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_CtorTags_8 = STATE_VARIABLE_CtorTags_0_7;
      *STATE_VARIABLE_Val_4 = STATE_VARIABLE_Val_0_3;
    }
    else
    {
      MR_Word Ctor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 2)));
      MR_Integer Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 4)));
      MR_Word ConsId_30;
      MR_Word _ExistQVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 0)));
      MR_Word _Constraints_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 1)));
      MR_Word _Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 3)));
      MR_Word _Ctxt_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 5)));
      MR_Word Var_31;
      MR_Word Var_32;

      {
        ConsId_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_30, 1) = ((MR_Box) (Name_26));
        MR_hl_field(MR_mktag(3), ConsId_30, 2) = ((MR_Box) (Arity_28));
        MR_hl_field(MR_mktag(3), ConsId_30, 3) = ((MR_Box) (TypeCtor_1));
      }
      succeeded = (STATE_VARIABLE_Val_0_3 == MaxTag_5);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Ctors_19)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_19, (MR_Integer) 0)));
          Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_19, (MR_Integer) 1)));
        }
      }
      if (succeeded)
      {
        *HeadVar__6_6 = HeadVar__2_2;
        *STATE_VARIABLE_CtorTags_8 = STATE_VARIABLE_CtorTags_0_7;
        *STATE_VARIABLE_Val_4 = STATE_VARIABLE_Val_0_3;
      }
      else
      {
        MR_Word Tag_33;
        MR_Word STATE_VARIABLE_CtorTags_38_38;
        MR_Integer STATE_VARIABLE_Val_39_39;

        {
          Tag_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Tag_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), Tag_33, 1) = ((MR_Box) (STATE_VARIABLE_Val_0_3));
        }
        mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_30)), ((MR_Box) (Tag_33)), STATE_VARIABLE_CtorTags_0_7, &STATE_VARIABLE_CtorTags_38_38);
        STATE_VARIABLE_Val_39_39 = (STATE_VARIABLE_Val_0_3 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Word next_value_of_HeadVar__2_2 = Ctors_19;
          MR_Integer next_value_of_STATE_VARIABLE_Val_0_3 = STATE_VARIABLE_Val_39_39;
          MR_Word next_value_of_STATE_VARIABLE_CtorTags_0_7 = STATE_VARIABLE_CtorTags_38_38;

          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Val_0_3 = next_value_of_STATE_VARIABLE_Val_0_3;
          STATE_VARIABLE_CtorTags_0_7 = next_value_of_STATE_VARIABLE_CtorTags_0_7;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_tags__assign_constant_tags_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Constants_8,
  MR_Integer InitTag_9,
  MR_Integer * NextTag_10,
  MR_Word STATE_VARIABLE_CtorTags_0_14,
  MR_Word * STATE_VARIABLE_CtorTags_15)
{
  if ((Constants_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *NextTag_10 = InitTag_9;
    *STATE_VARIABLE_CtorTags_15 = STATE_VARIABLE_CtorTags_0_14;
  }
  else
  {
    MR_Word Ctor_26;
    MR_Word Ctors_27;
    MR_Word Name_33;
    MR_Integer Arity_35;
    MR_Word ConsId_37;
    MR_Word Tag_38;
    MR_Word STATE_VARIABLE_CtorTags_29_41;
    MR_Word _ExistQVars_31;
    MR_Word _Constraints_32;
    MR_Word _Args_34;
    MR_Word _Ctxt_36;

    *NextTag_10 = (InitTag_9 + (MR_Integer) 1);
    Ctor_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constants_8, (MR_Integer) 0)));
    Ctors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constants_8, (MR_Integer) 1)));
    _ExistQVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_26, (MR_Integer) 0)));
    _Constraints_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_26, (MR_Integer) 1)));
    Name_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_26, (MR_Integer) 2)));
    _Args_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_26, (MR_Integer) 3)));
    Arity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_26, (MR_Integer) 4)));
    _Ctxt_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_26, (MR_Integer) 5)));
    {
      ConsId_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConsId_37, 1) = ((MR_Box) (Name_33));
      MR_hl_field(MR_mktag(3), ConsId_37, 2) = ((MR_Box) (Arity_35));
      MR_hl_field(MR_mktag(3), ConsId_37, 3) = ((MR_Box) (TypeCtor_7));
    }
    {
      Tag_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Tag_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), Tag_38, 1) = ((MR_Box) (InitTag_9));
      MR_hl_field(MR_mktag(3), Tag_38, 2) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_37)), ((MR_Box) (Tag_38)), STATE_VARIABLE_CtorTags_0_14, &STATE_VARIABLE_CtorTags_29_41);
    hlds__make_tags__assign_shared_local_tags_6_p_0(TypeCtor_7, Ctors_27, InitTag_9, ((MR_Integer) 0 + (MR_Integer) 1), STATE_VARIABLE_CtorTags_29_41, STATE_VARIABLE_CtorTags_15);
  }
}

void MR_CALL 
hlds__make_tags__compute_cheaper_tag_test_2_p_0(
  MR_Word CtorTagMap_3,
  MR_Word * CheaperTagTest_4)
{
  {
    MR_bool succeeded;
    MR_Word ConsIdA_6;
    MR_Word ConsTagA_7;
    MR_Word ConsIdB_8;
    MR_Word ConsTagB_9;
    MR_Integer ArityA_11;
    MR_Integer ArityB_14;
    MR_Word CtorTagList_5;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_10;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_15;

    mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, CtorTagMap_3, &CtorTagList_5);
    succeeded = ((MR_tag((MR_Word) CtorTagList_5)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorTagList_5, (MR_Integer) 0)));
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorTagList_5, (MR_Integer) 1)));
      ConsIdA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
      ConsTagA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0)));
        Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1)));
        succeeded = (Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          ConsIdB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
          ConsTagB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
          succeeded = ((((MR_tag((MR_Word) ConsIdA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsIdA_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsIdA_6, (MR_Integer) 1)));
            ArityA_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsIdA_6, (MR_Integer) 2)));
            Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsIdA_6, (MR_Integer) 3)));
            succeeded = ((((MR_tag((MR_Word) ConsIdB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsIdB_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsIdB_8, (MR_Integer) 1)));
              ArityB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsIdB_8, (MR_Integer) 2)));
              Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsIdB_8, (MR_Integer) 3)));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Integer Var_20;

      succeeded = (ArityB_14 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = (MR_Integer) 0;
        succeeded = (ArityA_11 > Var_20);
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *CheaperTagTest_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsIdA_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConsTagA_7));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ConsIdB_8));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ConsTagB_9));
        }
      else
      {
        MR_Integer Var_21;

        succeeded = (ArityA_11 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_21 = (MR_Integer) 0;
          succeeded = (ArityB_14 > Var_21);
        }
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *CheaperTagTest_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsIdB_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConsTagB_9));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ConsIdA_6));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ConsTagA_7));
          }
        else
          *CheaperTagTest_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    }
    else
      *CheaperTagTest_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_bool MR_CALL 
hlds__make_tags__assign_constructor_tags_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_RA_3;

    succeeded = hlds__make_tags__is_reserved_address_tag_2_p_0(((MR_Word) wrapper_arg_1), &conv0_RA_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_RA_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_tags__assign_constructor_tags_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_tags__IntroducedFrom__pred__assign_constructor_tags__131__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
hlds__make_tags__assign_constructor_tags_8_p_0(
  MR_Word Ctors_9,
  MR_Word UserEqCmp_10,
  MR_Word TypeCtor_11,
  MR_Word ReservedTagPragma_12,
  MR_Word Globals_13,
  MR_Word * STATE_VARIABLE_CtorTags_36,
  MR_Word * ReservedAddr_15,
  MR_Word * DuTypeKind_16)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_73_73;
    MR_Word TypeCtorInfo_74_74;
    MR_Integer NumTagBits_17;
    MR_Integer NumReservedAddresses_18;
    MR_Integer NumReservedObjects_19;
    MR_Word HighLevelCode_20;
    MR_Integer InitTag_21;
    MR_Word Var_40;
    MR_Word STATE_VARIABLE_CtorTags_45_45;

    libs__globals__lookup_int_option_3_p_0(Globals_13, (MR_Integer) 248, &NumTagBits_17);
    libs__globals__lookup_int_option_3_p_0(Globals_13, (MR_Integer) 249, &NumReservedAddresses_18);
    libs__globals__lookup_int_option_3_p_0(Globals_13, (MR_Integer) 250, &NumReservedObjects_19);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&hlds__make_tags_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (hlds__make_tags__assign_constructor_tags_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (NumReservedObjects_19));
      MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140hlds.make_tags.assign_constructor_tags\'/8", (MR_String) "NumReservedObjects != 0");
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 264, &HighLevelCode_20);
    switch (ReservedTagPragma_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        InitTag_21 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        InitTag_21 = (MR_Integer) 1;
        break;
    }
    TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
    TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
    mercury__map__init_1_p_0(TypeCtorInfo_73_73, TypeCtorInfo_74_74, &STATE_VARIABLE_CtorTags_45_45);
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_13, (MR_Integer) 255, (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = hlds__make_tags__ctors_are_all_constants_1_p_0(Ctors_9);
      if (succeeded)
        succeeded = (ReservedTagPragma_12 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word Var_22;
      MR_Word Var_48;

      succeeded = ((MR_tag((MR_Word) Ctors_9)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_9, (MR_Integer) 0)));
        Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_9, (MR_Integer) 1)));
        succeeded = (Var_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Name_106;
        MR_Integer Arity_108;
        MR_Word ConsId_110;
        MR_Word Tag_111;
        MR_Word Var_114;
        MR_Word _ExistQVars_104;
        MR_Word _Constraints_105;
        MR_Word _Args_107;
        MR_Word _Ctxt_109;
        MR_Integer Var_116;

        *DuTypeKind_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        _ExistQVars_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));
        _Constraints_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1)));
        Name_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 2)));
        _Args_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 3)));
        Arity_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 4)));
        _Ctxt_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 5)));
        {
          ConsId_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ConsId_110, 1) = ((MR_Box) (Name_106));
          MR_hl_field(MR_mktag(3), ConsId_110, 2) = ((MR_Box) (Arity_108));
          MR_hl_field(MR_mktag(3), ConsId_110, 3) = ((MR_Box) (TypeCtor_11));
        }
        {
          Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (InitTag_21));
        }
        {
          Tag_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Tag_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Tag_111, 1) = ((MR_Box) (Var_114));
        }
        mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_110)), ((MR_Box) (Tag_111)), STATE_VARIABLE_CtorTags_45_45, STATE_VARIABLE_CtorTags_36);
        Var_116 = (InitTag_21 + (MR_Integer) 1);
      }
      else
      {
        *DuTypeKind_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        hlds__make_tags__assign_enum_constants_5_p_0(TypeCtor_11, Ctors_9, InitTag_21, STATE_VARIABLE_CtorTags_45_45, STATE_VARIABLE_CtorTags_36);
      }
      *ReservedAddr_15 = (MR_Integer) 1;
    }
    else
    {
      MR_Word SingleFunctorName_23;
      MR_Word SingleArgType_24;
      MR_Word MaybeSingleArgName_25;

      succeeded = parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(Globals_13, TypeCtor_11, ReservedTagPragma_12, Ctors_9, UserEqCmp_10, &SingleFunctorName_23, &SingleArgType_24, &MaybeSingleArgName_25);
      if (succeeded)
      {
        MR_Word SingleConsId_26;

        {
          SingleConsId_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), SingleConsId_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), SingleConsId_26, 1) = ((MR_Box) (SingleFunctorName_23));
          MR_hl_field(MR_mktag(3), SingleConsId_26, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), SingleConsId_26, 3) = ((MR_Box) (TypeCtor_11));
        }
        mercury__map__det_insert_4_p_0(TypeCtorInfo_73_73, TypeCtorInfo_74_74, ((MR_Box) (SingleConsId_26)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), STATE_VARIABLE_CtorTags_45_45, STATE_VARIABLE_CtorTags_36);
        *ReservedAddr_15 = (MR_Integer) 1;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *DuTypeKind_16 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (SingleFunctorName_23));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (SingleArgType_24));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (MaybeSingleArgName_25));
        }
      }
      else
      {
        *DuTypeKind_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
        succeeded = (NumTagBits_17 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Constants_27;
          MR_Word Functors_28;
          MR_Word LeftOverConstants0_29;
          MR_Word ReservedAddr1_30;
          MR_Word LeftOverConstants_31;
          MR_Word RemainingCtors_32;
          MR_Word ReservedAddresses_33;
          MR_Word STATE_VARIABLE_CtorTags_55_55;
          MR_Word STATE_VARIABLE_CtorTags_58_58;
          MR_Word Var_61;

          switch (ReservedTagPragma_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__require__sorry_2_p_0((MR_String) "make_tags", (MR_String) "--reserve-tag with num_tag_bits = 0");
                  return;
                }
              }
              break;
          }
          hlds__make_tags__separate_out_constants_3_p_0(Ctors_9, &Constants_27, &Functors_28);
          hlds__make_tags__assign_reserved_numeric_addresses_9_p_0(TypeCtor_11, Constants_27, &LeftOverConstants0_29, STATE_VARIABLE_CtorTags_45_45, &STATE_VARIABLE_CtorTags_55_55, (MR_Integer) 0, NumReservedAddresses_18, (MR_Integer) 1, &ReservedAddr1_30);
          switch (HighLevelCode_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                LeftOverConstants_31 = LeftOverConstants0_29;
                *ReservedAddr_15 = ReservedAddr1_30;
                STATE_VARIABLE_CtorTags_58_58 = STATE_VARIABLE_CtorTags_55_55;
              }
              break;
            case (MR_Integer) 1:
              {
                hlds__make_tags__assign_reserved_symbolic_addresses_9_p_0(TypeCtor_11, LeftOverConstants0_29, &LeftOverConstants_31, STATE_VARIABLE_CtorTags_55_55, &STATE_VARIABLE_CtorTags_58_58, (MR_Integer) 0, NumReservedObjects_19, ReservedAddr1_30, ReservedAddr_15);
              }
              break;
          }
          RemainingCtors_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, LeftOverConstants_31, Functors_28);
          Var_61 = mercury__map__values_1_f_0(TypeCtorInfo_73_73, TypeCtorInfo_74_74, STATE_VARIABLE_CtorTags_58_58);
          mercury__list__filter_map_3_p_0(TypeCtorInfo_74_74, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, (MR_Word) &hlds__make_tags_scalar_common_3[0], Var_61, &ReservedAddresses_33);
          hlds__make_tags__assign_unshared_tags_7_p_0(TypeCtor_11, RemainingCtors_32, (MR_Integer) 0, (MR_Integer) 0, ReservedAddresses_33, STATE_VARIABLE_CtorTags_58_58, STATE_VARIABLE_CtorTags_36);
        }
        else
        {
          MR_Integer MaxTag_34;
          MR_Integer NextTag_35;
          MR_Integer Var_65;
          MR_Word STATE_VARIABLE_CtorTags_67_67;
          MR_Word Constants_70;
          MR_Word Functors_71;

          mercury__int__pow_3_p_0((MR_Integer) 2, NumTagBits_17, &Var_65);
          MaxTag_34 = (Var_65 - (MR_Integer) 1);
          hlds__make_tags__separate_out_constants_3_p_0(Ctors_9, &Constants_70, &Functors_71);
          if ((Constants_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            NextTag_35 = InitTag_21;
            STATE_VARIABLE_CtorTags_67_67 = STATE_VARIABLE_CtorTags_45_45;
          }
          else
          {
            MR_Word Ctor_155;
            MR_Word Ctors_156;
            MR_Word Name_162;
            MR_Integer Arity_164;
            MR_Word ConsId_166;
            MR_Word Tag_167;
            MR_Word STATE_VARIABLE_CtorTags_29_170;
            MR_Word _ExistQVars_160;
            MR_Word _Constraints_161;
            MR_Word _Args_163;
            MR_Word _Ctxt_165;

            NextTag_35 = (InitTag_21 + (MR_Integer) 1);
            Ctor_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constants_70, (MR_Integer) 0)));
            Ctors_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constants_70, (MR_Integer) 1)));
            _ExistQVars_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_155, (MR_Integer) 0)));
            _Constraints_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_155, (MR_Integer) 1)));
            Name_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_155, (MR_Integer) 2)));
            _Args_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_155, (MR_Integer) 3)));
            Arity_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_155, (MR_Integer) 4)));
            _Ctxt_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_155, (MR_Integer) 5)));
            {
              ConsId_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConsId_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ConsId_166, 1) = ((MR_Box) (Name_162));
              MR_hl_field(MR_mktag(3), ConsId_166, 2) = ((MR_Box) (Arity_164));
              MR_hl_field(MR_mktag(3), ConsId_166, 3) = ((MR_Box) (TypeCtor_11));
            }
            {
              Tag_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Tag_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), Tag_167, 1) = ((MR_Box) (InitTag_21));
              MR_hl_field(MR_mktag(3), Tag_167, 2) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_166)), ((MR_Box) (Tag_167)), STATE_VARIABLE_CtorTags_45_45, &STATE_VARIABLE_CtorTags_29_170);
            hlds__make_tags__assign_shared_local_tags_6_p_0(TypeCtor_11, Ctors_156, InitTag_21, ((MR_Integer) 0 + (MR_Integer) 1), STATE_VARIABLE_CtorTags_29_170, &STATE_VARIABLE_CtorTags_67_67);
          }
          hlds__make_tags__assign_unshared_tags_7_p_0(TypeCtor_11, Functors_71, NextTag_35, MaxTag_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_CtorTags_67_67, STATE_VARIABLE_CtorTags_36);
          *ReservedAddr_15 = (MR_Integer) 1;
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_tags__separate_out_constants_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word Ctor_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Ctors_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Constants0_8;
    MR_Word Functors0_9;
    MR_Word Args_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Integer Var_16;
    MR_Word Var_17;

    hlds__make_tags__separate_out_constants_3_p_0(Ctors_5, &Constants0_8, &Functors0_9);
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 0)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 1)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 2)));
    Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 3)));
    Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 4)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 5)));
    if ((Args_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_4));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Constants0_8));
      }
      *HeadVar__3_3 = Functors0_9;
    }
    else
    {
      *HeadVar__2_2 = Constants0_8;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_4));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Functors0_9));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_tags__ctors_are_all_constants_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Ctor_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Rest_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 3)));
      MR_Word _ExistQVars_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 0)));
      MR_Word _Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 1)));
      MR_Word _Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 2)));
      MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 4)));
      MR_Word _Ctxt_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 5)));

      succeeded = (Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Word next_value_of_HeadVar__1_1 = Rest_3;

          HeadVar__1_1 = next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__make_tags__assign_shared_local_tags_6_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer PrimaryVal_3,
  MR_Integer SecondaryVal_4,
  MR_Word STATE_VARIABLE_CtorTags_0_5,
  MR_Word * STATE_VARIABLE_CtorTags_6)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CtorTags_6 = STATE_VARIABLE_CtorTags_0_5;
    else
    {
      MR_Word Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 2)));
      MR_Integer Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 4)));
      MR_Word ConsId_25;
      MR_Word Tag_26;
      MR_Word STATE_VARIABLE_CtorTags_29_29;
      MR_Integer Var_30;
      MR_Word _ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 0)));
      MR_Word _Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 1)));
      MR_Word _Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 3)));
      MR_Word _Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 5)));

      {
        ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_25, 1) = ((MR_Box) (Name_21));
        MR_hl_field(MR_mktag(3), ConsId_25, 2) = ((MR_Box) (Arity_23));
        MR_hl_field(MR_mktag(3), ConsId_25, 3) = ((MR_Box) (TypeCtor_1));
      }
      {
        Tag_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Tag_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
        MR_hl_field(MR_mktag(3), Tag_26, 1) = ((MR_Box) (PrimaryVal_3));
        MR_hl_field(MR_mktag(3), Tag_26, 2) = ((MR_Box) (SecondaryVal_4));
      }
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_25)), ((MR_Box) (Tag_26)), STATE_VARIABLE_CtorTags_0_5, &STATE_VARIABLE_CtorTags_29_29);
      Var_30 = (SecondaryVal_4 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__2_2 = Ctors_15;
        MR_Integer next_value_of_SecondaryVal_4 = Var_30;
        MR_Word next_value_of_STATE_VARIABLE_CtorTags_0_5 = STATE_VARIABLE_CtorTags_29_29;

        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        SecondaryVal_4 = next_value_of_SecondaryVal_4;
        STATE_VARIABLE_CtorTags_0_5 = next_value_of_STATE_VARIABLE_CtorTags_0_5;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_tags__assign_unshared_tags_7_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer Val_3,
  MR_Integer MaxTag_4,
  MR_Word ReservedAddresses_5,
  MR_Word STATE_VARIABLE_CtorTags_0_6,
  MR_Word * STATE_VARIABLE_CtorTags_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CtorTags_7 = STATE_VARIABLE_CtorTags_0_6;
    else
    {
      MR_Word Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 2)));
      MR_Integer Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 4)));
      MR_Word ConsId_28;
      MR_Word _ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 0)));
      MR_Word _Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 1)));
      MR_Word _Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 3)));
      MR_Word _Ctxt_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 5)));

      {
        ConsId_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_28, 1) = ((MR_Box) (Name_24));
        MR_hl_field(MR_mktag(3), ConsId_28, 2) = ((MR_Box) (Arity_26));
        MR_hl_field(MR_mktag(3), ConsId_28, 3) = ((MR_Box) (TypeCtor_1));
      }
      succeeded = (Val_3 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Ctors_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        MR_Word Tag_29;
        MR_Word Var_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        if ((ReservedAddresses_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          Tag_29 = Var_34;
        else
          {
            Tag_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Tag_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
            MR_hl_field(MR_mktag(3), Tag_29, 1) = ((MR_Box) (ReservedAddresses_5));
            MR_hl_field(MR_mktag(3), Tag_29, 2) = ((MR_Box) (Var_34));
          }
        mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_28)), ((MR_Box) (Tag_29)), STATE_VARIABLE_CtorTags_0_6, STATE_VARIABLE_CtorTags_7);
      }
      else
      {
        MR_Word Var_30;
        MR_Word Var_31;

        succeeded = (Val_3 == MaxTag_4);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Ctors_17)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_17, (MR_Integer) 0)));
            Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_17, (MR_Integer) 1)));
          }
        }
        if (succeeded)
        {
          hlds__make_tags__assign_shared_remote_tags_7_p_0(TypeCtor_1, HeadVar__2_2, MaxTag_4, (MR_Integer) 0, ReservedAddresses_5, STATE_VARIABLE_CtorTags_0_6, STATE_VARIABLE_CtorTags_7);
        }
        else
        {
          succeeded = (Val_3 <= MaxTag_4);
          if (succeeded)
          {
            MR_Word Var_39;
            MR_Word STATE_VARIABLE_CtorTags_40_40;
            MR_Integer Var_41;
            MR_Word Tag_47;

            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
              MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Val_3));
            }
            if ((ReservedAddresses_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              Tag_47 = Var_39;
            else
              {
                Tag_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Tag_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                MR_hl_field(MR_mktag(3), Tag_47, 1) = ((MR_Box) (ReservedAddresses_5));
                MR_hl_field(MR_mktag(3), Tag_47, 2) = ((MR_Box) (Var_39));
              }
            mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_28)), ((MR_Box) (Tag_47)), STATE_VARIABLE_CtorTags_0_6, &STATE_VARIABLE_CtorTags_40_40);
            Var_41 = (Val_3 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word next_value_of_HeadVar__2_2 = Ctors_17;
              MR_Integer next_value_of_Val_3 = Var_41;
              MR_Word next_value_of_STATE_VARIABLE_CtorTags_0_6 = STATE_VARIABLE_CtorTags_40_40;

              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Val_3 = next_value_of_Val_3;
              STATE_VARIABLE_CtorTags_0_6 = next_value_of_STATE_VARIABLE_CtorTags_0_6;
            }
            continue;
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_tags", (MR_String) "predicate \140hlds.make_tags.assign_unshared_tags\'/7", (MR_String) "exceeded max tag");
              return;
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_tags__assign_shared_remote_tags_7_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer PrimaryVal_3,
  MR_Integer SecondaryVal_4,
  MR_Word ReservedAddresses_5,
  MR_Word STATE_VARIABLE_CtorTags_0_6,
  MR_Word * STATE_VARIABLE_CtorTags_7)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CtorTags_7 = STATE_VARIABLE_CtorTags_0_6;
    else
    {
      MR_Word Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 2)));
      MR_Integer Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 4)));
      MR_Word ConsId_28;
      MR_Word Tag_29;
      MR_Integer SecondaryVal1_30;
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_CtorTags_34_34;
      MR_Word _ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 0)));
      MR_Word _Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 1)));
      MR_Word _Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 3)));
      MR_Word _Ctxt_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 5)));

      {
        ConsId_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_28, 1) = ((MR_Box) (Name_24));
        MR_hl_field(MR_mktag(3), ConsId_28, 2) = ((MR_Box) (Arity_26));
        MR_hl_field(MR_mktag(3), ConsId_28, 3) = ((MR_Box) (TypeCtor_1));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
        MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (PrimaryVal_3));
        MR_hl_field(MR_mktag(3), Var_33, 2) = ((MR_Box) (SecondaryVal_4));
      }
      if ((ReservedAddresses_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Tag_29 = Var_33;
      else
        {
          Tag_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Tag_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
          MR_hl_field(MR_mktag(3), Tag_29, 1) = ((MR_Box) (ReservedAddresses_5));
          MR_hl_field(MR_mktag(3), Tag_29, 2) = ((MR_Box) (Var_33));
        }
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_28)), ((MR_Box) (Tag_29)), STATE_VARIABLE_CtorTags_0_6, &STATE_VARIABLE_CtorTags_34_34);
      SecondaryVal1_30 = (SecondaryVal_4 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__2_2 = Ctors_17;
        MR_Integer next_value_of_SecondaryVal_4 = SecondaryVal1_30;
        MR_Word next_value_of_STATE_VARIABLE_CtorTags_0_6 = STATE_VARIABLE_CtorTags_34_34;

        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        SecondaryVal_4 = next_value_of_SecondaryVal_4;
        STATE_VARIABLE_CtorTags_0_6 = next_value_of_STATE_VARIABLE_CtorTags_0_6;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_tags__assign_reserved_symbolic_addresses_9_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CtorTags_0_4,
  MR_Word * STATE_VARIABLE_CtorTags_5,
  MR_Integer Num_6,
  MR_Integer Max_7,
  MR_Word STATE_VARIABLE_ReservedAddr_0_8,
  MR_Word * STATE_VARIABLE_ReservedAddr_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ReservedAddr_9 = STATE_VARIABLE_ReservedAddr_0_8;
      *STATE_VARIABLE_CtorTags_5 = STATE_VARIABLE_CtorTags_0_4;
    }
    else
    {
      MR_Word Ctor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (Num_6 >= Max_7);
      if (succeeded)
      {
        *HeadVar__3_3 = HeadVar__2_2;
        *STATE_VARIABLE_ReservedAddr_9 = STATE_VARIABLE_ReservedAddr_0_8;
        *STATE_VARIABLE_CtorTags_5 = STATE_VARIABLE_CtorTags_0_4;
      }
      else
      {
        MR_Word Name_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 2)));
        MR_Word Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 3)));
        MR_Integer Arity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 4)));
        MR_Word Tag_33;
        MR_Word ConsId_34;
        MR_Word Var_39;
        MR_Integer Var_40;
        MR_Word STATE_VARIABLE_CtorTags_41_41;
        MR_Integer Var_44;
        MR_Word _ExistQVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 0)));
        MR_Word _Constraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 1)));
        MR_Word _Ctxt_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 5)));

        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (TypeCtor_1));
          MR_hl_field(MR_mktag(2), Var_39, 1) = ((MR_Box) (Name_29));
          MR_hl_field(MR_mktag(2), Var_39, 2) = ((MR_Box) (Arity_31));
        }
        {
          Tag_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Tag_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
          MR_hl_field(MR_mktag(3), Tag_33, 1) = ((MR_Box) (Var_39));
        }
        Var_40 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, Args_30);
        {
          ConsId_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ConsId_34, 1) = ((MR_Box) (Name_29));
          MR_hl_field(MR_mktag(3), ConsId_34, 2) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(3), ConsId_34, 3) = ((MR_Box) (TypeCtor_1));
        }
        mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_34)), ((MR_Box) (Tag_33)), STATE_VARIABLE_CtorTags_0_4, &STATE_VARIABLE_CtorTags_41_41);
        Var_44 = (Num_6 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Word next_value_of_HeadVar__2_2 = Ctors_21;
          MR_Word next_value_of_STATE_VARIABLE_CtorTags_0_4 = STATE_VARIABLE_CtorTags_41_41;
          MR_Integer next_value_of_Num_6 = Var_44;

          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_CtorTags_0_4 = next_value_of_STATE_VARIABLE_CtorTags_0_4;
          Num_6 = next_value_of_Num_6;
          STATE_VARIABLE_ReservedAddr_0_8 = (MR_Integer) 0;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_tags__assign_reserved_numeric_addresses_9_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CtorTags_0_4,
  MR_Word * STATE_VARIABLE_CtorTags_5,
  MR_Integer Address_6,
  MR_Integer NumReservedAddresses_7,
  MR_Word STATE_VARIABLE_ReservedAddr_0_8,
  MR_Word * STATE_VARIABLE_ReservedAddr_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ReservedAddr_9 = STATE_VARIABLE_ReservedAddr_0_8;
      *STATE_VARIABLE_CtorTags_5 = STATE_VARIABLE_CtorTags_0_4;
    }
    else
    {
      MR_Word Ctor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (Address_6 >= NumReservedAddresses_7);
      if (succeeded)
      {
        *HeadVar__3_3 = HeadVar__2_2;
        *STATE_VARIABLE_ReservedAddr_9 = STATE_VARIABLE_ReservedAddr_0_8;
        *STATE_VARIABLE_CtorTags_5 = STATE_VARIABLE_CtorTags_0_4;
      }
      else
      {
        MR_Word Name_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 2)));
        MR_Integer Arity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 4)));
        MR_Word ConsId_33;
        MR_Word Tag_34;
        MR_Word STATE_VARIABLE_CtorTags_41_41;
        MR_Integer Var_44;
        MR_Word _ExistQVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 0)));
        MR_Word _Constraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 1)));
        MR_Word _Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 3)));
        MR_Word _Ctxt_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 5)));

        {
          ConsId_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ConsId_33, 1) = ((MR_Box) (Name_29));
          MR_hl_field(MR_mktag(3), ConsId_33, 2) = ((MR_Box) (Arity_31));
          MR_hl_field(MR_mktag(3), ConsId_33, 3) = ((MR_Box) (TypeCtor_1));
        }
        succeeded = (Address_6 == (MR_Integer) 0);
        if (succeeded)
        {
          Tag_34 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_tags_scalar_common_1[5]);
        }
        else
        {
          MR_Word Var_40;

          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Address_6));
          }
          {
            Tag_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Tag_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), Tag_34, 1) = ((MR_Box) (Var_40));
          }
        }
        mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_33)), ((MR_Box) (Tag_34)), STATE_VARIABLE_CtorTags_0_4, &STATE_VARIABLE_CtorTags_41_41);
        Var_44 = (Address_6 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Word next_value_of_HeadVar__2_2 = Ctors_21;
          MR_Word next_value_of_STATE_VARIABLE_CtorTags_0_4 = STATE_VARIABLE_CtorTags_41_41;
          MR_Integer next_value_of_Address_6 = Var_44;

          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_CtorTags_0_4 = next_value_of_STATE_VARIABLE_CtorTags_0_4;
          Address_6 = next_value_of_Address_6;
          STATE_VARIABLE_ReservedAddr_0_8 = (MR_Integer) 0;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_tags__assign_enum_constants_5_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer Val_3,
  MR_Word STATE_VARIABLE_CtorTags_0_4,
  MR_Word * STATE_VARIABLE_CtorTags_5)
{
  while (MR_TRUE)
  {
    /* setup for tailcalls optimized into a loop */
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CtorTags_5 = STATE_VARIABLE_CtorTags_0_4;
    else
    {
      MR_Word Ctor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 2)));
      MR_Integer Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 4)));
      MR_Word ConsId_22;
      MR_Word Tag_23;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_CtorTags_27_27;
      MR_Integer Var_28;
      MR_Word _ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 0)));
      MR_Word _Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 1)));
      MR_Word _Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 3)));
      MR_Word _Ctxt_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 5)));

      {
        ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_22, 1) = ((MR_Box) (Name_18));
        MR_hl_field(MR_mktag(3), ConsId_22, 2) = ((MR_Box) (Arity_20));
        MR_hl_field(MR_mktag(3), ConsId_22, 3) = ((MR_Box) (TypeCtor_1));
      }
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Val_3));
      }
      {
        Tag_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Tag_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Tag_23, 1) = ((MR_Box) (Var_26));
      }
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_22)), ((MR_Box) (Tag_23)), STATE_VARIABLE_CtorTags_0_4, &STATE_VARIABLE_CtorTags_27_27);
      Var_28 = (Val_3 + (MR_Integer) 1);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__2_2 = Ctors_13;
        MR_Integer next_value_of_Val_3 = Var_28;
        MR_Word next_value_of_STATE_VARIABLE_CtorTags_0_4 = STATE_VARIABLE_CtorTags_27_27;

        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        Val_3 = next_value_of_Val_3;
        STATE_VARIABLE_CtorTags_0_4 = next_value_of_STATE_VARIABLE_CtorTags_0_4;
      }
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_tags____Unify____direct_arg_cond_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_tags____Unify____direct_arg_cond_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_tags____Compare____direct_arg_cond_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_tags____Compare____direct_arg_cond_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__make_tags__init(void)
{
}

void mercury__hlds__make_tags__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_tags__hlds__make_tags__type_ctor_info_direct_arg_cond_0);
}

void mercury__hlds__make_tags__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_tags__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.make_tags. */
