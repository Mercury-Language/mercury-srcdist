/*
** Automatically generated from `unify_gen_construct.m'
** by the Mercury compiler,
** version rotd-2020-06-16
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
#include "getopt_io.mih"
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
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.error_util.mih"
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

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_value_ordered_maybe_real_input_arg_0[2];

static const MR_EnumFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_name_ordered_maybe_real_input_arg_0[2];

static const MR_Integer ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_maybe_real_input_arg_0[2];

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_arg_tag__1391__1_2_p_0(
  MR_Word Lang_17,
  MR_Word HeadVar__2_68);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1223__1_2_p_0(
  MR_Word LeftOverConstArgsPosWidths_38,
  MR_Word HeadVar__2_83);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1214__1_2_p_0(
  MR_Word ConstArgsPosWidths_15,
  MR_Word HeadVar__2_79);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__6_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_231);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__5_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_218);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__991__1_2_p_0(
  MR_Word LeftOverRHSVarsWidths_73,
  MR_Word HeadVar__2_103);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__985__1_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_98);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__4_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_204);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__3_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_191);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__902__1_2_p_0(
  MR_Word Lang_26,
  MR_Word HeadVar__2_132);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__2_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_178);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__1_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_141);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_and_pack_construct_args__297__1_2_p_0(
  MR_Word STATE_VARIABLE_TakeAddr_0_4,
  MR_Word HeadVar__2_29);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__262__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_146);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__253__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_151);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__271__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_141);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__279__1_2_p_0(
  MR_Word MaybeSize_20,
  MR_Word HeadVar__2_135);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__278__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_131);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__132__1_2_p_0(
  MR_Word Lang_58,
  MR_Word HeadVar__2_197);

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__119__1_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_172);

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
  MR_Word STATE_VARIABLE_StaticCellInfo_0_70,
  MR_Word * STATE_VARIABLE_StaticCellInfo_71);

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
  MR_Word STATE_VARIABLE_RevToOrRvals_0_7,
  MR_Word * STATE_VARIABLE_RevToOrRvals_8);

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
ll_backend__unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(
  MR_Word Rval_6,
  MR_Word Shift_7,
  MR_Word Fill_8,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_12,
  MR_Word * STATE_VARIABLE_RevToOrRvals_13);

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
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[0])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_construct_scalar_common_3[1])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[4])))
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
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_3[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[11]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[10])))
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row 6 */
  {
    (MR_Box) ((MR_Unsigned) 9U)
  },
  /* row 7 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_4[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&ll_backend__unify_gen_construct__list__pti_list_1__plain_ll_backend__unify_gen_util__ti_arg_and_width_1hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_construct_scalar_common_5[1][8] = {
  /* row 0 */
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
  /* row 0 */
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__unify_gen_construct____Unify____active_ground_term_map_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_construct____Compare____active_ground_term_map_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_construct",
  (MR_String) "active_ground_term_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__unify_gen_construct__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0) },
  (MR_Integer) -1,
  UINT16_C(0),
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

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_field_addr_0_0[1] = {
  &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_field_addr_0_0
};

