/*
** Automatically generated from `make_tags.m'
** by the Mercury compiler,
** version rotd-2016-10-04
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
#include "libs.compiler_util.mih"
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
hlds__make_tags____Unify____direct_arg_cond_0_0_10001(
  MR_Box hlds__make_tags__wrapper_arg_1,
  MR_Box hlds__make_tags__wrapper_arg_2);

static void MR_CALL 
hlds__make_tags____Compare____direct_arg_cond_0_0_10001(
  MR_Box * hlds__make_tags__wrapper_arg_1,
  MR_Box hlds__make_tags__wrapper_arg_2,
  MR_Box hlds__make_tags__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_tags__IntroducedFrom__pred__is_direct_arg_ctor__589__1_2_p_0(
  MR_Integer hlds__make_tags__Arity_17,
  MR_Integer hlds__make_tags__HeadVar__2_52);

static MR_bool MR_CALL 
hlds__make_tags__IntroducedFrom__func__assign_constructor_tags__201__1_1_f_0(
  MR_Word hlds__make_tags__LambdaHeadVar__1_58,
  MR_Word * hlds__make_tags__LambdaHeadVar__2_59);

static void MR_CALL 
hlds__make_tags____Compare____direct_arg_cond_0_0(
  MR_Word * hlds__make_tags__HeadVar__1_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Word hlds__make_tags__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_tags____Unify____direct_arg_cond_0_0(
  MR_Word hlds__make_tags__HeadVar__1_1,
  MR_Word hlds__make_tags__HeadVar__2_2);

static void MR_CALL 
hlds__make_tags__separate_out_constants_3_p_0(
  MR_Word hlds__make_tags__HeadVar__1_1,
  MR_Word * hlds__make_tags__HeadVar__2_2,
  MR_Word * hlds__make_tags__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_tags__ctors_are_all_constants_1_p_0(
  MR_Word hlds__make_tags__HeadVar__1_1);

static void MR_CALL 
hlds__make_tags__output_direct_arg_functor_summary_5_p_0_1(
  MR_Box hlds__make_tags__closure_arg,
  MR_Box hlds__make_tags__wrapper_arg_1,
  MR_Box hlds__make_tags__wrapper_arg_2,
  MR_Box * hlds__make_tags__wrapper_arg_3);

static void MR_CALL 
hlds__make_tags__output_direct_arg_functor_summary_5_p_0(
  MR_Word hlds__make_tags__ModuleName_6,
  MR_Word hlds__make_tags__TypeCtor_7,
  MR_Word hlds__make_tags__DirectArgFunctorNames_8);

static MR_Word MR_CALL 
hlds__make_tags__constructor_to_sym_name_and_arity_1_f_0(
  MR_Word hlds__make_tags__HeadVar__1_1);

static void MR_CALL 
hlds__make_tags__check_incorrect_direct_arg_assertions_4_p_0(
  MR_Word hlds__make_tags__HeadVar__1_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Word hlds__make_tags__STATE_VARIABLE_Specs_0_3,
  MR_Word * hlds__make_tags__STATE_VARIABLE_Specs_4);

static void MR_CALL 
hlds__make_tags__assign_direct_arg_tags_8_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Integer hlds__make_tags__STATE_VARIABLE_Val_0_3,
  MR_Integer * hlds__make_tags__STATE_VARIABLE_Val_4,
  MR_Integer hlds__make_tags__MaxTag_5,
  MR_Word * hlds__make_tags__HeadVar__6_6,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_7,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_8);

static MR_bool MR_CALL 
hlds__make_tags__is_foreign_type_for_target_3_p_0(
  MR_Word hlds__make_tags__TypeBody_4,
  MR_Word hlds__make_tags__Target_5,
  MR_Word * hlds__make_tags__Assertions_6);

static MR_bool MR_CALL 
hlds__make_tags__is_direct_arg_ctor_6_p_0_1(
  MR_Box hlds__make_tags__closure_arg);

static MR_bool MR_CALL 
hlds__make_tags__is_direct_arg_ctor_6_p_0(
  MR_Word hlds__make_tags__TypeTable_7,
  MR_Word hlds__make_tags__Target_8,
  MR_Word hlds__make_tags__TypeCtorModule_9,
  MR_Word hlds__make_tags__TypeStatus_10,
  MR_Word hlds__make_tags__AssertedDirectArgCtors_11,
  MR_Word hlds__make_tags__Ctor_12);

static MR_Box MR_CALL 
hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0_2(
  MR_Box hlds__make_tags__closure_arg,
  MR_Box hlds__make_tags__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0_1(
  MR_Box hlds__make_tags__closure_arg,
  MR_Box hlds__make_tags__wrapper_arg_1);

static void MR_CALL 
hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0(
  MR_Word hlds__make_tags__Target_11,
  MR_Word hlds__make_tags__ModuleName_12,
  MR_Word hlds__make_tags__DebugTypeRep_13,
  MR_Integer hlds__make_tags__MaxTag_14,
  MR_Word hlds__make_tags__TypeCtor_15,
  MR_Word hlds__make_tags__TypeDefn_16,
  MR_Word hlds__make_tags__STATE_VARIABLE_TypeTable_0_60,
  MR_Word * hlds__make_tags__STATE_VARIABLE_TypeTable_61,
  MR_Word hlds__make_tags__STATE_VARIABLE_Specs_0_62,
  MR_Word * hlds__make_tags__STATE_VARIABLE_Specs_63);

static void MR_CALL 
hlds__make_tags__convert_direct_arg_functors_9_p_0(
  MR_Word hlds__make_tags__Target_1,
  MR_Word hlds__make_tags__ModuleName_2,
  MR_Word hlds__make_tags__DebugTypeRep_3,
  MR_Integer hlds__make_tags__MaxTag_4,
  MR_Word hlds__make_tags__HeadVar__5_5,
  MR_Word hlds__make_tags__STATE_VARIABLE_TypeTable_0_6,
  MR_Word * hlds__make_tags__STATE_VARIABLE_TypeTable_7,
  MR_Word hlds__make_tags__STATE_VARIABLE_Specs_0_8,
  MR_Word * hlds__make_tags__STATE_VARIABLE_Specs_9);

static void MR_CALL 
hlds__make_tags__assign_shared_local_tags_6_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Integer hlds__make_tags__PrimaryVal_3,
  MR_Integer hlds__make_tags__SecondaryVal_4,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_5,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_6);

static void MR_CALL 
hlds__make_tags__assign_shared_remote_tags_7_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Integer hlds__make_tags__PrimaryVal_3,
  MR_Integer hlds__make_tags__SecondaryVal_4,
  MR_Word hlds__make_tags__ReservedAddresses_5,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_6,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_7);

static void MR_CALL 
hlds__make_tags__assign_unshared_tags_7_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Integer hlds__make_tags__Val_3,
  MR_Integer hlds__make_tags__MaxTag_4,
  MR_Word hlds__make_tags__ReservedAddresses_5,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_6,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_7);

static void MR_CALL 
hlds__make_tags__assign_constant_tags_6_p_0(
  MR_Word hlds__make_tags__TypeCtor_7,
  MR_Word hlds__make_tags__Constants_8,
  MR_Integer hlds__make_tags__InitTag_9,
  MR_Integer * hlds__make_tags__NextTag_10,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_14,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_15);

static void MR_CALL 
hlds__make_tags__assign_reserved_symbolic_addresses_9_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Word * hlds__make_tags__HeadVar__3_3,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_4,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_5,
  MR_Integer hlds__make_tags__Num_6,
  MR_Integer hlds__make_tags__Max_7,
  MR_Word hlds__make_tags__STATE_VARIABLE_ReservedAddr_0_8,
  MR_Word * hlds__make_tags__STATE_VARIABLE_ReservedAddr_9);

static void MR_CALL 
hlds__make_tags__assign_reserved_numeric_addresses_9_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Word * hlds__make_tags__HeadVar__3_3,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_4,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_5,
  MR_Integer hlds__make_tags__Address_6,
  MR_Integer hlds__make_tags__NumReservedAddresses_7,
  MR_Word hlds__make_tags__STATE_VARIABLE_ReservedAddr_0_8,
  MR_Word * hlds__make_tags__STATE_VARIABLE_ReservedAddr_9);

static void MR_CALL 
hlds__make_tags__assign_enum_constants_5_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Integer hlds__make_tags__Val_3,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_4,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_5);

static MR_bool MR_CALL 
hlds__make_tags__assign_constructor_tags_8_p_0_1(
  MR_Box hlds__make_tags__closure_arg,
  MR_Box hlds__make_tags__wrapper_arg_1,
  MR_Box * hlds__make_tags__wrapper_arg_2);


static /* final */ const MR_Box hlds__make_tags_scalar_common_1[7][2];

static /* final */ const MR_Box hlds__make_tags_scalar_common_2[3][5];

static /* final */ const MR_Box hlds__make_tags_scalar_common_3[3][3];

static /* final */ const MR_Box hlds__make_tags_scalar_common_4[1][9];

static /* final */ const MR_Box hlds__make_tags_scalar_common_5[1][6];




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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__make_tags_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_tags_scalar_common_2[0])),
    ((MR_Box) (hlds__make_tags__assign_constructor_tags_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_tags_scalar_common_2[1])),
    ((MR_Box) (hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_tags_scalar_common_5[0])),
    ((MR_Box) (hlds__make_tags__output_direct_arg_functor_summary_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_tags_scalar_common_4[1][9] = {
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

static /* final */ const MR_Box hlds__make_tags_scalar_common_5[1][6] = {
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
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_1 = {
  (MR_String) "arg_type_is_word_aligned_pointer",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__make_tags__hlds__make_tags__field_types_direct_arg_cond_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_type_status_0
};

static const MR_DuFunctorDesc hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_2 = {
  (MR_String) "arg_type_defined_in_same_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__make_tags__hlds__make_tags__field_types_direct_arg_cond_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__make_tags__hlds__make_tags__du_functor_desc_direct_arg_cond_0_3 = {
  (MR_String) "arg_type_defined_in_different_module",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__make_tags__hlds__make_tags__du_stag_ordered_direct_arg_cond_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
hlds__make_tags____Unify____direct_arg_cond_0_0_10001(
  MR_Box hlds__make_tags__wrapper_arg_1,
  MR_Box hlds__make_tags__wrapper_arg_2)
{
  {
    MR_bool hlds__make_tags__succeeded;

    {
      hlds__make_tags__succeeded = hlds__make_tags____Unify____direct_arg_cond_0_0(((MR_Word) hlds__make_tags__wrapper_arg_1), ((MR_Word) hlds__make_tags__wrapper_arg_2));
    }
    return hlds__make_tags__succeeded;
  }
}

static void MR_CALL 
hlds__make_tags____Compare____direct_arg_cond_0_0_10001(
  MR_Box * hlds__make_tags__wrapper_arg_1,
  MR_Box hlds__make_tags__wrapper_arg_2,
  MR_Box hlds__make_tags__wrapper_arg_3)
{
  {
    MR_Word hlds__make_tags__conv0_HeadVar__1_1;

    {
      hlds__make_tags____Compare____direct_arg_cond_0_0(&hlds__make_tags__conv0_HeadVar__1_1, ((MR_Word) hlds__make_tags__wrapper_arg_2), ((MR_Word) hlds__make_tags__wrapper_arg_3));
    }
    *hlds__make_tags__wrapper_arg_1 = ((MR_Box) (hlds__make_tags__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_tags__IntroducedFrom__pred__is_direct_arg_ctor__589__1_2_p_0(
  MR_Integer hlds__make_tags__Arity_17,
  MR_Integer hlds__make_tags__HeadVar__2_52)
{
  {
    MR_bool hlds__make_tags__succeeded = (hlds__make_tags__Arity_17 == hlds__make_tags__HeadVar__2_52);

    return hlds__make_tags__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_tags__IntroducedFrom__func__assign_constructor_tags__201__1_1_f_0(
  MR_Word hlds__make_tags__LambdaHeadVar__1_58,
  MR_Word * hlds__make_tags__LambdaHeadVar__2_59)
{
  {
    MR_bool hlds__make_tags__succeeded = ((((MR_tag((MR_Word) hlds__make_tags__LambdaHeadVar__1_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_tags__LambdaHeadVar__1_58, (MR_Integer) 0)))) == (MR_Integer) 15)));

    if (hlds__make_tags__succeeded)
      *hlds__make_tags__LambdaHeadVar__2_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_tags__LambdaHeadVar__1_58, (MR_Integer) 1)));
    return hlds__make_tags__succeeded;
  }
}

static void MR_CALL 
hlds__make_tags____Compare____direct_arg_cond_0_0(
  MR_Word * hlds__make_tags__HeadVar__1_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Word hlds__make_tags__HeadVar__3_3)
{
  {
    MR_bool hlds__make_tags__succeeded;
    MR_Integer hlds__make_tags__CastX_12 = (MR_Integer) hlds__make_tags__HeadVar__2_2;
    MR_Integer hlds__make_tags__CastY_13 = (MR_Integer) hlds__make_tags__HeadVar__3_3;

    hlds__make_tags__succeeded = (hlds__make_tags__CastX_12 == hlds__make_tags__CastY_13);
    if (hlds__make_tags__succeeded)
      *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) hlds__make_tags__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__make_tags__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) hlds__make_tags__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__make_tags__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) hlds__make_tags__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__make_tags__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) hlds__make_tags__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__make_tags__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_tags__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) hlds__make_tags__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(hlds__make_tags__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *hlds__make_tags__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_tags__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    hlds__status____Compare____type_status_0_0(hlds__make_tags__HeadVar__1_1, hlds__make_tags__V_15_15, hlds__make_tags__V_9_9);
                  }
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
  MR_Word hlds__make_tags__HeadVar__1_1,
  MR_Word hlds__make_tags__HeadVar__2_2)
{
  {
    MR_bool hlds__make_tags__succeeded;
    MR_Integer hlds__make_tags__CastX_11 = (MR_Integer) hlds__make_tags__HeadVar__1_1;
    MR_Integer hlds__make_tags__CastY_12 = (MR_Integer) hlds__make_tags__HeadVar__2_2;

    hlds__make_tags__succeeded = (hlds__make_tags__CastX_11 == hlds__make_tags__CastY_12);
    if (hlds__make_tags__succeeded)
      hlds__make_tags__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) hlds__make_tags__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(hlds__make_tags__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer hlds__make_tags__CastX_3 = (MR_Integer) hlds__make_tags__HeadVar__1_1;
                MR_Integer hlds__make_tags__CastY_4 = (MR_Integer) hlds__make_tags__HeadVar__2_2;

                hlds__make_tags__succeeded = (hlds__make_tags__CastY_4 == hlds__make_tags__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer hlds__make_tags__CastX_5 = (MR_Integer) hlds__make_tags__HeadVar__1_1;
                MR_Integer hlds__make_tags__CastY_6 = (MR_Integer) hlds__make_tags__HeadVar__2_2;

                hlds__make_tags__succeeded = (hlds__make_tags__CastY_6 == hlds__make_tags__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer hlds__make_tags__CastX_9 = (MR_Integer) hlds__make_tags__HeadVar__1_1;
                MR_Integer hlds__make_tags__CastY_10 = (MR_Integer) hlds__make_tags__HeadVar__2_2;

                hlds__make_tags__succeeded = (hlds__make_tags__CastY_10 == hlds__make_tags__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_tags__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_tags__V_8_8;

            hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_tags__succeeded)
              {
                hlds__make_tags__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 0)));
                {
                  hlds__make_tags__succeeded = hlds__status____Unify____type_status_0_0(hlds__make_tags__V_7_7, hlds__make_tags__V_8_8);
                }
              }
          }
          break;
      }
    return hlds__make_tags__succeeded;
  }
}

