/*
** Automatically generated from `unify_gen_construct.m'
** by the Mercury compiler,
** version rotd-2023-10-16
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint16.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_top_functor.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_cons.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




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

static const MR_DuFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_may_store_double_width_natively_0_0;

static const MR_PseudoTypeInfo ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__field_types_may_store_double_width_natively_0_1[1];

static const MR_DuFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_may_store_double_width_natively_0_1;

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_may_store_double_width_natively_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_may_store_double_width_natively_0_1[1];

static const MR_DuPtagLayout ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_ptag_ordered_may_store_double_width_natively_0[2];

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_name_ordered_may_store_double_width_natively_0[2];

static const MR_Integer ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_may_store_double_width_natively_0[2];

static const MR_EnumFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_0;

static const MR_EnumFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_1;

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_ordinal_ordered_maybe_real_input_arg_0[2];

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_name_ordered_maybe_real_input_arg_0[2];

static const MR_Integer ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_maybe_real_input_arg_0[2];

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_arg_tag__1394__1_2_p_0(
  MR_Word Lang_17,
  MR_Word HeadVar__2_55);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1226__1_2_p_0(
  MR_Word LeftOverConstArgsPosWidths_38,
  MR_Word HeadVar__2_94);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1217__1_2_p_0(
  MR_Word ConstArgsPosWidths_15,
  MR_Word HeadVar__2_90);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__6_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_231);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__5_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_218);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__994__1_2_p_0(
  MR_Word LeftOverRHSVarsWidths_73,
  MR_Word HeadVar__2_132);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__988__1_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_127);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__4_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_204);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__3_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_191);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__905__1_2_p_0(
  MR_Word Lang_26,
  MR_Word HeadVar__2_91);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__2_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_178);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__1_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_100);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_and_pack_construct_args__299__1_2_p_0(
  MR_Word STATE_VARIABLE_TakeAddr_0_4,
  MR_Word HeadVar__2_29);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__264__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_188);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__255__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_183);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__273__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_193);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__281__1_2_p_0(
  MR_Word MaybeSize_20,
  MR_Word HeadVar__2_202);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__280__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_198);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__14_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_386);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__13_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_377);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__12_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_368);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__11_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_359);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__10_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_350);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__9_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_341);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__8_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_332);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__7_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_323);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__6_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_314);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__134__1_2_p_0(
  MR_Word Lang_58,
  MR_Word HeadVar__2_137);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__5_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_305);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__4_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_296);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__3_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_287);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__2_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_278);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__1_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_131);

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____maybe_real_input_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____maybe_real_input_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____may_store_double_width_natively_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____may_store_double_width_natively_0_0(
  MR_Word HeadVar__1_1,
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

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__not_taking_addr_of_cur_arg_2_p_0(
  MR_Word TakeAddr_3,
  MR_Integer CurArgNum_4);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word UnboxedFloats_10,
  MR_Word UnboxedInt64s_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ConstStructMap_0_24,
  MR_Word * STATE_VARIABLE_ConstStructMap_25,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_26,
  MR_Word * STATE_VARIABLE_StaticCellInfo_27);

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
  MR_Word STATE_VARIABLE_RevToOrRvals_0_7,
  MR_Word * STATE_VARIABLE_RevToOrRvals_8);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word UnboxedFloats_8,
  MR_Word UnboxedInt64s_9,
  MR_Word ConstStructMap_10,
  MR_Word HeadVar__5_5,
  MR_Word * TypedRval_13);

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
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_9(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ExprnOpts_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_82,
  MR_Word * STATE_VARIABLE_StaticCellInfo_83,
  MR_Word STATE_VARIABLE_ActiveMap_0_84,
  MR_Word * STATE_VARIABLE_ActiveMap_85);

static void MR_CALL 
ll_backend__unify_gen_construct__store_float_tag_statically_3_p_0(
  MR_Word UnboxedFloats_4,
  MR_Word MayStoreDoubleWidthStatically_5,
  MR_Word * Type_6);

static void MR_CALL 
ll_backend__unify_gen_construct__store_int_tag_statically_4_p_0(
  MR_Word IntType_5,
  MR_Word UnboxedInt64s_6,
  MR_Word MayStoreDoubleWidthStatically_7,
  MR_Word * Type_8);

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
  MR_Word STATE_VARIABLE_RevToOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevToOrRvals_4,
  MR_Word STATE_VARIABLE_ActiveMap_0_5,
  MR_Word * STATE_VARIABLE_ActiveMap_6);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_20(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_19(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_18(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_17(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_16(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_15(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_14(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_13(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_12(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_11(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_10(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_9(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_7(
  MR_Box closure_arg);

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
ll_backend__unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_119_105_100_116_104_115_95_109_111_100_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer STATE_VARIABLE_CurArgNum_0_7,
  MR_Integer * STATE_VARIABLE_CurArgNum_8);

static void MR_CALL 
ll_backend__unify_gen_construct__maybe_accumulate_local_sectag_2_p_0(
  MR_Word LocalArgsTagInfo_3,
  MR_Word * RevToOrRvals0_4);

static void MR_CALL 
ll_backend__unify_gen_construct__pack_how_to_construct_3_p_0(
  MR_Word ArgVarsWidths_4,
  MR_Word STATE_VARIABLE_HowToConstruct_0_14,
  MR_Word * STATE_VARIABLE_HowToConstruct_15);

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
  MR_Word ArgVar_11,
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
  MR_Word LHSVar_13,
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
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer CurArgNum_3,
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
ll_backend__unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(
  MR_Word Rval_6,
  MR_Word Shift_7,
  MR_Word Fill_8,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_12,
  MR_Word * STATE_VARIABLE_RevToOrRvals_13);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_17_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_17_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_17_p_0(
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
  MR_Word STATE_VARIABLE_Code_0_13,
  MR_Word * STATE_VARIABLE_Code_14,
  MR_Word CI_15,
  MR_Word STATE_VARIABLE_CLD_0_16,
  MR_Word * STATE_VARIABLE_CLD_17);

static void MR_CALL 
ll_backend__unify_gen_construct__generate_construct_arg_rval_10_p_0(
  MR_Word RHSVar_11,
  MR_Word ArgMode_12,
  MR_Word * RHSType_13,
  MR_Word * IsReal_14,
  MR_Word * RHSRval_15,
  MR_Word STATE_VARIABLE_Code_0_20,
  MR_Word * STATE_VARIABLE_Code_21,
  MR_Word CI_17,
  MR_Word STATE_VARIABLE_CLD_0_22,
  MR_Word * STATE_VARIABLE_CLD_23);

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
ll_backend__unify_gen_construct____Unify____may_store_double_width_natively_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____may_store_double_width_natively_0_0_10001(
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


static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_1[15][2];

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_2[4][3];

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_3[8][1];

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_4[7][5];

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_5[1][8];

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_6[1][11];




static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_1[15][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_field_addr_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_arg_and_width_1)),
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[0]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_arg_and_width_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[7]))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__unify_gen_construct_scalar_common_3[0])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[3])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_construct_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[1])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_construct_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_construct_scalar_common_1[9])))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_5[0])),
    ((MR_Box) (ll_backend__unify_gen_construct__construct_cell_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_3[8][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { ((MR_Box) (MR_mkword(3, &ll_backend__unify_gen_construct_scalar_common_1[9]))) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 9U) },
  /* row   7 */
  { ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[14])) },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_4[7][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_construct__type_ctor_info_field_addr_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_construct__type_ctor_info_field_addr_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_6[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_construct__type_ctor_info_field_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_field_addr_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen_construct__ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &ll_backend__unify_gen_util__ll_backend__unify_gen_util__type_ctor_info_arg_and_width_1,
  { (MR_TypeInfo) (&ll_backend__unify_gen_construct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__unify_gen_construct__ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  { (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__unify_gen_construct__ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0) }
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__unify_gen_construct____Unify____active_ground_term_map_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_construct____Compare____active_ground_term_map_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_construct",
  (MR_String) "active_ground_term_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__unify_gen_construct__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__field_types_field_addr_0_0,
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__field_names_field_addr_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_field_addr_0_0[1] = { &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_field_addr_0_0 };

static const MR_DuPtagLayout ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_ptag_ordered_field_addr_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_field_addr_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_name_ordered_field_addr_0[1] = { &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_field_addr_0_0 };

static const MR_Integer ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_field_addr_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_field_addr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen_construct____Unify____field_addr_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_construct____Compare____field_addr_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_construct",
  (MR_String) "field_addr",
  { ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_name_ordered_field_addr_0 },
  { ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_ptag_ordered_field_addr_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_field_addr_0,

};

static const MR_DuFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_may_store_double_width_natively_0_0 = {
  (MR_String) "may_not_store_double_width_natively",
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

static const MR_PseudoTypeInfo ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__field_types_may_store_double_width_natively_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0) };

static const MR_DuFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_may_store_double_width_natively_0_1 = {
  (MR_String) "may_store_double_width_natively",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__field_types_may_store_double_width_natively_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_may_store_double_width_natively_0_0[1] = { &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_may_store_double_width_natively_0_0 };

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_may_store_double_width_natively_0_1[1] = { &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_may_store_double_width_natively_0_1 };

static const MR_DuPtagLayout ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_ptag_ordered_may_store_double_width_natively_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_may_store_double_width_natively_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_may_store_double_width_natively_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_name_ordered_may_store_double_width_natively_0[2] = {
  &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_may_store_double_width_natively_0_0,
  &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_may_store_double_width_natively_0_1
};

static const MR_Integer ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_may_store_double_width_natively_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_may_store_double_width_natively_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen_construct____Unify____may_store_double_width_natively_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_construct____Compare____may_store_double_width_natively_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_construct",
  (MR_String) "may_store_double_width_natively",
  { ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_name_ordered_may_store_double_width_natively_0 },
  { ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_ptag_ordered_may_store_double_width_natively_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_may_store_double_width_natively_0,

};

static const MR_EnumFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_0 = {
  (MR_String) "not_real_input_arg",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_1 = {
  (MR_String) "real_input_arg",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_ordinal_ordered_maybe_real_input_arg_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__unify_gen_construct____Unify____maybe_real_input_arg_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_construct____Compare____maybe_real_input_arg_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_construct",
  (MR_String) "maybe_real_input_arg",
  { ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_name_ordered_maybe_real_input_arg_0 },
  { ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_ordinal_ordered_maybe_real_input_arg_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_maybe_real_input_arg_0,

};

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_arg_tag__1394__1_2_p_0(
  MR_Word Lang_17,
  MR_Word HeadVar__2_55)
{
  MR_bool succeeded = (Lang_17 == HeadVar__2_55);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1226__1_2_p_0(
  MR_Word LeftOverConstArgsPosWidths_38,
  MR_Word HeadVar__2_94)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[8]), ((MR_Box) (LeftOverConstArgsPosWidths_38)), ((MR_Box) (HeadVar__2_94)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1217__1_2_p_0(
  MR_Word ConstArgsPosWidths_15,
  MR_Word HeadVar__2_90)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[8]), ((MR_Box) (ConstArgsPosWidths_15)), ((MR_Box) (HeadVar__2_90)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__6_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_231)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_231)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__5_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_218)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_218)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__994__1_2_p_0(
  MR_Word LeftOverRHSVarsWidths_73,
  MR_Word HeadVar__2_132)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[6]), ((MR_Box) (LeftOverRHSVarsWidths_73)), ((MR_Box) (HeadVar__2_132)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__988__1_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_127)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_127)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__4_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_204)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_204)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__3_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_191)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_191)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__905__1_2_p_0(
  MR_Word Lang_26,
  MR_Word HeadVar__2_91)
{
  MR_bool succeeded = (Lang_26 == HeadVar__2_91);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__2_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_178)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_178)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__1_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_100)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_100)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_and_pack_construct_args__299__1_2_p_0(
  MR_Word STATE_VARIABLE_TakeAddr_0_4,
  MR_Word HeadVar__2_29)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (STATE_VARIABLE_TakeAddr_0_4)), ((MR_Box) (HeadVar__2_29)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__264__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_188)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_188)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__255__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_183)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_183)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__273__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_193)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_193)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__281__1_2_p_0(
  MR_Word MaybeSize_20,
  MR_Word HeadVar__2_202)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[3]), ((MR_Box) (MaybeSize_20)), ((MR_Box) (HeadVar__2_202)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__280__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_198)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_198)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__14_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_386)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_386)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__13_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_377)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_377)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__12_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_368)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_368)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__11_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_359)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_359)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__10_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_350)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_350)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__9_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_341)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_341)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__8_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_332)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_332)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__7_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_323)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_323)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__6_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_314)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_314)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__134__1_2_p_0(
  MR_Word Lang_58,
  MR_Word HeadVar__2_137)
{
  MR_bool succeeded = (Lang_58 == HeadVar__2_137);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__5_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_305)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_305)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__4_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_296)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_296)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__3_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_287)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_287)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__2_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_278)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_278)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__1_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_131)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_131)));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____maybe_real_input_arg_0_0(
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

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____maybe_real_input_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____may_store_double_width_natively_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__prog_data____Compare____arg_pos_width_0_0(HeadVar__1_1, Var_11, ArgY1_7);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____may_store_double_width_natively_0_0(
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__prog_data____Unify____arg_pos_width_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____field_addr_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____field_addr_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____active_ground_term_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____active_ground_term_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__not_taking_addr_of_cur_arg_2_p_0(
  MR_Word TakeAddr_3,
  MR_Integer CurArgNum_4)
{
  MR_bool succeeded = (TakeAddr_3 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer Var_6;

  if (succeeded)
  {
    Var_6 = ((MR_Integer) ((MR_hl_field(1, TakeAddr_3, (MR_Integer) 0))));
    succeeded = (CurArgNum_4 == Var_6);
  }
  if (succeeded)
    succeeded = MR_FALSE;
  else
    succeeded = MR_TRUE;
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_8_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1226__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1217__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_const_struct_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word UnboxedFloats_10,
  MR_Word UnboxedInt64s_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ConstStructMap_0_24,
  MR_Word * STATE_VARIABLE_ConstStructMap_25,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_26,
  MR_Word * STATE_VARIABLE_StaticCellInfo_27)
{
  MR_bool succeeded;
  MR_Integer ConstNum_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word ConstStruct_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(0, ConstStruct_13, (MR_Integer) 0))));
  MR_Word ConstArgs_17 = ((MR_Word) ((MR_hl_field(0, ConstStruct_13, (MR_Integer) 1))));
  MR_Word ConsTag_21;
  MR_Word ConsArgsPosWidths_22;
  MR_Word Rval_23;

  ConsTag_21 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_9, ConsId_16);
  ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_9, ConsId_16, ConstArgs_17, &ConsArgsPosWidths_22);
  switch (MR_tag((MR_Word) ConsTag_21)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "unexpected tag");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ConstArgPosWidth_50;
            MR_Box conv1_ConstArgPosWidth_50;

            hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[7]), ConsArgsPosWidths_22, &conv1_ConstArgPosWidth_50);
            ConstArgPosWidth_50 = ((MR_Word) (conv1_ConstArgPosWidth_50));
            ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0(ModuleInfo_9, UnboxedFloats_10, UnboxedInt64s_11, STATE_VARIABLE_ConstStructMap_0_24, ConstArgPosWidth_50, &Rval_23);
            *STATE_VARIABLE_StaticCellInfo_27 = STATE_VARIABLE_StaticCellInfo_0_26;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "unexpected tag");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_21, (MR_Integer) 0))))) {
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
        case (MR_Integer) 14:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "unexpected tag");
            return;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_31 = ((MR_Word) ((MR_hl_field(3, ConsTag_21, (MR_Integer) 1))));
            MR_Word Ptag_32;
            MR_Word RHSTypedRvals_33;
            MR_Word DataAddr_44;
            MR_Word CellPtrConst_46;
            MR_Word Rval_47;
            MR_Word Var_62;

            switch (MR_tag((MR_Word) RemoteArgsTagInfo_31)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Ptag_32 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                  ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_9, UnboxedFloats_10, UnboxedInt64s_11, STATE_VARIABLE_ConstStructMap_0_24, ConsArgsPosWidths_22, &RHSTypedRvals_33);
                }
                break;
              case (MR_Integer) 1:
                {
                  Ptag_32 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_31, (MR_Integer) 0))));
                  ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_9, UnboxedFloats_10, UnboxedInt64s_11, STATE_VARIABLE_ConstStructMap_0_24, ConsArgsPosWidths_22, &RHSTypedRvals_33);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_34;
                  MR_Unsigned SectagUint_35;
                  MR_Word SectagSize_36;
                  MR_Word TypedTagwordRval_37;
                  MR_Word NonTagwordConstArgsPosWidths_38;
                  MR_Word NonTagwordTypedRvals_43;

                  Ptag_32 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_31, (MR_Integer) 0))));
                  RemoteSectag_34 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_31, (MR_Integer) 1))));
                  SectagUint_35 = ((MR_Unsigned) ((MR_hl_field(0, RemoteSectag_34, (MR_Integer) 0))));
                  SectagSize_36 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_34, (MR_Integer) 1))));
                  if ((SectagSize_36 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_53;
                    MR_Word Var_54;

                    {
                      Var_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_54, 0) = ((MR_Box) (SectagUint_35));
                    }
                    {
                      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_54));
                    }
                    {
                      TypedTagwordRval_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypedTagwordRval_37, 0) = ((MR_Box) (Var_53));
                      MR_hl_field(0, TypedTagwordRval_37, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[4])));
                    }
                    NonTagwordConstArgsPosWidths_38 = ConsArgsPosWidths_22;
                  }
                  else
                  {
                    MR_Word RevToOrRvals0_39;
                    MR_Word RevToOrRvals_40;
                    MR_Word ToOrRvals_41;
                    MR_Word TagwordRval_42;

                    succeeded = (SectagUint_35 == (MR_Unsigned) 0U);
                    if (succeeded)
                      RevToOrRvals0_39 = (MR_Word) ((MR_Unsigned) 0U);
                    else
                    {
                      MR_Word Var_56;
                      MR_Word Var_57;

                      {
                        Var_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_57, 0) = ((MR_Box) (SectagUint_35));
                      }
                      {
                        Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_56, 1) = ((MR_Box) (Var_57));
                      }
                      {
                        RevToOrRvals0_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, RevToOrRvals0_39, 0) = ((MR_Box) (Var_56));
                        MR_hl_field(1, RevToOrRvals0_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    ll_backend__unify_gen_construct__generate_const_struct_args_for_one_word_8_p_0(ModuleInfo_9, UnboxedFloats_10, UnboxedInt64s_11, STATE_VARIABLE_ConstStructMap_0_24, ConsArgsPosWidths_22, &NonTagwordConstArgsPosWidths_38, RevToOrRvals0_39, &RevToOrRvals_40);
                    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_40, &ToOrRvals_41);
                    TagwordRval_42 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_41);
                    {
                      TypedTagwordRval_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TypedTagwordRval_37, 0) = ((MR_Box) (TagwordRval_42));
                      MR_hl_field(0, TypedTagwordRval_37, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[4])));
                    }
                  }
                  ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_9, UnboxedFloats_10, UnboxedInt64s_11, STATE_VARIABLE_ConstStructMap_0_24, NonTagwordConstArgsPosWidths_38, &NonTagwordTypedRvals_43);
                  {
                    RHSTypedRvals_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, RHSTypedRvals_33, 0) = ((MR_Box) (TypedTagwordRval_37));
                    MR_hl_field(1, RHSTypedRvals_33, 1) = ((MR_Box) (NonTagwordTypedRvals_43));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "remote_args_ctor");
                  return;
                }
                break;
            }
            ll_backend__global_data__add_scalar_static_cell_4_p_0(RHSTypedRvals_33, &DataAddr_44, STATE_VARIABLE_StaticCellInfo_0_26, STATE_VARIABLE_StaticCellInfo_27);
            {
              Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, Var_62, 1) = ((MR_Box) (DataAddr_44));
              MR_hl_field(3, Var_62, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              CellPtrConst_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, CellPtrConst_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, CellPtrConst_46, 1) = ((MR_Box) (Var_62));
            }
            {
              Rval_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Rval_47, 0) = ((MR_Box) (Ptag_32));
              MR_hl_field(2, Rval_47, 1) = ((MR_Box) (CellPtrConst_46));
            }
            {
              Rval_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Rval_23, 0) = ((MR_Box) (Rval_47));
              MR_hl_field(0, Rval_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_48 = ((MR_Word) ((MR_hl_field(3, ConsTag_21, (MR_Integer) 1))));
            MR_Word LeftOverConstArgsPosWidths_49;
            MR_Word Var_64;
            MR_Word Var_68;
            MR_Word RevToOrRvals0_77;
            MR_Word RevToOrRvals_78;
            MR_Word ToOrRvals_79;
            MR_Word Rval_80;
            MR_Unsigned PrimSec_89;

            {
              Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_64, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[6]));
              MR_hl_field(0, Var_64, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_const_struct_8_p_0_1));
              MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_64, 3) = ((MR_Box) (ConsArgsPosWidths_22));
              MR_hl_field(0, Var_64, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_not_3_p_0(Var_64, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "local_args_tag has no args");
            if ((LocalArgsTagInfo_48 == (MR_Word) ((MR_Unsigned) 0U)))
              PrimSec_89 = (MR_Unsigned) 0U;
            else
            {
              MR_Word LocalSectag_91 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_48, (MR_Integer) 1))));

              PrimSec_89 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_91, (MR_Integer) 1))));
            }
            succeeded = (PrimSec_89 == (MR_Unsigned) 0U);
            if (succeeded)
              RevToOrRvals0_77 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Var_94;
              MR_Word Var_95;

              {
                Var_95 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_95, 0) = ((MR_Box) (PrimSec_89));
              }
              {
                Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_94, 1) = ((MR_Box) (Var_95));
              }
              {
                RevToOrRvals0_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, RevToOrRvals0_77, 0) = ((MR_Box) (Var_94));
                MR_hl_field(1, RevToOrRvals0_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            ll_backend__unify_gen_construct__generate_const_struct_args_for_one_word_8_p_0(ModuleInfo_9, UnboxedFloats_10, UnboxedInt64s_11, STATE_VARIABLE_ConstStructMap_0_24, ConsArgsPosWidths_22, &LeftOverConstArgsPosWidths_49, RevToOrRvals0_77, &RevToOrRvals_78);
            mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_78, &ToOrRvals_79);
            Rval_80 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_79);
            {
              Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_68, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[6]));
              MR_hl_field(0, Var_68, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_const_struct_8_p_0_2));
              MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_68, 3) = ((MR_Box) (LeftOverConstArgsPosWidths_49));
              MR_hl_field(0, Var_68, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "left over args");
            {
              Rval_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Rval_23, 0) = ((MR_Box) (Rval_80));
              MR_hl_field(0, Rval_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            *STATE_VARIABLE_StaticCellInfo_27 = STATE_VARIABLE_StaticCellInfo_0_26;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word ArgRval_51;
            MR_Word Ptag_81 = ((MR_Word) ((MR_hl_field(3, ConsTag_21, (MR_Integer) 1))));
            MR_Word Rval_82;
            MR_Word ConstArgPosWidth_83;
            MR_Word ArgTypedRval_84;
            MR_Box conv0_ConstArgPosWidth_83;
            uint8_t Var_73;

            hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[7]), ConsArgsPosWidths_22, &conv0_ConstArgPosWidth_83);
            ConstArgPosWidth_83 = ((MR_Word) (conv0_ConstArgPosWidth_83));
            ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0(ModuleInfo_9, UnboxedFloats_10, UnboxedInt64s_11, STATE_VARIABLE_ConstStructMap_0_24, ConstArgPosWidth_83, &ArgTypedRval_84);
            ArgRval_51 = ((MR_Word) ((MR_hl_field(0, ArgTypedRval_84, (MR_Integer) 0))));
            Var_73 = (uint8_t) (Ptag_81);
            succeeded = (Var_73 == UINT8_C(0));
            if (succeeded)
              Rval_82 = ArgRval_51;
            else
              {
                Rval_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Rval_82, 0) = ((MR_Box) (Ptag_81));
                MR_hl_field(2, Rval_82, 1) = ((MR_Box) (ArgRval_51));
              }
            {
              Rval_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Rval_23, 0) = ((MR_Box) (Rval_82));
              MR_hl_field(0, Rval_23, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            *STATE_VARIABLE_StaticCellInfo_27 = STATE_VARIABLE_StaticCellInfo_0_26;
          }
          break;
      }
      break;
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstNum_12, ((MR_Box) (Rval_23)), STATE_VARIABLE_ConstStructMap_0_24, STATE_VARIABLE_ConstStructMap_25);
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
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ConstArgPosWidth_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ConstArgsPosWidths_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ArgPosWidth_19 = ((MR_Word) ((MR_hl_field(0, ConstArgPosWidth_15, (MR_Integer) 1))));

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

            ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, ConstArgPosWidth_15, &HeadTypedRval_25);
            ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, ConstArgsPosWidths_16, &TailTypedRvals_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HeadTypedRval_25));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailTypedRvals_26));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_19, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Shift_29 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_19, (MR_Integer) 3))));
                MR_Word Fill_32 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_19, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word FirstTypedRval_33;
                MR_Word FirstRval_34;
                MR_Word RevToOrRvals0_36;
                MR_Word LeftOverConstArgsPosWidths_37;
                MR_Word RevToOrRvals_38;
                MR_Word ToOrRvals_39;
                MR_Word HeadRval_40;
                MR_Word HeadTypedRval_56;
                MR_Word TailTypedRvals_57;
                MR_Word Const_59;
                MR_Word Var_61;

                ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, ConstArgPosWidth_15, &FirstTypedRval_33);
                FirstRval_34 = ((MR_Word) ((MR_hl_field(0, FirstTypedRval_33, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) FirstRval_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FirstRval_34, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Const_59 = ((MR_Word) ((MR_hl_field(3, FirstRval_34, (MR_Integer) 1))));
                  Var_61 = ll_backend__unify_gen_util__is_zero_const_1_f_0(Const_59);
                  succeeded = (Var_61 == (MR_Integer) 1);
                }
                if (succeeded)
                  RevToOrRvals0_36 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Word ShiftedUnsignedRval_60;

                  ShiftedUnsignedRval_60 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(FirstRval_34, Shift_29, Fill_32);
                  {
                    RevToOrRvals0_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, RevToOrRvals0_36, 0) = ((MR_Box) (ShiftedUnsignedRval_60));
                    MR_hl_field(1, RevToOrRvals0_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                ll_backend__unify_gen_construct__generate_const_struct_args_for_one_word_8_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, ConstArgsPosWidths_16, &LeftOverConstArgsPosWidths_37, RevToOrRvals0_36, &RevToOrRvals_38);
                mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_38, &ToOrRvals_39);
                HeadRval_40 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_39);
                {
                  HeadTypedRval_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, HeadTypedRval_56, 0) = ((MR_Box) (HeadRval_40));
                  MR_hl_field(0, HeadTypedRval_56, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[4])));
                }
                ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, LeftOverConstArgsPosWidths_37, &TailTypedRvals_57);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__6_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (HeadTypedRval_56));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailTypedRvals_57));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_args\'/6", (MR_String) "apw_partial_shifted");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_args\'/6", (MR_String) "apw_none_shifted");
                return;
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
  MR_Word STATE_VARIABLE_RevToOrRvals_0_7,
  MR_Word * STATE_VARIABLE_RevToOrRvals_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevToOrRvals_8 = STATE_VARIABLE_RevToOrRvals_0_7;
    }
    else
    {
      MR_Word ConstArgPosWidth_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ConstArgsPosWidths_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ArgPosWidth_25 = ((MR_Word) ((MR_hl_field(0, ConstArgPosWidth_20, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *STATE_VARIABLE_RevToOrRvals_8 = STATE_VARIABLE_RevToOrRvals_0_7;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *STATE_VARIABLE_RevToOrRvals_8 = STATE_VARIABLE_RevToOrRvals_0_7;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_25, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__6_6 = HeadVar__5_5;
                *STATE_VARIABLE_RevToOrRvals_8 = STATE_VARIABLE_RevToOrRvals_0_7;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Shift_39 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_25, (MR_Integer) 3))));
                MR_Word Fill_42 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_25, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word ArgTypedRval_43;
                MR_Word ArgRval_44;
                MR_Word STATE_VARIABLE_RevToOrRvals_50_51;
                MR_Word Const_52;
                MR_Word Var_54;
                MR_Word next_value_of_HeadVar__5_5;
                MR_Word next_value_of_STATE_VARIABLE_RevToOrRvals_0_7;

                ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, ConstArgPosWidth_20, &ArgTypedRval_43);
                ArgRval_44 = ((MR_Word) ((MR_hl_field(0, ArgTypedRval_43, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) ArgRval_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgRval_44, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Const_52 = ((MR_Word) ((MR_hl_field(3, ArgRval_44, (MR_Integer) 1))));
                  Var_54 = ll_backend__unify_gen_util__is_zero_const_1_f_0(Const_52);
                  succeeded = (Var_54 == (MR_Integer) 1);
                }
                if (succeeded)
                  STATE_VARIABLE_RevToOrRvals_50_51 = STATE_VARIABLE_RevToOrRvals_0_7;
                else
                {
                  MR_Word ShiftedUnsignedRval_53;

                  ShiftedUnsignedRval_53 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(ArgRval_44, Shift_39, Fill_42);
                  {
                    STATE_VARIABLE_RevToOrRvals_50_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevToOrRvals_50_51, 0) = ((MR_Box) (ShiftedUnsignedRval_53));
                    MR_hl_field(1, STATE_VARIABLE_RevToOrRvals_50_51, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_7));
                  }
                }
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__5_5 = ConstArgsPosWidths_21;
                next_value_of_STATE_VARIABLE_RevToOrRvals_0_7 = STATE_VARIABLE_RevToOrRvals_50_51;
                HeadVar__5_5 = next_value_of_HeadVar__5_5;
                STATE_VARIABLE_RevToOrRvals_0_7 = next_value_of_STATE_VARIABLE_RevToOrRvals_0_7;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_HeadVar__5_5 = ConstArgsPosWidths_21;

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
ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_arg_tag__1394__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
  MR_bool succeeded;
  MR_Word ConstArg_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 0))));
  MR_Word ArgPosWidth_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) ConstArg_11)) == (MR_Integer) 0))
  {
    MR_Integer ConstNum_14 = ((MR_Integer) ((MR_hl_field(0, ConstArg_11, (MR_Integer) 0))));
    MR_Box conv0_TypedRval_13;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_10, ConstNum_14, &conv0_TypedRval_13);
    *TypedRval_13 = ((MR_Word) (conv0_TypedRval_13));
  }
  else
  {
    MR_Word ConsId_15 = ((MR_Word) ((MR_hl_field(1, ConstArg_11, (MR_Integer) 0))));
    MR_Word ConsTag_17;

    ConsTag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_7, ConsId_15);
    switch (MR_tag((MR_Word) ConsTag_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *TypedRval_13 = (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[13]);
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_arg_tag\'/5", (MR_String) "unexpected tag");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntTag_20 = ((MR_Word) ((MR_hl_field(1, ConsTag_17, (MR_Integer) 0))));
          MR_Word IntType_21;
          MR_Word Var_41;
          MR_Word Const_72;
          MR_Word Type_73;
          MR_Word Var_74;

          ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_20, &Const_72, &IntType_21);
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (ArgPosWidth_12));
          }
          switch (IntType_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 4:
            case (MR_Integer) 6:
            case (MR_Integer) 2:
              Type_73 = (MR_Word) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[1]));
              break;
            case (MR_Integer) 8:
            case (MR_Integer) 9:
              switch (UnboxedInt64s_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ArgPosWidth_82;

                    succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ArgPosWidth_82 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) ArgPosWidth_82)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                      }
                    }
                    if (succeeded)
                      {
                        Type_73 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Type_73, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                      }
                    else
                      Type_73 = (MR_Word) ((MR_Unsigned) 12U);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    Type_73 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_73, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 5:
            case (MR_Integer) 7:
            case (MR_Integer) 3:
              Type_73 = (MR_Word) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[4]));
              break;
          }
          {
            Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_74, 1) = ((MR_Box) (Const_72));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *TypedRval_13 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
            MR_hl_field(0, base, 1) = ((MR_Box) (Type_73));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_22 = MR_unbox_float((MR_hl_field(2, ConsTag_17, (MR_Integer) 0)));
          MR_Word Var_42;
          MR_Word Const_67;
          MR_Word Type_68;
          MR_Word Var_69;

          {
            Const_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Const_67, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Const_67, 1) = MR_box_float(Float_22);
          }
          {
            Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_42, 0) = ((MR_Box) (ArgPosWidth_12));
          }
          switch (UnboxedFloats_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word ArgPosWidth_78;

                succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ArgPosWidth_78 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) ArgPosWidth_78)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                  }
                }
                if (succeeded)
                  Type_68 = (MR_Word) ((MR_Unsigned) 4U);
                else
                  Type_68 = (MR_Word) ((MR_Unsigned) 12U);
              }
              break;
            case (MR_Integer) 0:
              Type_68 = (MR_Word) ((MR_Unsigned) 4U);
              break;
          }
          {
            Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_69, 1) = ((MR_Box) (Const_67));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *TypedRval_13 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
            MR_hl_field(0, base, 1) = ((MR_Box) (Type_68));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String String_23 = ((MR_String) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 1))));
              MR_Word Const_75;
              MR_Word Var_77;

              {
                Const_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Const_75, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(3, Const_75, 1) = ((MR_Box) (String_23));
              }
              {
                Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_77, 1) = ((MR_Box) (Const_75));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_13 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_77));
                MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_24 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Val_25 = ((MR_String) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 2))));
              MR_Word Var_43;
              MR_Word Var_47;
              MR_Word Const_70;
              MR_Word Var_71;

              {
                Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_43, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[3]));
                MR_hl_field(0, Var_43, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0_1));
                MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_43, 3) = ((MR_Box) (Lang_24));
                MR_hl_field(0, Var_43, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_arg_tag\'/5", (MR_String) "foreign_tag for language other than C");
              Var_47 = (MR_Word) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[1]));
              {
                Const_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Const_70, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(3, Const_70, 1) = ((MR_Box) (Val_25));
                MR_hl_field(3, Const_70, 2) = ((MR_Box) (Var_47));
              }
              {
                Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_71, 1) = ((MR_Box) (Const_70));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_13 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_47));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word LocalSectag_27 = ((MR_Word) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 2))));
              MR_Unsigned PrimSec_30 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_27, (MR_Integer) 1))));
              MR_Word Rval_32;
              MR_Word Var_48;

              {
                Var_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_48, 0) = ((MR_Box) (PrimSec_30));
              }
              {
                Rval_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Rval_32, 1) = ((MR_Box) (Var_48));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_13 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Rval_32));
                MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_arg_tag\'/5", (MR_String) "unexpected tag");
              return;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 1))));
              MR_String TypeName_34 = ((MR_String) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 2))));
              MR_Integer TypeArity_35 = ((MR_Integer) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 3))));
              MR_Word RttiTypeCtor_36;
              MR_Word DataId_37;
              uint16_t Var_50;
              MR_Word Var_51;
              MR_Word Var_53;
              MR_Word Rval_62;

              Var_50 = mercury__uint16__det_from_int_1_f_0(TypeArity_35);
              {
                RttiTypeCtor_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, RttiTypeCtor_36, 0) = ((MR_Box) (ModuleName_33));
                MR_hl_field(0, RttiTypeCtor_36, 1) = ((MR_Box) (TypeName_34));
                MR_hl_field(0, RttiTypeCtor_36, 2) = ((MR_Box) (MR_Word) (Var_50));
              }
              {
                Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_51, 0) = ((MR_Box) (RttiTypeCtor_36));
                MR_hl_field(0, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 44U));
              }
              {
                DataId_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, DataId_37, 0) = ((MR_Box) (Var_51));
              }
              {
                Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                MR_hl_field(3, Var_53, 1) = ((MR_Box) (DataId_37));
                MR_hl_field(3, Var_53, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Rval_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Rval_62, 1) = ((MR_Box) (Var_53));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_13 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Rval_62));
                MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ClassId_38 = ((MR_Word) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 2))));
              MR_String Instance_39 = ((MR_String) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 3))));
              MR_Word TCName_40;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Rval_64;
              MR_Word ModuleName_65 = ((MR_Word) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 1))));
              MR_Word DataId_66;

              TCName_40 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_38);
              {
                Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_56, 0) = ((MR_Box) (ModuleName_65));
                MR_hl_field(1, Var_56, 1) = ((MR_Box) (Instance_39));
              }
              {
                Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_55, 0) = ((MR_Box) (TCName_40));
                MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
              }
              {
                DataId_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, DataId_66, 0) = ((MR_Box) (Var_55));
              }
              {
                Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                MR_hl_field(3, Var_57, 1) = ((MR_Box) (DataId_66));
                MR_hl_field(3, Var_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Rval_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Rval_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Rval_64, 1) = ((MR_Box) (Var_57));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_13 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Rval_64));
                MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
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
            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) 1);
            *STATE_VARIABLE_RevFieldAddrs_18 = STATE_VARIABLE_RevFieldAddrs_0_17;
          }
          break;
        case (MR_Integer) 1:
          {
            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) 2);
            *STATE_VARIABLE_RevFieldAddrs_18 = STATE_VARIABLE_RevFieldAddrs_0_17;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) 1);
        *STATE_VARIABLE_RevFieldAddrs_18 = STATE_VARIABLE_RevFieldAddrs_0_17;
      }
      break;
    case (MR_Integer) 2:
      {
        *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) 2);
        *STATE_VARIABLE_RevFieldAddrs_18 = STATE_VARIABLE_RevFieldAddrs_0_17;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, CellArg_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_13 = ((MR_Word) ((MR_hl_field(3, CellArg_6, (MR_Integer) 1))));
            MR_Word FieldAddr_16;

            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) 1);
            {
              FieldAddr_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FieldAddr_16, 0) = ((MR_Box) (ArgOffset_7));
              MR_hl_field(0, FieldAddr_16, 1) = ((MR_Box) (Var_13));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevFieldAddrs_18 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (FieldAddr_16));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevFieldAddrs_0_17));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_23 = ((MR_Word) ((MR_hl_field(3, CellArg_6, (MR_Integer) 1))));
            MR_Word FieldAddr_24;

            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) 2);
            {
              FieldAddr_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FieldAddr_24, 0) = ((MR_Box) (ArgOffset_7));
              MR_hl_field(0, FieldAddr_24, 1) = ((MR_Box) (Var_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevFieldAddrs_18 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (FieldAddr_24));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevFieldAddrs_0_17));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ConstStructMap_25;
  MR_Word conv0_STATE_VARIABLE_StaticCellInfo_27;

  ll_backend__unify_gen_construct__generate_const_struct_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConstStructMap_25, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_StaticCellInfo_27);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConstStructMap_25));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_StaticCellInfo_27));
}

