/*
** Automatically generated from `du_type_layout_old.m'
** by the Mercury compiler,
** version 2018-02-21
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


// :- module hlds.du_type_layout_old.
// :- implementation.

/*
INIT mercury__hlds__du_type_layout_old__init
ENDINIT
*/

#include "hlds.du_type_layout_old.mih"


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
#include "check_hlds.type_util.mih"
#include "hlds.add_foreign_enum.mih"
#include "hlds.add_special_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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




static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout_old__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout_old__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout_old__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout_old__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout_old__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout_old__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0;

static const MR_DuFunctorDesc hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_0;

static const MR_DuFunctorDesc hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_1;

static const MR_PseudoTypeInfo hlds__du_type_layout_old__hlds__du_type_layout_old__field_types_direct_arg_cond_0_2[1];

static const MR_DuFunctorDesc hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_2;

static const MR_DuFunctorDesc hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_3;

static const MR_DuFunctorDescPtr hlds__du_type_layout_old__hlds__du_type_layout_old__du_stag_ordered_direct_arg_cond_0_0[3];

static const MR_DuFunctorDescPtr hlds__du_type_layout_old__hlds__du_type_layout_old__du_stag_ordered_direct_arg_cond_0_1[1];

static const MR_DuPtagLayout hlds__du_type_layout_old__hlds__du_type_layout_old__du_ptag_ordered_direct_arg_cond_0[2];

static const MR_DuFunctorDescPtr hlds__du_type_layout_old__hlds__du_type_layout_old__du_name_ordered_direct_arg_cond_0[4];

static const MR_Integer hlds__du_type_layout_old__hlds__du_type_layout_old__functor_number_map_direct_arg_cond_0[4];

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout_old__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout_old__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static MR_bool MR_CALL 
hlds__du_type_layout_old__IntroducedFrom__pred__is_direct_arg_ctor__856__1_2_p_0(
  MR_Integer ConsArity_16,
  MR_Integer HeadVar__2_54);

static MR_bool MR_CALL 
hlds__du_type_layout_old__IntroducedFrom__pred__decide_unpacked_du_type_layout__208__1_2_p_0(
  MR_Word MaybeRepn0_17,
  MR_Word HeadVar__2_46);

static void MR_CALL 
hlds__du_type_layout_old____Compare____type_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout_old____Unify____type_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout_old____Compare____direct_arg_cond_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout_old____Unify____direct_arg_cond_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout_old__update_repn_of_ctor_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsTagMap_8,
  MR_Word CtorRepn0_9,
  MR_Word * CtorRepn_10,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_20,
  MR_Word * STATE_VARIABLE_CtorRepnMap_21);

static MR_Box MR_CALL 
hlds__du_type_layout_old__add_repn_to_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__du_type_layout_old__add_repn_to_ctor_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsTagMap_8,
  MR_Word Ctor_9,
  MR_Word * CtorRepn_10,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_20,
  MR_Word * STATE_VARIABLE_CtorRepnMap_21);

static MR_Word MR_CALL 
hlds__du_type_layout_old__add_default_repn_to_ctor_arg_1_f_0(
  MR_Word ConsArg_3);

static MR_Word MR_CALL 
hlds__du_type_layout_old__constructor_to_sym_name_and_arity_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__du_type_layout_old__is_direct_arg_ctor_6_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout_old__is_direct_arg_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word Target_8,
  MR_Word TypeCtorModule_9,
  MR_Word TypeStatus_10,
  MR_Word AssertedDirectArgCtors_11,
  MR_Word Ctor_12);

static MR_bool MR_CALL 
hlds__du_type_layout_old__is_foreign_type_for_target_3_p_0(
  MR_Word TypeBody_4,
  MR_Word Target_5,
  MR_Word * Assertions_6);

static void MR_CALL 
hlds__du_type_layout_old__accumulate_max_int_tag_3_p_0(
  MR_Word ConsTag_4,
  MR_Integer STATE_VARIABLE_Max_0_7,
  MR_Integer * STATE_VARIABLE_Max_8);

static MR_bool MR_CALL 
hlds__du_type_layout_old__layout_du_ctor_args_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout_old__layout_du_ctor_args_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word DuKind_9,
  MR_Integer ArgPackBits_10,
  MR_Word CtorRepn0_11,
  MR_Word * CtorRepn_12,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_26,
  MR_Word * STATE_VARIABLE_CtorRepnMap_27);

static void MR_CALL 
hlds__du_type_layout_old__count_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Count_0_2,
  MR_Integer * STATE_VARIABLE_Count_3);

static void MR_CALL 
hlds__du_type_layout_old__pack_du_ctor_args_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__du_type_layout_old__pack_du_ctor_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
hlds__du_type_layout_old__set_double_word_floats_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__du_type_layout_old__decide_packed_du_type_layout_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__du_type_layout_old__decide_packed_du_type_layout_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer ArgPackBits_10,
  MR_Word TypeCtor_11,
  MR_Word TypeDefn_12,
  MR_Word STATE_VARIABLE_TypeTable_0_39,
  MR_Word * STATE_VARIABLE_TypeTable_40,
  MR_Word STATE_VARIABLE_NoTagTypesMap_0_41,
  MR_Word * STATE_VARIABLE_NoTagTypesMap_42);

static void MR_CALL 
hlds__du_type_layout_old__decide_unpacked_du_type_layout_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
hlds__du_type_layout_old__decide_unpacked_du_type_layout_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout_old__decide_unpacked_du_type_layout_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word DirectArgMap_9,
  MR_Word TypeCtorToForeignEnumMap_10,
  MR_Word TypeCtor_11,
  MR_Word TypeDefn_12,
  MR_Word STATE_VARIABLE_TypeTable_0_41,
  MR_Word * STATE_VARIABLE_TypeTable_42);

static void MR_CALL 
hlds__du_type_layout_old__assign_constructor_tags_6_p_0(
  MR_Word Globals_7,
  MR_Word TypeCtor_8,
  MR_Word UserEqCmp_9,
  MR_Word Ctors_10,
  MR_Word * STATE_VARIABLE_CtorTags_24,
  MR_Word * DuTypeKind_12);

static MR_bool MR_CALL 
hlds__du_type_layout_old__ctors_are_all_constants_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__du_type_layout_old__assign_enum_constants_5_p_0(
  MR_Word TypeCtor_1,
  MR_Integer Val_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CtorTags_0_4,
  MR_Word * STATE_VARIABLE_CtorTags_5);

static void MR_CALL 
hlds__du_type_layout_old__decide_type_repns_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__du_type_layout_old__decide_type_repns_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__du_type_layout_old__decide_type_repns_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__du_type_layout_old__decide_type_repns_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__du_type_layout_old__decide_type_repns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__du_type_layout_old__post_process_types_direct_args_3_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word * Specs_5);

static void MR_CALL 
hlds__du_type_layout_old__convert_direct_arg_functors_9_p_0(
  MR_Word Target_1,
  MR_Word ModuleName_2,
  MR_Word DebugTypeRep_3,
  MR_Integer MaxTag_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeTable_0_6,
  MR_Word * STATE_VARIABLE_TypeTable_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
hlds__du_type_layout_old__convert_direct_arg_functors_if_suitable_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
hlds__du_type_layout_old__convert_direct_arg_functors_if_suitable_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__du_type_layout_old__convert_direct_arg_functors_if_suitable_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__du_type_layout_old__convert_direct_arg_functors_if_suitable_10_p_0(
  MR_Word Target_11,
  MR_Word ModuleName_12,
  MR_Word DebugTypeRep_13,
  MR_Integer MaxTag_14,
  MR_Word TypeCtor_15,
  MR_Word TypeDefn_16,
  MR_Word STATE_VARIABLE_TypeTable_0_61,
  MR_Word * STATE_VARIABLE_TypeTable_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64);

static void MR_CALL 
hlds__du_type_layout_old__separate_out_constants_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__du_type_layout_old__compute_cheaper_tag_test_2_p_0(
  MR_Word CtorTagMap_3,
  MR_Word * CheaperTagTest_4);

static void MR_CALL 
hlds__du_type_layout_old__output_direct_arg_functor_summary_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__du_type_layout_old__output_direct_arg_functor_summary_5_p_0(
  MR_Word ModuleName_6,
  MR_Word TypeCtor_7,
  MR_Word DirectArgFunctorNames_8);

static void MR_CALL 
hlds__du_type_layout_old__check_incorrect_direct_arg_assertions_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4);

static void MR_CALL 
hlds__du_type_layout_old__assign_direct_arg_tags_9_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Val_0_3,
  MR_Integer * STATE_VARIABLE_Val_4,
  MR_Integer MaxTag_5,
  MR_Word NonDirectArgFunctors_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_CtorTags_0_8,
  MR_Word * STATE_VARIABLE_CtorTags_9);

static void MR_CALL 
hlds__du_type_layout_old__assign_unshared_tags_6_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer Val_3,
  MR_Integer MaxTag_4,
  MR_Word STATE_VARIABLE_CtorTags_0_5,
  MR_Word * STATE_VARIABLE_CtorTags_6);

static void MR_CALL 
hlds__du_type_layout_old__assign_shared_remote_tags_6_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer PrimaryVal_3,
  MR_Integer SecondaryVal_4,
  MR_Word STATE_VARIABLE_CtorTags_0_5,
  MR_Word * STATE_VARIABLE_CtorTags_6);

static void MR_CALL 
hlds__du_type_layout_old__assign_constant_tags_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Constants_8,
  MR_Integer InitTag_9,
  MR_Integer * NextTag_10,
  MR_Word STATE_VARIABLE_CtorTags_0_14,
  MR_Word * STATE_VARIABLE_CtorTags_15);

static void MR_CALL 
hlds__du_type_layout_old__assign_shared_local_tags_6_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer PrimaryVal_3,
  MR_Integer SecondaryVal_4,
  MR_Word STATE_VARIABLE_CtorTags_0_5,
  MR_Word * STATE_VARIABLE_CtorTags_6);

static void MR_CALL 
hlds__du_type_layout_old__build_type_repn_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_2,
  MR_Word * STATE_VARIABLE_TypeRepnMap_3);

static MR_bool MR_CALL 
hlds__du_type_layout_old____Unify____direct_arg_cond_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout_old____Compare____direct_arg_cond_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout_old____Unify____type_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout_old____Compare____type_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_1[13][2];

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_2[11][3];

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_3[2][6];

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_4[4][9];

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_5[4][5];

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_6[2][10];

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_7[1][11];

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_8[1][8];

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_9[1][7];

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_10[1][1];