static void MR_CALL 
hlds__make_tags__separate_out_constants_3_p_0(
  MR_Word hlds__make_tags__HeadVar__1_1,
  MR_Word * hlds__make_tags__HeadVar__2_2,
  MR_Word * hlds__make_tags__HeadVar__3_3)
{
  {
    MR_bool hlds__make_tags__succeeded;

    if ((hlds__make_tags__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_tags__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_tags__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word hlds__make_tags__Ctor_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_tags__Ctors_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_tags__Constants0_8;
        MR_Word hlds__make_tags__Functors0_9;
        MR_Word hlds__make_tags__Args_10;
        MR_Word hlds__make_tags__V_13_13;
        MR_Word hlds__make_tags__V_14_14;
        MR_Word hlds__make_tags__V_15_15;
        MR_Integer hlds__make_tags__V_16_16;
        MR_Word hlds__make_tags__V_17_17;

        {
          hlds__make_tags__separate_out_constants_3_p_0(hlds__make_tags__Ctors_5, &hlds__make_tags__Constants0_8, &hlds__make_tags__Functors0_9);
        }
        hlds__make_tags__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_4, (MR_Integer) 0)));
        hlds__make_tags__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_4, (MR_Integer) 1)));
        hlds__make_tags__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_4, (MR_Integer) 2)));
        hlds__make_tags__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_4, (MR_Integer) 3)));
        hlds__make_tags__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_4, (MR_Integer) 4)));
        hlds__make_tags__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_4, (MR_Integer) 5)));
        if ((hlds__make_tags__Args_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_tags__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_tags__Ctor_4));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_tags__Constants0_8));
            }
            *hlds__make_tags__HeadVar__3_3 = hlds__make_tags__Functors0_9;
          }
        else
          {
            *hlds__make_tags__HeadVar__2_2 = hlds__make_tags__Constants0_8;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_tags__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_tags__Ctor_4));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_tags__Functors0_9));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__make_tags__ctors_are_all_constants_1_p_0(
  MR_Word hlds__make_tags__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_tags__succeeded;

        if ((hlds__make_tags__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__make_tags__succeeded = MR_TRUE;
        else
          {
            MR_Word hlds__make_tags__Ctor_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_tags__Rest_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_tags__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_2, (MR_Integer) 3)));
            MR_Word hlds__make_tags___ExistQVars_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_2, (MR_Integer) 0)));
            MR_Word hlds__make_tags___Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_2, (MR_Integer) 1)));
            MR_Word hlds__make_tags___Name_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_2, (MR_Integer) 2)));
            MR_Integer hlds__make_tags__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_2, (MR_Integer) 4)));
            MR_Word hlds__make_tags___Ctxt_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_2, (MR_Integer) 5)));

            hlds__make_tags__succeeded = (hlds__make_tags__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_tags__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__make_tags__HeadVar__1__tmp_copy_1 = hlds__make_tags__Rest_3;

                  hlds__make_tags__HeadVar__1_1 = hlds__make_tags__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return hlds__make_tags__succeeded;
      }
      break;
    }
}