static const MR_DuPtagLayout ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_ptag_ordered_field_addr_0[1] = {
  {
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen_construct____Unify____field_addr_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_construct____Compare____field_addr_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_construct",
  (MR_String) "field_addr",
  {     ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_name_ordered_field_addr_0 },
  {     ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_ptag_ordered_field_addr_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_field_addr_0
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

static const MR_PseudoTypeInfo ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__field_types_may_store_double_width_natively_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0)
};

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

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_may_store_double_width_natively_0_0[1] = {
  &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_may_store_double_width_natively_0_0
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_may_store_double_width_natively_0_1[1] = {
  &ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_functor_desc_may_store_double_width_natively_0_1
};

static const MR_DuPtagLayout ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_ptag_ordered_may_store_double_width_natively_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_may_store_double_width_natively_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_stag_ordered_may_store_double_width_natively_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen_construct____Unify____may_store_double_width_natively_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_construct____Compare____may_store_double_width_natively_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_construct",
  (MR_String) "may_store_double_width_natively",
  {     ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_name_ordered_may_store_double_width_natively_0 },
  {     ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__du_ptag_ordered_may_store_double_width_natively_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_may_store_double_width_natively_0
};

static const MR_EnumFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_0 = {
  (MR_String) "not_real_input_arg",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_functor_desc_maybe_real_input_arg_0_1 = {
  (MR_String) "real_input_arg",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__unify_gen_construct____Unify____maybe_real_input_arg_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_construct____Compare____maybe_real_input_arg_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_construct",
  (MR_String) "maybe_real_input_arg",
  {     ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_name_ordered_maybe_real_input_arg_0 },
  {     ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__enum_value_ordered_maybe_real_input_arg_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__unify_gen_construct__ll_backend__unify_gen_construct__functor_number_map_maybe_real_input_arg_0
};

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_arg_tag__1391__1_2_p_0(
  MR_Word Lang_17,
  MR_Word HeadVar__2_68)
{
  {
    MR_bool succeeded = (Lang_17 == HeadVar__2_68);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1223__1_2_p_0(
  MR_Word LeftOverConstArgsPosWidths_38,
  MR_Word HeadVar__2_83)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[8]), ((MR_Box) (LeftOverConstArgsPosWidths_38)), ((MR_Box) (HeadVar__2_83)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1214__1_2_p_0(
  MR_Word ConstArgsPosWidths_15,
  MR_Word HeadVar__2_79)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[8]), ((MR_Box) (ConstArgsPosWidths_15)), ((MR_Box) (HeadVar__2_79)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__6_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_231)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_231)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__5_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_218)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_218)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__991__1_2_p_0(
  MR_Word LeftOverRHSVarsWidths_73,
  MR_Word HeadVar__2_103)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[6]), ((MR_Box) (LeftOverRHSVarsWidths_73)), ((MR_Box) (HeadVar__2_103)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__985__1_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_98)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_98)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__4_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_204)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_204)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__3_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_191)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_191)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__902__1_2_p_0(
  MR_Word Lang_26,
  MR_Word HeadVar__2_132)
{
  {
    MR_bool succeeded = (Lang_26 == HeadVar__2_132);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__2_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_178)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_178)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__1_2_p_0(
  MR_Word RHSVars_15,
  MR_Word HeadVar__2_141)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_15)), ((MR_Box) (HeadVar__2_141)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_and_pack_construct_args__297__1_2_p_0(
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
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__262__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_146)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_146)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__253__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_151)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_151)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__271__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_141)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_141)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__279__1_2_p_0(
  MR_Word MaybeSize_20,
  MR_Word HeadVar__2_135)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[3]), ((MR_Box) (MaybeSize_20)), ((MR_Box) (HeadVar__2_135)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__278__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_131)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[2]), ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_131)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__132__1_2_p_0(
  MR_Word Lang_58,
  MR_Word HeadVar__2_197)
{
  {
    MR_bool succeeded = (Lang_58 == HeadVar__2_197);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__119__1_2_p_0(
  MR_Word RHSVars_16,
  MR_Word HeadVar__2_172)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[1]), ((MR_Box) (RHSVars_16)), ((MR_Box) (HeadVar__2_172)));
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
ll_backend__unify_gen_construct____Compare____may_store_double_width_natively_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__prog_data____Compare____arg_pos_width_0_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct____Unify____may_store_double_width_natively_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__prog_data____Unify____arg_pos_width_0_0(ArgX1_5, ArgY1_6);
      }
    }
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__not_taking_addr_of_cur_arg_2_p_0(
  MR_Word TakeAddr_3,
  MR_Integer CurArgNum_4)
{
  {
    MR_bool succeeded = (TakeAddr_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer Var_6;

    if (succeeded)
    {
      Var_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TakeAddr_3, (MR_Integer) 0))));
      succeeded = (CurArgNum_4 == Var_6);
    }
    if (succeeded)
      succeeded = MR_FALSE;
    else
      succeeded = MR_TRUE;
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

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1223__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_rval__1214__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_StaticCellInfo_0_70,
  MR_Word * STATE_VARIABLE_StaticCellInfo_71)
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "unexpected tag");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ConstArgPosWidth_39;
              MR_Box conv1_ConstArgPosWidth_39;

              hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[7]), ConstArgsPosWidths_15, &conv1_ConstArgPosWidth_39);
              ConstArgPosWidth_39 = ((MR_Word) (conv1_ConstArgPosWidth_39));
              ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgPosWidth_39, TypedRval_16);
              *STATE_VARIABLE_StaticCellInfo_71 = STATE_VARIABLE_StaticCellInfo_0_70;
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 0))))) {
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
              MR_Word RemoteArgsTagInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1))));
              MR_Word Ptag_19;
              MR_Word RHSTypedRvals_20;
              MR_Word DataAddr_33;
              MR_Word CellPtrConst_35;
              MR_Word Rval_36;
              MR_Word Var_98;

              switch (MR_tag((MR_Word) RemoteArgsTagInfo_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Ptag_19 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                    ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsPosWidths_15, &RHSTypedRvals_20);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Ptag_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_18, (MR_Integer) 0))));
                    ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsPosWidths_15, &RHSTypedRvals_20);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word RemoteSectag_21;
                    MR_Unsigned SectagUint_22;
                    MR_Word SectagSize_23;
                    MR_Word TypedTagwordRval_24;
                    MR_Word NonTagwordConstArgsPosWidths_25;
                    MR_Word NonTagwordTypedRvals_31;

                    Ptag_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_18, (MR_Integer) 0))));
                    RemoteSectag_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_18, (MR_Integer) 1))));
                    SectagUint_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_21, (MR_Integer) 0))));
                    SectagSize_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_21, (MR_Integer) 1))));
                    if ((SectagSize_23 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Var_92;
                      MR_Word Var_93;

                      {
                        Var_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_93, 0) = ((MR_Box) (SectagUint_22));
                      }
                      {
                        Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_93));
                      }
                      {
                        TypedTagwordRval_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypedTagwordRval_24, 0) = ((MR_Box) (Var_92));
                        MR_hl_field(MR_mktag(0), TypedTagwordRval_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[7])));
                      }
                      NonTagwordConstArgsPosWidths_25 = ConstArgsPosWidths_15;
                    }
                    else
                    {
                      MR_Word RevToOrRvals0_27;
                      MR_Word RevToOrRvals_28;
                      MR_Word ToOrRvals_29;
                      MR_Word TagwordRval_30;

                      succeeded = (SectagUint_22 == (MR_Unsigned) 0U);
                      if (succeeded)
                        RevToOrRvals0_27 = (MR_Word) ((MR_Unsigned) 0U);
                      else
                      {
                        MR_Word Var_87;
                        MR_Word Var_88;

                        {
                          Var_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_88, 0) = ((MR_Box) (SectagUint_22));
                        }
                        {
                          Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Var_88));
                        }
                        {
                          RevToOrRvals0_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RevToOrRvals0_27, 0) = ((MR_Box) (Var_87));
                          MR_hl_field(MR_mktag(1), RevToOrRvals0_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      ll_backend__unify_gen_construct__generate_const_struct_args_for_one_word_8_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsPosWidths_15, &NonTagwordConstArgsPosWidths_25, RevToOrRvals0_27, &RevToOrRvals_28);
                      mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_28, &ToOrRvals_29);
                      TagwordRval_30 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_29);
                      {
                        TypedTagwordRval_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypedTagwordRval_24, 0) = ((MR_Box) (TagwordRval_30));
                        MR_hl_field(MR_mktag(0), TypedTagwordRval_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[7])));
                      }
                    }
                    ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, NonTagwordConstArgsPosWidths_25, &NonTagwordTypedRvals_31);
                    {
                      RHSTypedRvals_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), RHSTypedRvals_20, 0) = ((MR_Box) (TypedTagwordRval_24));
                      MR_hl_field(MR_mktag(1), RHSTypedRvals_20, 1) = ((MR_Box) (NonTagwordTypedRvals_31));
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
              ll_backend__global_data__add_scalar_static_cell_4_p_0(RHSTypedRvals_20, &DataAddr_33, STATE_VARIABLE_StaticCellInfo_0_70, STATE_VARIABLE_StaticCellInfo_71);
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (DataAddr_33));
                MR_hl_field(MR_mktag(3), Var_98, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                CellPtrConst_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), CellPtrConst_35, 1) = ((MR_Box) (Var_98));
              }
              {
                Rval_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_36, 0) = ((MR_Box) (Ptag_19));
                MR_hl_field(MR_mktag(2), Rval_36, 1) = ((MR_Box) (CellPtrConst_35));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_36));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word LocalArgsTagInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1))));
              MR_Word LeftOverConstArgsPosWidths_38;
              MR_Word Var_76;
              MR_Word Var_80;
              MR_Word RevToOrRvals0_100;
              MR_Word RevToOrRvals_101;
              MR_Word ToOrRvals_102;
              MR_Word Rval_103;

              {
                Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[6]));
                MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_const_struct_rval_9_p_0_1));
                MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (ConstArgsPosWidths_15));
                MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_not_3_p_0(Var_76, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "local_args_tag has no args");
              ll_backend__unify_gen_construct__maybe_accumulate_local_sectag_2_p_0(LocalArgsTagInfo_37, &RevToOrRvals0_100);
              ll_backend__unify_gen_construct__generate_const_struct_args_for_one_word_8_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsPosWidths_15, &LeftOverConstArgsPosWidths_38, RevToOrRvals0_100, &RevToOrRvals_101);
              mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_101, &ToOrRvals_102);
              Rval_103 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_102);
              {
                Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[6]));
                MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_const_struct_rval_9_p_0_2));
                MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (LeftOverConstArgsPosWidths_38));
                MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_80, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_rval\'/9", (MR_String) "left over args");
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_103));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              *STATE_VARIABLE_StaticCellInfo_71 = STATE_VARIABLE_StaticCellInfo_0_70;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ArgRval_41;
              MR_Word Ptag_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1))));
              MR_Word Rval_105;
              MR_Word ConstArgPosWidth_106;
              MR_Word ArgTypedRval_107;
              MR_Box conv0_ConstArgPosWidth_106;
              uint8_t Var_74;

              hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[7]), ConstArgsPosWidths_15, &conv0_ConstArgPosWidth_106);
              ConstArgPosWidth_106 = ((MR_Word) (conv0_ConstArgPosWidth_106));
              ll_backend__unify_gen_construct__generate_const_struct_arg_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgPosWidth_106, &ArgTypedRval_107);
              ArgRval_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_107, (MR_Integer) 0))));
              Var_74 = (uint8_t) (Ptag_104);
              succeeded = (Var_74 == UINT8_C(0));
              if (succeeded)
                Rval_105 = ArgRval_41;
              else
                {
                  Rval_105 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Rval_105, 0) = ((MR_Box) (Ptag_104));
                  MR_hl_field(MR_mktag(2), Rval_105, 1) = ((MR_Box) (ArgRval_41));
                }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_105));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              *STATE_VARIABLE_StaticCellInfo_71 = STATE_VARIABLE_StaticCellInfo_0_70;
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
    MR_bool succeeded;

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
              MR_Integer ConstNum_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), _ConstArg_18, (MR_Integer) 0))));
              MR_Box conv0_HeadTypedRval_25;

              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_4, ConstNum_66, &conv0_HeadTypedRval_25);
              HeadTypedRval_25 = ((MR_Word) (conv0_HeadTypedRval_25));
            }
            else
            {
              MR_Word ConsId_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), _ConstArg_18, (MR_Integer) 0))));
              MR_Word ConsTag_69;

              ConsTag_69 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, ConsId_67);
              ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_2, UnboxedInt64s_3, ConsTag_69, ArgPosWidth_19, &HeadTypedRval_25);
            }
            ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, ConstArgsPosWidths_16, &TailTypedRvals_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTypedRval_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTypedRvals_26));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Shift_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 3))));
                MR_Word Fill_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word FirstTypedRval_33;
                MR_Word FirstRval_34;
                MR_Word RevToOrRvals0_36;
                MR_Word LeftOverConstArgsPosWidths_37;
                MR_Word RevToOrRvals_38;
                MR_Word ToOrRvals_39;
                MR_Word HeadRval_40;
                MR_Word HeadTypedRval_56;
                MR_Word TailTypedRvals_57;
                MR_Word Const_91;
                MR_Word Var_93;

                if (((MR_tag((MR_Word) _ConstArg_18)) == (MR_Integer) 0))
                {
                  MR_Integer ConstNum_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), _ConstArg_18, (MR_Integer) 0))));
                  MR_Box conv1_FirstTypedRval_33;

                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_4, ConstNum_79, &conv1_FirstTypedRval_33);
                  FirstTypedRval_33 = ((MR_Word) (conv1_FirstTypedRval_33));
                }
                else
                {
                  MR_Word ConsId_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), _ConstArg_18, (MR_Integer) 0))));
                  MR_Word ConsTag_82;

                  ConsTag_82 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, ConsId_80);
                  ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_2, UnboxedInt64s_3, ConsTag_82, ArgPosWidth_19, &FirstTypedRval_33);
                }
                FirstRval_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstTypedRval_33, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) FirstRval_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FirstRval_34, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Const_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FirstRval_34, (MR_Integer) 1))));
                  Var_93 = ll_backend__unify_gen_util__is_zero_const_1_f_0(Const_91);
                  succeeded = (Var_93 == (MR_Integer) 1);
                }
                if (succeeded)
                  RevToOrRvals0_36 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Word ShiftedUnsignedRval_92;

                  ShiftedUnsignedRval_92 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(FirstRval_34, Shift_29, Fill_32);
                  {
                    RevToOrRvals0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RevToOrRvals0_36, 0) = ((MR_Box) (ShiftedUnsignedRval_92));
                    MR_hl_field(MR_mktag(1), RevToOrRvals0_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                ll_backend__unify_gen_construct__generate_const_struct_args_for_one_word_8_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, ConstArgsPosWidths_16, &LeftOverConstArgsPosWidths_37, RevToOrRvals0_36, &RevToOrRvals_38);
                mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_38, &ToOrRvals_39);
                HeadRval_40 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_39);
                {
                  HeadTypedRval_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HeadTypedRval_56, 0) = ((MR_Box) (HeadRval_40));
                  MR_hl_field(MR_mktag(0), HeadTypedRval_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[7])));
                }
                ll_backend__unify_gen_construct__generate_const_struct_args_6_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, LeftOverConstArgsPosWidths_37, &TailTypedRvals_57);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__6_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTypedRval_56));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTypedRvals_57));
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
      MR_Word ConstArgPosWidth_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ConstArgsPosWidths_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word _ConstArg_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstArgPosWidth_20, (MR_Integer) 0))));
      MR_Word ArgPosWidth_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstArgPosWidth_20, (MR_Integer) 1))));

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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_25, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__6_6 = HeadVar__5_5;
                *STATE_VARIABLE_RevToOrRvals_8 = STATE_VARIABLE_RevToOrRvals_0_7;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Shift_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_25, (MR_Integer) 3))));
                MR_Word Fill_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_25, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word ArgTypedRval_43;
                MR_Word ArgRval_44;
                MR_Word STATE_VARIABLE_RevToOrRvals_50_52;
                MR_Word Const_72;
                MR_Word Var_74;
                MR_Word next_value_of_HeadVar__5_5;
                MR_Word next_value_of_STATE_VARIABLE_RevToOrRvals_0_7;

                if (((MR_tag((MR_Word) _ConstArg_24)) == (MR_Integer) 0))
                {
                  MR_Integer ConstNum_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), _ConstArg_24, (MR_Integer) 0))));
                  MR_Box conv0_ArgTypedRval_43;

                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_4, ConstNum_60, &conv0_ArgTypedRval_43);
                  ArgTypedRval_43 = ((MR_Word) (conv0_ArgTypedRval_43));
                }
                else
                {
                  MR_Word ConsId_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), _ConstArg_24, (MR_Integer) 0))));
                  MR_Word ConsTag_63;

                  ConsTag_63 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, ConsId_61);
                  ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_2, UnboxedInt64s_3, ConsTag_63, ArgPosWidth_25, &ArgTypedRval_43);
                }
                ArgRval_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_43, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) ArgRval_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgRval_44, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Const_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgRval_44, (MR_Integer) 1))));
                  Var_74 = ll_backend__unify_gen_util__is_zero_const_1_f_0(Const_72);
                  succeeded = (Var_74 == (MR_Integer) 1);
                }
                if (succeeded)
                  STATE_VARIABLE_RevToOrRvals_50_52 = STATE_VARIABLE_RevToOrRvals_0_7;
                else
                {
                  MR_Word ShiftedUnsignedRval_73;

                  ShiftedUnsignedRval_73 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(ArgRval_44, Shift_39, Fill_42);
                  {
                    STATE_VARIABLE_RevToOrRvals_50_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevToOrRvals_50_52, 0) = ((MR_Box) (ShiftedUnsignedRval_73));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevToOrRvals_50_52, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_7));
                  }
                }
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__5_5 = ConstArgsPosWidths_21;
                next_value_of_STATE_VARIABLE_RevToOrRvals_0_7 = STATE_VARIABLE_RevToOrRvals_50_52;
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
ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_const_struct_arg_tag__1391__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
            *TypedRval_10 = (MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[14]);
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
          MR_Word IntTag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_8, (MR_Integer) 0))));
          MR_Word IntType_13;
          MR_Word Var_73;
          MR_Word Const_88;
          MR_Word Type_89;
          MR_Word Var_90;

          ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_11, &Const_88, &IntType_13);
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (ArgPosWidth_9));
          }
          ll_backend__unify_gen_construct__store_int_tag_statically_4_p_0(IntType_13, UnboxedInt64s_7, Var_73, &Type_89);
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Const_88));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *TypedRval_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_89));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_15 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_8, (MR_Integer) 0)));
          MR_Word Var_72;
          MR_Word Const_82;
          MR_Word Type_83;
          MR_Word Var_84;

          {
            Const_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_82, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Const_82, 1) = MR_box_float(Float_15);
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (ArgPosWidth_9));
          }
          ll_backend__unify_gen_construct__store_float_tag_statically_3_p_0(UnboxedFloats_6, Var_72, &Type_83);
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Const_82));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *TypedRval_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_83));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String String_16 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
              MR_Word Const_91;
              MR_Word Var_93;

              {
                Const_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_91, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), Const_91, 1) = ((MR_Box) (String_16));
              }
              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (Const_91));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_93));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Val_18 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2))));
              MR_Word Var_65;
              MR_Word Const_85;
              MR_Word Type_86;
              MR_Word Var_87;

              {
                Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[3]));
                MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_const_struct_arg_tag_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Lang_17));
                MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_const_struct_arg_tag\'/5", (MR_String) "foreign_tag for language other than C");
              Type_86 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[4]));
              {
                Const_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_85, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), Const_85, 1) = ((MR_Box) (Val_18));
                MR_hl_field(MR_mktag(3), Const_85, 2) = ((MR_Box) (Type_86));
              }
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Const_85));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_87));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_86));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word LocalSectag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2))));
              MR_Unsigned PrimSec_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_20, (MR_Integer) 1))));
              MR_Word Rval_25;
              MR_Word Var_61;

              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (PrimSec_23));
              }
              {
                Rval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Rval_25, 1) = ((MR_Box) (Var_61));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_25));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
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
              MR_Word ModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
              MR_String TypeName_27 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2))));
              MR_Integer TypeArity_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 3))));
              MR_Word RttiTypeCtor_29;
              MR_Word DataId_30;
              uint16_t Var_56;
              MR_Word Var_57;
              MR_Word Var_59;
              MR_Word Rval_76;

              Var_56 = mercury__uint16__det_from_int_1_f_0(TypeArity_28);
              {
                RttiTypeCtor_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_29, 0) = ((MR_Box) (ModuleName_26));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_29, 1) = ((MR_Box) (TypeName_27));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_29, 2) = ((MR_Box) (MR_Word) (Var_56));
              }
              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (RttiTypeCtor_29));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 44U));
              }
              {
                DataId_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_30, 0) = ((MR_Box) (Var_57));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (DataId_30));
                MR_hl_field(MR_mktag(3), Var_59, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Rval_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Rval_76, 1) = ((MR_Box) (Var_59));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_76));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ClassId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2))));
              MR_String Instance_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 3))));
              MR_Word TCName_33;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Rval_78;
              MR_Word ModuleName_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
              MR_Word DataId_80;

              TCName_33 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_31);
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ModuleName_79));
                MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Instance_32));
              }
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (TCName_33));
                MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
              }
              {
                DataId_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_80, 0) = ((MR_Box) (Var_52));
              }
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (DataId_80));
                MR_hl_field(MR_mktag(3), Var_54, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Rval_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Rval_78, 1) = ((MR_Box) (Var_54));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_78));
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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CellArg_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CellArg_6, (MR_Integer) 1))));
            MR_Word FieldAddr_16;

            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) 1);
            {
              FieldAddr_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FieldAddr_16, 0) = ((MR_Box) (ArgOffset_7));
              MR_hl_field(MR_mktag(0), FieldAddr_16, 1) = ((MR_Box) (Var_13));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) 2);
            {
              FieldAddr_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FieldAddr_25, 0) = ((MR_Box) (ArgOffset_7));
              MR_hl_field(MR_mktag(0), FieldAddr_25, 1) = ((MR_Box) (Var_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 268, &OptUnboxedFloats_9);
    switch (OptUnboxedFloats_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedFloats_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        UnboxedFloats_10 = (MR_Integer) 0;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 269, &OptUnboxedInt64s_11);
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
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_const_structs_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
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
  MR_Word STATE_VARIABLE_CI_0_25,
  MR_Word * STATE_VARIABLE_CI_26,
  MR_Word STATE_VARIABLE_CLD_0_27,
  MR_Word * STATE_VARIABLE_CLD_28)
{
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
            Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActivePairs_20, (MR_Integer) 0))));
            Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActivePairs_20, (MR_Integer) 1))));
            Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
            GroundTerm_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 1))));
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
            Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_21, (MR_Integer) 0))));
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
      MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
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
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__6_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_8(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__5_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__991__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__985__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__4_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__3_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__902__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_ground_term_conjunct__916__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
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
              MR_Word Var_138;

              {
                Var_138 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_1));
                MR_hl_field(MR_mktag(0), Var_138, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_138, 3) = ((MR_Box) (RHSVars_15));
                MR_hl_field(MR_mktag(0), Var_138, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_138, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "constant has args");
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_1[14])), STATE_VARIABLE_ActiveMap_0_84, STATE_VARIABLE_ActiveMap_85);
              *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RHSVar_75;
              MR_Word RvalType_76;
              MR_Word STATE_VARIABLE_ActiveMap_93_93;
              MR_Box conv2_RHSVar_75;
              MR_Box conv3_RvalType_76;

              hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), RHSVars_15, &conv2_RHSVar_75);
              RHSVar_75 = ((MR_Word) (conv2_RHSVar_75));
              mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (RHSVar_75)), &conv3_RvalType_76, STATE_VARIABLE_ActiveMap_0_84, &STATE_VARIABLE_ActiveMap_93_93);
              RvalType_76 = ((MR_Word) (conv3_RvalType_76));
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (RvalType_76)), STATE_VARIABLE_ActiveMap_93_93, STATE_VARIABLE_ActiveMap_85);
              *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntTag_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_17, (MR_Integer) 0))));
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
            MR_hl_field(MR_mktag(0), Var_201, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_201, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_5));
            MR_hl_field(MR_mktag(0), Var_201, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_201, 3) = ((MR_Box) (RHSVars_15));
            MR_hl_field(MR_mktag(0), Var_201, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_201, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "constant has args");
          {
            Var_205 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_205, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_205, 1) = ((MR_Box) (Const_198));
          }
          {
            ActiveGroundTerm_200 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_200, 0) = ((MR_Box) (Var_205));
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_200, 1) = ((MR_Box) (Type_199));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_200)), STATE_VARIABLE_ActiveMap_0_84, STATE_VARIABLE_ActiveMap_85);
          *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_23 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_17, (MR_Integer) 0)));
          MR_Word UnboxedFloats_24;
          MR_Word Const_172;
          MR_Word Type_173;
          MR_Word ActiveGroundTerm_174;
          MR_Word Var_175;
          MR_Word Var_179;

          {
            Const_172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_172, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Const_172, 1) = MR_box_float(Float_23);
          }
          UnboxedFloats_24 = ll_backend__llds__get_unboxed_floats_1_f_0(ExprnOpts_9);
          ll_backend__unify_gen_construct__store_float_tag_statically_3_p_0(UnboxedFloats_24, (MR_Word) ((MR_Unsigned) 0U), &Type_173);
          {
            Var_175 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_175, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_175, 3) = ((MR_Box) (RHSVars_15));
            MR_hl_field(MR_mktag(0), Var_175, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_175, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "constant has args");
          {
            Var_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_179, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_179, 1) = ((MR_Box) (Const_172));
          }
          {
            ActiveGroundTerm_174 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_174, 0) = ((MR_Box) (Var_179));
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_174, 1) = ((MR_Box) (Type_173));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_174)), STATE_VARIABLE_ActiveMap_0_84, STATE_VARIABLE_ActiveMap_85);
          *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String String_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word Const_225;
              MR_Word ActiveGroundTerm_227;
              MR_Word Var_228;
              MR_Word Var_232;

              {
                Const_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_225, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), Const_225, 1) = ((MR_Box) (String_25));
              }
              {
                Var_228 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_228, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_228, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_9));
                MR_hl_field(MR_mktag(0), Var_228, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_228, 3) = ((MR_Box) (RHSVars_15));
                MR_hl_field(MR_mktag(0), Var_228, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_228, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "constant has args");
              {
                Var_232 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_232, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_232, 1) = ((MR_Box) (Const_225));
              }
              {
                ActiveGroundTerm_227 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_227, 0) = ((MR_Box) (Var_232));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_227, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_227)), STATE_VARIABLE_ActiveMap_0_84, STATE_VARIABLE_ActiveMap_85);
              *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Val_27 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2))));
              MR_Word Var_129;
              MR_Word Const_185;
              MR_Word Type_186;
              MR_Word ActiveGroundTerm_187;
              MR_Word Var_188;
              MR_Word Var_192;

              {
                Var_129 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[3]));
                MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_3));
                MR_hl_field(MR_mktag(0), Var_129, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_129, 3) = ((MR_Box) (Lang_26));
                MR_hl_field(MR_mktag(0), Var_129, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_129, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "foreign_tag for language other than C");
              Type_186 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[4]));
              {
                Const_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_185, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), Const_185, 1) = ((MR_Box) (Val_27));
                MR_hl_field(MR_mktag(3), Const_185, 2) = ((MR_Box) (Type_186));
              }
              {
                Var_188 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_188, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_188, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_4));
                MR_hl_field(MR_mktag(0), Var_188, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_188, 3) = ((MR_Box) (RHSVars_15));
                MR_hl_field(MR_mktag(0), Var_188, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_188, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "constant has args");
              {
                Var_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_192, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_192, 1) = ((MR_Box) (Const_185));
              }
              {
                ActiveGroundTerm_187 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_187, 0) = ((MR_Box) (Var_192));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_187, 1) = ((MR_Box) (Type_186));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_187)), STATE_VARIABLE_ActiveMap_0_84, STATE_VARIABLE_ActiveMap_85);
              *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word LocalSectag_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2))));
              MR_Unsigned PrimSec_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_29, (MR_Integer) 1))));
              MR_Word Const_212;
              MR_Word ActiveGroundTerm_214;
              MR_Word Var_215;
              MR_Word Var_219;

              {
                Const_212 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Const_212, 0) = ((MR_Box) (PrimSec_32));
              }
              {
                Var_215 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_215, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_215, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_8));
                MR_hl_field(MR_mktag(0), Var_215, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_215, 3) = ((MR_Box) (RHSVars_15));
                MR_hl_field(MR_mktag(0), Var_215, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_215, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "constant has args");
              {
                Var_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_219, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_219, 1) = ((MR_Box) (Const_212));
              }
              {
                ActiveGroundTerm_214 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_214, 0) = ((MR_Box) (Var_219));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_214, 1) = ((MR_Box) ((MR_Unsigned) 12U));
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
              MR_Word RemoteArgsTagInfo_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word RHSVarsWidths_52;
              MR_Word Ptag_53;
              MR_Word AllRHSTypedRvals_55;
              MR_Word DataAddr_68;
              MR_Word CellPtrConst_70;
              MR_Word LHSRval_71;
              MR_Word STATE_VARIABLE_ActiveMap_120_120;
              MR_Word Var_122;
              MR_Word ActiveGroundTerm_144;

              ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), ModuleInfo_8, ConsId_14, RHSVars_15, &RHSVarsWidths_52);
              switch (MR_tag((MR_Word) RemoteArgsTagInfo_51)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Ptag_53 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                    ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(RHSVarsWidths_52, &AllRHSTypedRvals_55, STATE_VARIABLE_ActiveMap_0_84, &STATE_VARIABLE_ActiveMap_120_120);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Ptag_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_51, (MR_Integer) 0))));
                    ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(RHSVarsWidths_52, &AllRHSTypedRvals_55, STATE_VARIABLE_ActiveMap_0_84, &STATE_VARIABLE_ActiveMap_120_120);
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
                    MR_Word STATE_VARIABLE_ActiveMap_111_111;

                    Ptag_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_51, (MR_Integer) 0))));
                    RemoteSectag_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_51, (MR_Integer) 1))));
                    SectagUint_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_56, (MR_Integer) 0))));
                    SectagSize_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_56, (MR_Integer) 1))));
                    if ((SectagSize_58 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Var_114;
                      MR_Word Var_115;

                      {
                        Var_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_115, 0) = ((MR_Box) (SectagUint_57));
                      }
                      {
                        Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (Var_115));
                      }
                      {
                        TagwordTypedRval_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TagwordTypedRval_59, 0) = ((MR_Box) (Var_114));
                        MR_hl_field(MR_mktag(0), TagwordTypedRval_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[7])));
                      }
                      NonTagwordRHSVarsWidths_60 = RHSVarsWidths_52;
                      STATE_VARIABLE_ActiveMap_111_111 = STATE_VARIABLE_ActiveMap_0_84;
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
                        MR_Word Var_108;
                        MR_Word Var_109;

                        {
                          Var_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_109, 0) = ((MR_Box) (SectagUint_57));
                        }
                        {
                          Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (Var_109));
                        }
                        {
                          RevToOrRvals0_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RevToOrRvals0_62, 0) = ((MR_Box) (Var_108));
                          MR_hl_field(MR_mktag(1), RevToOrRvals0_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      ll_backend__unify_gen_construct__generate_ground_term_args_for_one_word_6_p_0(RHSVarsWidths_52, &NonTagwordRHSVarsWidths_60, RevToOrRvals0_62, &RevToOrRvals_63, STATE_VARIABLE_ActiveMap_0_84, &STATE_VARIABLE_ActiveMap_111_111);
                      mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_63, &ToOrRvals_64);
                      TagwordRval_65 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_64);
                      {
                        TagwordTypedRval_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TagwordTypedRval_59, 0) = ((MR_Box) (TagwordRval_65));
                        MR_hl_field(MR_mktag(0), TagwordTypedRval_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[7])));
                      }
                    }
                    ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(NonTagwordRHSVarsWidths_60, &NonTagwordPackedRHSTypedRvals_66, STATE_VARIABLE_ActiveMap_111_111, &STATE_VARIABLE_ActiveMap_120_120);
                    {
                      AllRHSTypedRvals_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), AllRHSTypedRvals_55, 0) = ((MR_Box) (TagwordTypedRval_59));
                      MR_hl_field(MR_mktag(1), AllRHSTypedRvals_55, 1) = ((MR_Box) (NonTagwordPackedRHSTypedRvals_66));
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
                Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (DataAddr_68));
                MR_hl_field(MR_mktag(3), Var_122, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                CellPtrConst_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_70, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), CellPtrConst_70, 1) = ((MR_Box) (Var_122));
              }
              {
                LHSRval_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), LHSRval_71, 0) = ((MR_Box) (Ptag_53));
                MR_hl_field(MR_mktag(2), LHSRval_71, 1) = ((MR_Box) (CellPtrConst_70));
              }
              {
                ActiveGroundTerm_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_144, 0) = ((MR_Box) (LHSRval_71));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_144, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_144)), STATE_VARIABLE_ActiveMap_120_120, STATE_VARIABLE_ActiveMap_85);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word LocalArgsTagInfo_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word LeftOverRHSVarsWidths_73;
              MR_Word PackedRval_74;
              MR_Word Var_95;
              MR_Word STATE_VARIABLE_ActiveMap_99_99;
              MR_Word Var_100;
              MR_Word ActiveGroundTerm_145;
              MR_Word RHSVarsWidths_146;
              MR_Word RevToOrRvals0_147;
              MR_Word RevToOrRvals_148;
              MR_Word ToOrRvals_149;

              {
                Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_6));
                MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (RHSVars_15));
                MR_hl_field(MR_mktag(0), Var_95, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_not_3_p_0(Var_95, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "local_args_tag has no args");
              ll_backend__unify_gen_construct__maybe_accumulate_local_sectag_2_p_0(LocalArgsTagInfo_72, &RevToOrRvals0_147);
              ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), ModuleInfo_8, ConsId_14, RHSVars_15, &RHSVarsWidths_146);
              ll_backend__unify_gen_construct__generate_ground_term_args_for_one_word_6_p_0(RHSVarsWidths_146, &LeftOverRHSVarsWidths_73, RevToOrRvals0_147, &RevToOrRvals_148, STATE_VARIABLE_ActiveMap_0_84, &STATE_VARIABLE_ActiveMap_99_99);
              {
                Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[5]));
                MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_ground_term_conjunct_7_p_0_7));
                MR_hl_field(MR_mktag(0), Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_100, 3) = ((MR_Box) (LeftOverRHSVarsWidths_73));
                MR_hl_field(MR_mktag(0), Var_100, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_ground_term_conjunct\'/7", (MR_String) "left over args");
              mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_148, &ToOrRvals_149);
              PackedRval_74 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_149);
              {
                ActiveGroundTerm_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_145, 0) = ((MR_Box) (PackedRval_74));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_145, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_145)), STATE_VARIABLE_ActiveMap_99_99, STATE_VARIABLE_ActiveMap_85);
              *STATE_VARIABLE_StaticCellInfo_83 = STATE_VARIABLE_StaticCellInfo_0_82;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word RHSRval_77;
              MR_Word Var_88;
              MR_Word STATE_VARIABLE_ActiveMap_89_89;
              MR_Word ActiveGroundTerm_150;
              MR_Word Ptag_151 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word LHSRval_152;
              MR_Word RHSVar_153;
              MR_Box conv0_RHSVar_153;
              MR_Box conv1_Var_88;
              uint8_t Var_90;

              hlds__goal_form__get_notag_or_direct_arg_arg_2_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), RHSVars_15, &conv0_RHSVar_153);
              RHSVar_153 = ((MR_Word) (conv0_RHSVar_153));
              mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (RHSVar_153)), &conv1_Var_88, STATE_VARIABLE_ActiveMap_0_84, &STATE_VARIABLE_ActiveMap_89_89);
              Var_88 = ((MR_Word) (conv1_Var_88));
              RHSRval_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_88, (MR_Integer) 0))));
              Var_90 = (uint8_t) (Ptag_151);
              succeeded = (Var_90 == UINT8_C(0));
              if (succeeded)
                LHSRval_152 = RHSRval_77;
              else
                {
                  LHSRval_152 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), LHSRval_152, 0) = ((MR_Box) (Ptag_151));
                  MR_hl_field(MR_mktag(2), LHSRval_152, 1) = ((MR_Box) (RHSRval_77));
                }
              {
                ActiveGroundTerm_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_150, 0) = ((MR_Box) (LHSRval_152));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_150, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (LHSVar_13)), ((MR_Box) (ActiveGroundTerm_150)), STATE_VARIABLE_ActiveMap_89_89, STATE_VARIABLE_ActiveMap_85);
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
}

