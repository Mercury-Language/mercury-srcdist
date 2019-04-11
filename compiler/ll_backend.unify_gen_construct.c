/*
** Automatically generated from `unify_gen_construct.m'
** by the Mercury compiler,
** version rotd-2018-07-11
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


// :- module ll_backend.unify_gen_construct.
// :- implementation.

/*
INIT mercury__ll_backend__unify_gen_construct__init
ENDINIT
*/

#include "ll_backend.unify_gen_construct.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
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
#include "ll_backend.closure_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen_deconstruct.mih"
#include "ll_backend.unify_gen_util.mih"
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
#include "counter.mih"
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
#include "uint.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_construct__type_ctor_info_field_addr_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen_construct__ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen_construct__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen_construct__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen_construct__ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen_construct__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0;

static const MR_PseudoTypeInfo ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__field_types_field_addr_0_0[2];

static const MR_ConstString ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__field_names_field_addr_0_0[2];

static const MR_DuFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_field_addr_0_0;

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_field_addr_0_0[1];

static const MR_DuPtagLayout ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_ptag_ordered_field_addr_0[1];

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_name_ordered_field_addr_0[1];

static const MR_Integer ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_field_addr_0[1];

static const MR_EnumFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_0;

static const MR_EnumFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_1;

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_value_ordered_maybe_real_input_arg_0[2];

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_name_ordered_maybe_real_input_arg_0[2];

static const MR_Integer ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_maybe_real_input_arg_0[2];

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_arg_tag__1449__1_2_p_0(
  MR_Word Lang_19,
  MR_Word HeadVar__2_75);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1270__1_2_p_0(
  MR_Word LeftOverConstArgsPosWidths_45,
  MR_Word HeadVar__2_86);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1263__1_2_p_0(
  MR_Word ConstArgsPosWidths_15,
  MR_Word HeadVar__2_80);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__5_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_260);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__992__1_2_p_0(
  MR_Word LeftOverArgVarsWidths_34,
  MR_Word HeadVar__2_118);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__986__1_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_111);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__978__1_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_124);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__4_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_230);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__3_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_217);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__958__1_2_p_0(
  MR_Word Lang_20,
  MR_Word HeadVar__2_132);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__2_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_204);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__1_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_141);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_and_pack_construct_args__284__1_2_p_0(
  MR_Word STATE_VARIABLE_TakeAddr_0_4,
  MR_Word HeadVar__2_29);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__255__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_137);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__194__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_150);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__264__1_2_p_0(
  MR_Word MaybeSize_20,
  MR_Word HeadVar__2_128);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__262__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_124);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__132__1_2_p_0(
  MR_Word Lang_56,
  MR_Word HeadVar__2_186);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__120__1_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_161);

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____maybe_real_input_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____maybe_real_input_arg_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____field_addr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____field_addr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____active_ground_term_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____active_ground_term_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word UnboxedFloats_10,
  MR_Word UnboxedInt64s_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ConstStructMap_0_23,
  MR_Word * STATE_VARIABLE_ConstStructMap_24,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_25,
  MR_Word * STATE_VARIABLE_StaticCellInfo_26);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_rval_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_rval_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_rval_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word UnboxedFloats_11,
  MR_Word UnboxedInt64s_12,
  MR_Word ConstStructMap_13,
  MR_Word ConsTag_14,
  MR_Word ConstArgsPosWidths_15,
  MR_Word * TypedRval_16,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_73,
  MR_Word * STATE_VARIABLE_StaticCellInfo_74);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word UnboxedFloats_8,
  MR_Word UnboxedInt64s_9,
  MR_Word ConstStructMap_10,
  MR_Word HeadVar__5_5,
  MR_Word * TypedRval_13);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UnboxedFloats_2,
  MR_Word UnboxedInt64s_3,
  MR_Word ConstStructMap_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_args_for_one_word_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UnboxedFloats_2,
  MR_Word UnboxedInt64s_3,
  MR_Word ConstStructMap_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0(
  MR_Word UnboxedFloats_6,
  MR_Word UnboxedInt64s_7,
  MR_Word ConsTag_8,
  MR_Word ArgPosWidth_9,
  MR_Word * TypedRval_10);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_field_addr_5_p_0(
  MR_Word CellArg_6,
  MR_Integer ArgOffset_7,
  MR_Integer * NextOffset_8,
  MR_Word STATE_VARIABLE_RevFieldAddrs_0_17,
  MR_Word * STATE_VARIABLE_RevFieldAddrs_18);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_structs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjuncts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_4,
  MR_Word * STATE_VARIABLE_StaticCellInfo_5,
  MR_Word STATE_VARIABLE_ActiveMap_0_6,
  MR_Word * STATE_VARIABLE_ActiveMap_7);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_9(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0(
  MR_Word Var_9,
  MR_Word ConsTag_10,
  MR_Word ArgVarsWidths_11,
  MR_Word UnboxedFloats_12,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_75,
  MR_Word * STATE_VARIABLE_StaticCellInfo_76,
  MR_Word STATE_VARIABLE_ActiveMap_0_77,
  MR_Word * STATE_VARIABLE_ActiveMap_78);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ActiveMap_0_3,
  MR_Word * STATE_VARIABLE_ActiveMap_4);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_args_for_one_word_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word CurRval_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ActiveMap_0_5,
  MR_Word * STATE_VARIABLE_ActiveMap_6);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_construct__pack_how_to_construct_3_p_0(
  MR_Word ArgVarsWidths_4,
  MR_Word STATE_VARIABLE_HowToConstruct_0_13,
  MR_Word * STATE_VARIABLE_HowToConstruct_14);

static void MR_CALL 
ll_backend__unify_gen_construct__needs_update_args_to_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__unify_gen_construct__does_any_arg_in_word_need_update_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NU_0_3,
  MR_Word * STATE_VARIABLE_NU_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_direct_arg_construct_9_p_0(
  MR_Word Var_10,
  MR_Word Arg_11,
  MR_Word Ptag_12,
  MR_Word ArgMode_13,
  MR_Word Type_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21);

static void MR_CALL 
ll_backend__unify_gen_construct__construct_cell_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__unify_gen_construct__construct_cell_12_p_0(
  MR_Word Var_13,
  MR_Word Ptag_14,
  MR_Word CellArgs_15,
  MR_Word HowToConstruct_16,
  MR_Word MaybeSize_17,
  MR_Word Context_18,
  MR_Word MayUseAtomic_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35,
  MR_Word STATE_VARIABLE_CLD_0_36,
  MR_Word * STATE_VARIABLE_CLD_37);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_field_take_address_assigns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellVar_2,
  MR_Word CellPtag_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_tagword_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevToOrRvals_4,
  MR_Word CI_5);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CurArgNum_0_3,
  MR_Word STATE_VARIABLE_TakeAddr_0_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_6,
  MR_Word * STATE_VARIABLE_MayUseAtomic_7,
  MR_Word STATE_VARIABLE_Code_0_8,
  MR_Word * STATE_VARIABLE_Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_word_19_p_0(
  MR_Word Var_20,
  MR_Word ArgPosWidth_21,
  MR_Word VarsWidths_22,
  MR_Word ArgMode_23,
  MR_Word ArgModes_24,
  MR_Word * LeftOverVarsWidths_25,
  MR_Word * LeftOverArgModes_26,
  MR_Integer CurArgNum_27,
  MR_Integer * LeftOverArgNum_28,
  MR_Word STATE_VARIABLE_TakeAddr_0_88,
  MR_Word * STATE_VARIABLE_TakeAddr_89,
  MR_Word * CellArg_30,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_90,
  MR_Word * STATE_VARIABLE_MayUseAtomic_91,
  MR_Word STATE_VARIABLE_Code_0_92,
  MR_Word * STATE_VARIABLE_Code_93,
  MR_Word CI_33,
  MR_Word STATE_VARIABLE_CLD_0_94,
  MR_Word * STATE_VARIABLE_CLD_95);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_19_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer CurArgNum_5,
  MR_Integer * LeftOverArgNum_6,
  MR_Word STATE_VARIABLE_TakeAddr_0_7,
  MR_Word * STATE_VARIABLE_TakeAddr_8,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_9,
  MR_Word * STATE_VARIABLE_RevToOrRvals_10,
  MR_Word STATE_VARIABLE_Completeness_0_11,
  MR_Word * STATE_VARIABLE_Completeness_12,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_13,
  MR_Word * STATE_VARIABLE_MayUseAtomic_14,
  MR_Word STATE_VARIABLE_Code_0_15,
  MR_Word * STATE_VARIABLE_Code_16,
  MR_Word CI_17,
  MR_Word STATE_VARIABLE_CLD_0_18,
  MR_Word * STATE_VARIABLE_CLD_19);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_construct_arg_rval_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Var_13,
  MR_Word Type_14,
  MR_Word ArgMode_15,
  MR_Word * IsReal_16,
  MR_Word * Rval_17,
  MR_Word STATE_VARIABLE_Code_0_26,
  MR_Word * STATE_VARIABLE_Code_27,
  MR_Word CI_19,
  MR_Word STATE_VARIABLE_CLD_0_28,
  MR_Word * STATE_VARIABLE_CLD_29);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____active_ground_term_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____active_ground_term_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____field_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____field_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____maybe_real_input_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____maybe_real_input_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_1[13][2];

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_2[4][3];

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_3[7][1];

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_4[6][5];

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_5[1][8];

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_6[1][11];