static void MR_CALL 
hlds__make_tags__output_direct_arg_functor_summary_5_p_0_1(
  MR_Box hlds__make_tags__closure_arg,
  MR_Box hlds__make_tags__wrapper_arg_1,
  MR_Box hlds__make_tags__wrapper_arg_2,
  MR_Box * hlds__make_tags__wrapper_arg_3)
{
  {
    MR_Box hlds__make_tags__closure = hlds__make_tags__closure_arg;

    {
      parse_tree__prog_out__write_sym_name_and_arity_3_p_0(((MR_Word) hlds__make_tags__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__make_tags__output_direct_arg_functor_summary_5_p_0(
  MR_Word hlds__make_tags__ModuleName_6,
  MR_Word hlds__make_tags__TypeCtor_7,
  MR_Word hlds__make_tags__DirectArgFunctorNames_8)
{
  {
    MR_bool hlds__make_tags__succeeded;

    {
      parse_tree__prog_out__write_sym_name_3_p_0(hlds__make_tags__ModuleName_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " : ");
    }
    {
      parse_tree__prog_out__write_type_ctor_3_p_0(hlds__make_tags__TypeCtor_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " : ");
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, hlds__make_tags__DirectArgFunctorNames_8, (MR_String) ", ", (MR_Word) &hlds__make_tags_scalar_common_3[2]);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static MR_Word MR_CALL 
hlds__make_tags__constructor_to_sym_name_and_arity_1_f_0(
  MR_Word hlds__make_tags__HeadVar__1_1)
{
  {
    MR_bool hlds__make_tags__succeeded;
    MR_Word hlds__make_tags__HeadVar__2_2;
    MR_Word hlds__make_tags__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer hlds__make_tags__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__HeadVar__1_1, (MR_Integer) 4)));
    MR_Word hlds__make_tags__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__make_tags__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__make_tags___Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word hlds__make_tags__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__HeadVar__1_1, (MR_Integer) 5)));

    {
      hlds__make_tags__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_tags__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_tags__Name_5));
      MR_hl_field(MR_mktag(0), hlds__make_tags__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_tags__Arity_7));
    }
    return hlds__make_tags__HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_tags__check_incorrect_direct_arg_assertions_4_p_0(
  MR_Word hlds__make_tags__HeadVar__1_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Word hlds__make_tags__STATE_VARIABLE_Specs_0_3,
  MR_Word * hlds__make_tags__STATE_VARIABLE_Specs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_tags__succeeded;

        if ((hlds__make_tags__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_tags__STATE_VARIABLE_Specs_4 = hlds__make_tags__STATE_VARIABLE_Specs_0_3;
        else
          {
            MR_Word hlds__make_tags__Ctor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__make_tags__Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__make_tags__STATE_VARIABLE_Specs_46_46;
            MR_Word hlds__make_tags__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_10, (MR_Integer) 5)));
            MR_Word hlds__make_tags__V_24_24;
            MR_Word hlds__make_tags__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_10, (MR_Integer) 2)));
            MR_Integer hlds__make_tags__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_10, (MR_Integer) 4)));
            MR_Word hlds__make_tags__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_10, (MR_Integer) 0)));
            MR_Word hlds__make_tags__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_10, (MR_Integer) 1)));
            MR_Word hlds__make_tags___Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_10, (MR_Integer) 3)));

            {
              hlds__make_tags__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_tags__V_24_24, 0) = ((MR_Box) (hlds__make_tags__SymName_15));
              MR_hl_field(MR_mktag(0), hlds__make_tags__V_24_24, 1) = ((MR_Box) (hlds__make_tags__Arity_17));
            }
            {
              hlds__make_tags__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, hlds__make_tags__HeadVar__1_1, ((MR_Box) (hlds__make_tags__V_24_24)));
            }
            if (hlds__make_tags__succeeded)
              {
                MR_Word hlds__make_tags__Pieces_19;
                MR_Word hlds__make_tags__Msg_20;
                MR_Word hlds__make_tags__Spec_21;
                MR_Word hlds__make_tags__V_27_27;
                MR_Word hlds__make_tags__V_28_28;
                MR_Word hlds__make_tags__V_39_39;
                MR_Word hlds__make_tags__V_40_40;
                MR_Word hlds__make_tags__V_44_44;

                {
                  hlds__make_tags__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__V_28_28, 1) = ((MR_Box) (hlds__make_tags__V_24_24));
                }
                {
                  hlds__make_tags__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_tags__V_27_27, 0) = ((MR_Box) (hlds__make_tags__V_28_28));
                  MR_hl_field(MR_mktag(1), hlds__make_tags__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_tags_scalar_common_1[4])));
                }
                {
                  hlds__make_tags__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_tags__Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_tags_scalar_common_1[6])));
                  MR_hl_field(MR_mktag(1), hlds__make_tags__Pieces_19, 1) = ((MR_Box) (hlds__make_tags__V_27_27));
                }
                {
                  hlds__make_tags__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_tags__V_40_40, 0) = ((MR_Box) (hlds__make_tags__Pieces_19));
                }
                {
                  hlds__make_tags__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_tags__V_39_39, 0) = ((MR_Box) (hlds__make_tags__V_40_40));
                  MR_hl_field(MR_mktag(1), hlds__make_tags__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_tags__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_tags__Msg_20, 0) = ((MR_Box) (hlds__make_tags__Context_18));
                  MR_hl_field(MR_mktag(0), hlds__make_tags__Msg_20, 1) = ((MR_Box) (hlds__make_tags__V_39_39));
                }
                {
                  hlds__make_tags__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_tags__V_44_44, 0) = ((MR_Box) (hlds__make_tags__Msg_20));
                  MR_hl_field(MR_mktag(1), hlds__make_tags__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_tags__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_tags__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_tags__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                  MR_hl_field(MR_mktag(0), hlds__make_tags__Spec_21, 2) = ((MR_Box) (hlds__make_tags__V_44_44));
                }
                {
                  hlds__make_tags__STATE_VARIABLE_Specs_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_tags__STATE_VARIABLE_Specs_46_46, 0) = ((MR_Box) (hlds__make_tags__Spec_21));
                  MR_hl_field(MR_mktag(1), hlds__make_tags__STATE_VARIABLE_Specs_46_46, 1) = ((MR_Box) (hlds__make_tags__STATE_VARIABLE_Specs_0_3));
                }
              }
            else
              hlds__make_tags__STATE_VARIABLE_Specs_46_46 = hlds__make_tags__STATE_VARIABLE_Specs_0_3;
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_tags__HeadVar__2__tmp_copy_2 = hlds__make_tags__Ctors_11;
              MR_Word hlds__make_tags__STATE_VARIABLE_Specs_0__tmp_copy_3 = hlds__make_tags__STATE_VARIABLE_Specs_46_46;

              hlds__make_tags__STATE_VARIABLE_Specs_0_3 = hlds__make_tags__STATE_VARIABLE_Specs_0__tmp_copy_3;
              hlds__make_tags__HeadVar__2_2 = hlds__make_tags__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_tags__assign_direct_arg_tags_8_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Integer hlds__make_tags__STATE_VARIABLE_Val_0_3,
  MR_Integer * hlds__make_tags__STATE_VARIABLE_Val_4,
  MR_Integer hlds__make_tags__MaxTag_5,
  MR_Word * hlds__make_tags__HeadVar__6_6,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_7,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_tags__succeeded;

        if ((hlds__make_tags__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_tags__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *hlds__make_tags__STATE_VARIABLE_CtorTags_8 = hlds__make_tags__STATE_VARIABLE_CtorTags_0_7;
            *hlds__make_tags__STATE_VARIABLE_Val_4 = hlds__make_tags__STATE_VARIABLE_Val_0_3;
          }
        else
          {
            MR_Word hlds__make_tags__Ctor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__make_tags__Ctors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__make_tags__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_18, (MR_Integer) 2)));
            MR_Integer hlds__make_tags__Arity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_18, (MR_Integer) 4)));
            MR_Word hlds__make_tags__ConsId_30;
            MR_Word hlds__make_tags___ExistQVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_18, (MR_Integer) 0)));
            MR_Word hlds__make_tags___Constraints_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_18, (MR_Integer) 1)));
            MR_Word hlds__make_tags___Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_18, (MR_Integer) 3)));
            MR_Word hlds__make_tags___Ctxt_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_18, (MR_Integer) 5)));
            MR_Word hlds__make_tags__V_31_31;
            MR_Word hlds__make_tags__V_32_32;

            {
              hlds__make_tags__ConsId_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_30, 1) = ((MR_Box) (hlds__make_tags__Name_26));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_30, 2) = ((MR_Box) (hlds__make_tags__Arity_28));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_30, 3) = ((MR_Box) (hlds__make_tags__TypeCtor_1));
            }
            hlds__make_tags__succeeded = (hlds__make_tags__STATE_VARIABLE_Val_0_3 == hlds__make_tags__MaxTag_5);
            if (hlds__make_tags__succeeded)
              {
                hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__Ctors_19)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_tags__succeeded)
                  {
                    hlds__make_tags__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Ctors_19, (MR_Integer) 0)));
                    hlds__make_tags__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Ctors_19, (MR_Integer) 1)));
                  }
              }
            if (hlds__make_tags__succeeded)
              {
                *hlds__make_tags__HeadVar__6_6 = hlds__make_tags__HeadVar__2_2;
                *hlds__make_tags__STATE_VARIABLE_CtorTags_8 = hlds__make_tags__STATE_VARIABLE_CtorTags_0_7;
                *hlds__make_tags__STATE_VARIABLE_Val_4 = hlds__make_tags__STATE_VARIABLE_Val_0_3;
              }
            else
              {
                MR_Word hlds__make_tags__Tag_33;
                MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_38_38;
                MR_Integer hlds__make_tags__STATE_VARIABLE_Val_39_39;

                {
                  hlds__make_tags__Tag_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_33, 1) = ((MR_Box) (hlds__make_tags__STATE_VARIABLE_Val_0_3));
                }
                {
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_tags__ConsId_30)), ((MR_Box) (hlds__make_tags__Tag_33)), hlds__make_tags__STATE_VARIABLE_CtorTags_0_7, &hlds__make_tags__STATE_VARIABLE_CtorTags_38_38);
                }
                hlds__make_tags__STATE_VARIABLE_Val_39_39 = (hlds__make_tags__STATE_VARIABLE_Val_0_3 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__make_tags__HeadVar__2__tmp_copy_2 = hlds__make_tags__Ctors_19;
                  MR_Integer hlds__make_tags__STATE_VARIABLE_Val_0__tmp_copy_3 = hlds__make_tags__STATE_VARIABLE_Val_39_39;
                  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_7 = hlds__make_tags__STATE_VARIABLE_CtorTags_38_38;

                  hlds__make_tags__STATE_VARIABLE_CtorTags_0_7 = hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_7;
                  hlds__make_tags__STATE_VARIABLE_Val_0_3 = hlds__make_tags__STATE_VARIABLE_Val_0__tmp_copy_3;
                  hlds__make_tags__HeadVar__2_2 = hlds__make_tags__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__make_tags__is_foreign_type_for_target_3_p_0(
  MR_Word hlds__make_tags__TypeBody_4,
  MR_Word hlds__make_tags__Target_5,
  MR_Word * hlds__make_tags__Assertions_6)
{
  {
    MR_bool hlds__make_tags__succeeded;
    MR_Word hlds__make_tags__ForeignType_16;
    MR_Word hlds__make_tags__V_45_45;
    MR_Word hlds__make_tags__V_46_46;
    MR_Word hlds__make_tags__V_47_47;
    MR_Word hlds__make_tags__V_48_48;

    if (((MR_tag((MR_Word) hlds__make_tags__TypeBody_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_tags__MaybeForeignType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__TypeBody_4, (MR_Integer) 7)));
        MR_Word hlds__make_tags__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__TypeBody_4, (MR_Integer) 0)));
        MR_Word hlds__make_tags__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__TypeBody_4, (MR_Integer) 1)));
        MR_Word hlds__make_tags__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__TypeBody_4, (MR_Integer) 2)));
        MR_Word hlds__make_tags__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__TypeBody_4, (MR_Integer) 3)));
        MR_Word hlds__make_tags__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__TypeBody_4, (MR_Integer) 4)));
        MR_Word hlds__make_tags__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__TypeBody_4, (MR_Integer) 5)));
        MR_Word hlds__make_tags__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__TypeBody_4, (MR_Integer) 6)))) & (MR_Integer) 1);
        MR_Word hlds__make_tags__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__TypeBody_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

        hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__MaybeForeignType_15)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_tags__succeeded)
          hlds__make_tags__ForeignType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__MaybeForeignType_15, (MR_Integer) 0)));
      }
    else
    if (((MR_tag((MR_Word) hlds__make_tags__TypeBody_4)) == (MR_mktag((MR_Integer) 0))))
      {
        hlds__make_tags__ForeignType_16 = (MR_Word) MR_body(((MR_Word) hlds__make_tags__TypeBody_4), (MR_Integer) 0);
        hlds__make_tags__succeeded = MR_TRUE;
      }
    else
      hlds__make_tags__succeeded = MR_FALSE;
    if (hlds__make_tags__succeeded)
      {
        hlds__make_tags__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__ForeignType_16, (MR_Integer) 0)));
        hlds__make_tags__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__ForeignType_16, (MR_Integer) 1)));
        hlds__make_tags__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__ForeignType_16, (MR_Integer) 2)));
        hlds__make_tags__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__ForeignType_16, (MR_Integer) 3)));
        switch (hlds__make_tags__Target_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_tags__V_32_32;
              MR_Word hlds__make_tags__V_17_17;
              MR_Word hlds__make_tags__V_18_18;

              hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__V_48_48)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__make_tags__succeeded)
                {
                  hlds__make_tags__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__V_48_48, (MR_Integer) 0)));
                  hlds__make_tags__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_32_32, (MR_Integer) 0)));
                  hlds__make_tags__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_32_32, (MR_Integer) 1)));
                  *hlds__make_tags__Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_32_32, (MR_Integer) 2)));
                  hlds__make_tags__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_tags__V_28_28;
              MR_Word hlds__make_tags__V_21_21;
              MR_Word hlds__make_tags__V_22_22;

              hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__V_46_46)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__make_tags__succeeded)
                {
                  hlds__make_tags__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__V_46_46, (MR_Integer) 0)));
                  hlds__make_tags__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_28_28, (MR_Integer) 0)));
                  hlds__make_tags__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_28_28, (MR_Integer) 1)));
                  *hlds__make_tags__Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_28_28, (MR_Integer) 2)));
                  hlds__make_tags__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__make_tags__V_26_26;
              MR_Word hlds__make_tags__V_24_24;

              hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__V_45_45)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__make_tags__succeeded)
                {
                  hlds__make_tags__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__V_45_45, (MR_Integer) 0)));
                  hlds__make_tags__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_26_26, (MR_Integer) 1)));
                  *hlds__make_tags__Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_26_26, (MR_Integer) 2)));
                  hlds__make_tags__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__make_tags__V_30_30;
              MR_Word hlds__make_tags__V_19_19;
              MR_Word hlds__make_tags__V_20_20;

              hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__V_47_47)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__make_tags__succeeded)
                {
                  hlds__make_tags__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__V_47_47, (MR_Integer) 0)));
                  hlds__make_tags__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_30_30, (MR_Integer) 0)));
                  hlds__make_tags__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_30_30, (MR_Integer) 1)));
                  *hlds__make_tags__Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_30_30, (MR_Integer) 2)));
                  hlds__make_tags__succeeded = MR_TRUE;
                }
            }
            break;
        }
      }
    return hlds__make_tags__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_tags__is_direct_arg_ctor_6_p_0_1(
  MR_Box hlds__make_tags__closure_arg)
{
  {
    MR_bool hlds__make_tags__succeeded;
    MR_Box hlds__make_tags__closure = hlds__make_tags__closure_arg;

    {
      hlds__make_tags__succeeded = hlds__make_tags__IntroducedFrom__pred__is_direct_arg_ctor__589__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__closure, (MR_Integer) 4))));
    }
    return hlds__make_tags__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_tags__is_direct_arg_ctor_6_p_0(
  MR_Word hlds__make_tags__TypeTable_7,
  MR_Word hlds__make_tags__Target_8,
  MR_Word hlds__make_tags__TypeCtorModule_9,
  MR_Word hlds__make_tags__TypeStatus_10,
  MR_Word hlds__make_tags__AssertedDirectArgCtors_11,
  MR_Word hlds__make_tags__Ctor_12)
{
  {
    MR_bool hlds__make_tags__succeeded;
    MR_Word hlds__make_tags__ExistQTVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_12, (MR_Integer) 0)));
    MR_Word hlds__make_tags__ExistConstraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_12, (MR_Integer) 1)));
    MR_Word hlds__make_tags__ConsName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_12, (MR_Integer) 2)));
    MR_Word hlds__make_tags__ConsArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_12, (MR_Integer) 3)));
    MR_Integer hlds__make_tags__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_12, (MR_Integer) 4)));
    MR_Word hlds__make_tags__ConsArg_19;
    MR_Word hlds__make_tags__ArgType_21;
    MR_Word hlds__make_tags__ArgTypeCtor_24;
    MR_Word hlds__make_tags__ArgTypeCtorArgTypes_25;
    MR_Word hlds__make_tags__ArgCond_26;
    MR_Word hlds__make_tags__V_47_47;
    MR_Word hlds__make_tags__V_48_48;
    MR_String hlds__make_tags__V_49_49;
    MR_String hlds__make_tags__V_50_50;
    MR_String hlds__make_tags__V_51_51;
    MR_Integer hlds__make_tags__V_52_52;
    MR_Word hlds__make_tags__OldImportStatus_70;
    MR_Word hlds__make_tags___CtorContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_12, (MR_Integer) 5)));
    MR_Word hlds__make_tags___MaybeFieldName_20;
    MR_Word hlds__make_tags___ArgWidth_22;
    MR_Word hlds__make_tags___ArgContext_23;
    MR_Word hlds__make_tags__TypeCtorInfo_62_62;
    MR_Word hlds__make_tags__V_53_53;
    MR_Word hlds__make_tags__V_54_54;

    hlds__make_tags__succeeded = (hlds__make_tags__ExistQTVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (hlds__make_tags__succeeded)
      {
        hlds__make_tags__succeeded = (hlds__make_tags__ExistConstraints_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__make_tags__succeeded)
          {
            hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__ConsArgs_16)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_tags__succeeded)
              {
                hlds__make_tags__ConsArg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ConsArgs_16, (MR_Integer) 0)));
                hlds__make_tags__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ConsArgs_16, (MR_Integer) 1)));
                hlds__make_tags__succeeded = (hlds__make_tags__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__make_tags__succeeded)
                  {
                    hlds__make_tags__V_52_52 = (MR_Integer) 1;
                    hlds__make_tags__V_49_49 = (MR_String) "hlds.make_tags";
                    hlds__make_tags__V_50_50 = (MR_String) "predicate \140hlds.make_tags.is_direct_arg_ctor\'/6";
                    hlds__make_tags__V_51_51 = (MR_String) "Arity != 1";
                    {
                      hlds__make_tags__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_tags__V_48_48, 0) = ((MR_Box) (&hlds__make_tags_scalar_common_2[2]));
                      MR_hl_field(MR_mktag(0), hlds__make_tags__V_48_48, 1) = ((MR_Box) (hlds__make_tags__is_direct_arg_ctor_6_p_0_1));
                      MR_hl_field(MR_mktag(0), hlds__make_tags__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), hlds__make_tags__V_48_48, 3) = ((MR_Box) (hlds__make_tags__Arity_17));
                      MR_hl_field(MR_mktag(0), hlds__make_tags__V_48_48, 4) = ((MR_Box) (hlds__make_tags__V_52_52));
                    }
                    {
                      mercury__require__expect_4_p_0(hlds__make_tags__V_48_48, hlds__make_tags__V_49_49, hlds__make_tags__V_50_50, hlds__make_tags__V_51_51);
                    }
                    hlds__make_tags___MaybeFieldName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__ConsArg_19, (MR_Integer) 0)));
                    hlds__make_tags__ArgType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__ConsArg_19, (MR_Integer) 1)));
                    hlds__make_tags___ArgWidth_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__ConsArg_19, (MR_Integer) 2)));
                    hlds__make_tags___ArgContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__ConsArg_19, (MR_Integer) 3)));
                    {
                      hlds__make_tags__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(hlds__make_tags__ArgType_21, &hlds__make_tags__ArgTypeCtor_24, &hlds__make_tags__ArgTypeCtorArgTypes_25);
                    }
                    if (hlds__make_tags__succeeded)
                      {
                        {
                          hlds__make_tags__V_53_53 = hlds__status__type_status_is_imported_1_f_0(hlds__make_tags__TypeStatus_10);
                        }
                        hlds__make_tags__succeeded = (hlds__make_tags__V_53_53 == (MR_Integer) 1);
                        if (hlds__make_tags__succeeded)
                          {
                            hlds__make_tags__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
                            {
                              hlds__make_tags__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__make_tags__V_54_54, 0) = ((MR_Box) (hlds__make_tags__ConsName_15));
                              MR_hl_field(MR_mktag(0), hlds__make_tags__V_54_54, 1) = ((MR_Box) (hlds__make_tags__Arity_17));
                            }
                            {
                              hlds__make_tags__succeeded = mercury__list__contains_2_p_0(hlds__make_tags__TypeCtorInfo_62_62, hlds__make_tags__AssertedDirectArgCtors_11, ((MR_Box) (hlds__make_tags__V_54_54)));
                            }
                          }
                        if (hlds__make_tags__succeeded)
                          {
                            hlds__make_tags__ArgCond_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            hlds__make_tags__succeeded = MR_TRUE;
                          }
                        else
                          {
                            {
                              hlds__make_tags__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(hlds__make_tags__ArgTypeCtor_24);
                            }
                            if (hlds__make_tags__succeeded)
                              {
                                hlds__make_tags__ArgCond_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                hlds__make_tags__succeeded = MR_TRUE;
                              }
                            else
                              {
                                MR_Word hlds__make_tags__ArgTypeDefn_27;
                                MR_Word hlds__make_tags__ArgBody_28;
                                MR_Word hlds__make_tags__Assertions_29;

                                {
                                  hlds__make_tags__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_tags__TypeTable_7, hlds__make_tags__ArgTypeCtor_24, &hlds__make_tags__ArgTypeDefn_27);
                                }
                                if (hlds__make_tags__succeeded)
                                  {
                                    {
                                      hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_tags__ArgTypeDefn_27, &hlds__make_tags__ArgBody_28);
                                    }
                                    {
                                      hlds__make_tags__succeeded = hlds__make_tags__is_foreign_type_for_target_3_p_0(hlds__make_tags__ArgBody_28, hlds__make_tags__Target_8, &hlds__make_tags__Assertions_29);
                                    }
                                    if (hlds__make_tags__succeeded)
                                      {
                                        {
                                          hlds__make_tags__succeeded = hlds__hlds_data__asserted_word_aligned_pointer_1_p_0(hlds__make_tags__Assertions_29);
                                        }
                                        if (hlds__make_tags__succeeded)
                                          {
                                            hlds__make_tags__ArgCond_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                            hlds__make_tags__succeeded = MR_TRUE;
                                          }
                                      }
                                    else
                                      {
                                        MR_Word hlds__make_tags__TypeCtorInfo_63_63;
                                        MR_Word hlds__make_tags__TypeCtorInfo_64_64;
                                        MR_Word hlds__make_tags__ArgCtors_30;
                                        MR_Word hlds__make_tags__ArgConsTagValues_31;
                                        MR_Word hlds__make_tags__ArgMaybeCheaperTagTest_32;
                                        MR_Word hlds__make_tags__ArgDuKind_33;
                                        MR_Word hlds__make_tags__ArgDirectArgCtors_35;
                                        MR_Word hlds__make_tags__ArgReservedTag_36;
                                        MR_Word hlds__make_tags__ArgReservedAddr_37;
                                        MR_Word hlds__make_tags__ArgMaybeForeign_38;
                                        MR_Word hlds__make_tags__ArgConsTagValueList_40;
                                        MR_Word hlds__make_tags__ArgConsTagValue_41;
                                        MR_Word hlds__make_tags__V_55_55;
                                        MR_Word hlds__make_tags__V_56_56;
                                        MR_Word hlds__make_tags__V_57_57;
                                        MR_Word hlds__make_tags___ArgMaybeUserEqComp_34;
                                        MR_Word hlds__make_tags__V_39_39;
                                        MR_Word hlds__make_tags___ConsId_42;
                                        MR_Word hlds__make_tags__TypeCtorInfo_65_65;
                                        MR_Word hlds__make_tags__V_58_58;
                                        MR_Word hlds__make_tags__V_59_59;

                                        hlds__make_tags__succeeded = (hlds__make_tags__ArgTypeCtorArgTypes_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (hlds__make_tags__succeeded)
                                          {
                                            hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__ArgBody_28)) == (MR_mktag((MR_Integer) 1)));
                                            if (hlds__make_tags__succeeded)
                                              {
                                                hlds__make_tags__ArgCtors_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgBody_28, (MR_Integer) 0)));
                                                hlds__make_tags__ArgConsTagValues_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgBody_28, (MR_Integer) 1)));
                                                hlds__make_tags__ArgMaybeCheaperTagTest_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgBody_28, (MR_Integer) 2)));
                                                hlds__make_tags__ArgDuKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgBody_28, (MR_Integer) 3)));
                                                hlds__make_tags___ArgMaybeUserEqComp_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgBody_28, (MR_Integer) 4)));
                                                hlds__make_tags__ArgDirectArgCtors_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgBody_28, (MR_Integer) 5)));
                                                hlds__make_tags__ArgReservedTag_36 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgBody_28, (MR_Integer) 6)))) & (MR_Integer) 1);
                                                hlds__make_tags__ArgReservedAddr_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgBody_28, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                                hlds__make_tags__ArgMaybeForeign_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgBody_28, (MR_Integer) 7)));
                                                hlds__make_tags__succeeded = (hlds__make_tags__ArgMaybeCheaperTagTest_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (hlds__make_tags__succeeded)
                                                  {
                                                    hlds__make_tags__succeeded = (hlds__make_tags__ArgDuKind_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                                                    if (hlds__make_tags__succeeded)
                                                      {
                                                        hlds__make_tags__succeeded = (hlds__make_tags__ArgDirectArgCtors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                        if (hlds__make_tags__succeeded)
                                                          {
                                                            hlds__make_tags__succeeded = (hlds__make_tags__ArgReservedTag_36 == (MR_Integer) 1);
                                                            if (hlds__make_tags__succeeded)
                                                              {
                                                                hlds__make_tags__succeeded = (hlds__make_tags__ArgReservedAddr_37 == (MR_Integer) 1);
                                                                if (hlds__make_tags__succeeded)
                                                                  {
                                                                    hlds__make_tags__succeeded = (hlds__make_tags__ArgMaybeForeign_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                    if (hlds__make_tags__succeeded)
                                                                      {
                                                                        hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__ArgCtors_30)) == (MR_mktag((MR_Integer) 1)));
                                                                        if (hlds__make_tags__succeeded)
                                                                          {
                                                                            hlds__make_tags__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgCtors_30, (MR_Integer) 0)));
                                                                            hlds__make_tags__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgCtors_30, (MR_Integer) 1)));
                                                                            hlds__make_tags__succeeded = (hlds__make_tags__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                            if (hlds__make_tags__succeeded)
                                                                              {
                                                                                hlds__make_tags__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                                                                                hlds__make_tags__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
                                                                                {
                                                                                  mercury__map__to_assoc_list_2_p_0(hlds__make_tags__TypeCtorInfo_63_63, hlds__make_tags__TypeCtorInfo_64_64, hlds__make_tags__ArgConsTagValues_31, &hlds__make_tags__ArgConsTagValueList_40);
                                                                                }
                                                                                hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__ArgConsTagValueList_40)) == (MR_mktag((MR_Integer) 1)));
                                                                                if (hlds__make_tags__succeeded)
                                                                                  {
                                                                                    hlds__make_tags__ArgConsTagValue_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgConsTagValueList_40, (MR_Integer) 0)));
                                                                                    hlds__make_tags__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgConsTagValueList_40, (MR_Integer) 1)));
                                                                                    hlds__make_tags__succeeded = (hlds__make_tags__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                    if (hlds__make_tags__succeeded)
                                                                                      {
                                                                                        hlds__make_tags___ConsId_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__ArgConsTagValue_41, (MR_Integer) 0)));
                                                                                        hlds__make_tags__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__ArgConsTagValue_41, (MR_Integer) 1)));
                                                                                        hlds__make_tags__succeeded = (hlds__make_tags__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                                                        if (hlds__make_tags__succeeded)
                                                                                          {
                                                                                            {
                                                                                              hlds__make_tags__V_58_58 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__make_tags__TypeStatus_10);
                                                                                            }
                                                                                            hlds__make_tags__succeeded = (hlds__make_tags__V_58_58 == (MR_Integer) 1);
                                                                                            if (hlds__make_tags__succeeded)
                                                                                              {
                                                                                                hlds__make_tags__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
                                                                                                {
                                                                                                  hlds__make_tags__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                                                                  MR_hl_field(MR_mktag(0), hlds__make_tags__V_59_59, 0) = ((MR_Box) (hlds__make_tags__ConsName_15));
                                                                                                  MR_hl_field(MR_mktag(0), hlds__make_tags__V_59_59, 1) = ((MR_Box) (hlds__make_tags__Arity_17));
                                                                                                }
                                                                                                {
                                                                                                  hlds__make_tags__succeeded = mercury__list__contains_2_p_0(hlds__make_tags__TypeCtorInfo_65_65, hlds__make_tags__AssertedDirectArgCtors_11, ((MR_Box) (hlds__make_tags__V_59_59)));
                                                                                                }
                                                                                              }
                                                                                            if (hlds__make_tags__succeeded)
                                                                                              {
                                                                                                hlds__make_tags__ArgCond_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                                                                hlds__make_tags__succeeded = MR_TRUE;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                MR_Word hlds__make_tags__ArgTypeCtorSymName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__ArgTypeCtor_24, (MR_Integer) 0)));
                                                                                                MR_Word hlds__make_tags__ArgTypeCtorModule_45;
                                                                                                MR_Integer hlds__make_tags___ArgTypeCtorArity_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__ArgTypeCtor_24, (MR_Integer) 1)));

                                                                                                {
                                                                                                  hlds__make_tags__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(hlds__make_tags__ArgTypeCtorSymName_43, &hlds__make_tags__ArgTypeCtorModule_45);
                                                                                                }
                                                                                                if (hlds__make_tags__succeeded)
                                                                                                  {
                                                                                                    {
                                                                                                      hlds__make_tags__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_tags__TypeCtorModule_9, hlds__make_tags__ArgTypeCtorModule_45);
                                                                                                    }
                                                                                                    if (hlds__make_tags__succeeded)
                                                                                                      {
                                                                                                        MR_Word hlds__make_tags__ArgTypeStatus_46;

                                                                                                        {
                                                                                                          hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_tags__ArgTypeDefn_27, &hlds__make_tags__ArgTypeStatus_46);
                                                                                                        }
                                                                                                        {
                                                                                                          hlds__make_tags__ArgCond_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                                                          MR_hl_field(MR_mktag(1), hlds__make_tags__ArgCond_26, 0) = ((MR_Box) (hlds__make_tags__ArgTypeStatus_46));
                                                                                                        }
                                                                                                      }
                                                                                                    else
                                                                                                      hlds__make_tags__ArgCond_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                                                                                                    hlds__make_tags__succeeded = MR_TRUE;
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
                        if (hlds__make_tags__succeeded)
                          {
                            hlds__make_tags__OldImportStatus_70 = (MR_Word) hlds__make_tags__TypeStatus_10;
                            switch (MR_tag((MR_Word) hlds__make_tags__OldImportStatus_70)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                switch (MR_unmkbody(hlds__make_tags__OldImportStatus_70)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                  case (MR_Integer) 1:
                                    hlds__make_tags__succeeded = (hlds__make_tags__ArgCond_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    break;
                                  case (MR_Integer) 2:
                                  case (MR_Integer) 6:
                                    {
                                      {
                                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_tags", (MR_String) "function \140hlds.make_tags.module_visibilities_allow_direct_arg\'/2", (MR_String) "inappropriate status for type");
                                      }
                                      hlds__make_tags__succeeded = MR_TRUE;
                                    }
                                    break;
                                  case (MR_Integer) 3:
                                  case (MR_Integer) 7:
                                    switch (MR_tag((MR_Word) hlds__make_tags__ArgCond_26)) {
                                      default:
                                        hlds__make_tags__succeeded = MR_FALSE;
                                        break;
                                      case (MR_Integer) 0:
                                        switch (MR_unmkbody(hlds__make_tags__ArgCond_26)) {
                                          default:
                                            hlds__make_tags__succeeded = MR_FALSE;
                                            break;
                                          case (MR_Integer) 0:
                                          case (MR_Integer) 1:
                                            hlds__make_tags__succeeded = MR_TRUE;
                                            break;
                                        }
                                        break;
                                      case (MR_Integer) 1:
                                        {
                                          MR_Word hlds__make_tags__ArgTypeStatus_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgCond_26, (MR_Integer) 0)));
                                          MR_Word hlds__make_tags__ArgOldTypeStatus_72 = (MR_Word) hlds__make_tags__ArgTypeStatus_71;

                                          if ((hlds__make_tags__OldImportStatus_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
                                            hlds__make_tags__succeeded = (hlds__make_tags__ArgOldTypeStatus_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                                          else
                                            switch (MR_tag((MR_Word) hlds__make_tags__ArgOldTypeStatus_72)) {
                                              default:
                                                hlds__make_tags__succeeded = MR_FALSE;
                                                break;
                                              case (MR_Integer) 0:
                                                switch (MR_unmkbody(hlds__make_tags__ArgOldTypeStatus_72)) {
                                                  default:
                                                    hlds__make_tags__succeeded = MR_FALSE;
                                                    break;
                                                  case (MR_Integer) 3:
                                                    hlds__make_tags__succeeded = MR_TRUE;
                                                    break;
                                                  case (MR_Integer) 5:
                                                    hlds__make_tags__succeeded = MR_TRUE;
                                                    break;
                                                  case (MR_Integer) 7:
                                                    hlds__make_tags__succeeded = MR_TRUE;
                                                    break;
                                                }
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                    break;
                                  case (MR_Integer) 4:
                                    hlds__make_tags__succeeded = MR_TRUE;
                                    break;
                                  case (MR_Integer) 5:
                                  case (MR_Integer) 8:
                                    hlds__make_tags__succeeded = MR_TRUE;
                                    break;
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  {
                                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_tags", (MR_String) "function \140hlds.make_tags.module_visibilities_allow_direct_arg\'/2", (MR_String) "inappropriate status for type");
                                  }
                                  hlds__make_tags__succeeded = MR_TRUE;
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  MR_Word hlds__make_tags__TypeImportLocn_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_tags__OldImportStatus_70, (MR_Integer) 0)));

                                  switch (MR_tag((MR_Word) hlds__make_tags__ArgCond_26)) {
                                    default:
                                      hlds__make_tags__succeeded = MR_FALSE;
                                      break;
                                    case (MR_Integer) 0:
                                      switch (MR_unmkbody(hlds__make_tags__ArgCond_26)) {
                                        default:
                                          hlds__make_tags__succeeded = MR_FALSE;
                                          break;
                                        case (MR_Integer) 0:
                                        case (MR_Integer) 1:
                                          hlds__make_tags__succeeded = MR_TRUE;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 1:
                                      {
                                        MR_Word hlds__make_tags__ArgImportLocn_74;
                                        MR_Word hlds__make_tags__V_80_80;
                                        MR_Word hlds__make_tags__ArgTypeStatus_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__ArgCond_26, (MR_Integer) 0)));

                                        hlds__make_tags__V_80_80 = (MR_Word) hlds__make_tags__ArgTypeStatus_81;
                                        hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__V_80_80)) == (MR_mktag((MR_Integer) 2)));
                                        if (hlds__make_tags__succeeded)
                                          {
                                            hlds__make_tags__ArgImportLocn_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_tags__V_80_80, (MR_Integer) 0)));
                                            hlds__make_tags__succeeded = (hlds__make_tags__ArgImportLocn_74 == (MR_Integer) 3);
                                            if (hlds__make_tags__succeeded)
                                              {
                                                hlds__make_tags__succeeded = (hlds__make_tags__TypeImportLocn_73 == (MR_Integer) 3);
                                                hlds__make_tags__succeeded = !(hlds__make_tags__succeeded);
                                              }
                                            hlds__make_tags__succeeded = !(hlds__make_tags__succeeded);
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
    return hlds__make_tags__succeeded;
  }
}