void MR_CALL 
ll_backend__unify_gen_construct__generate_const_structs_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * ConstStructMap_6,
  MR_Word STATE_VARIABLE_GlobalData_0_17,
  MR_Word * STATE_VARIABLE_GlobalData_18)
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
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 292, &OptUnboxedFloats_9);
  switch (OptUnboxedFloats_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UnboxedFloats_10 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      UnboxedFloats_10 = (MR_Integer) 0;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 293, &OptUnboxedInt64s_11);
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
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_6[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_const_structs_4_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (UnboxedFloats_10));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (UnboxedInt64s_12));
  }
  Var_22 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_2[0]), (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_2[1]), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), Var_21, ConstStructs_14, ((MR_Box) (Var_22)), &conv3_ConstStructMap_6, ((MR_Box) (StaticCellInfo0_15)), &conv2_StaticCellInfo_16);
  *ConstStructMap_6 = ((MR_Word) (conv3_ConstStructMap_6));
  StaticCellInfo_16 = ((MR_Word) (conv2_StaticCellInfo_16));
  ll_backend__global_data__global_data_set_static_cell_info_3_p_0(StaticCellInfo_16, STATE_VARIABLE_GlobalData_0_17, STATE_VARIABLE_GlobalData_18);
}

void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_6_p_0(
  MR_Word TermVar_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_CI_0_25,
  MR_Word * STATE_VARIABLE_CI_26,
  MR_Word STATE_VARIABLE_CLD_0_27,
  MR_Word * STATE_VARIABLE_CLD_28)
{
  MR_bool succeeded;
  MR_Word TermVarIsNeeded_11;
  MR_Word Conjuncts_12;
  MR_Word GoalInfo_13;

  hlds__goal_form__get_from_ground_term_construct_info_5_p_0(TermVar_7, Goal_8, &TermVarIsNeeded_11, &Conjuncts_12, &GoalInfo_13);
  switch (TermVarIsNeeded_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ModuleInfo_14;
        MR_Word ExprnOpts_15;
        MR_Word StaticCellInfo0_16;
        MR_Word ActiveMap0_17;
        MR_Word StaticCellInfo_18;
        MR_Word ActiveMap_19;
        MR_Word ActivePairs_20;
        MR_Word GroundTerm_21;
        MR_Word TypeInfo_39_39;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_38;

        ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_25, &ModuleInfo_14);
        ll_backend__code_info__get_exprn_opts_2_p_0(STATE_VARIABLE_CI_0_25, &ExprnOpts_15);
        ll_backend__code_info__get_static_cell_info_2_p_0(STATE_VARIABLE_CI_0_25, &StaticCellInfo0_16);
        mercury__map__init_1_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), &ActiveMap0_17);
        ll_backend__unify_gen_construct__generate_ground_term_conjuncts_7_p_0(ModuleInfo_14, ExprnOpts_15, Conjuncts_12, StaticCellInfo0_16, &StaticCellInfo_18, ActiveMap0_17, &ActiveMap_19);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ActiveMap_19, &ActivePairs_20);
        succeeded = (ActivePairs_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_29 = ((MR_Word) ((MR_hl_field(1, ActivePairs_20, (MR_Integer) 0))));
          Var_30 = ((MR_Word) ((MR_hl_field(1, ActivePairs_20, (MR_Integer) 1))));
          Var_38 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
          GroundTerm_21 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 1))));
          TypeInfo_39_39 = (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (TermVar_7)), ((MR_Box) (Var_38)));
          if (succeeded)
            succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word NonLocals_22;
          MR_Word Rval_23;
          MR_Word STATE_VARIABLE_CLD_31_31;

          NonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_13);
          ll_backend__code_loc_dep__add_forward_live_vars_3_p_0(NonLocals_22, STATE_VARIABLE_CLD_0_27, &STATE_VARIABLE_CLD_31_31);
          ll_backend__code_info__set_static_cell_info_3_p_0(StaticCellInfo_18, STATE_VARIABLE_CI_0_25, STATE_VARIABLE_CI_26);
          Rval_23 = ((MR_Word) ((MR_hl_field(0, GroundTerm_21, (MR_Integer) 0))));
          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(TermVar_7, Rval_23, *STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_31_31, STATE_VARIABLE_CLD_28);
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term\'/6", (MR_String) "no active pairs");
            return;
          }
      }
      break;
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_CI_26 = STATE_VARIABLE_CI_0_25;
        *STATE_VARIABLE_CLD_28 = STATE_VARIABLE_CLD_0_27;
      }
      break;
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ActiveMap_7 = STATE_VARIABLE_ActiveMap_0_6;
      *STATE_VARIABLE_StaticCellInfo_5 = STATE_VARIABLE_StaticCellInfo_0_4;
    }
    else
    {
      MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_StaticCellInfo_26_26;
      MR_Word STATE_VARIABLE_ActiveMap_27_27;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_StaticCellInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ActiveMap_0_6;

      ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0(HeadVar__1_1, HeadVar__2_2, Goal_18, STATE_VARIABLE_StaticCellInfo_0_4, &STATE_VARIABLE_StaticCellInfo_26_26, STATE_VARIABLE_ActiveMap_0_6, &STATE_VARIABLE_ActiveMap_27_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Goals_19;
      next_value_of_STATE_VARIABLE_StaticCellInfo_0_4 = STATE_VARIABLE_StaticCellInfo_26_26;
      next_value_of_STATE_VARIABLE_ActiveMap_0_6 = STATE_VARIABLE_ActiveMap_27_27;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_StaticCellInfo_0_4 = next_value_of_STATE_VARIABLE_StaticCellInfo_0_4;
      STATE_VARIABLE_ActiveMap_0_6 = next_value_of_STATE_VARIABLE_ActiveMap_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_9(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__6_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_8(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__5_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_7(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__994__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_6(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__988__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_5(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__4_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__3_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__905__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__919__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ExprnOpts_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_82,
  MR_Word * STATE_VARIABLE_StaticCellInfo_83,
  MR_Word STATE_VARIABLE_ActiveMap_0_84,
  MR_Word * STATE_VARIABLE_ActiveMap_85)
{
  MR_bool succeeded;
  MR_Word LHSVar_13;
  MR_Word ConsId_14;
  MR_Word RHSVars_15;
  MR_Word ConsTag_17;
  MR_Word _GoalInfo_16;

  hlds__goal_form__get_from_ground_term_construct_conjunct_info_5_p_0(Goal_10, &LHSVar_13, &ConsId_14, &RHSVars_15, &_GoalInfo_16);
  ConsTag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_8, ConsId_14);
  switch (MR_tag((MR_Word) ConsTag_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_17)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_97;

            {
              Var_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_97, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_97, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_1));
              MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_97, 3) = ((MR_Box) (RHSVars_15));
              MR_hl_field(0, Var_97, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_97, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "constant has args");
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[13])), STATE_VARIABLE_ActiveMap_0_84, STATE_VARIABLE_ActiveMap_85);
            *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHSVar_75;
            MR_Word RvalType_76;
            MR_Word STATE_VARIABLE_ActiveMap_135_135;
            MR_Box conv2_RHSVar_75;
            MR_Box conv3_RvalType_76;

            hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), RHSVars_15, &conv2_RHSVar_75);
            RHSVar_75 = ((MR_Word) (conv2_RHSVar_75));
            mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (RHSVar_75)), &conv3_RvalType_76, STATE_VARIABLE_ActiveMap_0_84, &STATE_VARIABLE_ActiveMap_135_135);
            RvalType_76 = ((MR_Word) (conv3_RvalType_76));
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (RvalType_76)), STATE_VARIABLE_ActiveMap_135_135, STATE_VARIABLE_ActiveMap_85);
            *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntTag_18 = ((MR_Word) ((MR_hl_field(1, ConsTag_17, (MR_Integer) 0))));
        MR_Word IntType_20;
        MR_Word UnboxedInt64s_21;
        MR_Word Const_198;
        MR_Word Type_199;
        MR_Word ActiveGroundTerm_200;
        MR_Word Var_201;
        MR_Word Var_205;

        ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_18, &Const_198, &IntType_20);
        UnboxedInt64s_21 = ll_backend__llds__get_unboxed_int64s_1_f_0(ExprnOpts_9);
        ll_backend__unify_gen_construct__store_int_tag_statically_4_p_0(IntType_20, UnboxedInt64s_21, (MR_Word) ((MR_Unsigned) 0U), &Type_199);
        {
          Var_201 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_201, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
          MR_hl_field(0, Var_201, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_5));
          MR_hl_field(0, Var_201, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_201, 3) = ((MR_Box) (RHSVars_15));
          MR_hl_field(0, Var_201, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_201, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "constant has args");
        {
          Var_205 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_205, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_205, 1) = ((MR_Box) (Const_198));
        }
        {
          ActiveGroundTerm_200 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ActiveGroundTerm_200, 0) = ((MR_Box) (Var_205));
          MR_hl_field(0, ActiveGroundTerm_200, 1) = ((MR_Box) (Type_199));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_200)), STATE_VARIABLE_ActiveMap_0_84, STATE_VARIABLE_ActiveMap_85);
        *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float Float_23 = MR_unbox_float((MR_hl_field(2, ConsTag_17, (MR_Integer) 0)));
        MR_Word UnboxedFloats_24;
        MR_Word Const_172;
        MR_Word Type_173;
        MR_Word ActiveGroundTerm_174;
        MR_Word Var_175;
        MR_Word Var_179;

        {
          Const_172 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Const_172, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Const_172, 1) = MR_box_float(Float_23);
        }
        UnboxedFloats_24 = ll_backend__llds__get_unboxed_floats_1_f_0(ExprnOpts_9);
        ll_backend__unify_gen_construct__store_float_tag_statically_3_p_0(UnboxedFloats_24, (MR_Word) ((MR_Unsigned) 0U), &Type_173);
        {
          Var_175 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_175, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
          MR_hl_field(0, Var_175, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_2));
          MR_hl_field(0, Var_175, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_175, 3) = ((MR_Box) (RHSVars_15));
          MR_hl_field(0, Var_175, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_175, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "constant has args");
        {
          Var_179 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_179, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_179, 1) = ((MR_Box) (Const_172));
        }
        {
          ActiveGroundTerm_174 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ActiveGroundTerm_174, 0) = ((MR_Box) (Var_179));
          MR_hl_field(0, ActiveGroundTerm_174, 1) = ((MR_Box) (Type_173));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_174)), STATE_VARIABLE_ActiveMap_0_84, STATE_VARIABLE_ActiveMap_85);
        *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String String_25 = ((MR_String) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 1))));
            MR_Word Const_225;
            MR_Word ActiveGroundTerm_227;
            MR_Word Var_228;
            MR_Word Var_232;

            {
              Const_225 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_225, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, Const_225, 1) = ((MR_Box) (String_25));
            }
            {
              Var_228 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_228, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_228, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_9));
              MR_hl_field(0, Var_228, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_228, 3) = ((MR_Box) (RHSVars_15));
              MR_hl_field(0, Var_228, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_228, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "constant has args");
            {
              Var_232 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_232, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_232, 1) = ((MR_Box) (Const_225));
            }
            {
              ActiveGroundTerm_227 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ActiveGroundTerm_227, 0) = ((MR_Box) (Var_232));
              MR_hl_field(0, ActiveGroundTerm_227, 1) = ((MR_Box) ((MR_Unsigned) 8U));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_227)), STATE_VARIABLE_ActiveMap_0_84, STATE_VARIABLE_ActiveMap_85);
            *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lang_26 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String Val_27 = ((MR_String) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 2))));
            MR_Word Var_88;
            MR_Word Const_185;
            MR_Word ActiveGroundTerm_187;
            MR_Word Var_188;
            MR_Word Var_192;

            {
              Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_88, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[3]));
              MR_hl_field(0, Var_88, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_3));
              MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_88, 3) = ((MR_Box) (Lang_26));
              MR_hl_field(0, Var_88, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_88, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "foreign_tag for language other than C");
            {
              Const_185 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_185, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Const_185, 1) = ((MR_Box) (Val_27));
              MR_hl_field(3, Const_185, 2) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[1])));
            }
            {
              Var_188 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_188, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_188, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_4));
              MR_hl_field(0, Var_188, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_188, 3) = ((MR_Box) (RHSVars_15));
              MR_hl_field(0, Var_188, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_188, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "constant has args");
            {
              Var_192 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_192, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_192, 1) = ((MR_Box) (Const_185));
            }
            {
              ActiveGroundTerm_187 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ActiveGroundTerm_187, 0) = ((MR_Box) (Var_192));
              MR_hl_field(0, ActiveGroundTerm_187, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[1])));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_187)), STATE_VARIABLE_ActiveMap_0_84, STATE_VARIABLE_ActiveMap_85);
            *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LocalSectag_29 = ((MR_Word) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 2))));
            MR_Unsigned PrimSec_32 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_29, (MR_Integer) 1))));
            MR_Word Const_212;
            MR_Word ActiveGroundTerm_214;
            MR_Word Var_215;
            MR_Word Var_219;

            {
              Const_212 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Const_212, 0) = ((MR_Box) (PrimSec_32));
            }
            {
              Var_215 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_215, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_215, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_8));
              MR_hl_field(0, Var_215, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_215, 3) = ((MR_Box) (RHSVars_15));
              MR_hl_field(0, Var_215, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_215, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "constant has args");
            {
              Var_219 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_219, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_219, 1) = ((MR_Box) (Const_212));
            }
            {
              ActiveGroundTerm_214 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ActiveGroundTerm_214, 0) = ((MR_Box) (Var_219));
              MR_hl_field(0, ActiveGroundTerm_214, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_214)), STATE_VARIABLE_ActiveMap_0_84, STATE_VARIABLE_ActiveMap_85);
            *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
          }
          break;
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "unexpected constant");
            return;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_51 = ((MR_Word) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 1))));
            MR_Word RHSVarsWidths_52;
            MR_Word Ptag_53;
            MR_Word AllRHSTypedRvals_55;
            MR_Word DataAddr_68;
            MR_Word CellPtrConst_70;
            MR_Word LHSRval_71;
            MR_Word STATE_VARIABLE_ActiveMap_106_106;
            MR_Word Var_121;
            MR_Word ActiveGroundTerm_144;

            ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), ModuleInfo_8, ConsId_14, RHSVars_15, &RHSVarsWidths_52);
            switch (MR_tag((MR_Word) RemoteArgsTagInfo_51)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Ptag_53 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                  ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(RHSVarsWidths_52, &AllRHSTypedRvals_55, STATE_VARIABLE_ActiveMap_0_84, &STATE_VARIABLE_ActiveMap_106_106);
                }
                break;
              case (MR_Integer) 1:
                {
                  Ptag_53 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_51, (MR_Integer) 0))));
                  ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(RHSVarsWidths_52, &AllRHSTypedRvals_55, STATE_VARIABLE_ActiveMap_0_84, &STATE_VARIABLE_ActiveMap_106_106);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_56;
                  MR_Unsigned SectagUint_57;
                  MR_Word SectagSize_58;
                  MR_Word TagwordTypedRval_59;
                  MR_Word NonTagwordRHSVarsWidths_60;
                  MR_Word NonTagwordPackedRHSTypedRvals_66;
                  MR_Word STATE_VARIABLE_ActiveMap_114_114;

                  Ptag_53 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_51, (MR_Integer) 0))));
                  RemoteSectag_56 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_51, (MR_Integer) 1))));
                  SectagUint_57 = ((MR_Unsigned) ((MR_hl_field(0, RemoteSectag_56, (MR_Integer) 0))));
                  SectagSize_58 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_56, (MR_Integer) 1))));
                  if ((SectagSize_58 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_107;
                    MR_Word Var_108;

                    {
                      Var_108 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_108, 0) = ((MR_Box) (SectagUint_57));
                    }
                    {
                      Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, Var_107, 1) = ((MR_Box) (Var_108));
                    }
                    {
                      TagwordTypedRval_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TagwordTypedRval_59, 0) = ((MR_Box) (Var_107));
                      MR_hl_field(0, TagwordTypedRval_59, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[4])));
                    }
                    NonTagwordRHSVarsWidths_60 = RHSVarsWidths_52;
                    STATE_VARIABLE_ActiveMap_114_114 = STATE_VARIABLE_ActiveMap_0_84;
                  }
                  else
                  {
                    MR_Word RevToOrRvals0_62;
                    MR_Word RevToOrRvals_63;
                    MR_Word ToOrRvals_64;
                    MR_Word TagwordRval_65;

                    succeeded = (SectagUint_57 == (MR_Unsigned) 0U);
                    if (succeeded)
                      RevToOrRvals0_62 = (MR_Word) ((MR_Unsigned) 0U);
                    else
                    {
                      MR_Word Var_111;
                      MR_Word Var_112;

                      {
                        Var_112 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_112, 0) = ((MR_Box) (SectagUint_57));
                      }
                      {
                        Var_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_111, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_111, 1) = ((MR_Box) (Var_112));
                      }
                      {
                        RevToOrRvals0_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, RevToOrRvals0_62, 0) = ((MR_Box) (Var_111));
                        MR_hl_field(1, RevToOrRvals0_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    ll_backend__unify_gen_construct__generate_ground_term_args_for_one_word_6_p_0(RHSVarsWidths_52, &NonTagwordRHSVarsWidths_60, RevToOrRvals0_62, &RevToOrRvals_63, STATE_VARIABLE_ActiveMap_0_84, &STATE_VARIABLE_ActiveMap_114_114);
                    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_63, &ToOrRvals_64);
                    TagwordRval_65 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_64);
                    {
                      TagwordTypedRval_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TagwordTypedRval_59, 0) = ((MR_Box) (TagwordRval_65));
                      MR_hl_field(0, TagwordTypedRval_59, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[4])));
                    }
                  }
                  ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(NonTagwordRHSVarsWidths_60, &NonTagwordPackedRHSTypedRvals_66, STATE_VARIABLE_ActiveMap_114_114, &STATE_VARIABLE_ActiveMap_106_106);
                  {
                    AllRHSTypedRvals_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, AllRHSTypedRvals_55, 0) = ((MR_Box) (TagwordTypedRval_59));
                    MR_hl_field(1, AllRHSTypedRvals_55, 1) = ((MR_Box) (NonTagwordPackedRHSTypedRvals_66));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "remote_args_ctor");
                  return;
                }
                break;
            }
            ll_backend__global_data__add_scalar_static_cell_4_p_0(AllRHSTypedRvals_55, &DataAddr_68, STATE_VARIABLE_StaticCellInfo_0_82, STATE_VARIABLE_StaticCellInfo_83);
            {
              Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, Var_121, 1) = ((MR_Box) (DataAddr_68));
              MR_hl_field(3, Var_121, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              CellPtrConst_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, CellPtrConst_70, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, CellPtrConst_70, 1) = ((MR_Box) (Var_121));
            }
            {
              LHSRval_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, LHSRval_71, 0) = ((MR_Box) (Ptag_53));
              MR_hl_field(2, LHSRval_71, 1) = ((MR_Box) (CellPtrConst_70));
            }
            {
              ActiveGroundTerm_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ActiveGroundTerm_144, 0) = ((MR_Box) (LHSRval_71));
              MR_hl_field(0, ActiveGroundTerm_144, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_144)), STATE_VARIABLE_ActiveMap_106_106, STATE_VARIABLE_ActiveMap_85);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_72 = ((MR_Word) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 1))));
            MR_Word LeftOverRHSVarsWidths_73;
            MR_Word PackedRval_74;
            MR_Word Var_124;
            MR_Word STATE_VARIABLE_ActiveMap_128_128;
            MR_Word Var_129;
            MR_Word ActiveGroundTerm_145;
            MR_Word RHSVarsWidths_146;
            MR_Word RevToOrRvals0_147;
            MR_Word RevToOrRvals_148;
            MR_Word ToOrRvals_149;

            {
              Var_124 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_124, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_124, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_6));
              MR_hl_field(0, Var_124, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_124, 3) = ((MR_Box) (RHSVars_15));
              MR_hl_field(0, Var_124, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_not_3_p_0(Var_124, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "local_args_tag has no args");
            ll_backend__unify_gen_construct__maybe_accumulate_local_sectag_2_p_0(LocalArgsTagInfo_72, &RevToOrRvals0_147);
            ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), ModuleInfo_8, ConsId_14, RHSVars_15, &RHSVarsWidths_146);
            ll_backend__unify_gen_construct__generate_ground_term_args_for_one_word_6_p_0(RHSVarsWidths_146, &LeftOverRHSVarsWidths_73, RevToOrRvals0_147, &RevToOrRvals_148, STATE_VARIABLE_ActiveMap_0_84, &STATE_VARIABLE_ActiveMap_128_128);
            {
              Var_129 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_129, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[5]));
              MR_hl_field(0, Var_129, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_7));
              MR_hl_field(0, Var_129, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_129, 3) = ((MR_Box) (LeftOverRHSVarsWidths_73));
              MR_hl_field(0, Var_129, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_129, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "left over args");
            mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_148, &ToOrRvals_149);
            PackedRval_74 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_149);
            {
              ActiveGroundTerm_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ActiveGroundTerm_145, 0) = ((MR_Box) (PackedRval_74));
              MR_hl_field(0, ActiveGroundTerm_145, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_145)), STATE_VARIABLE_ActiveMap_128_128, STATE_VARIABLE_ActiveMap_85);
            *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word RHSRval_77;
            MR_Word Var_137;
            MR_Word STATE_VARIABLE_ActiveMap_138_138;
            MR_Word ActiveGroundTerm_150;
            MR_Word Ptag_151 = ((MR_Word) ((MR_hl_field(3, ConsTag_17, (MR_Integer) 1))));
            MR_Word LHSRval_152;
            MR_Word RHSVar_153;
            MR_Box conv0_RHSVar_153;
            MR_Box conv1_Var_137;
            uint8_t Var_139;

            hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), RHSVars_15, &conv0_RHSVar_153);
            RHSVar_153 = ((MR_Word) (conv0_RHSVar_153));
            mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (RHSVar_153)), &conv1_Var_137, STATE_VARIABLE_ActiveMap_0_84, &STATE_VARIABLE_ActiveMap_138_138);
            Var_137 = ((MR_Word) (conv1_Var_137));
            RHSRval_77 = ((MR_Word) ((MR_hl_field(0, Var_137, (MR_Integer) 0))));
            Var_139 = (uint8_t) (Ptag_151);
            succeeded = (Var_139 == UINT8_C(0));
            if (succeeded)
              LHSRval_152 = RHSRval_77;
            else
              {
                LHSRval_152 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, LHSRval_152, 0) = ((MR_Box) (Ptag_151));
                MR_hl_field(2, LHSRval_152, 1) = ((MR_Box) (RHSRval_77));
              }
            {
              ActiveGroundTerm_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ActiveGroundTerm_150, 0) = ((MR_Box) (LHSRval_152));
              MR_hl_field(0, ActiveGroundTerm_150, 1) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_150)), STATE_VARIABLE_ActiveMap_138_138, STATE_VARIABLE_ActiveMap_85);
            *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "unexpected closure");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__store_float_tag_statically_3_p_0(
  MR_Word UnboxedFloats_4,
  MR_Word MayStoreDoubleWidthStatically_5,
  MR_Word * Type_6)
{
  MR_bool succeeded;

  switch (UnboxedFloats_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgPosWidth_7;

        succeeded = (MayStoreDoubleWidthStatically_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgPosWidth_7 = ((MR_Word) ((MR_hl_field(1, MayStoreDoubleWidthStatically_5, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) ArgPosWidth_7)) == (MR_Integer) 2);
          if (succeeded)
          {
          }
        }
        if (succeeded)
          *Type_6 = (MR_Word) ((MR_Unsigned) 4U);
        else
          *Type_6 = (MR_Word) ((MR_Unsigned) 12U);
      }
      break;
    case (MR_Integer) 0:
      *Type_6 = (MR_Word) ((MR_Unsigned) 4U);
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__store_int_tag_statically_4_p_0(
  MR_Word IntType_5,
  MR_Word UnboxedInt64s_6,
  MR_Word MayStoreDoubleWidthStatically_7,
  MR_Word * Type_8)
{
  MR_bool succeeded;

  switch (IntType_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 4:
    case (MR_Integer) 6:
    case (MR_Integer) 2:
      *Type_8 = (MR_Word) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[1]));
      break;
    case (MR_Integer) 8:
    case (MR_Integer) 9:
      switch (UnboxedInt64s_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ArgPosWidth_9;

            succeeded = (MayStoreDoubleWidthStatically_7 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArgPosWidth_9 = ((MR_Word) ((MR_hl_field(1, MayStoreDoubleWidthStatically_7, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) ArgPosWidth_9)) == (MR_Integer) 2);
              if (succeeded)
              {
              }
            }
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Type_8 = base;
                MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (IntType_5));
              }
            else
              *Type_8 = (MR_Word) ((MR_Unsigned) 12U);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Type_8 = base;
            MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (IntType_5));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 5:
    case (MR_Integer) 7:
    case (MR_Integer) 3:
      *Type_8 = (MR_Word) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[4]));
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ActiveMap_0_3,
  MR_Word * STATE_VARIABLE_ActiveMap_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ActiveMap_4 = STATE_VARIABLE_ActiveMap_0_3;
  }
  else
  {
    MR_Word ArgVarWidth_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgVarsWidths_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TypedRval_10;
    MR_Word TypedRvals_11;
    MR_Word ArgVar_13 = ((MR_Word) ((MR_hl_field(0, ArgVarWidth_8, (MR_Integer) 0))));
    MR_Word ArgPosWidth_14 = ((MR_Word) ((MR_hl_field(0, ArgVarWidth_8, (MR_Integer) 1))));
    MR_Word ArgTypedRval_15;
    MR_Word STATE_VARIABLE_ActiveMap_44_44;
    MR_Box conv0_ArgTypedRval_15;

    mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_13)), &conv0_ArgTypedRval_15, STATE_VARIABLE_ActiveMap_0_3, &STATE_VARIABLE_ActiveMap_44_44);
    ArgTypedRval_15 = ((MR_Word) (conv0_ArgTypedRval_15));
    switch (MR_tag((MR_Word) ArgPosWidth_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_args\'/4", (MR_String) "apw_none_nowhere");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          TypedRval_10 = ArgTypedRval_15;
          ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(ArgVarsWidths_9, &TypedRvals_11, STATE_VARIABLE_ActiveMap_44_44, STATE_VARIABLE_ActiveMap_4);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DoubleWordKind_20 = ((MR_Unsigned) ((MR_hl_field(2, ArgPosWidth_14, (MR_Integer) 2))) & (MR_Integer) 3);
          MR_Word ArgRval_21 = ((MR_Word) ((MR_hl_field(0, ArgTypedRval_15, (MR_Integer) 0))));
          MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, ArgTypedRval_15, (MR_Integer) 1))));

          succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 12U));
          if (succeeded)
            switch (DoubleWordKind_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  TypedRval_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypedRval_10, 0) = ((MR_Box) (ArgRval_21));
                  MR_hl_field(0, TypedRval_10, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                }
                break;
              case (MR_Integer) 1:
                {
                  TypedRval_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypedRval_10, 0) = ((MR_Box) (ArgRval_21));
                  MR_hl_field(0, TypedRval_10, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[5])));
                }
                break;
              case (MR_Integer) 2:
                {
                  TypedRval_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, TypedRval_10, 0) = ((MR_Box) (ArgRval_21));
                  MR_hl_field(0, TypedRval_10, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[6])));
                }
                break;
            }
          else
            TypedRval_10 = ArgTypedRval_15;
          ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(ArgVarsWidths_9, &TypedRvals_11, STATE_VARIABLE_ActiveMap_44_44, STATE_VARIABLE_ActiveMap_4);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Shift_24 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_14, (MR_Integer) 3))));
              MR_Word Fill_27 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_14, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Word RevToOrRvals0_29;
              MR_Word LeftOverArgVarsWidths_30;
              MR_Word RevToOrRvals_31;
              MR_Word ToOrRvals_32;
              MR_Word PackedRval_33;
              MR_Word STATE_VARIABLE_ActiveMap_54_54;
              MR_Word ArgRval_64 = ((MR_Word) ((MR_hl_field(0, ArgTypedRval_15, (MR_Integer) 0))));
              MR_Word Const_68;
              MR_Word Var_70;

              succeeded = ((((MR_tag((MR_Word) ArgRval_64)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgRval_64, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Const_68 = ((MR_Word) ((MR_hl_field(3, ArgRval_64, (MR_Integer) 1))));
                Var_70 = ll_backend__unify_gen_util__is_zero_const_1_f_0(Const_68);
                succeeded = (Var_70 == (MR_Integer) 1);
              }
              if (succeeded)
                RevToOrRvals0_29 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word ShiftedUnsignedRval_69;

                ShiftedUnsignedRval_69 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(ArgRval_64, Shift_24, Fill_27);
                {
                  RevToOrRvals0_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, RevToOrRvals0_29, 0) = ((MR_Box) (ShiftedUnsignedRval_69));
                  MR_hl_field(1, RevToOrRvals0_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              ll_backend__unify_gen_construct__generate_ground_term_args_for_one_word_6_p_0(ArgVarsWidths_9, &LeftOverArgVarsWidths_30, RevToOrRvals0_29, &RevToOrRvals_31, STATE_VARIABLE_ActiveMap_44_44, &STATE_VARIABLE_ActiveMap_54_54);
              mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_31, &ToOrRvals_32);
              PackedRval_33 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_32);
              {
                TypedRval_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypedRval_10, 0) = ((MR_Box) (PackedRval_33));
                MR_hl_field(0, TypedRval_10, 1) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[4])));
              }
              ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(LeftOverArgVarsWidths_30, &TypedRvals_11, STATE_VARIABLE_ActiveMap_54_54, STATE_VARIABLE_ActiveMap_4);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_args\'/4", (MR_String) "apw_partial_shifted");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_args\'/4", (MR_String) "apw_none_shifted");
              return;
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypedRval_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (TypedRvals_11));
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_args_for_one_word_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_3,
  MR_Word * STATE_VARIABLE_RevToOrRvals_4,
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
      *STATE_VARIABLE_ActiveMap_6 = STATE_VARIABLE_ActiveMap_0_5;
      *STATE_VARIABLE_RevToOrRvals_4 = STATE_VARIABLE_RevToOrRvals_0_3;
    }
    else
    {
      MR_Word ArgVarWidth_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgVarsWidths_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgVar_18 = ((MR_Word) ((MR_hl_field(0, ArgVarWidth_13, (MR_Integer) 0))));
      MR_Word ArgPosWidth_19 = ((MR_Word) ((MR_hl_field(0, ArgVarWidth_13, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevToOrRvals_4 = STATE_VARIABLE_RevToOrRvals_0_3;
            *STATE_VARIABLE_ActiveMap_6 = STATE_VARIABLE_ActiveMap_0_5;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *STATE_VARIABLE_RevToOrRvals_4 = STATE_VARIABLE_RevToOrRvals_0_3;
            *STATE_VARIABLE_ActiveMap_6 = STATE_VARIABLE_ActiveMap_0_5;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_19, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__2_2 = HeadVar__1_1;
                *STATE_VARIABLE_RevToOrRvals_4 = STATE_VARIABLE_RevToOrRvals_0_3;
                *STATE_VARIABLE_ActiveMap_6 = STATE_VARIABLE_ActiveMap_0_5;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Shift_33 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_19, (MR_Integer) 3))));
                MR_Word Fill_36 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_19, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word ArgTypedRval_37;
                MR_Word ArgRval_38;
                MR_Word STATE_VARIABLE_ActiveMap_47_53;
                MR_Word STATE_VARIABLE_RevToOrRvals_48_54;
                MR_Box conv1_ArgTypedRval_37;
                MR_Word Const_55;
                MR_Word Var_57;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_RevToOrRvals_0_3;
                MR_Word next_value_of_STATE_VARIABLE_ActiveMap_0_5;

                mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_18)), &conv1_ArgTypedRval_37, STATE_VARIABLE_ActiveMap_0_5, &STATE_VARIABLE_ActiveMap_47_53);
                ArgTypedRval_37 = ((MR_Word) (conv1_ArgTypedRval_37));
                ArgRval_38 = ((MR_Word) ((MR_hl_field(0, ArgTypedRval_37, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) ArgRval_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgRval_38, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Const_55 = ((MR_Word) ((MR_hl_field(3, ArgRval_38, (MR_Integer) 1))));
                  Var_57 = ll_backend__unify_gen_util__is_zero_const_1_f_0(Const_55);
                  succeeded = (Var_57 == (MR_Integer) 1);
                }
                if (succeeded)
                  STATE_VARIABLE_RevToOrRvals_48_54 = STATE_VARIABLE_RevToOrRvals_0_3;
                else
                {
                  MR_Word ShiftedUnsignedRval_56;

                  ShiftedUnsignedRval_56 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(ArgRval_38, Shift_33, Fill_36);
                  {
                    STATE_VARIABLE_RevToOrRvals_48_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevToOrRvals_48_54, 0) = ((MR_Box) (ShiftedUnsignedRval_56));
                    MR_hl_field(1, STATE_VARIABLE_RevToOrRvals_48_54, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_3));
                  }
                }
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ArgVarsWidths_14;
                next_value_of_STATE_VARIABLE_RevToOrRvals_0_3 = STATE_VARIABLE_RevToOrRvals_48_54;
                next_value_of_STATE_VARIABLE_ActiveMap_0_5 = STATE_VARIABLE_ActiveMap_47_53;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                STATE_VARIABLE_RevToOrRvals_0_3 = next_value_of_STATE_VARIABLE_RevToOrRvals_0_3;
                STATE_VARIABLE_ActiveMap_0_5 = next_value_of_STATE_VARIABLE_ActiveMap_0_5;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_ActiveMap_47_47;
                MR_Box conv0__ArgTypedRval_42;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_ActiveMap_0_5;

                mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_18)), &conv0__ArgTypedRval_42, STATE_VARIABLE_ActiveMap_0_5, &STATE_VARIABLE_ActiveMap_47_47);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ArgVarsWidths_14;
                next_value_of_STATE_VARIABLE_ActiveMap_0_5 = STATE_VARIABLE_ActiveMap_47_47;
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
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_20(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__264__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_19(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__255__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_18(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__273__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_17(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__281__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_16(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__280__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_15(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__14_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_14(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__13_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_13(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__12_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_12(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__11_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_11(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__10_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_10(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__9_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_9(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__8_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_8(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__7_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_7(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__6_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_6(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__134__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_5(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__5_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__4_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__3_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__121__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
  MR_Word STATE_VARIABLE_CI_0_124,
  MR_Word * STATE_VARIABLE_CI_125,
  MR_Word STATE_VARIABLE_CLD_0_126,
  MR_Word * STATE_VARIABLE_CLD_127)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_25;
  MR_Word ConsTag_26;
  MR_Word RHSVarsWidths_27;

  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_124, &ModuleInfo_25);
  ConsTag_26 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_25, ConsId_15);
  ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), ModuleInfo_25, ConsId_15, RHSVars_16, &RHSVarsWidths_27);
  switch (MR_tag((MR_Word) ConsTag_26)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_284;

            {
              Var_284 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_284, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_284, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_3));
              MR_hl_field(0, Var_284, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_284, 3) = ((MR_Box) (RHSVars_16));
              MR_hl_field(0, Var_284, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_284, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, (MR_Word) (MR_mkword(3, &ll_backend__unify_gen_construct_scalar_common_1[9])), STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHSVar_119;
            MR_Word ArgMode_120;
            MR_Word RHSType_121;
            MR_Word Var_185;
            MR_Box conv6_RHSVar_119;
            MR_Box conv5_ArgMode_120;

            {
              Var_185 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_185, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
              MR_hl_field(0, Var_185, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_20));
              MR_hl_field(0, Var_185, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_185, 3) = ((MR_Box) (TakeAddr_19));
              MR_hl_field(0, Var_185, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_185, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "notag: take_addr");
            hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_16, ArgModes_17, &conv6_RHSVar_119, &conv5_ArgMode_120);
            RHSVar_119 = ((MR_Word) (conv6_RHSVar_119));
            ArgMode_120 = ((MR_Word) (conv5_ArgMode_120));
            RHSType_121 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_124, RHSVar_119);
            ll_backend__unify_gen_deconstruct__generate_deconstruct_no_tag_unify_arg_8_p_0(LHSVar_14, RHSVar_119, RHSType_121, ArgMode_120, Code_22, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntTag_52;
        MR_Word Const_53;
        MR_Word ConstRval_319;
        MR_Word Var_320;
        MR_Word Var_54;

        {
          Var_320 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_320, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
          MR_hl_field(0, Var_320, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_8));
          MR_hl_field(0, Var_320, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_320, 3) = ((MR_Box) (RHSVars_16));
          MR_hl_field(0, Var_320, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_320, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
        IntTag_52 = ((MR_Word) ((MR_hl_field(1, ConsTag_26, (MR_Integer) 0))));
        ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_52, &Const_53, &Var_54);
        {
          ConstRval_319 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConstRval_319, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, ConstRval_319, 1) = ((MR_Box) (Const_53));
        }
        ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_319, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
        *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Float Float_56;
        MR_Word Var_132;
        MR_Word ConstRval_292;
        MR_Word Var_293;

        {
          Var_293 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_293, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
          MR_hl_field(0, Var_293, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_4));
          MR_hl_field(0, Var_293, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_293, 3) = ((MR_Box) (RHSVars_16));
          MR_hl_field(0, Var_293, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_293, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
        Float_56 = MR_unbox_float((MR_hl_field(2, ConsTag_26, (MR_Integer) 0)));
        {
          Var_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_132, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_132, 1) = MR_box_float(Float_56);
        }
        {
          ConstRval_292 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ConstRval_292, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, ConstRval_292, 1) = ((MR_Box) (Var_132));
        }
        ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_292, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
        *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String String_57;
            MR_Word Var_133;
            MR_Word ConstRval_337;
            MR_Word Var_338;

            {
              Var_338 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_338, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_338, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_10));
              MR_hl_field(0, Var_338, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_338, 3) = ((MR_Box) (RHSVars_16));
              MR_hl_field(0, Var_338, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_338, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
            String_57 = ((MR_String) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            {
              Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, Var_133, 1) = ((MR_Box) (String_57));
            }
            {
              ConstRval_337 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_337, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_337, 1) = ((MR_Box) (Var_133));
            }
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_337, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lang_58;
            MR_String Value_59;
            MR_Word Var_134;
            MR_Word Var_138;
            MR_Word ConstRval_301;
            MR_Word Var_302;

            {
              Var_302 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_302, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_302, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_5));
              MR_hl_field(0, Var_302, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_302, 3) = ((MR_Box) (RHSVars_16));
              MR_hl_field(0, Var_302, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_302, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
            Lang_58 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))) & (MR_Integer) 3);
            Value_59 = ((MR_String) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 2))));
            {
              Var_134 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_134, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[3]));
              MR_hl_field(0, Var_134, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_6));
              MR_hl_field(0, Var_134, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_134, 3) = ((MR_Box) (Lang_58));
              MR_hl_field(0, Var_134, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_134, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "foreign_tag for language other than C");
            {
              Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Var_138, 1) = ((MR_Box) (Value_59));
              MR_hl_field(3, Var_138, 2) = ((MR_Box) (MR_mkword(2, &ll_backend__unify_gen_construct_scalar_common_3[1])));
            }
            {
              ConstRval_301 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_301, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_301, 1) = ((MR_Box) (Var_138));
            }
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_301, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LocalSectag_61;
            MR_Unsigned PrimSec_64;
            MR_Word Var_143;
            MR_Word ConstRval_328;
            MR_Word Var_329;

            {
              Var_329 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_329, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_329, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_9));
              MR_hl_field(0, Var_329, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_329, 3) = ((MR_Box) (RHSVars_16));
              MR_hl_field(0, Var_329, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_329, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
            LocalSectag_61 = ((MR_Word) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 2))));
            PrimSec_64 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_61, (MR_Integer) 1))));
            {
              Var_143 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_143, 0) = ((MR_Box) (PrimSec_64));
            }
            {
              ConstRval_328 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_328, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_328, 1) = ((MR_Box) (Var_143));
            }
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_328, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer ConstNum_66;
            MR_Word ConstStructMap_68;
            MR_Word TypedRval_69;
            MR_Word ConstRval_310;
            MR_Word Var_311;
            MR_Box conv0_TypedRval_69;

            {
              Var_311 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_311, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_311, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_7));
              MR_hl_field(0, Var_311, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_311, 3) = ((MR_Box) (RHSVars_16));
              MR_hl_field(0, Var_311, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_311, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
            ConstNum_66 = ((MR_Integer) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_124, &ConstStructMap_68);
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_68, ConstNum_66, &conv0_TypedRval_69);
            TypedRval_69 = ((MR_Word) (conv0_TypedRval_69));
            ConstRval_310 = ((MR_Word) ((MR_hl_field(0, TypedRval_69, (MR_Integer) 0))));
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_310, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer ConstNum_257;
            MR_Word ConstStructMap_258;
            MR_Word TypedRval_259;
            MR_Word ConstRval_373;
            MR_Word Var_374;
            MR_Box conv1_TypedRval_259;

            {
              Var_374 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_374, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_374, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_14));
              MR_hl_field(0, Var_374, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_374, 3) = ((MR_Box) (RHSVars_16));
              MR_hl_field(0, Var_374, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_374, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
            ConstNum_257 = ((MR_Integer) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_124, &ConstStructMap_258);
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_258, ConstNum_257, &conv1_TypedRval_259);
            TypedRval_259 = ((MR_Word) (conv1_TypedRval_259));
            ConstRval_373 = ((MR_Word) ((MR_hl_field(0, TypedRval_259, (MR_Integer) 0))));
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_373, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Integer ConstNum_264;
            MR_Word ConstStructMap_265;
            MR_Word TypedRval_266;
            MR_Word ConstRval_382;
            MR_Word Var_383;
            MR_Box conv2_TypedRval_266;

            {
              Var_383 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_383, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_383, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_15));
              MR_hl_field(0, Var_383, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_383, 3) = ((MR_Box) (RHSVars_16));
              MR_hl_field(0, Var_383, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_383, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
            ConstNum_264 = ((MR_Integer) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_124, &ConstStructMap_265);
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_265, ConstNum_264, &conv2_TypedRval_266);
            TypedRval_266 = ((MR_Word) (conv2_TypedRval_266));
            ConstRval_382 = ((MR_Word) ((MR_hl_field(0, TypedRval_266, (MR_Integer) 0))));
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_382, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ModuleName_71;
            MR_String TypeName_72;
            MR_Integer TypeArity_73;
            MR_Word RttiTypeCtor_74;
            MR_Word DataId_75;
            uint16_t Var_144;
            MR_Word Var_145;
            MR_Word Var_147;
            MR_Word ConstRval_364;
            MR_Word Var_365;

            {
              Var_365 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_365, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_365, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_13));
              MR_hl_field(0, Var_365, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_365, 3) = ((MR_Box) (RHSVars_16));
              MR_hl_field(0, Var_365, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_365, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
            ModuleName_71 = ((MR_Word) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            TypeName_72 = ((MR_String) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 2))));
            TypeArity_73 = ((MR_Integer) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 3))));
            Var_144 = mercury__uint16__det_from_int_1_f_0(TypeArity_73);
            {
              RttiTypeCtor_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, RttiTypeCtor_74, 0) = ((MR_Box) (ModuleName_71));
              MR_hl_field(0, RttiTypeCtor_74, 1) = ((MR_Box) (TypeName_72));
              MR_hl_field(0, RttiTypeCtor_74, 2) = ((MR_Box) (MR_Word) (Var_144));
            }
            {
              Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_145, 0) = ((MR_Box) (RttiTypeCtor_74));
              MR_hl_field(0, Var_145, 1) = ((MR_Box) ((MR_Unsigned) 44U));
            }
            {
              DataId_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DataId_75, 0) = ((MR_Box) (Var_145));
            }
            {
              Var_147 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_147, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, Var_147, 1) = ((MR_Box) (DataId_75));
              MR_hl_field(3, Var_147, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ConstRval_364 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_364, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_364, 1) = ((MR_Box) (Var_147));
            }
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_364, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ConstRval_55;
            MR_Word ClassId_76;
            MR_String Instance_77;
            MR_Word TCName_78;
            MR_Word Var_128;
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Word Var_151;
            MR_Word ModuleName_205;
            MR_Word DataId_206;

            {
              Var_128 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_128, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_128, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_1));
              MR_hl_field(0, Var_128, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_128, 3) = ((MR_Box) (RHSVars_16));
              MR_hl_field(0, Var_128, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_128, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
            ModuleName_205 = ((MR_Word) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            ClassId_76 = ((MR_Word) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 2))));
            Instance_77 = ((MR_String) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 3))));
            TCName_78 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_76);
            {
              Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_150, 0) = ((MR_Box) (ModuleName_205));
              MR_hl_field(1, Var_150, 1) = ((MR_Box) (Instance_77));
            }
            {
              Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_149, 0) = ((MR_Box) (TCName_78));
              MR_hl_field(1, Var_149, 1) = ((MR_Box) (Var_150));
            }
            {
              DataId_206 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DataId_206, 0) = ((MR_Box) (Var_149));
            }
            {
              Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, Var_151, 1) = ((MR_Box) (DataId_206));
              MR_hl_field(3, Var_151, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ConstRval_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_55, 1) = ((MR_Box) (Var_151));
            }
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_55, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word PredId_79;
            MR_Integer ProcId_80;
            MR_Word RttiProcLabel_81;
            MR_Word Origin_82;
            MR_Word UserOrUCI_85;
            MR_Word ProcKind_86;
            MR_Word Var_154;
            MR_Word Var_155;
            MR_Word DataId_207;
            MR_Word ConstRval_274;
            MR_Word Var_275;
            MR_Word Var_153;

            {
              Var_275 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_275, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_275, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_2));
              MR_hl_field(0, Var_275, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_275, 3) = ((MR_Box) (RHSVars_16));
              MR_hl_field(0, Var_275, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_275, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
            PredId_79 = ((MR_Word) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            ProcId_80 = ((MR_Integer) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 2))));
            RttiProcLabel_81 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_25, PredId_79, ProcId_80);
            Origin_82 = ((MR_Word) ((MR_hl_field(0, RttiProcLabel_81, (MR_Integer) 11))));
            succeeded = ((MR_tag((MR_Word) Origin_82)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_153 = ((MR_Word) ((MR_hl_field(1, Origin_82, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_153)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            if (succeeded)
              UserOrUCI_85 = (MR_Integer) 1;
            else
              UserOrUCI_85 = (MR_Integer) 0;
            {
              ProcKind_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ProcKind_86, 0) = (MR_Box) ((MR_Unsigned) (UserOrUCI_85));
            }
            {
              Var_154 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_154, 0) = ((MR_Box) (RttiProcLabel_81));
              MR_hl_field(0, Var_154, 1) = ((MR_Box) (ProcKind_86));
            }
            {
              DataId_207 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, DataId_207, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, DataId_207, 1) = ((MR_Box) (Var_154));
            }
            {
              Var_155 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_155, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, Var_155, 1) = ((MR_Box) (DataId_207));
              MR_hl_field(3, Var_155, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ConstRval_274 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_274, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_274, 1) = ((MR_Box) (Var_155));
            }
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_274, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ProcLabel_87;
            MR_Word Var_158;
            MR_Word DataId_208;
            MR_Word PredId_209;
            MR_Integer ProcId_210;
            MR_Word ConstRval_355;
            MR_Word Var_356;

            {
              Var_356 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_356, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_356, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_12));
              MR_hl_field(0, Var_356, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_356, 3) = ((MR_Box) (RHSVars_16));
              MR_hl_field(0, Var_356, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_356, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
            PredId_209 = ((MR_Word) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            ProcId_210 = ((MR_Integer) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 2))));
            ProcLabel_87 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_25, PredId_209, ProcId_210);
            {
              DataId_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, DataId_208, 0) = ((MR_Box) (ProcLabel_87));
              MR_hl_field(1, DataId_208, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_158, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, Var_158, 1) = ((MR_Box) (DataId_208));
              MR_hl_field(3, Var_158, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ConstRval_355 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_355, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_355, 1) = ((MR_Box) (Var_158));
            }
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_355, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word PredProcId_88;
            MR_Word Var_161;
            MR_Word DataId_211;
            MR_Word PredId_212;
            MR_Integer ProcId_213;
            MR_Word ConstRval_346;
            MR_Word Var_347;

            {
              Var_347 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_347, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
              MR_hl_field(0, Var_347, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_11));
              MR_hl_field(0, Var_347, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_347, 3) = ((MR_Box) (RHSVars_16));
              MR_hl_field(0, Var_347, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_347, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
            PredId_212 = ((MR_Word) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            ProcId_213 = ((MR_Integer) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 2))));
            {
              PredProcId_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredProcId_88, 0) = ((MR_Box) (PredId_212));
              MR_hl_field(0, PredProcId_88, 1) = ((MR_Box) (ProcId_213));
            }
            {
              DataId_211 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, DataId_211, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, DataId_211, 1) = NULL;
              MR_hl_field(3, DataId_211, 2) = ((MR_Box) (PredProcId_88));
            }
            {
              Var_161 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_161, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, Var_161, 1) = ((MR_Box) (DataId_211));
              MR_hl_field(3, Var_161, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ConstRval_346 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_346, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_346, 1) = ((MR_Box) (Var_161));
            }
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_346, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_89 = ((MR_Word) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            MR_Word MayUseAtomic0_91;
            MR_Word Ptag_92;
            MR_Word TagwordCode_93;
            MR_Word CellArgs_94;
            MR_Word MayUseAtomic_95;
            MR_Word NonTagwordCode_96;
            MR_Word HowToConstruct_114;
            MR_Word Context_115;
            MR_Word ConstructCode_116;
            MR_Word STATE_VARIABLE_CLD_166_166;
            MR_Word Var_179;

            ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_0_124, &MayUseAtomic0_91);
            switch (MR_tag((MR_Word) RemoteArgsTagInfo_89)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_165;

                  Ptag_92 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                  TagwordCode_93 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  Var_165 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(RHSVarsWidths_27, ArgModes_17, (MR_Integer) 1, TakeAddr_19, &CellArgs_94, MayUseAtomic0_91, &MayUseAtomic_95, Var_165, &NonTagwordCode_96, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, &STATE_VARIABLE_CLD_166_166);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_270;

                  Ptag_92 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_89, (MR_Integer) 0))));
                  TagwordCode_93 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  Var_270 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(RHSVarsWidths_27, ArgModes_17, (MR_Integer) 1, TakeAddr_19, &CellArgs_94, MayUseAtomic0_91, &MayUseAtomic_95, Var_270, &NonTagwordCode_96, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, &STATE_VARIABLE_CLD_166_166);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_97;
                  MR_Unsigned SectagUint_98;
                  MR_Word SectagSize_99;
                  MR_Integer FirstArgNum_100;
                  MR_Word TagwordRval_101;
                  MR_Word NonTagwordRHSVarsWidths_102;
                  MR_Word NonTagwordArgModes_103;
                  MR_Word TagwordArg_111;
                  MR_Word CellArgs0_112;
                  MR_Word STATE_VARIABLE_CLD_171_171;
                  MR_Word Var_173;

                  Ptag_92 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_89, (MR_Integer) 0))));
                  RemoteSectag_97 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_89, (MR_Integer) 1))));
                  SectagUint_98 = ((MR_Unsigned) ((MR_hl_field(0, RemoteSectag_97, (MR_Integer) 0))));
                  SectagSize_99 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_97, (MR_Integer) 1))));
                  if ((SectagSize_99 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_167;

                    FirstArgNum_100 = (MR_Integer) 1;
                    {
                      Var_167 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_167, 0) = ((MR_Box) (SectagUint_98));
                    }
                    {
                      TagwordRval_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, TagwordRval_101, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, TagwordRval_101, 1) = ((MR_Box) (Var_167));
                    }
                    NonTagwordRHSVarsWidths_102 = RHSVarsWidths_27;
                    NonTagwordArgModes_103 = ArgModes_17;
                    TagwordCode_93 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    STATE_VARIABLE_CLD_171_171 = STATE_VARIABLE_CLD_0_126;
                  }
                  else
                  {
                    MR_Word TagwordRHSVarsWidths_105;
                    MR_Word TagwordArgModes_106;
                    MR_Word RevToOrRvals0_107;
                    MR_Word RevToOrRvals_108;
                    MR_Word ToOrRvals_109;
                    MR_Word TagwordRval0_110;

                    ll_backend__unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_119_105_100_116_104_115_95_109_111_100_101_115_95_95_91_49_93_95_48_8_p_0(RHSVarsWidths_27, ArgModes_17, &TagwordRHSVarsWidths_105, &TagwordArgModes_106, &NonTagwordRHSVarsWidths_102, &NonTagwordArgModes_103, (MR_Integer) 1, &FirstArgNum_100);
                    succeeded = (SectagUint_98 == (MR_Unsigned) 0U);
                    if (succeeded)
                      RevToOrRvals0_107 = (MR_Word) ((MR_Unsigned) 0U);
                    else
                    {
                      MR_Word Var_168;
                      MR_Word Var_169;

                      {
                        Var_169 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_169, 0) = ((MR_Box) (SectagUint_98));
                      }
                      {
                        Var_168 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_168, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, Var_168, 1) = ((MR_Box) (Var_169));
                      }
                      {
                        RevToOrRvals0_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, RevToOrRvals0_107, 0) = ((MR_Box) (Var_168));
                        MR_hl_field(1, RevToOrRvals0_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    ll_backend__unify_gen_construct__generate_and_pack_tagword_5_p_0(TagwordRHSVarsWidths_105, TagwordArgModes_106, RevToOrRvals0_107, &RevToOrRvals_108, STATE_VARIABLE_CI_0_124);
                    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_108, &ToOrRvals_109);
                    TagwordRval0_110 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_109);
                    ll_backend__code_loc_dep__materialize_vars_in_rval_5_p_0(TagwordRval0_110, &TagwordRval_101, &TagwordCode_93, STATE_VARIABLE_CLD_0_126, &STATE_VARIABLE_CLD_171_171);
                  }
                  {
                    TagwordArg_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, TagwordArg_111, 0) = ((MR_Box) (TagwordRval_101));
                    MR_hl_field(1, TagwordArg_111, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  }
                  Var_173 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(NonTagwordRHSVarsWidths_102, NonTagwordArgModes_103, FirstArgNum_100, TakeAddr_19, &CellArgs0_112, MayUseAtomic0_91, &MayUseAtomic_95, Var_173, &NonTagwordCode_96, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_171_171, &STATE_VARIABLE_CLD_166_166);
                  {
                    CellArgs_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, CellArgs_94, 0) = ((MR_Box) (TagwordArg_111));
                    MR_hl_field(1, CellArgs_94, 1) = ((MR_Box) (CellArgs0_112));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "remote_args_ctor");
                  return;
                }
                break;
            }
            ll_backend__unify_gen_construct__pack_how_to_construct_3_p_0(RHSVarsWidths_27, HowToConstruct0_18, &HowToConstruct_114);
            Context_115 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
            ll_backend__unify_gen_construct__construct_cell_12_p_0(LHSVar_14, Ptag_92, CellArgs_94, HowToConstruct_114, MaybeSize_20, Context_115, MayUseAtomic_95, &ConstructCode_116, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CI_125, STATE_VARIABLE_CLD_166_166, STATE_VARIABLE_CLD_127);
            Var_179 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), NonTagwordCode_96, ConstructCode_116);
            *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagwordCode_93, Var_179);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_117 = ((MR_Word) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            MR_Word PackedRval_118;
            MR_Word Var_180;
            MR_Word RevToOrRvals0_214;
            MR_Word RevToOrRvals_215;
            MR_Word ToOrRvals_216;

            {
              Var_180 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_180, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
              MR_hl_field(0, Var_180, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_19));
              MR_hl_field(0, Var_180, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_180, 3) = ((MR_Box) (TakeAddr_19));
              MR_hl_field(0, Var_180, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_180, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "local_args_tag, TakeAddr != []");
            ll_backend__unify_gen_construct__maybe_accumulate_local_sectag_2_p_0(LocalArgsTagInfo_117, &RevToOrRvals0_214);
            ll_backend__unify_gen_construct__generate_and_pack_tagword_5_p_0(RHSVarsWidths_27, ArgModes_17, RevToOrRvals0_214, &RevToOrRvals_215, STATE_VARIABLE_CI_0_124);
            mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_215, &ToOrRvals_216);
            PackedRval_118 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_216);
            ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(LHSVar_14, PackedRval_118, Code_22, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Type_122;
            MR_Word Var_190;
            MR_Word Ptag_217 = ((MR_Word) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            MR_Word RHSVar_218;
            MR_Word ArgMode_219;
            MR_Box conv4_RHSVar_218;
            MR_Box conv3_ArgMode_219;

            {
              Var_190 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_190, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
              MR_hl_field(0, Var_190, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_18));
              MR_hl_field(0, Var_190, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_190, 3) = ((MR_Box) (TakeAddr_19));
              MR_hl_field(0, Var_190, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_190, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "direct_arg_tag: take_addr");
            hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_16, ArgModes_17, &conv4_RHSVar_218, &conv3_ArgMode_219);
            RHSVar_218 = ((MR_Word) (conv4_RHSVar_218));
            ArgMode_219 = ((MR_Word) (conv3_ArgMode_219));
            Type_122 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_124, RHSVar_218);
            ll_backend__unify_gen_construct__generate_direct_arg_construct_9_p_0(LHSVar_14, RHSVar_218, Ptag_217, ArgMode_219, Type_122, Code_22, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Var_195;
            MR_Word Var_199;
            MR_Word PredId_220 = ((MR_Word) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 1))));
            MR_Integer ProcId_221 = ((MR_Integer) ((MR_hl_field(3, ConsTag_26, (MR_Integer) 2))));

            {
              Var_195 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_195, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
              MR_hl_field(0, Var_195, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_16));
              MR_hl_field(0, Var_195, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_195, 3) = ((MR_Box) (TakeAddr_19));
              MR_hl_field(0, Var_195, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_195, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "closure_tag has take_addr");
            {
              Var_199 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_199, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[4]));
              MR_hl_field(0, Var_199, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_17));
              MR_hl_field(0, Var_199, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_199, 3) = ((MR_Box) (MaybeSize_20));
              MR_hl_field(0, Var_199, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_199, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "closure_tag has size");
            ll_backend__closure_gen__construct_closure_11_p_0(PredId_220, ProcId_221, LHSVar_14, RHSVars_16, GoalInfo_21, Code_22, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CI_125, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_119_105_100_116_104_115_95_109_111_100_101_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer STATE_VARIABLE_CurArgNum_0_7,
  MR_Integer * STATE_VARIABLE_CurArgNum_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_CurArgNum_8 = STATE_VARIABLE_CurArgNum_0_7;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.take_tagword_args_widths_modes\'/8", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.take_tagword_args_widths_modes\'/8", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgModes_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgPosWidth_44 = ((MR_Word) ((MR_hl_field(0, Var_72, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_44)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__5_5 = HeadVar__1_1;
            *HeadVar__6_6 = HeadVar__2_2;
            *STATE_VARIABLE_CurArgNum_8 = STATE_VARIABLE_CurArgNum_0_7;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__5_5 = HeadVar__1_1;
            *HeadVar__6_6 = HeadVar__2_2;
            *STATE_VARIABLE_CurArgNum_8 = STATE_VARIABLE_CurArgNum_0_7;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_44, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__5_5 = HeadVar__1_1;
                *HeadVar__6_6 = HeadVar__2_2;
                *STATE_VARIABLE_CurArgNum_8 = STATE_VARIABLE_CurArgNum_0_7;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word TailTagwordArgsWidths_53;
                MR_Word TailTagwordArgModes_54;
                MR_Integer STATE_VARIABLE_CurArgNum_68_68 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurArgNum_0_7 + (MR_Unsigned) 1);

                ll_backend__unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_119_105_100_116_104_115_95_109_111_100_101_115_95_95_91_49_93_95_48_8_p_0(Var_71, ArgModes_37, &TailTagwordArgsWidths_53, &TailTagwordArgModes_54, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_CurArgNum_68_68, STATE_VARIABLE_CurArgNum_8);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_72));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailTagwordArgsWidths_53));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (ArgMode_36));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailTagwordArgModes_54));
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
ll_backend__unify_gen_construct__maybe_accumulate_local_sectag_2_p_0(
  MR_Word LocalArgsTagInfo_3,
  MR_Word * RevToOrRvals0_4)
{
  MR_bool succeeded;
  MR_Unsigned PrimSec_5;

  if ((LocalArgsTagInfo_3 == (MR_Word) ((MR_Unsigned) 0U)))
    PrimSec_5 = (MR_Unsigned) 0U;
  else
  {
    MR_Word LocalSectag_7 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_3, (MR_Integer) 1))));

    PrimSec_5 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_7, (MR_Integer) 1))));
  }
  succeeded = (PrimSec_5 == (MR_Unsigned) 0U);
  if (succeeded)
    *RevToOrRvals0_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_10;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_11, 0) = ((MR_Box) (PrimSec_5));
    }
    {
      Var_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_10, 1) = ((MR_Box) (Var_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *RevToOrRvals0_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__pack_how_to_construct_3_p_0(
  MR_Word ArgVarsWidths_4,
  MR_Word STATE_VARIABLE_HowToConstruct_0_14,
  MR_Word * STATE_VARIABLE_HowToConstruct_15)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_HowToConstruct_0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HowToConstruct_15 = STATE_VARIABLE_HowToConstruct_0_14;
      break;
    case (MR_Integer) 1:
      {
        MR_Word CellToReuse0_8 = (MR_Word) (MR_body((MR_Word) (STATE_VARIABLE_HowToConstruct_0_14), (MR_Integer) 1));
        MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, CellToReuse0_8, (MR_Integer) 0))));
        MR_Word ConsIds_10 = ((MR_Word) ((MR_hl_field(0, CellToReuse0_8, (MR_Integer) 1))));
        MR_Word NeedsUpdates0_11 = ((MR_Word) ((MR_hl_field(0, CellToReuse0_8, (MR_Integer) 2))));
        MR_Word NeedsUpdates_12;
        MR_Word CellToReuse_13;

        ll_backend__unify_gen_construct__needs_update_args_to_words_3_p_0(ArgVarsWidths_4, NeedsUpdates0_11, &NeedsUpdates_12);
        {
          CellToReuse_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CellToReuse_13, 0) = ((MR_Box) (Var_9));
          MR_hl_field(0, CellToReuse_13, 1) = ((MR_Box) (ConsIds_10));
          MR_hl_field(0, CellToReuse_13, 2) = ((MR_Box) (NeedsUpdates_12));
        }
        *STATE_VARIABLE_HowToConstruct_15 = (MR_Word) (MR_mkword(1, (MR_Word) (CellToReuse_13)));
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_HowToConstruct_15 = STATE_VARIABLE_HowToConstruct_0_14;
      break;
    case (MR_Integer) 3:
      *STATE_VARIABLE_HowToConstruct_15 = STATE_VARIABLE_HowToConstruct_0_14;
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.needs_update_args_to_words\'/3", (MR_String) "mismatched lists");
          return;
        }
    else
    {
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.needs_update_args_to_words\'/3", (MR_String) "mismatched lists");
          return;
        }
      }
      else
      {
        MR_Word ArgNU_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgNUs_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word ArgPosWidth_19 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) ArgPosWidth_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_48;
              MR_Word next_value_of_HeadVar__2_2 = ArgNUs_16;

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
              MR_Word TailWordNUs_25;

              ll_backend__unify_gen_construct__needs_update_args_to_words_3_p_0(Var_48, ArgNUs_16, &TailWordNUs_25);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ArgNU_15));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailWordNUs_25));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_19, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word WordNU_32;
                  MR_Word LaterWordVarsWidths_33;
                  MR_Word LaterWordArgNUs_34;
                  MR_Word TailWordNUs_47;

                  ll_backend__unify_gen_construct__does_any_arg_in_word_need_update_6_p_0(Var_48, ArgNUs_16, ArgNU_15, &WordNU_32, &LaterWordVarsWidths_33, &LaterWordArgNUs_34);
                  ll_backend__unify_gen_construct__needs_update_args_to_words_3_p_0(LaterWordVarsWidths_33, LaterWordArgNUs_34, &TailWordNUs_47);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__3_3 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (WordNU_32));
                    MR_hl_field(1, base, 1) = ((MR_Box) (TailWordNUs_47));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.needs_update_args_to_words\'/3", (MR_String) "apw_partial_shifted");
                  return;
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.needs_update_args_to_words\'/3", (MR_String) "none_shifted");
                  return;
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.does_any_arg_in_word_need_update\'/6", (MR_String) "mismatched lists");
          return;
        }
    else
    {
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.does_any_arg_in_word_need_update\'/6", (MR_String) "mismatched lists");
          return;
        }
      else
      {
        MR_Word ArgNU_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgNUs_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word ArgPosWidth_36 = ((MR_Word) ((MR_hl_field(0, Var_60, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) ArgPosWidth_36)) {
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
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_36, (MR_Integer) 0))))) {
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
                  MR_Word STATE_VARIABLE_NU_58_58;
                  MR_Word next_value_of_HeadVar__1_1;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Word next_value_of_STATE_VARIABLE_NU_0_3;

                  switch (ArgNU_30) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      STATE_VARIABLE_NU_58_58 = STATE_VARIABLE_NU_0_3;
                      break;
                    case (MR_Integer) 0:
                      STATE_VARIABLE_NU_58_58 = (MR_Integer) 0;
                      break;
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Var_59;
                  next_value_of_HeadVar__2_2 = ArgNUs_31;
                  next_value_of_STATE_VARIABLE_NU_0_3 = STATE_VARIABLE_NU_58_58;
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
  MR_Word ArgVar_11,
  MR_Word Ptag_12,
  MR_Word ArgMode_13,
  MR_Word Type_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_18;
  MR_Word Dir_19;

  ll_backend__code_info__get_module_info_2_p_0(CI_16, &ModuleInfo_18);
  ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_18, ArgMode_13, Type_14, &Dir_19);
  switch (Dir_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        uint8_t Var_24 = (uint8_t) (Ptag_12);

        succeeded = (Var_24 == UINT8_C(0));
        if (succeeded)
        {
          ll_backend__code_loc_dep__assign_var_to_var_4_p_0(Var_10, ArgVar_11, STATE_VARIABLE_CLD_0_20, STATE_VARIABLE_CLD_21);
          *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        else
        {
          MR_Word Var_26;
          MR_Word Var_28;

          {
            Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_28, 0) = ((MR_Box) (ArgVar_11));
          }
          {
            Var_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_26, 0) = ((MR_Box) (Ptag_12));
            MR_hl_field(2, Var_26, 1) = ((MR_Box) (Var_28));
          }
          ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(Var_10, Var_26, Code_15, STATE_VARIABLE_CLD_0_20, STATE_VARIABLE_CLD_21);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_direct_arg_construct\'/9", (MR_String) "assign right in construction");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_29;

        {
          Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_29, 1) = ((MR_Box) (Ptag_12));
        }
        ll_backend__code_loc_dep__assign_const_to_var_5_p_0(Var_10, Var_29, CI_16, STATE_VARIABLE_CLD_0_20, STATE_VARIABLE_CLD_21);
        *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      }
      break;
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
  MR_Box closure = closure_arg;
  MR_Integer conv1_NextOffset_8;
  MR_Word conv0_STATE_VARIABLE_RevFieldAddrs_18;

  ll_backend__unify_gen_construct__generate_field_addr_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_NextOffset_8, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_RevFieldAddrs_18);
  *wrapper_arg_3 = ((MR_Box) (conv1_NextOffset_8));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_RevFieldAddrs_18));
}