static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_1[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_field_addr_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_arg_and_width_1)),
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_arg_and_width_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_construct_scalar_common_3[0])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[3])))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_5[0])),
    ((MR_Box) (ll_backend__unify_gen_construct__construct_cell_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_3[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[10]))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_4[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_construct__type_ctor_info_field_addr_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_construct__type_ctor_info_field_addr_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_int64s_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_construct__type_ctor_info_field_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_field_addr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen_construct__ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_arg_and_width_1,
  {
    (MR_TypeInfo) (&ll_backend__unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__unify_gen_construct__ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen_construct__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen_construct__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen_construct__ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_arg_and_width_1,
  {
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__unify_gen_construct__ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen_construct__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_active_ground_term_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__unify_gen_construct____Unify____active_ground_term_map_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_construct____Compare____active_ground_term_map_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_construct",
  (MR_String) "active_ground_term_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__unify_gen_construct__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__field_types_field_addr_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__field_names_field_addr_0_0[2] = {
  (MR_String) "fa_offset",
  (MR_String) "fa_var"
};

static const MR_DuFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_field_addr_0_0 = {
  (MR_String) "field_addr",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__field_types_field_addr_0_0,
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__field_names_field_addr_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_field_addr_0_0[1] = {
  &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_field_addr_0_0
};

static const MR_DuPtagLayout ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_ptag_ordered_field_addr_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_field_addr_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_name_ordered_field_addr_0[1] = {
  &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_field_addr_0_0
};

static const MR_Integer ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_field_addr_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_field_addr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen_construct____Unify____field_addr_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_construct____Compare____field_addr_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_construct",
  (MR_String) "field_addr",
  {     ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_name_ordered_field_addr_0 },
  {     ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_ptag_ordered_field_addr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_field_addr_0
};

static const MR_EnumFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_0 = {
  (MR_String) "not_real_input_arg",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_1 = {
  (MR_String) "real_input_arg",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_value_ordered_maybe_real_input_arg_0[2] = {
  &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_0,
  &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_name_ordered_maybe_real_input_arg_0[2] = {
  &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_0,
  &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_1
};

static const MR_Integer ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_maybe_real_input_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_maybe_real_input_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__unify_gen_construct____Unify____maybe_real_input_arg_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_construct____Compare____maybe_real_input_arg_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_construct",
  (MR_String) "maybe_real_input_arg",
  {     ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_name_ordered_maybe_real_input_arg_0 },
  {     ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_value_ordered_maybe_real_input_arg_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_maybe_real_input_arg_0
};

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_arg_tag__1449__1_2_p_0(
  MR_Word Lang_19,
  MR_Word HeadVar__2_75)
{
  {
    MR_bool succeeded = (Lang_19 == HeadVar__2_75);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1270__1_2_p_0(
  MR_Word LeftOverConstArgsPosWidths_45,
  MR_Word HeadVar__2_86)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[8]), ((MR_Box) (LeftOverConstArgsPosWidths_45)), ((MR_Box) (HeadVar__2_86)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1263__1_2_p_0(
  MR_Word ConstArgsPosWidths_15,
  MR_Word HeadVar__2_80)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[8]), ((MR_Box) (ConstArgsPosWidths_15)), ((MR_Box) (HeadVar__2_80)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__5_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_260)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[6]), ((MR_Box) (ArgVarsWidths_11)), ((MR_Box) (HeadVar__2_260)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__992__1_2_p_0(
  MR_Word LeftOverArgVarsWidths_34,
  MR_Word HeadVar__2_118)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[6]), ((MR_Box) (LeftOverArgVarsWidths_34)), ((MR_Box) (HeadVar__2_118)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__986__1_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_111)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[6]), ((MR_Box) (ArgVarsWidths_11)), ((MR_Box) (HeadVar__2_111)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__978__1_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_124)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[6]), ((MR_Box) (ArgVarsWidths_11)), ((MR_Box) (HeadVar__2_124)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__4_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_230)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[6]), ((MR_Box) (ArgVarsWidths_11)), ((MR_Box) (HeadVar__2_230)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__3_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_217)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[6]), ((MR_Box) (ArgVarsWidths_11)), ((MR_Box) (HeadVar__2_217)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__958__1_2_p_0(
  MR_Word Lang_20,
  MR_Word HeadVar__2_132)
{
  {
    MR_bool succeeded = (Lang_20 == HeadVar__2_132);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__2_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_204)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[6]), ((MR_Box) (ArgVarsWidths_11)), ((MR_Box) (HeadVar__2_204)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__1_2_p_0(
  MR_Word ArgVarsWidths_11,
  MR_Word HeadVar__2_141)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[6]), ((MR_Box) (ArgVarsWidths_11)), ((MR_Box) (HeadVar__2_141)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_and_pack_construct_args__284__1_2_p_0(
  MR_Word STATE_VARIABLE_TakeAddr_0_4,
  MR_Word HeadVar__2_29)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (STATE_VARIABLE_TakeAddr_0_4)), ((MR_Box) (HeadVar__2_29)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__255__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_137)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_137)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__194__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_150)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_150)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__264__1_2_p_0(
  MR_Word MaybeSize_20,
  MR_Word HeadVar__2_128)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[3]), ((MR_Box) (MaybeSize_20)), ((MR_Box) (HeadVar__2_128)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__262__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_124)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_124)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__132__1_2_p_0(
  MR_Word Lang_56,
  MR_Word HeadVar__2_186)
{
  {
    MR_bool succeeded = (Lang_56 == HeadVar__2_186);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__120__1_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_161)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_161)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____maybe_real_input_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____maybe_real_input_arg_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____field_addr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____field_addr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____active_ground_term_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____active_ground_term_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word UnboxedFloats_10,
  MR_Word UnboxedInt64s_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ConstStructMap_0_23,
  MR_Word * STATE_VARIABLE_ConstStructMap_24,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_25,
  MR_Word * STATE_VARIABLE_StaticCellInfo_26)
{
  {
    MR_Integer ConstNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word ConstStruct_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_13, (MR_Integer) 0))));
    MR_Word ConstArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_13, (MR_Integer) 1))));
    MR_Word ConsTag_20;
    MR_Word ConsArgsPosWidths_21;
    MR_Word Rval_22;

    ConsTag_20 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_9, ConsId_16);
    ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_9, ConsId_16, ConstArgs_17, &ConsArgsPosWidths_21);
    ll_backend__unify_gen_construct__generate_const_struct_rval_9_p_0(ModuleInfo_9, UnboxedFloats_10, UnboxedInt64s_11, STATE_VARIABLE_ConstStructMap_0_23, ConsTag_20, ConsArgsPosWidths_21, &Rval_22, STATE_VARIABLE_StaticCellInfo_0_25, STATE_VARIABLE_StaticCellInfo_26);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstNum_12, ((MR_Box) (Rval_22)), STATE_VARIABLE_ConstStructMap_0_23, STATE_VARIABLE_ConstStructMap_24);
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_rval_9_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1270__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_rval_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1263__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_rval_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word UnboxedFloats_11,
  MR_Word UnboxedInt64s_12,
  MR_Word ConstStructMap_13,
  MR_Word ConsTag_14,
  MR_Word ConstArgsPosWidths_15,
  MR_Word * TypedRval_16,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_73,
  MR_Word * STATE_VARIABLE_StaticCellInfo_74)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word AllTypedRvals_131;
              MR_Word DataAddr_132;
              MR_Word CellPtrConst_134;
              MR_Word Var_135;
              MR_Word Rval_138;

              ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsPosWidths_15, &AllTypedRvals_131);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_131, &DataAddr_132, STATE_VARIABLE_StaticCellInfo_0_73, STATE_VARIABLE_StaticCellInfo_74);
              {
                Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_135, 1) = ((MR_Box) (DataAddr_132));
                MR_hl_field(MR_mktag(3), Var_135, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                CellPtrConst_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_134, 1) = ((MR_Box) (Var_135));
              }
              {
                Rval_138 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_138, 0) = ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0)))));
                MR_hl_field(MR_mktag(2), Rval_138, 1) = ((MR_Box) (CellPtrConst_134));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_138));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              if ((ConstArgsPosWidths_15 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArgsPosWidths_15, (MR_Integer) 1))));
                MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArgsPosWidths_15, (MR_Integer) 0))));

                if ((Var_150 == (MR_Word) ((MR_Unsigned) 0U)))
                  ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, Var_151, TypedRval_16);
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "no_tag arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_74 = STATE_VARIABLE_StaticCellInfo_0_73;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 0)))) {
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
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 13:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word AllTypedRvals_140;
              MR_Word DataAddr_141;
              MR_Word CellPtrConst_143;
              MR_Word Var_144;
              MR_Word Ptag_146 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1))));
              MR_Word Rval_147;

              ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsPosWidths_15, &AllTypedRvals_140);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_140, &DataAddr_141, STATE_VARIABLE_StaticCellInfo_0_73, STATE_VARIABLE_StaticCellInfo_74);
              {
                Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (DataAddr_141));
                MR_hl_field(MR_mktag(3), Var_144, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                CellPtrConst_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_143, 1) = ((MR_Box) (Var_144));
              }
              {
                Rval_147 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_147, 0) = ((MR_Box) (Ptag_146));
                MR_hl_field(MR_mktag(2), Rval_147, 1) = ((MR_Box) (CellPtrConst_143));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_147));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Ptag_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1))));

              if ((ConstArgsPosWidths_15 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArgsPosWidths_15, (MR_Integer) 1))));
                MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArgsPosWidths_15, (MR_Integer) 0))));

                if ((Var_148 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word ArgRval_24;
                  MR_Word Rval_26;
                  MR_Word ArgTypedRval_107;

                  ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, Var_149, &ArgTypedRval_107);
                  ArgRval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_107, (MR_Integer) 0))));
                  {
                    Rval_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Rval_26, 0) = ((MR_Box) (Ptag_23));
                    MR_hl_field(MR_mktag(2), Rval_26, 1) = ((MR_Box) (ArgRval_24));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *TypedRval_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_26));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  }
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "direct_arg_tag: arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_74 = STATE_VARIABLE_StaticCellInfo_0_73;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word LocalSectag_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 2))));
              MR_Unsigned PrimSec_42;
              MR_Word Rval0_44;
              MR_Word LeftOverConstArgsPosWidths_45;
              MR_Word Var_77;
              MR_Word Var_81;
              MR_Integer Var_82;
              MR_Word Var_83;
              MR_Word Rval_117;

              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[5]));
                MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_const_struct_rval_9_p_0_1));
                MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (ConstArgsPosWidths_15));
                MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_not_3_p_0(Var_77, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "shared_local_tag_with_args has no args");
              PrimSec_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_40, (MR_Integer) 1))));
              Var_82 = mercury__uint__cast_to_int_1_f_0(PrimSec_42);
              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
              }
              {
                Rval0_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval0_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval0_44, 1) = ((MR_Box) (Var_81));
              }
              ll_backend__unify_gen_construct__generate_const_struct_args_for_one_word_8_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsPosWidths_15, &LeftOverConstArgsPosWidths_45, Rval0_44, &Rval_117);
              {
                Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[5]));
                MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_const_struct_rval_9_p_0_2));
                MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (LeftOverConstArgsPosWidths_45));
                MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_83, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "left over args");
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_117));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              *STATE_VARIABLE_StaticCellInfo_74 = STATE_VARIABLE_StaticCellInfo_0_73;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word PackedArgTypedRvals_31;
              MR_Word AllTypedRvals_33;
              MR_Word RemoteSectag_34;
              MR_Unsigned SectagUint_35;
              MR_Word StagTypedRval_36;
              MR_Word DataAddr_37;
              MR_Word CellPtrConst_39;
              MR_Word Var_89;
              MR_Word Var_90;
              MR_Integer Var_91;
              MR_Word Var_95;
              MR_Word Ptag_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1))));
              MR_Word Rval_115;

              ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsPosWidths_15, &PackedArgTypedRvals_31);
              RemoteSectag_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 2))));
              SectagUint_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_34, (MR_Integer) 0))));
              Var_91 = mercury__uint__cast_to_int_1_f_0(SectagUint_35);
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
              }
              {
                Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (Var_90));
              }
              {
                StagTypedRval_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StagTypedRval_36, 0) = ((MR_Box) (Var_89));
                MR_hl_field(MR_mktag(0), StagTypedRval_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[3])));
              }
              {
                AllTypedRvals_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AllTypedRvals_33, 0) = ((MR_Box) (StagTypedRval_36));
                MR_hl_field(MR_mktag(1), AllTypedRvals_33, 1) = ((MR_Box) (PackedArgTypedRvals_31));
              }
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_33, &DataAddr_37, STATE_VARIABLE_StaticCellInfo_0_73, STATE_VARIABLE_StaticCellInfo_74);
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (DataAddr_37));
                MR_hl_field(MR_mktag(3), Var_95, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                CellPtrConst_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_39, 1) = ((MR_Box) (Var_95));
              }
              {
                Rval_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_115, 0) = ((MR_Box) (Ptag_114));
                MR_hl_field(MR_mktag(2), Rval_115, 1) = ((MR_Box) (CellPtrConst_39));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_115));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word UnboxedFloats_8,
  MR_Word UnboxedInt64s_9,
  MR_Word ConstStructMap_10,
  MR_Word HeadVar__5_5,
  MR_Word * TypedRval_13)
{
  {
    MR_Word ConstArg_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word ArgPosWidth_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) ConstArg_11)) == (MR_Integer) 0))
    {
      MR_Integer ConstNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConstArg_11, (MR_Integer) 0))));
      MR_Box conv0_TypedRval_13;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_10, ConstNum_14, &conv0_TypedRval_13);
      *TypedRval_13 = ((MR_Word) (conv0_TypedRval_13));
    }
    else
    {
      MR_Word ConsId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArg_11, (MR_Integer) 0))));
      MR_Word ConsTag_17;

      ConsTag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_7, ConsId_15);
      ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_8, UnboxedInt64s_9, ConsTag_17, ArgPosWidth_12, TypedRval_13);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UnboxedFloats_2,
  MR_Word UnboxedInt64s_3,
  MR_Word ConstStructMap_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ConstArgPosWidth_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ConstArgsPosWidths_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word _ConstArg_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstArgPosWidth_15, (MR_Integer) 0))));
      MR_Word ArgPosWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstArgPosWidth_15, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__5_5 = ConstArgsPosWidths_16;

            // direct tailcall eliminated
            ;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            continue;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word HeadTypedRval_25;
            MR_Word TailTypedRvals_26;

            if (((MR_tag((MR_Word) _ConstArg_18)) == (MR_Integer) 0))
            {
              MR_Integer ConstNum_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), _ConstArg_18, (MR_Integer) 0))));
              MR_Box conv0_HeadTypedRval_25;

              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_4, ConstNum_61, &conv0_HeadTypedRval_25);
              HeadTypedRval_25 = ((MR_Word) (conv0_HeadTypedRval_25));
            }
            else
            {
              MR_Word ConsId_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), _ConstArg_18, (MR_Integer) 0))));
              MR_Word ConsTag_64;

              ConsTag_64 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, ConsId_62);
              ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_2, UnboxedInt64s_3, ConsTag_64, ArgPosWidth_19, &HeadTypedRval_25);
            }
            ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, ConstArgsPosWidths_16, &TailTypedRvals_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTypedRval_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTypedRvals_26));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgFill_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 5))));
                MR_Word FirstTypedRval_32;
                MR_Word FirstRval_33;
                MR_Word CastFirstRval_35;
                MR_Word LeftOverConstArgsPosWidths_36;
                MR_Word HeadRval_37;
                MR_Word HeadTypedRval_52;
                MR_Word TailTypedRvals_53;

                if (((MR_tag((MR_Word) _ConstArg_18)) == (MR_Integer) 0))
                {
                  MR_Integer ConstNum_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), _ConstArg_18, (MR_Integer) 0))));
                  MR_Box conv1_FirstTypedRval_32;

                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_4, ConstNum_74, &conv1_FirstTypedRval_32);
                  FirstTypedRval_32 = ((MR_Word) (conv1_FirstTypedRval_32));
                }
                else
                {
                  MR_Word ConsId_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), _ConstArg_18, (MR_Integer) 0))));
                  MR_Word ConsTag_77;

                  ConsTag_77 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, ConsId_75);
                  ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_2, UnboxedInt64s_3, ConsTag_77, ArgPosWidth_19, &FirstTypedRval_32);
                }
                FirstRval_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstTypedRval_32, (MR_Integer) 0))));
                ll_backend__unify_gen_util__cast_away_any_sign_extend_bits_3_p_0(ArgFill_31, FirstRval_33, &CastFirstRval_35);
                ll_backend__unify_gen_construct__generate_const_struct_args_for_one_word_8_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, ConstArgsPosWidths_16, &LeftOverConstArgsPosWidths_36, CastFirstRval_35, &HeadRval_37);
                {
                  HeadTypedRval_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HeadTypedRval_52, 0) = ((MR_Box) (HeadRval_37));
                  MR_hl_field(MR_mktag(0), HeadTypedRval_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[6])));
                }
                ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, LeftOverConstArgsPosWidths_36, &TailTypedRvals_53);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__6_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTypedRval_52));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTypedRvals_53));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_args\'/6", (MR_String) "apw_partial_shifted");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_args\'/6", (MR_String) "apw_none_shifted");
                  return;
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_args_for_one_word_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UnboxedFloats_2,
  MR_Word UnboxedInt64s_3,
  MR_Word ConstStructMap_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = HeadVar__7_7;
    }
    else
    {
      MR_Word ConstArgPosWidth_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ConstArgsPosWidths_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word _ConstArg_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstArgPosWidth_18, (MR_Integer) 0))));
      MR_Word ArgPosWidth_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstArgPosWidth_18, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__6_6 = HeadVar__5_5;
                *HeadVar__8_8 = HeadVar__7_7;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgShift_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 3))));
                MR_Word Fill_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 6))));
                MR_Word ArgTypedRval_41;
                MR_Word ArgRval_42;
                MR_Word NextRval_47;
                MR_Integer ArgShiftInt_66;
                MR_Word CastArgRval_67;
                MR_Word ShiftedArgRval_68;
                MR_Word next_value_of_HeadVar__5_5;
                MR_Word next_value_of_HeadVar__7_7;

                if (((MR_tag((MR_Word) _ConstArg_23)) == (MR_Integer) 0))
                {
                  MR_Integer ConstNum_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), _ConstArg_23, (MR_Integer) 0))));
                  MR_Box conv0_ArgTypedRval_41;

                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_4, ConstNum_55, &conv0_ArgTypedRval_41);
                  ArgTypedRval_41 = ((MR_Word) (conv0_ArgTypedRval_41));
                }
                else
                {
                  MR_Word ConsId_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), _ConstArg_23, (MR_Integer) 0))));
                  MR_Word ConsTag_58;

                  ConsTag_58 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, ConsId_56);
                  ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_2, UnboxedInt64s_3, ConsTag_58, ArgPosWidth_24, &ArgTypedRval_41);
                }
                ArgRval_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_41, (MR_Integer) 0))));
                ArgShiftInt_66 = (MR_Integer) (ArgShift_37);
                ll_backend__unify_gen_util__cast_away_any_sign_extend_bits_3_p_0(Fill_40, ArgRval_42, &CastArgRval_67);
                succeeded = (ArgShiftInt_66 == (MR_Integer) 0);
                if (succeeded)
                  ShiftedArgRval_68 = CastArgRval_67;
                else
                {
                  MR_Word Var_69;
                  MR_Integer Var_70;

                  succeeded = ((((MR_tag((MR_Word) ArgRval_42)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgRval_42, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgRval_42, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 0))));
                      succeeded = (Var_70 == (MR_Integer) 0);
                    }
                  }
                  if (succeeded)
                    ShiftedArgRval_68 = CastArgRval_67;
                  else
                  {
                    MR_Word Var_73;
                    MR_Word Var_74;

                    {
                      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (ArgShiftInt_66));
                    }
                    {
                      Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_74));
                    }
                    {
                      ShiftedArgRval_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_68, 2) = ((MR_Box) (CastArgRval_67));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_68, 3) = ((MR_Box) (Var_73));
                    }
                  }
                }
                NextRval_47 = ll_backend__unify_gen_util__bitwise_or_two_rvals_2_f_0(HeadVar__7_7, ShiftedArgRval_68);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__5_5 = ConstArgsPosWidths_19;
                next_value_of_HeadVar__7_7 = NextRval_47;
                HeadVar__5_5 = next_value_of_HeadVar__5_5;
                HeadVar__7_7 = next_value_of_HeadVar__7_7;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_HeadVar__5_5 = ConstArgsPosWidths_19;

                // direct tailcall eliminated
                ;
                HeadVar__5_5 = next_value_of_HeadVar__5_5;
                continue;
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_arg_tag__1449__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0(
  MR_Word UnboxedFloats_6,
  MR_Word UnboxedInt64s_7,
  MR_Word ConsTag_8,
  MR_Word ArgPosWidth_9,
  MR_Word * TypedRval_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_arg_tag\'/5", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            *TypedRval_10 = (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[12]);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_8, (MR_Integer) 0))));
          MR_Word Const_100;
          MR_Word Var_102;

          {
            Const_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Const_100, 1) = ((MR_Box) (String_11));
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (Const_100));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *TypedRval_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_21 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_8, (MR_Integer) 0)));
          MR_Word Const_91;
          MR_Word Type_92;
          MR_Word Var_93;

          {
            Const_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Const_91, 1) = MR_box_float(Float_21);
          }
          switch (UnboxedFloats_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                succeeded = ((MR_tag((MR_Word) ArgPosWidth_9)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Type_92 = (MR_Word) ((MR_Unsigned) 4U);
                }
                else
                  Type_92 = (MR_Word) ((MR_Unsigned) 12U);
              }
              break;
            case (MR_Integer) 0:
              Type_92 = (MR_Word) ((MR_Unsigned) 4U);
              break;
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (Const_91));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *TypedRval_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_93));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_92));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
              MR_Word IntType_15;
              MR_Word Const_97;
              MR_Word Type_98;
              MR_Word Var_99;

              ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_14, &Const_97, &IntType_15);
              switch (IntType_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 4:
                case (MR_Integer) 6:
                case (MR_Integer) 2:
                  Type_98 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[3]));
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  switch (UnboxedInt64s_7) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        succeeded = ((MR_tag((MR_Word) ArgPosWidth_9)) == (MR_Integer) 2);
                        if (succeeded)
                        {
                          {
                            Type_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Type_98, 0) = ((MR_Box) (IntType_15));
                          }
                        }
                        else
                          Type_98 = (MR_Word) ((MR_Unsigned) 12U);
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        Type_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Type_98, 0) = ((MR_Box) (IntType_15));
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 5:
                case (MR_Integer) 7:
                case (MR_Integer) 3:
                  Type_98 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[6]));
                  break;
              }
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (Const_97));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_99));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_98));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
              MR_String Val_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2))));
              MR_Word Var_72;
              MR_Word Const_94;
              MR_Word Type_95;
              MR_Word Var_96;

              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Lang_19));
                MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_arg_tag\'/5", (MR_String) "foreign_tag for language other than C");
              Type_95 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[3]));
              {
                Const_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_94, 1) = ((MR_Box) (Val_20));
                MR_hl_field(MR_mktag(3), Const_94, 2) = ((MR_Box) (Type_95));
              }
              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (Const_94));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_96));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_95));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_arg_tag\'/5", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
              MR_String TypeName_33 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2))));
              MR_Integer TypeArity_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 3))));
              MR_Word RttiTypeCtor_35;
              MR_Word DataId_36;
              MR_Word Var_65;
              MR_Word Var_67;
              MR_Word Rval_85;

              {
                RttiTypeCtor_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_35, 0) = ((MR_Box) (ModuleName_32));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_35, 1) = ((MR_Box) (TypeName_33));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_35, 2) = ((MR_Box) (TypeArity_34));
              }
              {
                Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (RttiTypeCtor_35));
                MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 44U));
              }
              {
                DataId_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_36, 0) = ((MR_Box) (Var_65));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (DataId_36));
                MR_hl_field(MR_mktag(3), Var_67, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Rval_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_85, 1) = ((MR_Box) (Var_67));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_85));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ClassId_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2))));
              MR_String Instance_38 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 3))));
              MR_Word TCName_39;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Rval_87;
              MR_Word ModuleName_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
              MR_Word DataId_89;

              TCName_39 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_37);
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ModuleName_88));
                MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Instance_38));
              }
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (TCName_39));
                MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
              }
              {
                DataId_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_89, 0) = ((MR_Box) (Var_61));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (DataId_89));
                MR_hl_field(MR_mktag(3), Var_63, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Rval_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_87, 1) = ((MR_Box) (Var_63));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_87));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word LocalSectag_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2))));
              MR_Unsigned PrimSec_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_26, (MR_Integer) 1))));
              MR_Word Rval_31;
              MR_Word Var_69;
              MR_Integer Var_70;

              Var_70 = mercury__uint__cast_to_int_1_f_0(PrimSec_29);
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
              }
              {
                Rval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_31, 1) = ((MR_Box) (Var_69));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_31));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_field_addr_5_p_0(
  MR_Word CellArg_6,
  MR_Integer ArgOffset_7,
  MR_Integer * NextOffset_8,
  MR_Word STATE_VARIABLE_RevFieldAddrs_0_17,
  MR_Word * STATE_VARIABLE_RevFieldAddrs_18)
{
  switch (MR_tag((MR_Word) CellArg_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CellArg_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) (MR_Integer) 1);
            *STATE_VARIABLE_RevFieldAddrs_18 = STATE_VARIABLE_RevFieldAddrs_0_17;
          }
          break;
        case (MR_Integer) 1:
          {
            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) (MR_Integer) 2);
            *STATE_VARIABLE_RevFieldAddrs_18 = STATE_VARIABLE_RevFieldAddrs_0_17;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) (MR_Integer) 1);
        *STATE_VARIABLE_RevFieldAddrs_18 = STATE_VARIABLE_RevFieldAddrs_0_17;
      }
      break;
    case (MR_Integer) 2:
      {
        *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) (MR_Integer) 2);
        *STATE_VARIABLE_RevFieldAddrs_18 = STATE_VARIABLE_RevFieldAddrs_0_17;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CellArg_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CellArg_6, (MR_Integer) 1))));
            MR_Word FieldAddr_16;

            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) (MR_Integer) 1);
            {
              FieldAddr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FieldAddr_16, 0) = ((MR_Box) (ArgOffset_7));
              MR_hl_field(MR_mktag(0), FieldAddr_16, 1) = ((MR_Box) (Var_13));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevFieldAddrs_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldAddr_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevFieldAddrs_0_17));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CellArg_6, (MR_Integer) 1))));
            MR_Word FieldAddr_25;

            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) (MR_Integer) 2);
            {
              FieldAddr_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FieldAddr_25, 0) = ((MR_Box) (ArgOffset_7));
              MR_hl_field(MR_mktag(0), FieldAddr_25, 1) = ((MR_Box) (Var_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevFieldAddrs_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldAddr_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevFieldAddrs_0_17));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_structs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ConstStructMap_24;
    MR_Word conv0_STATE_VARIABLE_StaticCellInfo_26;

    ll_backend__unify_gen_construct__generate_const_struct_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConstStructMap_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_StaticCellInfo_26);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConstStructMap_24));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_StaticCellInfo_26));
  }
}