static MR_Box MR_CALL 
hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0_2(
  MR_Box hlds__make_tags__closure_arg,
  MR_Box hlds__make_tags__wrapper_arg_1)
{
  {
    MR_Box hlds__make_tags__wrapper_arg_2;
    MR_Box hlds__make_tags__closure = hlds__make_tags__closure_arg;
    MR_Word hlds__make_tags__conv0_HeadVar__2_2;

    {
      hlds__make_tags__conv0_HeadVar__2_2 = hlds__make_tags__constructor_to_sym_name_and_arity_1_f_0(((MR_Word) hlds__make_tags__wrapper_arg_1));
    }
    hlds__make_tags__wrapper_arg_2 = ((MR_Box) (hlds__make_tags__conv0_HeadVar__2_2));
    return hlds__make_tags__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0_1(
  MR_Box hlds__make_tags__closure_arg,
  MR_Box hlds__make_tags__wrapper_arg_1)
{
  {
    MR_bool hlds__make_tags__succeeded;
    MR_Box hlds__make_tags__closure = hlds__make_tags__closure_arg;

    {
      hlds__make_tags__succeeded = hlds__make_tags__is_direct_arg_ctor_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__closure, (MR_Integer) 7))), ((MR_Word) hlds__make_tags__wrapper_arg_1));
    }
    return hlds__make_tags__succeeded;
  }
}