static void MR_CALL 
ll_backend__unify_gen_construct__construct_cell_12_p_0(
  MR_Word LHSVar_13,
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
  MR_bool succeeded;
  MR_Word LHSType_23;
  MR_String VarTypeMsg_24;
  MR_Word GCMethod_25;
  MR_Word ReserveWordAtStart_26;
  MR_Integer Size_27;
  MR_Word MaybeAllocId_28;
  MR_Word CellCode_29;
  MR_Word FieldAddrs_30;
  MR_Word STATE_VARIABLE_CI_38_38;
  MR_Word STATE_VARIABLE_CLD_40_40;
  MR_Word TypeCtor_42;
  MR_Word TypeSym_43;
  MR_Integer TypeArity_44;
  MR_String TypeSymStr_45;
  MR_String TypeArityStr_46;
  MR_String Var_47;
  MR_Word RevFieldAddrs_50;
  MR_Box conv3_Var_49;
  MR_Box conv2_RevFieldAddrs_50;

  LHSType_23 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_34, LHSVar_13);
  parse_tree__prog_type__type_to_ctor_det_2_p_0(LHSType_23, &TypeCtor_42);
  TypeSym_43 = ((MR_Word) ((MR_hl_field(0, TypeCtor_42, (MR_Integer) 0))));
  TypeArity_44 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_42, (MR_Integer) 1))));
  TypeSymStr_45 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeSym_43);
  mercury__string__int_to_string_2_p_0(TypeArity_44, &TypeArityStr_46);
  Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "/", TypeArityStr_46);
  VarTypeMsg_24 = mercury__string__f_43_43_2_f_0(TypeSymStr_45, Var_47);
  ll_backend__code_info__get_gc_method_2_p_0(STATE_VARIABLE_CI_0_34, &GCMethod_25);
  succeeded = (GCMethod_25 == (MR_Integer) 5);
  if (succeeded)
    succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(LHSType_23);
  if (succeeded)
    ReserveWordAtStart_26 = (MR_Integer) 1;
  else
    ReserveWordAtStart_26 = (MR_Integer) 0;
  Size_27 = ll_backend__code_util__size_of_cell_args_1_f_0(CellArgs_15);
  ll_backend__code_info__maybe_add_alloc_site_info_6_p_0(Context_18, VarTypeMsg_24, Size_27, &MaybeAllocId_28, STATE_VARIABLE_CI_0_34, &STATE_VARIABLE_CI_38_38);
  ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(LHSVar_13, ReserveWordAtStart_26, Ptag_14, CellArgs_15, HowToConstruct_16, MaybeSize_17, MaybeAllocId_28, MayUseAtomic_19, &CellCode_29, STATE_VARIABLE_CI_38_38, STATE_VARIABLE_CI_35, STATE_VARIABLE_CLD_0_36, &STATE_VARIABLE_CLD_40_40);
  mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[4]), (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_2[3]), CellArgs_15, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_49, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RevFieldAddrs_50);
  RevFieldAddrs_50 = ((MR_Word) (conv2_RevFieldAddrs_50));
  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_field_addr_0), RevFieldAddrs_50, &FieldAddrs_30);
  if ((FieldAddrs_30 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Code_20 = CellCode_29;
    *STATE_VARIABLE_CLD_37 = STATE_VARIABLE_CLD_40_40;
  }
  else
  {
    MR_Word FieldCode_33;

    ll_backend__unify_gen_construct__generate_field_take_address_assigns_6_p_0(FieldAddrs_30, LHSVar_13, Ptag_14, &FieldCode_33, STATE_VARIABLE_CLD_40_40, STATE_VARIABLE_CLD_37);
    *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CellCode_29, FieldCode_33);
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
    MR_Word FieldAddr_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word FieldAddrs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ThisCode_16;
    MR_Word RestCode_17;
    MR_Integer FieldNum_19 = ((MR_Integer) ((MR_hl_field(0, FieldAddr_12, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, FieldAddr_12, (MR_Integer) 1))));
    MR_Word FieldNumRval_21;
    MR_Word Addr_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_CLD_29_29;

    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (FieldNum_19));
    }
    {
      FieldNumRval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, FieldNumRval_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, FieldNumRval_21, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (CellVar_2));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (CellPtag_3));
    }
    {
      Var_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(2, Var_26, 1) = ((MR_Box) (Var_28));
      MR_hl_field(2, Var_26, 2) = ((MR_Box) (FieldNumRval_21));
    }
    {
      Addr_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Addr_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Addr_22, 1) = ((MR_Box) (Var_26));
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "length misnatch");
          return;
        }
    else
    {
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "length misnatch");
          return;
        }
      else
      {
        MR_Word ArgMode_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgModes_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word RHSVar_32 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 0))));
        MR_Word ArgPosWidth_33 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_RevToOrRvals_63_63;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_RevToOrRvals_0_3;

        switch (MR_tag((MR_Word) ArgPosWidth_33)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
              return;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
              return;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_33, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Shift_47 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_33, (MR_Integer) 3))));
                  MR_Word Fill_50 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_33, (MR_Integer) 6))) & (MR_Integer) 7);
                  MR_Word _RHSType_51;
                  MR_Word RHSRval_53;
                  MR_Word ShiftedRHSRval_54;
                  MR_Word ModuleInfo_66;
                  MR_Word RHSInitInst_69;
                  MR_Word RHSFinalInst_70;
                  MR_Word VarTable_71;
                  MR_Word RHSVarEntry_72;
                  MR_Word RHSTopFunctorMode_73;

                  ll_backend__code_info__get_module_info_2_p_0(CI_5, &ModuleInfo_66);
                  RHSInitInst_69 = ((MR_Word) ((MR_hl_field(0, ArgMode_28, (MR_Integer) 2))));
                  RHSFinalInst_70 = ((MR_Word) ((MR_hl_field(0, ArgMode_28, (MR_Integer) 3))));
                  ll_backend__code_info__get_var_table_2_p_0(CI_5, &VarTable_71);
                  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_71, RHSVar_32, &RHSVarEntry_72);
                  _RHSType_51 = ((MR_Word) ((MR_hl_field(0, RHSVarEntry_72, (MR_Integer) 1))));
                  check_hlds__mode_top_functor__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_66, RHSInitInst_69, RHSFinalInst_70, _RHSType_51, &RHSTopFunctorMode_73);
                  switch (RHSTopFunctorMode_73) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IsDummy_74 = ((MR_Unsigned) ((MR_hl_field(0, RHSVarEntry_72, (MR_Integer) 2))) & (MR_Integer) 1);

                        switch (IsDummy_74) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            RHSRval_53 = (MR_Word) (MR_mkword(3, &ll_backend__unify_gen_construct_scalar_common_1[12]));
                            break;
                          case (MR_Integer) 1:
                            {
                              RHSRval_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, RHSRval_53, 0) = ((MR_Box) (RHSVar_32));
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      RHSRval_53 = (MR_Word) (MR_mkword(3, &ll_backend__unify_gen_construct_scalar_common_1[12]));
                      break;
                  }
                  ShiftedRHSRval_54 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(RHSRval_53, Shift_47, Fill_50);
                  {
                    STATE_VARIABLE_RevToOrRvals_63_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_RevToOrRvals_63_63, 0) = ((MR_Box) (ShiftedRHSRval_54));
                    MR_hl_field(1, STATE_VARIABLE_RevToOrRvals_63_63, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_3));
                  }
                }
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_RevToOrRvals_63_63 = STATE_VARIABLE_RevToOrRvals_0_3;
                break;
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_64;
        next_value_of_HeadVar__2_2 = ArgModes_29;
        next_value_of_STATE_VARIABLE_RevToOrRvals_0_3 = STATE_VARIABLE_RevToOrRvals_63_63;
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
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_and_pack_construct_args__299__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer CurArgNum_3,
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_26;

      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_1));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_4));
        MR_hl_field(0, Var_26, 4) = ((MR_Box) (*HeadVar__5_5));
      }
      mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "TakeAddr != [] at end");
      *STATE_VARIABLE_CLD_12 = STATE_VARIABLE_CLD_0_11;
      *STATE_VARIABLE_Code_9 = STATE_VARIABLE_Code_0_8;
      *STATE_VARIABLE_MayUseAtomic_7 = STATE_VARIABLE_MayUseAtomic_0_6;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_192 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_193 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_66 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgModes_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word RHSVar_75 = ((MR_Word) ((MR_hl_field(0, Var_193, (MR_Integer) 0))));
      MR_Word ArgPosWidth_76 = ((MR_Word) ((MR_hl_field(0, Var_193, (MR_Integer) 1))));
      MR_Word HeadCellArgs_86;
      MR_Word LeftOverRHSVarsWidths_101;
      MR_Word LeftOverArgModes_102;
      MR_Integer LeftOverArgNum_103;
      MR_Word TailCellArgs_125;
      MR_Word STATE_VARIABLE_MayUseAtomic_145_145;
      MR_Word STATE_VARIABLE_Code_146_146;
      MR_Word STATE_VARIABLE_CLD_147_147;
      MR_Word STATE_VARIABLE_TakeAddr_158_158;

      switch (MR_tag((MR_Word) ArgPosWidth_76)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_173;

            {
              Var_173 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_173, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[0]));
              MR_hl_field(0, Var_173, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_2));
              MR_hl_field(0, Var_173, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_173, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_4));
              MR_hl_field(0, Var_173, 4) = ((MR_Box) (CurArgNum_3));
            }
            mercury__require__expect_3_p_0(Var_173, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "taking address of dummy");
            HeadCellArgs_86 = (MR_Word) ((MR_Unsigned) 0U);
            LeftOverRHSVarsWidths_101 = Var_192;
            LeftOverArgModes_102 = ArgModes_67;
            LeftOverArgNum_103 = (MR_Integer) ((MR_Unsigned) CurArgNum_3 + (MR_Unsigned) 1);
            STATE_VARIABLE_TakeAddr_158_158 = STATE_VARIABLE_TakeAddr_0_4;
            STATE_VARIABLE_MayUseAtomic_145_145 = STATE_VARIABLE_MayUseAtomic_0_6;
            STATE_VARIABLE_Code_146_146 = STATE_VARIABLE_Code_0_8;
            STATE_VARIABLE_CLD_147_147 = STATE_VARIABLE_CLD_0_11;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_TakeAddr_133_205;
            MR_Integer Var_194;

            succeeded = (STATE_VARIABLE_TakeAddr_0_4 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_194 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TakeAddr_0_4, (MR_Integer) 0))));
              STATE_VARIABLE_TakeAddr_133_205 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TakeAddr_0_4, (MR_Integer) 1))));
              succeeded = (CurArgNum_3 == Var_194);
            }
            if (succeeded)
            {
              MR_Word MaybeNull_85;
              MR_Word Var_137;
              MR_Word LCMCNull_195;

              STATE_VARIABLE_TakeAddr_158_158 = STATE_VARIABLE_TakeAddr_133_205;
              ll_backend__code_info__get_lcmc_null_2_p_0(CI_10, &LCMCNull_195);
              switch (LCMCNull_195) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MaybeNull_85 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 0:
                  MaybeNull_85 = (MR_Word) (MR_mkword(1, &ll_backend__unify_gen_construct_scalar_common_3[2]));
                  break;
              }
              {
                Var_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_137, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_137, 1) = ((MR_Box) (RHSVar_75));
                MR_hl_field(3, Var_137, 2) = ((MR_Box) (MaybeNull_85));
              }
              {
                HeadCellArgs_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadCellArgs_86, 0) = ((MR_Box) (Var_137));
                MR_hl_field(1, HeadCellArgs_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_MayUseAtomic_145_145 = (MR_Integer) 1;
              STATE_VARIABLE_CLD_147_147 = STATE_VARIABLE_CLD_0_11;
              STATE_VARIABLE_Code_146_146 = STATE_VARIABLE_Code_0_8;
            }
            else
            {
              MR_Word RHSType_196;
              MR_Word IsReal_197;
              MR_Word RHSRval_198;
              MR_Word ModuleInfo_199;

              ll_backend__unify_gen_construct__generate_construct_arg_rval_10_p_0(RHSVar_75, ArgMode_66, &RHSType_196, &IsReal_197, &RHSRval_198, STATE_VARIABLE_Code_0_8, &STATE_VARIABLE_Code_146_146, CI_10, STATE_VARIABLE_CLD_0_11, &STATE_VARIABLE_CLD_147_147);
              ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_199);
              check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_199, RHSType_196, STATE_VARIABLE_MayUseAtomic_0_6, &STATE_VARIABLE_MayUseAtomic_145_145);
              switch (IsReal_197) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  HeadCellArgs_86 = (MR_Word) (MR_mkword(1, &ll_backend__unify_gen_construct_scalar_common_1[11]));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_151;

                    {
                      Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_151, 0) = ((MR_Box) (RHSRval_198));
                      MR_hl_field(1, Var_151, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    }
                    {
                      HeadCellArgs_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadCellArgs_86, 0) = ((MR_Box) (Var_151));
                      MR_hl_field(1, HeadCellArgs_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              STATE_VARIABLE_TakeAddr_158_158 = STATE_VARIABLE_TakeAddr_0_4;
            }
            LeftOverRHSVarsWidths_101 = Var_192;
            LeftOverArgModes_102 = ArgModes_67;
            LeftOverArgNum_103 = (MR_Integer) ((MR_Unsigned) CurArgNum_3 + (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_TakeAddr_133_133;
            MR_Integer Var_191;

            succeeded = (STATE_VARIABLE_TakeAddr_0_4 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_191 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_TakeAddr_0_4, (MR_Integer) 0))));
              STATE_VARIABLE_TakeAddr_133_133 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_TakeAddr_0_4, (MR_Integer) 1))));
              succeeded = (CurArgNum_3 == Var_191);
            }
            if (succeeded)
            {
              MR_Word LCMCNull_82;
              MR_Word MaybeNulls_90;
              MR_Word Var_143;

              STATE_VARIABLE_TakeAddr_158_158 = STATE_VARIABLE_TakeAddr_133_133;
              ll_backend__code_info__get_lcmc_null_2_p_0(CI_10, &LCMCNull_82);
              switch (LCMCNull_82) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MaybeNulls_90 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
                case (MR_Integer) 0:
                  MaybeNulls_90 = (MR_Word) (MR_mkword(1, &ll_backend__unify_gen_construct_scalar_common_3[7]));
                  break;
              }
              {
                Var_143 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_143, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_143, 1) = ((MR_Box) (RHSVar_75));
                MR_hl_field(3, Var_143, 2) = ((MR_Box) (MaybeNulls_90));
              }
              {
                HeadCellArgs_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadCellArgs_86, 0) = ((MR_Box) (Var_143));
                MR_hl_field(1, HeadCellArgs_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_MayUseAtomic_145_145 = (MR_Integer) 1;
              STATE_VARIABLE_CLD_147_147 = STATE_VARIABLE_CLD_0_11;
              STATE_VARIABLE_Code_146_146 = STATE_VARIABLE_Code_0_8;
            }
            else
            {
              MR_Word RHSType_92;
              MR_Word IsReal_93;
              MR_Word RHSRval_94;
              MR_Word ModuleInfo_95;

              ll_backend__unify_gen_construct__generate_construct_arg_rval_10_p_0(RHSVar_75, ArgMode_66, &RHSType_92, &IsReal_93, &RHSRval_94, STATE_VARIABLE_Code_0_8, &STATE_VARIABLE_Code_146_146, CI_10, STATE_VARIABLE_CLD_0_11, &STATE_VARIABLE_CLD_147_147);
              ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_95);
              check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_95, RHSType_92, STATE_VARIABLE_MayUseAtomic_0_6, &STATE_VARIABLE_MayUseAtomic_145_145);
              switch (IsReal_93) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  HeadCellArgs_86 = (MR_Word) (MR_mkword(1, &ll_backend__unify_gen_construct_scalar_common_1[10]));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_156;

                    {
                      Var_156 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_156, 0) = ((MR_Box) (RHSRval_94));
                    }
                    {
                      HeadCellArgs_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadCellArgs_86, 0) = ((MR_Box) (Var_156));
                      MR_hl_field(1, HeadCellArgs_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              STATE_VARIABLE_TakeAddr_158_158 = STATE_VARIABLE_TakeAddr_0_4;
            }
            LeftOverRHSVarsWidths_101 = Var_192;
            LeftOverArgModes_102 = ArgModes_67;
            LeftOverArgNum_103 = (MR_Integer) ((MR_Unsigned) CurArgNum_3 + (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_76, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Shift_106 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_76, (MR_Integer) 3))));
                MR_Word Fill_109 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_76, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word Completeness0_110;
                MR_Word RevToOrRvals0_111;
                MR_Integer NextArgNum_112;
                MR_Word RevToOrRvals_113;
                MR_Word Completeness_114;
                MR_Word ToOrRvals_115;
                MR_Word PackedRval_116;
                MR_Word Var_160;
                MR_Word STATE_VARIABLE_Code_163_163;
                MR_Word STATE_VARIABLE_CLD_164_164;
                MR_Word Var_171;
                MR_Word RHSType_184;
                MR_Word IsReal_185;
                MR_Word RHSRval_186;
                MR_Word ModuleInfo_187;

                {
                  Var_160 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_160, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[0]));
                  MR_hl_field(0, Var_160, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_3));
                  MR_hl_field(0, Var_160, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_160, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_4));
                  MR_hl_field(0, Var_160, 4) = ((MR_Box) (CurArgNum_3));
                }
                mercury__require__expect_3_p_0(Var_160, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "taking address of partial word");
                ll_backend__unify_gen_construct__generate_construct_arg_rval_10_p_0(RHSVar_75, ArgMode_66, &RHSType_184, &IsReal_185, &RHSRval_186, STATE_VARIABLE_Code_0_8, &STATE_VARIABLE_Code_163_163, CI_10, STATE_VARIABLE_CLD_0_11, &STATE_VARIABLE_CLD_164_164);
                ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_187);
                check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_187, RHSType_184, STATE_VARIABLE_MayUseAtomic_0_6, &STATE_VARIABLE_MayUseAtomic_145_145);
                switch (IsReal_185) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Completeness0_110 = (MR_Integer) 1;
                      RevToOrRvals0_111 = (MR_Word) ((MR_Unsigned) 0U);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      Completeness0_110 = (MR_Integer) 0;
                      ll_backend__unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(RHSRval_186, Shift_106, Fill_109, (MR_Word) ((MR_Unsigned) 0U), &RevToOrRvals0_111);
                    }
                    break;
                }
                NextArgNum_112 = (MR_Integer) ((MR_Unsigned) CurArgNum_3 + (MR_Unsigned) 1);
                ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_17_p_0(Var_192, ArgModes_67, &LeftOverRHSVarsWidths_101, &LeftOverArgModes_102, NextArgNum_112, &LeftOverArgNum_103, STATE_VARIABLE_TakeAddr_0_4, &STATE_VARIABLE_TakeAddr_158_158, RevToOrRvals0_111, &RevToOrRvals_113, Completeness0_110, &Completeness_114, STATE_VARIABLE_Code_163_163, &STATE_VARIABLE_Code_146_146, CI_10, STATE_VARIABLE_CLD_164_164, &STATE_VARIABLE_CLD_147_147);
                mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_113, &ToOrRvals_115);
                PackedRval_116 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_115);
                {
                  Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_171, 0) = ((MR_Box) (PackedRval_116));
                  MR_hl_field(1, Var_171, 1) = (MR_Box) ((MR_Unsigned) (Completeness_114));
                }
                {
                  HeadCellArgs_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, HeadCellArgs_86, 0) = ((MR_Box) (Var_171));
                  MR_hl_field(1, HeadCellArgs_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "apw_partial_shifted");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "apw_none_shifted");
                return;
              }
              break;
          }
          break;
      }
      ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(LeftOverRHSVarsWidths_101, LeftOverArgModes_102, LeftOverArgNum_103, STATE_VARIABLE_TakeAddr_158_158, &TailCellArgs_125, STATE_VARIABLE_MayUseAtomic_145_145, STATE_VARIABLE_MayUseAtomic_7, STATE_VARIABLE_Code_146_146, STATE_VARIABLE_Code_9, CI_10, STATE_VARIABLE_CLD_147_147, STATE_VARIABLE_CLD_12);
      *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), HeadCellArgs_86, TailCellArgs_125);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(
  MR_Word Rval_6,
  MR_Word Shift_7,
  MR_Word Fill_8,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_12,
  MR_Word * STATE_VARIABLE_RevToOrRvals_13)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word Const_10;
  MR_Word Var_14;

  if (succeeded)
  {
    Const_10 = ((MR_Word) ((MR_hl_field(3, Rval_6, (MR_Integer) 1))));
    Var_14 = ll_backend__unify_gen_util__is_zero_const_1_f_0(Const_10);
    succeeded = (Var_14 == (MR_Integer) 1);
  }
  if (succeeded)
    *STATE_VARIABLE_RevToOrRvals_13 = STATE_VARIABLE_RevToOrRvals_0_12;
  else
  {
    MR_Word ShiftedUnsignedRval_11;

    ShiftedUnsignedRval_11 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(Rval_6, Shift_7, Fill_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RevToOrRvals_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ShiftedUnsignedRval_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_12));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_17_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_17_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__unify_gen_construct__not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_17_p_0(
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
  MR_Word STATE_VARIABLE_Code_0_13,
  MR_Word * STATE_VARIABLE_Code_14,
  MR_Word CI_15,
  MR_Word STATE_VARIABLE_CLD_0_16,
  MR_Word * STATE_VARIABLE_CLD_17)
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
        *STATE_VARIABLE_CLD_17 = STATE_VARIABLE_CLD_0_16;
        *STATE_VARIABLE_Code_14 = STATE_VARIABLE_Code_0_13;
        *STATE_VARIABLE_Completeness_12 = STATE_VARIABLE_Completeness_0_11;
        *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
        *STATE_VARIABLE_TakeAddr_8 = STATE_VARIABLE_TakeAddr_0_7;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_one_cons_word\'/17", (MR_String) "length misnatch");
          return;
        }
    else
    {
      MR_Word Var_149 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_150 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_one_cons_word\'/17", (MR_String) "length misnatch");
          return;
        }
      else
      {
        MR_Word ArgMode_86 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgModes_87 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word RHSVar_98 = ((MR_Word) ((MR_hl_field(0, Var_150, (MR_Integer) 0))));
        MR_Word ArgPosWidth_99 = ((MR_Word) ((MR_hl_field(0, Var_150, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) ArgPosWidth_99)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__3_3 = HeadVar__1_1;
              *HeadVar__4_4 = HeadVar__2_2;
              *LeftOverArgNum_6 = CurArgNum_5;
              *STATE_VARIABLE_TakeAddr_8 = STATE_VARIABLE_TakeAddr_0_7;
              *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
              *STATE_VARIABLE_Completeness_12 = STATE_VARIABLE_Completeness_0_11;
              *STATE_VARIABLE_Code_14 = STATE_VARIABLE_Code_0_13;
              *STATE_VARIABLE_CLD_17 = STATE_VARIABLE_CLD_0_16;
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
              *STATE_VARIABLE_Code_14 = STATE_VARIABLE_Code_0_13;
              *STATE_VARIABLE_CLD_17 = STATE_VARIABLE_CLD_0_16;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_99, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__3_3 = HeadVar__1_1;
                  *HeadVar__4_4 = HeadVar__2_2;
                  *LeftOverArgNum_6 = CurArgNum_5;
                  *STATE_VARIABLE_TakeAddr_8 = STATE_VARIABLE_TakeAddr_0_7;
                  *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
                  *STATE_VARIABLE_Completeness_12 = STATE_VARIABLE_Completeness_0_11;
                  *STATE_VARIABLE_Code_14 = STATE_VARIABLE_Code_0_13;
                  *STATE_VARIABLE_CLD_17 = STATE_VARIABLE_CLD_0_16;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Shift_124;
                  MR_Word Fill_127;
                  MR_Word IsReal_153;
                  MR_Word RHSRval_154;
                  MR_Integer NextArgNum_155;
                  MR_Word Var_156;
                  MR_Word STATE_VARIABLE_Code_144_159;
                  MR_Word STATE_VARIABLE_CLD_145_160;
                  MR_Word STATE_VARIABLE_Completeness_146_161;
                  MR_Word STATE_VARIABLE_RevToOrRvals_147_162;
                  MR_Word _RHSType_151;
                  MR_Word next_value_of_HeadVar__1_1;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Integer next_value_of_CurArgNum_5;
                  MR_Word next_value_of_STATE_VARIABLE_RevToOrRvals_0_9;
                  MR_Word next_value_of_STATE_VARIABLE_Completeness_0_11;
                  MR_Word next_value_of_STATE_VARIABLE_Code_0_13;
                  MR_Word next_value_of_STATE_VARIABLE_CLD_0_16;

                  {
                    Var_156 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_156, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[0]));
                    MR_hl_field(0, Var_156, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_17_p_0_2));
                    MR_hl_field(0, Var_156, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_156, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_7));
                    MR_hl_field(0, Var_156, 4) = ((MR_Box) (CurArgNum_5));
                  }
                  mercury__require__expect_3_p_0(Var_156, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_one_cons_word\'/17", (MR_String) "taking address of partial word");
                  ll_backend__unify_gen_construct__generate_construct_arg_rval_10_p_0(RHSVar_98, ArgMode_86, &_RHSType_151, &IsReal_153, &RHSRval_154, STATE_VARIABLE_Code_0_13, &STATE_VARIABLE_Code_144_159, CI_15, STATE_VARIABLE_CLD_0_16, &STATE_VARIABLE_CLD_145_160);
                  Shift_124 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_99, (MR_Integer) 3))));
                  Fill_127 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_99, (MR_Integer) 6))) & (MR_Integer) 7);
                  switch (IsReal_153) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_Completeness_146_161 = (MR_Integer) 1;
                        STATE_VARIABLE_RevToOrRvals_147_162 = STATE_VARIABLE_RevToOrRvals_0_9;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Const_181;
                        MR_Word Var_183;

                        succeeded = ((((MR_tag((MR_Word) RHSRval_154)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, RHSRval_154, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Const_181 = ((MR_Word) ((MR_hl_field(3, RHSRval_154, (MR_Integer) 1))));
                          Var_183 = ll_backend__unify_gen_util__is_zero_const_1_f_0(Const_181);
                          succeeded = (Var_183 == (MR_Integer) 1);
                        }
                        if (succeeded)
                          STATE_VARIABLE_RevToOrRvals_147_162 = STATE_VARIABLE_RevToOrRvals_0_9;
                        else
                        {
                          MR_Word ShiftedUnsignedRval_182;

                          ShiftedUnsignedRval_182 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(RHSRval_154, Shift_124, Fill_127);
                          {
                            STATE_VARIABLE_RevToOrRvals_147_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_RevToOrRvals_147_162, 0) = ((MR_Box) (ShiftedUnsignedRval_182));
                            MR_hl_field(1, STATE_VARIABLE_RevToOrRvals_147_162, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_9));
                          }
                        }
                        STATE_VARIABLE_Completeness_146_161 = STATE_VARIABLE_Completeness_0_11;
                      }
                      break;
                  }
                  NextArgNum_155 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) 1);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Var_149;
                  next_value_of_HeadVar__2_2 = ArgModes_87;
                  next_value_of_CurArgNum_5 = NextArgNum_155;
                  next_value_of_STATE_VARIABLE_RevToOrRvals_0_9 = STATE_VARIABLE_RevToOrRvals_147_162;
                  next_value_of_STATE_VARIABLE_Completeness_0_11 = STATE_VARIABLE_Completeness_146_161;
                  next_value_of_STATE_VARIABLE_Code_0_13 = STATE_VARIABLE_Code_144_159;
                  next_value_of_STATE_VARIABLE_CLD_0_16 = STATE_VARIABLE_CLD_145_160;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  CurArgNum_5 = next_value_of_CurArgNum_5;
                  STATE_VARIABLE_RevToOrRvals_0_9 = next_value_of_STATE_VARIABLE_RevToOrRvals_0_9;
                  STATE_VARIABLE_Completeness_0_11 = next_value_of_STATE_VARIABLE_Completeness_0_11;
                  STATE_VARIABLE_Code_0_13 = next_value_of_STATE_VARIABLE_Code_0_13;
                  STATE_VARIABLE_CLD_0_16 = next_value_of_STATE_VARIABLE_CLD_0_16;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word _RHSType_119;
                  MR_Integer NextArgNum_130;
                  MR_Word Var_141;
                  MR_Word STATE_VARIABLE_Code_144_144;
                  MR_Word STATE_VARIABLE_CLD_145_145;
                  MR_Word ModuleInfo_168;
                  MR_Word RHSInitInst_171;
                  MR_Word RHSFinalInst_172;
                  MR_Word VarTable_173;
                  MR_Word RHSVarEntry_174;
                  MR_Word RHSTopFunctorMode_175;
                  MR_Word next_value_of_HeadVar__1_1;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Integer next_value_of_CurArgNum_5;
                  MR_Word next_value_of_STATE_VARIABLE_Code_0_13;
                  MR_Word next_value_of_STATE_VARIABLE_CLD_0_16;

                  {
                    Var_141 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_141, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[0]));
                    MR_hl_field(0, Var_141, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_17_p_0_1));
                    MR_hl_field(0, Var_141, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_141, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_7));
                    MR_hl_field(0, Var_141, 4) = ((MR_Box) (CurArgNum_5));
                  }
                  mercury__require__expect_3_p_0(Var_141, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_one_cons_word\'/17", (MR_String) "taking address of partial word");
                  ll_backend__code_info__get_module_info_2_p_0(CI_15, &ModuleInfo_168);
                  RHSInitInst_171 = ((MR_Word) ((MR_hl_field(0, ArgMode_86, (MR_Integer) 2))));
                  RHSFinalInst_172 = ((MR_Word) ((MR_hl_field(0, ArgMode_86, (MR_Integer) 3))));
                  ll_backend__code_info__get_var_table_2_p_0(CI_15, &VarTable_173);
                  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_173, RHSVar_98, &RHSVarEntry_174);
                  _RHSType_119 = ((MR_Word) ((MR_hl_field(0, RHSVarEntry_174, (MR_Integer) 1))));
                  check_hlds__mode_top_functor__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_168, RHSInitInst_171, RHSFinalInst_172, _RHSType_119, &RHSTopFunctorMode_175);
                  switch (RHSTopFunctorMode_175) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IsDummy_176 = ((MR_Unsigned) ((MR_hl_field(0, RHSVarEntry_174, (MR_Integer) 2))) & (MR_Integer) 1);

                        switch (IsDummy_176) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              STATE_VARIABLE_Code_144_144 = STATE_VARIABLE_Code_0_13;
                              STATE_VARIABLE_CLD_145_145 = STATE_VARIABLE_CLD_0_16;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word RHSVarCode_164;
                              MR_Word RHSRval_184;

                              ll_backend__code_loc_dep__produce_variable_5_p_0(RHSVar_98, &RHSVarCode_164, &RHSRval_184, STATE_VARIABLE_CLD_0_16, &STATE_VARIABLE_CLD_145_145);
                              STATE_VARIABLE_Code_144_144 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_Code_0_13, RHSVarCode_164);
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_Code_144_144 = STATE_VARIABLE_Code_0_13;
                        STATE_VARIABLE_CLD_145_145 = STATE_VARIABLE_CLD_0_16;
                      }
                      break;
                  }
                  NextArgNum_130 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) 1);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Var_149;
                  next_value_of_HeadVar__2_2 = ArgModes_87;
                  next_value_of_CurArgNum_5 = NextArgNum_130;
                  next_value_of_STATE_VARIABLE_Code_0_13 = STATE_VARIABLE_Code_144_144;
                  next_value_of_STATE_VARIABLE_CLD_0_16 = STATE_VARIABLE_CLD_145_145;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  CurArgNum_5 = next_value_of_CurArgNum_5;
                  STATE_VARIABLE_Code_0_13 = next_value_of_STATE_VARIABLE_Code_0_13;
                  STATE_VARIABLE_CLD_0_16 = next_value_of_STATE_VARIABLE_CLD_0_16;
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
ll_backend__unify_gen_construct__generate_construct_arg_rval_10_p_0(
  MR_Word RHSVar_11,
  MR_Word ArgMode_12,
  MR_Word * RHSType_13,
  MR_Word * IsReal_14,
  MR_Word * RHSRval_15,
  MR_Word STATE_VARIABLE_Code_0_20,
  MR_Word * STATE_VARIABLE_Code_21,
  MR_Word CI_17,
  MR_Word STATE_VARIABLE_CLD_0_22,
  MR_Word * STATE_VARIABLE_CLD_23)
{
  MR_Word ModuleInfo_27;
  MR_Word RHSInitInst_30;
  MR_Word RHSFinalInst_31;
  MR_Word VarTable_32;
  MR_Word RHSVarEntry_33;
  MR_Word RHSTopFunctorMode_34;

  ll_backend__code_info__get_module_info_2_p_0(CI_17, &ModuleInfo_27);
  RHSInitInst_30 = ((MR_Word) ((MR_hl_field(0, ArgMode_12, (MR_Integer) 2))));
  RHSFinalInst_31 = ((MR_Word) ((MR_hl_field(0, ArgMode_12, (MR_Integer) 3))));
  ll_backend__code_info__get_var_table_2_p_0(CI_17, &VarTable_32);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_32, RHSVar_11, &RHSVarEntry_33);
  *RHSType_13 = ((MR_Word) ((MR_hl_field(0, RHSVarEntry_33, (MR_Integer) 1))));
  check_hlds__mode_top_functor__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_27, RHSInitInst_30, RHSFinalInst_31, *RHSType_13, &RHSTopFunctorMode_34);
  switch (RHSTopFunctorMode_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word IsDummy_35 = ((MR_Unsigned) ((MR_hl_field(0, RHSVarEntry_33, (MR_Integer) 2))) & (MR_Integer) 1);

        switch (IsDummy_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *IsReal_14 = (MR_Integer) 0;
              *RHSRval_15 = (MR_Word) (MR_mkword(3, &ll_backend__unify_gen_construct_scalar_common_1[12]));
              *STATE_VARIABLE_Code_21 = STATE_VARIABLE_Code_0_20;
              *STATE_VARIABLE_CLD_23 = STATE_VARIABLE_CLD_0_22;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RHSVarCode_19;

              *IsReal_14 = (MR_Integer) 1;
              ll_backend__code_loc_dep__produce_variable_5_p_0(RHSVar_11, &RHSVarCode_19, RHSRval_15, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
              *STATE_VARIABLE_Code_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_Code_0_20, RHSVarCode_19);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *IsReal_14 = (MR_Integer) 0;
        *RHSRval_15 = (MR_Word) (MR_mkword(3, &ll_backend__unify_gen_construct_scalar_common_1[12]));
        *STATE_VARIABLE_Code_21 = STATE_VARIABLE_Code_0_20;
        *STATE_VARIABLE_CLD_23 = STATE_VARIABLE_CLD_0_22;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____active_ground_term_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__unify_gen_construct____Unify____active_ground_term_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____active_ground_term_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__unify_gen_construct____Compare____active_ground_term_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____field_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__unify_gen_construct____Unify____field_addr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____field_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__unify_gen_construct____Compare____field_addr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____may_store_double_width_natively_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__unify_gen_construct____Unify____may_store_double_width_natively_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____may_store_double_width_natively_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__unify_gen_construct____Compare____may_store_double_width_natively_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____maybe_real_input_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__unify_gen_construct____Unify____maybe_real_input_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____maybe_real_input_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__unify_gen_construct____Compare____maybe_real_input_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__type_ctor_info_may_store_double_width_natively_0);
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