void MR_CALL 
ll_backend__unify_gen_construct__generate_const_structs_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * ConstStructMap_6,
  MR_Word STATE_VARIABLE_GlobalData_0_17,
  MR_Word * STATE_VARIABLE_GlobalData_18)
{
  {
    MR_Word Globals_8;
    MR_Word OptUnboxedFloats_9;
    MR_Word UnboxedFloats_10;
    MR_Word OptUnboxedInt64s_11;
    MR_Word UnboxedInt64s_12;
    MR_Word ConstStructDb_13;
    MR_Word ConstStructs_14;
    MR_Word StaticCellInfo0_15;
    MR_Word StaticCellInfo_16;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Box conv3_ConstStructMap_6;
    MR_Box conv2_StaticCellInfo_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 258, &OptUnboxedFloats_9);
    switch (OptUnboxedFloats_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedFloats_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        UnboxedFloats_10 = (MR_Integer) 0;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 259, &OptUnboxedInt64s_11);
    switch (OptUnboxedInt64s_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedInt64s_12 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        UnboxedInt64s_12 = (MR_Integer) 0;
        break;
    }
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_5, &ConstStructDb_13);
    hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_13, &ConstStructs_14);
    ll_backend__global_data__global_data_get_static_cell_info_2_p_0(STATE_VARIABLE_GlobalData_0_17, &StaticCellInfo0_15);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_const_structs_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (UnboxedFloats_10));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (UnboxedInt64s_12));
    }
    Var_22 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_2[0]), (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_2[1]), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), Var_21, ConstStructs_14, ((MR_Box) (Var_22)), &conv3_ConstStructMap_6, ((MR_Box) (StaticCellInfo0_15)), &conv2_StaticCellInfo_16);
    *ConstStructMap_6 = ((MR_Word) (conv3_ConstStructMap_6));
    StaticCellInfo_16 = ((MR_Word) (conv2_StaticCellInfo_16));
    ll_backend__global_data__global_data_set_static_cell_info_3_p_0(StaticCellInfo_16, STATE_VARIABLE_GlobalData_0_17, STATE_VARIABLE_GlobalData_18);
  }
}