static void MR_CALL 
hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0(
  MR_Word hlds__make_tags__Target_11,
  MR_Word hlds__make_tags__ModuleName_12,
  MR_Word hlds__make_tags__DebugTypeRep_13,
  MR_Integer hlds__make_tags__MaxTag_14,
  MR_Word hlds__make_tags__TypeCtor_15,
  MR_Word hlds__make_tags__TypeDefn_16,
  MR_Word hlds__make_tags__STATE_VARIABLE_TypeTable_0_60,
  MR_Word * hlds__make_tags__STATE_VARIABLE_TypeTable_61,
  MR_Word hlds__make_tags__STATE_VARIABLE_Specs_0_62,
  MR_Word * hlds__make_tags__STATE_VARIABLE_Specs_63)
{
  {
    MR_bool hlds__make_tags__succeeded;
    MR_Word hlds__make_tags__Body_19;

    {
      hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_tags__TypeDefn_16, &hlds__make_tags__Body_19);
    }
    switch (MR_tag((MR_Word) hlds__make_tags__Body_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *hlds__make_tags__STATE_VARIABLE_TypeTable_61 = hlds__make_tags__STATE_VARIABLE_TypeTable_0_60;
          *hlds__make_tags__STATE_VARIABLE_Specs_63 = hlds__make_tags__STATE_VARIABLE_Specs_0_62;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_tags__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Body_19, (MR_Integer) 0)));
          MR_Word hlds__make_tags__DuKind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Body_19, (MR_Integer) 3)));
          MR_Word hlds__make_tags__MaybeUserEqComp_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Body_19, (MR_Integer) 4)));
          MR_Word hlds__make_tags__MaybeAssertedDirectArgCtors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Body_19, (MR_Integer) 5)));
          MR_Word hlds__make_tags__ReservedTag_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Body_19, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word hlds__make_tags__ReservedAddr_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Body_19, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word hlds__make_tags__MaybeForeign_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Body_19, (MR_Integer) 7)));
          MR_Word hlds__make_tags___ConsTagValues_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Body_19, (MR_Integer) 1)));
          MR_Word hlds__make_tags___MaybeCheaperTagTest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Body_19, (MR_Integer) 2)));
          MR_Word hlds__make_tags__TypeCtorModule_34;
          MR_Word hlds__make_tags__TypeCtorSymName_32;
          MR_Word hlds__make_tags__V_64_64;
          MR_Word hlds__make_tags__V_29_29;
          MR_Word hlds__make_tags__V_30_30;
          MR_Word hlds__make_tags__V_31_31;
          MR_Integer hlds__make_tags___TypeCtorArity_33;

          hlds__make_tags__succeeded = (hlds__make_tags__DuKind_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          if (hlds__make_tags__succeeded)
            {
              hlds__make_tags__succeeded = (hlds__make_tags__ReservedTag_26 == (MR_Integer) 1);
              if (hlds__make_tags__succeeded)
                {
                  hlds__make_tags__succeeded = (hlds__make_tags__ReservedAddr_27 == (MR_Integer) 1);
                  if (hlds__make_tags__succeeded)
                    {
                      hlds__make_tags__succeeded = (hlds__make_tags__MaybeForeign_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (hlds__make_tags__succeeded)
                        {
                          hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__Ctors_20)) == (MR_mktag((MR_Integer) 1)));
                          if (hlds__make_tags__succeeded)
                            {
                              hlds__make_tags__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Ctors_20, (MR_Integer) 0)));
                              hlds__make_tags__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Ctors_20, (MR_Integer) 1)));
                              hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__V_64_64)) == (MR_mktag((MR_Integer) 1)));
                              if (hlds__make_tags__succeeded)
                                {
                                  hlds__make_tags__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__V_64_64, (MR_Integer) 0)));
                                  hlds__make_tags__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__V_64_64, (MR_Integer) 1)));
                                  hlds__make_tags__TypeCtorSymName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__TypeCtor_15, (MR_Integer) 0)));
                                  hlds__make_tags___TypeCtorArity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__TypeCtor_15, (MR_Integer) 1)));
                                  {
                                    hlds__make_tags__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(hlds__make_tags__TypeCtorSymName_32, &hlds__make_tags__TypeCtorModule_34);
                                  }
                                }
                            }
                        }
                    }
                }
            }
          if (hlds__make_tags__succeeded)
            {
              MR_Word hlds__make_tags__TypeCtorInfo_83_83;
              MR_Word hlds__make_tags__TypeStatus_35;
              MR_Word hlds__make_tags__AssertedDirectArgFunctors_36;
              MR_Word hlds__make_tags__Constants_37;
              MR_Word hlds__make_tags__Functors_38;
              MR_Word hlds__make_tags__DirectArgFunctors_39;
              MR_Word hlds__make_tags__NonDirectArgFunctors_40;
              MR_Word hlds__make_tags__V_65_65;
              MR_Word hlds__make_tags__Ctor_89;
              MR_Word hlds__make_tags__Ctors_90;
              MR_Word hlds__make_tags__Constants0_93;
              MR_Word hlds__make_tags__Functors0_94;
              MR_Word hlds__make_tags__Args_95;
              MR_Word hlds__make_tags__V_98_98;
              MR_Word hlds__make_tags__V_99_99;
              MR_Word hlds__make_tags__V_100_100;
              MR_Integer hlds__make_tags__V_101_101;
              MR_Word hlds__make_tags__V_102_102;

              {
                hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_tags__TypeDefn_16, &hlds__make_tags__TypeStatus_35);
              }
              if ((hlds__make_tags__MaybeAssertedDirectArgCtors_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__make_tags__AssertedDirectArgFunctors_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                hlds__make_tags__AssertedDirectArgFunctors_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__MaybeAssertedDirectArgCtors_25, (MR_Integer) 0)));
              hlds__make_tags__Ctor_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Ctors_20, (MR_Integer) 0)));
              hlds__make_tags__Ctors_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Ctors_20, (MR_Integer) 1)));
              {
                hlds__make_tags__separate_out_constants_3_p_0(hlds__make_tags__Ctors_90, &hlds__make_tags__Constants0_93, &hlds__make_tags__Functors0_94);
              }
              hlds__make_tags__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_89, (MR_Integer) 0)));
              hlds__make_tags__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_89, (MR_Integer) 1)));
              hlds__make_tags__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_89, (MR_Integer) 2)));
              hlds__make_tags__Args_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_89, (MR_Integer) 3)));
              hlds__make_tags__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_89, (MR_Integer) 4)));
              hlds__make_tags__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_89, (MR_Integer) 5)));
              if ((hlds__make_tags__Args_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    hlds__make_tags__Constants_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__Constants_37, 0) = ((MR_Box) (hlds__make_tags__Ctor_89));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__Constants_37, 1) = ((MR_Box) (hlds__make_tags__Constants0_93));
                  }
                  hlds__make_tags__Functors_38 = hlds__make_tags__Functors0_94;
                }
              else
                {
                  hlds__make_tags__Constants_37 = hlds__make_tags__Constants0_93;
                  {
                    hlds__make_tags__Functors_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__Functors_38, 0) = ((MR_Box) (hlds__make_tags__Ctor_89));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__Functors_38, 1) = ((MR_Box) (hlds__make_tags__Functors0_94));
                  }
                }
              {
                hlds__make_tags__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_tags__V_65_65, 0) = ((MR_Box) (&hlds__make_tags_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), hlds__make_tags__V_65_65, 1) = ((MR_Box) (hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0_1));
                MR_hl_field(MR_mktag(0), hlds__make_tags__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(0), hlds__make_tags__V_65_65, 3) = ((MR_Box) (hlds__make_tags__STATE_VARIABLE_TypeTable_0_60));
                MR_hl_field(MR_mktag(0), hlds__make_tags__V_65_65, 4) = ((MR_Box) (hlds__make_tags__Target_11));
                MR_hl_field(MR_mktag(0), hlds__make_tags__V_65_65, 5) = ((MR_Box) (hlds__make_tags__TypeCtorModule_34));
                MR_hl_field(MR_mktag(0), hlds__make_tags__V_65_65, 6) = ((MR_Box) (hlds__make_tags__TypeStatus_35));
                MR_hl_field(MR_mktag(0), hlds__make_tags__V_65_65, 7) = ((MR_Box) (hlds__make_tags__AssertedDirectArgFunctors_36));
              }
              hlds__make_tags__TypeCtorInfo_83_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
              {
                mercury__list__filter_4_p_0(hlds__make_tags__TypeCtorInfo_83_83, hlds__make_tags__V_65_65, hlds__make_tags__Functors_38, &hlds__make_tags__DirectArgFunctors_39, &hlds__make_tags__NonDirectArgFunctors_40);
              }
              if ((hlds__make_tags__DirectArgFunctors_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *hlds__make_tags__STATE_VARIABLE_TypeTable_61 = hlds__make_tags__STATE_VARIABLE_TypeTable_0_60;
              else
                {
                  MR_Integer hlds__make_tags__MaxTagForDirect_45;
                  MR_Word hlds__make_tags__LeftOverDirectArgFunctors_48;
                  MR_Word hlds__make_tags__DirectArgConsTagValues_49;
                  MR_Word hlds__make_tags__MaybeCheaperTagTest_50;
                  MR_Word hlds__make_tags__DirectArgFunctorNames_51;
                  MR_Word hlds__make_tags__DirectArgBody_53;
                  MR_Word hlds__make_tags__DirectArgTypeDefn_54;
                  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_67_67;
                  MR_Integer hlds__make_tags__STATE_VARIABLE_NextTag_68_68;
                  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_69_69;
                  MR_Integer hlds__make_tags__STATE_VARIABLE_NextTag_71_71;
                  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_72_72;
                  MR_Word hlds__make_tags__V_73_73;
                  MR_Word hlds__make_tags__V_79_79;

                  {
                    mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, &hlds__make_tags__STATE_VARIABLE_CtorTags_67_67);
                  }
                  {
                    hlds__make_tags__assign_constant_tags_6_p_0(hlds__make_tags__TypeCtor_15, hlds__make_tags__Constants_37, (MR_Integer) 0, &hlds__make_tags__STATE_VARIABLE_NextTag_68_68, hlds__make_tags__STATE_VARIABLE_CtorTags_67_67, &hlds__make_tags__STATE_VARIABLE_CtorTags_69_69);
                  }
                  if ((hlds__make_tags__NonDirectArgFunctors_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    hlds__make_tags__MaxTagForDirect_45 = hlds__make_tags__MaxTag_14;
                  else
                    {
                      hlds__make_tags__MaxTagForDirect_45 = (hlds__make_tags__MaxTag_14 - (MR_Integer) 1);
                    }
                  {
                    hlds__make_tags__assign_direct_arg_tags_8_p_0(hlds__make_tags__TypeCtor_15, hlds__make_tags__DirectArgFunctors_39, hlds__make_tags__STATE_VARIABLE_NextTag_68_68, &hlds__make_tags__STATE_VARIABLE_NextTag_71_71, hlds__make_tags__MaxTagForDirect_45, &hlds__make_tags__LeftOverDirectArgFunctors_48, hlds__make_tags__STATE_VARIABLE_CtorTags_69_69, &hlds__make_tags__STATE_VARIABLE_CtorTags_72_72);
                  }
                  {
                    hlds__make_tags__V_73_73 = mercury__list__f_43_43_2_f_0(hlds__make_tags__TypeCtorInfo_83_83, hlds__make_tags__LeftOverDirectArgFunctors_48, hlds__make_tags__NonDirectArgFunctors_40);
                  }
                  {
                    hlds__make_tags__assign_unshared_tags_7_p_0(hlds__make_tags__TypeCtor_15, hlds__make_tags__V_73_73, hlds__make_tags__STATE_VARIABLE_NextTag_71_71, hlds__make_tags__MaxTag_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_tags__STATE_VARIABLE_CtorTags_72_72, &hlds__make_tags__DirectArgConsTagValues_49);
                  }
                  {
                    hlds__make_tags__compute_cheaper_tag_test_2_p_0(hlds__make_tags__DirectArgConsTagValues_49, &hlds__make_tags__MaybeCheaperTagTest_50);
                  }
                  {
                    hlds__make_tags__DirectArgFunctorNames_51 = mercury__list__map_2_f_0(hlds__make_tags__TypeCtorInfo_83_83, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, (MR_Word) &hlds__make_tags_scalar_common_3[1], hlds__make_tags__DirectArgFunctors_39);
                  }
                  switch (hlds__make_tags__DebugTypeRep_13) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        hlds__make_tags__output_direct_arg_functor_summary_5_p_0(hlds__make_tags__ModuleName_12, hlds__make_tags__TypeCtor_15, hlds__make_tags__DirectArgFunctorNames_51);
                      }
                      break;
                  }
                  {
                    hlds__make_tags__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__V_79_79, 0) = ((MR_Box) (hlds__make_tags__DirectArgFunctorNames_51));
                  }
                  {
                    hlds__make_tags__DirectArgBody_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__DirectArgBody_53, 0) = ((MR_Box) (hlds__make_tags__Ctors_20));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__DirectArgBody_53, 1) = ((MR_Box) (hlds__make_tags__DirectArgConsTagValues_49));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__DirectArgBody_53, 2) = ((MR_Box) (hlds__make_tags__MaybeCheaperTagTest_50));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__DirectArgBody_53, 3) = ((MR_Box) (hlds__make_tags__DuKind_23));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__DirectArgBody_53, 4) = ((MR_Box) (hlds__make_tags__MaybeUserEqComp_24));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__DirectArgBody_53, 5) = ((MR_Box) (hlds__make_tags__V_79_79));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__DirectArgBody_53, 6) = ((MR_Box) ((hlds__make_tags__ReservedTag_26 | ((hlds__make_tags__ReservedAddr_27 << (MR_Integer) 1)))));
                    MR_hl_field(MR_mktag(1), hlds__make_tags__DirectArgBody_53, 7) = ((MR_Box) (hlds__make_tags__MaybeForeign_28));
                  }
                  {
                    hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_tags__DirectArgBody_53, hlds__make_tags__TypeDefn_16, &hlds__make_tags__DirectArgTypeDefn_54);
                  }
                  {
                    hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_tags__TypeCtor_15, hlds__make_tags__DirectArgTypeDefn_54, hlds__make_tags__STATE_VARIABLE_TypeTable_0_60, hlds__make_tags__STATE_VARIABLE_TypeTable_61);
                  }
                }
              {
                hlds__make_tags__check_incorrect_direct_arg_assertions_4_p_0(hlds__make_tags__AssertedDirectArgFunctors_36, hlds__make_tags__NonDirectArgFunctors_40, hlds__make_tags__STATE_VARIABLE_Specs_0_62, hlds__make_tags__STATE_VARIABLE_Specs_63);
              }
            }
          else
            {
              *hlds__make_tags__STATE_VARIABLE_Specs_63 = hlds__make_tags__STATE_VARIABLE_Specs_0_62;
              *hlds__make_tags__STATE_VARIABLE_TypeTable_61 = hlds__make_tags__STATE_VARIABLE_TypeTable_0_60;
            }
        }
        break;
      case (MR_Integer) 2:
        {
          *hlds__make_tags__STATE_VARIABLE_TypeTable_61 = hlds__make_tags__STATE_VARIABLE_TypeTable_0_60;
          *hlds__make_tags__STATE_VARIABLE_Specs_63 = hlds__make_tags__STATE_VARIABLE_Specs_0_62;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_tags__Body_19, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *hlds__make_tags__STATE_VARIABLE_TypeTable_61 = hlds__make_tags__STATE_VARIABLE_TypeTable_0_60;
              *hlds__make_tags__STATE_VARIABLE_Specs_63 = hlds__make_tags__STATE_VARIABLE_Specs_0_62;
            }
            break;
          case (MR_Integer) 1:
            {
              *hlds__make_tags__STATE_VARIABLE_TypeTable_61 = hlds__make_tags__STATE_VARIABLE_TypeTable_0_60;
              *hlds__make_tags__STATE_VARIABLE_Specs_63 = hlds__make_tags__STATE_VARIABLE_Specs_0_62;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_tags__convert_direct_arg_functors_9_p_0(
  MR_Word hlds__make_tags__Target_1,
  MR_Word hlds__make_tags__ModuleName_2,
  MR_Word hlds__make_tags__DebugTypeRep_3,
  MR_Integer hlds__make_tags__MaxTag_4,
  MR_Word hlds__make_tags__HeadVar__5_5,
  MR_Word hlds__make_tags__STATE_VARIABLE_TypeTable_0_6,
  MR_Word * hlds__make_tags__STATE_VARIABLE_TypeTable_7,
  MR_Word hlds__make_tags__STATE_VARIABLE_Specs_0_8,
  MR_Word * hlds__make_tags__STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_tags__succeeded;

        if ((hlds__make_tags__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_tags__STATE_VARIABLE_Specs_9 = hlds__make_tags__STATE_VARIABLE_Specs_0_8;
            *hlds__make_tags__STATE_VARIABLE_TypeTable_7 = hlds__make_tags__STATE_VARIABLE_TypeTable_0_6;
          }
        else
          {
            MR_Word hlds__make_tags__TypeCtorDefn_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word hlds__make_tags__TypeCtorsDefns_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word hlds__make_tags__TypeCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__TypeCtorDefn_24, (MR_Integer) 0)));
            MR_Word hlds__make_tags__TypeDefn_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__TypeCtorDefn_24, (MR_Integer) 1)));
            MR_Word hlds__make_tags__STATE_VARIABLE_TypeTable_34_34;
            MR_Word hlds__make_tags__STATE_VARIABLE_Specs_35_35;

            {
              hlds__make_tags__convert_direct_arg_functors_if_suitable_10_p_0(hlds__make_tags__Target_1, hlds__make_tags__ModuleName_2, hlds__make_tags__DebugTypeRep_3, hlds__make_tags__MaxTag_4, hlds__make_tags__TypeCtor_28, hlds__make_tags__TypeDefn_29, hlds__make_tags__STATE_VARIABLE_TypeTable_0_6, &hlds__make_tags__STATE_VARIABLE_TypeTable_34_34, hlds__make_tags__STATE_VARIABLE_Specs_0_8, &hlds__make_tags__STATE_VARIABLE_Specs_35_35);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_tags__HeadVar__5__tmp_copy_5 = hlds__make_tags__TypeCtorsDefns_25;
              MR_Word hlds__make_tags__STATE_VARIABLE_TypeTable_0__tmp_copy_6 = hlds__make_tags__STATE_VARIABLE_TypeTable_34_34;
              MR_Word hlds__make_tags__STATE_VARIABLE_Specs_0__tmp_copy_8 = hlds__make_tags__STATE_VARIABLE_Specs_35_35;

              hlds__make_tags__STATE_VARIABLE_Specs_0_8 = hlds__make_tags__STATE_VARIABLE_Specs_0__tmp_copy_8;
              hlds__make_tags__STATE_VARIABLE_TypeTable_0_6 = hlds__make_tags__STATE_VARIABLE_TypeTable_0__tmp_copy_6;
              hlds__make_tags__HeadVar__5_5 = hlds__make_tags__HeadVar__5__tmp_copy_5;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_tags__assign_shared_local_tags_6_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Integer hlds__make_tags__PrimaryVal_3,
  MR_Integer hlds__make_tags__SecondaryVal_4,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_5,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_tags__succeeded;

        if ((hlds__make_tags__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_tags__STATE_VARIABLE_CtorTags_6 = hlds__make_tags__STATE_VARIABLE_CtorTags_0_5;
        else
          {
            MR_Word hlds__make_tags__Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__make_tags__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__make_tags__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_14, (MR_Integer) 2)));
            MR_Integer hlds__make_tags__Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_14, (MR_Integer) 4)));
            MR_Word hlds__make_tags__ConsId_25;
            MR_Word hlds__make_tags__Tag_26;
            MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_29_29;
            MR_Integer hlds__make_tags__V_30_30;
            MR_Word hlds__make_tags___ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_14, (MR_Integer) 0)));
            MR_Word hlds__make_tags___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_14, (MR_Integer) 1)));
            MR_Word hlds__make_tags___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_14, (MR_Integer) 3)));
            MR_Word hlds__make_tags___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_14, (MR_Integer) 5)));

            {
              hlds__make_tags__ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_25, 1) = ((MR_Box) (hlds__make_tags__Name_21));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_25, 2) = ((MR_Box) (hlds__make_tags__Arity_23));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_25, 3) = ((MR_Box) (hlds__make_tags__TypeCtor_1));
            }
            {
              hlds__make_tags__Tag_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_26, 1) = ((MR_Box) (hlds__make_tags__PrimaryVal_3));
              MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_26, 2) = ((MR_Box) (hlds__make_tags__SecondaryVal_4));
            }
            {
              mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_tags__ConsId_25)), ((MR_Box) (hlds__make_tags__Tag_26)), hlds__make_tags__STATE_VARIABLE_CtorTags_0_5, &hlds__make_tags__STATE_VARIABLE_CtorTags_29_29);
            }
            hlds__make_tags__V_30_30 = (hlds__make_tags__SecondaryVal_4 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_tags__HeadVar__2__tmp_copy_2 = hlds__make_tags__Ctors_15;
              MR_Integer hlds__make_tags__SecondaryVal__tmp_copy_4 = hlds__make_tags__V_30_30;
              MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_5 = hlds__make_tags__STATE_VARIABLE_CtorTags_29_29;

              hlds__make_tags__STATE_VARIABLE_CtorTags_0_5 = hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_5;
              hlds__make_tags__SecondaryVal_4 = hlds__make_tags__SecondaryVal__tmp_copy_4;
              hlds__make_tags__HeadVar__2_2 = hlds__make_tags__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_tags__assign_shared_remote_tags_7_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Integer hlds__make_tags__PrimaryVal_3,
  MR_Integer hlds__make_tags__SecondaryVal_4,
  MR_Word hlds__make_tags__ReservedAddresses_5,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_6,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_tags__succeeded;

        if ((hlds__make_tags__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_tags__STATE_VARIABLE_CtorTags_7 = hlds__make_tags__STATE_VARIABLE_CtorTags_0_6;
        else
          {
            MR_Word hlds__make_tags__Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__make_tags__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__make_tags__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_16, (MR_Integer) 2)));
            MR_Integer hlds__make_tags__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_16, (MR_Integer) 4)));
            MR_Word hlds__make_tags__ConsId_28;
            MR_Word hlds__make_tags__Tag_29;
            MR_Integer hlds__make_tags__SecondaryVal1_30;
            MR_Word hlds__make_tags__V_33_33;
            MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_34_34;
            MR_Word hlds__make_tags___ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_16, (MR_Integer) 0)));
            MR_Word hlds__make_tags___Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_16, (MR_Integer) 1)));
            MR_Word hlds__make_tags___Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_16, (MR_Integer) 3)));
            MR_Word hlds__make_tags___Ctxt_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_16, (MR_Integer) 5)));

            {
              hlds__make_tags__ConsId_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_28, 1) = ((MR_Box) (hlds__make_tags__Name_24));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_28, 2) = ((MR_Box) (hlds__make_tags__Arity_26));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_28, 3) = ((MR_Box) (hlds__make_tags__TypeCtor_1));
            }
            {
              hlds__make_tags__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_tags__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), hlds__make_tags__V_33_33, 1) = ((MR_Box) (hlds__make_tags__PrimaryVal_3));
              MR_hl_field(MR_mktag(3), hlds__make_tags__V_33_33, 2) = ((MR_Box) (hlds__make_tags__SecondaryVal_4));
            }
            if ((hlds__make_tags__ReservedAddresses_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__make_tags__Tag_29 = hlds__make_tags__V_33_33;
            else
              {
                hlds__make_tags__Tag_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_29, 1) = ((MR_Box) (hlds__make_tags__ReservedAddresses_5));
                MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_29, 2) = ((MR_Box) (hlds__make_tags__V_33_33));
              }
            {
              mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_tags__ConsId_28)), ((MR_Box) (hlds__make_tags__Tag_29)), hlds__make_tags__STATE_VARIABLE_CtorTags_0_6, &hlds__make_tags__STATE_VARIABLE_CtorTags_34_34);
            }
            hlds__make_tags__SecondaryVal1_30 = (hlds__make_tags__SecondaryVal_4 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_tags__HeadVar__2__tmp_copy_2 = hlds__make_tags__Ctors_17;
              MR_Integer hlds__make_tags__SecondaryVal__tmp_copy_4 = hlds__make_tags__SecondaryVal1_30;
              MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_6 = hlds__make_tags__STATE_VARIABLE_CtorTags_34_34;

              hlds__make_tags__STATE_VARIABLE_CtorTags_0_6 = hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_6;
              hlds__make_tags__SecondaryVal_4 = hlds__make_tags__SecondaryVal__tmp_copy_4;
              hlds__make_tags__HeadVar__2_2 = hlds__make_tags__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_tags__assign_unshared_tags_7_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Integer hlds__make_tags__Val_3,
  MR_Integer hlds__make_tags__MaxTag_4,
  MR_Word hlds__make_tags__ReservedAddresses_5,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_6,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_tags__succeeded;

        if ((hlds__make_tags__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_tags__STATE_VARIABLE_CtorTags_7 = hlds__make_tags__STATE_VARIABLE_CtorTags_0_6;
        else
          {
            MR_Word hlds__make_tags__Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__make_tags__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__make_tags__Name_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_16, (MR_Integer) 2)));
            MR_Integer hlds__make_tags__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_16, (MR_Integer) 4)));
            MR_Word hlds__make_tags__ConsId_28;
            MR_Word hlds__make_tags___ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_16, (MR_Integer) 0)));
            MR_Word hlds__make_tags___Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_16, (MR_Integer) 1)));
            MR_Word hlds__make_tags___Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_16, (MR_Integer) 3)));
            MR_Word hlds__make_tags___Ctxt_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_16, (MR_Integer) 5)));

            {
              hlds__make_tags__ConsId_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_28, 1) = ((MR_Box) (hlds__make_tags__Name_24));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_28, 2) = ((MR_Box) (hlds__make_tags__Arity_26));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_28, 3) = ((MR_Box) (hlds__make_tags__TypeCtor_1));
            }
            hlds__make_tags__succeeded = (hlds__make_tags__Val_3 == (MR_Integer) 0);
            if (hlds__make_tags__succeeded)
              hlds__make_tags__succeeded = (hlds__make_tags__Ctors_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_tags__succeeded)
              {
                MR_Word hlds__make_tags__Tag_29;
                MR_Word hlds__make_tags__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                if ((hlds__make_tags__ReservedAddresses_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  hlds__make_tags__Tag_29 = hlds__make_tags__V_34_34;
                else
                  {
                    hlds__make_tags__Tag_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                    MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_29, 1) = ((MR_Box) (hlds__make_tags__ReservedAddresses_5));
                    MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_29, 2) = ((MR_Box) (hlds__make_tags__V_34_34));
                  }
                {
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_tags__ConsId_28)), ((MR_Box) (hlds__make_tags__Tag_29)), hlds__make_tags__STATE_VARIABLE_CtorTags_0_6, hlds__make_tags__STATE_VARIABLE_CtorTags_7);
                }
              }
            else
              {
                MR_Word hlds__make_tags__V_30_30;
                MR_Word hlds__make_tags__V_31_31;

                hlds__make_tags__succeeded = (hlds__make_tags__Val_3 == hlds__make_tags__MaxTag_4);
                if (hlds__make_tags__succeeded)
                  {
                    hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__Ctors_17)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_tags__succeeded)
                      {
                        hlds__make_tags__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Ctors_17, (MR_Integer) 0)));
                        hlds__make_tags__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Ctors_17, (MR_Integer) 1)));
                      }
                  }
                if (hlds__make_tags__succeeded)
                  {
                    {
                      hlds__make_tags__assign_shared_remote_tags_7_p_0(hlds__make_tags__TypeCtor_1, hlds__make_tags__HeadVar__2_2, hlds__make_tags__MaxTag_4, (MR_Integer) 0, hlds__make_tags__ReservedAddresses_5, hlds__make_tags__STATE_VARIABLE_CtorTags_0_6, hlds__make_tags__STATE_VARIABLE_CtorTags_7);
                    }
                  }
                else
                  {
                    hlds__make_tags__succeeded = (hlds__make_tags__Val_3 <= hlds__make_tags__MaxTag_4);
                    if (hlds__make_tags__succeeded)
                      {
                        MR_Word hlds__make_tags__V_39_39;
                        MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_40_40;
                        MR_Integer hlds__make_tags__V_41_41;
                        MR_Word hlds__make_tags__Tag_47;

                        {
                          hlds__make_tags__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__make_tags__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                          MR_hl_field(MR_mktag(3), hlds__make_tags__V_39_39, 1) = ((MR_Box) (hlds__make_tags__Val_3));
                        }
                        if ((hlds__make_tags__ReservedAddresses_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          hlds__make_tags__Tag_47 = hlds__make_tags__V_39_39;
                        else
                          {
                            hlds__make_tags__Tag_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
                            MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_47, 1) = ((MR_Box) (hlds__make_tags__ReservedAddresses_5));
                            MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_47, 2) = ((MR_Box) (hlds__make_tags__V_39_39));
                          }
                        {
                          mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_tags__ConsId_28)), ((MR_Box) (hlds__make_tags__Tag_47)), hlds__make_tags__STATE_VARIABLE_CtorTags_0_6, &hlds__make_tags__STATE_VARIABLE_CtorTags_40_40);
                        }
                        hlds__make_tags__V_41_41 = (hlds__make_tags__Val_3 + (MR_Integer) 1);
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__make_tags__HeadVar__2__tmp_copy_2 = hlds__make_tags__Ctors_17;
                          MR_Integer hlds__make_tags__Val__tmp_copy_3 = hlds__make_tags__V_41_41;
                          MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_6 = hlds__make_tags__STATE_VARIABLE_CtorTags_40_40;

                          hlds__make_tags__STATE_VARIABLE_CtorTags_0_6 = hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_6;
                          hlds__make_tags__Val_3 = hlds__make_tags__Val__tmp_copy_3;
                          hlds__make_tags__HeadVar__2_2 = hlds__make_tags__HeadVar__2__tmp_copy_2;
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
      }
      break;
    }
}