static void MR_CALL 
ll_backend__unify_gen_construct__store_float_tag_statically_3_p_0(
  MR_Word UnboxedFloats_4,
  MR_Word MayStoreDoubleWidthStatically_5,
  MR_Word * Type_6)
{
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
            ArgPosWidth_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayStoreDoubleWidthStatically_5, (MR_Integer) 0))));
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
}

static void MR_CALL 
ll_backend__unify_gen_construct__store_int_tag_statically_4_p_0(
  MR_Word IntType_5,
  MR_Word UnboxedInt64s_6,
  MR_Word MayStoreDoubleWidthStatically_7,
  MR_Word * Type_8)
{
  {
    MR_bool succeeded;

    switch (IntType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 4:
      case (MR_Integer) 6:
      case (MR_Integer) 2:
        *Type_8 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[4]));
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
                ArgPosWidth_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayStoreDoubleWidthStatically_7, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) ArgPosWidth_9)) == (MR_Integer) 2);
                if (succeeded)
                {
                }
              }
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Type_8 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (IntType_5));
                }
              else
                *Type_8 = (MR_Word) ((MR_Unsigned) 12U);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Type_8 = base;
              MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (IntType_5));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 3:
        *Type_8 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[7]));
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
            MR_Word DoubleWordKind_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ArgPosWidth_14, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word ArgRval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_15, (MR_Integer) 0))));
            MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_15, (MR_Integer) 1))));

            succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 12U));
            if (succeeded)
              switch (DoubleWordKind_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    TypedRval_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (ArgRval_21));
                    MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    TypedRval_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (ArgRval_21));
                    MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[5])));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    TypedRval_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (ArgRval_21));
                    MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[6])));
                  }
                  break;
              }
            else
              TypedRval_10 = ArgTypedRval_15;
            ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(ArgVarsWidths_9, &TypedRvals_11, STATE_VARIABLE_ActiveMap_44_44, STATE_VARIABLE_ActiveMap_4);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Shift_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 3))));
                MR_Word Fill_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word RevToOrRvals0_29;
                MR_Word LeftOverArgVarsWidths_30;
                MR_Word RevToOrRvals_31;
                MR_Word ToOrRvals_32;
                MR_Word PackedRval_33;
                MR_Word STATE_VARIABLE_ActiveMap_52_52;
                MR_Word ArgRval_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_15, (MR_Integer) 0))));
                MR_Word Const_74;
                MR_Word Var_76;

                succeeded = ((((MR_tag((MR_Word) ArgRval_64)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgRval_64, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Const_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgRval_64, (MR_Integer) 1))));
                  Var_76 = ll_backend__unify_gen_util__is_zero_const_1_f_0(Const_74);
                  succeeded = (Var_76 == (MR_Integer) 1);
                }
                if (succeeded)
                  RevToOrRvals0_29 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Word ShiftedUnsignedRval_75;

                  ShiftedUnsignedRval_75 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(ArgRval_64, Shift_24, Fill_27);
                  {
                    RevToOrRvals0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RevToOrRvals0_29, 0) = ((MR_Box) (ShiftedUnsignedRval_75));
                    MR_hl_field(MR_mktag(1), RevToOrRvals0_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                ll_backend__unify_gen_construct__generate_ground_term_args_for_one_word_6_p_0(ArgVarsWidths_9, &LeftOverArgVarsWidths_30, RevToOrRvals0_29, &RevToOrRvals_31, STATE_VARIABLE_ActiveMap_44_44, &STATE_VARIABLE_ActiveMap_52_52);
                mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_31, &ToOrRvals_32);
                PackedRval_33 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_32);
                {
                  TypedRval_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (PackedRval_33));
                  MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[7])));
                }
                ll_backend__unify_gen_construct__generate_ground_term_args_4_p_0(LeftOverArgVarsWidths_30, &TypedRvals_11, STATE_VARIABLE_ActiveMap_52_52, STATE_VARIABLE_ActiveMap_4);
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
      MR_Word ArgVarWidth_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgVarsWidths_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarWidth_13, (MR_Integer) 0))));
      MR_Word ArgPosWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarWidth_13, (MR_Integer) 1))));

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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 0))))) {
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
                MR_Word Shift_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 3))));
                MR_Word Fill_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word ArgTypedRval_37;
                MR_Word ArgRval_38;
                MR_Word STATE_VARIABLE_ActiveMap_48_56;
                MR_Word STATE_VARIABLE_RevToOrRvals_49_57;
                MR_Box conv1_ArgTypedRval_37;
                MR_Word Const_64;
                MR_Word Var_66;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_RevToOrRvals_0_3;
                MR_Word next_value_of_STATE_VARIABLE_ActiveMap_0_5;

                mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_18)), &conv1_ArgTypedRval_37, STATE_VARIABLE_ActiveMap_0_5, &STATE_VARIABLE_ActiveMap_48_56);
                ArgTypedRval_37 = ((MR_Word) (conv1_ArgTypedRval_37));
                ArgRval_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_37, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) ArgRval_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgRval_38, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Const_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgRval_38, (MR_Integer) 1))));
                  Var_66 = ll_backend__unify_gen_util__is_zero_const_1_f_0(Const_64);
                  succeeded = (Var_66 == (MR_Integer) 1);
                }
                if (succeeded)
                  STATE_VARIABLE_RevToOrRvals_49_57 = STATE_VARIABLE_RevToOrRvals_0_3;
                else
                {
                  MR_Word ShiftedUnsignedRval_65;

                  ShiftedUnsignedRval_65 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(ArgRval_38, Shift_33, Fill_36);
                  {
                    STATE_VARIABLE_RevToOrRvals_49_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevToOrRvals_49_57, 0) = ((MR_Box) (ShiftedUnsignedRval_65));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevToOrRvals_49_57, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_3));
                  }
                }
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ArgVarsWidths_14;
                next_value_of_STATE_VARIABLE_RevToOrRvals_0_3 = STATE_VARIABLE_RevToOrRvals_49_57;
                next_value_of_STATE_VARIABLE_ActiveMap_0_5 = STATE_VARIABLE_ActiveMap_48_56;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                STATE_VARIABLE_RevToOrRvals_0_3 = next_value_of_STATE_VARIABLE_RevToOrRvals_0_3;
                STATE_VARIABLE_ActiveMap_0_5 = next_value_of_STATE_VARIABLE_ActiveMap_0_5;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_ActiveMap_48_48;
                MR_Box conv0__ArgTypedRval_42;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_ActiveMap_0_5;

                mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_18)), &conv0__ArgTypedRval_42, STATE_VARIABLE_ActiveMap_0_5, &STATE_VARIABLE_ActiveMap_48_48);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ArgVarsWidths_14;
                next_value_of_STATE_VARIABLE_ActiveMap_0_5 = STATE_VARIABLE_ActiveMap_48_48;
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
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_7(
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
ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__253__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__271__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__279__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__278__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_construction_unification__119__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_CI_0_124,
  MR_Word * STATE_VARIABLE_CI_125,
  MR_Word STATE_VARIABLE_CLD_0_126,
  MR_Word * STATE_VARIABLE_CLD_127)
{
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
              MR_Word ConstRval_55;
              MR_Word Var_169;

              {
                Var_169 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_1));
                MR_hl_field(MR_mktag(0), Var_169, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_169, 3) = ((MR_Box) (RHSVars_16));
                MR_hl_field(MR_mktag(0), Var_169, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_169, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
              switch (MR_tag((MR_Word) ConsTag_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ConstRval_55 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[10]));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntTag_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_26, (MR_Integer) 0))));
                    MR_Word Const_53;
                    MR_Word Var_54;

                    ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_52, &Const_53, &Var_54);
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Const_53));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float Float_56 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_26, (MR_Integer) 0)));
                    MR_Word Var_202;

                    {
                      Var_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_202, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(MR_mktag(3), Var_202, 1) = MR_box_float(Float_56);
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_202));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String String_57 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word Var_201;

                        {
                          Var_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_201, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                          MR_hl_field(MR_mktag(3), Var_201, 1) = ((MR_Box) (String_57));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_201));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Lang_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))) & (MR_Integer) 3);
                        MR_String Value_59 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Word Var_194;
                        MR_Word Var_198;

                        {
                          Var_194 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_194, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[3]));
                          MR_hl_field(MR_mktag(0), Var_194, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_2));
                          MR_hl_field(MR_mktag(0), Var_194, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), Var_194, 3) = ((MR_Box) (Lang_58));
                          MR_hl_field(MR_mktag(0), Var_194, 4) = ((MR_Box) ((MR_Integer) 0));
                        }
                        mercury__require__expect_3_p_0(Var_194, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "foreign_tag for language other than C");
                        {
                          Var_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_198, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                          MR_hl_field(MR_mktag(3), Var_198, 1) = ((MR_Box) (Value_59));
                          MR_hl_field(MR_mktag(3), Var_198, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[4])));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_198));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word LocalSectag_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Unsigned PrimSec_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_61, (MR_Integer) 1))));
                        MR_Word Var_191;

                        {
                          Var_191 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_191, 0) = ((MR_Box) (PrimSec_64));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_191));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Integer ConstNum_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word ConstStructMap_68;
                        MR_Word TypedRval_69;
                        MR_Box conv0_TypedRval_69;

                        ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_124, &ConstStructMap_68);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_68, ConstNum_66, &conv0_TypedRval_69);
                        TypedRval_69 = ((MR_Word) (conv0_TypedRval_69));
                        ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_69, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Integer ConstNum_256 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word ConstStructMap_257;
                        MR_Word TypedRval_258;
                        MR_Box conv1_TypedRval_258;

                        ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_124, &ConstStructMap_257);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_257, ConstNum_256, &conv1_TypedRval_258);
                        TypedRval_258 = ((MR_Word) (conv1_TypedRval_258));
                        ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_258, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer ConstNum_263 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word ConstStructMap_264;
                        MR_Word TypedRval_265;
                        MR_Box conv2_TypedRval_265;

                        ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_124, &ConstStructMap_264);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_264, ConstNum_263, &conv2_TypedRval_265);
                        TypedRval_265 = ((MR_Word) (conv2_TypedRval_265));
                        ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_265, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word ModuleName_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_String TypeName_72 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Integer TypeArity_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
                        MR_Word RttiTypeCtor_74;
                        MR_Word DataId_75;
                        uint16_t Var_186;
                        MR_Word Var_187;
                        MR_Word Var_189;

                        Var_186 = mercury__uint16__det_from_int_1_f_0(TypeArity_73);
                        {
                          RttiTypeCtor_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 0) = ((MR_Box) (ModuleName_71));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 1) = ((MR_Box) (TypeName_72));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 2) = ((MR_Box) (MR_Word) (Var_186));
                        }
                        {
                          Var_187 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_187, 0) = ((MR_Box) (RttiTypeCtor_74));
                          MR_hl_field(MR_mktag(0), Var_187, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                        }
                        {
                          DataId_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), DataId_75, 0) = ((MR_Box) (Var_187));
                        }
                        {
                          Var_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_189, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                          MR_hl_field(MR_mktag(3), Var_189, 1) = ((MR_Box) (DataId_75));
                          MR_hl_field(MR_mktag(3), Var_189, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_189));
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word ClassId_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_String Instance_77 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
                        MR_Word TCName_78;
                        MR_Word Var_182;
                        MR_Word Var_183;
                        MR_Word Var_184;
                        MR_Word ModuleName_204 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word DataId_205;

                        TCName_78 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_76);
                        {
                          Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (ModuleName_204));
                          MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Instance_77));
                        }
                        {
                          Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (TCName_78));
                          MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (Var_183));
                        }
                        {
                          DataId_205 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), DataId_205, 0) = ((MR_Box) (Var_182));
                        }
                        {
                          Var_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_184, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                          MR_hl_field(MR_mktag(3), Var_184, 1) = ((MR_Box) (DataId_205));
                          MR_hl_field(MR_mktag(3), Var_184, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_184));
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word PredId_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Integer ProcId_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Word RttiProcLabel_81;
                        MR_Word Origin_82;
                        MR_Word UserOrUCI_85;
                        MR_Word ProcKind_86;
                        MR_Word Var_179;
                        MR_Word Var_180;
                        MR_Word DataId_206;

                        RttiProcLabel_81 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_25, PredId_79, ProcId_80);
                        Origin_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_81, (MR_Integer) 11))));
                        succeeded = ((MR_tag((MR_Word) Origin_82)) == (MR_Integer) 1);
                        if (succeeded)
                          UserOrUCI_85 = (MR_Integer) 1;
                        else
                          UserOrUCI_85 = (MR_Integer) 0;
                        {
                          ProcKind_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ProcKind_86, 0) = (MR_Box) ((MR_Unsigned) (UserOrUCI_85));
                        }
                        {
                          Var_179 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_179, 0) = ((MR_Box) (RttiProcLabel_81));
                          MR_hl_field(MR_mktag(0), Var_179, 1) = ((MR_Box) (ProcKind_86));
                        }
                        {
                          DataId_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), DataId_206, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), DataId_206, 1) = ((MR_Box) (Var_179));
                        }
                        {
                          Var_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_180, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                          MR_hl_field(MR_mktag(3), Var_180, 1) = ((MR_Box) (DataId_206));
                          MR_hl_field(MR_mktag(3), Var_180, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_180));
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word ProcLabel_87;
                        MR_Word Var_177;
                        MR_Word DataId_207;
                        MR_Word PredId_208 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Integer ProcId_209 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

                        ProcLabel_87 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_25, PredId_208, ProcId_209);
                        {
                          DataId_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), DataId_207, 0) = ((MR_Box) (ProcLabel_87));
                          MR_hl_field(MR_mktag(1), DataId_207, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_177, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                          MR_hl_field(MR_mktag(3), Var_177, 1) = ((MR_Box) (DataId_207));
                          MR_hl_field(MR_mktag(3), Var_177, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_177));
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        MR_Word PredProcId_88;
                        MR_Word Var_174;
                        MR_Word DataId_210;
                        MR_Word PredId_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Integer ProcId_212 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

                        {
                          PredProcId_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), PredProcId_88, 0) = ((MR_Box) (PredId_211));
                          MR_hl_field(MR_mktag(0), PredProcId_88, 1) = ((MR_Box) (ProcId_212));
                        }
                        {
                          DataId_210 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), DataId_210, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), DataId_210, 1) = NULL;
                          MR_hl_field(MR_mktag(3), DataId_210, 2) = ((MR_Box) (PredProcId_88));
                        }
                        {
                          Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_174, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                          MR_hl_field(MR_mktag(3), Var_174, 1) = ((MR_Box) (DataId_210));
                          MR_hl_field(MR_mktag(3), Var_174, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_174));
                        }
                      }
                      break;
                  }
                  break;
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_55, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RHSVar_119;
              MR_Word ArgMode_120;
              MR_Word RHSType_121;
              MR_Word Var_143;
              MR_Box conv6_RHSVar_119;
              MR_Box conv5_ArgMode_120;

              {
                Var_143 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_143, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_7));
                MR_hl_field(MR_mktag(0), Var_143, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_143, 3) = ((MR_Box) (TakeAddr_19));
                MR_hl_field(MR_mktag(0), Var_143, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_143, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "notag: take_addr");
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
      case (MR_Integer) 2:
        {
          MR_Word ConstRval_55;
          MR_Word Var_169;

          {
            Var_169 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_1));
            MR_hl_field(MR_mktag(0), Var_169, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_169, 3) = ((MR_Box) (RHSVars_16));
            MR_hl_field(MR_mktag(0), Var_169, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_169, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
          switch (MR_tag((MR_Word) ConsTag_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ConstRval_55 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[10]));
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntTag_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_26, (MR_Integer) 0))));
                MR_Word Const_53;
                MR_Word Var_54;

                ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_52, &Const_53, &Var_54);
                {
                  ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Const_53));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Float Float_56 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_26, (MR_Integer) 0)));
                MR_Word Var_202;

                {
                  Var_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_202, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(MR_mktag(3), Var_202, 1) = MR_box_float(Float_56);
                }
                {
                  ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_202));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String String_57 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Word Var_201;

                    {
                      Var_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_201, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                      MR_hl_field(MR_mktag(3), Var_201, 1) = ((MR_Box) (String_57));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_201));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Lang_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))) & (MR_Integer) 3);
                    MR_String Value_59 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                    MR_Word Var_194;
                    MR_Word Var_198;

                    {
                      Var_194 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_194, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[3]));
                      MR_hl_field(MR_mktag(0), Var_194, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_194, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_194, 3) = ((MR_Box) (Lang_58));
                      MR_hl_field(MR_mktag(0), Var_194, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_194, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "foreign_tag for language other than C");
                    {
                      Var_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_198, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(MR_mktag(3), Var_198, 1) = ((MR_Box) (Value_59));
                      MR_hl_field(MR_mktag(3), Var_198, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[4])));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_198));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word LocalSectag_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                    MR_Unsigned PrimSec_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_61, (MR_Integer) 1))));
                    MR_Word Var_191;

                    {
                      Var_191 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_191, 0) = ((MR_Box) (PrimSec_64));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_191));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Integer ConstNum_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Word ConstStructMap_68;
                    MR_Word TypedRval_69;
                    MR_Box conv0_TypedRval_69;

                    ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_124, &ConstStructMap_68);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_68, ConstNum_66, &conv0_TypedRval_69);
                    TypedRval_69 = ((MR_Word) (conv0_TypedRval_69));
                    ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_69, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Integer ConstNum_256 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Word ConstStructMap_257;
                    MR_Word TypedRval_258;
                    MR_Box conv1_TypedRval_258;

                    ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_124, &ConstStructMap_257);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_257, ConstNum_256, &conv1_TypedRval_258);
                    TypedRval_258 = ((MR_Word) (conv1_TypedRval_258));
                    ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_258, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Integer ConstNum_263 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Word ConstStructMap_264;
                    MR_Word TypedRval_265;
                    MR_Box conv2_TypedRval_265;

                    ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_124, &ConstStructMap_264);
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_264, ConstNum_263, &conv2_TypedRval_265);
                    TypedRval_265 = ((MR_Word) (conv2_TypedRval_265));
                    ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_265, (MR_Integer) 0))));
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word ModuleName_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_String TypeName_72 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                    MR_Integer TypeArity_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
                    MR_Word RttiTypeCtor_74;
                    MR_Word DataId_75;
                    uint16_t Var_186;
                    MR_Word Var_187;
                    MR_Word Var_189;

                    Var_186 = mercury__uint16__det_from_int_1_f_0(TypeArity_73);
                    {
                      RttiTypeCtor_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 0) = ((MR_Box) (ModuleName_71));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 1) = ((MR_Box) (TypeName_72));
                      MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 2) = ((MR_Box) (MR_Word) (Var_186));
                    }
                    {
                      Var_187 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_187, 0) = ((MR_Box) (RttiTypeCtor_74));
                      MR_hl_field(MR_mktag(0), Var_187, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                    }
                    {
                      DataId_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), DataId_75, 0) = ((MR_Box) (Var_187));
                    }
                    {
                      Var_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_189, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Var_189, 1) = ((MR_Box) (DataId_75));
                      MR_hl_field(MR_mktag(3), Var_189, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_189));
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word ClassId_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                    MR_String Instance_77 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
                    MR_Word TCName_78;
                    MR_Word Var_182;
                    MR_Word Var_183;
                    MR_Word Var_184;
                    MR_Word ModuleName_204 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Word DataId_205;

                    TCName_78 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_76);
                    {
                      Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (ModuleName_204));
                      MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Instance_77));
                    }
                    {
                      Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (TCName_78));
                      MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (Var_183));
                    }
                    {
                      DataId_205 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), DataId_205, 0) = ((MR_Box) (Var_182));
                    }
                    {
                      Var_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_184, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Var_184, 1) = ((MR_Box) (DataId_205));
                      MR_hl_field(MR_mktag(3), Var_184, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_184));
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word PredId_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Integer ProcId_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                    MR_Word RttiProcLabel_81;
                    MR_Word Origin_82;
                    MR_Word UserOrUCI_85;
                    MR_Word ProcKind_86;
                    MR_Word Var_179;
                    MR_Word Var_180;
                    MR_Word DataId_206;

                    RttiProcLabel_81 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_25, PredId_79, ProcId_80);
                    Origin_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_81, (MR_Integer) 11))));
                    succeeded = ((MR_tag((MR_Word) Origin_82)) == (MR_Integer) 1);
                    if (succeeded)
                      UserOrUCI_85 = (MR_Integer) 1;
                    else
                      UserOrUCI_85 = (MR_Integer) 0;
                    {
                      ProcKind_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ProcKind_86, 0) = (MR_Box) ((MR_Unsigned) (UserOrUCI_85));
                    }
                    {
                      Var_179 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_179, 0) = ((MR_Box) (RttiProcLabel_81));
                      MR_hl_field(MR_mktag(0), Var_179, 1) = ((MR_Box) (ProcKind_86));
                    }
                    {
                      DataId_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), DataId_206, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), DataId_206, 1) = ((MR_Box) (Var_179));
                    }
                    {
                      Var_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_180, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Var_180, 1) = ((MR_Box) (DataId_206));
                      MR_hl_field(MR_mktag(3), Var_180, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_180));
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word ProcLabel_87;
                    MR_Word Var_177;
                    MR_Word DataId_207;
                    MR_Word PredId_208 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Integer ProcId_209 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

                    ProcLabel_87 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_25, PredId_208, ProcId_209);
                    {
                      DataId_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), DataId_207, 0) = ((MR_Box) (ProcLabel_87));
                      MR_hl_field(MR_mktag(1), DataId_207, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_177, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Var_177, 1) = ((MR_Box) (DataId_207));
                      MR_hl_field(MR_mktag(3), Var_177, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_177));
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word PredProcId_88;
                    MR_Word Var_174;
                    MR_Word DataId_210;
                    MR_Word PredId_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                    MR_Integer ProcId_212 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

                    {
                      PredProcId_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), PredProcId_88, 0) = ((MR_Box) (PredId_211));
                      MR_hl_field(MR_mktag(0), PredProcId_88, 1) = ((MR_Box) (ProcId_212));
                    }
                    {
                      DataId_210 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), DataId_210, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), DataId_210, 1) = NULL;
                      MR_hl_field(MR_mktag(3), DataId_210, 2) = ((MR_Box) (PredProcId_88));
                    }
                    {
                      Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_174, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                      MR_hl_field(MR_mktag(3), Var_174, 1) = ((MR_Box) (DataId_210));
                      MR_hl_field(MR_mktag(3), Var_174, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_174));
                    }
                  }
                  break;
              }
              break;
          }
          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_55, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
          *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 0))))) {
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
            {
              MR_Word ConstRval_55;
              MR_Word Var_169;

              {
                Var_169 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_1));
                MR_hl_field(MR_mktag(0), Var_169, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_169, 3) = ((MR_Box) (RHSVars_16));
                MR_hl_field(MR_mktag(0), Var_169, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_169, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "constant has arguments");
              switch (MR_tag((MR_Word) ConsTag_26)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ConstRval_55 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[10]));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntTag_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsTag_26, (MR_Integer) 0))));
                    MR_Word Const_53;
                    MR_Word Var_54;

                    ll_backend__unify_gen_util__int_tag_to_const_and_int_type_3_p_0(IntTag_52, &Const_53, &Var_54);
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Const_53));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Float Float_56 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_26, (MR_Integer) 0)));
                    MR_Word Var_202;

                    {
                      Var_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_202, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                      MR_hl_field(MR_mktag(3), Var_202, 1) = MR_box_float(Float_56);
                    }
                    {
                      ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_202));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String String_57 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word Var_201;

                        {
                          Var_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_201, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                          MR_hl_field(MR_mktag(3), Var_201, 1) = ((MR_Box) (String_57));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_201));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Lang_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))) & (MR_Integer) 3);
                        MR_String Value_59 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Word Var_194;
                        MR_Word Var_198;

                        {
                          Var_194 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_194, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[3]));
                          MR_hl_field(MR_mktag(0), Var_194, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_2));
                          MR_hl_field(MR_mktag(0), Var_194, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), Var_194, 3) = ((MR_Box) (Lang_58));
                          MR_hl_field(MR_mktag(0), Var_194, 4) = ((MR_Box) ((MR_Integer) 0));
                        }
                        mercury__require__expect_3_p_0(Var_194, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "foreign_tag for language other than C");
                        {
                          Var_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_198, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                          MR_hl_field(MR_mktag(3), Var_198, 1) = ((MR_Box) (Value_59));
                          MR_hl_field(MR_mktag(3), Var_198, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_construct_scalar_common_3[4])));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_198));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word LocalSectag_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Unsigned PrimSec_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_61, (MR_Integer) 1))));
                        MR_Word Var_191;

                        {
                          Var_191 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_191, 0) = ((MR_Box) (PrimSec_64));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_191));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Integer ConstNum_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word ConstStructMap_68;
                        MR_Word TypedRval_69;
                        MR_Box conv0_TypedRval_69;

                        ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_124, &ConstStructMap_68);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_68, ConstNum_66, &conv0_TypedRval_69);
                        TypedRval_69 = ((MR_Word) (conv0_TypedRval_69));
                        ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_69, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Integer ConstNum_256 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word ConstStructMap_257;
                        MR_Word TypedRval_258;
                        MR_Box conv1_TypedRval_258;

                        ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_124, &ConstStructMap_257);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_257, ConstNum_256, &conv1_TypedRval_258);
                        TypedRval_258 = ((MR_Word) (conv1_TypedRval_258));
                        ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_258, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer ConstNum_263 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word ConstStructMap_264;
                        MR_Word TypedRval_265;
                        MR_Box conv2_TypedRval_265;

                        ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_124, &ConstStructMap_264);
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_264, ConstNum_263, &conv2_TypedRval_265);
                        TypedRval_265 = ((MR_Word) (conv2_TypedRval_265));
                        ConstRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_265, (MR_Integer) 0))));
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word ModuleName_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_String TypeName_72 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Integer TypeArity_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
                        MR_Word RttiTypeCtor_74;
                        MR_Word DataId_75;
                        uint16_t Var_186;
                        MR_Word Var_187;
                        MR_Word Var_189;

                        Var_186 = mercury__uint16__det_from_int_1_f_0(TypeArity_73);
                        {
                          RttiTypeCtor_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 0) = ((MR_Box) (ModuleName_71));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 1) = ((MR_Box) (TypeName_72));
                          MR_hl_field(MR_mktag(0), RttiTypeCtor_74, 2) = ((MR_Box) (MR_Word) (Var_186));
                        }
                        {
                          Var_187 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_187, 0) = ((MR_Box) (RttiTypeCtor_74));
                          MR_hl_field(MR_mktag(0), Var_187, 1) = ((MR_Box) ((MR_Unsigned) 44U));
                        }
                        {
                          DataId_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), DataId_75, 0) = ((MR_Box) (Var_187));
                        }
                        {
                          Var_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_189, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                          MR_hl_field(MR_mktag(3), Var_189, 1) = ((MR_Box) (DataId_75));
                          MR_hl_field(MR_mktag(3), Var_189, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_189));
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word ClassId_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_String Instance_77 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
                        MR_Word TCName_78;
                        MR_Word Var_182;
                        MR_Word Var_183;
                        MR_Word Var_184;
                        MR_Word ModuleName_204 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Word DataId_205;

                        TCName_78 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_76);
                        {
                          Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (ModuleName_204));
                          MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Instance_77));
                        }
                        {
                          Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (TCName_78));
                          MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (Var_183));
                        }
                        {
                          DataId_205 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), DataId_205, 0) = ((MR_Box) (Var_182));
                        }
                        {
                          Var_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_184, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                          MR_hl_field(MR_mktag(3), Var_184, 1) = ((MR_Box) (DataId_205));
                          MR_hl_field(MR_mktag(3), Var_184, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_184));
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word PredId_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Integer ProcId_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
                        MR_Word RttiProcLabel_81;
                        MR_Word Origin_82;
                        MR_Word UserOrUCI_85;
                        MR_Word ProcKind_86;
                        MR_Word Var_179;
                        MR_Word Var_180;
                        MR_Word DataId_206;

                        RttiProcLabel_81 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_25, PredId_79, ProcId_80);
                        Origin_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_81, (MR_Integer) 11))));
                        succeeded = ((MR_tag((MR_Word) Origin_82)) == (MR_Integer) 1);
                        if (succeeded)
                          UserOrUCI_85 = (MR_Integer) 1;
                        else
                          UserOrUCI_85 = (MR_Integer) 0;
                        {
                          ProcKind_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ProcKind_86, 0) = (MR_Box) ((MR_Unsigned) (UserOrUCI_85));
                        }
                        {
                          Var_179 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_179, 0) = ((MR_Box) (RttiProcLabel_81));
                          MR_hl_field(MR_mktag(0), Var_179, 1) = ((MR_Box) (ProcKind_86));
                        }
                        {
                          DataId_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), DataId_206, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), DataId_206, 1) = ((MR_Box) (Var_179));
                        }
                        {
                          Var_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_180, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                          MR_hl_field(MR_mktag(3), Var_180, 1) = ((MR_Box) (DataId_206));
                          MR_hl_field(MR_mktag(3), Var_180, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_180));
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word ProcLabel_87;
                        MR_Word Var_177;
                        MR_Word DataId_207;
                        MR_Word PredId_208 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Integer ProcId_209 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

                        ProcLabel_87 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_25, PredId_208, ProcId_209);
                        {
                          DataId_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), DataId_207, 0) = ((MR_Box) (ProcLabel_87));
                          MR_hl_field(MR_mktag(1), DataId_207, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_177, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                          MR_hl_field(MR_mktag(3), Var_177, 1) = ((MR_Box) (DataId_207));
                          MR_hl_field(MR_mktag(3), Var_177, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_177));
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        MR_Word PredProcId_88;
                        MR_Word Var_174;
                        MR_Word DataId_210;
                        MR_Word PredId_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
                        MR_Integer ProcId_212 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

                        {
                          PredProcId_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), PredProcId_88, 0) = ((MR_Box) (PredId_211));
                          MR_hl_field(MR_mktag(0), PredProcId_88, 1) = ((MR_Box) (ProcId_212));
                        }
                        {
                          DataId_210 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), DataId_210, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), DataId_210, 1) = NULL;
                          MR_hl_field(MR_mktag(3), DataId_210, 2) = ((MR_Box) (PredProcId_88));
                        }
                        {
                          Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_174, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                          MR_hl_field(MR_mktag(3), Var_174, 1) = ((MR_Box) (DataId_210));
                          MR_hl_field(MR_mktag(3), Var_174, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          ConstRval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ConstRval_55, 1) = ((MR_Box) (Var_174));
                        }
                      }
                      break;
                  }
                  break;
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ConstRval_55, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word RemoteArgsTagInfo_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Word MayUseAtomic0_91;
              MR_Word Ptag_92;
              MR_Word TagwordCode_93;
              MR_Word CellArgs_94;
              MR_Word MayUseAtomic_95;
              MR_Word NonTagwordCode_96;
              MR_Word HowToConstruct_114;
              MR_Word Context_115;
              MR_Word ConstructCode_116;
              MR_Word STATE_VARIABLE_CLD_165_165;
              MR_Word Var_168;

              ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_0_124, &MayUseAtomic0_91);
              switch (MR_tag((MR_Word) RemoteArgsTagInfo_89)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_164;

                    Ptag_92 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                    TagwordCode_93 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    Var_164 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(RHSVarsWidths_27, ArgModes_17, (MR_Integer) 1, TakeAddr_19, &CellArgs_94, MayUseAtomic0_91, &MayUseAtomic_95, Var_164, &NonTagwordCode_96, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, &STATE_VARIABLE_CLD_165_165);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_269;

                    Ptag_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_89, (MR_Integer) 0))));
                    TagwordCode_93 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    Var_269 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(RHSVarsWidths_27, ArgModes_17, (MR_Integer) 1, TakeAddr_19, &CellArgs_94, MayUseAtomic0_91, &MayUseAtomic_95, Var_269, &NonTagwordCode_96, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, &STATE_VARIABLE_CLD_165_165);
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
                    MR_Word STATE_VARIABLE_CLD_158_158;
                    MR_Word Var_161;

                    Ptag_92 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_89, (MR_Integer) 0))));
                    RemoteSectag_97 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_89, (MR_Integer) 1))));
                    SectagUint_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_97, (MR_Integer) 0))));
                    SectagSize_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_97, (MR_Integer) 1))));
                    if ((SectagSize_99 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Var_159;

                      FirstArgNum_100 = (MR_Integer) 1;
                      {
                        Var_159 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_159, 0) = ((MR_Box) (SectagUint_98));
                      }
                      {
                        TagwordRval_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), TagwordRval_101, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), TagwordRval_101, 1) = ((MR_Box) (Var_159));
                      }
                      NonTagwordRHSVarsWidths_102 = RHSVarsWidths_27;
                      NonTagwordArgModes_103 = ArgModes_17;
                      TagwordCode_93 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                      STATE_VARIABLE_CLD_158_158 = STATE_VARIABLE_CLD_0_126;
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
                        MR_Word Var_155;
                        MR_Word Var_156;

                        {
                          Var_156 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_156, 0) = ((MR_Box) (SectagUint_98));
                        }
                        {
                          Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) (Var_156));
                        }
                        {
                          RevToOrRvals0_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), RevToOrRvals0_107, 0) = ((MR_Box) (Var_155));
                          MR_hl_field(MR_mktag(1), RevToOrRvals0_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      ll_backend__unify_gen_construct__generate_and_pack_tagword_5_p_0(TagwordRHSVarsWidths_105, TagwordArgModes_106, RevToOrRvals0_107, &RevToOrRvals_108, STATE_VARIABLE_CI_0_124);
                      mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_108, &ToOrRvals_109);
                      TagwordRval0_110 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_109);
                      ll_backend__code_loc_dep__materialize_vars_in_rval_6_p_0(TagwordRval0_110, &TagwordRval_101, &TagwordCode_93, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, &STATE_VARIABLE_CLD_158_158);
                    }
                    {
                      TagwordArg_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), TagwordArg_111, 0) = ((MR_Box) (TagwordRval_101));
                      MR_hl_field(MR_mktag(1), TagwordArg_111, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    }
                    Var_161 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(NonTagwordRHSVarsWidths_102, NonTagwordArgModes_103, FirstArgNum_100, TakeAddr_19, &CellArgs0_112, MayUseAtomic0_91, &MayUseAtomic_95, Var_161, &NonTagwordCode_96, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_158_158, &STATE_VARIABLE_CLD_165_165);
                    {
                      CellArgs_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), CellArgs_94, 0) = ((MR_Box) (TagwordArg_111));
                      MR_hl_field(MR_mktag(1), CellArgs_94, 1) = ((MR_Box) (CellArgs0_112));
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
              ll_backend__unify_gen_construct__construct_cell_12_p_0(LHSVar_14, Ptag_92, CellArgs_94, HowToConstruct_114, MaybeSize_20, Context_115, MayUseAtomic_95, &ConstructCode_116, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CI_125, STATE_VARIABLE_CLD_165_165, STATE_VARIABLE_CLD_127);
              Var_168 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), NonTagwordCode_96, ConstructCode_116);
              *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagwordCode_93, Var_168);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word LocalArgsTagInfo_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Word PackedRval_118;
              MR_Word Var_148;
              MR_Word RevToOrRvals0_213;
              MR_Word RevToOrRvals_214;
              MR_Word ToOrRvals_215;

              {
                Var_148 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_148, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_148, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_6));
                MR_hl_field(MR_mktag(0), Var_148, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_148, 3) = ((MR_Box) (TakeAddr_19));
                MR_hl_field(MR_mktag(0), Var_148, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_148, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "local_args_tag, TakeAddr != []");
              ll_backend__unify_gen_construct__maybe_accumulate_local_sectag_2_p_0(LocalArgsTagInfo_117, &RevToOrRvals0_213);
              ll_backend__unify_gen_construct__generate_and_pack_tagword_5_p_0(RHSVarsWidths_27, ArgModes_17, RevToOrRvals0_213, &RevToOrRvals_214, STATE_VARIABLE_CI_0_124);
              mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_214, &ToOrRvals_215);
              PackedRval_118 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_215);
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(LHSVar_14, PackedRval_118, Code_22, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
              *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Type_122;
              MR_Word Var_138;
              MR_Word Ptag_216 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Word RHSVar_217;
              MR_Word ArgMode_218;
              MR_Box conv4_RHSVar_217;
              MR_Box conv3_ArgMode_218;

              {
                Var_138 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_5));
                MR_hl_field(MR_mktag(0), Var_138, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_138, 3) = ((MR_Box) (TakeAddr_19));
                MR_hl_field(MR_mktag(0), Var_138, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_138, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "direct_arg_tag: take_addr");
              hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ll_backend__unify_gen_construct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_16, ArgModes_17, &conv4_RHSVar_217, &conv3_ArgMode_218);
              RHSVar_217 = ((MR_Word) (conv4_RHSVar_217));
              ArgMode_218 = ((MR_Word) (conv3_ArgMode_218));
              Type_122 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_124, RHSVar_217);
              ll_backend__unify_gen_construct__generate_direct_arg_construct_9_p_0(LHSVar_14, RHSVar_217, Ptag_216, ArgMode_218, Type_122, Code_22, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
              *STATE_VARIABLE_CI_125 = STATE_VARIABLE_CI_0_124;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_128;
              MR_Word Var_132;
              MR_Word PredId_219 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Integer ProcId_220 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

              {
                Var_128 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_3));
                MR_hl_field(MR_mktag(0), Var_128, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_128, 3) = ((MR_Box) (TakeAddr_19));
                MR_hl_field(MR_mktag(0), Var_128, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_128, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "closure_tag has take_addr");
              {
                Var_132 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_construction_unification_13_p_0_4));
                MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_132, 3) = ((MR_Box) (MaybeSize_20));
                MR_hl_field(MR_mktag(0), Var_132, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_132, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_construction_unification\'/13", (MR_String) "closure_tag has size");
              ll_backend__closure_gen__construct_closure_11_p_0(PredId_219, ProcId_220, LHSVar_14, RHSVars_16, GoalInfo_21, Code_22, STATE_VARIABLE_CI_0_124, STATE_VARIABLE_CI_125, STATE_VARIABLE_CLD_0_126, STATE_VARIABLE_CLD_127);
            }
            break;
        }
        break;
    }
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
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.take_tagword_args_widths_modes\'/8", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgModes_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgPosWidth_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_73, (MR_Integer) 1))));

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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_44, (MR_Integer) 0))))) {
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

                ll_backend__unify_gen_construct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_116_97_103_119_111_114_100_95_97_114_103_115_95_119_105_100_116_104_115_95_109_111_100_101_115_95_95_91_49_93_95_48_8_p_0(Var_72, ArgModes_37, &TailTagwordArgsWidths_53, &TailTagwordArgModes_54, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_CurArgNum_68_68, STATE_VARIABLE_CurArgNum_8);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_73));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTagwordArgsWidths_53));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgMode_36));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTagwordArgModes_54));
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
  {
    MR_bool succeeded;
    MR_Unsigned PrimSec_5;

    if ((LocalArgsTagInfo_3 == (MR_Word) ((MR_Unsigned) 0U)))
      PrimSec_5 = (MR_Unsigned) 0U;
    else
    {
      MR_Word LocalSectag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_3, (MR_Integer) 1))));

      PrimSec_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_7, (MR_Integer) 1))));
    }
    succeeded = (PrimSec_5 == (MR_Unsigned) 0U);
    if (succeeded)
      *RevToOrRvals0_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_10;
      MR_Word Var_11;

      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_11, 0) = ((MR_Box) (PrimSec_5));
      }
      {
        Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_10, 1) = ((MR_Box) (Var_11));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *RevToOrRvals0_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
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
          CellToReuse_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.needs_update_args_to_words\'/3", (MR_String) "mismatched lists");
          return;
        }
    else
    {
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

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
        MR_Word ArgNU_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgNUs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word ArgPosWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 1))));

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
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgNU_15));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailWordNUs_25));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 0))))) {
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
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WordNU_32));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailWordNUs_47));
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
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.does_any_arg_in_word_need_update\'/6", (MR_String) "mismatched lists");
          return;
        }
      else
      {
        MR_Word ArgNU_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgNUs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word ArgPosWidth_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1))));

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
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_36, (MR_Integer) 0))))) {
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
                  next_value_of_HeadVar__1_1 = Var_60;
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
              Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (ArgVar_11));
            }
            {
              Var_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_26, 0) = ((MR_Box) (Ptag_12));
              MR_hl_field(MR_mktag(2), Var_26, 1) = ((MR_Box) (Var_28));
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
          MR_Word Var_22;

          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
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
    MR_Word TypeCtor_45;
    MR_Word TypeSym_46;
    MR_Integer TypeArity_47;
    MR_String TypeSymStr_48;
    MR_String TypeArityStr_49;
    MR_String Var_50;
    MR_Word RevFieldAddrs_55;
    MR_Box conv3_Var_54;
    MR_Box conv2_RevFieldAddrs_55;

    LHSType_23 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_34, LHSVar_13);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(LHSType_23, &TypeCtor_45);
    TypeSym_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_45, (MR_Integer) 0))));
    TypeArity_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_45, (MR_Integer) 1))));
    TypeSymStr_48 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeSym_46);
    mercury__string__int_to_string_2_p_0(TypeArity_47, &TypeArityStr_49);
    Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "/", TypeArityStr_49);
    VarTypeMsg_24 = mercury__string__f_43_43_2_f_0(TypeSymStr_48, Var_50);
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

      ll_backend__unify_gen_construct__generate_field_take_address_assigns_6_p_0(FieldAddrs_30, LHSVar_13, Ptag_14, &FieldCode_33, STATE_VARIABLE_CLD_40_40, STATE_VARIABLE_CLD_37);
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
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (FieldNum_19));
    }
    {
      FieldNumRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FieldNumRval_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), FieldNumRval_21, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (CellVar_2));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (CellPtag_3));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(2), Var_26, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(2), Var_26, 2) = ((MR_Box) (FieldNumRval_21));
    }
    {
      Addr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Addr_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "length misnatch");
          return;
        }
    else
    {
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "length misnatch");
          return;
        }
      else
      {
        MR_Word ArgMode_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgModes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word RHSVar_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 0))));
        MR_Word ArgPosWidth_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_RevToOrRvals_61_61;
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
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_33, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_tagword\'/5", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Shift_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_33, (MR_Integer) 3))));
                  MR_Word Fill_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_33, (MR_Integer) 6))) & (MR_Integer) 7);
                  MR_Word _RHSType_51;
                  MR_Word RHSRval_53;
                  MR_Word ShiftedRHSRval_54;
                  MR_Word ModuleInfo_72;
                  MR_Word RHSInitInst_75;
                  MR_Word RHSFinalInst_76;
                  MR_Word VarTypes_77;
                  MR_Word RHSTopFunctorMode_78;

                  ll_backend__code_info__get_module_info_2_p_0(CI_5, &ModuleInfo_72);
                  RHSInitInst_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_28, (MR_Integer) 2))));
                  RHSFinalInst_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_28, (MR_Integer) 3))));
                  ll_backend__code_info__get_vartypes_2_p_0(CI_5, &VarTypes_77);
                  hlds__vartypes__lookup_var_type_3_p_0(VarTypes_77, RHSVar_32, &_RHSType_51);
                  check_hlds__mode_util__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_72, RHSInitInst_75, RHSFinalInst_76, _RHSType_51, &RHSTopFunctorMode_78);
                  switch (RHSTopFunctorMode_78) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IsDummy_79;

                        IsDummy_79 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(CI_5, RHSVar_32);
                        switch (IsDummy_79) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            RHSRval_53 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]));
                            break;
                          case (MR_Integer) 1:
                            {
                              RHSRval_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), RHSRval_53, 0) = ((MR_Box) (RHSVar_32));
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      RHSRval_53 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]));
                      break;
                  }
                  ShiftedRHSRval_54 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(RHSRval_53, Shift_47, Fill_50);
                  {
                    STATE_VARIABLE_RevToOrRvals_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevToOrRvals_61_61, 0) = ((MR_Box) (ShiftedRHSRval_54));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevToOrRvals_61_61, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_3));
                  }
                }
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_RevToOrRvals_61_61 = STATE_VARIABLE_RevToOrRvals_0_3;
                break;
            }
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_65;
        next_value_of_HeadVar__2_2 = ArgModes_29;
        next_value_of_STATE_VARIABLE_RevToOrRvals_0_3 = STATE_VARIABLE_RevToOrRvals_61_61;
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
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__IntroducedFrom__pred__generate_and_pack_construct_args__297__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
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
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_26;

        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_1));
          MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_192 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word ArgMode_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgModes_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word RHSVar_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_193, (MR_Integer) 0))));
        MR_Word ArgPosWidth_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_193, (MR_Integer) 1))));
        MR_Word HeadCellArgs_86;
        MR_Word LeftOverRHSVarsWidths_101;
        MR_Word LeftOverArgModes_102;
        MR_Integer LeftOverArgNum_103;
        MR_Word TailCellArgs_125;
        MR_Word STATE_VARIABLE_MayUseAtomic_166_166;
        MR_Word STATE_VARIABLE_Code_167_167;
        MR_Word STATE_VARIABLE_CLD_168_168;
        MR_Word STATE_VARIABLE_TakeAddr_179_179;

        switch (MR_tag((MR_Word) ArgPosWidth_76)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_137;

              {
                Var_137 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_2));
                MR_hl_field(MR_mktag(0), Var_137, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_137, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_4));
                MR_hl_field(MR_mktag(0), Var_137, 4) = ((MR_Box) (CurArgNum_3));
              }
              mercury__require__expect_3_p_0(Var_137, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "taking address of dummy");
              HeadCellArgs_86 = (MR_Word) ((MR_Unsigned) 0U);
              LeftOverRHSVarsWidths_101 = Var_192;
              LeftOverArgModes_102 = ArgModes_67;
              LeftOverArgNum_103 = (MR_Integer) ((MR_Unsigned) CurArgNum_3 + (MR_Unsigned) 1);
              STATE_VARIABLE_TakeAddr_179_179 = STATE_VARIABLE_TakeAddr_0_4;
              STATE_VARIABLE_MayUseAtomic_166_166 = STATE_VARIABLE_MayUseAtomic_0_6;
              STATE_VARIABLE_Code_167_167 = STATE_VARIABLE_Code_0_8;
              STATE_VARIABLE_CLD_168_168 = STATE_VARIABLE_CLD_0_11;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_TakeAddr_154_154;
              MR_Integer Var_191;

              succeeded = (STATE_VARIABLE_TakeAddr_0_4 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_191 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_4, (MR_Integer) 0))));
                STATE_VARIABLE_TakeAddr_154_154 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_4, (MR_Integer) 1))));
                succeeded = (CurArgNum_3 == Var_191);
              }
              if (succeeded)
              {
                MR_Word LCMCNull_82;

                STATE_VARIABLE_TakeAddr_179_179 = STATE_VARIABLE_TakeAddr_154_154;
                ll_backend__code_info__get_lcmc_null_2_p_0(CI_10, &LCMCNull_82);
                if (((MR_tag((MR_Word) ArgPosWidth_76)) == (MR_Integer) 2))
                {
                  MR_Word MaybeNulls_90;
                  MR_Word Var_159;

                  switch (LCMCNull_82) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      MaybeNulls_90 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                    case (MR_Integer) 1:
                      MaybeNulls_90 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_construct_scalar_common_3[2]));
                      break;
                  }
                  {
                    Var_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_159, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_159, 1) = ((MR_Box) (RHSVar_75));
                    MR_hl_field(MR_mktag(3), Var_159, 2) = ((MR_Box) (MaybeNulls_90));
                  }
                  {
                    HeadCellArgs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadCellArgs_86, 0) = ((MR_Box) (Var_159));
                    MR_hl_field(MR_mktag(1), HeadCellArgs_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  MR_Word MaybeNull_85;
                  MR_Word Var_164;

                  switch (LCMCNull_82) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      MaybeNull_85 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                    case (MR_Integer) 1:
                      MaybeNull_85 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_construct_scalar_common_3[3]));
                      break;
                  }
                  {
                    Var_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_164, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_164, 1) = ((MR_Box) (RHSVar_75));
                    MR_hl_field(MR_mktag(3), Var_164, 2) = ((MR_Box) (MaybeNull_85));
                  }
                  {
                    HeadCellArgs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadCellArgs_86, 0) = ((MR_Box) (Var_164));
                    MR_hl_field(MR_mktag(1), HeadCellArgs_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                STATE_VARIABLE_MayUseAtomic_166_166 = (MR_Integer) 1;
                STATE_VARIABLE_CLD_168_168 = STATE_VARIABLE_CLD_0_11;
                STATE_VARIABLE_Code_167_167 = STATE_VARIABLE_Code_0_8;
              }
              else
              {
                MR_Word RHSType_92;
                MR_Word IsReal_93;
                MR_Word RHSRval_94;
                MR_Word ModuleInfo_95;

                ll_backend__unify_gen_construct__generate_construct_arg_rval_10_p_0(RHSVar_75, ArgMode_66, &RHSType_92, &IsReal_93, &RHSRval_94, STATE_VARIABLE_Code_0_8, &STATE_VARIABLE_Code_167_167, CI_10, STATE_VARIABLE_CLD_0_11, &STATE_VARIABLE_CLD_168_168);
                ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_95);
                check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_95, RHSType_92, STATE_VARIABLE_MayUseAtomic_0_6, &STATE_VARIABLE_MayUseAtomic_166_166);
                if (((MR_tag((MR_Word) ArgPosWidth_76)) == (MR_Integer) 2))
                  switch (IsReal_93) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadCellArgs_86 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_construct_scalar_common_1[12]));
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_170;

                        {
                          Var_170 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_170, 0) = ((MR_Box) (RHSRval_94));
                        }
                        {
                          HeadCellArgs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), HeadCellArgs_86, 0) = ((MR_Box) (Var_170));
                          MR_hl_field(MR_mktag(1), HeadCellArgs_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      break;
                  }
                else
                  switch (IsReal_93) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadCellArgs_86 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_construct_scalar_common_1[13]));
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_174;

                        {
                          Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (RHSRval_94));
                          MR_hl_field(MR_mktag(1), Var_174, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        }
                        {
                          HeadCellArgs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), HeadCellArgs_86, 0) = ((MR_Box) (Var_174));
                          MR_hl_field(MR_mktag(1), HeadCellArgs_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      break;
                  }
                STATE_VARIABLE_TakeAddr_179_179 = STATE_VARIABLE_TakeAddr_0_4;
              }
              LeftOverRHSVarsWidths_101 = Var_192;
              LeftOverArgModes_102 = ArgModes_67;
              LeftOverArgNum_103 = (MR_Integer) ((MR_Unsigned) CurArgNum_3 + (MR_Unsigned) 1);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_76, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Shift_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_76, (MR_Integer) 3))));
                  MR_Word Fill_109 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_76, (MR_Integer) 6))) & (MR_Integer) 7);
                  MR_Word Completeness0_110;
                  MR_Word RevToOrRvals0_111;
                  MR_Integer NextArgNum_112;
                  MR_Word RevToOrRvals_113;
                  MR_Word Completeness_114;
                  MR_Word ToOrRvals_115;
                  MR_Word PackedRval_116;
                  MR_Word Var_141;
                  MR_Word STATE_VARIABLE_Code_144_144;
                  MR_Word STATE_VARIABLE_CLD_145_145;
                  MR_Word Var_152;
                  MR_Word RHSType_184;
                  MR_Word IsReal_185;
                  MR_Word RHSRval_186;
                  MR_Word ModuleInfo_187;

                  {
                    Var_141 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_141, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), Var_141, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_141, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_141, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_4));
                    MR_hl_field(MR_mktag(0), Var_141, 4) = ((MR_Box) (CurArgNum_3));
                  }
                  mercury__require__expect_3_p_0(Var_141, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_construct_args\'/12", (MR_String) "taking address of partial word");
                  ll_backend__unify_gen_construct__generate_construct_arg_rval_10_p_0(RHSVar_75, ArgMode_66, &RHSType_184, &IsReal_185, &RHSRval_186, STATE_VARIABLE_Code_0_8, &STATE_VARIABLE_Code_144_144, CI_10, STATE_VARIABLE_CLD_0_11, &STATE_VARIABLE_CLD_145_145);
                  ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_187);
                  check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_187, RHSType_184, STATE_VARIABLE_MayUseAtomic_0_6, &STATE_VARIABLE_MayUseAtomic_166_166);
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
                  ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_17_p_0(Var_192, ArgModes_67, &LeftOverRHSVarsWidths_101, &LeftOverArgModes_102, NextArgNum_112, &LeftOverArgNum_103, STATE_VARIABLE_TakeAddr_0_4, &STATE_VARIABLE_TakeAddr_179_179, RevToOrRvals0_111, &RevToOrRvals_113, Completeness0_110, &Completeness_114, STATE_VARIABLE_Code_144_144, &STATE_VARIABLE_Code_167_167, CI_10, STATE_VARIABLE_CLD_145_145, &STATE_VARIABLE_CLD_168_168);
                  mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_113, &ToOrRvals_115);
                  PackedRval_116 = ll_backend__unify_gen_util__bitwise_or_rvals_1_f_0(ToOrRvals_115);
                  {
                    Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (PackedRval_116));
                    MR_hl_field(MR_mktag(1), Var_152, 1) = (MR_Box) ((MR_Unsigned) (Completeness_114));
                  }
                  {
                    HeadCellArgs_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadCellArgs_86, 0) = ((MR_Box) (Var_152));
                    MR_hl_field(MR_mktag(1), HeadCellArgs_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
        ll_backend__unify_gen_construct__generate_and_pack_construct_args_12_p_0(LeftOverRHSVarsWidths_101, LeftOverArgModes_102, LeftOverArgNum_103, STATE_VARIABLE_TakeAddr_179_179, &TailCellArgs_125, STATE_VARIABLE_MayUseAtomic_166_166, STATE_VARIABLE_MayUseAtomic_7, STATE_VARIABLE_Code_167_167, STATE_VARIABLE_Code_9, CI_10, STATE_VARIABLE_CLD_168_168, STATE_VARIABLE_CLD_12);
        *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), HeadCellArgs_86, TailCellArgs_125);
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_17_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen_construct__not_taking_addr_of_cur_arg_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
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
      MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_one_cons_word\'/17", (MR_String) "length misnatch");
          return;
        }
      else
      {
        MR_Word ArgMode_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgModes_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word RHSVar_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_155, (MR_Integer) 0))));
        MR_Word ArgPosWidth_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_155, (MR_Integer) 1))));

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
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_99, (MR_Integer) 0))))) {
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
                  MR_Word IsReal_120;
                  MR_Word RHSRval_121;
                  MR_Integer NextArgNum_130;
                  MR_Word Var_141;
                  MR_Word STATE_VARIABLE_Code_144_144;
                  MR_Word STATE_VARIABLE_CLD_145_145;
                  MR_Word STATE_VARIABLE_RevToOrRvals_146_146;
                  MR_Word STATE_VARIABLE_Completeness_147_147;
                  MR_Word _RHSType_119;
                  MR_Word next_value_of_HeadVar__1_1;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Integer next_value_of_CurArgNum_5;
                  MR_Word next_value_of_STATE_VARIABLE_RevToOrRvals_0_9;
                  MR_Word next_value_of_STATE_VARIABLE_Completeness_0_11;
                  MR_Word next_value_of_STATE_VARIABLE_Code_0_13;
                  MR_Word next_value_of_STATE_VARIABLE_CLD_0_16;

                  {
                    Var_141 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_141, 0) = ((MR_Box) (&ll_backend__unify_gen_construct_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), Var_141, 1) = ((MR_Box) (ll_backend__unify_gen_construct__generate_and_pack_one_cons_word_17_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_141, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_141, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_7));
                    MR_hl_field(MR_mktag(0), Var_141, 4) = ((MR_Box) (CurArgNum_5));
                  }
                  mercury__require__expect_3_p_0(Var_141, (MR_String) "predicate \140ll_backend.unify_gen_construct.generate_and_pack_one_cons_word\'/17", (MR_String) "taking address of partial word");
                  ll_backend__unify_gen_construct__generate_construct_arg_rval_10_p_0(RHSVar_98, ArgMode_86, &_RHSType_119, &IsReal_120, &RHSRval_121, STATE_VARIABLE_Code_0_13, &STATE_VARIABLE_Code_144_144, CI_15, STATE_VARIABLE_CLD_0_16, &STATE_VARIABLE_CLD_145_145);
                  if (((((MR_tag((MR_Word) ArgPosWidth_99)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_99, (MR_Integer) 0)))) == (MR_Integer) 2))))
                  {
                    STATE_VARIABLE_RevToOrRvals_146_146 = STATE_VARIABLE_RevToOrRvals_0_9;
                    STATE_VARIABLE_Completeness_147_147 = STATE_VARIABLE_Completeness_0_11;
                  }
                  else
                  {
                    MR_Word Shift_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_99, (MR_Integer) 3))));
                    MR_Word Fill_127 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_99, (MR_Integer) 6))) & (MR_Integer) 7);

                    switch (IsReal_120) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Completeness_147_147 = (MR_Integer) 1;
                          STATE_VARIABLE_RevToOrRvals_146_146 = STATE_VARIABLE_RevToOrRvals_0_9;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          ll_backend__unify_gen_construct__maybe_shift_and_accumulate_or_rval_5_p_0(RHSRval_121, Shift_124, Fill_127, STATE_VARIABLE_RevToOrRvals_0_9, &STATE_VARIABLE_RevToOrRvals_146_146);
                          STATE_VARIABLE_Completeness_147_147 = STATE_VARIABLE_Completeness_0_11;
                        }
                        break;
                    }
                  }
                  NextArgNum_130 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) 1);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Var_154;
                  next_value_of_HeadVar__2_2 = ArgModes_87;
                  next_value_of_CurArgNum_5 = NextArgNum_130;
                  next_value_of_STATE_VARIABLE_RevToOrRvals_0_9 = STATE_VARIABLE_RevToOrRvals_146_146;
                  next_value_of_STATE_VARIABLE_Completeness_0_11 = STATE_VARIABLE_Completeness_147_147;
                  next_value_of_STATE_VARIABLE_Code_0_13 = STATE_VARIABLE_Code_144_144;
                  next_value_of_STATE_VARIABLE_CLD_0_16 = STATE_VARIABLE_CLD_145_145;
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
            }
            break;
        }
      }
    }
    break;
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
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word Const_10;
    MR_Word Var_14;

    if (succeeded)
    {
      Const_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevToOrRvals_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ShiftedUnsignedRval_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_12));
      }
    }
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
  {
    MR_Word ModuleInfo_34;
    MR_Word RHSInitInst_37;
    MR_Word RHSFinalInst_38;
    MR_Word VarTypes_39;
    MR_Word RHSTopFunctorMode_40;

    ll_backend__code_info__get_module_info_2_p_0(CI_17, &ModuleInfo_34);
    RHSInitInst_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_12, (MR_Integer) 2))));
    RHSFinalInst_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_12, (MR_Integer) 3))));
    ll_backend__code_info__get_vartypes_2_p_0(CI_17, &VarTypes_39);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_39, RHSVar_11, RHSType_13);
    check_hlds__mode_util__init_final_insts_to_top_functor_mode_5_p_0(ModuleInfo_34, RHSInitInst_37, RHSFinalInst_38, *RHSType_13, &RHSTopFunctorMode_40);
    switch (RHSTopFunctorMode_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IsDummy_41;

          IsDummy_41 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(CI_17, RHSVar_11);
          switch (IsDummy_41) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *IsReal_14 = (MR_Integer) 0;
                *RHSRval_15 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]));
                *STATE_VARIABLE_Code_21 = STATE_VARIABLE_Code_0_20;
                *STATE_VARIABLE_CLD_23 = STATE_VARIABLE_CLD_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHSVarCode_19;

                *IsReal_14 = (MR_Integer) 1;
                ll_backend__code_loc_dep__produce_variable_6_p_0(RHSVar_11, &RHSVarCode_19, RHSRval_15, CI_17, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
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
          *RHSRval_15 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_construct_scalar_common_1[9]));
          *STATE_VARIABLE_Code_21 = STATE_VARIABLE_Code_0_20;
          *STATE_VARIABLE_CLD_23 = STATE_VARIABLE_CLD_0_22;
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
ll_backend__unify_gen_construct____Unify____may_store_double_width_natively_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen_construct____Unify____may_store_double_width_natively_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_construct____Compare____may_store_double_width_natively_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen_construct____Compare____may_store_double_width_natively_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