static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_1[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "sole argument."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_old_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_old_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be represented as a direct pointer to its"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_old_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_old_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&hlds__du_type_layout_old_scalar_common_10[0]))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_2[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__du_type_layout_old_scalar_common_1[4]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout_old_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__du_type_layout_old_scalar_common_3[0])),
    ((MR_Box) (hlds__du_type_layout_old__output_direct_arg_functor_summary_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__du_type_layout_old_scalar_common_5[0])),
    ((MR_Box) (hlds__du_type_layout_old__convert_direct_arg_functors_if_suitable_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__du_type_layout_old_scalar_common_8[0])),
    ((MR_Box) (hlds__du_type_layout_old__decide_type_repns_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__du_type_layout_old_scalar_common_9[0])),
    ((MR_Box) (hlds__du_type_layout_old__decide_type_repns_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__du_type_layout_old_scalar_common_3[1])),
    ((MR_Box) (hlds__du_type_layout_old__pack_du_ctor_args_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__du_type_layout_old_scalar_common_5[3])),
    ((MR_Box) (hlds__du_type_layout_old__add_repn_to_ctor_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_4[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&hlds__du_type_layout_old__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)),
    ((MR_Box) (&hlds__du_type_layout_old__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout_old__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__du_type_layout_old__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0)),
    ((MR_Box) (&hlds__du_type_layout_old__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_6[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_kind_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0)),
    ((MR_Box) (&hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout_old__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout_old__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_9[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_old_scalar_common_10[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout_old__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__du_type_layout_old__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout_old__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout_old__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout_old__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__du_type_layout_old__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout_old__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout_old__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__du_type_layout_old__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout_old__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout_old__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0
  }
};

static const MR_DuFunctorDesc hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_0 = {
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

static const MR_DuFunctorDesc hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_1 = {
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

static const MR_PseudoTypeInfo hlds__du_type_layout_old__hlds__du_type_layout_old__field_types_direct_arg_cond_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_type_status_0
};

static const MR_DuFunctorDesc hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_2 = {
  (MR_String) "arg_type_defined_in_same_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__du_type_layout_old__hlds__du_type_layout_old__field_types_direct_arg_cond_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_3 = {
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

static const MR_DuFunctorDescPtr hlds__du_type_layout_old__hlds__du_type_layout_old__du_stag_ordered_direct_arg_cond_0_0[3] = {
  &hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_0,
  &hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_1,
  &hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_3
};

static const MR_DuFunctorDescPtr hlds__du_type_layout_old__hlds__du_type_layout_old__du_stag_ordered_direct_arg_cond_0_1[1] = {
  &hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_2
};

static const MR_DuPtagLayout hlds__du_type_layout_old__hlds__du_type_layout_old__du_ptag_ordered_direct_arg_cond_0[2] = {
  {
    (MR_Integer) 3,
    MR_SECTAG_LOCAL,
    hlds__du_type_layout_old__hlds__du_type_layout_old__du_stag_ordered_direct_arg_cond_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout_old__hlds__du_type_layout_old__du_stag_ordered_direct_arg_cond_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout_old__hlds__du_type_layout_old__du_name_ordered_direct_arg_cond_0[4] = {
  &hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_3,
  &hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_2,
  &hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_1,
  &hlds__du_type_layout_old__hlds__du_type_layout_old__du_functor_desc_direct_arg_cond_0_0
};

static const MR_Integer hlds__du_type_layout_old__hlds__du_type_layout_old__functor_number_map_direct_arg_cond_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout_old__hlds__du_type_layout_old__type_ctor_info_direct_arg_cond_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout_old____Unify____direct_arg_cond_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout_old____Compare____direct_arg_cond_0_0_10001)),
  (MR_String) "hlds.du_type_layout_old",
  (MR_String) "direct_arg_cond",
  {     hlds__du_type_layout_old__hlds__du_type_layout_old__du_name_ordered_direct_arg_cond_0 },
  {     hlds__du_type_layout_old__hlds__du_type_layout_old__du_ptag_ordered_direct_arg_cond_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__du_type_layout_old__hlds__du_type_layout_old__functor_number_map_direct_arg_cond_0
};

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout_old__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout_old__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__du_type_layout_old__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0
  }
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout_old__hlds__du_type_layout_old__type_ctor_info_type_repn_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__du_type_layout_old____Unify____type_repn_map_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout_old____Compare____type_repn_map_0_0_10001)),
  (MR_String) "hlds.du_type_layout_old",
  (MR_String) "type_repn_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__du_type_layout_old__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
hlds__du_type_layout_old__IntroducedFrom__pred__is_direct_arg_ctor__856__1_2_p_0(
  MR_Integer ConsArity_16,
  MR_Integer HeadVar__2_54)
{
  {
    MR_bool succeeded = (ConsArity_16 == HeadVar__2_54);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout_old__IntroducedFrom__pred__decide_unpacked_du_type_layout__208__1_2_p_0(
  MR_Word MaybeRepn0_17,
  MR_Word HeadVar__2_46)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__du_type_layout_old_scalar_common_1[3], ((MR_Box) (MaybeRepn0_17)), ((MR_Box) (HeadVar__2_46)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout_old____Compare____type_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__du_type_layout_old_scalar_common_2[3], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout_old____Unify____type_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__du_type_layout_old_scalar_common_2[3], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout_old____Compare____direct_arg_cond_0_0(
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
hlds__du_type_layout_old____Unify____direct_arg_cond_0_0(
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

static void MR_CALL 
hlds__du_type_layout_old__update_repn_of_ctor_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsTagMap_8,
  MR_Word CtorRepn0_9,
  MR_Word * CtorRepn_10,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_20,
  MR_Word * STATE_VARIABLE_CtorRepnMap_21)
{
  {
    MR_Word SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_9, (MR_Integer) 1)));
    MR_Integer Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CtorRepn0_9, (MR_Integer) 4)));
    MR_Word ConsId_18;
    MR_Word ConsTag_19;
    MR_Word _MaybeExistConstraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_9, (MR_Integer) 0)));
    MR_Word _ConsTag0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_9, (MR_Integer) 2)));
    MR_Word _ArgRepns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_9, (MR_Integer) 3)));
    MR_Word _Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_9, (MR_Integer) 5)));
    MR_Box conv0_ConsTag_19;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Integer Var_27;
    MR_Word Var_28;
    MR_Word Var_25;

    {
      ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (SymName_13));
      MR_hl_field(MR_mktag(3), ConsId_18, 2) = ((MR_Box) (Arity_16));
      MR_hl_field(MR_mktag(3), ConsId_18, 3) = ((MR_Box) (TypeCtor_7));
    }
    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ConsTagMap_8, ((MR_Box) (ConsId_18)), &conv0_ConsTag_19);
    ConsTag_19 = ((MR_Word) conv0_ConsTag_19);
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_9, (MR_Integer) 0)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_9, (MR_Integer) 1)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_9, (MR_Integer) 2)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_9, (MR_Integer) 3)));
    Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CtorRepn0_9, (MR_Integer) 4)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_9, (MR_Integer) 5)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *CtorRepn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ConsTag_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_28));
    }
    hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(*CtorRepn_10, STATE_VARIABLE_CtorRepnMap_0_20, STATE_VARIABLE_CtorRepnMap_21);
  }
}

static MR_Box MR_CALL 
hlds__du_type_layout_old__add_repn_to_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_ConsArgRepn_4;

    conv1_ConsArgRepn_4 = hlds__du_type_layout_old__add_default_repn_to_ctor_arg_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_ConsArgRepn_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__add_repn_to_ctor_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsTagMap_8,
  MR_Word Ctor_9,
  MR_Word * CtorRepn_10,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_20,
  MR_Word * STATE_VARIABLE_CtorRepnMap_21)
{
  {
    MR_Word MaybeExistConstraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 0)));
    MR_Word SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 1)));
    MR_Word Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 2)));
    MR_Integer Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 3)));
    MR_Word Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 4)));
    MR_Word ConsId_17;
    MR_Word ConsTag_18;
    MR_Word ArgRepns_19;
    MR_Box conv0_ConsTag_18;

    {
      ConsId_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConsId_17, 1) = ((MR_Box) (SymName_13));
      MR_hl_field(MR_mktag(3), ConsId_17, 2) = ((MR_Box) (Arity_15));
      MR_hl_field(MR_mktag(3), ConsId_17, 3) = ((MR_Box) (TypeCtor_7));
    }
    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ConsTagMap_8, ((MR_Box) (ConsId_17)), &conv0_ConsTag_18);
    ConsTag_18 = ((MR_Word) conv0_ConsTag_18);
    ArgRepns_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0, (MR_Word) &hlds__du_type_layout_old_scalar_common_2[10], Args_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *CtorRepn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeExistConstraints_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SymName_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ConsTag_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgRepns_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Arity_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Context_16));
    }
    hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(*CtorRepn_10, STATE_VARIABLE_CtorRepnMap_0_20, STATE_VARIABLE_CtorRepnMap_21);
  }
}

static MR_Word MR_CALL 
hlds__du_type_layout_old__add_default_repn_to_ctor_arg_1_f_0(
  MR_Word ConsArg_3)
{
  {
    MR_Word ConsArgRepn_4;
    MR_Word MaybeFieldName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_3, (MR_Integer) 0)));
    MR_Word Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_3, (MR_Integer) 1)));
    MR_Word Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_3, (MR_Integer) 2)));

    {
      ConsArgRepn_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 0) = ((MR_Box) (MaybeFieldName_5));
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 1) = ((MR_Box) (Type_6));
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 3) = ((MR_Box) (Context_7));
    }
    return ConsArgRepn_4;
  }
}