static void MR_CALL 
hlds__make_tags__assign_constant_tags_6_p_0(
  MR_Word hlds__make_tags__TypeCtor_7,
  MR_Word hlds__make_tags__Constants_8,
  MR_Integer hlds__make_tags__InitTag_9,
  MR_Integer * hlds__make_tags__NextTag_10,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_14,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_15)
{
  {
    MR_bool hlds__make_tags__succeeded;

    if ((hlds__make_tags__Constants_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_tags__NextTag_10 = hlds__make_tags__InitTag_9;
        *hlds__make_tags__STATE_VARIABLE_CtorTags_15 = hlds__make_tags__STATE_VARIABLE_CtorTags_0_14;
      }
    else
      {
        MR_Word hlds__make_tags__Ctor_26;
        MR_Word hlds__make_tags__Ctors_27;
        MR_Word hlds__make_tags__Name_33;
        MR_Integer hlds__make_tags__Arity_35;
        MR_Word hlds__make_tags__ConsId_37;
        MR_Word hlds__make_tags__Tag_38;
        MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_29_41;
        MR_Word hlds__make_tags___ExistQVars_31;
        MR_Word hlds__make_tags___Constraints_32;
        MR_Word hlds__make_tags___Args_34;
        MR_Word hlds__make_tags___Ctxt_36;

        *hlds__make_tags__NextTag_10 = (hlds__make_tags__InitTag_9 + (MR_Integer) 1);
        hlds__make_tags__Ctor_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Constants_8, (MR_Integer) 0)));
        hlds__make_tags__Ctors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Constants_8, (MR_Integer) 1)));
        hlds__make_tags___ExistQVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_26, (MR_Integer) 0)));
        hlds__make_tags___Constraints_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_26, (MR_Integer) 1)));
        hlds__make_tags__Name_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_26, (MR_Integer) 2)));
        hlds__make_tags___Args_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_26, (MR_Integer) 3)));
        hlds__make_tags__Arity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_26, (MR_Integer) 4)));
        hlds__make_tags___Ctxt_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_26, (MR_Integer) 5)));
        {
          hlds__make_tags__ConsId_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_37, 1) = ((MR_Box) (hlds__make_tags__Name_33));
          MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_37, 2) = ((MR_Box) (hlds__make_tags__Arity_35));
          MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_37, 3) = ((MR_Box) (hlds__make_tags__TypeCtor_7));
        }
        {
          hlds__make_tags__Tag_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
          MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_38, 1) = ((MR_Box) (hlds__make_tags__InitTag_9));
          MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_38, 2) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_tags__ConsId_37)), ((MR_Box) (hlds__make_tags__Tag_38)), hlds__make_tags__STATE_VARIABLE_CtorTags_0_14, &hlds__make_tags__STATE_VARIABLE_CtorTags_29_41);
        }
        {
          hlds__make_tags__assign_shared_local_tags_6_p_0(hlds__make_tags__TypeCtor_7, hlds__make_tags__Ctors_27, hlds__make_tags__InitTag_9, ((MR_Integer) 0 + (MR_Integer) 1), hlds__make_tags__STATE_VARIABLE_CtorTags_29_41, hlds__make_tags__STATE_VARIABLE_CtorTags_15);
        }
      }
  }
}