void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_6_p_0(
  MR_Word TermVar_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_CI_0_31,
  MR_Word * STATE_VARIABLE_CI_32,
  MR_Word STATE_VARIABLE_CLD_0_33,
  MR_Word * STATE_VARIABLE_CLD_34)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
    MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
    MR_Word NonLocals_13;
    MR_Word NonLocalList_14;

    NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_12);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_13, &NonLocalList_14);
    if ((NonLocalList_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CI_32 = STATE_VARIABLE_CI_0_31;
      *STATE_VARIABLE_CLD_34 = STATE_VARIABLE_CLD_0_33;
    }
    else
    {
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonLocalList_14, (MR_Integer) 1))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonLocalList_14, (MR_Integer) 0))));

      if ((Var_55 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), ((MR_Box) (Var_56)), ((MR_Box) (TermVar_7)));
        if (succeeded)
        {
          MR_Word Conjuncts_16;
          MR_Word Var_39;

          succeeded = ((((MR_tag((MR_Word) GoalExpr_11)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
            Conjuncts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
            succeeded = (Var_39 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            MR_Word ModuleInfo_17;
            MR_Word ExprnOpts_18;
            MR_Word UnboxedFloats_19;
            MR_Word StaticCellInfo0_20;
            MR_Word ActiveMap0_21;
            MR_Word StaticCellInfo_22;
            MR_Word ActiveMap_23;
            MR_Word ActivePairs_24;
            MR_Word GroundTerm_25;
            MR_Word TypeInfo_58_58;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_54;

            ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_31, &ModuleInfo_17);
            ll_backend__code_info__get_exprn_opts_2_p_0(STATE_VARIABLE_CI_0_31, &ExprnOpts_18);
            UnboxedFloats_19 = ll_backend__llds__get_unboxed_floats_1_f_0(ExprnOpts_18);
            ll_backend__code_info__get_static_cell_info_2_p_0(STATE_VARIABLE_CI_0_31, &StaticCellInfo0_20);
            mercury__map__init_1_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), &ActiveMap0_21);
            ll_backend__unify_gen_construct__generate_ground_term_conjuncts_7_p_0(ModuleInfo_17, Conjuncts_16, UnboxedFloats_19, StaticCellInfo0_20, &StaticCellInfo_22, ActiveMap0_21, &ActiveMap_23);
            mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ActiveMap_23, &ActivePairs_24);
            succeeded = ((MR_tag((MR_Word) ActivePairs_24)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActivePairs_24, (MR_Integer) 0))));
              Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActivePairs_24, (MR_Integer) 1))));
              Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0))));
              GroundTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 1))));
              TypeInfo_58_58 = (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (TermVar_7)), ((MR_Box) (Var_54)));
              if (succeeded)
                succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              MR_Word Rval_26;
              MR_Word STATE_VARIABLE_CLD_42_42;

              ll_backend__code_loc_dep__add_forward_live_vars_3_p_0(NonLocals_13, STATE_VARIABLE_CLD_0_33, &STATE_VARIABLE_CLD_42_42);
              ll_backend__code_info__set_static_cell_info_3_p_0(StaticCellInfo_22, STATE_VARIABLE_CI_0_31, STATE_VARIABLE_CI_32);
              Rval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_25, (MR_Integer) 0))));
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(TermVar_7, Rval_26, *STATE_VARIABLE_CI_32, STATE_VARIABLE_CLD_42_42, STATE_VARIABLE_CLD_34);
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term\'/6", (MR_String) "no active pairs");
                return;
              }
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term\'/6", (MR_String) "malformed goal");
              return;
            }
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term\'/6", (MR_String) "unexpected nonlocal");
            return;
          }
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term\'/6", (MR_String) "unexpected nonlocals");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjuncts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_4,
  MR_Word * STATE_VARIABLE_StaticCellInfo_5,
  MR_Word STATE_VARIABLE_ActiveMap_0_6,
  MR_Word * STATE_VARIABLE_ActiveMap_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ActiveMap_7 = STATE_VARIABLE_ActiveMap_0_6;
      *STATE_VARIABLE_StaticCellInfo_5 = STATE_VARIABLE_StaticCellInfo_0_4;
    }
    else
    {
      MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_StaticCellInfo_26_26;
      MR_Word STATE_VARIABLE_ActiveMap_27_27;
      MR_Word GoalExpr_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 0))));
      MR_Word Var_46;
      MR_Word ConsId_47;
      MR_Word ArgVars_48;
      MR_Word Unify_44;
      MR_Word SubInfo_52;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_StaticCellInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ActiveMap_0_6;

      succeeded = ((MR_tag((MR_Word) GoalExpr_39)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unify_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unify_44)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 0))));
          ConsId_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 1))));
          ArgVars_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 2))));
          SubInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 6))));
          succeeded = (SubInfo_52 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_Word ConsTag_53;
        MR_Word ArgVarsWidths_54;

        ConsTag_53 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(HeadVar__1_1, ConsId_47);
        ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), HeadVar__1_1, ConsId_47, ArgVars_48, &ArgVarsWidths_54);
        ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0(Var_46, ConsTag_53, ArgVarsWidths_54, HeadVar__3_3, STATE_VARIABLE_StaticCellInfo_0_4, &STATE_VARIABLE_StaticCellInfo_26_26, STATE_VARIABLE_ActiveMap_0_6, &STATE_VARIABLE_ActiveMap_27_27);
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "malformed goal");
          return;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_18;
      next_value_of_STATE_VARIABLE_StaticCellInfo_0_4 = STATE_VARIABLE_StaticCellInfo_26_26;
      next_value_of_STATE_VARIABLE_ActiveMap_0_6 = STATE_VARIABLE_ActiveMap_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_StaticCellInfo_0_4 = next_value_of_STATE_VARIABLE_StaticCellInfo_0_4;
      STATE_VARIABLE_ActiveMap_0_6 = next_value_of_STATE_VARIABLE_ActiveMap_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_9(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__5_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_8(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__992__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__986__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__978__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__4_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__3_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__958__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct_tag__973__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0(
  MR_Word Var_9,
  MR_Word ConsTag_10,
  MR_Word ArgVarsWidths_11,
  MR_Word UnboxedFloats_12,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_75,
  MR_Word * STATE_VARIABLE_StaticCellInfo_76,
  MR_Word STATE_VARIABLE_ActiveMap_0_77,
  MR_Word * STATE_VARIABLE_ActiveMap_78)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word AllTypedRvals_240;
              MR_Word DataAddr_241;
              MR_Word CellPtrConst_243;
              MR_Word STATE_VARIABLE_ActiveMap_82_244;
              MR_Word Var_245;
              MR_Word ActiveGroundTerm_247;
              MR_Word Rval_248;

              ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(ArgVarsWidths_11, &AllTypedRvals_240, STATE_VARIABLE_ActiveMap_0_77, &STATE_VARIABLE_ActiveMap_82_244);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_240, &DataAddr_241, STATE_VARIABLE_StaticCellInfo_0_75, STATE_VARIABLE_StaticCellInfo_76);
              {
                Var_245 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_245, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_245, 1) = ((MR_Box) (DataAddr_241));
                MR_hl_field(MR_mktag(3), Var_245, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                CellPtrConst_243 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_243, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_243, 1) = ((MR_Box) (Var_245));
              }
              {
                Rval_248 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_248, 0) = ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0)))));
                MR_hl_field(MR_mktag(2), Rval_248, 1) = ((MR_Box) (CellPtrConst_243));
              }
              {
                ActiveGroundTerm_247 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_247, 0) = ((MR_Box) (Rval_248));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_247, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_247)), STATE_VARIABLE_ActiveMap_82_244, STATE_VARIABLE_ActiveMap_78);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_138;

              {
                Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_1));
                MR_hl_field(MR_mktag(0), Var_138, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_138, 3) = ((MR_Box) (ArgVarsWidths_11));
                MR_hl_field(MR_mktag(0), Var_138, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_138, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "constant has args");
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[12])), STATE_VARIABLE_ActiveMap_0_77, STATE_VARIABLE_ActiveMap_78);
              *STATE_VARIABLE_StaticCellInfo_76 = STATE_VARIABLE_StaticCellInfo_0_75;
            }
            break;
          case (MR_Integer) 2:
            {
              if ((ArgVarsWidths_11 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_280 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 1))));
                MR_Word Var_281 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 0))));

                if ((Var_280 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word ArgVar_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_281, (MR_Integer) 0))));
                  MR_Word RvalType_37;
                  MR_Word STATE_VARIABLE_ActiveMap_106_106;
                  MR_Box conv1_RvalType_37;

                  mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_35)), &conv1_RvalType_37, STATE_VARIABLE_ActiveMap_0_77, &STATE_VARIABLE_ActiveMap_106_106);
                  RvalType_37 = ((MR_Word) (conv1_RvalType_37));
                  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (RvalType_37)), STATE_VARIABLE_ActiveMap_106_106, STATE_VARIABLE_ActiveMap_78);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "no_tag arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_76 = STATE_VARIABLE_StaticCellInfo_0_75;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_10, (MR_Integer) 0))));
          MR_Word Const_254;
          MR_Word ActiveGroundTerm_256;
          MR_Word Var_257;
          MR_Word Var_261;

          {
            Const_254 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_254, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Const_254, 1) = ((MR_Box) (String_15));
          }
          {
            Var_257 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_257, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), Var_257, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_9));
            MR_hl_field(MR_mktag(0), Var_257, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_257, 3) = ((MR_Box) (ArgVarsWidths_11));
            MR_hl_field(MR_mktag(0), Var_257, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_257, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "constant has args");
          {
            Var_261 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_261, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_261, 1) = ((MR_Box) (Const_254));
          }
          {
            ActiveGroundTerm_256 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_256, 0) = ((MR_Box) (Var_261));
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_256, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_256)), STATE_VARIABLE_ActiveMap_0_77, STATE_VARIABLE_ActiveMap_78);
          *STATE_VARIABLE_StaticCellInfo_76 = STATE_VARIABLE_StaticCellInfo_0_75;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_10, (MR_Integer) 0)));
          MR_Word Const_198;
          MR_Word Type_199;
          MR_Word ActiveGroundTerm_200;
          MR_Word Var_201;
          MR_Word Var_205;

          {
            Const_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_198, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Const_198, 1) = MR_box_float(Float_22);
          }
          switch (UnboxedFloats_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Type_199 = (MR_Word) ((MR_Unsigned) 12U);
              break;
            case (MR_Integer) 0:
              Type_199 = (MR_Word) ((MR_Unsigned) 4U);
              break;
          }
          {
            Var_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_201, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), Var_201, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_2));
            MR_hl_field(MR_mktag(0), Var_201, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_201, 3) = ((MR_Box) (ArgVarsWidths_11));
            MR_hl_field(MR_mktag(0), Var_201, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_201, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "constant has args");
          {
            Var_205 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_205, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_205, 1) = ((MR_Box) (Const_198));
          }
          {
            ActiveGroundTerm_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_200, 0) = ((MR_Box) (Var_205));
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_200, 1) = ((MR_Box) (Type_199));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_200)), STATE_VARIABLE_ActiveMap_0_77, STATE_VARIABLE_ActiveMap_78);
          *STATE_VARIABLE_StaticCellInfo_76 = STATE_VARIABLE_StaticCellInfo_0_75;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));
              MR_Word IntType_19;
              MR_Word Const_224;
              MR_Word Type_225;
              MR_Word ActiveGroundTerm_226;
              MR_Word Var_227;
              MR_Word Var_231;

              ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_18, &Const_224, &IntType_19);
              {
                Type_225 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Type_225, 0) = ((MR_Box) (IntType_19));
              }
              {
                Var_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_227, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), Var_227, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_5));
                MR_hl_field(MR_mktag(0), Var_227, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_227, 3) = ((MR_Box) (ArgVarsWidths_11));
                MR_hl_field(MR_mktag(0), Var_227, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_227, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "constant has args");
              {
                Var_231 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_231, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_231, 1) = ((MR_Box) (Const_224));
              }
              {
                ActiveGroundTerm_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_226, 0) = ((MR_Box) (Var_231));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_226, 1) = ((MR_Box) (Type_225));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_226)), STATE_VARIABLE_ActiveMap_0_77, STATE_VARIABLE_ActiveMap_78);
              *STATE_VARIABLE_StaticCellInfo_76 = STATE_VARIABLE_StaticCellInfo_0_75;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));
              MR_String Val_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 2))));
              MR_Word Var_129;
              MR_Word Const_211;
              MR_Word Type_212;
              MR_Word ActiveGroundTerm_213;
              MR_Word Var_214;
              MR_Word Var_218;

              {
                Var_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_129, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_129, 3) = ((MR_Box) (Lang_20));
                MR_hl_field(MR_mktag(0), Var_129, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_129, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "foreign_tag for language other than C");
              Type_212 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[3]));
              {
                Const_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_211, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_211, 1) = ((MR_Box) (Val_21));
                MR_hl_field(MR_mktag(3), Const_211, 2) = ((MR_Box) (Type_212));
              }
              {
                Var_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_214, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), Var_214, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_4));
                MR_hl_field(MR_mktag(0), Var_214, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_214, 3) = ((MR_Box) (ArgVarsWidths_11));
                MR_hl_field(MR_mktag(0), Var_214, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_214, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "constant has args");
              {
                Var_218 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_218, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_218, 1) = ((MR_Box) (Const_211));
              }
              {
                ActiveGroundTerm_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_213, 0) = ((MR_Box) (Var_218));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_213, 1) = ((MR_Box) (Type_212));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_213)), STATE_VARIABLE_ActiveMap_0_77, STATE_VARIABLE_ActiveMap_78);
              *STATE_VARIABLE_StaticCellInfo_76 = STATE_VARIABLE_StaticCellInfo_0_75;
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
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word AllTypedRvals_266;
              MR_Word DataAddr_267;
              MR_Word CellPtrConst_269;
              MR_Word STATE_VARIABLE_ActiveMap_82_270;
              MR_Word Var_271;
              MR_Word ActiveGroundTerm_273;
              MR_Word Rval_274;
              MR_Word Ptag_275 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));

              ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(ArgVarsWidths_11, &AllTypedRvals_266, STATE_VARIABLE_ActiveMap_0_77, &STATE_VARIABLE_ActiveMap_82_270);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_266, &DataAddr_267, STATE_VARIABLE_StaticCellInfo_0_75, STATE_VARIABLE_StaticCellInfo_76);
              {
                Var_271 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_271, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_271, 1) = ((MR_Box) (DataAddr_267));
                MR_hl_field(MR_mktag(3), Var_271, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                CellPtrConst_269 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_269, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_269, 1) = ((MR_Box) (Var_271));
              }
              {
                Rval_274 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_274, 0) = ((MR_Box) (Ptag_275));
                MR_hl_field(MR_mktag(2), Rval_274, 1) = ((MR_Box) (CellPtrConst_269));
              }
              {
                ActiveGroundTerm_273 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_273, 0) = ((MR_Box) (Rval_274));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_273, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_273)), STATE_VARIABLE_ActiveMap_82_270, STATE_VARIABLE_ActiveMap_78);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Ptag_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));

              if ((ArgVarsWidths_11 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "direct_arg_tag arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_278 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 1))));
                MR_Word Var_279 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 0))));

                if ((Var_278 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word ArgRval_42;
                  MR_Word Var_97;
                  MR_Word STATE_VARIABLE_ActiveMap_98_98;
                  MR_Word ActiveGroundTerm_152;
                  MR_Word Rval_153;
                  MR_Word ArgVar_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_279, (MR_Integer) 0))));
                  MR_Box conv0_Var_97;

                  mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_154)), &conv0_Var_97, STATE_VARIABLE_ActiveMap_0_77, &STATE_VARIABLE_ActiveMap_98_98);
                  Var_97 = ((MR_Word) (conv0_Var_97));
                  ArgRval_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_97, (MR_Integer) 0))));
                  {
                    Rval_153 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Rval_153, 0) = ((MR_Box) (Ptag_41));
                    MR_hl_field(MR_mktag(2), Rval_153, 1) = ((MR_Box) (ArgRval_42));
                  }
                  {
                    ActiveGroundTerm_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ActiveGroundTerm_152, 0) = ((MR_Box) (Rval_153));
                    MR_hl_field(MR_mktag(0), ActiveGroundTerm_152, 1) = ((MR_Box) ((MR_Unsigned) 12U));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_152)), STATE_VARIABLE_ActiveMap_98_98, STATE_VARIABLE_ActiveMap_78);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "direct_arg_tag arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_76 = STATE_VARIABLE_StaticCellInfo_0_75;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word LocalSectag_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 2))));
              MR_Unsigned PrimSec_28;
              MR_Word Rval_30;
              MR_Word Var_121;
              MR_Word Var_125;
              MR_Integer Var_126;
              MR_Word ActiveGroundTerm_144;

              {
                Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_6));
                MR_hl_field(MR_mktag(0), Var_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_121, 3) = ((MR_Box) (ArgVarsWidths_11));
                MR_hl_field(MR_mktag(0), Var_121, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_121, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "shared_local_tag_no_args has args");
              PrimSec_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_25, (MR_Integer) 1))));
              Var_126 = mercury__uint__cast_to_int_1_f_0(PrimSec_28);
              {
                Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
              }
              {
                Rval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_30, 1) = ((MR_Box) (Var_125));
              }
              {
                ActiveGroundTerm_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_144, 0) = ((MR_Box) (Rval_30));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_144, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_144)), STATE_VARIABLE_ActiveMap_0_77, STATE_VARIABLE_ActiveMap_78);
              *STATE_VARIABLE_StaticCellInfo_76 = STATE_VARIABLE_StaticCellInfo_0_75;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Rval0_33;
              MR_Word LeftOverArgVarsWidths_34;
              MR_Word Var_108;
              MR_Word Var_112;
              MR_Integer Var_113;
              MR_Word STATE_VARIABLE_ActiveMap_114_114;
              MR_Word Var_115;
              MR_Word ActiveGroundTerm_146;
              MR_Word LocalSectag_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 2))));
              MR_Unsigned PrimSec_149;
              MR_Word Rval_150;

              {
                Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_7));
                MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (ArgVarsWidths_11));
                MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_not_3_p_0(Var_108, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "shared_local_tag_with_args has no args");
              PrimSec_149 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_148, (MR_Integer) 1))));
              Var_113 = mercury__uint__cast_to_int_1_f_0(PrimSec_149);
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
              }
              {
                Rval0_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval0_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval0_33, 1) = ((MR_Box) (Var_112));
              }
              ll_backend__unify_gen_construct__generate_ground_term_args_for_one_word_6_p_0(ArgVarsWidths_11, &LeftOverArgVarsWidths_34, Rval0_33, &Rval_150, STATE_VARIABLE_ActiveMap_0_77, &STATE_VARIABLE_ActiveMap_114_114);
              {
                Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_tag_8_p_0_8));
                MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) (LeftOverArgVarsWidths_34));
                MR_hl_field(MR_mktag(0), Var_115, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_115, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct_tag\'/8", (MR_String) "left over args");
              {
                ActiveGroundTerm_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_146, 0) = ((MR_Box) (Rval_150));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_146, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_146)), STATE_VARIABLE_ActiveMap_114_114, STATE_VARIABLE_ActiveMap_78);
              *STATE_VARIABLE_StaticCellInfo_76 = STATE_VARIABLE_StaticCellInfo_0_75;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word PackedArgTypedRvals_48;
              MR_Word AllTypedRvals_49;
              MR_Word RemoteSectag_50;
              MR_Unsigned SectagUint_51;
              MR_Word StagTypedRval_52;
              MR_Word DataAddr_53;
              MR_Word CellPtrConst_55;
              MR_Word STATE_VARIABLE_ActiveMap_82_82;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Integer Var_85;
              MR_Word Var_89;
              MR_Word ActiveGroundTerm_170;
              MR_Word Rval_172;
              MR_Word Ptag_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));

              ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(ArgVarsWidths_11, &PackedArgTypedRvals_48, STATE_VARIABLE_ActiveMap_0_77, &STATE_VARIABLE_ActiveMap_82_82);
              RemoteSectag_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 2))));
              SectagUint_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_50, (MR_Integer) 0))));
              Var_85 = mercury__uint__cast_to_int_1_f_0(SectagUint_51);
              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
              }
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Var_84));
              }
              {
                StagTypedRval_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StagTypedRval_52, 0) = ((MR_Box) (Var_83));
                MR_hl_field(MR_mktag(0), StagTypedRval_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[3])));
              }
              {
                AllTypedRvals_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AllTypedRvals_49, 0) = ((MR_Box) (StagTypedRval_52));
                MR_hl_field(MR_mktag(1), AllTypedRvals_49, 1) = ((MR_Box) (PackedArgTypedRvals_48));
              }
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_49, &DataAddr_53, STATE_VARIABLE_StaticCellInfo_0_75, STATE_VARIABLE_StaticCellInfo_76);
              {
                Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (DataAddr_53));
                MR_hl_field(MR_mktag(3), Var_89, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                CellPtrConst_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_55, 1) = ((MR_Box) (Var_89));
              }
              {
                Rval_172 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_172, 0) = ((MR_Box) (Ptag_173));
                MR_hl_field(MR_mktag(2), Rval_172, 1) = ((MR_Box) (CellPtrConst_55));
              }
              {
                ActiveGroundTerm_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_170, 0) = ((MR_Box) (Rval_172));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_170, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_170)), STATE_VARIABLE_ActiveMap_82_82, STATE_VARIABLE_ActiveMap_78);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ActiveMap_0_3,
  MR_Word * STATE_VARIABLE_ActiveMap_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ActiveMap_4 = STATE_VARIABLE_ActiveMap_0_3;
    }
    else
    {
      MR_Word ArgVarWidth_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgVarsWidths_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypedRval_10;
      MR_Word TypedRvals_11;
      MR_Word ArgVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarWidth_8, (MR_Integer) 0))));
      MR_Word ArgPosWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarWidth_8, (MR_Integer) 1))));
      MR_Word ArgTypedRval_15;
      MR_Word STATE_VARIABLE_ActiveMap_40_40;
      MR_Box conv0_ArgTypedRval_15;

      mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_13)), &conv0_ArgTypedRval_15, STATE_VARIABLE_ActiveMap_0_3, &STATE_VARIABLE_ActiveMap_40_40);
      ArgTypedRval_15 = ((MR_Word) (conv0_ArgTypedRval_15));
      switch (MR_tag((MR_Word) ArgPosWidth_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_args\'/4", (MR_String) "apw_none_nowhere");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            TypedRval_10 = ArgTypedRval_15;
            ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(ArgVarsWidths_9, &TypedRvals_11, STATE_VARIABLE_ActiveMap_40_40, STATE_VARIABLE_ActiveMap_4);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DoubleWordKind_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_14, (MR_Integer) 2))));
            MR_Word ArgRval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_15, (MR_Integer) 0))));
            MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_15, (MR_Integer) 1))));

            succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 12U));
            if (succeeded)
              switch (DoubleWordKind_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      TypedRval_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (ArgRval_21));
                      MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      TypedRval_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (ArgRval_21));
                      MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[4])));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      TypedRval_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (ArgRval_21));
                      MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[5])));
                    }
                  }
                  break;
              }
            else
              TypedRval_10 = ArgTypedRval_15;
            ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(ArgVarsWidths_9, &TypedRvals_11, STATE_VARIABLE_ActiveMap_40_40, STATE_VARIABLE_ActiveMap_4);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LeftOverArgVarsWidths_28;
                MR_Word WordRval_29;
                MR_Word STATE_VARIABLE_ActiveMap_47_47;
                MR_Word ArgRval_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_15, (MR_Integer) 0))));

                ll_backend__unify_gen_construct__generate_ground_term_args_for_one_word_6_p_0(ArgVarsWidths_9, &LeftOverArgVarsWidths_28, ArgRval_59, &WordRval_29, STATE_VARIABLE_ActiveMap_40_40, &STATE_VARIABLE_ActiveMap_47_47);
                {
                  TypedRval_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (WordRval_29));
                  MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[6])));
                }
                ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(LeftOverArgVarsWidths_28, &TypedRvals_11, STATE_VARIABLE_ActiveMap_47_47, STATE_VARIABLE_ActiveMap_4);
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_args\'/4", (MR_String) "apw_partial_shifted");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_args\'/4", (MR_String) "apw_none_shifted");
                  return;
                }
              }
              break;
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypedRval_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypedRvals_11));
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_args_for_one_word_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word CurRval_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ActiveMap_0_5,
  MR_Word * STATE_VARIABLE_ActiveMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = CurRval_3;
      *STATE_VARIABLE_ActiveMap_6 = STATE_VARIABLE_ActiveMap_0_5;
    }
    else
    {
      MR_Word ArgVarWidth_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgVarsWidths_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgVar_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarWidth_11, (MR_Integer) 0))));
      MR_Word ArgPosWidth_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarWidth_11, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *HeadVar__4_4 = CurRval_3;
            *STATE_VARIABLE_ActiveMap_6 = STATE_VARIABLE_ActiveMap_0_5;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *HeadVar__4_4 = CurRval_3;
            *STATE_VARIABLE_ActiveMap_6 = STATE_VARIABLE_ActiveMap_0_5;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_18, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__2_2 = HeadVar__1_1;
                *HeadVar__4_4 = CurRval_3;
                *STATE_VARIABLE_ActiveMap_6 = STATE_VARIABLE_ActiveMap_0_5;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgShift_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_18, (MR_Integer) 3))));
                MR_Word Fill_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_18, (MR_Integer) 6))));
                MR_Word ArgTypedRval_35;
                MR_Word ArgRval_36;
                MR_Word NextRval_51;
                MR_Word STATE_VARIABLE_ActiveMap_45_52;
                MR_Integer ArgShiftInt_58;
                MR_Word CastArgRval_59;
                MR_Word ShiftedArgRval_60;
                MR_Box conv1_ArgTypedRval_35;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_CurRval_3;
                MR_Word next_value_of_STATE_VARIABLE_ActiveMap_0_5;

                mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_17)), &conv1_ArgTypedRval_35, STATE_VARIABLE_ActiveMap_0_5, &STATE_VARIABLE_ActiveMap_45_52);
                ArgTypedRval_35 = ((MR_Word) (conv1_ArgTypedRval_35));
                ArgRval_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_35, (MR_Integer) 0))));
                ArgShiftInt_58 = (MR_Integer) (ArgShift_31);
                ll_backend__unify_gen_util__cast_away_any_sign_extend_bits_3_p_0(Fill_34, ArgRval_36, &CastArgRval_59);
                succeeded = (ArgShiftInt_58 == (MR_Integer) 0);
                if (succeeded)
                  ShiftedArgRval_60 = CastArgRval_59;
                else
                {
                  MR_Word Var_61;
                  MR_Integer Var_62;

                  succeeded = ((((MR_tag((MR_Word) ArgRval_36)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgRval_36, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgRval_36, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 0))));
                      succeeded = (Var_62 == (MR_Integer) 0);
                    }
                  }
                  if (succeeded)
                    ShiftedArgRval_60 = CastArgRval_59;
                  else
                  {
                    MR_Word Var_65;
                    MR_Word Var_66;

                    {
                      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (ArgShiftInt_58));
                    }
                    {
                      Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Var_66));
                    }
                    {
                      ShiftedArgRval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[11])));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_60, 2) = ((MR_Box) (CastArgRval_59));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_60, 3) = ((MR_Box) (Var_65));
                    }
                  }
                }
                NextRval_51 = ll_backend__unify_gen_util__bitwise_or_two_rvals_2_f_0(CurRval_3, ShiftedArgRval_60);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ArgVarsWidths_12;
                next_value_of_CurRval_3 = NextRval_51;
                next_value_of_STATE_VARIABLE_ActiveMap_0_5 = STATE_VARIABLE_ActiveMap_45_52;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                CurRval_3 = next_value_of_CurRval_3;
                STATE_VARIABLE_ActiveMap_0_5 = next_value_of_STATE_VARIABLE_ActiveMap_0_5;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_ActiveMap_45_45;
                MR_Box conv0__ArgTypedRval_41;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_ActiveMap_0_5;

                mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_17)), &conv0__ArgTypedRval_41, STATE_VARIABLE_ActiveMap_0_5, &STATE_VARIABLE_ActiveMap_45_45);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ArgVarsWidths_12;
                next_value_of_STATE_VARIABLE_ActiveMap_0_5 = STATE_VARIABLE_ActiveMap_45_45;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                STATE_VARIABLE_ActiveMap_0_5 = next_value_of_STATE_VARIABLE_ActiveMap_0_5;
                continue;
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__255__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__194__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__264__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__262__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__132__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__120__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0(
  MR_Word LHSVar_14,
  MR_Word ConsId_15,
  MR_Word RHSVars_16,
  MR_Word ArgModes_17,
  MR_Word HowToConstruct0_18,
  MR_Word TakeAddr_19,
  MR_Word MaybeSize_20,
  MR_Word GoalInfo_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CI_0_117,
  MR_Word * STATE_VARIABLE_CI_118,
  MR_Word STATE_VARIABLE_CLD_0_119,
  MR_Word * STATE_VARIABLE_CLD_120)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_25;
    MR_Word ConsTag_26;
    MR_Word RHSVarsWidths_27;

    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_117, &ModuleInfo_25);
    ConsTag_26 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_25, ConsId_15);
    ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), ModuleInfo_25, ConsId_15, RHSVars_16, &RHSVarsWidths_27);
    switch (MR_tag((MR_Word) ConsTag_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MayUseAtomic0_257;
              MR_Word MayUseAtomic_260;
              MR_Word PackCode_261;
              MR_Word HowToConstruct_262;
              MR_Word CellArgs_263;
              MR_Word Context_264;
              MR_Word ConstructCode_265;
              MR_Word Var_266;
              MR_Word STATE_VARIABLE_CLD_141_267;

              ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_0_117, &MayUseAtomic0_257);
              Var_266 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(RHSVarsWidths_27, ArgModes_17, (MR_Integer) 1, TakeAddr_19, &CellArgs_263, MayUseAtomic0_257, &MayUseAtomic_260, Var_266, &PackCode_261, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CLD_0_119, &STATE_VARIABLE_CLD_141_267);
              ll_backend__unify_gen_construct__pack_how_to_construct_3_p_0(RHSVarsWidths_27, HowToConstruct0_18, &HowToConstruct_262);
              Context_264 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
              ll_backend__unify_gen_construct__construct_cell_12_p_0(LHSVar_14, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), CellArgs_263, HowToConstruct_262, MaybeSize_20, Context_264, MayUseAtomic_260, &ConstructCode_265, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CI_118, STATE_VARIABLE_CLD_141_267, STATE_VARIABLE_CLD_120);
              *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PackCode_261, ConstructCode_265);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ConstRval_55;
              MR_Word Var_158;

              {
                Var_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_1));
                MR_hl_field(MR_mktag(0), Var_158, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_158, 3) = ((MR_Box) (RHSVars_16));
                MR_hl_field(MR_mktag(0), Var_158, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_158, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
              switch (MR_tag((MR_Word) ConsTag_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ConstRval_55 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String String_59 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_26, (MR_Integer) 0))));
                    MR_Word Var_181;

                    {
                      Var_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_181, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                      MR_hl_field(MR_mktag(3), Var_181, 1) = ((MR_Box) (String_59));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_181));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float Float_58 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_26, (MR_Integer) 0)));
                    MR_Word Var_182;

                    {
                      Var_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                      MR_hl_field(MR_mktag(3), Var_182, 1) = MR_box_float(Float_58);
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_182));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IntTag_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word Const_53;
                        MR_Word Var_54;

                        ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_52, &Const_53, &Var_54);
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Const_53));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Lang_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_String Value_57 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Word Var_183;
                        MR_Word Var_187;

                        {
                          Var_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_183, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
                          MR_hl_field(MR_mktag(0), Var_183, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_2));
                          MR_hl_field(MR_mktag(0), Var_183, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), Var_183, 3) = ((MR_Box) (Lang_56));
                          MR_hl_field(MR_mktag(0), Var_183, 4) = ((MR_Box) ((MR_Integer) 0));
                        }
                        mercury__require__expect_3_p_0(Var_183, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "foreign_tag for language other than C");
                        {
                          Var_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                          MR_hl_field(MR_mktag(3), Var_187, 1) = ((MR_Box) (Value_57));
                          MR_hl_field(MR_mktag(3), Var_187, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[3])));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_187));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ModuleName_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_String TypeName_67 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Integer TypeArity_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
                        MR_Word RttiTypeCtor_69;
                        MR_Word DataId_70;
                        MR_Word Var_175;
                        MR_Word Var_177;

                        {
                          RttiTypeCtor_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_69, 0) = ((MR_Box) (ModuleName_66));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_69, 1) = ((MR_Box) (TypeName_67));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_69, 2) = ((MR_Box) (TypeArity_68));
                        }
                        {
                          Var_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (RttiTypeCtor_69));
                          MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                        }
                        {
                          DataId_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), DataId_70, 0) = ((MR_Box) (Var_175));
                        }
                        {
                          Var_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_177, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                          MR_hl_field(MR_mktag(3), Var_177, 1) = ((MR_Box) (DataId_70));
                          MR_hl_field(MR_mktag(3), Var_177, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_177));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ClassId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_String Instance_72 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
                        MR_Word TCName_73;
                        MR_Word Var_171;
                        MR_Word Var_172;
                        MR_Word Var_173;
                        MR_Word ModuleName_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word DataId_194;

                        TCName_73 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_71);
                        {
                          Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (ModuleName_193));
                          MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Instance_72));
                        }
                        {
                          Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (TCName_73));
                          MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_172));
                        }
                        {
                          DataId_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), DataId_194, 0) = ((MR_Box) (Var_171));
                        }
                        {
                          Var_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                          MR_hl_field(MR_mktag(3), Var_173, 1) = ((MR_Box) (DataId_194));
                          MR_hl_field(MR_mktag(3), Var_173, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_173));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer ConstNum_244 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word ConstStructMap_245;
                        MR_Word TypedRval_246;
                        MR_Box conv1_TypedRval_246;

                        ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_117, &ConstStructMap_245);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_245, ConstNum_244, &conv1_TypedRval_246);
                        TypedRval_246 = ((MR_Word) (conv1_TypedRval_246));
                        ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_246, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Integer ConstNum_251 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word ConstStructMap_252;
                        MR_Word TypedRval_253;
                        MR_Box conv2_TypedRval_253;

                        ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_117, &ConstStructMap_252);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_252, ConstNum_251, &conv2_TypedRval_253);
                        TypedRval_253 = ((MR_Word) (conv2_TypedRval_253));
                        ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_253, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Integer ConstNum_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word ConstStructMap_76;
                        MR_Word TypedRval_77;
                        MR_Box conv0_TypedRval_77;

                        ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_117, &ConstStructMap_76);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_76, ConstNum_74, &conv0_TypedRval_77);
                        TypedRval_77 = ((MR_Word) (conv0_TypedRval_77));
                        ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_77, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word PredId_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Integer ProcId_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Word ProcLabel_81;
                        MR_Word Var_169;
                        MR_Word DataId_195;

                        ProcLabel_81 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_25, PredId_79, ProcId_80);
                        {
                          DataId_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), DataId_195, 0) = ((MR_Box) (ProcLabel_81));
                          MR_hl_field(MR_mktag(1), DataId_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                          MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (DataId_195));
                          MR_hl_field(MR_mktag(3), Var_169, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_169));
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word RttiProcLabel_82;
                        MR_Word Origin_83;
                        MR_Word UserOrUCI_86;
                        MR_Word ProcKind_87;
                        MR_Word Var_165;
                        MR_Word Var_166;
                        MR_Word DataId_196;
                        MR_Word PredId_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Integer ProcId_198 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Unsigned packed_args_0;
                        MR_Unsigned packed_args_1;

                        RttiProcLabel_82 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_25, PredId_197, ProcId_198);
                        packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_82, (MR_Integer) 10)));
                        Origin_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_82, (MR_Integer) 11))));
                        packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_82, (MR_Integer) 12)));
                        succeeded = ((MR_tag((MR_Word) Origin_83)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          UserOrUCI_86 = (MR_Integer) 1;
                        }
                        else
                          UserOrUCI_86 = (MR_Integer) 0;
                        {
                          ProcKind_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ProcKind_87, 0) = ((MR_Box) (UserOrUCI_86));
                        }
                        {
                          Var_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_165, 0) = ((MR_Box) (RttiProcLabel_82));
                          MR_hl_field(MR_mktag(0), Var_165, 1) = ((MR_Box) (ProcKind_87));
                        }
                        {
                          DataId_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), DataId_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), DataId_196, 1) = ((MR_Box) (Var_165));
                        }
                        {
                          Var_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                          MR_hl_field(MR_mktag(3), Var_166, 1) = ((MR_Box) (DataId_196));
                          MR_hl_field(MR_mktag(3), Var_166, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_166));
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        MR_Word PredProcId_88;
                        MR_Word Var_163;
                        MR_Word DataId_199;
                        MR_Word PredId_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Integer ProcId_201 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

                        {
                          PredProcId_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), PredProcId_88, 0) = ((MR_Box) (PredId_200));
                          MR_hl_field(MR_mktag(0), PredProcId_88, 1) = ((MR_Box) (ProcId_201));
                        }
                        {
                          DataId_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), DataId_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), DataId_199, 1) = NULL;
                          MR_hl_field(MR_mktag(3), DataId_199, 2) = ((MR_Box) (PredProcId_88));
                        }
                        {
                          Var_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                          MR_hl_field(MR_mktag(3), Var_163, 1) = ((MR_Box) (DataId_199));
                          MR_hl_field(MR_mktag(3), Var_163, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_163));
                        }
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word LocalSectag_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Unsigned PrimSec_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_61, (MR_Integer) 1))));
                        MR_Word Var_179;
                        MR_Integer Var_180;

                        Var_180 = mercury__uint__cast_to_int_1_f_0(PrimSec_64);
                        {
                          Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_179));
                        }
                      }
                      break;
                  }
                  break;
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_55, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CLD_0_119, STATE_VARIABLE_CLD_120);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_118 = STATE_VARIABLE_CI_0_117;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_147;
              MR_Word RHSVar_90;
              MR_Word ArgMode_91;
              MR_Word Var_151;
              MR_Word Var_152;

              {
                Var_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_147, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_147, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_5));
                MR_hl_field(MR_mktag(0), Var_147, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_147, 3) = ((MR_Box) (TakeAddr_19));
                MR_hl_field(MR_mktag(0), Var_147, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_147, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "notag or direct_arg_tag: take_addr");
              succeeded = ((MR_tag((MR_Word) RHSVars_16)) == (MR_Integer) 1);
              if (succeeded)
              {
                RHSVar_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSVars_16, (MR_Integer) 0))));
                Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSVars_16, (MR_Integer) 1))));
                succeeded = (Var_151 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_17)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ArgMode_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_17, (MR_Integer) 0))));
                    Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_17, (MR_Integer) 1))));
                    succeeded = (Var_152 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word Type_92;

                Type_92 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_117, RHSVar_90);
                if ((ConsTag_26 == (MR_Word) ((MR_Unsigned) 8U)))
                {
                  MR_Word FieldAndArgVar_93;
                  MR_Word Var_154;

                  {
                    Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (LHSVar_14));
                  }
                  {
                    FieldAndArgVar_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_93, 0) = ((MR_Box) (Var_154));
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_93, 1) = ((MR_Box) (RHSVar_90));
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_93, 2) = ((MR_Box) (Type_92));
                  }
                  ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_6_p_0(FieldAndArgVar_93, ArgMode_91, Code_22, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CLD_0_119, STATE_VARIABLE_CLD_120);
                }
                else
                {
                  MR_Word Ptag_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));

                  ll_backend__unify_gen_construct__generate_direct_arg_construct_9_p_0(LHSVar_14, RHSVar_90, Ptag_94, ArgMode_91, Type_92, Code_22, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CLD_0_119, STATE_VARIABLE_CLD_120);
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "no_tag or direct_arg_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_CI_118 = STATE_VARIABLE_CI_0_117;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word ConstRval_55;
          MR_Word Var_158;

          {
            Var_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_1));
            MR_hl_field(MR_mktag(0), Var_158, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_158, 3) = ((MR_Box) (RHSVars_16));
            MR_hl_field(MR_mktag(0), Var_158, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_158, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
          switch (MR_tag((MR_Word) ConsTag_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ConstRval_55 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]));
              break;
            case (MR_Integer) 1:
              {
                MR_String String_59 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_26, (MR_Integer) 0))));
                MR_Word Var_181;

                {
                  Var_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_181, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                  MR_hl_field(MR_mktag(3), Var_181, 1) = ((MR_Box) (String_59));
                }
                {
                  ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_181));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Float Float_58 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_26, (MR_Integer) 0)));
                MR_Word Var_182;

                {
                  Var_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                  MR_hl_field(MR_mktag(3), Var_182, 1) = MR_box_float(Float_58);
                }
                {
                  ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_182));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word IntTag_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Word Const_53;
                    MR_Word Var_54;

                    ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_52, &Const_53, &Var_54);
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Const_53));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Lang_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_String Value_57 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                    MR_Word Var_183;
                    MR_Word Var_187;

                    {
                      Var_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_183, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
                      MR_hl_field(MR_mktag(0), Var_183, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_183, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_183, 3) = ((MR_Box) (Lang_56));
                      MR_hl_field(MR_mktag(0), Var_183, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_183, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "foreign_tag for language other than C");
                    {
                      Var_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), Var_187, 1) = ((MR_Box) (Value_57));
                      MR_hl_field(MR_mktag(3), Var_187, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[3])));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_187));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word ModuleName_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_String TypeName_67 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                    MR_Integer TypeArity_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
                    MR_Word RttiTypeCtor_69;
                    MR_Word DataId_70;
                    MR_Word Var_175;
                    MR_Word Var_177;

                    {
                      RttiTypeCtor_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_69, 0) = ((MR_Box) (ModuleName_66));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_69, 1) = ((MR_Box) (TypeName_67));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_69, 2) = ((MR_Box) (TypeArity_68));
                    }
                    {
                      Var_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (RttiTypeCtor_69));
                      MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                    }
                    {
                      DataId_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), DataId_70, 0) = ((MR_Box) (Var_175));
                    }
                    {
                      Var_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_177, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                      MR_hl_field(MR_mktag(3), Var_177, 1) = ((MR_Box) (DataId_70));
                      MR_hl_field(MR_mktag(3), Var_177, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_177));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word ClassId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                    MR_String Instance_72 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
                    MR_Word TCName_73;
                    MR_Word Var_171;
                    MR_Word Var_172;
                    MR_Word Var_173;
                    MR_Word ModuleName_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Word DataId_194;

                    TCName_73 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_71);
                    {
                      Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (ModuleName_193));
                      MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Instance_72));
                    }
                    {
                      Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (TCName_73));
                      MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_172));
                    }
                    {
                      DataId_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), DataId_194, 0) = ((MR_Box) (Var_171));
                    }
                    {
                      Var_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                      MR_hl_field(MR_mktag(3), Var_173, 1) = ((MR_Box) (DataId_194));
                      MR_hl_field(MR_mktag(3), Var_173, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_173));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Integer ConstNum_244 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Word ConstStructMap_245;
                    MR_Word TypedRval_246;
                    MR_Box conv1_TypedRval_246;

                    ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_117, &ConstStructMap_245);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_245, ConstNum_244, &conv1_TypedRval_246);
                    TypedRval_246 = ((MR_Word) (conv1_TypedRval_246));
                    ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_246, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Integer ConstNum_251 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Word ConstStructMap_252;
                    MR_Word TypedRval_253;
                    MR_Box conv2_TypedRval_253;

                    ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_117, &ConstStructMap_252);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_252, ConstNum_251, &conv2_TypedRval_253);
                    TypedRval_253 = ((MR_Word) (conv2_TypedRval_253));
                    ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_253, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Integer ConstNum_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Word ConstStructMap_76;
                    MR_Word TypedRval_77;
                    MR_Box conv0_TypedRval_77;

                    ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_117, &ConstStructMap_76);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_76, ConstNum_74, &conv0_TypedRval_77);
                    TypedRval_77 = ((MR_Word) (conv0_TypedRval_77));
                    ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_77, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word PredId_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Integer ProcId_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                    MR_Word ProcLabel_81;
                    MR_Word Var_169;
                    MR_Word DataId_195;

                    ProcLabel_81 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_25, PredId_79, ProcId_80);
                    {
                      DataId_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), DataId_195, 0) = ((MR_Box) (ProcLabel_81));
                      MR_hl_field(MR_mktag(1), DataId_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                      MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (DataId_195));
                      MR_hl_field(MR_mktag(3), Var_169, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_169));
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word RttiProcLabel_82;
                    MR_Word Origin_83;
                    MR_Word UserOrUCI_86;
                    MR_Word ProcKind_87;
                    MR_Word Var_165;
                    MR_Word Var_166;
                    MR_Word DataId_196;
                    MR_Word PredId_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Integer ProcId_198 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                    MR_Unsigned packed_args_0;
                    MR_Unsigned packed_args_1;

                    RttiProcLabel_82 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_25, PredId_197, ProcId_198);
                    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_82, (MR_Integer) 10)));
                    Origin_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_82, (MR_Integer) 11))));
                    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_82, (MR_Integer) 12)));
                    succeeded = ((MR_tag((MR_Word) Origin_83)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      UserOrUCI_86 = (MR_Integer) 1;
                    }
                    else
                      UserOrUCI_86 = (MR_Integer) 0;
                    {
                      ProcKind_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ProcKind_87, 0) = ((MR_Box) (UserOrUCI_86));
                    }
                    {
                      Var_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_165, 0) = ((MR_Box) (RttiProcLabel_82));
                      MR_hl_field(MR_mktag(0), Var_165, 1) = ((MR_Box) (ProcKind_87));
                    }
                    {
                      DataId_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), DataId_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), DataId_196, 1) = ((MR_Box) (Var_165));
                    }
                    {
                      Var_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                      MR_hl_field(MR_mktag(3), Var_166, 1) = ((MR_Box) (DataId_196));
                      MR_hl_field(MR_mktag(3), Var_166, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_166));
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word PredProcId_88;
                    MR_Word Var_163;
                    MR_Word DataId_199;
                    MR_Word PredId_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Integer ProcId_201 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

                    {
                      PredProcId_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), PredProcId_88, 0) = ((MR_Box) (PredId_200));
                      MR_hl_field(MR_mktag(0), PredProcId_88, 1) = ((MR_Box) (ProcId_201));
                    }
                    {
                      DataId_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), DataId_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), DataId_199, 1) = NULL;
                      MR_hl_field(MR_mktag(3), DataId_199, 2) = ((MR_Box) (PredProcId_88));
                    }
                    {
                      Var_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                      MR_hl_field(MR_mktag(3), Var_163, 1) = ((MR_Box) (DataId_199));
                      MR_hl_field(MR_mktag(3), Var_163, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_163));
                    }
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    MR_Word LocalSectag_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                    MR_Unsigned PrimSec_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_61, (MR_Integer) 1))));
                    MR_Word Var_179;
                    MR_Integer Var_180;

                    Var_180 = mercury__uint__cast_to_int_1_f_0(PrimSec_64);
                    {
                      Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_179));
                    }
                  }
                  break;
              }
              break;
          }
          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_55, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CLD_0_119, STATE_VARIABLE_CLD_120);
          *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CI_118 = STATE_VARIABLE_CI_0_117;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 13:
            {
              MR_Word ConstRval_55;
              MR_Word Var_158;

              {
                Var_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_1));
                MR_hl_field(MR_mktag(0), Var_158, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_158, 3) = ((MR_Box) (RHSVars_16));
                MR_hl_field(MR_mktag(0), Var_158, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_158, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
              switch (MR_tag((MR_Word) ConsTag_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ConstRval_55 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String String_59 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_26, (MR_Integer) 0))));
                    MR_Word Var_181;

                    {
                      Var_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_181, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                      MR_hl_field(MR_mktag(3), Var_181, 1) = ((MR_Box) (String_59));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_181));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float Float_58 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_26, (MR_Integer) 0)));
                    MR_Word Var_182;

                    {
                      Var_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                      MR_hl_field(MR_mktag(3), Var_182, 1) = MR_box_float(Float_58);
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_182));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IntTag_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word Const_53;
                        MR_Word Var_54;

                        ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_52, &Const_53, &Var_54);
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Const_53));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Lang_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_String Value_57 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Word Var_183;
                        MR_Word Var_187;

                        {
                          Var_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_183, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
                          MR_hl_field(MR_mktag(0), Var_183, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_2));
                          MR_hl_field(MR_mktag(0), Var_183, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), Var_183, 3) = ((MR_Box) (Lang_56));
                          MR_hl_field(MR_mktag(0), Var_183, 4) = ((MR_Box) ((MR_Integer) 0));
                        }
                        mercury__require__expect_3_p_0(Var_183, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "foreign_tag for language other than C");
                        {
                          Var_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                          MR_hl_field(MR_mktag(3), Var_187, 1) = ((MR_Box) (Value_57));
                          MR_hl_field(MR_mktag(3), Var_187, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[3])));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_187));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ModuleName_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_String TypeName_67 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Integer TypeArity_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
                        MR_Word RttiTypeCtor_69;
                        MR_Word DataId_70;
                        MR_Word Var_175;
                        MR_Word Var_177;

                        {
                          RttiTypeCtor_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_69, 0) = ((MR_Box) (ModuleName_66));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_69, 1) = ((MR_Box) (TypeName_67));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_69, 2) = ((MR_Box) (TypeArity_68));
                        }
                        {
                          Var_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (RttiTypeCtor_69));
                          MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                        }
                        {
                          DataId_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), DataId_70, 0) = ((MR_Box) (Var_175));
                        }
                        {
                          Var_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_177, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                          MR_hl_field(MR_mktag(3), Var_177, 1) = ((MR_Box) (DataId_70));
                          MR_hl_field(MR_mktag(3), Var_177, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_177));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ClassId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_String Instance_72 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
                        MR_Word TCName_73;
                        MR_Word Var_171;
                        MR_Word Var_172;
                        MR_Word Var_173;
                        MR_Word ModuleName_193 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word DataId_194;

                        TCName_73 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_71);
                        {
                          Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (ModuleName_193));
                          MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Instance_72));
                        }
                        {
                          Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (TCName_73));
                          MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_172));
                        }
                        {
                          DataId_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), DataId_194, 0) = ((MR_Box) (Var_171));
                        }
                        {
                          Var_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                          MR_hl_field(MR_mktag(3), Var_173, 1) = ((MR_Box) (DataId_194));
                          MR_hl_field(MR_mktag(3), Var_173, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_173));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer ConstNum_244 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word ConstStructMap_245;
                        MR_Word TypedRval_246;
                        MR_Box conv1_TypedRval_246;

                        ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_117, &ConstStructMap_245);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_245, ConstNum_244, &conv1_TypedRval_246);
                        TypedRval_246 = ((MR_Word) (conv1_TypedRval_246));
                        ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_246, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Integer ConstNum_251 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word ConstStructMap_252;
                        MR_Word TypedRval_253;
                        MR_Box conv2_TypedRval_253;

                        ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_117, &ConstStructMap_252);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_252, ConstNum_251, &conv2_TypedRval_253);
                        TypedRval_253 = ((MR_Word) (conv2_TypedRval_253));
                        ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_253, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Integer ConstNum_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word ConstStructMap_76;
                        MR_Word TypedRval_77;
                        MR_Box conv0_TypedRval_77;

                        ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_117, &ConstStructMap_76);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_76, ConstNum_74, &conv0_TypedRval_77);
                        TypedRval_77 = ((MR_Word) (conv0_TypedRval_77));
                        ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_77, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word PredId_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Integer ProcId_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Word ProcLabel_81;
                        MR_Word Var_169;
                        MR_Word DataId_195;

                        ProcLabel_81 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_25, PredId_79, ProcId_80);
                        {
                          DataId_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), DataId_195, 0) = ((MR_Box) (ProcLabel_81));
                          MR_hl_field(MR_mktag(1), DataId_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                          MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (DataId_195));
                          MR_hl_field(MR_mktag(3), Var_169, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_169));
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word RttiProcLabel_82;
                        MR_Word Origin_83;
                        MR_Word UserOrUCI_86;
                        MR_Word ProcKind_87;
                        MR_Word Var_165;
                        MR_Word Var_166;
                        MR_Word DataId_196;
                        MR_Word PredId_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Integer ProcId_198 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Unsigned packed_args_0;
                        MR_Unsigned packed_args_1;

                        RttiProcLabel_82 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_25, PredId_197, ProcId_198);
                        packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_82, (MR_Integer) 10)));
                        Origin_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_82, (MR_Integer) 11))));
                        packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_82, (MR_Integer) 12)));
                        succeeded = ((MR_tag((MR_Word) Origin_83)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          UserOrUCI_86 = (MR_Integer) 1;
                        }
                        else
                          UserOrUCI_86 = (MR_Integer) 0;
                        {
                          ProcKind_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ProcKind_87, 0) = ((MR_Box) (UserOrUCI_86));
                        }
                        {
                          Var_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_165, 0) = ((MR_Box) (RttiProcLabel_82));
                          MR_hl_field(MR_mktag(0), Var_165, 1) = ((MR_Box) (ProcKind_87));
                        }
                        {
                          DataId_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), DataId_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), DataId_196, 1) = ((MR_Box) (Var_165));
                        }
                        {
                          Var_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                          MR_hl_field(MR_mktag(3), Var_166, 1) = ((MR_Box) (DataId_196));
                          MR_hl_field(MR_mktag(3), Var_166, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_166));
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        MR_Word PredProcId_88;
                        MR_Word Var_163;
                        MR_Word DataId_199;
                        MR_Word PredId_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Integer ProcId_201 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

                        {
                          PredProcId_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), PredProcId_88, 0) = ((MR_Box) (PredId_200));
                          MR_hl_field(MR_mktag(0), PredProcId_88, 1) = ((MR_Box) (ProcId_201));
                        }
                        {
                          DataId_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), DataId_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), DataId_199, 1) = NULL;
                          MR_hl_field(MR_mktag(3), DataId_199, 2) = ((MR_Box) (PredProcId_88));
                        }
                        {
                          Var_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                          MR_hl_field(MR_mktag(3), Var_163, 1) = ((MR_Box) (DataId_199));
                          MR_hl_field(MR_mktag(3), Var_163, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_163));
                        }
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word LocalSectag_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Unsigned PrimSec_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_61, (MR_Integer) 1))));
                        MR_Word Var_179;
                        MR_Integer Var_180;

                        Var_180 = mercury__uint__cast_to_int_1_f_0(PrimSec_64);
                        {
                          Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_179));
                        }
                      }
                      break;
                  }
                  break;
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_55, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CLD_0_119, STATE_VARIABLE_CLD_120);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_118 = STATE_VARIABLE_CI_0_117;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_121;
              MR_Word Var_125;
              MR_Word PredId_214 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Integer ProcId_215 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

              {
                Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_3));
                MR_hl_field(MR_mktag(0), Var_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_121, 3) = ((MR_Box) (TakeAddr_19));
                MR_hl_field(MR_mktag(0), Var_121, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_121, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "closure_tag has take_addr");
              {
                Var_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[3]));
                MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_4));
                MR_hl_field(MR_mktag(0), Var_125, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_125, 3) = ((MR_Box) (MaybeSize_20));
                MR_hl_field(MR_mktag(0), Var_125, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_125, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "closure_tag has size");
              ll_backend__closure_gen__construct_closure_11_p_0(PredId_214, ProcId_215, LHSVar_14, RHSVars_16, GoalInfo_21, Code_22, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CI_118, STATE_VARIABLE_CLD_0_119, STATE_VARIABLE_CLD_120);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word MayUseAtomic0_270;
              MR_Word MayUseAtomic_273;
              MR_Word PackCode_274;
              MR_Word HowToConstruct_275;
              MR_Word CellArgs_276;
              MR_Word Context_277;
              MR_Word ConstructCode_278;
              MR_Word Var_279;
              MR_Word STATE_VARIABLE_CLD_141_280;
              MR_Word Ptag_281 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));

              ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_0_117, &MayUseAtomic0_270);
              Var_279 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(RHSVarsWidths_27, ArgModes_17, (MR_Integer) 1, TakeAddr_19, &CellArgs_276, MayUseAtomic0_270, &MayUseAtomic_273, Var_279, &PackCode_274, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CLD_0_119, &STATE_VARIABLE_CLD_141_280);
              ll_backend__unify_gen_construct__pack_how_to_construct_3_p_0(RHSVarsWidths_27, HowToConstruct0_18, &HowToConstruct_275);
              Context_277 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
              ll_backend__unify_gen_construct__construct_cell_12_p_0(LHSVar_14, Ptag_281, CellArgs_276, HowToConstruct_275, MaybeSize_20, Context_277, MayUseAtomic_273, &ConstructCode_278, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CI_118, STATE_VARIABLE_CLD_141_280, STATE_VARIABLE_CLD_120);
              *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PackCode_274, ConstructCode_278);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_147;
              MR_Word RHSVar_90;
              MR_Word ArgMode_91;
              MR_Word Var_151;
              MR_Word Var_152;

              {
                Var_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_147, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_147, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_5));
                MR_hl_field(MR_mktag(0), Var_147, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_147, 3) = ((MR_Box) (TakeAddr_19));
                MR_hl_field(MR_mktag(0), Var_147, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_147, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "notag or direct_arg_tag: take_addr");
              succeeded = ((MR_tag((MR_Word) RHSVars_16)) == (MR_Integer) 1);
              if (succeeded)
              {
                RHSVar_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSVars_16, (MR_Integer) 0))));
                Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSVars_16, (MR_Integer) 1))));
                succeeded = (Var_151 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_17)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ArgMode_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_17, (MR_Integer) 0))));
                    Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_17, (MR_Integer) 1))));
                    succeeded = (Var_152 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word Type_92;

                Type_92 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_117, RHSVar_90);
                if ((ConsTag_26 == (MR_Word) ((MR_Unsigned) 8U)))
                {
                  MR_Word FieldAndArgVar_93;
                  MR_Word Var_154;

                  {
                    Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (LHSVar_14));
                  }
                  {
                    FieldAndArgVar_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_93, 0) = ((MR_Box) (Var_154));
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_93, 1) = ((MR_Box) (RHSVar_90));
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_93, 2) = ((MR_Box) (Type_92));
                  }
                  ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_6_p_0(FieldAndArgVar_93, ArgMode_91, Code_22, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CLD_0_119, STATE_VARIABLE_CLD_120);
                }
                else
                {
                  MR_Word Ptag_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));

                  ll_backend__unify_gen_construct__generate_direct_arg_construct_9_p_0(LHSVar_14, RHSVar_90, Ptag_94, ArgMode_91, Type_92, Code_22, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CLD_0_119, STATE_VARIABLE_CLD_120);
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "no_tag or direct_arg_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_CI_118 = STATE_VARIABLE_CI_0_117;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word RevToOrRvals0_112;
              MR_Word RevToOrRvals_113;
              MR_Word ToOrRvals_114;
              MR_Word PackedRval_115;
              MR_Word Var_131;
              MR_Word Var_132;
              MR_Word Var_134;
              MR_Word LocalSectag_212 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
              MR_Unsigned PrimSec_213 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_212, (MR_Integer) 1))));

              {
                Var_132 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_132, 0) = ((MR_Box) (PrimSec_213));
              }
              {
                Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_131, 1) = ((MR_Box) (Var_132));
              }
              {
                RevToOrRvals0_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevToOrRvals0_112, 0) = ((MR_Box) (Var_131));
                MR_hl_field(MR_mktag(1), RevToOrRvals0_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              ll_backend__unify_gen_construct__generate_and_pack_tagword_5_p_0(RHSVarsWidths_27, ArgModes_17, RevToOrRvals0_112, &RevToOrRvals_113, STATE_VARIABLE_CI_0_117);
              {
                Var_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_6));
                MR_hl_field(MR_mktag(0), Var_134, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_134, 3) = ((MR_Box) (TakeAddr_19));
                MR_hl_field(MR_mktag(0), Var_134, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_134, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "shared_local_tag_with_args, TakeAddr != []");
              mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_113, &ToOrRvals_114);
              PackedRval_115 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_114);
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(LHSVar_14, PackedRval_115, Code_22, STATE_VARIABLE_CLD_0_119, STATE_VARIABLE_CLD_120);
              *STATE_VARIABLE_CI_118 = STATE_VARIABLE_CI_0_117;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word MayUseAtomic0_96;
              MR_Word CellArgs0_98;
              MR_Word MayUseAtomic_99;
              MR_Word PackCode_100;
              MR_Word HowToConstruct_101;
              MR_Word CellArgs_102;
              MR_Word RemoteSectag_103;
              MR_Unsigned SecTagUint_104;
              MR_Integer Sectag_106;
              MR_Word TagArg_107;
              MR_Word Context_108;
              MR_Word ConstructCode_109;
              MR_Word Var_140;
              MR_Word STATE_VARIABLE_CLD_141_141;
              MR_Word Var_142;
              MR_Word Var_143;
              MR_Word Ptag_209 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));

              ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_0_117, &MayUseAtomic0_96);
              Var_140 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(RHSVarsWidths_27, ArgModes_17, (MR_Integer) 1, TakeAddr_19, &CellArgs0_98, MayUseAtomic0_96, &MayUseAtomic_99, Var_140, &PackCode_100, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CLD_0_119, &STATE_VARIABLE_CLD_141_141);
              ll_backend__unify_gen_construct__pack_how_to_construct_3_p_0(RHSVarsWidths_27, HowToConstruct0_18, &HowToConstruct_101);
              RemoteSectag_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
              SecTagUint_104 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_103, (MR_Integer) 0))));
              Sectag_106 = mercury__uint__cast_to_int_1_f_0(SecTagUint_104);
              {
                Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (Sectag_106));
              }
              {
                Var_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_142, 1) = ((MR_Box) (Var_143));
              }
              {
                TagArg_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), TagArg_107, 0) = ((MR_Box) (Var_142));
                MR_hl_field(MR_mktag(1), TagArg_107, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                CellArgs_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CellArgs_102, 0) = ((MR_Box) (TagArg_107));
                MR_hl_field(MR_mktag(1), CellArgs_102, 1) = ((MR_Box) (CellArgs0_98));
              }
              Context_108 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
              ll_backend__unify_gen_construct__construct_cell_12_p_0(LHSVar_14, Ptag_209, CellArgs_102, HowToConstruct_101, MaybeSize_20, Context_108, MayUseAtomic_99, &ConstructCode_109, STATE_VARIABLE_CI_0_117, STATE_VARIABLE_CI_118, STATE_VARIABLE_CLD_141_141, STATE_VARIABLE_CLD_120);
              *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PackCode_100, ConstructCode_109);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__pack_how_to_construct_3_p_0(
  MR_Word ArgVarsWidths_4,
  MR_Word STATE_VARIABLE_HowToConstruct_0_13,
  MR_Word * STATE_VARIABLE_HowToConstruct_14)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_HowToConstruct_0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(STATE_VARIABLE_HowToConstruct_0_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_HowToConstruct_14 = STATE_VARIABLE_HowToConstruct_0_13;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_HowToConstruct_14 = STATE_VARIABLE_HowToConstruct_0_13;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CellToReuse0_7 = (MR_Word) (MR_body((MR_Word) (STATE_VARIABLE_HowToConstruct_0_13), (MR_Integer) 1));
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse0_7, (MR_Integer) 0))));
        MR_Word ConsIds_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse0_7, (MR_Integer) 1))));
        MR_Word NeedsUpdates0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse0_7, (MR_Integer) 2))));
        MR_Word NeedsUpdates_11;
        MR_Word CellToReuse_12;

        ll_backend__unify_gen_construct__needs_update_args_to_words_3_p_0(ArgVarsWidths_4, NeedsUpdates0_10, &NeedsUpdates_11);
        {
          CellToReuse_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CellToReuse_12, 0) = ((MR_Box) (Var_8));
          MR_hl_field(MR_mktag(0), CellToReuse_12, 1) = ((MR_Box) (ConsIds_9));
          MR_hl_field(MR_mktag(0), CellToReuse_12, 2) = ((MR_Box) (NeedsUpdates_11));
        }
        *STATE_VARIABLE_HowToConstruct_14 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (CellToReuse_12)));
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_HowToConstruct_14 = STATE_VARIABLE_HowToConstruct_0_13;
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__needs_update_args_to_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen_construct", (MR_String) "predicate \140ll_backend.unify_gen_construct.needs_update_args_to_words\'/3", (MR_String) "mismatched lists");
          return;
        }
      }
    else
    {
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen_construct", (MR_String) "predicate \140ll_backend.unify_gen_construct.needs_update_args_to_words\'/3", (MR_String) "mismatched lists");
          return;
        }
      }
      else
      {
        MR_Word ArgNU_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgNUs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word ArgPosWidth_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) ArgPosWidth_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_49;
              MR_Word next_value_of_HeadVar__2_2 = ArgNUs_18;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word TailWordNUs_27;

              ll_backend__unify_gen_construct__needs_update_args_to_words_3_p_0(Var_49, ArgNUs_18, &TailWordNUs_27);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgNU_17));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailWordNUs_27));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_21, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word WordNU_33;
                  MR_Word LaterWordVarsWidths_34;
                  MR_Word LaterWordArgNUs_35;
                  MR_Word TailWordNUs_48;

                  ll_backend__unify_gen_construct__does_any_arg_in_word_need_update_6_p_0(Var_49, ArgNUs_18, ArgNU_17, &WordNU_33, &LaterWordVarsWidths_34, &LaterWordArgNUs_35);
                  ll_backend__unify_gen_construct__needs_update_args_to_words_3_p_0(LaterWordVarsWidths_34, LaterWordArgNUs_35, &TailWordNUs_48);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WordNU_33));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailWordNUs_48));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.needs_update_args_to_words\'/3", (MR_String) "apw_partial_shifted");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.needs_update_args_to_words\'/3", (MR_String) "none_shifted");
                    return;
                  }
                }
                break;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__does_any_arg_in_word_need_update_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NU_0_3,
  MR_Word * STATE_VARIABLE_NU_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_NU_4 = STATE_VARIABLE_NU_0_3;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen_construct", (MR_String) "predicate \140ll_backend.unify_gen_construct.does_any_arg_in_word_need_update\'/6", (MR_String) "mismatched lists");
          return;
        }
      }
    else
    {
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen_construct", (MR_String) "predicate \140ll_backend.unify_gen_construct.does_any_arg_in_word_need_update\'/6", (MR_String) "mismatched lists");
          return;
        }
      }
      else
      {
        MR_Word ArgNU_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgNUs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word ArgPosWidth_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) ArgPosWidth_38)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__5_5 = HeadVar__1_1;
              *HeadVar__6_6 = HeadVar__2_2;
              *STATE_VARIABLE_NU_4 = STATE_VARIABLE_NU_0_3;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *HeadVar__5_5 = HeadVar__1_1;
              *HeadVar__6_6 = HeadVar__2_2;
              *STATE_VARIABLE_NU_4 = STATE_VARIABLE_NU_0_3;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_38, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__5_5 = HeadVar__1_1;
                  *HeadVar__6_6 = HeadVar__2_2;
                  *STATE_VARIABLE_NU_4 = STATE_VARIABLE_NU_0_3;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word STATE_VARIABLE_NU_59_59;
                  MR_Word next_value_of_HeadVar__1_1;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Word next_value_of_STATE_VARIABLE_NU_0_3;

                  switch (ArgNU_32) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      STATE_VARIABLE_NU_59_59 = STATE_VARIABLE_NU_0_3;
                      break;
                    case (MR_Integer) 0:
                      STATE_VARIABLE_NU_59_59 = (MR_Integer) 0;
                      break;
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Var_61;
                  next_value_of_HeadVar__2_2 = ArgNUs_33;
                  next_value_of_STATE_VARIABLE_NU_0_3 = STATE_VARIABLE_NU_59_59;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_NU_0_3 = next_value_of_STATE_VARIABLE_NU_0_3;
                  continue;
                }
                break;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_direct_arg_construct_9_p_0(
  MR_Word Var_10,
  MR_Word Arg_11,
  MR_Word Ptag_12,
  MR_Word ArgMode_13,
  MR_Word Type_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21)
{
  {
    MR_Word ModuleInfo_18;
    MR_Word Dir_19;

    ll_backend__code_info__get_module_info_2_p_0(CI_16, &ModuleInfo_18);
    ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_18, ArgMode_13, Type_14, &Dir_19);
    switch (Dir_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_24;
          MR_Word Var_26;

          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Arg_11));
          }
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (Ptag_12));
            MR_hl_field(MR_mktag(2), Var_24, 1) = ((MR_Box) (Var_26));
          }
          ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(Var_10, Var_24, Code_15, STATE_VARIABLE_CLD_0_20, STATE_VARIABLE_CLD_21);
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_direct_arg_construct\'/9", (MR_String) "assign right in construction");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_22;

          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Ptag_12));
          }
          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(Var_10, Var_22, CI_16, STATE_VARIABLE_CLD_0_20, STATE_VARIABLE_CLD_21);
          *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__construct_cell_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_NextOffset_8;
    MR_Word conv0_STATE_VARIABLE_RevFieldAddrs_18;

    ll_backend__unify_gen_construct__generate_field_addr_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_NextOffset_8, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_RevFieldAddrs_18);
    *wrapper_arg_3 = ((MR_Box) (conv1_NextOffset_8));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_RevFieldAddrs_18));
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__construct_cell_12_p_0(
  MR_Word Var_13,
  MR_Word Ptag_14,
  MR_Word CellArgs_15,
  MR_Word HowToConstruct_16,
  MR_Word MaybeSize_17,
  MR_Word Context_18,
  MR_Word MayUseAtomic_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35,
  MR_Word STATE_VARIABLE_CLD_0_36,
  MR_Word * STATE_VARIABLE_CLD_37)
{
  {
    MR_bool succeeded;
    MR_Word VarType_23;
    MR_String VarTypeMsg_24;
    MR_Word GCMethod_25;
    MR_Word ReserveWordAtStart_26;
    MR_Integer Size_27;
    MR_Word MaybeAllocId_28;
    MR_Word CellCode_29;
    MR_Word FieldAddrs_30;
    MR_Word STATE_VARIABLE_CI_38_38;
    MR_Word STATE_VARIABLE_CLD_40_40;
    MR_Word TypeCtor_45;
    MR_Word TypeSym_46;
    MR_Integer TypeArity_47;
    MR_String TypeSymStr_48;
    MR_String TypeArityStr_49;
    MR_String Var_50;
    MR_Word RevFieldAddrs_55;
    MR_Box conv3_Var_54;
    MR_Box conv2_RevFieldAddrs_55;

    VarType_23 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_34, Var_13);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_23, &TypeCtor_45);
    TypeSym_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_45, (MR_Integer) 0))));
    TypeArity_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_45, (MR_Integer) 1))));
    TypeSymStr_48 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeSym_46);
    mercury__string__int_to_string_2_p_0(TypeArity_47, &TypeArityStr_49);
    Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "/", TypeArityStr_49);
    VarTypeMsg_24 = mercury__string__f_43_43_2_f_0(TypeSymStr_48, Var_50);
    ll_backend__code_info__get_gc_method_2_p_0(STATE_VARIABLE_CI_0_34, &GCMethod_25);
    succeeded = (GCMethod_25 == (MR_Integer) 5);
    if (succeeded)
      succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(VarType_23);
    if (succeeded)
      ReserveWordAtStart_26 = (MR_Integer) 1;
    else
      ReserveWordAtStart_26 = (MR_Integer) 0;
    Size_27 = ll_backend__code_util__size_of_cell_args_1_f_0(CellArgs_15);
    ll_backend__code_info__maybe_add_alloc_site_info_6_p_0(Context_18, VarTypeMsg_24, Size_27, &MaybeAllocId_28, STATE_VARIABLE_CI_0_34, &STATE_VARIABLE_CI_38_38);
    ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(Var_13, ReserveWordAtStart_26, Ptag_14, CellArgs_15, HowToConstruct_16, MaybeSize_17, MaybeAllocId_28, MayUseAtomic_19, &CellCode_29, STATE_VARIABLE_CI_38_38, STATE_VARIABLE_CI_35, STATE_VARIABLE_CLD_0_36, &STATE_VARIABLE_CLD_40_40);
    mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[4]), (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_2[3]), CellArgs_15, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_54, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevFieldAddrs_55);
    RevFieldAddrs_55 = ((MR_Word) (conv2_RevFieldAddrs_55));
    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_field_addr_0), RevFieldAddrs_55, &FieldAddrs_30);
    if ((FieldAddrs_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Code_20 = CellCode_29;
      *STATE_VARIABLE_CLD_37 = STATE_VARIABLE_CLD_40_40;
    }
    else
    {
      MR_Word FieldCode_33;

      ll_backend__unify_gen_construct__generate_field_take_address_assigns_6_p_0(FieldAddrs_30, Var_13, Ptag_14, &FieldCode_33, STATE_VARIABLE_CLD_40_40, STATE_VARIABLE_CLD_37);
      *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CellCode_29, FieldCode_33);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_field_take_address_assigns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellVar_2,
  MR_Word CellPtag_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_6 = STATE_VARIABLE_CLD_0_5;
  }
  else
  {
    MR_Word FieldAddr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word FieldAddrs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ThisCode_16;
    MR_Word RestCode_17;
    MR_Integer FieldNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FieldAddr_12, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldAddr_12, (MR_Integer) 1))));
    MR_Word FieldNumRval_21;
    MR_Word Addr_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_CLD_29_29;

    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (FieldNum_19));
    }
    {
      FieldNumRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FieldNumRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), FieldNumRval_21, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (CellVar_2));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (CellPtag_3));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(2), Var_26, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(2), Var_26, 2) = ((MR_Box) (FieldNumRval_21));
    }
    {
      Addr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Addr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Addr_22, 1) = ((MR_Box) (Var_26));
    }
    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(Var_20, Addr_22, &ThisCode_16, STATE_VARIABLE_CLD_0_5, &STATE_VARIABLE_CLD_29_29);
    ll_backend__unify_gen_construct__generate_field_take_address_assigns_6_p_0(FieldAddrs_13, CellVar_2, CellPtag_3, &RestCode_17, STATE_VARIABLE_CLD_29_29, STATE_VARIABLE_CLD_6);
    *HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCode_16, RestCode_17);
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_tagword_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevToOrRvals_4,
  MR_Word CI_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_RevToOrRvals_4 = STATE_VARIABLE_RevToOrRvals_0_3;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "length misnatch");
          return;
        }
      }
    else
    {
      MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "length misnatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgModes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 0))));
        MR_Word ArgPosWidth_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_RevToOrRvals_67_67;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_RevToOrRvals_0_3;

        switch (MR_tag((MR_Word) ArgPosWidth_33)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_33, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Shift_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_33, (MR_Integer) 3))));
                  MR_Word Fill_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_33, (MR_Integer) 6))));
                  MR_Word RHSInsts_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_28, (MR_Integer) 1))));
                  MR_Word ModuleInfo_52;
                  MR_Word VarTypes_53;
                  MR_Word Type_54;
                  MR_Word RHSTopFunctorMode_55;
                  MR_Word ArgRval_57;
                  MR_Word ShiftedArgRval_58;

                  ll_backend__code_info__get_module_info_2_p_0(CI_5, &ModuleInfo_52);
                  ll_backend__code_info__get_vartypes_2_p_0(CI_5, &VarTypes_53);
                  hlds__vartypes__lookup_var_type_3_p_0(VarTypes_53, Var_32, &Type_54);
                  check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_52, RHSInsts_51, Type_54, &RHSTopFunctorMode_55);
                  switch (RHSTopFunctorMode_55) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IsDummy_56;

                        IsDummy_56 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(CI_5, Var_32);
                        switch (IsDummy_56) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ArgRval_57 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]));
                            break;
                          case (MR_Integer) 1:
                            {
                              ArgRval_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ArgRval_57, 0) = ((MR_Box) (Var_32));
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      ArgRval_57 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]));
                      break;
                  }
                  ShiftedArgRval_58 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(ArgRval_57, Shift_46, Fill_49);
                  {
                    STATE_VARIABLE_RevToOrRvals_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevToOrRvals_67_67, 0) = ((MR_Box) (ShiftedArgRval_58));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevToOrRvals_67_67, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_3));
                  }
                }
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_RevToOrRvals_67_67 = STATE_VARIABLE_RevToOrRvals_0_3;
                break;
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_71;
        next_value_of_HeadVar__2_2 = ArgModes_29;
        next_value_of_STATE_VARIABLE_RevToOrRvals_0_3 = STATE_VARIABLE_RevToOrRvals_67_67;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_RevToOrRvals_0_3 = next_value_of_STATE_VARIABLE_RevToOrRvals_0_3;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_and_pack_construct_args__284__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CurArgNum_0_3,
  MR_Word STATE_VARIABLE_TakeAddr_0_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_6,
  MR_Word * STATE_VARIABLE_MayUseAtomic_7,
  MR_Word STATE_VARIABLE_Code_0_8,
  MR_Word * STATE_VARIABLE_Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_26;

        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_1));
          MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_4));
          MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "TakeAddr != [] at end");
        *STATE_VARIABLE_CLD_12 = STATE_VARIABLE_CLD_0_11;
        *STATE_VARIABLE_Code_9 = STATE_VARIABLE_Code_0_8;
        *STATE_VARIABLE_MayUseAtomic_7 = STATE_VARIABLE_MayUseAtomic_0_6;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgModes_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_129, (MR_Integer) 0))));
        MR_Word ArgPosWidth_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_129, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) ArgPosWidth_76)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_127;

              succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_4)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_4, (MR_Integer) 0))));
                succeeded = (STATE_VARIABLE_CurArgNum_0_3 == Var_127);
              }
              if (succeeded)
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "taking address of dummy");
                  return;
                }
              }
              else
              {
                MR_Integer STATE_VARIABLE_CurArgNum_115_123 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurArgNum_0_3 + (MR_Unsigned) (MR_Integer) 1);
                MR_Word next_value_of_HeadVar__1_1 = Var_128;
                MR_Word next_value_of_HeadVar__2_2 = ArgModes_67;
                MR_Integer next_value_of_STATE_VARIABLE_CurArgNum_0_3 = STATE_VARIABLE_CurArgNum_115_123;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                STATE_VARIABLE_CurArgNum_0_3 = next_value_of_STATE_VARIABLE_CurArgNum_0_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word LeftOverVarsWidths_95;
              MR_Word LeftOverArgModes_96;
              MR_Word HeadCellArg_97;
              MR_Word TailCellArgs_98;
              MR_Integer STATE_VARIABLE_CurArgNum_115_115;
              MR_Word STATE_VARIABLE_TakeAddr_116_116;
              MR_Word STATE_VARIABLE_MayUseAtomic_117_117;
              MR_Word STATE_VARIABLE_Code_118_118;
              MR_Word STATE_VARIABLE_CLD_119_119;

              ll_backend__unify_gen_construct__generate_and_pack_construct_word_19_p_0(Var_75, ArgPosWidth_76, Var_128, ArgMode_66, ArgModes_67, &LeftOverVarsWidths_95, &LeftOverArgModes_96, STATE_VARIABLE_CurArgNum_0_3, &STATE_VARIABLE_CurArgNum_115_115, STATE_VARIABLE_TakeAddr_0_4, &STATE_VARIABLE_TakeAddr_116_116, &HeadCellArg_97, STATE_VARIABLE_MayUseAtomic_0_6, &STATE_VARIABLE_MayUseAtomic_117_117, STATE_VARIABLE_Code_0_8, &STATE_VARIABLE_Code_118_118, CI_10, STATE_VARIABLE_CLD_0_11, &STATE_VARIABLE_CLD_119_119);
              ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(LeftOverVarsWidths_95, LeftOverArgModes_96, STATE_VARIABLE_CurArgNum_115_115, STATE_VARIABLE_TakeAddr_116_116, &TailCellArgs_98, STATE_VARIABLE_MayUseAtomic_117_117, STATE_VARIABLE_MayUseAtomic_7, STATE_VARIABLE_Code_118_118, STATE_VARIABLE_Code_9, CI_10, STATE_VARIABLE_CLD_119_119, STATE_VARIABLE_CLD_12);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadCellArg_97));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCellArgs_98));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word LeftOverVarsWidths_95;
              MR_Word LeftOverArgModes_96;
              MR_Word HeadCellArg_97;
              MR_Word TailCellArgs_98;
              MR_Integer STATE_VARIABLE_CurArgNum_115_115;
              MR_Word STATE_VARIABLE_TakeAddr_116_116;
              MR_Word STATE_VARIABLE_MayUseAtomic_117_117;
              MR_Word STATE_VARIABLE_Code_118_118;
              MR_Word STATE_VARIABLE_CLD_119_119;

              ll_backend__unify_gen_construct__generate_and_pack_construct_word_19_p_0(Var_75, ArgPosWidth_76, Var_128, ArgMode_66, ArgModes_67, &LeftOverVarsWidths_95, &LeftOverArgModes_96, STATE_VARIABLE_CurArgNum_0_3, &STATE_VARIABLE_CurArgNum_115_115, STATE_VARIABLE_TakeAddr_0_4, &STATE_VARIABLE_TakeAddr_116_116, &HeadCellArg_97, STATE_VARIABLE_MayUseAtomic_0_6, &STATE_VARIABLE_MayUseAtomic_117_117, STATE_VARIABLE_Code_0_8, &STATE_VARIABLE_Code_118_118, CI_10, STATE_VARIABLE_CLD_0_11, &STATE_VARIABLE_CLD_119_119);
              ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(LeftOverVarsWidths_95, LeftOverArgModes_96, STATE_VARIABLE_CurArgNum_115_115, STATE_VARIABLE_TakeAddr_116_116, &TailCellArgs_98, STATE_VARIABLE_MayUseAtomic_117_117, STATE_VARIABLE_MayUseAtomic_7, STATE_VARIABLE_Code_118_118, STATE_VARIABLE_Code_9, CI_10, STATE_VARIABLE_CLD_119_119, STATE_VARIABLE_CLD_12);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadCellArg_97));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCellArgs_98));
              }
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_word_19_p_0(
  MR_Word Var_20,
  MR_Word ArgPosWidth_21,
  MR_Word VarsWidths_22,
  MR_Word ArgMode_23,
  MR_Word ArgModes_24,
  MR_Word * LeftOverVarsWidths_25,
  MR_Word * LeftOverArgModes_26,
  MR_Integer CurArgNum_27,
  MR_Integer * LeftOverArgNum_28,
  MR_Word STATE_VARIABLE_TakeAddr_0_88,
  MR_Word * STATE_VARIABLE_TakeAddr_89,
  MR_Word * CellArg_30,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_90,
  MR_Word * STATE_VARIABLE_MayUseAtomic_91,
  MR_Word STATE_VARIABLE_Code_0_92,
  MR_Word * STATE_VARIABLE_Code_93,
  MR_Word CI_33,
  MR_Word STATE_VARIABLE_CLD_0_94,
  MR_Word * STATE_VARIABLE_CLD_95)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_35;
    MR_Word Type_36;
    MR_Word ModuleInfo_37;
    MR_Word STATE_VARIABLE_MayUseAtomic_96_96;
    MR_Word STATE_VARIABLE_TakeAddr_97_97;
    MR_Integer Var_126;

    ll_backend__code_info__get_vartypes_2_p_0(CI_33, &VarTypes_35);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_35, Var_20, &Type_36);
    ll_backend__code_info__get_module_info_2_p_0(CI_33, &ModuleInfo_37);
    check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_37, Type_36, STATE_VARIABLE_MayUseAtomic_0_90, &STATE_VARIABLE_MayUseAtomic_96_96);
    succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_88)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_126 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_88, (MR_Integer) 0))));
      STATE_VARIABLE_TakeAddr_97_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_88, (MR_Integer) 1))));
      succeeded = (CurArgNum_27 == Var_126);
    }
    if (succeeded)
    {
      MR_Word LCMCNull_38;

      *STATE_VARIABLE_TakeAddr_89 = STATE_VARIABLE_TakeAddr_97_97;
      *LeftOverVarsWidths_25 = VarsWidths_22;
      *LeftOverArgModes_26 = ArgModes_24;
      *LeftOverArgNum_28 = (MR_Integer) ((MR_Unsigned) CurArgNum_27 + (MR_Unsigned) (MR_Integer) 1);
      ll_backend__code_info__get_lcmc_null_2_p_0(CI_33, &LCMCNull_38);
      switch (MR_tag((MR_Word) ArgPosWidth_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word MaybeNull_41;

            switch (LCMCNull_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybeNull_41 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                MaybeNull_41 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_construct_scalar_common_3[2]));
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *CellArg_30 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeNull_41));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MaybeNulls_45;

            switch (LCMCNull_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybeNulls_45 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                MaybeNulls_45 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_construct_scalar_common_3[1]));
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *CellArg_30 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeNulls_45));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_21, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_word\'/19", (MR_String) "taking address of partial word");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_word\'/19", (MR_String) "taking address of dummy");
                  return;
                }
              }
              break;
          }
          break;
      }
      *STATE_VARIABLE_MayUseAtomic_91 = (MR_Integer) 1;
      *STATE_VARIABLE_CLD_95 = STATE_VARIABLE_CLD_0_94;
      *STATE_VARIABLE_Code_93 = STATE_VARIABLE_Code_0_92;
    }
    else
    {
      MR_Word IsReal_60;
      MR_Word Rval_61;
      MR_Word STATE_VARIABLE_Code_111_111;
      MR_Word STATE_VARIABLE_CLD_112_112;

      ll_backend__unify_gen_construct__generate_construct_arg_rval_11_p_0(ModuleInfo_37, Var_20, Type_36, ArgMode_23, &IsReal_60, &Rval_61, STATE_VARIABLE_Code_0_92, &STATE_VARIABLE_Code_111_111, CI_33, STATE_VARIABLE_CLD_0_94, &STATE_VARIABLE_CLD_112_112);
      switch (MR_tag((MR_Word) ArgPosWidth_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            switch (IsReal_60) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *CellArg_30 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *CellArg_30 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_61));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
                  }
                }
                break;
            }
            *LeftOverVarsWidths_25 = VarsWidths_22;
            *LeftOverArgModes_26 = ArgModes_24;
            *LeftOverArgNum_28 = (MR_Integer) ((MR_Unsigned) CurArgNum_27 + (MR_Unsigned) (MR_Integer) 1);
            *STATE_VARIABLE_TakeAddr_89 = STATE_VARIABLE_TakeAddr_0_88;
            *STATE_VARIABLE_MayUseAtomic_91 = STATE_VARIABLE_MayUseAtomic_96_96;
            *STATE_VARIABLE_Code_93 = STATE_VARIABLE_Code_111_111;
            *STATE_VARIABLE_CLD_95 = STATE_VARIABLE_CLD_112_112;
          }
          break;
        case (MR_Integer) 2:
          {
            switch (IsReal_60) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *CellArg_30 = (MR_Word) ((MR_Unsigned) 4U);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *CellArg_30 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Rval_61));
                }
                break;
            }
            *LeftOverVarsWidths_25 = VarsWidths_22;
            *LeftOverArgModes_26 = ArgModes_24;
            *LeftOverArgNum_28 = (MR_Integer) ((MR_Unsigned) CurArgNum_27 + (MR_Unsigned) (MR_Integer) 1);
            *STATE_VARIABLE_TakeAddr_89 = STATE_VARIABLE_TakeAddr_0_88;
            *STATE_VARIABLE_MayUseAtomic_91 = STATE_VARIABLE_MayUseAtomic_96_96;
            *STATE_VARIABLE_Code_93 = STATE_VARIABLE_Code_111_111;
            *STATE_VARIABLE_CLD_95 = STATE_VARIABLE_CLD_112_112;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_21, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Fill_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_21, (MR_Integer) 5))));
                MR_Word Completeness0_72;
                MR_Word RevToOrRvals0_73;
                MR_Integer NextArgNum_75;
                MR_Word RevToOrRvals_76;
                MR_Word Completeness_77;
                MR_Word ToOrRvals_78;
                MR_Word PackedRval_79;

                switch (IsReal_60) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Completeness0_72 = (MR_Integer) 1;
                      RevToOrRvals0_73 = (MR_Word) ((MR_Unsigned) 0U);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word CastRval_74;

                      Completeness0_72 = (MR_Integer) 0;
                      ll_backend__unify_gen_util__cast_away_any_sign_extend_bits_3_p_0(Fill_71, Rval_61, &CastRval_74);
                      {
                        RevToOrRvals0_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), RevToOrRvals0_73, 0) = ((MR_Box) (CastRval_74));
                        MR_hl_field(MR_mktag(1), RevToOrRvals0_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                }
                NextArgNum_75 = (MR_Integer) ((MR_Unsigned) CurArgNum_27 + (MR_Unsigned) (MR_Integer) 1);
                ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_19_p_0(VarsWidths_22, ArgModes_24, LeftOverVarsWidths_25, LeftOverArgModes_26, NextArgNum_75, LeftOverArgNum_28, STATE_VARIABLE_TakeAddr_0_88, STATE_VARIABLE_TakeAddr_89, RevToOrRvals0_73, &RevToOrRvals_76, Completeness0_72, &Completeness_77, STATE_VARIABLE_MayUseAtomic_96_96, STATE_VARIABLE_MayUseAtomic_91, STATE_VARIABLE_Code_111_111, STATE_VARIABLE_Code_93, CI_33, STATE_VARIABLE_CLD_112_112, STATE_VARIABLE_CLD_95);
                mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_76, &ToOrRvals_78);
                PackedRval_79 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_78);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *CellArg_30 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedRval_79));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Completeness_77));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_word\'/19", (MR_String) "apw_partial_shifted");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_word\'/19", (MR_String) "apw_none_shifted");
                  return;
                }
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_19_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer CurArgNum_5,
  MR_Integer * LeftOverArgNum_6,
  MR_Word STATE_VARIABLE_TakeAddr_0_7,
  MR_Word * STATE_VARIABLE_TakeAddr_8,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_9,
  MR_Word * STATE_VARIABLE_RevToOrRvals_10,
  MR_Word STATE_VARIABLE_Completeness_0_11,
  MR_Word * STATE_VARIABLE_Completeness_12,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_13,
  MR_Word * STATE_VARIABLE_MayUseAtomic_14,
  MR_Word STATE_VARIABLE_Code_0_15,
  MR_Word * STATE_VARIABLE_Code_16,
  MR_Word CI_17,
  MR_Word STATE_VARIABLE_CLD_0_18,
  MR_Word * STATE_VARIABLE_CLD_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *LeftOverArgNum_6 = CurArgNum_5;
        *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
        *STATE_VARIABLE_Code_16 = STATE_VARIABLE_Code_0_15;
        *STATE_VARIABLE_MayUseAtomic_14 = STATE_VARIABLE_MayUseAtomic_0_13;
        *STATE_VARIABLE_Completeness_12 = STATE_VARIABLE_Completeness_0_11;
        *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
        *STATE_VARIABLE_TakeAddr_8 = STATE_VARIABLE_TakeAddr_0_7;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_one_cons_word\'/19", (MR_String) "length misnatch");
          return;
        }
      }
    else
    {
      MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_one_cons_word\'/19", (MR_String) "length misnatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgModes_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_175, (MR_Integer) 0))));
        MR_Word ArgPosWidth_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_175, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) ArgPosWidth_111)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__3_3 = HeadVar__1_1;
              *HeadVar__4_4 = HeadVar__2_2;
              *LeftOverArgNum_6 = CurArgNum_5;
              *STATE_VARIABLE_TakeAddr_8 = STATE_VARIABLE_TakeAddr_0_7;
              *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
              *STATE_VARIABLE_Completeness_12 = STATE_VARIABLE_Completeness_0_11;
              *STATE_VARIABLE_MayUseAtomic_14 = STATE_VARIABLE_MayUseAtomic_0_13;
              *STATE_VARIABLE_Code_16 = STATE_VARIABLE_Code_0_15;
              *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *HeadVar__3_3 = HeadVar__1_1;
              *HeadVar__4_4 = HeadVar__2_2;
              *LeftOverArgNum_6 = CurArgNum_5;
              *STATE_VARIABLE_TakeAddr_8 = STATE_VARIABLE_TakeAddr_0_7;
              *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
              *STATE_VARIABLE_Completeness_12 = STATE_VARIABLE_Completeness_0_11;
              *STATE_VARIABLE_MayUseAtomic_14 = STATE_VARIABLE_MayUseAtomic_0_13;
              *STATE_VARIABLE_Code_16 = STATE_VARIABLE_Code_0_15;
              *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_111, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__3_3 = HeadVar__1_1;
                  *HeadVar__4_4 = HeadVar__2_2;
                  *LeftOverArgNum_6 = CurArgNum_5;
                  *STATE_VARIABLE_TakeAddr_8 = STATE_VARIABLE_TakeAddr_0_7;
                  *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
                  *STATE_VARIABLE_Completeness_12 = STATE_VARIABLE_Completeness_0_11;
                  *STATE_VARIABLE_MayUseAtomic_14 = STATE_VARIABLE_MayUseAtomic_0_13;
                  *STATE_VARIABLE_Code_16 = STATE_VARIABLE_Code_0_15;
                  *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word VarTypes_130;
                  MR_Word Type_131;
                  MR_Word ModuleInfo_132;
                  MR_Word IsReal_133;
                  MR_Word ArgRval_134;
                  MR_Integer NextArgNum_144;
                  MR_Word STATE_VARIABLE_MayUseAtomic_157_157;
                  MR_Word STATE_VARIABLE_TakeAddr_161_161;
                  MR_Word STATE_VARIABLE_Code_162_162;
                  MR_Word STATE_VARIABLE_CLD_163_163;
                  MR_Word STATE_VARIABLE_RevToOrRvals_164_164;
                  MR_Word STATE_VARIABLE_Completeness_165_165;
                  MR_Word STATE_VARIABLE_TakeAddr_158_158;
                  MR_Integer Var_173;
                  MR_Word next_value_of_HeadVar__1_1;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Integer next_value_of_CurArgNum_5;
                  MR_Word next_value_of_STATE_VARIABLE_TakeAddr_0_7;
                  MR_Word next_value_of_STATE_VARIABLE_RevToOrRvals_0_9;
                  MR_Word next_value_of_STATE_VARIABLE_Completeness_0_11;
                  MR_Word next_value_of_STATE_VARIABLE_MayUseAtomic_0_13;
                  MR_Word next_value_of_STATE_VARIABLE_Code_0_15;
                  MR_Word next_value_of_STATE_VARIABLE_CLD_0_18;

                  ll_backend__code_info__get_vartypes_2_p_0(CI_17, &VarTypes_130);
                  hlds__vartypes__lookup_var_type_3_p_0(VarTypes_130, Var_110, &Type_131);
                  ll_backend__code_info__get_module_info_2_p_0(CI_17, &ModuleInfo_132);
                  check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_132, Type_131, STATE_VARIABLE_MayUseAtomic_0_13, &STATE_VARIABLE_MayUseAtomic_157_157);
                  succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_7)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_173 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_7, (MR_Integer) 0))));
                    STATE_VARIABLE_TakeAddr_158_158 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_7, (MR_Integer) 1))));
                    succeeded = (CurArgNum_5 == Var_173);
                  }
                  if (succeeded)
                  {
                    STATE_VARIABLE_TakeAddr_161_161 = STATE_VARIABLE_TakeAddr_158_158;
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_one_cons_word\'/19", (MR_String) "taking address of partial word");
                      return;
                    }
                  }
                  else
                    STATE_VARIABLE_TakeAddr_161_161 = STATE_VARIABLE_TakeAddr_0_7;
                  ll_backend__unify_gen_construct__generate_construct_arg_rval_11_p_0(ModuleInfo_132, Var_110, Type_131, ArgMode_97, &IsReal_133, &ArgRval_134, STATE_VARIABLE_Code_0_15, &STATE_VARIABLE_Code_162_162, CI_17, STATE_VARIABLE_CLD_0_18, &STATE_VARIABLE_CLD_163_163);
                  if (((((MR_tag((MR_Word) ArgPosWidth_111)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_111, (MR_Integer) 0))) == (MR_Integer) 2))))
                  {
                    STATE_VARIABLE_RevToOrRvals_164_164 = STATE_VARIABLE_RevToOrRvals_0_9;
                    STATE_VARIABLE_Completeness_165_165 = STATE_VARIABLE_Completeness_0_11;
                  }
                  else
                  {
                    MR_Word Shift_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_111, (MR_Integer) 3))));
                    MR_Word Fill_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_111, (MR_Integer) 6))));

                    switch (IsReal_133) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Completeness_165_165 = (MR_Integer) 1;
                          STATE_VARIABLE_RevToOrRvals_164_164 = STATE_VARIABLE_RevToOrRvals_0_9;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ShiftedArgRval_141;

                          ShiftedArgRval_141 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(ArgRval_134, Shift_137, Fill_140);
                          {
                            STATE_VARIABLE_RevToOrRvals_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevToOrRvals_164_164, 0) = ((MR_Box) (ShiftedArgRval_141));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevToOrRvals_164_164, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_9));
                          }
                          STATE_VARIABLE_Completeness_165_165 = STATE_VARIABLE_Completeness_0_11;
                        }
                        break;
                    }
                  }
                  NextArgNum_144 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) (MR_Integer) 1);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Var_174;
                  next_value_of_HeadVar__2_2 = ArgModes_98;
                  next_value_of_CurArgNum_5 = NextArgNum_144;
                  next_value_of_STATE_VARIABLE_TakeAddr_0_7 = STATE_VARIABLE_TakeAddr_161_161;
                  next_value_of_STATE_VARIABLE_RevToOrRvals_0_9 = STATE_VARIABLE_RevToOrRvals_164_164;
                  next_value_of_STATE_VARIABLE_Completeness_0_11 = STATE_VARIABLE_Completeness_165_165;
                  next_value_of_STATE_VARIABLE_MayUseAtomic_0_13 = STATE_VARIABLE_MayUseAtomic_157_157;
                  next_value_of_STATE_VARIABLE_Code_0_15 = STATE_VARIABLE_Code_162_162;
                  next_value_of_STATE_VARIABLE_CLD_0_18 = STATE_VARIABLE_CLD_163_163;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  CurArgNum_5 = next_value_of_CurArgNum_5;
                  STATE_VARIABLE_TakeAddr_0_7 = next_value_of_STATE_VARIABLE_TakeAddr_0_7;
                  STATE_VARIABLE_RevToOrRvals_0_9 = next_value_of_STATE_VARIABLE_RevToOrRvals_0_9;
                  STATE_VARIABLE_Completeness_0_11 = next_value_of_STATE_VARIABLE_Completeness_0_11;
                  STATE_VARIABLE_MayUseAtomic_0_13 = next_value_of_STATE_VARIABLE_MayUseAtomic_0_13;
                  STATE_VARIABLE_Code_0_15 = next_value_of_STATE_VARIABLE_Code_0_15;
                  STATE_VARIABLE_CLD_0_18 = next_value_of_STATE_VARIABLE_CLD_0_18;
                  continue;
                }
                break;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_construct_arg_rval_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Var_13,
  MR_Word Type_14,
  MR_Word ArgMode_15,
  MR_Word * IsReal_16,
  MR_Word * Rval_17,
  MR_Word STATE_VARIABLE_Code_0_26,
  MR_Word * STATE_VARIABLE_Code_27,
  MR_Word CI_19,
  MR_Word STATE_VARIABLE_CLD_0_28,
  MR_Word * STATE_VARIABLE_CLD_29)
{
  {
    MR_Word RHSInsts_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_15, (MR_Integer) 1))));
    MR_Word RHSTopFunctorMode_23;

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_12, RHSInsts_22, Type_14, &RHSTopFunctorMode_23);
    switch (RHSTopFunctorMode_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IsDummy_24;

          IsDummy_24 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(CI_19, Var_13);
          switch (IsDummy_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *IsReal_16 = (MR_Integer) 0;
                *Rval_17 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]));
                *STATE_VARIABLE_Code_27 = STATE_VARIABLE_Code_0_26;
                *STATE_VARIABLE_CLD_29 = STATE_VARIABLE_CLD_0_28;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word VarCode_25;

                *IsReal_16 = (MR_Integer) 1;
                ll_backend__code_loc_dep__produce_variable_6_p_0(Var_13, &VarCode_25, Rval_17, CI_19, STATE_VARIABLE_CLD_0_28, STATE_VARIABLE_CLD_29);
                *STATE_VARIABLE_Code_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_Code_0_26, VarCode_25);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *IsReal_16 = (MR_Integer) 0;
          *Rval_17 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]));
          *STATE_VARIABLE_Code_27 = STATE_VARIABLE_Code_0_26;
          *STATE_VARIABLE_CLD_29 = STATE_VARIABLE_CLD_0_28;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____active_ground_term_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen_construct____Unify____active_ground_term_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____active_ground_term_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen_construct____Compare____active_ground_term_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____field_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen_construct____Unify____field_addr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____field_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen_construct____Compare____field_addr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____maybe_real_input_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen_construct____Unify____maybe_real_input_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____maybe_real_input_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen_construct____Compare____maybe_real_input_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__unify_gen_construct__init(void)
{
}

void mercury__ll_backend__unify_gen_construct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_active_ground_term_map_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_field_addr_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_maybe_real_input_arg_0);
}

void mercury__ll_backend__unify_gen_construct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__unify_gen_construct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.unify_gen_construct.