static MR_Word MR_CALL 
hlds__du_type_layout_old__constructor_to_sym_name_and_arity_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
    MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word _Args_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Name_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_6));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout_old__is_direct_arg_ctor_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout_old__IntroducedFrom__pred__is_direct_arg_ctor__856__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout_old__is_direct_arg_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word Target_8,
  MR_Word TypeCtorModule_9,
  MR_Word TypeStatus_10,
  MR_Word AssertedDirectArgCtors_11,
  MR_Word Ctor_12)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExistConstraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 0)));
    MR_Word ConsSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 1)));
    MR_Word ConsArgs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 2)));
    MR_Integer ConsArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 3)));
    MR_Word ConsArg_18;
    MR_Word ArgType_20;
    MR_Word ArgTypeCtor_22;
    MR_Word ArgTypeCtorArgTypes_23;
    MR_Word ConsConsId_24;
    MR_Word ArgCond_25;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_String Var_51;
    MR_String Var_52;
    MR_String Var_53;
    MR_Integer Var_54;
    MR_Word OldImportStatus_73;
    MR_Word _CtorContext_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 4)));
    MR_Word _MaybeFieldName_19;
    MR_Word _ArgContext_21;
    MR_Word TypeCtorInfo_65_65;
    MR_Word Var_55;

    succeeded = (MaybeExistConstraints_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) ConsArgs_15)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ConsArg_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsArgs_15, (MR_Integer) 0)));
        Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsArgs_15, (MR_Integer) 1)));
        succeeded = (Var_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          Var_54 = (MR_Integer) 1;
          Var_51 = (MR_String) "hlds.du_type_layout_old";
          Var_52 = (MR_String) "predicate \140hlds.du_type_layout_old.is_direct_arg_ctor\'/6";
          Var_53 = (MR_String) "ConsArity != 1";
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&hlds__du_type_layout_old_scalar_common_5[2]));
            MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (hlds__du_type_layout_old__is_direct_arg_ctor_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (ConsArity_16));
            MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (Var_54));
          }
          mercury__require__expect_4_p_0(Var_50, Var_51, Var_52, Var_53);
          _MaybeFieldName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_18, (MR_Integer) 0)));
          ArgType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_18, (MR_Integer) 1)));
          _ArgContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsArg_18, (MR_Integer) 2)));
          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ArgType_20, &ArgTypeCtor_22, &ArgTypeCtorArgTypes_23);
          if (succeeded)
          {
            {
              ConsConsId_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsConsId_24, 0) = ((MR_Box) (ConsSymName_14));
              MR_hl_field(MR_mktag(0), ConsConsId_24, 1) = ((MR_Box) (ConsArity_16));
            }
            Var_55 = hlds__status__type_status_is_imported_1_f_0(TypeStatus_10);
            succeeded = (Var_55 == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
              succeeded = mercury__list__contains_2_p_0(TypeCtorInfo_65_65, AssertedDirectArgCtors_11, ((MR_Box) (ConsConsId_24)));
            }
            if (succeeded)
            {
              ArgCond_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(ArgTypeCtor_22);
              if (succeeded)
              {
                ArgCond_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word ArgTypeDefn_26;
                MR_Word ArgTypeDefnBody_27;
                MR_Word Assertions_28;

                succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, ArgTypeCtor_22, &ArgTypeDefn_26);
                if (succeeded)
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(ArgTypeDefn_26, &ArgTypeDefnBody_27);
                  succeeded = hlds__du_type_layout_old__is_foreign_type_for_target_3_p_0(ArgTypeDefnBody_27, Target_8, &Assertions_28);
                  if (succeeded)
                  {
                    succeeded = hlds__hlds_data__asserted_word_aligned_pointer_1_p_0(Assertions_28);
                    if (succeeded)
                    {
                      ArgCond_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                      succeeded = MR_TRUE;
                    }
                  }
                  else
                  {
                    MR_Word TypeCtorInfo_66_66;
                    MR_Word TypeCtorInfo_67_67;
                    MR_Word ArgCtors_29;
                    MR_Word ArgMaybeRepn_31;
                    MR_Word ArgMaybeForeign_32;
                    MR_Word ArgRepn_33;
                    MR_Word ArgConsIdToTagMap_34;
                    MR_Word ArgCtorRepns_35;
                    MR_Word ArgMaybeCheaperTagTest_37;
                    MR_Word ArgDuKind_38;
                    MR_Word ArgDirectArgCtors_39;
                    MR_Word ArgConsIdTagList_42;
                    MR_Word ArgConsIdTag_43;
                    MR_Word Var_58;
                    MR_Word Var_59;
                    MR_Word Var_60;
                    MR_Word Var_61;
                    MR_Word _ArgMaybeUserEqComp_30;
                    MR_Word _ArgConsCtorMap_36;
                    MR_Word Var_40;
                    MR_Word Var_41;
                    MR_Word _ConsId_44;
                    MR_Word TypeCtorInfo_68_68;
                    MR_Word Var_62;

                    succeeded = (ArgTypeCtorArgTypes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) ArgTypeDefnBody_27)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        ArgCtors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypeDefnBody_27, (MR_Integer) 0)));
                        _ArgMaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypeDefnBody_27, (MR_Integer) 1)));
                        ArgMaybeRepn_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypeDefnBody_27, (MR_Integer) 2)));
                        ArgMaybeForeign_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTypeDefnBody_27, (MR_Integer) 3)));
                        if ((ArgMaybeRepn_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout_old.is_direct_arg_ctor\'/6", (MR_String) "ArgMaybeRepn = no");
                        }
                        else
                          ArgRepn_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgMaybeRepn_31, (MR_Integer) 0)));
                        succeeded = (ArgMaybeForeign_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (succeeded)
                        {
                          ArgConsIdToTagMap_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgRepn_33, (MR_Integer) 0)));
                          ArgCtorRepns_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgRepn_33, (MR_Integer) 1)));
                          _ArgConsCtorMap_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgRepn_33, (MR_Integer) 2)));
                          ArgMaybeCheaperTagTest_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgRepn_33, (MR_Integer) 3)));
                          ArgDuKind_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgRepn_33, (MR_Integer) 4)));
                          ArgDirectArgCtors_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgRepn_33, (MR_Integer) 5)));
                          succeeded = (ArgMaybeCheaperTagTest_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (succeeded)
                          {
                            succeeded = (ArgDuKind_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                            if (succeeded)
                            {
                              succeeded = (ArgDirectArgCtors_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (succeeded)
                              {
                                succeeded = ((MR_tag((MR_Word) ArgCtors_29)) == (MR_mktag((MR_Integer) 1)));
                                if (succeeded)
                                {
                                  Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgCtors_29, (MR_Integer) 0)));
                                  Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgCtors_29, (MR_Integer) 1)));
                                  succeeded = (Var_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (succeeded)
                                  {
                                    succeeded = ((MR_tag((MR_Word) ArgCtorRepns_35)) == (MR_mktag((MR_Integer) 1)));
                                    if (succeeded)
                                    {
                                      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgCtorRepns_35, (MR_Integer) 0)));
                                      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgCtorRepns_35, (MR_Integer) 1)));
                                      succeeded = (Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      if (succeeded)
                                      {
                                        TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                                        TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
                                        mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_66_66, TypeCtorInfo_67_67, ArgConsIdToTagMap_34, &ArgConsIdTagList_42);
                                        succeeded = ((MR_tag((MR_Word) ArgConsIdTagList_42)) == (MR_mktag((MR_Integer) 1)));
                                        if (succeeded)
                                        {
                                          ArgConsIdTag_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgConsIdTagList_42, (MR_Integer) 0)));
                                          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgConsIdTagList_42, (MR_Integer) 1)));
                                          succeeded = (Var_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          if (succeeded)
                                          {
                                            _ConsId_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgConsIdTag_43, (MR_Integer) 0)));
                                            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgConsIdTag_43, (MR_Integer) 1)));
                                            succeeded = (Var_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (succeeded)
                                            {
                                              Var_62 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_10);
                                              succeeded = (Var_62 == (MR_Integer) 1);
                                              if (succeeded)
                                              {
                                                TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;
                                                succeeded = mercury__list__contains_2_p_0(TypeCtorInfo_68_68, AssertedDirectArgCtors_11, ((MR_Box) (ConsConsId_24)));
                                              }
                                              if (succeeded)
                                              {
                                                ArgCond_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                MR_Word ArgTypeCtorSymName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypeCtor_22, (MR_Integer) 0)));
                                                MR_Word ArgTypeCtorModule_47;
                                                MR_Integer _ArgTypeCtorArity_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ArgTypeCtor_22, (MR_Integer) 1)));

                                                succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(ArgTypeCtorSymName_45, &ArgTypeCtorModule_47);
                                                if (succeeded)
                                                {
                                                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeCtorModule_9, ArgTypeCtorModule_47);
                                                  if (succeeded)
                                                  {
                                                    MR_Word ArgTypeStatus_48;

                                                    hlds__hlds_data__get_type_defn_status_2_p_0(ArgTypeDefn_26, &ArgTypeStatus_48);
                                                    {
                                                      ArgCond_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                      MR_hl_field(MR_mktag(1), ArgCond_25, 0) = ((MR_Box) (ArgTypeStatus_48));
                                                    }
                                                  }
                                                  else
                                                    ArgCond_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
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
              OldImportStatus_73 = (MR_Word) TypeStatus_10;
              switch (MR_tag((MR_Word) OldImportStatus_73)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(OldImportStatus_73)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      succeeded = (ArgCond_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 6:
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.du_type_layout_old", (MR_String) "function \140hlds.du_type_layout_old.module_visibilities_allow_direct_arg\'/2", (MR_String) "inappropriate status for type");
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                    case (MR_Integer) 7:
                      switch (MR_tag((MR_Word) ArgCond_25)) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ArgCond_25)) {
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
                            MR_Word ArgTypeStatus_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgCond_25, (MR_Integer) 0)));
                            MR_Word ArgOldTypeStatus_75 = (MR_Word) ArgTypeStatus_74;

                            if ((OldImportStatus_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
                              succeeded = (ArgOldTypeStatus_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                            else
                              switch (MR_tag((MR_Word) ArgOldTypeStatus_75)) {
                                default:
                                  succeeded = MR_FALSE;
                                  break;
                                case (MR_Integer) 0:
                                  switch (MR_unmkbody(ArgOldTypeStatus_75)) {
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
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.du_type_layout_old", (MR_String) "function \140hlds.du_type_layout_old.module_visibilities_allow_direct_arg\'/2", (MR_String) "inappropriate status for type");
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word TypeImportLocn_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), OldImportStatus_73, (MR_Integer) 0)));

                    switch (MR_tag((MR_Word) ArgCond_25)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(ArgCond_25)) {
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
                          MR_Word ArgImportLocn_77;
                          MR_Word Var_83;
                          MR_Word ArgTypeStatus_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgCond_25, (MR_Integer) 0)));

                          Var_83 = (MR_Word) ArgTypeStatus_84;
                          succeeded = ((MR_tag((MR_Word) Var_83)) == (MR_mktag((MR_Integer) 2)));
                          if (succeeded)
                          {
                            ArgImportLocn_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_83, (MR_Integer) 0)));
                            succeeded = (ArgImportLocn_77 == (MR_Integer) 3);
                            if (succeeded)
                            {
                              succeeded = (TypeImportLocn_76 == (MR_Integer) 3);
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
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout_old__is_foreign_type_for_target_3_p_0(
  MR_Word TypeBody_4,
  MR_Word Target_5,
  MR_Word * Assertions_6)
{
  {
    MR_bool succeeded;
    MR_Word ForeignType_11;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    if (((MR_tag((MR_Word) TypeBody_4)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word MaybeForeignType_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 3)));
      MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 0)));
      MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 1)));
      MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_4, (MR_Integer) 2)));

      succeeded = ((MR_tag((MR_Word) MaybeForeignType_10)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        ForeignType_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeForeignType_10, (MR_Integer) 0)));
    }
    else
    if (((MR_tag((MR_Word) TypeBody_4)) == (MR_mktag((MR_Integer) 0))))
    {
      ForeignType_11 = (MR_Word) MR_body(((MR_Word) TypeBody_4), (MR_Integer) 0);
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_11, (MR_Integer) 0)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_11, (MR_Integer) 1)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_11, (MR_Integer) 2)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignType_11, (MR_Integer) 3)));
      switch (Target_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_27;
            MR_Word Var_12;
            MR_Word Var_13;

            succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0)));
              Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0)));
              Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1)));
              *Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 2)));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_23;
            MR_Word Var_16;
            MR_Word Var_17;

            succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0)));
              Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0)));
              Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1)));
              *Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 2)));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_21;
            MR_Word Var_19;

            succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1)));
              *Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 2)));
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_25;
            MR_Word Var_14;
            MR_Word Var_15;

            succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0)));
              Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
              Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1)));
              *Assertions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 2)));
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__accumulate_max_int_tag_3_p_0(
  MR_Word ConsTag_4,
  MR_Integer STATE_VARIABLE_Max_0_7,
  MR_Integer * STATE_VARIABLE_Max_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsTag_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Integer Int_6;
    MR_Word Var_9;

    if (succeeded)
    {
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_4, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
        Int_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    }
    if (succeeded)
      mercury__int__max_3_p_0(Int_6, STATE_VARIABLE_Max_0_7, STATE_VARIABLE_Max_8);
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout_old.accumulate_max_int_tag\'/3", (MR_String) "non-integer value for enumeration");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout_old__layout_du_ctor_args_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__layout_du_ctor_args_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word DuKind_9,
  MR_Integer ArgPackBits_10,
  MR_Word CtorRepn0_11,
  MR_Word * CtorRepn_12,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_26,
  MR_Word * STATE_VARIABLE_CtorRepnMap_27)
{
  {
    MR_bool succeeded;
    MR_Word ArgRepns0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 3)));
    MR_Word Globals_15;
    MR_Word ArgRepns1_20;
    MR_Word ArgRepns_25;
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 0)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 1)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 2)));
    MR_Integer Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 4)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 5)));
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Integer Var_40;
    MR_Word Var_41;
    MR_Word Var_39;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_15);
    switch (MR_tag((MR_Word) DuKind_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(DuKind_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            ArgRepns1_20 = ArgRepns0_14;
            break;
          case (MR_Integer) 2:
            {
              MR_Word AllowDoubleWords_44;

              libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 260, &AllowDoubleWords_44);
              switch (AllowDoubleWords_44) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ArgRepns1_20 = ArgRepns0_14;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer TargetWordBits_45;
                    MR_Word SinglePrec_46;

                    libs__globals__lookup_int_option_3_p_0(Globals_15, (MR_Integer) 253, &TargetWordBits_45);
                    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 239, &SinglePrec_46);
                    succeeded = (TargetWordBits_45 == (MR_Integer) 32);
                    if (succeeded)
                      succeeded = (SinglePrec_46 == (MR_Integer) 0);
                    if (succeeded)
                      hlds__du_type_layout_old__set_double_word_floats_3_p_0(ModuleInfo_8, ArgRepns0_14, &ArgRepns1_20);
                    else
                      ArgRepns1_20 = ArgRepns0_14;
                  }
                  break;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        ArgRepns1_20 = ArgRepns0_14;
        break;
    }
    succeeded = (ArgPackBits_10 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word ArgRepns2_22;
      MR_Integer UnpackedLength_53;
      MR_Integer PackedLength_54;
      MR_Word Var_57;
      MR_Word Var_23;
      MR_Integer Var_60;
      MR_Integer Var_61;

      hlds__du_type_layout_old__pack_du_ctor_args_6_p_0(ModuleInfo_8, ArgPackBits_10, (MR_Integer) 0, ArgRepns1_20, &ArgRepns2_22, &Var_23);
      hlds__du_type_layout_old__count_words_3_p_0(ArgRepns1_20, (MR_Integer) 0, &UnpackedLength_53);
      hlds__du_type_layout_old__count_words_3_p_0(ArgRepns2_22, (MR_Integer) 0, &PackedLength_54);
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&hlds__du_type_layout_old_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (hlds__du_type_layout_old__layout_du_ctor_args_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (PackedLength_54));
        MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (UnpackedLength_53));
      }
      mercury__require__expect_3_p_0(Var_57, (MR_String) "function \140hlds.du_type_layout_old.worth_arg_packing\'/2", (MR_String) "packed length exceeds unpacked length");
      succeeded = mercury__int__even_1_p_0(PackedLength_54);
      if (succeeded)
        Var_60 = PackedLength_54;
      else
      {
        Var_60 = (PackedLength_54 + (MR_Integer) 1);
      }
      succeeded = mercury__int__even_1_p_0(UnpackedLength_53);
      if (succeeded)
        Var_61 = UnpackedLength_53;
      else
      {
        Var_61 = (UnpackedLength_53 + (MR_Integer) 1);
      }
      succeeded = (Var_60 < Var_61);
      if (succeeded)
        ArgRepns_25 = ArgRepns2_22;
      else
        ArgRepns_25 = ArgRepns1_20;
    }
    else
      ArgRepns_25 = ArgRepns1_20;
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 0)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 1)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 2)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 3)));
    Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 4)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_11, (MR_Integer) 5)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *CtorRepn_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgRepns_25));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_41));
    }
    hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(*CtorRepn_12, STATE_VARIABLE_CtorRepnMap_0_26, STATE_VARIABLE_CtorRepnMap_27);
  }
}