static void MR_CALL 
hlds__make_tags__assign_reserved_symbolic_addresses_9_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Word * hlds__make_tags__HeadVar__3_3,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_4,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_5,
  MR_Integer hlds__make_tags__Num_6,
  MR_Integer hlds__make_tags__Max_7,
  MR_Word hlds__make_tags__STATE_VARIABLE_ReservedAddr_0_8,
  MR_Word * hlds__make_tags__STATE_VARIABLE_ReservedAddr_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_tags__succeeded;

        if ((hlds__make_tags__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_tags__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *hlds__make_tags__STATE_VARIABLE_ReservedAddr_9 = hlds__make_tags__STATE_VARIABLE_ReservedAddr_0_8;
            *hlds__make_tags__STATE_VARIABLE_CtorTags_5 = hlds__make_tags__STATE_VARIABLE_CtorTags_0_4;
          }
        else
          {
            MR_Word hlds__make_tags__Ctor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__make_tags__Ctors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 1)));

            hlds__make_tags__succeeded = (hlds__make_tags__Num_6 >= hlds__make_tags__Max_7);
            if (hlds__make_tags__succeeded)
              {
                *hlds__make_tags__HeadVar__3_3 = hlds__make_tags__HeadVar__2_2;
                *hlds__make_tags__STATE_VARIABLE_ReservedAddr_9 = hlds__make_tags__STATE_VARIABLE_ReservedAddr_0_8;
                *hlds__make_tags__STATE_VARIABLE_CtorTags_5 = hlds__make_tags__STATE_VARIABLE_CtorTags_0_4;
              }
            else
              {
                MR_Word hlds__make_tags__Name_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_20, (MR_Integer) 2)));
                MR_Word hlds__make_tags__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_20, (MR_Integer) 3)));
                MR_Integer hlds__make_tags__Arity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_20, (MR_Integer) 4)));
                MR_Word hlds__make_tags__Tag_33;
                MR_Word hlds__make_tags__ConsId_34;
                MR_Word hlds__make_tags__V_39_39;
                MR_Integer hlds__make_tags__V_40_40;
                MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_41_41;
                MR_Integer hlds__make_tags__V_44_44;
                MR_Word hlds__make_tags___ExistQVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_20, (MR_Integer) 0)));
                MR_Word hlds__make_tags___Constraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_20, (MR_Integer) 1)));
                MR_Word hlds__make_tags___Ctxt_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_20, (MR_Integer) 5)));

                {
                  hlds__make_tags__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_tags__V_39_39, 0) = ((MR_Box) (hlds__make_tags__TypeCtor_1));
                  MR_hl_field(MR_mktag(2), hlds__make_tags__V_39_39, 1) = ((MR_Box) (hlds__make_tags__Name_29));
                  MR_hl_field(MR_mktag(2), hlds__make_tags__V_39_39, 2) = ((MR_Box) (hlds__make_tags__Arity_31));
                }
                {
                  hlds__make_tags__Tag_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_33, 1) = ((MR_Box) (hlds__make_tags__V_39_39));
                }
                {
                  hlds__make_tags__V_40_40 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, hlds__make_tags__Args_30);
                }
                {
                  hlds__make_tags__ConsId_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_34, 1) = ((MR_Box) (hlds__make_tags__Name_29));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_34, 2) = ((MR_Box) (hlds__make_tags__V_40_40));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_34, 3) = ((MR_Box) (hlds__make_tags__TypeCtor_1));
                }
                {
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_tags__ConsId_34)), ((MR_Box) (hlds__make_tags__Tag_33)), hlds__make_tags__STATE_VARIABLE_CtorTags_0_4, &hlds__make_tags__STATE_VARIABLE_CtorTags_41_41);
                }
                hlds__make_tags__V_44_44 = (hlds__make_tags__Num_6 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__make_tags__HeadVar__2__tmp_copy_2 = hlds__make_tags__Ctors_21;
                  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_4 = hlds__make_tags__STATE_VARIABLE_CtorTags_41_41;
                  MR_Integer hlds__make_tags__Num__tmp_copy_6 = hlds__make_tags__V_44_44;

                  hlds__make_tags__STATE_VARIABLE_ReservedAddr_0_8 = (MR_Integer) 0;
                  hlds__make_tags__Num_6 = hlds__make_tags__Num__tmp_copy_6;
                  hlds__make_tags__STATE_VARIABLE_CtorTags_0_4 = hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_4;
                  hlds__make_tags__HeadVar__2_2 = hlds__make_tags__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_tags__assign_reserved_numeric_addresses_9_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Word * hlds__make_tags__HeadVar__3_3,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_4,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_5,
  MR_Integer hlds__make_tags__Address_6,
  MR_Integer hlds__make_tags__NumReservedAddresses_7,
  MR_Word hlds__make_tags__STATE_VARIABLE_ReservedAddr_0_8,
  MR_Word * hlds__make_tags__STATE_VARIABLE_ReservedAddr_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_tags__succeeded;

        if ((hlds__make_tags__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_tags__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *hlds__make_tags__STATE_VARIABLE_ReservedAddr_9 = hlds__make_tags__STATE_VARIABLE_ReservedAddr_0_8;
            *hlds__make_tags__STATE_VARIABLE_CtorTags_5 = hlds__make_tags__STATE_VARIABLE_CtorTags_0_4;
          }
        else
          {
            MR_Word hlds__make_tags__Ctor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__make_tags__Ctors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 1)));

            hlds__make_tags__succeeded = (hlds__make_tags__Address_6 >= hlds__make_tags__NumReservedAddresses_7);
            if (hlds__make_tags__succeeded)
              {
                *hlds__make_tags__HeadVar__3_3 = hlds__make_tags__HeadVar__2_2;
                *hlds__make_tags__STATE_VARIABLE_ReservedAddr_9 = hlds__make_tags__STATE_VARIABLE_ReservedAddr_0_8;
                *hlds__make_tags__STATE_VARIABLE_CtorTags_5 = hlds__make_tags__STATE_VARIABLE_CtorTags_0_4;
              }
            else
              {
                MR_Word hlds__make_tags__Name_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_20, (MR_Integer) 2)));
                MR_Integer hlds__make_tags__Arity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_20, (MR_Integer) 4)));
                MR_Word hlds__make_tags__ConsId_33;
                MR_Word hlds__make_tags__Tag_34;
                MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_41_41;
                MR_Integer hlds__make_tags__V_44_44;
                MR_Word hlds__make_tags___ExistQVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_20, (MR_Integer) 0)));
                MR_Word hlds__make_tags___Constraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_20, (MR_Integer) 1)));
                MR_Word hlds__make_tags___Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_20, (MR_Integer) 3)));
                MR_Word hlds__make_tags___Ctxt_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_20, (MR_Integer) 5)));

                {
                  hlds__make_tags__ConsId_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_33, 1) = ((MR_Box) (hlds__make_tags__Name_29));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_33, 2) = ((MR_Box) (hlds__make_tags__Arity_31));
                  MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_33, 3) = ((MR_Box) (hlds__make_tags__TypeCtor_1));
                }
                hlds__make_tags__succeeded = (hlds__make_tags__Address_6 == (MR_Integer) 0);
                if (hlds__make_tags__succeeded)
                  {
                    hlds__make_tags__Tag_34 = (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_tags_scalar_common_1[5]);
                  }
                else
                  {
                    MR_Word hlds__make_tags__V_40_40;

                    {
                      hlds__make_tags__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_tags__V_40_40, 0) = ((MR_Box) (hlds__make_tags__Address_6));
                    }
                    {
                      hlds__make_tags__Tag_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                      MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_34, 1) = ((MR_Box) (hlds__make_tags__V_40_40));
                    }
                  }
                {
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_tags__ConsId_33)), ((MR_Box) (hlds__make_tags__Tag_34)), hlds__make_tags__STATE_VARIABLE_CtorTags_0_4, &hlds__make_tags__STATE_VARIABLE_CtorTags_41_41);
                }
                hlds__make_tags__V_44_44 = (hlds__make_tags__Address_6 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__make_tags__HeadVar__2__tmp_copy_2 = hlds__make_tags__Ctors_21;
                  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_4 = hlds__make_tags__STATE_VARIABLE_CtorTags_41_41;
                  MR_Integer hlds__make_tags__Address__tmp_copy_6 = hlds__make_tags__V_44_44;

                  hlds__make_tags__STATE_VARIABLE_ReservedAddr_0_8 = (MR_Integer) 0;
                  hlds__make_tags__Address_6 = hlds__make_tags__Address__tmp_copy_6;
                  hlds__make_tags__STATE_VARIABLE_CtorTags_0_4 = hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_4;
                  hlds__make_tags__HeadVar__2_2 = hlds__make_tags__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_tags__assign_enum_constants_5_p_0(
  MR_Word hlds__make_tags__TypeCtor_1,
  MR_Word hlds__make_tags__HeadVar__2_2,
  MR_Integer hlds__make_tags__Val_3,
  MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0_4,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_tags__succeeded;

        if ((hlds__make_tags__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_tags__STATE_VARIABLE_CtorTags_5 = hlds__make_tags__STATE_VARIABLE_CtorTags_0_4;
        else
          {
            MR_Word hlds__make_tags__Ctor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word hlds__make_tags__Ctors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word hlds__make_tags__Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_12, (MR_Integer) 2)));
            MR_Integer hlds__make_tags__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_12, (MR_Integer) 4)));
            MR_Word hlds__make_tags__ConsId_22;
            MR_Word hlds__make_tags__Tag_23;
            MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_26_26;
            MR_Integer hlds__make_tags__V_27_27;
            MR_Word hlds__make_tags___ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_12, (MR_Integer) 0)));
            MR_Word hlds__make_tags___Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_12, (MR_Integer) 1)));
            MR_Word hlds__make_tags___Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_12, (MR_Integer) 3)));
            MR_Word hlds__make_tags___Ctxt_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_12, (MR_Integer) 5)));

            {
              hlds__make_tags__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_22, 1) = ((MR_Box) (hlds__make_tags__Name_18));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_22, 2) = ((MR_Box) (hlds__make_tags__Arity_20));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_22, 3) = ((MR_Box) (hlds__make_tags__TypeCtor_1));
            }
            {
              hlds__make_tags__Tag_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_23, 1) = ((MR_Box) (hlds__make_tags__Val_3));
            }
            {
              mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_tags__ConsId_22)), ((MR_Box) (hlds__make_tags__Tag_23)), hlds__make_tags__STATE_VARIABLE_CtorTags_0_4, &hlds__make_tags__STATE_VARIABLE_CtorTags_26_26);
            }
            hlds__make_tags__V_27_27 = (hlds__make_tags__Val_3 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_tags__HeadVar__2__tmp_copy_2 = hlds__make_tags__Ctors_13;
              MR_Integer hlds__make_tags__Val__tmp_copy_3 = hlds__make_tags__V_27_27;
              MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_4 = hlds__make_tags__STATE_VARIABLE_CtorTags_26_26;

              hlds__make_tags__STATE_VARIABLE_CtorTags_0_4 = hlds__make_tags__STATE_VARIABLE_CtorTags_0__tmp_copy_4;
              hlds__make_tags__Val_3 = hlds__make_tags__Val__tmp_copy_3;
              hlds__make_tags__HeadVar__2_2 = hlds__make_tags__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
hlds__make_tags__post_process_type_defns_3_p_0(
  MR_Word hlds__make_tags__STATE_VARIABLE_HLDS_0_17,
  MR_Word * hlds__make_tags__STATE_VARIABLE_HLDS_18,
  MR_Word * hlds__make_tags__Specs_5)
{
  {
    MR_bool hlds__make_tags__succeeded;
    MR_Word hlds__make_tags__Globals_6;
    MR_Word hlds__make_tags__Target_7;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_tags__STATE_VARIABLE_HLDS_0_17, &hlds__make_tags__Globals_6);
    }
    {
      libs__globals__get_target_2_p_0(hlds__make_tags__Globals_6, &hlds__make_tags__Target_7);
    }
    switch (hlds__make_tags__Target_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_tags__TermSizeWords_8;
          MR_Word hlds__make_tags__TermSizeCells_9;

          {
            libs__globals__lookup_bool_option_3_p_0(hlds__make_tags__Globals_6, (MR_Integer) 212, &hlds__make_tags__TermSizeWords_8);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(hlds__make_tags__Globals_6, (MR_Integer) 213, &hlds__make_tags__TermSizeCells_9);
          }
          hlds__make_tags__succeeded = (hlds__make_tags__TermSizeWords_8 == (MR_Integer) 0);
          if (hlds__make_tags__succeeded)
            hlds__make_tags__succeeded = (hlds__make_tags__TermSizeCells_9 == (MR_Integer) 0);
          if (hlds__make_tags__succeeded)
            {
              MR_Word hlds__make_tags__TypeTable0_10;
              MR_Word hlds__make_tags__ModuleName_11;
              MR_Word hlds__make_tags__TypeCtorsDefns_12;
              MR_Integer hlds__make_tags__NumTagBits_13;
              MR_Word hlds__make_tags__DebugTypeRep_14;
              MR_Integer hlds__make_tags__MaxTag_15;
              MR_Word hlds__make_tags__TypeTable_16;
              MR_Integer hlds__make_tags__V_23_23;

              {
                hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_tags__STATE_VARIABLE_HLDS_0_17, &hlds__make_tags__TypeTable0_10);
              }
              {
                hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_tags__STATE_VARIABLE_HLDS_0_17, &hlds__make_tags__ModuleName_11);
              }
              {
                hlds__hlds_data__get_all_type_ctor_defns_2_p_0(hlds__make_tags__TypeTable0_10, &hlds__make_tags__TypeCtorsDefns_12);
              }
              {
                libs__globals__lookup_int_option_3_p_0(hlds__make_tags__Globals_6, (MR_Integer) 237, &hlds__make_tags__NumTagBits_13);
              }
              {
                libs__globals__lookup_bool_option_3_p_0(hlds__make_tags__Globals_6, (MR_Integer) 84, &hlds__make_tags__DebugTypeRep_14);
              }
              {
                mercury__int__pow_3_p_0((MR_Integer) 2, hlds__make_tags__NumTagBits_13, &hlds__make_tags__V_23_23);
              }
              hlds__make_tags__MaxTag_15 = (hlds__make_tags__V_23_23 - (MR_Integer) 1);
              {
                hlds__make_tags__convert_direct_arg_functors_9_p_0(hlds__make_tags__Target_7, hlds__make_tags__ModuleName_11, hlds__make_tags__DebugTypeRep_14, hlds__make_tags__MaxTag_15, hlds__make_tags__TypeCtorsDefns_12, hlds__make_tags__TypeTable0_10, &hlds__make_tags__TypeTable_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_tags__Specs_5);
              }
              {
                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_tags__TypeTable_16, hlds__make_tags__STATE_VARIABLE_HLDS_0_17, hlds__make_tags__STATE_VARIABLE_HLDS_18);
              }
            }
          else
            {
              *hlds__make_tags__Specs_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *hlds__make_tags__STATE_VARIABLE_HLDS_18 = hlds__make_tags__STATE_VARIABLE_HLDS_0_17;
            }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          *hlds__make_tags__Specs_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *hlds__make_tags__STATE_VARIABLE_HLDS_18 = hlds__make_tags__STATE_VARIABLE_HLDS_0_17;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_tags__compute_cheaper_tag_test_2_p_0(
  MR_Word hlds__make_tags__CtorTagMap_3,
  MR_Word * hlds__make_tags__CheaperTagTest_4)
{
  {
    MR_bool hlds__make_tags__succeeded;
    MR_Word hlds__make_tags__ConsIdA_6;
    MR_Word hlds__make_tags__ConsTagA_7;
    MR_Word hlds__make_tags__ConsIdB_8;
    MR_Word hlds__make_tags__ConsTagB_9;
    MR_Integer hlds__make_tags__ArityA_11;
    MR_Integer hlds__make_tags__ArityB_14;
    MR_Word hlds__make_tags__CtorTagList_5;
    MR_Word hlds__make_tags__V_16_16;
    MR_Word hlds__make_tags__V_17_17;
    MR_Word hlds__make_tags__V_18_18;
    MR_Word hlds__make_tags__V_19_19;
    MR_Word hlds__make_tags__V_10_10;
    MR_Word hlds__make_tags__V_12_12;
    MR_Word hlds__make_tags__V_13_13;
    MR_Word hlds__make_tags__V_15_15;

    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__make_tags__CtorTagMap_3, &hlds__make_tags__CtorTagList_5);
    }
    hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__CtorTagList_5)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_tags__succeeded)
      {
        hlds__make_tags__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__CtorTagList_5, (MR_Integer) 0)));
        hlds__make_tags__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__CtorTagList_5, (MR_Integer) 1)));
        hlds__make_tags__ConsIdA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_16_16, (MR_Integer) 0)));
        hlds__make_tags__ConsTagA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_16_16, (MR_Integer) 1)));
        hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__V_17_17)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_tags__succeeded)
          {
            hlds__make_tags__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__V_17_17, (MR_Integer) 0)));
            hlds__make_tags__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__V_17_17, (MR_Integer) 1)));
            hlds__make_tags__succeeded = (hlds__make_tags__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_tags__succeeded)
              {
                hlds__make_tags__ConsIdB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_18_18, (MR_Integer) 0)));
                hlds__make_tags__ConsTagB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_18_18, (MR_Integer) 1)));
                hlds__make_tags__succeeded = ((((MR_tag((MR_Word) hlds__make_tags__ConsIdA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_tags__ConsIdA_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (hlds__make_tags__succeeded)
                  {
                    hlds__make_tags__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_tags__ConsIdA_6, (MR_Integer) 1)));
                    hlds__make_tags__ArityA_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_tags__ConsIdA_6, (MR_Integer) 2)));
                    hlds__make_tags__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_tags__ConsIdA_6, (MR_Integer) 3)));
                    hlds__make_tags__succeeded = ((((MR_tag((MR_Word) hlds__make_tags__ConsIdB_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_tags__ConsIdB_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (hlds__make_tags__succeeded)
                      {
                        hlds__make_tags__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_tags__ConsIdB_8, (MR_Integer) 1)));
                        hlds__make_tags__ArityB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_tags__ConsIdB_8, (MR_Integer) 2)));
                        hlds__make_tags__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_tags__ConsIdB_8, (MR_Integer) 3)));
                      }
                  }
              }
          }
      }
    if (hlds__make_tags__succeeded)
      {
        MR_Integer hlds__make_tags__V_20_20;

        hlds__make_tags__succeeded = (hlds__make_tags__ArityB_14 == (MR_Integer) 0);
        if (hlds__make_tags__succeeded)
          {
            hlds__make_tags__V_20_20 = (MR_Integer) 0;
            hlds__make_tags__succeeded = (hlds__make_tags__ArityA_11 > hlds__make_tags__V_20_20);
          }
        if (hlds__make_tags__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_tags__CheaperTagTest_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_tags__ConsIdA_6));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_tags__ConsTagA_7));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_tags__ConsIdB_8));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_tags__ConsTagB_9));
          }
        else
          {
            MR_Integer hlds__make_tags__V_21_21;

            hlds__make_tags__succeeded = (hlds__make_tags__ArityA_11 == (MR_Integer) 0);
            if (hlds__make_tags__succeeded)
              {
                hlds__make_tags__V_21_21 = (MR_Integer) 0;
                hlds__make_tags__succeeded = (hlds__make_tags__ArityB_14 > hlds__make_tags__V_21_21);
              }
            if (hlds__make_tags__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_tags__CheaperTagTest_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_tags__ConsIdB_8));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_tags__ConsTagB_9));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_tags__ConsIdA_6));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_tags__ConsTagA_7));
              }
            else
              *hlds__make_tags__CheaperTagTest_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
      }
    else
      *hlds__make_tags__CheaperTagTest_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_bool MR_CALL 
hlds__make_tags__assign_constructor_tags_8_p_0_1(
  MR_Box hlds__make_tags__closure_arg,
  MR_Box hlds__make_tags__wrapper_arg_1,
  MR_Box * hlds__make_tags__wrapper_arg_2)
{
  {
    MR_bool hlds__make_tags__succeeded;
    MR_Box hlds__make_tags__closure = hlds__make_tags__closure_arg;
    MR_Word hlds__make_tags__conv0_LambdaHeadVar__2_59;

    {
      hlds__make_tags__succeeded = hlds__make_tags__IntroducedFrom__func__assign_constructor_tags__201__1_1_f_0(((MR_Word) hlds__make_tags__wrapper_arg_1), &hlds__make_tags__conv0_LambdaHeadVar__2_59);
    }
    if (hlds__make_tags__succeeded)
      {
        *hlds__make_tags__wrapper_arg_2 = ((MR_Box) (hlds__make_tags__conv0_LambdaHeadVar__2_59));
        hlds__make_tags__succeeded = MR_TRUE;
      }
    return hlds__make_tags__succeeded;
  }
}