static void MR_CALL 
hlds__du_type_layout_old__count_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Count_0_2,
  MR_Integer * STATE_VARIABLE_Count_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Count_3 = STATE_VARIABLE_Count_0_2;
    else
    {
      MR_Word Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgWidth_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 2)));
      MR_Integer STATE_VARIABLE_Count_20_20;
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 0)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 1)));
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 3)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_Count_0_2;

      switch (MR_tag((MR_Word) ArgWidth_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ArgWidth_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_Count_20_20 = (STATE_VARIABLE_Count_0_2 + (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Count_20_20 = (STATE_VARIABLE_Count_0_2 + (MR_Integer) 2);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_Count_20_20 = (STATE_VARIABLE_Count_0_2 + (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_Count_20_20 = STATE_VARIABLE_Count_0_2;
          break;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Args_8;
      next_value_of_STATE_VARIABLE_Count_0_2 = STATE_VARIABLE_Count_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Count_0_2 = next_value_of_STATE_VARIABLE_Count_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__pack_du_ctor_args_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Max_8;

    hlds__du_type_layout_old__accumulate_max_int_tag_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv0_STATE_VARIABLE_Max_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Max_8));
  }
}

static void MR_CALL 
hlds__du_type_layout_old__pack_du_ctor_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word Arg0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Args0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word Arg_15;
      MR_Word Args_16;
      MR_Word Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_13, (MR_Integer) 0)));
      MR_Word Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_13, (MR_Integer) 1)));
      MR_Word ArgWidth0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_13, (MR_Integer) 2)));
      MR_Word Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_13, (MR_Integer) 3)));
      MR_Integer NumBits_22;
      MR_Word TypeBody_39;
      MR_Word TypeCategory_40;

      succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(HeadVar__1_1, Type_19, &TypeBody_39);
      if (succeeded)
      {
        TypeCategory_40 = check_hlds__type_util__classify_type_defn_body_1_f_0(TypeBody_39);
        if (((MR_tag((MR_Word) TypeBody_39)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word TypeCtorInfo_13_65;
          MR_Word TypeCtorInfo_14_66;
          MR_Word TypeCtorInfo_15_67;
          MR_Word MaybeRepn_43;
          MR_Word Repn_45;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Integer MaxFunctor_57;
          MR_Word Var_58;
          MR_Integer Var_59;
          MR_Integer Var_60;
          MR_Integer Var_61;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_44;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Box conv1_MaxFunctor_57;

          succeeded = ((MR_tag((MR_Word) TypeCategory_40)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
          {
            Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeCategory_40, (MR_Integer) 0)));
            succeeded = (Var_48 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 0)));
              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 1)));
              MaybeRepn_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 2)));
              Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_39, (MR_Integer) 3)));
              succeeded = ((MR_tag((MR_Word) MaybeRepn_43)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Repn_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRepn_43, (MR_Integer) 0)));
                Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_45, (MR_Integer) 0)));
                Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_45, (MR_Integer) 1)));
                Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_45, (MR_Integer) 2)));
                Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_45, (MR_Integer) 3)));
                Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_45, (MR_Integer) 4)));
                Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_45, (MR_Integer) 5)));
                Var_58 = (MR_Word) &hlds__du_type_layout_old_scalar_common_2[9];
                Var_59 = (MR_Integer) 0;
                TypeCtorInfo_13_65 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
                TypeCtorInfo_14_66 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                TypeCtorInfo_15_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
                mercury__map__foldl_values_4_p_0(TypeCtorInfo_13_65, TypeCtorInfo_14_66, TypeCtorInfo_15_67, Var_58, Var_49, ((MR_Box) (Var_59)), &conv1_MaxFunctor_57);
                MaxFunctor_57 = ((MR_Integer) conv1_MaxFunctor_57);
                Var_61 = (MR_Integer) 1;
                Var_60 = (MaxFunctor_57 + Var_61);
                mercury__int__log2_2_p_0(Var_60, &NumBits_22);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        else
        if (((((MR_tag((MR_Word) TypeBody_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_39, (MR_Integer) 0)))) == (MR_Integer) 1))))
        {
          MR_Word Var_46;
          MR_Word Var_47;

          succeeded = ((((MR_tag((MR_Word) TypeCategory_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeCategory_40, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeCategory_40, (MR_Integer) 1)));
            succeeded = (Var_46 == (MR_Integer) 4);
            if (succeeded)
            {
              Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_39, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                NumBits_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0)));
            }
          }
        }
        else
          succeeded = MR_FALSE;
      }
      if (succeeded)
      {
        MR_Integer Mask_23;
        MR_Word ArgWidth1_24;
        MR_Integer NextShift_25;
        MR_Word NextArgWidth_26;
        MR_Integer Var_31;
        MR_Integer Var_34;
        MR_Integer Var_27;
        MR_Integer Var_28;
        MR_Integer Var_29;

        Var_31 = mercury__int__pow_2_f_0((MR_Integer) 2, NumBits_22);
        Mask_23 = (Var_31 - (MR_Integer) 1);
        Var_34 = (HeadVar__3_3 + NumBits_22);
        succeeded = (Var_34 > HeadVar__2_2);
        if (succeeded)
        {
          {
            ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgWidth1_24, 0) = ((MR_Box) (Mask_23));
          }
          NextShift_25 = NumBits_22;
        }
        else
        {
          succeeded = (HeadVar__3_3 == (MR_Integer) 0);
          if (succeeded)
          {
            {
              ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ArgWidth1_24, 0) = ((MR_Box) (Mask_23));
            }
            NextShift_25 = NumBits_22;
          }
          else
          {
            {
              ArgWidth1_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ArgWidth1_24, 0) = ((MR_Box) (HeadVar__3_3));
              MR_hl_field(MR_mktag(2), ArgWidth1_24, 1) = ((MR_Box) (Mask_23));
            }
            NextShift_25 = (HeadVar__3_3 + NumBits_22);
          }
        }
        hlds__du_type_layout_old__pack_du_ctor_args_6_p_0(HeadVar__1_1, HeadVar__2_2, NextShift_25, Args0_14, &Args_16, &NextArgWidth_26);
        succeeded = ((MR_tag((MR_Word) ArgWidth1_24)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ArgWidth1_24, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) NextArgWidth_26)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
          {
            Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), NextArgWidth_26, (MR_Integer) 0)));
            Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), NextArgWidth_26, (MR_Integer) 1)));
          }
          succeeded = !(succeeded);
        }
        if (succeeded)
          *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          *HeadVar__6_6 = ArgWidth1_24;
        {
          Arg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Arg_15, 0) = ((MR_Box) (Name_18));
          MR_hl_field(MR_mktag(0), Arg_15, 1) = ((MR_Box) (Type_19));
          MR_hl_field(MR_mktag(0), Arg_15, 2) = ((MR_Box) (*HeadVar__6_6));
          MR_hl_field(MR_mktag(0), Arg_15, 3) = ((MR_Box) (Context_21));
        }
      }
      else
      {
        MR_Word Var_30;

        Arg_15 = Arg0_13;
        *HeadVar__6_6 = ArgWidth0_20;
        hlds__du_type_layout_old__pack_du_ctor_args_6_p_0(HeadVar__1_1, HeadVar__2_2, (MR_Integer) 0, Args0_14, &Args_16, &Var_30);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_16));
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout_old__set_double_word_floats_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Arg0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Args0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Arg_8;
      MR_Word Args_9;
      MR_Word Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 0)));
      MR_Word Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 1)));
      MR_Word Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 3)));
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg0_6, (MR_Integer) 2)));

      succeeded = check_hlds__type_util__type_is_float_eqv_2_p_0(HeadVar__1_1, Type_11);
      if (succeeded)
      {
        {
          Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Arg_8, 0) = ((MR_Box) (Name_10));
          MR_hl_field(MR_mktag(0), Arg_8, 1) = ((MR_Box) (Type_11));
          MR_hl_field(MR_mktag(0), Arg_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), Arg_8, 3) = ((MR_Box) (Context_13));
        }
      }
      else
        Arg_8 = Arg0_6;
      hlds__du_type_layout_old__set_double_word_floats_3_p_0(HeadVar__1_1, Args0_7, &Args_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_9));
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout_old__decide_packed_du_type_layout_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_CtorRepn_12;
    MR_Word conv0_STATE_VARIABLE_CtorRepnMap_27;

    hlds__du_type_layout_old__layout_du_ctor_args_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv1_CtorRepn_12, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_CtorRepnMap_27);
    *wrapper_arg_2 = ((MR_Box) (conv1_CtorRepn_12));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_CtorRepnMap_27));
  }
}

static void MR_CALL 
hlds__du_type_layout_old__decide_packed_du_type_layout_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer ArgPackBits_10,
  MR_Word TypeCtor_11,
  MR_Word TypeDefn_12,
  MR_Word STATE_VARIABLE_TypeTable_0_39,
  MR_Word * STATE_VARIABLE_TypeTable_40,
  MR_Word STATE_VARIABLE_NoTagTypesMap_0_41,
  MR_Word * STATE_VARIABLE_NoTagTypesMap_42)
{
  {
    MR_bool succeeded;
    MR_Word Body0_15;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_12, &Body0_15);
    switch (MR_tag((MR_Word) Body0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_TypeTable_40 = STATE_VARIABLE_TypeTable_0_39;
          *STATE_VARIABLE_NoTagTypesMap_42 = STATE_VARIABLE_NoTagTypesMap_0_41;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_78_78;
          MR_Word Ctors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 0)));
          MR_Word MaybeUserEqComp_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 1)));
          MR_Word MaybeRepn0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 2)));
          MR_Word MaybeForeign_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 3)));
          MR_Word Repn0_20;
          MR_Word DuKind_21;
          MR_Word CtorRepns0_22;
          MR_Word CtorRepns_23;
          MR_Word CtorRepnMap_24;
          MR_Word Repn_26;
          MR_Word Body_27;
          MR_Word PackedTypeDefn_28;
          MR_Word Globals_29;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_60;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_50;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Box conv2_CtorRepnMap_24;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word NoTagCtorName_30;
          MR_Word NoTagCtorArgType_31;
          MR_Word _NoTagCtorFieldName_32;

          if ((MaybeRepn0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout_old.decide_packed_du_type_layout\'/8", (MR_String) "MaybeRepn0 = no");
              return;
            }
          }
          else
            Repn0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRepn0_18, (MR_Integer) 0)));
          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_20, (MR_Integer) 0)));
          CtorRepns0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_20, (MR_Integer) 1)));
          Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_20, (MR_Integer) 2)));
          Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_20, (MR_Integer) 3)));
          DuKind_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_20, (MR_Integer) 4)));
          Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_20, (MR_Integer) 5)));
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&hlds__du_type_layout_old_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (hlds__du_type_layout_old__decide_packed_du_type_layout_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (ModuleInfo_9));
            MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (DuKind_21));
            MR_hl_field(MR_mktag(0), Var_45, 5) = ((MR_Box) (ArgPackBits_10));
          }
          Var_46 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__du_type_layout_old_scalar_common_1[4]);
          TypeCtorInfo_78_78 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0;
          mercury__list__map_foldl_5_p_0(TypeCtorInfo_78_78, TypeCtorInfo_78_78, (MR_Word) &hlds__du_type_layout_old_scalar_common_2[2], Var_45, CtorRepns0_22, &CtorRepns_23, ((MR_Box) (Var_46)), &conv2_CtorRepnMap_24);
          CtorRepnMap_24 = ((MR_Word) conv2_CtorRepnMap_24);
          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_20, (MR_Integer) 0)));
          Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_20, (MR_Integer) 1)));
          Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_20, (MR_Integer) 2)));
          Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_20, (MR_Integer) 3)));
          Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_20, (MR_Integer) 4)));
          Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_20, (MR_Integer) 5)));
          {
            Repn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Repn_26, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(0), Repn_26, 1) = ((MR_Box) (CtorRepns_23));
            MR_hl_field(MR_mktag(0), Repn_26, 2) = ((MR_Box) (CtorRepnMap_24));
            MR_hl_field(MR_mktag(0), Repn_26, 3) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(0), Repn_26, 4) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(0), Repn_26, 5) = ((MR_Box) (Var_65));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Repn_26));
          }
          {
            Body_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Body_27, 0) = ((MR_Box) (Ctors_16));
            MR_hl_field(MR_mktag(1), Body_27, 1) = ((MR_Box) (MaybeUserEqComp_17));
            MR_hl_field(MR_mktag(1), Body_27, 2) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(1), Body_27, 3) = ((MR_Box) (MaybeForeign_19));
          }
          hlds__hlds_data__set_type_defn_body_3_p_0(Body_27, TypeDefn_12, &PackedTypeDefn_28);
          hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_11, PackedTypeDefn_28, STATE_VARIABLE_TypeTable_0_39, STATE_VARIABLE_TypeTable_40);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_29);
          succeeded = parse_tree__prog_type__type_ctor_should_be_notag_7_p_0(Globals_29, TypeCtor_11, Ctors_16, MaybeUserEqComp_17, &NoTagCtorName_30, &NoTagCtorArgType_31, &_NoTagCtorFieldName_32);
          if (succeeded)
          {
            MR_Word TypeParams_33;
            MR_Word NoTagType_34;

            hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_12, &TypeParams_33);
            {
              NoTagType_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NoTagType_34, 0) = ((MR_Box) (TypeParams_33));
              MR_hl_field(MR_mktag(0), NoTagType_34, 1) = ((MR_Box) (NoTagCtorName_30));
              MR_hl_field(MR_mktag(0), NoTagType_34, 2) = ((MR_Box) (NoTagCtorArgType_31));
            }
            mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0, ((MR_Box) (TypeCtor_11)), ((MR_Box) (NoTagType_34)), STATE_VARIABLE_NoTagTypesMap_0_41, STATE_VARIABLE_NoTagTypesMap_42);
          }
          else
            *STATE_VARIABLE_NoTagTypesMap_42 = STATE_VARIABLE_NoTagTypesMap_0_41;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_TypeTable_40 = STATE_VARIABLE_TypeTable_0_39;
          *STATE_VARIABLE_NoTagTypesMap_42 = STATE_VARIABLE_NoTagTypesMap_0_41;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body0_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_TypeTable_40 = STATE_VARIABLE_TypeTable_0_39;
              *STATE_VARIABLE_NoTagTypesMap_42 = STATE_VARIABLE_NoTagTypesMap_0_41;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_TypeTable_40 = STATE_VARIABLE_TypeTable_0_39;
              *STATE_VARIABLE_NoTagTypesMap_42 = STATE_VARIABLE_NoTagTypesMap_0_41;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout_old__decide_unpacked_du_type_layout_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_CtorRepn_10;
    MR_Word conv1_STATE_VARIABLE_CtorRepnMap_21;

    hlds__du_type_layout_old__add_repn_to_ctor_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_CtorRepn_10, ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_CtorRepnMap_21);
    *wrapper_arg_2 = ((MR_Box) (conv2_CtorRepn_10));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_CtorRepnMap_21));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout_old__decide_unpacked_du_type_layout_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout_old__IntroducedFrom__pred__decide_unpacked_du_type_layout__208__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__decide_unpacked_du_type_layout_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word DirectArgMap_9,
  MR_Word TypeCtorToForeignEnumMap_10,
  MR_Word TypeCtor_11,
  MR_Word TypeDefn_12,
  MR_Word STATE_VARIABLE_TypeTable_0_41,
  MR_Word * STATE_VARIABLE_TypeTable_42)
{
  {
    MR_bool succeeded;
    MR_Word Body0_14;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_12, &Body0_14);
    switch (MR_tag((MR_Word) Body0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_TypeTable_42 = STATE_VARIABLE_TypeTable_0_41;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_14, (MR_Integer) 0)));
          MR_Word MaybeUserEqComp_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_14, (MR_Integer) 1)));
          MR_Word MaybeRepn0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_14, (MR_Integer) 2)));
          MR_Word MaybeForeign_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body0_14, (MR_Integer) 3)));
          MR_Word Globals_19;
          MR_Word ConsTagMap0_20;
          MR_Word DuKind0_21;
          MR_Word ConsTagMap_27;
          MR_Word DuKind_28;
          MR_Word CtorRepns_29;
          MR_Word CtorRepnMap_30;
          MR_Word MaybeCheaperTagTest_31;
          MR_Word MaybeDirectArgFunctors_33;
          MR_Word Repn_34;
          MR_Word Body_35;
          MR_Word UnpackedTypeDefn_36;
          MR_Word Var_43;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word ForeignEnumTagMap_25;
          MR_Word Lang_26;
          MR_Word TCFE_22;
          MR_Word MaybeForeignEnumTagMap_24;
          MR_Tuple Var_47;
          MR_Box conv0_TCFE_22;
          MR_Word _LangContextMap_23;
          MR_Box conv3_CtorRepnMap_30;
          MR_Word ConsIdA_69;
          MR_Word ConsTagA_70;
          MR_Word ConsIdB_71;
          MR_Word ConsTagB_72;
          MR_Integer ArityA_74;
          MR_Integer ArityB_77;
          MR_Word CtorTagList_68;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_73;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_78;
          MR_Word DirectArgFunctors_32;
          MR_Box conv4_DirectArgFunctors_32;

          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&hlds__du_type_layout_old_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (hlds__du_type_layout_old__decide_unpacked_du_type_layout_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (MaybeRepn0_17));
            MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140hlds.du_type_layout_old.decide_unpacked_du_type_layout\'/7", (MR_String) "MaybeRepn0 != no");
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_19);
          hlds__du_type_layout_old__assign_constructor_tags_6_p_0(Globals_19, TypeCtor_11, MaybeUserEqComp_16, Ctors_15, &ConsTagMap0_20, &DuKind0_21);
          succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0, TypeCtorToForeignEnumMap_10, ((MR_Box) (TypeCtor_11)), &conv0_TCFE_22);
          if (succeeded)
          {
            TCFE_22 = ((MR_Word) conv0_TCFE_22);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            _LangContextMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCFE_22, (MR_Integer) 0)));
            MaybeForeignEnumTagMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCFE_22, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) MaybeForeignEnumTagMap_24)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_47 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), MaybeForeignEnumTagMap_24, (MR_Integer) 0)));
              ForeignEnumTagMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0)));
              Lang_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1)));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            ConsTagMap_27 = ForeignEnumTagMap_25;
            {
              DuKind_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DuKind_28, 0) = ((MR_Box) (Lang_26));
            }
          }
          else
          {
            ConsTagMap_27 = ConsTagMap0_20;
            DuKind_28 = DuKind0_21;
          }
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&hlds__du_type_layout_old_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (hlds__du_type_layout_old__decide_unpacked_du_type_layout_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (TypeCtor_11));
            MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (ConsTagMap_27));
          }
          Var_49 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__du_type_layout_old_scalar_common_1[4]);
          mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0, (MR_Word) &hlds__du_type_layout_old_scalar_common_2[2], Var_48, Ctors_15, &CtorRepns_29, ((MR_Box) (Var_49)), &conv3_CtorRepnMap_30);
          CtorRepnMap_30 = ((MR_Word) conv3_CtorRepnMap_30);
          mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ConsTagMap_27, &CtorTagList_68);
          succeeded = ((MR_tag((MR_Word) CtorTagList_68)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorTagList_68, (MR_Integer) 0)));
            Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorTagList_68, (MR_Integer) 1)));
            ConsIdA_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 0)));
            ConsTagA_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 0)));
              Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_80, (MR_Integer) 1)));
              succeeded = (Var_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                ConsIdB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_81, (MR_Integer) 0)));
                ConsTagB_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_81, (MR_Integer) 1)));
                succeeded = ((((MR_tag((MR_Word) ConsIdA_69)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsIdA_69, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsIdA_69, (MR_Integer) 1)));
                  ArityA_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsIdA_69, (MR_Integer) 2)));
                  Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsIdA_69, (MR_Integer) 3)));
                  succeeded = ((((MR_tag((MR_Word) ConsIdB_71)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsIdB_71, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsIdB_71, (MR_Integer) 1)));
                    ArityB_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsIdB_71, (MR_Integer) 2)));
                    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsIdB_71, (MR_Integer) 3)));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Integer Var_83;

            succeeded = (ArityB_77 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_83 = (MR_Integer) 0;
              succeeded = (ArityA_74 > Var_83);
            }
            if (succeeded)
              {
                MaybeCheaperTagTest_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeCheaperTagTest_31, 0) = ((MR_Box) (ConsIdA_69));
                MR_hl_field(MR_mktag(1), MaybeCheaperTagTest_31, 1) = ((MR_Box) (ConsTagA_70));
                MR_hl_field(MR_mktag(1), MaybeCheaperTagTest_31, 2) = ((MR_Box) (ConsIdB_71));
                MR_hl_field(MR_mktag(1), MaybeCheaperTagTest_31, 3) = ((MR_Box) (ConsTagB_72));
              }
            else
            {
              MR_Integer Var_84;

              succeeded = (ArityA_74 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_84 = (MR_Integer) 0;
                succeeded = (ArityB_77 > Var_84);
              }
              if (succeeded)
                {
                  MaybeCheaperTagTest_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeCheaperTagTest_31, 0) = ((MR_Box) (ConsIdB_71));
                  MR_hl_field(MR_mktag(1), MaybeCheaperTagTest_31, 1) = ((MR_Box) (ConsTagB_72));
                  MR_hl_field(MR_mktag(1), MaybeCheaperTagTest_31, 2) = ((MR_Box) (ConsIdA_69));
                  MR_hl_field(MR_mktag(1), MaybeCheaperTagTest_31, 3) = ((MR_Box) (ConsTagA_70));
                }
              else
                MaybeCheaperTagTest_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          }
          else
            MaybeCheaperTagTest_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__du_type_layout_old_scalar_common_1[5], DirectArgMap_9, ((MR_Box) (TypeCtor_11)), &conv4_DirectArgFunctors_32);
          if (succeeded)
          {
            DirectArgFunctors_32 = ((MR_Word) conv4_DirectArgFunctors_32);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              MaybeDirectArgFunctors_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeDirectArgFunctors_33, 0) = ((MR_Box) (DirectArgFunctors_32));
            }
          else
            MaybeDirectArgFunctors_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Repn_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Repn_34, 0) = ((MR_Box) (ConsTagMap_27));
            MR_hl_field(MR_mktag(0), Repn_34, 1) = ((MR_Box) (CtorRepns_29));
            MR_hl_field(MR_mktag(0), Repn_34, 2) = ((MR_Box) (CtorRepnMap_30));
            MR_hl_field(MR_mktag(0), Repn_34, 3) = ((MR_Box) (MaybeCheaperTagTest_31));
            MR_hl_field(MR_mktag(0), Repn_34, 4) = ((MR_Box) (DuKind_28));
            MR_hl_field(MR_mktag(0), Repn_34, 5) = ((MR_Box) (MaybeDirectArgFunctors_33));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Repn_34));
          }
          {
            Body_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Body_35, 0) = ((MR_Box) (Ctors_15));
            MR_hl_field(MR_mktag(1), Body_35, 1) = ((MR_Box) (MaybeUserEqComp_16));
            MR_hl_field(MR_mktag(1), Body_35, 2) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(1), Body_35, 3) = ((MR_Box) (MaybeForeign_18));
          }
          hlds__hlds_data__set_type_defn_body_3_p_0(Body_35, TypeDefn_12, &UnpackedTypeDefn_36);
          hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_11, UnpackedTypeDefn_36, STATE_VARIABLE_TypeTable_0_41, STATE_VARIABLE_TypeTable_42);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_TypeTable_42 = STATE_VARIABLE_TypeTable_0_41;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body0_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_TypeTable_42 = STATE_VARIABLE_TypeTable_0_41;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_TypeTable_42 = STATE_VARIABLE_TypeTable_0_41;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout_old__assign_constructor_tags_6_p_0(
  MR_Word Globals_7,
  MR_Word TypeCtor_8,
  MR_Word UserEqCmp_9,
  MR_Word Ctors_10,
  MR_Word * STATE_VARIABLE_CtorTags_24,
  MR_Word * DuTypeKind_12)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_39_39;
    MR_Word TypeCtorInfo_40_40;
    MR_Integer NumTagBits_13;
    MR_Word STATE_VARIABLE_CtorTags_26_26;

    libs__globals__lookup_int_option_3_p_0(Globals_7, (MR_Integer) 252, &NumTagBits_13);
    TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
    TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
    mercury__map__init_1_p_0(TypeCtorInfo_39_39, TypeCtorInfo_40_40, &STATE_VARIABLE_CtorTags_26_26);
    succeeded = hlds__du_type_layout_old__ctors_are_all_constants_1_p_0(Ctors_10);
    if (succeeded)
    {
      MR_Word Var_15;
      MR_Word Var_27;

      succeeded = ((MR_tag((MR_Word) Ctors_10)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_10, (MR_Integer) 0)));
        Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_10, (MR_Integer) 1)));
        succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word SymName_67;
        MR_Integer Arity_69;
        MR_Word ConsId_71;
        MR_Word _MaybeExistConstraints_66;
        MR_Word _Args_68;
        MR_Word _Ctxt_70;

        *DuTypeKind_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        _MaybeExistConstraints_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0)));
        SymName_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1)));
        _Args_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 2)));
        Arity_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 3)));
        _Ctxt_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 4)));
        {
          ConsId_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ConsId_71, 1) = ((MR_Box) (SymName_67));
          MR_hl_field(MR_mktag(3), ConsId_71, 2) = ((MR_Box) (Arity_69));
          MR_hl_field(MR_mktag(3), ConsId_71, 3) = ((MR_Box) (TypeCtor_8));
        }
        mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_71)), ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_old_scalar_common_1[12]))), STATE_VARIABLE_CtorTags_26_26, STATE_VARIABLE_CtorTags_24);
      }
      else
      {
        *DuTypeKind_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        hlds__du_type_layout_old__assign_enum_constants_5_p_0(TypeCtor_8, (MR_Integer) 0, Ctors_10, STATE_VARIABLE_CtorTags_26_26, STATE_VARIABLE_CtorTags_24);
      }
    }
    else
    {
      MR_Word SingleFunctorName_16;
      MR_Word SingleArgType_17;
      MR_Word MaybeSingleArgName_18;

      succeeded = parse_tree__prog_type__type_ctor_should_be_notag_7_p_0(Globals_7, TypeCtor_8, Ctors_10, UserEqCmp_9, &SingleFunctorName_16, &SingleArgType_17, &MaybeSingleArgName_18);
      if (succeeded)
      {
        MR_Word SingleConsId_19;

        {
          SingleConsId_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), SingleConsId_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), SingleConsId_19, 1) = ((MR_Box) (SingleFunctorName_16));
          MR_hl_field(MR_mktag(3), SingleConsId_19, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), SingleConsId_19, 3) = ((MR_Box) (TypeCtor_8));
        }
        mercury__map__det_insert_4_p_0(TypeCtorInfo_39_39, TypeCtorInfo_40_40, ((MR_Box) (SingleConsId_19)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), STATE_VARIABLE_CtorTags_26_26, STATE_VARIABLE_CtorTags_24);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *DuTypeKind_12 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (SingleFunctorName_16));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (SingleArgType_17));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (MaybeSingleArgName_18));
        }
      }
      else
      {
        *DuTypeKind_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
        succeeded = (NumTagBits_13 == (MR_Integer) 0);
        if (succeeded)
        {
          hlds__du_type_layout_old__assign_unshared_tags_6_p_0(TypeCtor_8, Ctors_10, (MR_Integer) 0, (MR_Integer) 0, STATE_VARIABLE_CtorTags_26_26, STATE_VARIABLE_CtorTags_24);
        }
        else
        {
          MR_Integer MaxTag_20;
          MR_Word Constants_21;
          MR_Word Functors_22;
          MR_Integer NextTag_23;
          MR_Integer Var_35;
          MR_Word STATE_VARIABLE_CtorTags_37_37;

          mercury__int__pow_3_p_0((MR_Integer) 2, NumTagBits_13, &Var_35);
          MaxTag_20 = (Var_35 - (MR_Integer) 1);
          hlds__du_type_layout_old__separate_out_constants_3_p_0(Ctors_10, &Constants_21, &Functors_22);
          if ((Constants_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            NextTag_23 = (MR_Integer) 0;
            STATE_VARIABLE_CtorTags_37_37 = STATE_VARIABLE_CtorTags_26_26;
          }
          else
          {
            MR_Word Ctor_115;
            MR_Word Ctors_116;
            MR_Word SymName_121;
            MR_Integer Arity_123;
            MR_Word ConsId_125;
            MR_Word STATE_VARIABLE_CtorTags_28_129;
            MR_Word _MaybeExistConstraints_120;
            MR_Word _Args_122;
            MR_Word _Ctxt_124;

            NextTag_23 = ((MR_Integer) 0 + (MR_Integer) 1);
            Ctor_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constants_21, (MR_Integer) 0)));
            Ctors_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constants_21, (MR_Integer) 1)));
            _MaybeExistConstraints_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_115, (MR_Integer) 0)));
            SymName_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_115, (MR_Integer) 1)));
            _Args_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_115, (MR_Integer) 2)));
            Arity_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_115, (MR_Integer) 3)));
            _Ctxt_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_115, (MR_Integer) 4)));
            {
              ConsId_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConsId_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ConsId_125, 1) = ((MR_Box) (SymName_121));
              MR_hl_field(MR_mktag(3), ConsId_125, 2) = ((MR_Box) (Arity_123));
              MR_hl_field(MR_mktag(3), ConsId_125, 3) = ((MR_Box) (TypeCtor_8));
            }
            mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_125)), ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_old_scalar_common_2[8]))), STATE_VARIABLE_CtorTags_26_26, &STATE_VARIABLE_CtorTags_28_129);
            hlds__du_type_layout_old__assign_shared_local_tags_6_p_0(TypeCtor_8, Ctors_116, (MR_Integer) 0, ((MR_Integer) 0 + (MR_Integer) 1), STATE_VARIABLE_CtorTags_28_129, &STATE_VARIABLE_CtorTags_37_37);
          }
          hlds__du_type_layout_old__assign_unshared_tags_6_p_0(TypeCtor_8, Functors_22, NextTag_23, MaxTag_20, STATE_VARIABLE_CtorTags_37_37, STATE_VARIABLE_CtorTags_24);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout_old__ctors_are_all_constants_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Ctor_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Rest_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 2)));
      MR_Word _MaybeExistConstraints_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 0)));
      MR_Word _Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 1)));
      MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 3)));
      MR_Word _Ctxt_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 4)));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = (Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        // direct tailcall eliminated
        next_value_of_HeadVar__1_1 = Rest_3;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__assign_enum_constants_5_p_0(
  MR_Word TypeCtor_1,
  MR_Integer Val_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CtorTags_0_4,
  MR_Word * STATE_VARIABLE_CtorTags_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CtorTags_5 = STATE_VARIABLE_CtorTags_0_4;
    else
    {
      MR_Word Ctor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Ctors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 1)));
      MR_Integer Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 3)));
      MR_Word ConsId_21;
      MR_Word Tag_22;
      MR_Word Var_25;
      MR_Word STATE_VARIABLE_CtorTags_26_26;
      MR_Integer Var_27;
      MR_Word _MaybeExistConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 0)));
      MR_Word _Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 2)));
      MR_Word _Ctxt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 4)));
      MR_Integer next_value_of_Val_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_CtorTags_0_4;

      {
        ConsId_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_21, 1) = ((MR_Box) (SymName_17));
        MR_hl_field(MR_mktag(3), ConsId_21, 2) = ((MR_Box) (Arity_19));
        MR_hl_field(MR_mktag(3), ConsId_21, 3) = ((MR_Box) (TypeCtor_1));
      }
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Val_2));
      }
      {
        Tag_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Tag_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Tag_22, 1) = ((MR_Box) (Var_25));
      }
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_21)), ((MR_Box) (Tag_22)), STATE_VARIABLE_CtorTags_0_4, &STATE_VARIABLE_CtorTags_26_26);
      Var_27 = (Val_2 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_Val_2 = Var_27;
      next_value_of_HeadVar__3_3 = Ctors_14;
      next_value_of_STATE_VARIABLE_CtorTags_0_4 = STATE_VARIABLE_CtorTags_26_26;
      Val_2 = next_value_of_Val_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_CtorTags_0_4 = next_value_of_STATE_VARIABLE_CtorTags_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__decide_type_repns_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__4_4;

    hlds__add_special_pred__add_special_pred_decl_defns_for_type_maybe_lazily_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv14_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv14_HeadVar__4_4));
  }
}