void MR_CALL 
hlds__make_tags__assign_constructor_tags_8_p_0(
  MR_Word hlds__make_tags__Ctors_9,
  MR_Word hlds__make_tags__UserEqCmp_10,
  MR_Word hlds__make_tags__TypeCtor_11,
  MR_Word hlds__make_tags__ReservedTagPragma_12,
  MR_Word hlds__make_tags__Globals_13,
  MR_Word * hlds__make_tags__STATE_VARIABLE_CtorTags_38,
  MR_Word * hlds__make_tags__ReservedAddr_15,
  MR_Word * hlds__make_tags__DuTypeKind_16)
{
  {
    MR_bool hlds__make_tags__succeeded;
    MR_Word hlds__make_tags__TypeCtorInfo_72_72;
    MR_Word hlds__make_tags__TypeCtorInfo_73_73;
    MR_Integer hlds__make_tags__NumTagBits_17;
    MR_Integer hlds__make_tags__NumReservedAddresses_18;
    MR_Integer hlds__make_tags__NumReservedObjects_19;
    MR_Word hlds__make_tags__HighLevelCode_20;
    MR_Integer hlds__make_tags__InitTag_21;
    MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_43_43;

    {
      libs__globals__lookup_int_option_3_p_0(hlds__make_tags__Globals_13, (MR_Integer) 237, &hlds__make_tags__NumTagBits_17);
    }
    {
      libs__globals__lookup_int_option_3_p_0(hlds__make_tags__Globals_13, (MR_Integer) 238, &hlds__make_tags__NumReservedAddresses_18);
    }
    {
      libs__globals__lookup_int_option_3_p_0(hlds__make_tags__Globals_13, (MR_Integer) 239, &hlds__make_tags__NumReservedObjects_19);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__make_tags__Globals_13, (MR_Integer) 253, &hlds__make_tags__HighLevelCode_20);
    }
    switch (hlds__make_tags__ReservedTagPragma_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__make_tags__InitTag_21 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        hlds__make_tags__InitTag_21 = (MR_Integer) 1;
        break;
    }
    hlds__make_tags__TypeCtorInfo_72_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
    hlds__make_tags__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
    {
      mercury__map__init_1_p_0(hlds__make_tags__TypeCtorInfo_72_72, hlds__make_tags__TypeCtorInfo_73_73, &hlds__make_tags__STATE_VARIABLE_CtorTags_43_43);
    }
    {
      hlds__make_tags__succeeded = libs__globals__lookup_bool_option_3_p_1(hlds__make_tags__Globals_13, (MR_Integer) 244, (MR_Integer) 1);
    }
    if (hlds__make_tags__succeeded)
      {
        {
          hlds__make_tags__succeeded = hlds__make_tags__ctors_are_all_constants_1_p_0(hlds__make_tags__Ctors_9);
        }
        if (hlds__make_tags__succeeded)
          hlds__make_tags__succeeded = (hlds__make_tags__ReservedTagPragma_12 == (MR_Integer) 1);
      }
    if (hlds__make_tags__succeeded)
      {
        MR_Word hlds__make_tags__V_22_22;
        MR_Word hlds__make_tags__V_46_46;

        hlds__make_tags__succeeded = ((MR_tag((MR_Word) hlds__make_tags__Ctors_9)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_tags__succeeded)
          {
            hlds__make_tags__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Ctors_9, (MR_Integer) 0)));
            hlds__make_tags__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Ctors_9, (MR_Integer) 1)));
            hlds__make_tags__succeeded = (hlds__make_tags__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (hlds__make_tags__succeeded)
          {
            MR_Word hlds__make_tags__Name_103;
            MR_Integer hlds__make_tags__Arity_105;
            MR_Word hlds__make_tags__ConsId_107;
            MR_Word hlds__make_tags__Tag_108;
            MR_Word hlds__make_tags___ExistQVars_101;
            MR_Word hlds__make_tags___Constraints_102;
            MR_Word hlds__make_tags___Args_104;
            MR_Word hlds__make_tags___Ctxt_106;
            MR_Integer hlds__make_tags__V_112_112;

            *hlds__make_tags__DuTypeKind_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            hlds__make_tags___ExistQVars_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_22_22, (MR_Integer) 0)));
            hlds__make_tags___Constraints_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_22_22, (MR_Integer) 1)));
            hlds__make_tags__Name_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_22_22, (MR_Integer) 2)));
            hlds__make_tags___Args_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_22_22, (MR_Integer) 3)));
            hlds__make_tags__Arity_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_22_22, (MR_Integer) 4)));
            hlds__make_tags___Ctxt_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__V_22_22, (MR_Integer) 5)));
            {
              hlds__make_tags__ConsId_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_107, 1) = ((MR_Box) (hlds__make_tags__Name_103));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_107, 2) = ((MR_Box) (hlds__make_tags__Arity_105));
              MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_107, 3) = ((MR_Box) (hlds__make_tags__TypeCtor_11));
            }
            {
              hlds__make_tags__Tag_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_108, 1) = ((MR_Box) (hlds__make_tags__InitTag_21));
            }
            {
              mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_tags__ConsId_107)), ((MR_Box) (hlds__make_tags__Tag_108)), hlds__make_tags__STATE_VARIABLE_CtorTags_43_43, hlds__make_tags__STATE_VARIABLE_CtorTags_38);
            }
            hlds__make_tags__V_112_112 = (hlds__make_tags__InitTag_21 + (MR_Integer) 1);
          }
        else
          {
            *hlds__make_tags__DuTypeKind_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              hlds__make_tags__assign_enum_constants_5_p_0(hlds__make_tags__TypeCtor_11, hlds__make_tags__Ctors_9, hlds__make_tags__InitTag_21, hlds__make_tags__STATE_VARIABLE_CtorTags_43_43, hlds__make_tags__STATE_VARIABLE_CtorTags_38);
            }
          }
        *hlds__make_tags__ReservedAddr_15 = (MR_Integer) 1;
      }
    else
      {
        MR_Word hlds__make_tags__SingleFunctorName_23;
        MR_Word hlds__make_tags__SingleArgType_24;
        MR_Word hlds__make_tags__MaybeSingleArgName_25;

        {
          hlds__make_tags__succeeded = parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(hlds__make_tags__Globals_13, hlds__make_tags__TypeCtor_11, hlds__make_tags__ReservedTagPragma_12, hlds__make_tags__Ctors_9, hlds__make_tags__UserEqCmp_10, &hlds__make_tags__SingleFunctorName_23, &hlds__make_tags__SingleArgType_24, &hlds__make_tags__MaybeSingleArgName_25);
        }
        if (hlds__make_tags__succeeded)
          {
            MR_Word hlds__make_tags__SingleConsId_26;

            {
              hlds__make_tags__SingleConsId_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_tags__SingleConsId_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), hlds__make_tags__SingleConsId_26, 1) = ((MR_Box) (hlds__make_tags__SingleFunctorName_23));
              MR_hl_field(MR_mktag(3), hlds__make_tags__SingleConsId_26, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), hlds__make_tags__SingleConsId_26, 3) = ((MR_Box) (hlds__make_tags__TypeCtor_11));
            }
            {
              mercury__map__det_insert_4_p_0(hlds__make_tags__TypeCtorInfo_72_72, hlds__make_tags__TypeCtorInfo_73_73, ((MR_Box) (hlds__make_tags__SingleConsId_26)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), hlds__make_tags__STATE_VARIABLE_CtorTags_43_43, hlds__make_tags__STATE_VARIABLE_CtorTags_38);
            }
            *hlds__make_tags__ReservedAddr_15 = (MR_Integer) 1;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_tags__DuTypeKind_16 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_tags__SingleFunctorName_23));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (hlds__make_tags__SingleArgType_24));
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (hlds__make_tags__MaybeSingleArgName_25));
            }
          }
        else
          {
            *hlds__make_tags__DuTypeKind_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
            hlds__make_tags__succeeded = (hlds__make_tags__NumTagBits_17 == (MR_Integer) 0);
            if (hlds__make_tags__succeeded)
              {
                MR_Word hlds__make_tags__Constants_27;
                MR_Word hlds__make_tags__Functors_28;
                MR_Word hlds__make_tags__LeftOverConstants0_29;
                MR_Word hlds__make_tags__ReservedAddr1_30;
                MR_Word hlds__make_tags__LeftOverConstants_31;
                MR_Word hlds__make_tags__RemainingCtors_32;
                MR_Word hlds__make_tags__ReservedAddresses_35;
                MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_53_53;
                MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_56_56;
                MR_Word hlds__make_tags__V_60_60;

                switch (hlds__make_tags__ReservedTagPragma_12) {
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
                {
                  hlds__make_tags__separate_out_constants_3_p_0(hlds__make_tags__Ctors_9, &hlds__make_tags__Constants_27, &hlds__make_tags__Functors_28);
                }
                {
                  hlds__make_tags__assign_reserved_numeric_addresses_9_p_0(hlds__make_tags__TypeCtor_11, hlds__make_tags__Constants_27, &hlds__make_tags__LeftOverConstants0_29, hlds__make_tags__STATE_VARIABLE_CtorTags_43_43, &hlds__make_tags__STATE_VARIABLE_CtorTags_53_53, (MR_Integer) 0, hlds__make_tags__NumReservedAddresses_18, (MR_Integer) 1, &hlds__make_tags__ReservedAddr1_30);
                }
                switch (hlds__make_tags__HighLevelCode_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      hlds__make_tags__LeftOverConstants_31 = hlds__make_tags__LeftOverConstants0_29;
                      *hlds__make_tags__ReservedAddr_15 = hlds__make_tags__ReservedAddr1_30;
                      hlds__make_tags__STATE_VARIABLE_CtorTags_56_56 = hlds__make_tags__STATE_VARIABLE_CtorTags_53_53;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        hlds__make_tags__assign_reserved_symbolic_addresses_9_p_0(hlds__make_tags__TypeCtor_11, hlds__make_tags__LeftOverConstants0_29, &hlds__make_tags__LeftOverConstants_31, hlds__make_tags__STATE_VARIABLE_CtorTags_53_53, &hlds__make_tags__STATE_VARIABLE_CtorTags_56_56, (MR_Integer) 0, hlds__make_tags__NumReservedObjects_19, hlds__make_tags__ReservedAddr1_30, hlds__make_tags__ReservedAddr_15);
                      }
                    }
                    break;
                }
                {
                  hlds__make_tags__RemainingCtors_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, hlds__make_tags__LeftOverConstants_31, hlds__make_tags__Functors_28);
                }
                {
                  hlds__make_tags__V_60_60 = mercury__map__values_1_f_0(hlds__make_tags__TypeCtorInfo_72_72, hlds__make_tags__TypeCtorInfo_73_73, hlds__make_tags__STATE_VARIABLE_CtorTags_56_56);
                }
                {
                  hlds__make_tags__ReservedAddresses_35 = mercury__list__filter_map_2_f_0(hlds__make_tags__TypeCtorInfo_73_73, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, (MR_Word) &hlds__make_tags_scalar_common_3[0], hlds__make_tags__V_60_60);
                }
                {
                  hlds__make_tags__assign_unshared_tags_7_p_0(hlds__make_tags__TypeCtor_11, hlds__make_tags__RemainingCtors_32, (MR_Integer) 0, (MR_Integer) 0, hlds__make_tags__ReservedAddresses_35, hlds__make_tags__STATE_VARIABLE_CtorTags_56_56, hlds__make_tags__STATE_VARIABLE_CtorTags_38);
                }
              }
            else
              {
                MR_Integer hlds__make_tags__MaxTag_36;
                MR_Integer hlds__make_tags__NextTag_37;
                MR_Integer hlds__make_tags__V_64_64;
                MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_66_66;
                MR_Word hlds__make_tags__Constants_70;
                MR_Word hlds__make_tags__Functors_71;

                {
                  mercury__int__pow_3_p_0((MR_Integer) 2, hlds__make_tags__NumTagBits_17, &hlds__make_tags__V_64_64);
                }
                hlds__make_tags__MaxTag_36 = (hlds__make_tags__V_64_64 - (MR_Integer) 1);
                {
                  hlds__make_tags__separate_out_constants_3_p_0(hlds__make_tags__Ctors_9, &hlds__make_tags__Constants_70, &hlds__make_tags__Functors_71);
                }
                if ((hlds__make_tags__Constants_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    hlds__make_tags__NextTag_37 = hlds__make_tags__InitTag_21;
                    hlds__make_tags__STATE_VARIABLE_CtorTags_66_66 = hlds__make_tags__STATE_VARIABLE_CtorTags_43_43;
                  }
                else
                  {
                    MR_Word hlds__make_tags__Ctor_150;
                    MR_Word hlds__make_tags__Ctors_151;
                    MR_Word hlds__make_tags__Name_157;
                    MR_Integer hlds__make_tags__Arity_159;
                    MR_Word hlds__make_tags__ConsId_161;
                    MR_Word hlds__make_tags__Tag_162;
                    MR_Word hlds__make_tags__STATE_VARIABLE_CtorTags_29_165;
                    MR_Word hlds__make_tags___ExistQVars_155;
                    MR_Word hlds__make_tags___Constraints_156;
                    MR_Word hlds__make_tags___Args_158;
                    MR_Word hlds__make_tags___Ctxt_160;

                    hlds__make_tags__NextTag_37 = (hlds__make_tags__InitTag_21 + (MR_Integer) 1);
                    hlds__make_tags__Ctor_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Constants_70, (MR_Integer) 0)));
                    hlds__make_tags__Ctors_151 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_tags__Constants_70, (MR_Integer) 1)));
                    hlds__make_tags___ExistQVars_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_150, (MR_Integer) 0)));
                    hlds__make_tags___Constraints_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_150, (MR_Integer) 1)));
                    hlds__make_tags__Name_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_150, (MR_Integer) 2)));
                    hlds__make_tags___Args_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_150, (MR_Integer) 3)));
                    hlds__make_tags__Arity_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_150, (MR_Integer) 4)));
                    hlds__make_tags___Ctxt_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_tags__Ctor_150, (MR_Integer) 5)));
                    {
                      hlds__make_tags__ConsId_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_161, 1) = ((MR_Box) (hlds__make_tags__Name_157));
                      MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_161, 2) = ((MR_Box) (hlds__make_tags__Arity_159));
                      MR_hl_field(MR_mktag(3), hlds__make_tags__ConsId_161, 3) = ((MR_Box) (hlds__make_tags__TypeCtor_11));
                    }
                    {
                      hlds__make_tags__Tag_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                      MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_162, 1) = ((MR_Box) (hlds__make_tags__InitTag_21));
                      MR_hl_field(MR_mktag(3), hlds__make_tags__Tag_162, 2) = ((MR_Box) ((MR_Integer) 0));
                    }
                    {
                      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_tags__ConsId_161)), ((MR_Box) (hlds__make_tags__Tag_162)), hlds__make_tags__STATE_VARIABLE_CtorTags_43_43, &hlds__make_tags__STATE_VARIABLE_CtorTags_29_165);
                    }
                    {
                      hlds__make_tags__assign_shared_local_tags_6_p_0(hlds__make_tags__TypeCtor_11, hlds__make_tags__Ctors_151, hlds__make_tags__InitTag_21, ((MR_Integer) 0 + (MR_Integer) 1), hlds__make_tags__STATE_VARIABLE_CtorTags_29_165, &hlds__make_tags__STATE_VARIABLE_CtorTags_66_66);
                    }
                  }
                {
                  hlds__make_tags__assign_unshared_tags_7_p_0(hlds__make_tags__TypeCtor_11, hlds__make_tags__Functors_71, hlds__make_tags__NextTag_37, hlds__make_tags__MaxTag_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_tags__STATE_VARIABLE_CtorTags_66_66, hlds__make_tags__STATE_VARIABLE_CtorTags_38);
                }
                *hlds__make_tags__ReservedAddr_15 = (MR_Integer) 1;
              }
          }
      }
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