static void MR_CALL 
hlds__du_type_layout_old__decide_type_repns_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_HeadVar__3_3;
    MR_Word conv10_HeadVar__5_5;

    hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv11_HeadVar__3_3, ((MR_Word) wrapper_arg_4), &conv10_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv10_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__du_type_layout_old__decide_type_repns_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_TypeTable_40;
    MR_Word conv6_STATE_VARIABLE_NoTagTypesMap_42;

    hlds__du_type_layout_old__decide_packed_du_type_layout_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv7_STATE_VARIABLE_TypeTable_40, ((MR_Word) wrapper_arg_5), &conv6_STATE_VARIABLE_NoTagTypesMap_42);
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_TypeTable_40));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_NoTagTypesMap_42));
  }
}

static void MR_CALL 
hlds__du_type_layout_old__decide_type_repns_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_TypeTable_42;

    hlds__du_type_layout_old__decide_unpacked_du_type_layout_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv4_STATE_VARIABLE_TypeTable_42);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_TypeTable_42));
  }
}

static void MR_CALL 
hlds__du_type_layout_old__decide_type_repns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_HeadVar__6_6;

    hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_HeadVar__4_4, ((MR_Word) wrapper_arg_4), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

void MR_CALL 
hlds__du_type_layout_old__decide_type_repns_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word TypeCtorInfo_46_46;
    MR_Word TypeInfo_56_56;
    MR_Word TypeCtorInfo_61_61;
    MR_Word TypeCtorInfo_76_76;
    MR_Word TypeRepnDec_7;
    MR_Word TypeRepns_8;
    MR_Word DirectArgMap_9;
    MR_Word ForeignEnums_10;
    MR_Word ForeignExportEnums_11;
    MR_Word TypeCtorToForeignEnumMap_13;
    MR_Word TypeTable0_14;
    MR_Word TypeTable1_15;
    MR_Word Globals_16;
    MR_Integer ArgPackBits_17;
    MR_Word NoTagTypesMap0_18;
    MR_Word TypeTable2_19;
    MR_Word NoTagTypesMap_20;
    MR_Word PostTypeSpecs_21;
    MR_Word TypeTable_22;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_ModuleInfo_33_33;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_ModuleInfo_37_37;
    MR_Word STATE_VARIABLE_ModuleInfo_38_38;
    MR_Word STATE_VARIABLE_ModuleInfo_39_39;
    MR_Word STATE_VARIABLE_Specs_40_40;
    MR_Word STATE_VARIABLE_ModuleInfo_42_42;
    MR_Word _TypeRepnMap_12;
    MR_Box conv3_TypeCtorToForeignEnumMap_13;
    MR_Box conv2_STATE_VARIABLE_Specs_30_30;
    MR_Box conv5_TypeTable1_15;
    MR_Box conv9_TypeTable2_19;
    MR_Box conv8_NoTagTypesMap_20;
    MR_Box conv13_STATE_VARIABLE_ModuleInfo_42_42;
    MR_Box conv12_STATE_VARIABLE_Specs_26;
    MR_Box conv15_STATE_VARIABLE_ModuleInfo_24;

    hlds__hlds_module__module_info_get_type_repn_dec_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &TypeRepnDec_7);
    TypeRepns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepnDec_7, (MR_Integer) 0)));
    DirectArgMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepnDec_7, (MR_Integer) 1)));
    ForeignEnums_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepnDec_7, (MR_Integer) 2)));
    ForeignExportEnums_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepnDec_7, (MR_Integer) 3)));
    TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
    Var_27 = mercury__map__init_0_f_0(TypeCtorInfo_46_46, (MR_Word) &hlds__du_type_layout_old_scalar_common_1[0]);
    hlds__du_type_layout_old__build_type_repn_map_3_p_0(TypeRepns_8, Var_27, &_TypeRepnMap_12);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&hlds__du_type_layout_old_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (hlds__du_type_layout_old__decide_type_repns_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_23));
    }
    Var_29 = mercury__map__init_0_f_0(TypeCtorInfo_46_46, (MR_Word) &hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0);
    TypeInfo_56_56 = (MR_Word) &hlds__du_type_layout_old_scalar_common_1[1];
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0, (MR_Word) &hlds__du_type_layout_old_scalar_common_2[0], TypeInfo_56_56, Var_28, ForeignEnums_10, ((MR_Box) (Var_29)), &conv3_TypeCtorToForeignEnumMap_13, ((MR_Box) (STATE_VARIABLE_Specs_0_25)), &conv2_STATE_VARIABLE_Specs_30_30);
    TypeCtorToForeignEnumMap_13 = ((MR_Word) conv3_TypeCtorToForeignEnumMap_13);
    STATE_VARIABLE_Specs_30_30 = ((MR_Word) conv2_STATE_VARIABLE_Specs_30_30);
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &TypeTable0_14);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&hlds__du_type_layout_old_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (hlds__du_type_layout_old__decide_type_repns_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_23));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (DirectArgMap_9));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (TypeCtorToForeignEnumMap_13));
    }
    TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_type_table_0;
    hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0(TypeCtorInfo_61_61, Var_31, TypeTable0_14, ((MR_Box) (TypeTable0_14)), &conv5_TypeTable1_15);
    TypeTable1_15 = ((MR_Word) conv5_TypeTable1_15);
    hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable1_15, STATE_VARIABLE_ModuleInfo_0_23, &STATE_VARIABLE_ModuleInfo_33_33);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_33_33, &Globals_16);
    libs__globals__lookup_int_option_3_p_0(Globals_16, (MR_Integer) 259, &ArgPackBits_17);
    hlds__hlds_module__module_info_get_no_tag_types_2_p_0(STATE_VARIABLE_ModuleInfo_33_33, &NoTagTypesMap0_18);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&hlds__du_type_layout_old_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (hlds__du_type_layout_old__decide_type_repns_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_33_33));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (ArgPackBits_17));
    }
    hlds__hlds_data__foldl2_over_type_ctor_defns_6_p_0(TypeCtorInfo_61_61, (MR_Word) &hlds__du_type_layout_old_scalar_common_2[1], Var_35, TypeTable1_15, ((MR_Box) (TypeTable1_15)), &conv9_TypeTable2_19, ((MR_Box) (NoTagTypesMap0_18)), &conv8_NoTagTypesMap_20);
    TypeTable2_19 = ((MR_Word) conv9_TypeTable2_19);
    NoTagTypesMap_20 = ((MR_Word) conv8_NoTagTypesMap_20);
    hlds__hlds_module__module_info_set_no_tag_types_3_p_0(NoTagTypesMap_20, STATE_VARIABLE_ModuleInfo_33_33, &STATE_VARIABLE_ModuleInfo_37_37);
    hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable2_19, STATE_VARIABLE_ModuleInfo_37_37, &STATE_VARIABLE_ModuleInfo_38_38);
    hlds__du_type_layout_old__post_process_types_direct_args_3_p_0(STATE_VARIABLE_ModuleInfo_38_38, &STATE_VARIABLE_ModuleInfo_39_39, &PostTypeSpecs_21);
    STATE_VARIABLE_Specs_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, PostTypeSpecs_21, STATE_VARIABLE_Specs_30_30);
    TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0, TypeCtorInfo_76_76, TypeInfo_56_56, (MR_Word) &hlds__du_type_layout_old_scalar_common_2[6], ForeignExportEnums_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_39_39)), &conv13_STATE_VARIABLE_ModuleInfo_42_42, ((MR_Box) (STATE_VARIABLE_Specs_40_40)), &conv12_STATE_VARIABLE_Specs_26);
    STATE_VARIABLE_ModuleInfo_42_42 = ((MR_Word) conv13_STATE_VARIABLE_ModuleInfo_42_42);
    *STATE_VARIABLE_Specs_26 = ((MR_Word) conv12_STATE_VARIABLE_Specs_26);
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_42_42, &TypeTable_22);
    hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0(TypeCtorInfo_76_76, (MR_Word) &hlds__du_type_layout_old_scalar_common_2[7], TypeTable_22, ((MR_Box) (STATE_VARIABLE_ModuleInfo_42_42)), &conv15_STATE_VARIABLE_ModuleInfo_24);
    *STATE_VARIABLE_ModuleInfo_24 = ((MR_Word) conv15_STATE_VARIABLE_ModuleInfo_24);
  }
}

static void MR_CALL 
hlds__du_type_layout_old__post_process_types_direct_args_3_p_0(
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

          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 227, &TermSizeWords_8);
          libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 228, &TermSizeCells_9);
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
            libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 252, &NumTagBits_13);
            libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 95, &DebugTypeRep_14);
            mercury__int__pow_3_p_0((MR_Integer) 2, NumTagBits_13, &Var_23);
            MaxTag_15 = (Var_23 - (MR_Integer) 1);
            hlds__du_type_layout_old__convert_direct_arg_functors_9_p_0(Target_7, ModuleName_11, DebugTypeRep_14, MaxTag_15, TypeCtorsDefns_12, TypeTable0_10, &TypeTable_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Specs_5);
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
hlds__du_type_layout_old__convert_direct_arg_functors_9_p_0(
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
    // setup for model_det tailcalls optimized into a loop
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
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_TypeTable_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      hlds__du_type_layout_old__convert_direct_arg_functors_if_suitable_10_p_0(Target_1, ModuleName_2, DebugTypeRep_3, MaxTag_4, TypeCtor_28, TypeDefn_29, STATE_VARIABLE_TypeTable_0_6, &STATE_VARIABLE_TypeTable_34_34, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_35_35);
      // direct tailcall eliminated
      next_value_of_HeadVar__5_5 = TypeCtorsDefns_25;
      next_value_of_STATE_VARIABLE_TypeTable_0_6 = STATE_VARIABLE_TypeTable_34_34;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_35_35;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_TypeTable_0_6 = next_value_of_STATE_VARIABLE_TypeTable_0_6;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__convert_direct_arg_functors_if_suitable_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_CtorRepn_10;
    MR_Word conv1_STATE_VARIABLE_CtorRepnMap_21;

    hlds__du_type_layout_old__update_repn_of_ctor_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_CtorRepn_10, ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_CtorRepnMap_21);
    *wrapper_arg_2 = ((MR_Box) (conv2_CtorRepn_10));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_CtorRepnMap_21));
  }
}

static MR_Box MR_CALL 
hlds__du_type_layout_old__convert_direct_arg_functors_if_suitable_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__du_type_layout_old__constructor_to_sym_name_and_arity_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout_old__convert_direct_arg_functors_if_suitable_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout_old__is_direct_arg_ctor_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__convert_direct_arg_functors_if_suitable_10_p_0(
  MR_Word Target_11,
  MR_Word ModuleName_12,
  MR_Word DebugTypeRep_13,
  MR_Integer MaxTag_14,
  MR_Word TypeCtor_15,
  MR_Word TypeDefn_16,
  MR_Word STATE_VARIABLE_TypeTable_0_61,
  MR_Word * STATE_VARIABLE_TypeTable_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64)
{
  {
    MR_bool succeeded;
    MR_Word Body_19;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_16, &Body_19);
    switch (MR_tag((MR_Word) Body_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_TypeTable_62 = STATE_VARIABLE_TypeTable_0_61;
          *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_0_63;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 0)));
          MR_Word MaybeRepn0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 2)));
          MR_Word MaybeForeign_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 3)));
          MR_Word _MaybeCanonical_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 1)));
          MR_Word CtorRepns0_26;
          MR_Word DuKind_29;
          MR_Word MaybeAssertedDirectArgCtors_30;
          MR_Word TypeCtorModule_36;
          MR_Word Repn0_24;
          MR_Word TypeCtorSymName_34;
          MR_Word Var_65;
          MR_Word _ConsIdToTagMap_25;
          MR_Word _CtorRepnMap_27;
          MR_Word _MaybeCheaperTagTest_28;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Integer _TypeCtorArity_35;

          succeeded = (MaybeForeign_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeRepn0_22)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Repn0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRepn0_22, (MR_Integer) 0)));
              _ConsIdToTagMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_24, (MR_Integer) 0)));
              CtorRepns0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_24, (MR_Integer) 1)));
              _CtorRepnMap_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_24, (MR_Integer) 2)));
              _MaybeCheaperTagTest_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_24, (MR_Integer) 3)));
              DuKind_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_24, (MR_Integer) 4)));
              MaybeAssertedDirectArgCtors_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn0_24, (MR_Integer) 5)));
              succeeded = (DuKind_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) CtorRepns0_26)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorRepns0_26, (MR_Integer) 0)));
                  Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorRepns0_26, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_65, (MR_Integer) 0)));
                    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_65, (MR_Integer) 1)));
                    TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0)));
                    _TypeCtorArity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1)));
                    succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(TypeCtorSymName_34, &TypeCtorModule_36);
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word TypeCtorInfo_89_89;
            MR_Word TypeStatus_37;
            MR_Word AssertedDirectArgFunctors_38;
            MR_Word Constants_39;
            MR_Word Functors_40;
            MR_Word DirectArgFunctors_41;
            MR_Word NonDirectArgFunctors_42;
            MR_Word Var_66;

            hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_16, &TypeStatus_37);
            if ((MaybeAssertedDirectArgCtors_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              AssertedDirectArgFunctors_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              AssertedDirectArgFunctors_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeAssertedDirectArgCtors_30, (MR_Integer) 0)));
            hlds__du_type_layout_old__separate_out_constants_3_p_0(Ctors_20, &Constants_39, &Functors_40);
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&hlds__du_type_layout_old_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (hlds__du_type_layout_old__convert_direct_arg_functors_if_suitable_10_p_0_1));
              MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (STATE_VARIABLE_TypeTable_0_61));
              MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (Target_11));
              MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) (TypeCtorModule_36));
              MR_hl_field(MR_mktag(0), Var_66, 6) = ((MR_Box) (TypeStatus_37));
              MR_hl_field(MR_mktag(0), Var_66, 7) = ((MR_Box) (AssertedDirectArgFunctors_38));
            }
            TypeCtorInfo_89_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
            mercury__list__filter_4_p_0(TypeCtorInfo_89_89, Var_66, Functors_40, &DirectArgFunctors_41, &NonDirectArgFunctors_42);
            if ((DirectArgFunctors_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *STATE_VARIABLE_TypeTable_62 = STATE_VARIABLE_TypeTable_0_61;
            else
            {
              MR_Word TypeCtorInfo_101_101;
              MR_Word LeftOverDirectArgFunctors_47;
              MR_Word DirectArgConsIdToTagMap_48;
              MR_Word MaybeCheaperTagTest_49;
              MR_Word DirectArgFunctorNames_50;
              MR_Word CtorRepns_52;
              MR_Word CtorRepnMap_53;
              MR_Word DirectArgRepn_54;
              MR_Word DirectArgBody_55;
              MR_Word DirectArgTypeDefn_56;
              MR_Word STATE_VARIABLE_CtorTags_68_68;
              MR_Integer STATE_VARIABLE_NextTag_69_69;
              MR_Word STATE_VARIABLE_CtorTags_70_70;
              MR_Integer STATE_VARIABLE_NextTag_71_71;
              MR_Word STATE_VARIABLE_CtorTags_72_72;
              MR_Word Var_73;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Box conv3_CtorRepnMap_53;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_87;
              MR_Word Var_86;

              mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, &STATE_VARIABLE_CtorTags_68_68);
              hlds__du_type_layout_old__assign_constant_tags_6_p_0(TypeCtor_15, Constants_39, (MR_Integer) 0, &STATE_VARIABLE_NextTag_69_69, STATE_VARIABLE_CtorTags_68_68, &STATE_VARIABLE_CtorTags_70_70);
              hlds__du_type_layout_old__assign_direct_arg_tags_9_p_0(TypeCtor_15, DirectArgFunctors_41, STATE_VARIABLE_NextTag_69_69, &STATE_VARIABLE_NextTag_71_71, MaxTag_14, NonDirectArgFunctors_42, &LeftOverDirectArgFunctors_47, STATE_VARIABLE_CtorTags_70_70, &STATE_VARIABLE_CtorTags_72_72);
              Var_73 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_89_89, LeftOverDirectArgFunctors_47, NonDirectArgFunctors_42);
              hlds__du_type_layout_old__assign_unshared_tags_6_p_0(TypeCtor_15, Var_73, STATE_VARIABLE_NextTag_71_71, MaxTag_14, STATE_VARIABLE_CtorTags_72_72, &DirectArgConsIdToTagMap_48);
              hlds__du_type_layout_old__compute_cheaper_tag_test_2_p_0(DirectArgConsIdToTagMap_48, &MaybeCheaperTagTest_49);
              DirectArgFunctorNames_50 = mercury__list__map_2_f_0(TypeCtorInfo_89_89, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, (MR_Word) &hlds__du_type_layout_old_scalar_common_2[5], DirectArgFunctors_41);
              switch (DebugTypeRep_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__du_type_layout_old__output_direct_arg_functor_summary_5_p_0(ModuleName_12, TypeCtor_15, DirectArgFunctorNames_50);
                  break;
              }
              {
                Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&hlds__du_type_layout_old_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (hlds__du_type_layout_old__convert_direct_arg_functors_if_suitable_10_p_0_3));
                MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (TypeCtor_15));
                MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (DirectArgConsIdToTagMap_48));
              }
              Var_79 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__du_type_layout_old_scalar_common_1[4]);
              TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0;
              mercury__list__map_foldl_5_p_0(TypeCtorInfo_101_101, TypeCtorInfo_101_101, (MR_Word) &hlds__du_type_layout_old_scalar_common_2[2], Var_78, CtorRepns0_26, &CtorRepns_52, ((MR_Box) (Var_79)), &conv3_CtorRepnMap_53);
              CtorRepnMap_53 = ((MR_Word) conv3_CtorRepnMap_53);
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (DirectArgFunctorNames_50));
              }
              {
                DirectArgRepn_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DirectArgRepn_54, 0) = ((MR_Box) (DirectArgConsIdToTagMap_48));
                MR_hl_field(MR_mktag(0), DirectArgRepn_54, 1) = ((MR_Box) (CtorRepns_52));
                MR_hl_field(MR_mktag(0), DirectArgRepn_54, 2) = ((MR_Box) (CtorRepnMap_53));
                MR_hl_field(MR_mktag(0), DirectArgRepn_54, 3) = ((MR_Box) (MaybeCheaperTagTest_49));
                MR_hl_field(MR_mktag(0), DirectArgRepn_54, 4) = ((MR_Box) (DuKind_29));
                MR_hl_field(MR_mktag(0), DirectArgRepn_54, 5) = ((MR_Box) (Var_80));
              }
              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (DirectArgRepn_54));
              }
              Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 0)));
              Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 1)));
              Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 2)));
              Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 3)));
              {
                DirectArgBody_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DirectArgBody_55, 0) = ((MR_Box) (Var_84));
                MR_hl_field(MR_mktag(1), DirectArgBody_55, 1) = ((MR_Box) (Var_85));
                MR_hl_field(MR_mktag(1), DirectArgBody_55, 2) = ((MR_Box) (Var_81));
                MR_hl_field(MR_mktag(1), DirectArgBody_55, 3) = ((MR_Box) (Var_87));
              }
              hlds__hlds_data__set_type_defn_body_3_p_0(DirectArgBody_55, TypeDefn_16, &DirectArgTypeDefn_56);
              hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_15, DirectArgTypeDefn_56, STATE_VARIABLE_TypeTable_0_61, STATE_VARIABLE_TypeTable_62);
            }
            hlds__du_type_layout_old__check_incorrect_direct_arg_assertions_4_p_0(AssertedDirectArgFunctors_38, NonDirectArgFunctors_42, STATE_VARIABLE_Specs_0_63, STATE_VARIABLE_Specs_64);
          }
          else
          {
            *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_0_63;
            *STATE_VARIABLE_TypeTable_62 = STATE_VARIABLE_TypeTable_0_61;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_TypeTable_62 = STATE_VARIABLE_TypeTable_0_61;
          *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_0_63;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body_19, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_TypeTable_62 = STATE_VARIABLE_TypeTable_0_61;
              *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_0_63;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_TypeTable_62 = STATE_VARIABLE_TypeTable_0_61;
              *STATE_VARIABLE_Specs_64 = STATE_VARIABLE_Specs_0_63;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout_old__separate_out_constants_3_p_0(
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
    MR_Integer Var_15;
    MR_Word Var_16;

    hlds__du_type_layout_old__separate_out_constants_3_p_0(Ctors_5, &Constants0_8, &Functors0_9);
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 0)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 1)));
    Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 2)));
    Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 3)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 4)));
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

static void MR_CALL 
hlds__du_type_layout_old__compute_cheaper_tag_test_2_p_0(
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

static void MR_CALL 
hlds__du_type_layout_old__output_direct_arg_functor_summary_5_p_0_1(
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
hlds__du_type_layout_old__output_direct_arg_functor_summary_5_p_0(
  MR_Word ModuleName_6,
  MR_Word TypeCtor_7,
  MR_Word DirectArgFunctorNames_8)
{
  {
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_6);
    mercury__io__write_string_3_p_0((MR_String) " : ");
    parse_tree__prog_out__write_type_ctor_3_p_0(TypeCtor_7);
    mercury__io__write_string_3_p_0((MR_String) " : ");
    mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, DirectArgFunctorNames_8, (MR_String) ", ", (MR_Word) &hlds__du_type_layout_old_scalar_common_2[4]);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__du_type_layout_old__check_incorrect_direct_arg_assertions_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_4 = STATE_VARIABLE_Specs_0_3;
    else
    {
      MR_Word Ctor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 1)));
      MR_Integer Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 3)));
      MR_Word Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 4)));
      MR_Word SymNameArity_18;
      MR_Word STATE_VARIABLE_Specs_45_45;
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 0)));
      MR_Word _Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 2)));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_3;

      {
        SymNameArity_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SymNameArity_18, 0) = ((MR_Box) (SymName_14));
        MR_hl_field(MR_mktag(0), SymNameArity_18, 1) = ((MR_Box) (Arity_16));
      }
      succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, HeadVar__1_1, ((MR_Box) (SymNameArity_18)));
      if (succeeded)
      {
        MR_Word Pieces_19;
        MR_Word Msg_20;
        MR_Word Spec_21;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_43;

        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (SymNameArity_18));
        }
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_old_scalar_common_1[10])));
        }
        {
          Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_old_scalar_common_1[11])));
          MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Pieces_19));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_20, 0) = ((MR_Box) (Context_17));
          MR_hl_field(MR_mktag(0), Msg_20, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Msg_20));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) (Var_43));
        }
        {
          STATE_VARIABLE_Specs_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_45_45, 0) = ((MR_Box) (Spec_21));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_45_45, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_3));
        }
      }
      else
        STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_3;
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = Ctors_11;
      next_value_of_STATE_VARIABLE_Specs_0_3 = STATE_VARIABLE_Specs_45_45;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Specs_0_3 = next_value_of_STATE_VARIABLE_Specs_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__assign_direct_arg_tags_9_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Val_0_3,
  MR_Integer * STATE_VARIABLE_Val_4,
  MR_Integer MaxTag_5,
  MR_Word NonDirectArgFunctors_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_CtorTags_0_8,
  MR_Word * STATE_VARIABLE_CtorTags_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_CtorTags_9 = STATE_VARIABLE_CtorTags_0_8;
      *STATE_VARIABLE_Val_4 = STATE_VARIABLE_Val_0_3;
    }
    else
    {
      MR_Word Ctor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Name_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 1)));
      MR_Integer Arity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 3)));
      MR_Word ConsId_32;
      MR_Word _MaybeExistConstraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 0)));
      MR_Word _Args_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 2)));
      MR_Word _Ctxt_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 4)));

      {
        ConsId_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_32, 1) = ((MR_Box) (Name_28));
        MR_hl_field(MR_mktag(3), ConsId_32, 2) = ((MR_Box) (Arity_30));
        MR_hl_field(MR_mktag(3), ConsId_32, 3) = ((MR_Box) (TypeCtor_1));
      }
      succeeded = (STATE_VARIABLE_Val_0_3 == MaxTag_5);
      if (succeeded)
      {
        {
          MR_Word Var_33;
          MR_Word Var_34;

          succeeded = ((MR_tag((MR_Word) Ctors_21)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_21, (MR_Integer) 0)));
            Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_21, (MR_Integer) 1)));
          }
        }
        if (!(succeeded))
        {
          MR_Word Var_35;
          MR_Word Var_36;

          succeeded = ((MR_tag((MR_Word) NonDirectArgFunctors_6)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonDirectArgFunctors_6, (MR_Integer) 0)));
            Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonDirectArgFunctors_6, (MR_Integer) 1)));
          }
        }
      }
      if (succeeded)
      {
        *HeadVar__7_7 = HeadVar__2_2;
        *STATE_VARIABLE_CtorTags_9 = STATE_VARIABLE_CtorTags_0_8;
        *STATE_VARIABLE_Val_4 = STATE_VARIABLE_Val_0_3;
      }
      else
      {
        MR_Word Tag_37;
        MR_Word STATE_VARIABLE_CtorTags_42_42;
        MR_Integer STATE_VARIABLE_Val_43_43;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_STATE_VARIABLE_Val_0_3;
        MR_Word next_value_of_STATE_VARIABLE_CtorTags_0_8;

        {
          Tag_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Tag_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), Tag_37, 1) = ((MR_Box) (STATE_VARIABLE_Val_0_3));
        }
        mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_32)), ((MR_Box) (Tag_37)), STATE_VARIABLE_CtorTags_0_8, &STATE_VARIABLE_CtorTags_42_42);
        STATE_VARIABLE_Val_43_43 = (STATE_VARIABLE_Val_0_3 + (MR_Integer) 1);
        // direct tailcall eliminated
        next_value_of_HeadVar__2_2 = Ctors_21;
        next_value_of_STATE_VARIABLE_Val_0_3 = STATE_VARIABLE_Val_43_43;
        next_value_of_STATE_VARIABLE_CtorTags_0_8 = STATE_VARIABLE_CtorTags_42_42;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Val_0_3 = next_value_of_STATE_VARIABLE_Val_0_3;
        STATE_VARIABLE_CtorTags_0_8 = next_value_of_STATE_VARIABLE_CtorTags_0_8;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__assign_unshared_tags_6_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer Val_3,
  MR_Integer MaxTag_4,
  MR_Word STATE_VARIABLE_CtorTags_0_5,
  MR_Word * STATE_VARIABLE_CtorTags_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CtorTags_6 = STATE_VARIABLE_CtorTags_0_5;
    else
    {
      MR_Word Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 1)));
      MR_Integer Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 3)));
      MR_Word ConsId_24;
      MR_Word _MaybeExistConstraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 0)));
      MR_Word _Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 2)));
      MR_Word _Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 4)));

      {
        ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_24, 1) = ((MR_Box) (SymName_20));
        MR_hl_field(MR_mktag(3), ConsId_24, 2) = ((MR_Box) (Arity_22));
        MR_hl_field(MR_mktag(3), ConsId_24, 3) = ((MR_Box) (TypeCtor_1));
      }
      succeeded = (Val_3 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Ctors_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_24)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), STATE_VARIABLE_CtorTags_0_5, STATE_VARIABLE_CtorTags_6);
      }
      else
      {
        MR_Word Var_26;
        MR_Word Var_27;

        succeeded = (Val_3 == MaxTag_4);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Ctors_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_15, (MR_Integer) 0)));
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_15, (MR_Integer) 1)));
          }
        }
        if (succeeded)
        {
          MR_Word Ctor_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
          MR_Word Ctors_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
          MR_Word SymName_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_55, (MR_Integer) 1)));
          MR_Integer Arity_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_55, (MR_Integer) 3)));
          MR_Word ConsId_65;
          MR_Word Tag_66;
          MR_Word STATE_VARIABLE_CtorTags_29_70;
          MR_Word _MaybeExistConstraints_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_55, (MR_Integer) 0)));
          MR_Word _Args_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_55, (MR_Integer) 2)));
          MR_Word _Ctxt_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_55, (MR_Integer) 4)));

          {
            ConsId_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsId_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ConsId_65, 1) = ((MR_Box) (SymName_61));
            MR_hl_field(MR_mktag(3), ConsId_65, 2) = ((MR_Box) (Arity_63));
            MR_hl_field(MR_mktag(3), ConsId_65, 3) = ((MR_Box) (TypeCtor_1));
          }
          {
            Tag_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Tag_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
            MR_hl_field(MR_mktag(3), Tag_66, 1) = ((MR_Box) (MaxTag_4));
            MR_hl_field(MR_mktag(3), Tag_66, 2) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_65)), ((MR_Box) (Tag_66)), STATE_VARIABLE_CtorTags_0_5, &STATE_VARIABLE_CtorTags_29_70);
          hlds__du_type_layout_old__assign_shared_remote_tags_6_p_0(TypeCtor_1, Ctors_56, MaxTag_4, ((MR_Integer) 0 + (MR_Integer) 1), STATE_VARIABLE_CtorTags_29_70, STATE_VARIABLE_CtorTags_6);
        }
        else
        {
          succeeded = (Val_3 <= MaxTag_4);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_CtorTags_34_34;
            MR_Integer Var_35;
            MR_Word Tag_41;
            MR_Word next_value_of_HeadVar__2_2;
            MR_Integer next_value_of_Val_3;
            MR_Word next_value_of_STATE_VARIABLE_CtorTags_0_5;

            {
              Tag_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Tag_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
              MR_hl_field(MR_mktag(3), Tag_41, 1) = ((MR_Box) (Val_3));
            }
            mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_24)), ((MR_Box) (Tag_41)), STATE_VARIABLE_CtorTags_0_5, &STATE_VARIABLE_CtorTags_34_34);
            Var_35 = (Val_3 + (MR_Integer) 1);
            // direct tailcall eliminated
            next_value_of_HeadVar__2_2 = Ctors_15;
            next_value_of_Val_3 = Var_35;
            next_value_of_STATE_VARIABLE_CtorTags_0_5 = STATE_VARIABLE_CtorTags_34_34;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Val_3 = next_value_of_Val_3;
            STATE_VARIABLE_CtorTags_0_5 = next_value_of_STATE_VARIABLE_CtorTags_0_5;
            continue;
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.du_type_layout_old", (MR_String) "predicate \140hlds.du_type_layout_old.assign_unshared_tags\'/6", (MR_String) "exceeded max tag");
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
hlds__du_type_layout_old__assign_shared_remote_tags_6_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer PrimaryVal_3,
  MR_Integer SecondaryVal_4,
  MR_Word STATE_VARIABLE_CtorTags_0_5,
  MR_Word * STATE_VARIABLE_CtorTags_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CtorTags_6 = STATE_VARIABLE_CtorTags_0_5;
    else
    {
      MR_Word Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 1)));
      MR_Integer Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 3)));
      MR_Word ConsId_24;
      MR_Word Tag_25;
      MR_Integer SecondaryVal1_26;
      MR_Word STATE_VARIABLE_CtorTags_29_29;
      MR_Word _MaybeExistConstraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 0)));
      MR_Word _Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 2)));
      MR_Word _Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 4)));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_SecondaryVal_4;
      MR_Word next_value_of_STATE_VARIABLE_CtorTags_0_5;

      {
        ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_24, 1) = ((MR_Box) (SymName_20));
        MR_hl_field(MR_mktag(3), ConsId_24, 2) = ((MR_Box) (Arity_22));
        MR_hl_field(MR_mktag(3), ConsId_24, 3) = ((MR_Box) (TypeCtor_1));
      }
      {
        Tag_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Tag_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
        MR_hl_field(MR_mktag(3), Tag_25, 1) = ((MR_Box) (PrimaryVal_3));
        MR_hl_field(MR_mktag(3), Tag_25, 2) = ((MR_Box) (SecondaryVal_4));
      }
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_24)), ((MR_Box) (Tag_25)), STATE_VARIABLE_CtorTags_0_5, &STATE_VARIABLE_CtorTags_29_29);
      SecondaryVal1_26 = (SecondaryVal_4 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = Ctors_15;
      next_value_of_SecondaryVal_4 = SecondaryVal1_26;
      next_value_of_STATE_VARIABLE_CtorTags_0_5 = STATE_VARIABLE_CtorTags_29_29;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      SecondaryVal_4 = next_value_of_SecondaryVal_4;
      STATE_VARIABLE_CtorTags_0_5 = next_value_of_STATE_VARIABLE_CtorTags_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__assign_constant_tags_6_p_0(
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
    MR_Word SymName_32;
    MR_Integer Arity_34;
    MR_Word ConsId_36;
    MR_Word Tag_37;
    MR_Word STATE_VARIABLE_CtorTags_28_40;
    MR_Word _MaybeExistConstraints_31;
    MR_Word _Args_33;
    MR_Word _Ctxt_35;

    *NextTag_10 = (InitTag_9 + (MR_Integer) 1);
    Ctor_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constants_8, (MR_Integer) 0)));
    Ctors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Constants_8, (MR_Integer) 1)));
    _MaybeExistConstraints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_26, (MR_Integer) 0)));
    SymName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_26, (MR_Integer) 1)));
    _Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_26, (MR_Integer) 2)));
    Arity_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_26, (MR_Integer) 3)));
    _Ctxt_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_26, (MR_Integer) 4)));
    {
      ConsId_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConsId_36, 1) = ((MR_Box) (SymName_32));
      MR_hl_field(MR_mktag(3), ConsId_36, 2) = ((MR_Box) (Arity_34));
      MR_hl_field(MR_mktag(3), ConsId_36, 3) = ((MR_Box) (TypeCtor_7));
    }
    {
      Tag_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Tag_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), Tag_37, 1) = ((MR_Box) (InitTag_9));
      MR_hl_field(MR_mktag(3), Tag_37, 2) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_36)), ((MR_Box) (Tag_37)), STATE_VARIABLE_CtorTags_0_14, &STATE_VARIABLE_CtorTags_28_40);
    hlds__du_type_layout_old__assign_shared_local_tags_6_p_0(TypeCtor_7, Ctors_27, InitTag_9, ((MR_Integer) 0 + (MR_Integer) 1), STATE_VARIABLE_CtorTags_28_40, STATE_VARIABLE_CtorTags_15);
  }
}

static void MR_CALL 
hlds__du_type_layout_old__assign_shared_local_tags_6_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer PrimaryVal_3,
  MR_Integer SecondaryVal_4,
  MR_Word STATE_VARIABLE_CtorTags_0_5,
  MR_Word * STATE_VARIABLE_CtorTags_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_CtorTags_6 = STATE_VARIABLE_CtorTags_0_5;
    else
    {
      MR_Word Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 1)));
      MR_Integer Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 3)));
      MR_Word ConsId_24;
      MR_Word Tag_25;
      MR_Word STATE_VARIABLE_CtorTags_28_28;
      MR_Integer Var_29;
      MR_Word _MaybeExistConstraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 0)));
      MR_Word _Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 2)));
      MR_Word _Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 4)));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_SecondaryVal_4;
      MR_Word next_value_of_STATE_VARIABLE_CtorTags_0_5;

      {
        ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_24, 1) = ((MR_Box) (SymName_20));
        MR_hl_field(MR_mktag(3), ConsId_24, 2) = ((MR_Box) (Arity_22));
        MR_hl_field(MR_mktag(3), ConsId_24, 3) = ((MR_Box) (TypeCtor_1));
      }
      {
        Tag_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Tag_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
        MR_hl_field(MR_mktag(3), Tag_25, 1) = ((MR_Box) (PrimaryVal_3));
        MR_hl_field(MR_mktag(3), Tag_25, 2) = ((MR_Box) (SecondaryVal_4));
      }
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_24)), ((MR_Box) (Tag_25)), STATE_VARIABLE_CtorTags_0_5, &STATE_VARIABLE_CtorTags_28_28);
      Var_29 = (SecondaryVal_4 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = Ctors_15;
      next_value_of_SecondaryVal_4 = Var_29;
      next_value_of_STATE_VARIABLE_CtorTags_0_5 = STATE_VARIABLE_CtorTags_28_28;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      SecondaryVal_4 = next_value_of_SecondaryVal_4;
      STATE_VARIABLE_CtorTags_0_5 = next_value_of_STATE_VARIABLE_CtorTags_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout_old__build_type_repn_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_2,
  MR_Word * STATE_VARIABLE_TypeRepnMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_TypeRepnMap_3 = STATE_VARIABLE_TypeRepnMap_0_2;
    else
    {
      MR_Word TypeRepn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word TypeRepns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word TypeCtorSymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 0)));
      MR_Word ArgTVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 1)));
      MR_Integer Arity_16;
      MR_Word TypeCtor_17;
      MR_Word STATE_VARIABLE_TypeRepnMap_20_20;
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 2)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 3)));
      MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 4)));
      MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 5)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeRepnMap_0_2;

      mercury__list__length_2_p_0((MR_Word) &hlds__du_type_layout_old_scalar_common_1[2], ArgTVars_11, &Arity_16);
      {
        TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeCtor_17, 0) = ((MR_Box) (TypeCtorSymName_10));
        MR_hl_field(MR_mktag(0), TypeCtor_17, 1) = ((MR_Box) (Arity_16));
      }
      mercury__multi_map__add_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0, ((MR_Box) (TypeCtor_17)), ((MR_Box) (TypeRepn_7)), STATE_VARIABLE_TypeRepnMap_0_2, &STATE_VARIABLE_TypeRepnMap_20_20);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = TypeRepns_8;
      next_value_of_STATE_VARIABLE_TypeRepnMap_0_2 = STATE_VARIABLE_TypeRepnMap_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeRepnMap_0_2 = next_value_of_STATE_VARIABLE_TypeRepnMap_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout_old____Unify____direct_arg_cond_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout_old____Unify____direct_arg_cond_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout_old____Compare____direct_arg_cond_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout_old____Compare____direct_arg_cond_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout_old____Unify____type_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout_old____Unify____type_repn_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout_old____Compare____type_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout_old____Compare____type_repn_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__du_type_layout_old__init(void)
{
}

void mercury__hlds__du_type_layout_old__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__du_type_layout_old__hlds__du_type_layout_old__type_ctor_info_direct_arg_cond_0);
	MR_register_type_ctor_info(&hlds__du_type_layout_old__hlds__du_type_layout_old__type_ctor_info_type_repn_map_0);
}

void mercury__hlds__du_type_layout_old__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__du_type_layout_old__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.du_type_layout_old.
