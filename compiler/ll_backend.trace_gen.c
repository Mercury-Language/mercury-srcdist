/*
** Automatically generated from `trace_gen.m'
** by the Mercury compiler,
** version rotd-2017-07-24
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


/* :- module ll_backend.trace_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__trace_gen__init
ENDINIT
*/

#include "ll_backend.trace_gen.mih"


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
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.layout_out.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
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
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0;

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0[1];

static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0[1];

static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0[1];

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0;

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1;

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2;

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3;

static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0[4];

static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0[4];

static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0[4];

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0;

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1;

static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0[2];

static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0[2];

static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_info_0_0[9];

static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_info_0_0[9];

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0[1];

static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0[1];

static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0[1];

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0;

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1[2];

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1;

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2[2];

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2;

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3[1];

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3;

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4[1];

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4;

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2[1];

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3[2];

static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0[4];

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0[5];

static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0[5];

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0[6];

static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0[6];

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0[1];

static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0[1];

static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0[1];

static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__954__1_2_p_0(
  MR_Word ll_backend__trace_gen__MaybeFromFullLval_17,
  MR_Word ll_backend__trace_gen__HeadVar__2_62);

static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__948__1_2_p_0(
  MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16,
  MR_Word ll_backend__trace_gen__HeadVar__2_57);

static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1191__1_2_p_0(
  MR_Word ll_backend__trace_gen__Lval_8,
  MR_Word ll_backend__trace_gen__HeadVar__2_20);

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0(
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
  MR_Word ll_backend__trace_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2);

static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_var_info_1_f_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1(
  MR_Box ll_backend__trace_gen__closure_arg);

static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_2(
  MR_Box ll_backend__trace_gen__closure_arg,
  MR_Box ll_backend__trace_gen__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_1(
  MR_Box ll_backend__trace_gen__closure_arg,
  MR_Box ll_backend__trace_gen__wrapper_arg_1);

static void MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0(
  MR_Word ll_backend__trace_gen__Port_14,
  MR_Word ll_backend__trace_gen__PortInfo_15,
  MR_Word ll_backend__trace_gen__MaybeTraceInfo_16,
  MR_Word ll_backend__trace_gen__Context_17,
  MR_Word ll_backend__trace_gen__HideEvent_18,
  MR_Word ll_backend__trace_gen__MaybeUserInfo_19,
  MR_Word * ll_backend__trace_gen__Label_20,
  MR_Word * ll_backend__trace_gen__TvarDataMap_21,
  MR_Word * ll_backend__trace_gen__Code_22,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_67,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_68,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_70);

static void MR_CALL 
ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__VarSet_2,
  MR_Word ll_backend__trace_gen__VarTypes_3,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_TVars_7,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9,
  MR_Word * ll_backend__trace_gen__HeadVar__10_10,
  MR_Word ll_backend__trace_gen__HeadVar__11_11,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_13);

static void MR_CALL 
ll_backend__trace_gen__find_output_vars_3_p_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3);

static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2(
  MR_Box ll_backend__trace_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1(
  MR_Box ll_backend__trace_gen__closure_arg);

static void MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(
  MR_Word ll_backend__trace_gen__TraceInfo_5,
  MR_Word * ll_backend__trace_gen__Code_6,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_42,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_43);

static void MR_CALL 
ll_backend__trace_gen__redo_layout_slot_2_p_0(
  MR_Word ll_backend__trace_gen__CodeModel_3,
  MR_Word * ll_backend__trace_gen__RedoLayoutSlot_4);

static void MR_CALL 
ll_backend__trace_gen__call_depth_slot_2_p_0(
  MR_Word ll_backend__trace_gen__CodeModel_3,
  MR_Word * ll_backend__trace_gen__CallDepthSlot_4);

static void MR_CALL 
ll_backend__trace_gen__call_num_slot_2_p_0(
  MR_Word ll_backend__trace_gen__CodeModel_3,
  MR_Word * ll_backend__trace_gen__CallNumSlot_4);

static void MR_CALL 
ll_backend__trace_gen__event_num_slot_2_p_0(
  MR_Word ll_backend__trace_gen__CodeModel_3,
  MR_Word * ll_backend__trace_gen__EventNumSlot_4);

static void MR_CALL 
ll_backend__trace_gen__stackref_to_string_2_p_0(
  MR_Word ll_backend__trace_gen__Lval_3,
  MR_String * ll_backend__trace_gen__LvalStr_4);

static MR_bool MR_CALL 
ll_backend__trace_gen__build_fail_vars_6_p_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
  MR_Word ll_backend__trace_gen__HeadVar__3_3,
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
  MR_Word ll_backend__trace_gen__VarTypes_5,
  MR_Word * ll_backend__trace_gen__HeadVar__6_6);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0_10001(
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0_10001(
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0_10001(
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0_10001(
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0_10001(
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0_10001(
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0_10001(
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0_10001(
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0_10001(
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0_10001(
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
  MR_Box ll_backend__trace_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001(
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001(
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
  MR_Box ll_backend__trace_gen__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_1[23][2];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_2[8][3];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_3[6][1];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_4[5][5];


/* sealed */ struct ll_backend__trace_gen__vector_common_type_5_0_s {
  const MR_Word ll_backend__trace_gen__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct ll_backend__trace_gen__vector_common_type_5_0_s ll_backend__trace_gen_vector_common_5[4];



static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_1[23][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_2[1]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_2[2]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[2]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_2[3]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_2[4]))),
    ((MR_Box) ((MR_String) "set up deep redo event"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_2[5]))),
    ((MR_Box) ((MR_String) "set up shallow redo event"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__trace_gen_scalar_common_3[5])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 5))
  },
};

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[3])),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[2])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__trace_gen_scalar_common_3[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__trace_gen_scalar_common_3[2])))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[2])),
    ((MR_Box) (ll_backend__trace_gen__generate_event_code_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[3])),
    ((MR_Box) (ll_backend__trace_gen__generate_event_code_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_3[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};


static /* final */ const struct ll_backend__trace_gen__vector_common_type_5_0_s ll_backend__trace_gen_vector_common_5[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 3 },
  /* row 3 */   {     (MR_Integer) 4 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0 = {
  (MR_String) "external_event_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0
};

static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0
};

static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_external_event_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____external_event_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____external_event_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "external_event_info",
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0
};

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0 = {
  (MR_String) "external_port_call",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1 = {
  (MR_String) "external_port_exit",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2 = {
  (MR_String) "external_port_fail",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3 = {
  (MR_String) "external_port_tailrec_call",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0[4] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3
};

static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0[4] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3
};

static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_external_trace_port_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__trace_gen____Unify____external_trace_port_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____external_trace_port_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "external_trace_port",
  {     ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0
};

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0 = {
  (MR_String) "neg_success",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1 = {
  (MR_String) "neg_failure",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0
};

static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_negation_end_port_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__trace_gen____Unify____negation_end_port_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____negation_end_port_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "negation_end_port",
  {     ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_info_0_0[9] = {
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0
};

static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_info_0_0[9] = {
  (MR_String) "ti_trace_level",
  (MR_String) "ti_trace_suppress_items",
  (MR_String) "ti_from_full_lval",
  (MR_String) "ti_io_seq_lval",
  (MR_String) "ti_trail_lvals",
  (MR_String) "ti_maxfr_lval",
  (MR_String) "ti_call_table_tip_lval",
  (MR_String) "ti_tail_rec_info",
  (MR_String) "ti_redo_label"
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0 = {
  (MR_String) "trace_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_info_0_0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0
};

static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0
};

static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____trace_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____trace_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "trace_info",
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0 = {
  (MR_String) "port_info_external",
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

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0
  }
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1 = {
  (MR_String) "port_info_tailrec_call",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2 = {
  (MR_String) "port_info_internal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3 = {
  (MR_String) "port_info_negation_end",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4 = {
  (MR_String) "port_info_user",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3[2] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4
};

static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3
  }
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0[5] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1,
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4
};

static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_port_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____trace_port_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____trace_port_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "trace_port_info",
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_ConstString ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0[6] = {
  (MR_String) "slot_from_full",
  (MR_String) "slot_io",
  (MR_String) "slot_trail",
  (MR_String) "slot_maxfr",
  (MR_String) "slot_call_table",
  (MR_String) "slot_tail_rec"
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0 = {
  (MR_String) "trace_slot_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0
};

static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0
};

static const MR_Integer ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_slot_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "trace_slot_info",
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0
};

static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__954__1_2_p_0(
  MR_Word ll_backend__trace_gen__MaybeFromFullLval_17,
  MR_Word ll_backend__trace_gen__HeadVar__2_62)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    {
      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], ((MR_Box) (ll_backend__trace_gen__MaybeFromFullLval_17)), ((MR_Box) (ll_backend__trace_gen__HeadVar__2_62)));
    }
    return ll_backend__trace_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__948__1_2_p_0(
  MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16,
  MR_Word ll_backend__trace_gen__HeadVar__2_57)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    {
      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[0], ((MR_Box) (ll_backend__trace_gen__MaybeRedoLabelLval_16)), ((MR_Box) (ll_backend__trace_gen__HeadVar__2_57)));
    }
    return ll_backend__trace_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1191__1_2_p_0(
  MR_Word ll_backend__trace_gen__Lval_8,
  MR_Word ll_backend__trace_gen__HeadVar__2_20)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    {
      ll_backend__trace_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__trace_gen__Lval_8, ll_backend__trace_gen__HeadVar__2_20);
    }
    return ll_backend__trace_gen__succeeded;
  }
}

void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0(
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Integer ll_backend__trace_gen__CastX_21 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
    MR_Integer ll_backend__trace_gen__CastY_22 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_21 == ll_backend__trace_gen__CastY_22);
    if (ll_backend__trace_gen__succeeded)
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__trace_gen__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__trace_gen__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__trace_gen__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__trace_gen__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__trace_gen__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__trace_gen__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__trace_gen__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__trace_gen__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ll_backend__trace_gen__Var_16;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__Var_16, ((MR_Box) (ll_backend__trace_gen__ArgX1_4)), ((MR_Box) (ll_backend__trace_gen__ArgY1_5)));
        }
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_16 == (MR_Integer) 0);
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
        if (ll_backend__trace_gen__succeeded)
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_16;
        else
          {
            MR_Word ll_backend__trace_gen__Var_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__Var_17, ((MR_Box) (ll_backend__trace_gen__ArgX2_6)), ((MR_Box) (ll_backend__trace_gen__ArgY2_7)));
            }
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_17 == (MR_Integer) 0);
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
            if (ll_backend__trace_gen__succeeded)
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_17;
            else
              {
                MR_Word ll_backend__trace_gen__Var_18;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__Var_18, ((MR_Box) (ll_backend__trace_gen__ArgX3_8)), ((MR_Box) (ll_backend__trace_gen__ArgY3_9)));
                }
                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_18 == (MR_Integer) 0);
                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
                if (ll_backend__trace_gen__succeeded)
                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_18;
                else
                  {
                    MR_Word ll_backend__trace_gen__Var_19;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__Var_19, ((MR_Box) (ll_backend__trace_gen__ArgX4_10)), ((MR_Box) (ll_backend__trace_gen__ArgY4_11)));
                    }
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_19 == (MR_Integer) 0);
                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
                    if (ll_backend__trace_gen__succeeded)
                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_19;
                    else
                      {
                        MR_Word ll_backend__trace_gen__Var_20;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], &ll_backend__trace_gen__Var_20, ((MR_Box) (ll_backend__trace_gen__ArgX5_12)), ((MR_Box) (ll_backend__trace_gen__ArgY5_13)));
                        }
                        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_20 == (MR_Integer) 0);
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
                        if (ll_backend__trace_gen__succeeded)
                          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_20;
                        else
                          {
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__ArgX6_14)), ((MR_Box) (ll_backend__trace_gen__ArgY6_15)));
                            }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Integer ll_backend__trace_gen__CastX_15 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
    MR_Integer ll_backend__trace_gen__CastY_16 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_15 == ll_backend__trace_gen__CastY_16);
    if (ll_backend__trace_gen__succeeded)
      ll_backend__trace_gen__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__trace_gen__TypeInfo_18_18;
        MR_Word ll_backend__trace_gen__TypeInfo_19_19;
        MR_Word ll_backend__trace_gen__TypeInfo_20_20;
        MR_Word ll_backend__trace_gen__TypeInfo_21_21;
        MR_Word ll_backend__trace_gen__TypeInfo_22_22;
        MR_Word ll_backend__trace_gen__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__trace_gen__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__trace_gen__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__trace_gen__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__trace_gen__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__trace_gen__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__trace_gen__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ll_backend__trace_gen__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));

        {
          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[11], ((MR_Box) (ll_backend__trace_gen__ArgX1_3)), ((MR_Box) (ll_backend__trace_gen__ArgY1_4)));
        }
        if (ll_backend__trace_gen__succeeded)
          {
            ll_backend__trace_gen__TypeInfo_18_18 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
            {
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_18_18, ((MR_Box) (ll_backend__trace_gen__ArgX2_5)), ((MR_Box) (ll_backend__trace_gen__ArgY2_6)));
            }
            if (ll_backend__trace_gen__succeeded)
              {
                ll_backend__trace_gen__TypeInfo_19_19 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
                {
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_19_19, ((MR_Box) (ll_backend__trace_gen__ArgX3_7)), ((MR_Box) (ll_backend__trace_gen__ArgY3_8)));
                }
                if (ll_backend__trace_gen__succeeded)
                  {
                    ll_backend__trace_gen__TypeInfo_20_20 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
                    {
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_20_20, ((MR_Box) (ll_backend__trace_gen__ArgX4_9)), ((MR_Box) (ll_backend__trace_gen__ArgY4_10)));
                    }
                    if (ll_backend__trace_gen__succeeded)
                      {
                        ll_backend__trace_gen__TypeInfo_21_21 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
                        {
                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_21_21, ((MR_Box) (ll_backend__trace_gen__ArgX5_11)), ((MR_Box) (ll_backend__trace_gen__ArgY5_12)));
                        }
                        if (ll_backend__trace_gen__succeeded)
                          {
                            ll_backend__trace_gen__TypeInfo_22_22 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[11];
                            {
                              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_22_22, ((MR_Box) (ll_backend__trace_gen__ArgX6_13)), ((MR_Box) (ll_backend__trace_gen__ArgY6_14)));
                            }
                          }
                      }
                  }
              }
          }
      }
    return ll_backend__trace_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0(
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Integer ll_backend__trace_gen__CastX_66 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
    MR_Integer ll_backend__trace_gen__CastY_67 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_66 == ll_backend__trace_gen__CastY_67);
    if (ll_backend__trace_gen__succeeded)
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__trace_gen__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__trace_gen__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__trace_gen__ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ll_backend__trace_gen__ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ll_backend__trace_gen__Var_16;

                  {
                    mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__trace_gen__Var_16, ll_backend__trace_gen__Var_78, ll_backend__trace_gen__ArgY1_13);
                  }
                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_16 == (MR_Integer) 0);
                  ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
                  if (ll_backend__trace_gen__succeeded)
                    *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_16;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[10], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__Var_77)), ((MR_Box) (ll_backend__trace_gen__ArgY2_15)));
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ll_backend__trace_gen__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__trace_gen__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__trace_gen__ArgY1_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ll_backend__trace_gen__ArgY2_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ll_backend__trace_gen__Var_37;

                  {
                    mdbcomp__goal_path____Compare____forward_goal_path_0_0(&ll_backend__trace_gen__Var_37, ll_backend__trace_gen__Var_75, ll_backend__trace_gen__ArgY1_34);
                  }
                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_37 == (MR_Integer) 0);
                  ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
                  if (ll_backend__trace_gen__succeeded)
                    *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_37;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[9], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__Var_74)), ((MR_Box) (ll_backend__trace_gen__ArgY2_36)));
                      }
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ll_backend__trace_gen__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ll_backend__trace_gen__ArgY1_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mdbcomp__goal_path____Compare____forward_goal_path_0_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__Var_76, ll_backend__trace_gen__ArgY1_52);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__trace_gen__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ll_backend__trace_gen__ArgY1_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mdbcomp__goal_path____Compare____forward_goal_path_0_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__Var_79, ll_backend__trace_gen__ArgY1_65);
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

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Integer ll_backend__trace_gen__CastX_17 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
    MR_Integer ll_backend__trace_gen__CastY_18 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_17 == ll_backend__trace_gen__CastY_18);
    if (ll_backend__trace_gen__succeeded)
      ll_backend__trace_gen__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer ll_backend__trace_gen__CastX_3 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
            MR_Integer ll_backend__trace_gen__CastY_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastY_4 == ll_backend__trace_gen__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__trace_gen__TypeInfo_23_23;
            MR_Word ll_backend__trace_gen__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__trace_gen__ArgY1_6;
            MR_Word ll_backend__trace_gen__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__trace_gen__ArgY2_8;

            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__trace_gen__succeeded)
              {
                ll_backend__trace_gen__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
                ll_backend__trace_gen__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
                {
                  ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__ArgX1_5, ll_backend__trace_gen__ArgY1_6);
                }
                if (ll_backend__trace_gen__succeeded)
                  {
                    ll_backend__trace_gen__TypeInfo_23_23 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[10];
                    {
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_23_23, ((MR_Box) (ll_backend__trace_gen__ArgX2_7)), ((MR_Box) (ll_backend__trace_gen__ArgY2_8)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ll_backend__trace_gen__TypeInfo_20_20;
            MR_Word ll_backend__trace_gen__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__trace_gen__ArgY1_10;
            MR_Word ll_backend__trace_gen__ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__trace_gen__ArgY2_12;

            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__trace_gen__succeeded)
              {
                ll_backend__trace_gen__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
                ll_backend__trace_gen__ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
                {
                  ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__ArgX1_9, ll_backend__trace_gen__ArgY1_10);
                }
                if (ll_backend__trace_gen__succeeded)
                  {
                    ll_backend__trace_gen__TypeInfo_20_20 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[9];
                    {
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_20_20, ((MR_Box) (ll_backend__trace_gen__ArgX2_11)), ((MR_Box) (ll_backend__trace_gen__ArgY2_12)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ll_backend__trace_gen__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ll_backend__trace_gen__ArgY1_14;

                ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ll_backend__trace_gen__succeeded)
                  {
                    ll_backend__trace_gen__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__ArgX1_13, ll_backend__trace_gen__ArgY1_14);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__trace_gen__ArgX1_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ll_backend__trace_gen__ArgY1_16;

                ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (ll_backend__trace_gen__succeeded)
                  {
                    ll_backend__trace_gen__ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      ll_backend__trace_gen__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ll_backend__trace_gen__ArgX1_15, ll_backend__trace_gen__ArgY1_16);
                    }
                  }
              }
              break;
          }
          break;
      }
    return ll_backend__trace_gen__succeeded;
  }
}

void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0(
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Integer ll_backend__trace_gen__CastX_30 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
    MR_Integer ll_backend__trace_gen__CastY_31 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_30 == ll_backend__trace_gen__CastY_31);
    if (ll_backend__trace_gen__succeeded)
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__trace_gen__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__trace_gen__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__trace_gen__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__trace_gen__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__trace_gen__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__trace_gen__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__trace_gen__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__trace_gen__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ll_backend__trace_gen__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__trace_gen__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word ll_backend__trace_gen__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__trace_gen__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word ll_backend__trace_gen__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word ll_backend__trace_gen__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word ll_backend__trace_gen__Var_22;

        {
          libs__trace_params____Compare____trace_level_0_0(&ll_backend__trace_gen__Var_22, ll_backend__trace_gen__ArgX1_4, ll_backend__trace_gen__ArgY1_5);
        }
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_22 == (MR_Integer) 0);
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
        if (ll_backend__trace_gen__succeeded)
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_22;
        else
          {
            MR_Word ll_backend__trace_gen__Var_23;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[6], &ll_backend__trace_gen__Var_23, ((MR_Box) (ll_backend__trace_gen__ArgX2_6)), ((MR_Box) (ll_backend__trace_gen__ArgY2_7)));
            }
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_23 == (MR_Integer) 0);
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
            if (ll_backend__trace_gen__succeeded)
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_23;
            else
              {
                MR_Word ll_backend__trace_gen__Var_24;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__Var_24, ((MR_Box) (ll_backend__trace_gen__ArgX3_8)), ((MR_Box) (ll_backend__trace_gen__ArgY3_9)));
                }
                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_24 == (MR_Integer) 0);
                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
                if (ll_backend__trace_gen__succeeded)
                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_24;
                else
                  {
                    MR_Word ll_backend__trace_gen__Var_25;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__Var_25, ((MR_Box) (ll_backend__trace_gen__ArgX4_10)), ((MR_Box) (ll_backend__trace_gen__ArgY4_11)));
                    }
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_25 == (MR_Integer) 0);
                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
                    if (ll_backend__trace_gen__succeeded)
                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_25;
                    else
                      {
                        MR_Word ll_backend__trace_gen__Var_26;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[7], &ll_backend__trace_gen__Var_26, ((MR_Box) (ll_backend__trace_gen__ArgX5_12)), ((MR_Box) (ll_backend__trace_gen__ArgY5_13)));
                        }
                        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_26 == (MR_Integer) 0);
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
                        if (ll_backend__trace_gen__succeeded)
                          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_26;
                        else
                          {
                            MR_Word ll_backend__trace_gen__Var_27;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__Var_27, ((MR_Box) (ll_backend__trace_gen__ArgX6_14)), ((MR_Box) (ll_backend__trace_gen__ArgY6_15)));
                            }
                            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_27 == (MR_Integer) 0);
                            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
                            if (ll_backend__trace_gen__succeeded)
                              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_27;
                            else
                              {
                                MR_Word ll_backend__trace_gen__Var_28;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[1], &ll_backend__trace_gen__Var_28, ((MR_Box) (ll_backend__trace_gen__ArgX7_16)), ((MR_Box) (ll_backend__trace_gen__ArgY7_17)));
                                }
                                ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_28 == (MR_Integer) 0);
                                ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
                                if (ll_backend__trace_gen__succeeded)
                                  *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_28;
                                else
                                  {
                                    MR_Word ll_backend__trace_gen__Var_29;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[8], &ll_backend__trace_gen__Var_29, ((MR_Box) (ll_backend__trace_gen__ArgX8_18)), ((MR_Box) (ll_backend__trace_gen__ArgY8_19)));
                                    }
                                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_29 == (MR_Integer) 0);
                                    ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
                                    if (ll_backend__trace_gen__succeeded)
                                      *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_29;
                                    else
                                      {
                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[0], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__ArgX9_20)), ((MR_Box) (ll_backend__trace_gen__ArgY9_21)));
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

MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Integer ll_backend__trace_gen__CastX_21 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
    MR_Integer ll_backend__trace_gen__CastY_22 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_21 == ll_backend__trace_gen__CastY_22);
    if (ll_backend__trace_gen__succeeded)
      ll_backend__trace_gen__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__trace_gen__TypeInfo_24_24;
        MR_Word ll_backend__trace_gen__TypeInfo_25_25;
        MR_Word ll_backend__trace_gen__TypeInfo_26_26;
        MR_Word ll_backend__trace_gen__TypeInfo_27_27;
        MR_Word ll_backend__trace_gen__TypeInfo_28_28;
        MR_Word ll_backend__trace_gen__TypeInfo_29_29;
        MR_Word ll_backend__trace_gen__TypeInfo_30_30;
        MR_Word ll_backend__trace_gen__TypeInfo_31_31;
        MR_Word ll_backend__trace_gen__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__trace_gen__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__trace_gen__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__trace_gen__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__trace_gen__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__trace_gen__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__trace_gen__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ll_backend__trace_gen__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__trace_gen__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word ll_backend__trace_gen__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word ll_backend__trace_gen__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word ll_backend__trace_gen__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word ll_backend__trace_gen__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word ll_backend__trace_gen__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 8)));

        {
          ll_backend__trace_gen__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__trace_gen__ArgX1_3, ll_backend__trace_gen__ArgY1_4);
        }
        if (ll_backend__trace_gen__succeeded)
          {
            ll_backend__trace_gen__TypeInfo_24_24 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[6];
            {
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_24_24, ((MR_Box) (ll_backend__trace_gen__ArgX2_5)), ((MR_Box) (ll_backend__trace_gen__ArgY2_6)));
            }
            if (ll_backend__trace_gen__succeeded)
              {
                ll_backend__trace_gen__TypeInfo_25_25 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
                {
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_25_25, ((MR_Box) (ll_backend__trace_gen__ArgX3_7)), ((MR_Box) (ll_backend__trace_gen__ArgY3_8)));
                }
                if (ll_backend__trace_gen__succeeded)
                  {
                    ll_backend__trace_gen__TypeInfo_26_26 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
                    {
                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_26_26, ((MR_Box) (ll_backend__trace_gen__ArgX4_9)), ((MR_Box) (ll_backend__trace_gen__ArgY4_10)));
                    }
                    if (ll_backend__trace_gen__succeeded)
                      {
                        ll_backend__trace_gen__TypeInfo_27_27 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[7];
                        {
                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_27_27, ((MR_Box) (ll_backend__trace_gen__ArgX5_11)), ((MR_Box) (ll_backend__trace_gen__ArgY5_12)));
                        }
                        if (ll_backend__trace_gen__succeeded)
                          {
                            ll_backend__trace_gen__TypeInfo_28_28 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
                            {
                              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_28_28, ((MR_Box) (ll_backend__trace_gen__ArgX6_13)), ((MR_Box) (ll_backend__trace_gen__ArgY6_14)));
                            }
                            if (ll_backend__trace_gen__succeeded)
                              {
                                ll_backend__trace_gen__TypeInfo_29_29 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[1];
                                {
                                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_29_29, ((MR_Box) (ll_backend__trace_gen__ArgX7_15)), ((MR_Box) (ll_backend__trace_gen__ArgY7_16)));
                                }
                                if (ll_backend__trace_gen__succeeded)
                                  {
                                    ll_backend__trace_gen__TypeInfo_30_30 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[8];
                                    {
                                      ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_30_30, ((MR_Box) (ll_backend__trace_gen__ArgX8_17)), ((MR_Box) (ll_backend__trace_gen__ArgY8_18)));
                                    }
                                    if (ll_backend__trace_gen__succeeded)
                                      {
                                        ll_backend__trace_gen__TypeInfo_31_31 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[0];
                                        {
                                          ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_31_31, ((MR_Box) (ll_backend__trace_gen__ArgX9_19)), ((MR_Box) (ll_backend__trace_gen__ArgY9_20)));
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
    return ll_backend__trace_gen__succeeded;
  }
}

void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0(
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Integer ll_backend__trace_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
    MR_Integer ll_backend__trace_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__Cast_HeadVar1_4, ll_backend__trace_gen__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0(
  MR_Word ll_backend__trace_gen__HeadVar__2_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_1 == ll_backend__trace_gen__HeadVar__2_2);

    return ll_backend__trace_gen__succeeded;
  }
}

void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0(
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Integer ll_backend__trace_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
    MR_Integer ll_backend__trace_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__trace_gen__HeadVar__1_1, ll_backend__trace_gen__Cast_HeadVar1_4, ll_backend__trace_gen__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0(
  MR_Word ll_backend__trace_gen__HeadVar__2_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_1 == ll_backend__trace_gen__HeadVar__2_2);

    return ll_backend__trace_gen__succeeded;
  }
}

void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0(
  MR_Word * ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
  MR_Word ll_backend__trace_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Integer ll_backend__trace_gen__CastX_12 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;
    MR_Integer ll_backend__trace_gen__CastY_13 = (MR_Integer) ll_backend__trace_gen__HeadVar__3_3;

    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_12 == ll_backend__trace_gen__CastY_13);
    if (ll_backend__trace_gen__succeeded)
      *ll_backend__trace_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__trace_gen__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__trace_gen__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__trace_gen__Var_10;

        {
          ll_backend__llds____Compare____label_0_0(&ll_backend__trace_gen__Var_10, ll_backend__trace_gen__ArgX1_4, ll_backend__trace_gen__ArgY1_5);
        }
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_10 == (MR_Integer) 0);
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
        if (ll_backend__trace_gen__succeeded)
          *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_10;
        else
          {
            MR_Word ll_backend__trace_gen__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_2[0], &ll_backend__trace_gen__Var_11, ((MR_Box) (ll_backend__trace_gen__ArgX2_6)), ((MR_Box) (ll_backend__trace_gen__ArgY2_7)));
            }
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_11 == (MR_Integer) 0);
            ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
            if (ll_backend__trace_gen__succeeded)
              *ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[5], ll_backend__trace_gen__HeadVar__1_1, ((MR_Box) (ll_backend__trace_gen__ArgX3_8)), ((MR_Box) (ll_backend__trace_gen__ArgY3_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Integer ll_backend__trace_gen__CastX_9 = (MR_Integer) ll_backend__trace_gen__HeadVar__1_1;
    MR_Integer ll_backend__trace_gen__CastY_10 = (MR_Integer) ll_backend__trace_gen__HeadVar__2_2;

    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CastX_9 == ll_backend__trace_gen__CastY_10);
    if (ll_backend__trace_gen__succeeded)
      ll_backend__trace_gen__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__trace_gen__TypeInfo_12_12;
        MR_Word ll_backend__trace_gen__TypeInfo_13_13;
        MR_Word ll_backend__trace_gen__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__trace_gen__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 2)));

        {
          ll_backend__trace_gen__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__trace_gen__ArgX1_3, ll_backend__trace_gen__ArgY1_4);
        }
        if (ll_backend__trace_gen__succeeded)
          {
            ll_backend__trace_gen__TypeInfo_12_12 = (MR_Word) &ll_backend__trace_gen_scalar_common_2[0];
            {
              ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_12_12, ((MR_Box) (ll_backend__trace_gen__ArgX2_5)), ((MR_Box) (ll_backend__trace_gen__ArgY2_6)));
            }
            if (ll_backend__trace_gen__succeeded)
              {
                ll_backend__trace_gen__TypeInfo_13_13 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[5];
                {
                  ll_backend__trace_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__trace_gen__TypeInfo_13_13, ((MR_Box) (ll_backend__trace_gen__ArgX3_7)), ((MR_Box) (ll_backend__trace_gen__ArgY3_8)));
                }
              }
          }
      }
    return ll_backend__trace_gen__succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__Lval_2;

    if (((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      ll_backend__trace_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
    else
      {
        MR_Integer ll_backend__trace_gen__Var_5;

        ll_backend__trace_gen__Lval_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
        ll_backend__trace_gen__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
      }
    return ll_backend__trace_gen__Lval_2;
  }
}

static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_var_info_1_f_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__HeadVar__2_2;
    MR_Word ll_backend__trace_gen__LayoutLocn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__trace_gen__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
    MR_String ll_backend__trace_gen__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 2)));

    if (((MR_tag((MR_Word) ll_backend__trace_gen__LayoutLocn_3)) == (MR_mktag((MR_Integer) 0))))
      ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 0)));
    else
      {
        MR_Integer ll_backend__trace_gen__Var_8;

        ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 0)));
        ll_backend__trace_gen__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LayoutLocn_3, (MR_Integer) 1)));
      }
    return ll_backend__trace_gen__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1(
  MR_Box ll_backend__trace_gen__closure_arg)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

    {
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1191__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__trace_gen__succeeded;
  }
}

void MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0(
  MR_Word ll_backend__trace_gen__TraceInfo_3,
  MR_Word * ll_backend__trace_gen__Code_4)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__TraceRedoLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 8)));
    MR_Word ll_backend__trace_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 2)));
    MR_Word ll_backend__trace_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 0)));
    MR_Word ll_backend__trace_gen__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 1)));
    MR_Word ll_backend__trace_gen__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 3)));
    MR_Word ll_backend__trace_gen__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 4)));
    MR_Word ll_backend__trace_gen__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 5)));
    MR_Word ll_backend__trace_gen__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 6)));
    MR_Word ll_backend__trace_gen__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 7)));

    if ((ll_backend__trace_gen__TraceRedoLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__trace_gen__Code_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
      }
    else
    if ((ll_backend__trace_gen__Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__trace_gen__Code_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[12])));
        }
      }
    else
      {
        MR_Word ll_backend__trace_gen__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_31, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__Var_16;

        {
          ll_backend__trace_gen__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_16, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_16, 1) = ((MR_Box) (ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_16, 3) = ((MR_Box) (ll_backend__trace_gen__Lval_8));
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[22])));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__trace_gen__Var_16, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.maybe_setup_redo_event\'/2", (MR_String) "from-full flag not stored in expected slot");
        }
        {
          *ll_backend__trace_gen__Code_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[13])));
        }
      }
  }
}

void MR_CALL 
ll_backend__trace_gen__generate_external_event_code_8_p_0(
  MR_Word ll_backend__trace_gen__ExternalPort_9,
  MR_Word ll_backend__trace_gen__TraceInfo_10,
  MR_Word ll_backend__trace_gen__Context_11,
  MR_Word * ll_backend__trace_gen__MaybeExternalInfo_12,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_23,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_24,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_26)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__Port_15 = ((&ll_backend__trace_gen_vector_common_5[0 + ll_backend__trace_gen__ExternalPort_9]))->ll_backend__trace_gen__vector_common_type_5_0__vct_5_f_0;
    MR_Word ll_backend__trace_gen__ModuleInfo_16;
    MR_Word ll_backend__trace_gen__PredInfo_17;
    MR_Word ll_backend__trace_gen__ProcInfo_18;
    MR_Word ll_backend__trace_gen__NeedPort_19;
    MR_Word ll_backend__trace_gen__Var_27;
    MR_Word ll_backend__trace_gen__Var_36;
    MR_Word ll_backend__trace_gen__Var_37;
    MR_Word ll_backend__trace_gen__Var_38;
    MR_Word ll_backend__trace_gen__Var_39;
    MR_Word ll_backend__trace_gen__Var_40;
    MR_Word ll_backend__trace_gen__Var_41;
    MR_Word ll_backend__trace_gen__Var_42;
    MR_Word ll_backend__trace_gen__Var_43;

    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__ModuleInfo_16);
    }
    {
      ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__PredInfo_17);
    }
    {
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__ProcInfo_18);
    }
    ll_backend__trace_gen__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 0)));
    ll_backend__trace_gen__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 1)));
    ll_backend__trace_gen__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 2)));
    ll_backend__trace_gen__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 3)));
    ll_backend__trace_gen__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 4)));
    ll_backend__trace_gen__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 5)));
    ll_backend__trace_gen__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 6)));
    ll_backend__trace_gen__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 7)));
    ll_backend__trace_gen__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_10, (MR_Integer) 8)));
    {
      ll_backend__trace_gen__NeedPort_19 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_16, ll_backend__trace_gen__PredInfo_17, ll_backend__trace_gen__ProcInfo_18, ll_backend__trace_gen__Var_27, ll_backend__trace_gen__Var_36, ll_backend__trace_gen__Port_15);
    }
    switch (ll_backend__trace_gen__NeedPort_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__trace_gen__MaybeExternalInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__trace_gen__STATE_VARIABLE_CI_24 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_23;
          *ll_backend__trace_gen__STATE_VARIABLE_CLD_26 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__trace_gen__Label_20;
          MR_Word ll_backend__trace_gen__TvarDataMap_21;
          MR_Word ll_backend__trace_gen__Code_22;
          MR_Word ll_backend__trace_gen__Var_30;
          MR_Word ll_backend__trace_gen__Var_35;

          {
            ll_backend__trace_gen__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_30, 0) = ((MR_Box) (ll_backend__trace_gen__TraceInfo_10));
          }
          {
            ll_backend__trace_gen__generate_event_code_13_p_0(ll_backend__trace_gen__Port_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__Var_30, ll_backend__trace_gen__Context_11, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__Label_20, &ll_backend__trace_gen__TvarDataMap_21, &ll_backend__trace_gen__Code_22, ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, ll_backend__trace_gen__STATE_VARIABLE_CI_24, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25, ll_backend__trace_gen__STATE_VARIABLE_CLD_26);
          }
          {
            ll_backend__trace_gen__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_35, 0) = ((MR_Box) (ll_backend__trace_gen__Label_20));
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_35, 1) = ((MR_Box) (ll_backend__trace_gen__TvarDataMap_21));
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_35, 2) = ((MR_Box) (ll_backend__trace_gen__Code_22));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__trace_gen__MaybeExternalInfo_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__Var_35));
          }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__generate_tailrec_event_code_10_p_0(
  MR_Word ll_backend__trace_gen__TraceInfo_11,
  MR_Word ll_backend__trace_gen__ArgsInfos_12,
  MR_Word ll_backend__trace_gen__GoalId_13,
  MR_Word ll_backend__trace_gen__Context_14,
  MR_Word * ll_backend__trace_gen__Code_15,
  MR_Word * ll_backend__trace_gen__TailRecLabel_16,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_29,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_30,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_31,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_32)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__ContainingGoalMap_20;
    MR_Word ll_backend__trace_gen__GoalPath_21;
    MR_Word ll_backend__trace_gen__PortInfo_22;
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_27;
    MR_Word ll_backend__trace_gen__Var_33;
    MR_Word ll_backend__trace_gen___Label_25;
    MR_Word ll_backend__trace_gen___TvarDataMap_26;
    MR_Word ll_backend__trace_gen__Var_40;
    MR_Word ll_backend__trace_gen__Var_41;
    MR_Word ll_backend__trace_gen__Var_42;
    MR_Word ll_backend__trace_gen__Var_43;
    MR_Word ll_backend__trace_gen__Var_44;
    MR_Word ll_backend__trace_gen__Var_45;
    MR_Word ll_backend__trace_gen__Var_46;
    MR_Word ll_backend__trace_gen__Var_47;

    {
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_29, &ll_backend__trace_gen__ContainingGoalMap_20);
    }
    {
      ll_backend__trace_gen__GoalPath_21 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_20, ll_backend__trace_gen__GoalId_13);
    }
    {
      ll_backend__trace_gen__PortInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_22, 0) = ((MR_Box) (ll_backend__trace_gen__GoalPath_21));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_22, 1) = ((MR_Box) (ll_backend__trace_gen__ArgsInfos_12));
    }
    {
      ll_backend__trace_gen__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_33, 0) = ((MR_Box) (ll_backend__trace_gen__TraceInfo_11));
    }
    {
      ll_backend__trace_gen__generate_event_code_13_p_0((MR_Integer) 4, ll_backend__trace_gen__PortInfo_22, ll_backend__trace_gen__Var_33, ll_backend__trace_gen__Context_14, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen___Label_25, &ll_backend__trace_gen___TvarDataMap_26, ll_backend__trace_gen__Code_15, ll_backend__trace_gen__STATE_VARIABLE_CI_0_29, ll_backend__trace_gen__STATE_VARIABLE_CI_30, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_31, ll_backend__trace_gen__STATE_VARIABLE_CLD_32);
    }
    ll_backend__trace_gen__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 0)));
    ll_backend__trace_gen__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 1)));
    ll_backend__trace_gen__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 2)));
    ll_backend__trace_gen__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 3)));
    ll_backend__trace_gen__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 4)));
    ll_backend__trace_gen__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 5)));
    ll_backend__trace_gen__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 6)));
    ll_backend__trace_gen__MaybeTailRecInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 7)));
    ll_backend__trace_gen__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_11, (MR_Integer) 8)));
    if ((ll_backend__trace_gen__MaybeTailRecInfo_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_event_code\'/10", (MR_String) "no tail rec label");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__trace_gen__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_27, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_39, (MR_Integer) 0)));

        *ll_backend__trace_gen__TailRecLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_39, (MR_Integer) 1)));
      }
  }
}

void MR_CALL 
ll_backend__trace_gen__generate_user_event_code_7_p_0(
  MR_Word ll_backend__trace_gen__UserInfo_8,
  MR_Word ll_backend__trace_gen__GoalInfo_9,
  MR_Word * ll_backend__trace_gen__Code_10,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_23,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_24,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_26)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__GoalId_13;
    MR_Word ll_backend__trace_gen__ContainingGoalMap_14;
    MR_Word ll_backend__trace_gen__GoalPath_15;
    MR_Word ll_backend__trace_gen__Context_16;
    MR_Word ll_backend__trace_gen__PortInfo_18;
    MR_Word ll_backend__trace_gen__Var_27;
    MR_Word ll_backend__trace_gen___Label_21;
    MR_Word ll_backend__trace_gen___TvarDataMap_22;

    {
      ll_backend__trace_gen__GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_9);
    }
    {
      ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, &ll_backend__trace_gen__ContainingGoalMap_14);
    }
    {
      ll_backend__trace_gen__GoalPath_15 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_14, ll_backend__trace_gen__GoalId_13);
    }
    {
      ll_backend__trace_gen__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_9);
    }
    {
      ll_backend__trace_gen__PortInfo_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_18, 1) = ((MR_Box) (ll_backend__trace_gen__GoalPath_15));
    }
    {
      ll_backend__trace_gen__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_27, 0) = ((MR_Box) (ll_backend__trace_gen__UserInfo_8));
    }
    {
      ll_backend__trace_gen__generate_event_code_13_p_0((MR_Integer) 15, ll_backend__trace_gen__PortInfo_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__Context_16, (MR_Integer) 0, ll_backend__trace_gen__Var_27, &ll_backend__trace_gen___Label_21, &ll_backend__trace_gen___TvarDataMap_22, ll_backend__trace_gen__Code_10, ll_backend__trace_gen__STATE_VARIABLE_CI_0_23, ll_backend__trace_gen__STATE_VARIABLE_CI_24, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_25, ll_backend__trace_gen__STATE_VARIABLE_CLD_26);
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(
  MR_Word ll_backend__trace_gen__Goal_9,
  MR_Word ll_backend__trace_gen__OutsideGoalInfo_10,
  MR_Word ll_backend__trace_gen__NegPort_11,
  MR_Word * ll_backend__trace_gen__Code_12,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_30,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_31,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_32,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_33)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_15;
    MR_Word ll_backend__trace_gen__Port_17;
    MR_Word ll_backend__trace_gen__TraceInfo_16;
    MR_Word ll_backend__trace_gen__ModuleInfo_18;
    MR_Word ll_backend__trace_gen__PredInfo_19;
    MR_Word ll_backend__trace_gen__ProcInfo_20;
    MR_Word ll_backend__trace_gen__Var_34;
    MR_Word ll_backend__trace_gen__Var_35;
    MR_Word ll_backend__trace_gen__Var_43;
    MR_Word ll_backend__trace_gen__Var_44;
    MR_Word ll_backend__trace_gen__Var_45;
    MR_Word ll_backend__trace_gen__Var_46;
    MR_Word ll_backend__trace_gen__Var_47;
    MR_Word ll_backend__trace_gen__Var_48;
    MR_Word ll_backend__trace_gen__Var_49;
    MR_Word ll_backend__trace_gen__Var_50;

    {
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__MaybeTraceInfo_15);
    }
    ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__MaybeTraceInfo_15)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__trace_gen__succeeded)
      {
        ll_backend__trace_gen__TraceInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_15, (MR_Integer) 0)));
        switch (ll_backend__trace_gen__NegPort_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ll_backend__trace_gen__Port_17 = (MR_Integer) 11;
            break;
          case (MR_Integer) 0:
            ll_backend__trace_gen__Port_17 = (MR_Integer) 10;
            break;
        }
        {
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__ModuleInfo_18);
        }
        {
          ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__PredInfo_19);
        }
        {
          ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__ProcInfo_20);
        }
        ll_backend__trace_gen__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 0)));
        ll_backend__trace_gen__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 1)));
        ll_backend__trace_gen__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 2)));
        ll_backend__trace_gen__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 3)));
        ll_backend__trace_gen__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 4)));
        ll_backend__trace_gen__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 5)));
        ll_backend__trace_gen__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 6)));
        ll_backend__trace_gen__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 7)));
        ll_backend__trace_gen__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_16, (MR_Integer) 8)));
        {
          ll_backend__trace_gen__Var_34 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_18, ll_backend__trace_gen__PredInfo_19, ll_backend__trace_gen__ProcInfo_20, ll_backend__trace_gen__Var_35, ll_backend__trace_gen__Var_43, ll_backend__trace_gen__Port_17);
        }
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_34 == (MR_Integer) 1);
      }
    if (ll_backend__trace_gen__succeeded)
      {
        MR_Word ll_backend__trace_gen__GoalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_9, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__GoalId_23;
        MR_Word ll_backend__trace_gen__Context_24;
        MR_Word ll_backend__trace_gen__HideEvent_25;
        MR_Word ll_backend__trace_gen__ContainingGoalMap_26;
        MR_Word ll_backend__trace_gen__GoalPath_27;
        MR_Word ll_backend__trace_gen__Var_38;
        MR_Word ll_backend__trace_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_9, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__Var_28;
        MR_Word ll_backend__trace_gen__Var_29;

        {
          ll_backend__trace_gen__GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_22);
        }
        {
          ll_backend__trace_gen__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_22);
        }
        {
          ll_backend__trace_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__trace_gen__OutsideGoalInfo_10, (MR_Integer) 8);
        }
        if (ll_backend__trace_gen__succeeded)
          ll_backend__trace_gen__HideEvent_25 = (MR_Integer) 1;
        else
          ll_backend__trace_gen__HideEvent_25 = (MR_Integer) 0;
        {
          ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, &ll_backend__trace_gen__ContainingGoalMap_26);
        }
        {
          ll_backend__trace_gen__GoalPath_27 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_26, ll_backend__trace_gen__GoalId_23);
        }
        {
          ll_backend__trace_gen__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_38, 1) = ((MR_Box) (ll_backend__trace_gen__GoalPath_27));
        }
        {
          ll_backend__trace_gen__generate_event_code_13_p_0(ll_backend__trace_gen__Port_17, ll_backend__trace_gen__Var_38, ll_backend__trace_gen__MaybeTraceInfo_15, ll_backend__trace_gen__Context_24, ll_backend__trace_gen__HideEvent_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__Var_29, ll_backend__trace_gen__Code_12, ll_backend__trace_gen__STATE_VARIABLE_CI_0_30, ll_backend__trace_gen__STATE_VARIABLE_CI_31, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_32, ll_backend__trace_gen__STATE_VARIABLE_CLD_33);
        }
      }
    else
      {
        {
          *ll_backend__trace_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__trace_gen__STATE_VARIABLE_CLD_33 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_32;
        *ll_backend__trace_gen__STATE_VARIABLE_CI_31 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_30;
      }
  }
}

void MR_CALL 
ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(
  MR_Word ll_backend__trace_gen__Goal_8,
  MR_Word ll_backend__trace_gen__OutsideGoalInfo_9,
  MR_Word * ll_backend__trace_gen__Code_10,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_36,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_37,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_39)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_13;

    {
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__MaybeTraceInfo_13);
    }
    if ((ll_backend__trace_gen__MaybeTraceInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__trace_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__trace_gen__STATE_VARIABLE_CI_37 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_36;
        *ll_backend__trace_gen__STATE_VARIABLE_CLD_39 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38;
      }
    else
      {
        MR_Word ll_backend__trace_gen__TraceInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_13, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__GoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_8, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__GoalId_17;
        MR_Word ll_backend__trace_gen__ContainingGoalMap_18;
        MR_Word ll_backend__trace_gen__ContainingGoal_19;
        MR_Word ll_backend__trace_gen__Port_26;
        MR_Word ll_backend__trace_gen__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Goal_8, (MR_Integer) 0)));
        MR_Box ll_backend__trace_gen__conv0_ContainingGoal_19;
        MR_Word ll_backend__trace_gen__PortPrime_24;
        MR_Word ll_backend__trace_gen__LastStep_21;
        MR_Word ll_backend__trace_gen__Var_20;
        MR_Word ll_backend__trace_gen__ModuleInfo_27;
        MR_Word ll_backend__trace_gen__PredInfo_28;
        MR_Word ll_backend__trace_gen__ProcInfo_29;
        MR_Word ll_backend__trace_gen__Var_43;
        MR_Word ll_backend__trace_gen__Var_44;
        MR_Word ll_backend__trace_gen__Var_52;
        MR_Word ll_backend__trace_gen__Var_53;
        MR_Word ll_backend__trace_gen__Var_54;
        MR_Word ll_backend__trace_gen__Var_55;
        MR_Word ll_backend__trace_gen__Var_56;
        MR_Word ll_backend__trace_gen__Var_57;
        MR_Word ll_backend__trace_gen__Var_58;
        MR_Word ll_backend__trace_gen__Var_59;

        {
          ll_backend__trace_gen__GoalId_17 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__trace_gen__GoalInfo_16);
        }
        {
          ll_backend__code_info__get_containing_goal_map_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__ContainingGoalMap_18);
        }
        {
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, ll_backend__trace_gen__ContainingGoalMap_18, ((MR_Box) (ll_backend__trace_gen__GoalId_17)), &ll_backend__trace_gen__conv0_ContainingGoal_19);
        }
        ll_backend__trace_gen__ContainingGoal_19 = ((MR_Word) ll_backend__trace_gen__conv0_ContainingGoal_19);
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__ContainingGoal_19)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__trace_gen__succeeded)
          {
            ll_backend__trace_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ContainingGoal_19, (MR_Integer) 0)));
            ll_backend__trace_gen__LastStep_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ContainingGoal_19, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) ll_backend__trace_gen__LastStep_21)) {
              default:
                ll_backend__trace_gen__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(ll_backend__trace_gen__LastStep_21)) {
                  default:
                    ll_backend__trace_gen__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 6;
                      ll_backend__trace_gen__succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 7;
                      ll_backend__trace_gen__succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 8;
                      ll_backend__trace_gen__succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 9;
                      ll_backend__trace_gen__succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ll_backend__trace_gen__DisjunctNum_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__LastStep_21, (MR_Integer) 0)));

                  ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__DisjunctNum_25 == (MR_Integer) 1);
                  if (ll_backend__trace_gen__succeeded)
                    ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 12;
                  else
                    ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 13;
                  ll_backend__trace_gen__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__LastStep_21, (MR_Integer) 0)))) {
                  default:
                    ll_backend__trace_gen__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      ll_backend__trace_gen__PortPrime_24 = (MR_Integer) 14;
                      ll_backend__trace_gen__succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
          }
        if (ll_backend__trace_gen__succeeded)
          ll_backend__trace_gen__Port_26 = ll_backend__trace_gen__PortPrime_24;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.maybe_generate_internal_event_code\'/7", (MR_String) "bad path");
              return;
            }
          }
        {
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__ModuleInfo_27);
        }
        {
          ll_backend__code_info__get_pred_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__PredInfo_28);
        }
        {
          ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, &ll_backend__trace_gen__ProcInfo_29);
        }
        ll_backend__trace_gen__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 0)));
        ll_backend__trace_gen__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 1)));
        ll_backend__trace_gen__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 2)));
        ll_backend__trace_gen__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 3)));
        ll_backend__trace_gen__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 4)));
        ll_backend__trace_gen__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 5)));
        ll_backend__trace_gen__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 6)));
        ll_backend__trace_gen__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 7)));
        ll_backend__trace_gen__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_14, (MR_Integer) 8)));
        {
          ll_backend__trace_gen__Var_43 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_27, ll_backend__trace_gen__PredInfo_28, ll_backend__trace_gen__ProcInfo_29, ll_backend__trace_gen__Var_44, ll_backend__trace_gen__Var_52, ll_backend__trace_gen__Port_26);
        }
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_43 == (MR_Integer) 1);
        if (ll_backend__trace_gen__succeeded)
          {
            MR_Word ll_backend__trace_gen__PreDeaths_30;
            MR_Word ll_backend__trace_gen__Context_31;
            MR_Word ll_backend__trace_gen__HideEvent_32;
            MR_Word ll_backend__trace_gen__GoalPath_33;
            MR_Word ll_backend__trace_gen__Var_47;
            MR_Word ll_backend__trace_gen__Var_34;
            MR_Word ll_backend__trace_gen__Var_35;

            {
              hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__trace_gen__GoalInfo_16, &ll_backend__trace_gen__PreDeaths_30);
            }
            {
              ll_backend__trace_gen__Context_31 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__trace_gen__GoalInfo_16);
            }
            {
              ll_backend__trace_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__trace_gen__OutsideGoalInfo_9, (MR_Integer) 8);
            }
            if (ll_backend__trace_gen__succeeded)
              ll_backend__trace_gen__HideEvent_32 = (MR_Integer) 1;
            else
              ll_backend__trace_gen__HideEvent_32 = (MR_Integer) 0;
            {
              ll_backend__trace_gen__GoalPath_33 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__trace_gen__ContainingGoalMap_18, ll_backend__trace_gen__GoalId_17);
            }
            {
              ll_backend__trace_gen__Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ll_backend__trace_gen__Var_47, 0) = ((MR_Box) (ll_backend__trace_gen__GoalPath_33));
              MR_hl_field(MR_mktag(2), ll_backend__trace_gen__Var_47, 1) = ((MR_Box) (ll_backend__trace_gen__PreDeaths_30));
            }
            {
              ll_backend__trace_gen__generate_event_code_13_p_0(ll_backend__trace_gen__Port_26, ll_backend__trace_gen__Var_47, ll_backend__trace_gen__MaybeTraceInfo_13, ll_backend__trace_gen__Context_31, ll_backend__trace_gen__HideEvent_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__Var_34, &ll_backend__trace_gen__Var_35, ll_backend__trace_gen__Code_10, ll_backend__trace_gen__STATE_VARIABLE_CI_0_36, ll_backend__trace_gen__STATE_VARIABLE_CI_37, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38, ll_backend__trace_gen__STATE_VARIABLE_CLD_39);
            }
          }
        else
          {
            {
              *ll_backend__trace_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
            *ll_backend__trace_gen__STATE_VARIABLE_CLD_39 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_38;
            *ll_backend__trace_gen__STATE_VARIABLE_CI_37 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_36;
          }
      }
  }
}

static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_2(
  MR_Box ll_backend__trace_gen__closure_arg,
  MR_Box ll_backend__trace_gen__wrapper_arg_1)
{
  {
    MR_Box ll_backend__trace_gen__wrapper_arg_2;
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;
    MR_Word ll_backend__trace_gen__conv1_Lval_2;

    {
      ll_backend__trace_gen__conv1_Lval_2 = ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1));
    }
    ll_backend__trace_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__trace_gen__conv1_Lval_2));
    return ll_backend__trace_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_1(
  MR_Box ll_backend__trace_gen__closure_arg,
  MR_Box ll_backend__trace_gen__wrapper_arg_1)
{
  {
    MR_Box ll_backend__trace_gen__wrapper_arg_2;
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;
    MR_Word ll_backend__trace_gen__conv0_HeadVar__2_2;

    {
      ll_backend__trace_gen__conv0_HeadVar__2_2 = ll_backend__trace_gen__find_lval_in_var_info_1_f_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1));
    }
    ll_backend__trace_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__2_2));
    return ll_backend__trace_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0(
  MR_Word ll_backend__trace_gen__Port_14,
  MR_Word ll_backend__trace_gen__PortInfo_15,
  MR_Word ll_backend__trace_gen__MaybeTraceInfo_16,
  MR_Word ll_backend__trace_gen__Context_17,
  MR_Word ll_backend__trace_gen__HideEvent_18,
  MR_Word ll_backend__trace_gen__MaybeUserInfo_19,
  MR_Word * ll_backend__trace_gen__Label_20,
  MR_Word * ll_backend__trace_gen__TvarDataMap_21,
  MR_Word * ll_backend__trace_gen__Code_22,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_67,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_68,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_70)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__TypeInfo_140_140;
    MR_Word ll_backend__trace_gen__TypeCtorInfo_141_141;
    MR_Word ll_backend__trace_gen__TypeCtorInfo_142_142;
    MR_Word ll_backend__trace_gen__TypeCtorInfo_146_146;
    MR_Word ll_backend__trace_gen__TypeCtorInfo_149_149;
    MR_Word ll_backend__trace_gen__LiveVars0_25;
    MR_Word ll_backend__trace_gen__LiveVars_26;
    MR_Word ll_backend__trace_gen__Path_27;
    MR_Word ll_backend__trace_gen__TailRecResetCode_28;
    MR_Word ll_backend__trace_gen__VarSet_36;
    MR_Word ll_backend__trace_gen__VarTypes_37;
    MR_Word ll_backend__trace_gen__TvarSet_39;
    MR_Word ll_backend__trace_gen__VarInfoList_40;
    MR_Word ll_backend__trace_gen__ProduceCode_41;
    MR_Integer ll_backend__trace_gen__MaxRegR_42;
    MR_Integer ll_backend__trace_gen__MaxRegF_43;
    MR_Integer ll_backend__trace_gen__MaxTraceRegR0_44;
    MR_Integer ll_backend__trace_gen__MaxTraceRegF0_45;
    MR_Integer ll_backend__trace_gen__MaxTraceRegR_46;
    MR_Integer ll_backend__trace_gen__MaxTraceRegF_47;
    MR_Word ll_backend__trace_gen__VarLocs_48;
    MR_Word ll_backend__trace_gen__ProcInfo_49;
    MR_Word ll_backend__trace_gen__TvarList_50;
    MR_Word ll_backend__trace_gen__VarLvals_51;
    MR_Word ll_backend__trace_gen__TvarLocnSets_52;
    MR_Word ll_backend__trace_gen__TvarLocnSet_53;
    MR_Word ll_backend__trace_gen__TvarLocns_54;
    MR_Word ll_backend__trace_gen__TvarLvals_55;
    MR_Word ll_backend__trace_gen__LiveLvals_56;
    MR_Word ll_backend__trace_gen__LiveLvalSet_57;
    MR_Word ll_backend__trace_gen__VarInfoSet_58;
    MR_Word ll_backend__trace_gen__LayoutLabelInfo_59;
    MR_String ll_backend__trace_gen__TraceStmt0_60;
    MR_String ll_backend__trace_gen__TraceStmt_62;
    MR_Word ll_backend__trace_gen__TraceComponents_65;
    MR_Word ll_backend__trace_gen__TraceCode_66;
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_76_76;
    MR_Word ll_backend__trace_gen__Var_77;
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_80_80;
    MR_String ll_backend__trace_gen__Var_84;
    MR_String ll_backend__trace_gen__Var_85;
    MR_String ll_backend__trace_gen__Var_86;
    MR_String ll_backend__trace_gen__Var_88;
    MR_String ll_backend__trace_gen__Var_90;
    MR_String ll_backend__trace_gen__Var_91;
    MR_String ll_backend__trace_gen__Var_92;
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_94_94;
    MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_96_96;
    MR_Word ll_backend__trace_gen__Var_101;
    MR_Word ll_backend__trace_gen__Var_104;
    MR_Word ll_backend__trace_gen__Var_106;
    MR_Word ll_backend__trace_gen__Var_107;
    MR_Word ll_backend__trace_gen__Var_108;
    MR_Word ll_backend__trace_gen__Var_110;
    MR_Word ll_backend__trace_gen__Var_111;
    MR_Word ll_backend__trace_gen__Var_112;
    MR_Word ll_backend__trace_gen__Var_117;
    MR_Word ll_backend__trace_gen__Var_124;
    MR_Word ll_backend__trace_gen__InstMap_38;
    MR_Word ll_backend__trace_gen__RedoLabel_64;
    MR_Word ll_backend__trace_gen__TraceInfo_63;
    MR_Word ll_backend__trace_gen__Var_97;
    MR_Word ll_backend__trace_gen__Var_125;
    MR_Word ll_backend__trace_gen__Var_126;
    MR_Word ll_backend__trace_gen__Var_127;
    MR_Word ll_backend__trace_gen__Var_128;
    MR_Word ll_backend__trace_gen__Var_129;
    MR_Word ll_backend__trace_gen__Var_130;
    MR_Word ll_backend__trace_gen__Var_131;
    MR_Word ll_backend__trace_gen__Var_132;

    {
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__trace_gen__Label_20, ll_backend__trace_gen__STATE_VARIABLE_CI_0_67, &ll_backend__trace_gen__STATE_VARIABLE_CI_71_71);
    }
    {
      ll_backend__code_loc_dep__get_known_variables_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69, &ll_backend__trace_gen__LiveVars0_25);
    }
    switch (MR_tag((MR_Word) ll_backend__trace_gen__PortInfo_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__trace_gen__LiveVars_26 = ll_backend__trace_gen__LiveVars0_25;
          ll_backend__trace_gen__Path_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__trace_gen__ArgsInfos_29;
          MR_Word ll_backend__trace_gen__OutputVars_30;

          ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 0)));
          ll_backend__trace_gen__ArgsInfos_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
          {
            ll_backend__trace_gen__find_output_vars_3_p_0(ll_backend__trace_gen__ArgsInfos_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__OutputVars_30);
          }
          {
            mercury__list__delete_elems_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[2], ll_backend__trace_gen__LiveVars0_25, ll_backend__trace_gen__OutputVars_30, &ll_backend__trace_gen__LiveVars_26);
          }
          if ((ll_backend__trace_gen__MaybeTraceInfo_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_event_code\'/13", (MR_String) "tailrec call without TraceInfo");
                return;
              }
            }
          else
            {
              MR_Word ll_backend__trace_gen__TailRecTraceInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_16, (MR_Integer) 0)));

              {
                ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(ll_backend__trace_gen__TailRecTraceInfo_31, &ll_backend__trace_gen__TailRecResetCode_28, ll_backend__trace_gen__STATE_VARIABLE_CI_71_71, &ll_backend__trace_gen__STATE_VARIABLE_CI_76_76);
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__trace_gen__TypeCtorInfo_135_135;
          MR_Word ll_backend__trace_gen__PreDeaths_32;
          MR_Word ll_backend__trace_gen__ResumeVars_33;
          MR_Word ll_backend__trace_gen__RealPreDeaths_34;
          MR_Word ll_backend__trace_gen__RealPreDeathList_35;

          ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 0)));
          ll_backend__trace_gen__PreDeaths_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
          {
            ll_backend__trace_gen__ResumeVars_33 = ll_backend__code_loc_dep__current_resume_point_vars_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69);
          }
          ll_backend__trace_gen__TypeCtorInfo_135_135 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            parse_tree__set_of_var__difference_3_p_0(ll_backend__trace_gen__TypeCtorInfo_135_135, ll_backend__trace_gen__PreDeaths_32, ll_backend__trace_gen__ResumeVars_33, &ll_backend__trace_gen__RealPreDeaths_34);
          }
          {
            ll_backend__trace_gen__RealPreDeathList_35 = parse_tree__set_of_var__to_sorted_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_135_135, ll_backend__trace_gen__RealPreDeaths_34);
          }
          {
            mercury__list__delete_elems_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[2], ll_backend__trace_gen__LiveVars0_25, ll_backend__trace_gen__RealPreDeathList_35, &ll_backend__trace_gen__LiveVars_26);
          }
          {
            ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
              ll_backend__trace_gen__LiveVars_26 = ll_backend__trace_gen__LiveVars0_25;
              {
                ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
            }
            break;
          case (MR_Integer) 1:
            {
              ll_backend__trace_gen__Path_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__PortInfo_15, (MR_Integer) 1)));
              ll_backend__trace_gen__LiveVars_26 = ll_backend__trace_gen__LiveVars0_25;
              {
                ll_backend__trace_gen__TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              ll_backend__trace_gen__STATE_VARIABLE_CI_76_76 = ll_backend__trace_gen__STATE_VARIABLE_CI_71_71;
            }
            break;
        }
        break;
    }
    {
      ll_backend__code_info__get_varset_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__VarSet_36);
    }
    {
      ll_backend__code_info__get_vartypes_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__VarTypes_37);
    }
    {
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69, &ll_backend__trace_gen__InstMap_38);
    }
    ll_backend__trace_gen__TypeInfo_140_140 = (MR_Word) &ll_backend__trace_gen_scalar_common_1[3];
    {
      ll_backend__trace_gen__Var_77 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeInfo_140_140);
    }
    {
      ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(ll_backend__trace_gen__LiveVars_26, ll_backend__trace_gen__VarSet_36, ll_backend__trace_gen__VarTypes_37, ll_backend__trace_gen__Var_77, &ll_backend__trace_gen__TvarSet_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__trace_gen__VarInfoList_40, &ll_backend__trace_gen__ProduceCode_41, ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_69, ll_backend__trace_gen__STATE_VARIABLE_CLD_70);
    }
    {
      ll_backend__code_loc_dep__max_reg_in_use_3_p_0(*ll_backend__trace_gen__STATE_VARIABLE_CLD_70, &ll_backend__trace_gen__MaxRegR_42, &ll_backend__trace_gen__MaxRegF_43);
    }
    {
      ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__MaxTraceRegR0_44, &ll_backend__trace_gen__MaxTraceRegF0_45);
    }
    {
      mercury__int__max_3_p_0(ll_backend__trace_gen__MaxRegR_42, ll_backend__trace_gen__MaxTraceRegR0_44, &ll_backend__trace_gen__MaxTraceRegR_46);
    }
    {
      mercury__int__max_3_p_0(ll_backend__trace_gen__MaxRegF_43, ll_backend__trace_gen__MaxTraceRegF0_45, &ll_backend__trace_gen__MaxTraceRegF_47);
    }
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__MaxTraceRegR0_44 == ll_backend__trace_gen__MaxTraceRegR_46);
    if (ll_backend__trace_gen__succeeded)
      ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__MaxTraceRegF0_45 == ll_backend__trace_gen__MaxTraceRegF_47);
    if (ll_backend__trace_gen__succeeded)
      ll_backend__trace_gen__STATE_VARIABLE_CI_80_80 = ll_backend__trace_gen__STATE_VARIABLE_CI_76_76;
    else
      {
        ll_backend__code_info__set_max_regs_in_use_at_trace_4_p_0(ll_backend__trace_gen__MaxTraceRegR_46, ll_backend__trace_gen__MaxTraceRegF_47, ll_backend__trace_gen__STATE_VARIABLE_CI_76_76, &ll_backend__trace_gen__STATE_VARIABLE_CI_80_80);
      }
    {
      ll_backend__code_loc_dep__variable_locations_2_p_0(*ll_backend__trace_gen__STATE_VARIABLE_CLD_70, &ll_backend__trace_gen__VarLocs_48);
    }
    {
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_CI_80_80, &ll_backend__trace_gen__ProcInfo_49);
    }
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__trace_gen__TypeInfo_140_140, ll_backend__trace_gen__TvarSet_39, &ll_backend__trace_gen__TvarList_50);
    }
    {
      ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(ll_backend__trace_gen__TvarList_50, ll_backend__trace_gen__VarLocs_48, ll_backend__trace_gen__ProcInfo_49, ll_backend__trace_gen__TvarDataMap_21);
    }
    ll_backend__trace_gen__TypeCtorInfo_141_141 = (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0;
    ll_backend__trace_gen__TypeCtorInfo_142_142 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      ll_backend__trace_gen__VarLvals_51 = mercury__list__map_2_f_0(ll_backend__trace_gen__TypeCtorInfo_141_141, ll_backend__trace_gen__TypeCtorInfo_142_142, (MR_Word) &ll_backend__trace_gen_scalar_common_2[6], ll_backend__trace_gen__VarInfoList_40);
    }
    {
      mercury__map__values_2_p_0(ll_backend__trace_gen__TypeInfo_140_140, (MR_Word) &ll_backend__trace_gen_scalar_common_1[4], *ll_backend__trace_gen__TvarDataMap_21, &ll_backend__trace_gen__TvarLocnSets_52);
    }
    ll_backend__trace_gen__TypeCtorInfo_146_146 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0;
    {
      ll_backend__trace_gen__TvarLocnSet_53 = mercury__set__union_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_146_146, ll_backend__trace_gen__TvarLocnSets_52);
    }
    {
      mercury__set__to_sorted_list_2_p_0(ll_backend__trace_gen__TypeCtorInfo_146_146, ll_backend__trace_gen__TvarLocnSet_53, &ll_backend__trace_gen__TvarLocns_54);
    }
    {
      ll_backend__trace_gen__TvarLvals_55 = mercury__list__map_2_f_0(ll_backend__trace_gen__TypeCtorInfo_146_146, ll_backend__trace_gen__TypeCtorInfo_142_142, (MR_Word) &ll_backend__trace_gen_scalar_common_2[7], ll_backend__trace_gen__TvarLocns_54);
    }
    {
      mercury__list__append_3_p_1(ll_backend__trace_gen__TypeCtorInfo_142_142, ll_backend__trace_gen__VarLvals_51, ll_backend__trace_gen__TvarLvals_55, &ll_backend__trace_gen__LiveLvals_56);
    }
    {
      ll_backend__trace_gen__LiveLvalSet_57 = mercury__set__list_to_set_1_f_0(ll_backend__trace_gen__TypeCtorInfo_142_142, ll_backend__trace_gen__LiveLvals_56);
    }
    {
      mercury__set__list_to_set_2_p_0(ll_backend__trace_gen__TypeCtorInfo_141_141, ll_backend__trace_gen__VarInfoList_40, &ll_backend__trace_gen__VarInfoSet_58);
    }
    {
      ll_backend__trace_gen__LayoutLabelInfo_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLabelInfo_59, 0) = ((MR_Box) (ll_backend__trace_gen__VarInfoSet_58));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__LayoutLabelInfo_59, 1) = ((MR_Box) (*ll_backend__trace_gen__TvarDataMap_21));
    }
    if ((ll_backend__trace_gen__MaybeUserInfo_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__trace_gen__TraceStmt0_60 = (MR_String) "\t\tMR_EVENT_SYS\n";
    else
      ll_backend__trace_gen__TraceStmt0_60 = (MR_String) "\t\tMR_EVENT_USER\n";
    {
      ll_backend__trace_gen__Var_85 = ll_backend__layout_out__trace_port_to_string_1_f_0(ll_backend__trace_gen__Port_14);
    }
    {
      ll_backend__trace_gen__Var_91 = mdbcomp__goal_path__goal_path_to_string_1_f_0(ll_backend__trace_gen__Path_27);
    }
    {
      ll_backend__trace_gen__Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "> */\n", ll_backend__trace_gen__TraceStmt0_60);
    }
    {
      ll_backend__trace_gen__Var_90 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__Var_91, ll_backend__trace_gen__Var_92);
    }
    {
      ll_backend__trace_gen__Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "path <", ll_backend__trace_gen__Var_90);
    }
    {
      ll_backend__trace_gen__Var_86 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__Var_88);
    }
    {
      ll_backend__trace_gen__Var_84 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__Var_85, ll_backend__trace_gen__Var_86);
    }
    {
      ll_backend__trace_gen__TraceStmt_62 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t/* port ", ll_backend__trace_gen__Var_84);
    }
    {
      ll_backend__code_info__add_trace_layout_for_label_9_p_0(*ll_backend__trace_gen__Label_20, ll_backend__trace_gen__Context_17, ll_backend__trace_gen__Port_14, ll_backend__trace_gen__HideEvent_18, ll_backend__trace_gen__Path_27, ll_backend__trace_gen__MaybeUserInfo_19, ll_backend__trace_gen__LayoutLabelInfo_59, ll_backend__trace_gen__STATE_VARIABLE_CI_80_80, &ll_backend__trace_gen__STATE_VARIABLE_CI_94_94);
    }
    {
      ll_backend__code_info__set_proc_trace_events_3_p_0((MR_Integer) 1, ll_backend__trace_gen__STATE_VARIABLE_CI_94_94, &ll_backend__trace_gen__STATE_VARIABLE_CI_96_96);
    }
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Port_14 == (MR_Integer) 3);
    if (ll_backend__trace_gen__succeeded)
      {
        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__MaybeTraceInfo_16)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__trace_gen__succeeded)
          {
            ll_backend__trace_gen__TraceInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_16, (MR_Integer) 0)));
            ll_backend__trace_gen__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 0)));
            ll_backend__trace_gen__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 1)));
            ll_backend__trace_gen__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 2)));
            ll_backend__trace_gen__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 3)));
            ll_backend__trace_gen__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 4)));
            ll_backend__trace_gen__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 5)));
            ll_backend__trace_gen__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 6)));
            ll_backend__trace_gen__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 7)));
            ll_backend__trace_gen__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_63, (MR_Integer) 8)));
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__Var_97)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__trace_gen__succeeded)
              ll_backend__trace_gen__RedoLabel_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_97, (MR_Integer) 0)));
          }
      }
    if (ll_backend__trace_gen__succeeded)
      {
        {
          ll_backend__code_info__add_trace_layout_for_label_9_p_0(ll_backend__trace_gen__RedoLabel_64, ll_backend__trace_gen__Context_17, (MR_Integer) 2, ll_backend__trace_gen__HideEvent_18, ll_backend__trace_gen__Path_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__trace_gen__LayoutLabelInfo_59, ll_backend__trace_gen__STATE_VARIABLE_CI_96_96, ll_backend__trace_gen__STATE_VARIABLE_CI_68);
        }
      }
    else
      *ll_backend__trace_gen__STATE_VARIABLE_CI_68 = ll_backend__trace_gen__STATE_VARIABLE_CI_96_96;
    {
      ll_backend__trace_gen__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_104, 0) = ((MR_Box) (ll_backend__trace_gen__LiveLvalSet_57));
    }
    {
      ll_backend__trace_gen__Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_101, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_101, 3) = ((MR_Box) (ll_backend__trace_gen__Var_104));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_101, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt_62));
    }
    {
      ll_backend__trace_gen__TraceComponents_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents_65, 0) = ((MR_Box) (ll_backend__trace_gen__Var_101));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ll_backend__trace_gen__TypeCtorInfo_149_149 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__trace_gen__Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_108, 1) = ((MR_Box) (*ll_backend__trace_gen__Label_20));
    }
    {
      ll_backend__trace_gen__Var_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_107, 0) = ((MR_Box) (ll_backend__trace_gen__Var_108));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_107, 1) = ((MR_Box) ((MR_String) "A label to hang trace liveness on"));
    }
    {
      ll_backend__trace_gen__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_117, 0) = ((MR_Box) (*ll_backend__trace_gen__Label_20));
    }
    {
      ll_backend__trace_gen__Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_112, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents_65));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_112, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_112, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_112, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_112, 6) = ((MR_Box) (ll_backend__trace_gen__Var_117));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_112, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_112, 8) = ((MR_Box) (ll_backend__trace_gen__Var_117));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_112, 9) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_112, 10) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      ll_backend__trace_gen__Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_111, 0) = ((MR_Box) (ll_backend__trace_gen__Var_112));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_111, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__trace_gen__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_110, 0) = ((MR_Box) (ll_backend__trace_gen__Var_111));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__trace_gen__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_106, 0) = ((MR_Box) (ll_backend__trace_gen__Var_107));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_106, 1) = ((MR_Box) (ll_backend__trace_gen__Var_110));
    }
    {
      ll_backend__trace_gen__TraceCode_66 = mercury__cord__from_list_1_f_0(ll_backend__trace_gen__TypeCtorInfo_149_149, ll_backend__trace_gen__Var_106);
    }
    {
      ll_backend__trace_gen__Var_124 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_149_149, ll_backend__trace_gen__TailRecResetCode_28, ll_backend__trace_gen__TraceCode_66);
    }
    {
      *ll_backend__trace_gen__Code_22 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_149_149, ll_backend__trace_gen__ProduceCode_41, ll_backend__trace_gen__Var_124);
    }
  }
}

static void MR_CALL 
ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__VarSet_2,
  MR_Word ll_backend__trace_gen__VarTypes_3,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_TVars_7,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9,
  MR_Word * ll_backend__trace_gen__HeadVar__10_10,
  MR_Word ll_backend__trace_gen__HeadVar__11_11,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CLD_13)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__trace_gen__HeadVar__10_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__trace_gen__STATE_VARIABLE_CLD_13 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12;
        *ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9 = ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8;
        *ll_backend__trace_gen__STATE_VARIABLE_TVars_7 = ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6;
      }
    else
      {
        MR_Word ll_backend__trace_gen__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        MR_Word ll_backend__trace_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__VarCode_36;
        MR_Word ll_backend__trace_gen__VarsCode_37;
        MR_Word ll_backend__trace_gen__Type_40;
        MR_Word ll_backend__trace_gen__ModuleInfo_41;
        MR_Word ll_backend__trace_gen__IsDummy_42;
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50;
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51;
        MR_Word ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52;

        {
          hlds__vartypes__lookup_var_type_3_p_0(ll_backend__trace_gen__VarTypes_3, ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__Type_40);
        }
        {
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__trace_gen__HeadVar__11_11, &ll_backend__trace_gen__ModuleInfo_41);
        }
        {
          ll_backend__trace_gen__IsDummy_42 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__trace_gen__ModuleInfo_41, ll_backend__trace_gen__Type_40);
        }
        switch (ll_backend__trace_gen__IsDummy_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                ll_backend__trace_gen__VarCode_36 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_57_57);
              }
              ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50 = ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6;
              ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52 = ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8;
              ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51 = ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__trace_gen__VarInfo_43;
              MR_Word ll_backend__trace_gen__Lval_70;
              MR_Word ll_backend__trace_gen__Type_71;
              MR_String ll_backend__trace_gen__Name_73;
              MR_Word ll_backend__trace_gen__LiveType_75;
              MR_Word ll_backend__trace_gen__TypeVars_76;
              MR_Word ll_backend__trace_gen__Var_78;
              MR_String ll_backend__trace_gen__SearchName_72;

              {
                ll_backend__code_loc_dep__produce_variable_in_reg_or_stack_6_p_0(ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__VarCode_36, &ll_backend__trace_gen__Lval_70, ll_backend__trace_gen__HeadVar__11_11, ll_backend__trace_gen__STATE_VARIABLE_CLD_0_12, &ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51);
              }
              {
                ll_backend__trace_gen__Type_71 = ll_backend__code_info__variable_type_2_f_0(ll_backend__trace_gen__HeadVar__11_11, ll_backend__trace_gen__Var_28);
              }
              {
                ll_backend__trace_gen__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__trace_gen__VarSet_2, ll_backend__trace_gen__Var_28, &ll_backend__trace_gen__SearchName_72);
              }
              if (ll_backend__trace_gen__succeeded)
                ll_backend__trace_gen__Name_73 = ll_backend__trace_gen__SearchName_72;
              else
                ll_backend__trace_gen__Name_73 = (MR_String) "";
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              {
                ll_backend__trace_gen__LiveType_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 0) = ((MR_Box) (ll_backend__trace_gen__Var_28));
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 1) = ((MR_Box) (ll_backend__trace_gen__Name_73));
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 2) = ((MR_Box) (ll_backend__trace_gen__Type_71));
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__LiveType_75, 3) = NULL;
              }
              {
                ll_backend__trace_gen__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_78, 0) = ((MR_Box) (ll_backend__trace_gen__Lval_70));
              }
              {
                ll_backend__trace_gen__VarInfo_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_43, 0) = ((MR_Box) (ll_backend__trace_gen__Var_78));
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_43, 1) = ((MR_Box) (ll_backend__trace_gen__LiveType_75));
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__VarInfo_43, 2) = ((MR_Box) ((MR_String) "trace"));
              }
              {
                parse_tree__prog_type__type_vars_2_p_0(ll_backend__trace_gen__Type_71, &ll_backend__trace_gen__TypeVars_76);
              }
              {
                mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__trace_gen_scalar_common_1[3], ll_backend__trace_gen__TypeVars_76, ll_backend__trace_gen__STATE_VARIABLE_TVars_0_6, &ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50);
              }
              {
                ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52, 0) = ((MR_Box) (ll_backend__trace_gen__VarInfo_43));
                MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52, 1) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_VarInfos_0_8));
              }
            }
            break;
        }
        {
          ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(ll_backend__trace_gen__Vars_29, ll_backend__trace_gen__VarSet_2, ll_backend__trace_gen__VarTypes_3, ll_backend__trace_gen__STATE_VARIABLE_TVars_50_50, ll_backend__trace_gen__STATE_VARIABLE_TVars_7, ll_backend__trace_gen__STATE_VARIABLE_VarInfos_52_52, ll_backend__trace_gen__STATE_VARIABLE_VarInfos_9, &ll_backend__trace_gen__VarsCode_37, ll_backend__trace_gen__HeadVar__11_11, ll_backend__trace_gen__STATE_VARIABLE_CLD_51_51, ll_backend__trace_gen__STATE_VARIABLE_CLD_13);
        }
        {
          *ll_backend__trace_gen__HeadVar__10_10 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_57_57, ll_backend__trace_gen__VarCode_36, ll_backend__trace_gen__VarsCode_37);
        }
      }
  }
}

static void MR_CALL 
ll_backend__trace_gen__find_output_vars_3_p_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__trace_gen__succeeded;

        if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__trace_gen__STATE_VARIABLE_OutputVars_3 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
        else
          {
            MR_Word ll_backend__trace_gen__Arg_7;
            MR_Word ll_backend__trace_gen__Info_8;
            MR_Word ll_backend__trace_gen__ArgsInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__trace_gen__Mode_12;
            MR_Word ll_backend__trace_gen__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16;
            MR_Word ll_backend__trace_gen___ArgLoc_11;

            ll_backend__trace_gen__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_15, (MR_Integer) 0)));
            ll_backend__trace_gen__Info_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_15, (MR_Integer) 1)));
            ll_backend__trace_gen___ArgLoc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_8, (MR_Integer) 0)));
            ll_backend__trace_gen__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_8, (MR_Integer) 1)));
            switch (ll_backend__trace_gen__Mode_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
                break;
              case (MR_Integer) 1:
                {
                  ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16, 0) = ((MR_Box) (ll_backend__trace_gen__Arg_7));
                  MR_hl_field(MR_mktag(1), ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16, 1) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2));
                }
                break;
              case (MR_Integer) 2:
                ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2;
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__trace_gen__next_value_of_HeadVar__1_1 = ll_backend__trace_gen__ArgsInfos_9;
              MR_Word ll_backend__trace_gen__next_value_of_STATE_VARIABLE_OutputVars_0_2 = ll_backend__trace_gen__STATE_VARIABLE_OutputVars_16_16;

              ll_backend__trace_gen__STATE_VARIABLE_OutputVars_0_2 = ll_backend__trace_gen__next_value_of_STATE_VARIABLE_OutputVars_0_2;
              ll_backend__trace_gen__HeadVar__1_1 = ll_backend__trace_gen__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2(
  MR_Box ll_backend__trace_gen__closure_arg)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

    {
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__954__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__trace_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1(
  MR_Box ll_backend__trace_gen__closure_arg)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Box ll_backend__trace_gen__closure = ll_backend__trace_gen__closure_arg;

    {
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__948__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__trace_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(
  MR_Word ll_backend__trace_gen__TraceInfo_5,
  MR_Word * ll_backend__trace_gen__Code_6,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_42,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_43)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__TypeCtorInfo_180_180;
    MR_Word ll_backend__trace_gen__CodeModel_8;
    MR_Word ll_backend__trace_gen__EventNumLval_9;
    MR_Word ll_backend__trace_gen__CallNumLval_10;
    MR_Word ll_backend__trace_gen__CallDepthLval_11;
    MR_String ll_backend__trace_gen__EventNumStr_12;
    MR_String ll_backend__trace_gen__CallNumStr_13;
    MR_String ll_backend__trace_gen__CallDepthStr_14;
    MR_String ll_backend__trace_gen__StdSlotCodeStr_15;
    MR_Word ll_backend__trace_gen__MaybeRedoLabelLval_16;
    MR_Word ll_backend__trace_gen__MaybeFromFullLval_17;
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_18;
    MR_String ll_backend__trace_gen__IoSeqCodeStr_21;
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_22;
    MR_String ll_backend__trace_gen__TrailCodeStr_27;
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_28;
    MR_Word ll_backend__trace_gen__MaxfrCode_30;
    MR_Word ll_backend__trace_gen__TailRecInfo_31;
    MR_Word ll_backend__trace_gen__TailRecLvalCode_34;
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_35;
    MR_String ll_backend__trace_gen__CallTableCodeStr_38;
    MR_String ll_backend__trace_gen__ForeignLangCodeStr_39;
    MR_Word ll_backend__trace_gen__ForeignLangComponents_40;
    MR_Word ll_backend__trace_gen__ForeignLangCode_41;
    MR_String ll_backend__trace_gen__Var_45;
    MR_String ll_backend__trace_gen__Var_46;
    MR_String ll_backend__trace_gen__Var_48;
    MR_String ll_backend__trace_gen__Var_49;
    MR_String ll_backend__trace_gen__Var_51;
    MR_Word ll_backend__trace_gen__Var_53;
    MR_Word ll_backend__trace_gen__Var_58;
    MR_String ll_backend__trace_gen__Var_97;
    MR_String ll_backend__trace_gen__Var_98;
    MR_Word ll_backend__trace_gen__Var_99;
    MR_Word ll_backend__trace_gen__Var_102;
    MR_Word ll_backend__trace_gen__Var_103;
    MR_Word ll_backend__trace_gen__Var_105;
    MR_Word ll_backend__trace_gen__Var_106;
    MR_Word ll_backend__trace_gen__Var_117;
    MR_Word ll_backend__trace_gen__Var_118;
    MR_Word ll_backend__trace_gen__Var_119;
    MR_Word ll_backend__trace_gen__Var_120;
    MR_Word ll_backend__trace_gen__Var_121;
    MR_Word ll_backend__trace_gen__Var_122;
    MR_Word ll_backend__trace_gen__Var_123;
    MR_Word ll_backend__trace_gen__Var_124;
    MR_Word ll_backend__trace_gen__Var_125;
    MR_Word ll_backend__trace_gen__Var_126;
    MR_Word ll_backend__trace_gen__Var_127;
    MR_Word ll_backend__trace_gen__Var_128;
    MR_Word ll_backend__trace_gen__Var_129;
    MR_Word ll_backend__trace_gen__Var_130;
    MR_Word ll_backend__trace_gen__Var_131;
    MR_Word ll_backend__trace_gen__Var_132;
    MR_Word ll_backend__trace_gen__Var_133;
    MR_Word ll_backend__trace_gen__Var_134;
    MR_Word ll_backend__trace_gen__Var_135;
    MR_Word ll_backend__trace_gen__Var_136;
    MR_Word ll_backend__trace_gen__Var_141;

    {
      ll_backend__trace_gen__CodeModel_8 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_42);
    }
    {
      ll_backend__trace_gen__event_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__EventNumLval_9);
    }
    {
      ll_backend__trace_gen__call_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__CallNumLval_10);
    }
    {
      ll_backend__trace_gen__call_depth_slot_2_p_0(ll_backend__trace_gen__CodeModel_8, &ll_backend__trace_gen__CallDepthLval_11);
    }
    {
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__EventNumLval_9, &ll_backend__trace_gen__EventNumStr_12);
    }
    {
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallNumLval_10, &ll_backend__trace_gen__CallNumStr_13);
    }
    {
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_11, &ll_backend__trace_gen__CallDepthStr_14);
    }
    {
      ll_backend__trace_gen__Var_51 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_14, (MR_String) ");\n");
    }
    {
      ll_backend__trace_gen__Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__Var_51);
    }
    {
      ll_backend__trace_gen__Var_48 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallNumStr_13, ll_backend__trace_gen__Var_49);
    }
    {
      ll_backend__trace_gen__Var_46 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__Var_48);
    }
    {
      ll_backend__trace_gen__Var_45 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__EventNumStr_12, ll_backend__trace_gen__Var_46);
    }
    {
      ll_backend__trace_gen__StdSlotCodeStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_trace_tailrec_std_slots(", ll_backend__trace_gen__Var_45);
    }
    ll_backend__trace_gen__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
    ll_backend__trace_gen__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
    ll_backend__trace_gen__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
    ll_backend__trace_gen__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
    ll_backend__trace_gen__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
    ll_backend__trace_gen__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
    ll_backend__trace_gen__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
    ll_backend__trace_gen__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
    ll_backend__trace_gen__MaybeRedoLabelLval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
    {
      ll_backend__trace_gen__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_53, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_53, 1) = ((MR_Box) (ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_53, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeRedoLabelLval_16));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__trace_gen__Var_53, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "redo label in procedure with TAIL event");
    }
    ll_backend__trace_gen__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
    ll_backend__trace_gen__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
    ll_backend__trace_gen__MaybeFromFullLval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
    ll_backend__trace_gen__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
    ll_backend__trace_gen__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
    ll_backend__trace_gen__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
    ll_backend__trace_gen__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
    ll_backend__trace_gen__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
    ll_backend__trace_gen__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
    {
      ll_backend__trace_gen__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_58, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_58, 1) = ((MR_Box) (ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_58, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullLval_17));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(ll_backend__trace_gen__Var_58, (MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "from_full slot in procedure with TAIL event");
    }
    ll_backend__trace_gen__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
    ll_backend__trace_gen__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
    ll_backend__trace_gen__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
    ll_backend__trace_gen__MaybeIoSeqSlot_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
    ll_backend__trace_gen__MaybeTrailLvals_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
    ll_backend__trace_gen__MaybeMaxfrLval_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
    ll_backend__trace_gen__MaybeCallTableLval_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
    ll_backend__trace_gen__TailRecInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
    ll_backend__trace_gen__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
    if ((ll_backend__trace_gen__MaybeIoSeqSlot_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__trace_gen__IoSeqCodeStr_21 = (MR_String) "";
    else
      {
        MR_Word ll_backend__trace_gen__IoSeqLval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_18, (MR_Integer) 0)));
        MR_String ll_backend__trace_gen__IoSeqStr_20;
        MR_String ll_backend__trace_gen__Var_64;

        {
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__IoSeqLval_19, &ll_backend__trace_gen__IoSeqStr_20);
        }
        {
          ll_backend__trace_gen__Var_64 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqStr_20, (MR_String) " = MR_io_tabling_counter;\n");
        }
        {
          ll_backend__trace_gen__IoSeqCodeStr_21 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__Var_64);
        }
      }
    if ((ll_backend__trace_gen__MaybeTrailLvals_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__trace_gen__TrailCodeStr_27 = (MR_String) "";
    else
      {
        MR_Word ll_backend__trace_gen__TrailLval_23;
        MR_Word ll_backend__trace_gen__TicketLval_24;
        MR_String ll_backend__trace_gen__TrailLvalStr_25;
        MR_String ll_backend__trace_gen__TicketLvalStr_26;
        MR_Word ll_backend__trace_gen__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_22, (MR_Integer) 0)));
        MR_String ll_backend__trace_gen__Var_68;
        MR_String ll_backend__trace_gen__Var_69;
        MR_String ll_backend__trace_gen__Var_71;
        MR_String ll_backend__trace_gen__Var_73;

        ll_backend__trace_gen__TrailLval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_66, (MR_Integer) 0)));
        ll_backend__trace_gen__TicketLval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_66, (MR_Integer) 1)));
        {
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TrailLval_23, &ll_backend__trace_gen__TrailLvalStr_25);
        }
        {
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TicketLval_24, &ll_backend__trace_gen__TicketLvalStr_26);
        }
        {
          ll_backend__trace_gen__Var_73 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailLvalStr_25, (MR_String) ");\n");
        }
        {
          ll_backend__trace_gen__Var_71 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_store_ticket(", ll_backend__trace_gen__Var_73);
        }
        {
          ll_backend__trace_gen__Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", ll_backend__trace_gen__Var_71);
        }
        {
          ll_backend__trace_gen__Var_68 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TicketLvalStr_26, ll_backend__trace_gen__Var_69);
        }
        {
          ll_backend__trace_gen__TrailCodeStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mark_ticket_stack(", ll_backend__trace_gen__Var_68);
        }
      }
    if ((ll_backend__trace_gen__MaybeMaxfrLval_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          ll_backend__trace_gen__MaxfrCode_30 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
      }
    else
      {
        MR_Word ll_backend__trace_gen__MaxfrLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_28, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__Var_75;
        MR_Word ll_backend__trace_gen__Var_76;

        {
          ll_backend__trace_gen__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_76, 1) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_29));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_76, 2) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[3]));
        }
        {
          ll_backend__trace_gen__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_75, 0) = ((MR_Box) (ll_backend__trace_gen__Var_76));
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_75, 1) = ((MR_Box) ((MR_String) "save initial maxfr"));
        }
        {
          ll_backend__trace_gen__MaxfrCode_30 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__Var_75)));
        }
      }
    if ((ll_backend__trace_gen__TailRecInfo_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "no tail rec lval");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__trace_gen__TailRecLval_32;
        MR_Word ll_backend__trace_gen__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TailRecInfo_31, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__Var_84;
        MR_Word ll_backend__trace_gen__Var_85;
        MR_Word ll_backend__trace_gen__Var_86;
        MR_Word ll_backend__trace_gen__Var_89;
        MR_Word ll_backend__trace_gen__Var_33;

        ll_backend__trace_gen__TailRecLval_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_83, (MR_Integer) 0)));
        ll_backend__trace_gen__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_83, (MR_Integer) 1)));
        {
          ll_backend__trace_gen__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_89, 0) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_32));
        }
        {
          ll_backend__trace_gen__Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__trace_gen_scalar_common_3[4])));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_86, 2) = ((MR_Box) (ll_backend__trace_gen__Var_89));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_86, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[21])));
        }
        {
          ll_backend__trace_gen__Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_85, 1) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_32));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_85, 2) = ((MR_Box) (ll_backend__trace_gen__Var_86));
        }
        {
          ll_backend__trace_gen__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_84, 0) = ((MR_Box) (ll_backend__trace_gen__Var_85));
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_84, 1) = ((MR_Box) ((MR_String) "increment tail recursion counter"));
        }
        {
          ll_backend__trace_gen__TailRecLvalCode_34 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__Var_84)));
        }
      }
    if ((ll_backend__trace_gen__MaybeCallTableLval_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__trace_gen__CallTableCodeStr_38 = (MR_String) "";
    else
      {
        MR_Word ll_backend__trace_gen__CallTableLval_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_35, (MR_Integer) 0)));
        MR_String ll_backend__trace_gen__CallTableLvalStr_37;
        MR_String ll_backend__trace_gen__Var_95;

        {
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallTableLval_36, &ll_backend__trace_gen__CallTableLvalStr_37);
        }
        {
          ll_backend__trace_gen__Var_95 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallTableLvalStr_37, (MR_String) " = 0;\n");
        }
        {
          ll_backend__trace_gen__CallTableCodeStr_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__Var_95);
        }
      }
    {
      ll_backend__trace_gen__Var_98 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailCodeStr_27, ll_backend__trace_gen__CallTableCodeStr_38);
    }
    {
      ll_backend__trace_gen__Var_97 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqCodeStr_21, ll_backend__trace_gen__Var_98);
    }
    {
      ll_backend__trace_gen__ForeignLangCodeStr_39 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__StdSlotCodeStr_15, ll_backend__trace_gen__Var_97);
    }
    {
      ll_backend__trace_gen__Var_103 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
    {
      ll_backend__trace_gen__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_102, 0) = ((MR_Box) (ll_backend__trace_gen__Var_103));
    }
    {
      ll_backend__trace_gen__Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_99, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_99, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_99, 3) = ((MR_Box) (ll_backend__trace_gen__Var_102));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_99, 4) = ((MR_Box) (ll_backend__trace_gen__ForeignLangCodeStr_39));
    }
    {
      ll_backend__trace_gen__ForeignLangComponents_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ForeignLangComponents_40, 0) = ((MR_Box) (ll_backend__trace_gen__Var_99));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__ForeignLangComponents_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ll_backend__trace_gen__TypeCtorInfo_180_180 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__trace_gen__Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_106, 2) = ((MR_Box) (ll_backend__trace_gen__ForeignLangComponents_40));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_106, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_106, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_106, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_106, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_106, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_106, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_106, 9) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_106, 10) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      ll_backend__trace_gen__Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_105, 0) = ((MR_Box) (ll_backend__trace_gen__Var_106));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_105, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__trace_gen__ForeignLangCode_41 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_180_180, ((MR_Box) (ll_backend__trace_gen__Var_105)));
    }
    {
      ll_backend__trace_gen__Var_117 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_180_180, ll_backend__trace_gen__MaxfrCode_30, ll_backend__trace_gen__TailRecLvalCode_34);
    }
    {
      *ll_backend__trace_gen__Code_6 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_180_180, ll_backend__trace_gen__ForeignLangCode_41, ll_backend__trace_gen__Var_117);
    }
    *ll_backend__trace_gen__STATE_VARIABLE_CI_43 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_42;
  }
}

void MR_CALL 
ll_backend__trace_gen__trace_prepare_for_call_2_p_0(
  MR_Word ll_backend__trace_gen__CI_3,
  MR_Word * ll_backend__trace_gen__TraceCode_4)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__MaybeTraceInfo_5;
    MR_Word ll_backend__trace_gen__CodeModel_6;

    {
      ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__trace_gen__CI_3, &ll_backend__trace_gen__MaybeTraceInfo_5);
    }
    {
      ll_backend__trace_gen__CodeModel_6 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__CI_3);
    }
    if ((ll_backend__trace_gen__MaybeTraceInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__trace_gen__TraceCode_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
      }
    else
      {
        MR_Word ll_backend__trace_gen__TraceInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTraceInfo_5, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__MaybeFromFullSlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 2)));
        MR_Word ll_backend__trace_gen__CallDepthLval_9;
        MR_String ll_backend__trace_gen__CallDepthStr_10;
        MR_String ll_backend__trace_gen__MacroStr_12;
        MR_String ll_backend__trace_gen__ResetStmt_13;
        MR_String ll_backend__trace_gen__Var_14;
        MR_String ll_backend__trace_gen__Var_16;
        MR_Word ll_backend__trace_gen__Var_18;
        MR_Word ll_backend__trace_gen__Var_19;
        MR_Word ll_backend__trace_gen__Var_21;
        MR_Word ll_backend__trace_gen__Var_22;
        MR_Word ll_backend__trace_gen__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 3)));
        MR_Word ll_backend__trace_gen__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 4)));
        MR_Word ll_backend__trace_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 5)));
        MR_Word ll_backend__trace_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 6)));
        MR_Word ll_backend__trace_gen__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 7)));
        MR_Word ll_backend__trace_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_7, (MR_Integer) 8)));

        switch (ll_backend__trace_gen__CodeModel_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              ll_backend__trace_gen__CallDepthLval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[18]);
            }
            break;
          case (MR_Integer) 2:
            {
              ll_backend__trace_gen__CallDepthLval_9 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[19]);
            }
            break;
        }
        {
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_9, &ll_backend__trace_gen__CallDepthStr_10);
        }
        if ((ll_backend__trace_gen__MaybeFromFullSlot_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__trace_gen__MacroStr_12 = (MR_String) "MR_trace_reset_depth_from_full";
        else
          ll_backend__trace_gen__MacroStr_12 = (MR_String) "MR_trace_reset_depth_from_shallow";
        {
          ll_backend__trace_gen__Var_16 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_10, (MR_String) ");\n");
        }
        {
          ll_backend__trace_gen__Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__trace_gen__Var_16);
        }
        {
          ll_backend__trace_gen__ResetStmt_13 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__MacroStr_12, ll_backend__trace_gen__Var_14);
        }
        {
          ll_backend__trace_gen__Var_22 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
        {
          ll_backend__trace_gen__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_21, 0) = ((MR_Box) (ll_backend__trace_gen__Var_22));
        }
        {
          ll_backend__trace_gen__Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_19, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_19, 2) = ((MR_Box) (ll_backend__trace_gen__Var_21));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_19, 3) = ((MR_Box) (ll_backend__trace_gen__ResetStmt_13));
        }
        {
          ll_backend__trace_gen__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_18, 0) = ((MR_Box) (ll_backend__trace_gen__Var_19));
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_18, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          *ll_backend__trace_gen__TraceCode_4 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__trace_gen__Var_18)));
        }
      }
  }
}

void MR_CALL 
ll_backend__trace_gen__generate_slot_fill_code_3_p_0(
  MR_Word ll_backend__trace_gen__CI_4,
  MR_Word ll_backend__trace_gen__TraceInfo_5,
  MR_Word * ll_backend__trace_gen__TraceCode_6)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__TypeCtorInfo_233_233;
    MR_Word ll_backend__trace_gen__TypeCtorInfo_234_234;
    MR_Word ll_backend__trace_gen__CodeModel_7;
    MR_Word ll_backend__trace_gen__MaybeFromFullSlot_8;
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_9;
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_10;
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_11;
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_12;
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_13;
    MR_Word ll_backend__trace_gen__MaybeRedoLabel_14;
    MR_Word ll_backend__trace_gen__EventNumLval_15;
    MR_Word ll_backend__trace_gen__CallNumLval_16;
    MR_Word ll_backend__trace_gen__CallDepthLval_17;
    MR_String ll_backend__trace_gen__EventNumStr_18;
    MR_String ll_backend__trace_gen__CallNumStr_19;
    MR_String ll_backend__trace_gen__CallDepthStr_20;
    MR_Word ll_backend__trace_gen__MaybeLayoutLabel_25;
    MR_Word ll_backend__trace_gen__MaybeHashDefLabel_26;
    MR_String ll_backend__trace_gen__TraceStmt1_35;
    MR_Word ll_backend__trace_gen__TraceComponents1_36;
    MR_Word ll_backend__trace_gen__TraceCode1_37;
    MR_Word ll_backend__trace_gen__TraceCode2_39;
    MR_Word ll_backend__trace_gen__TraceCode3_45;
    MR_Word ll_backend__trace_gen__TraceCode4_50;
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51;
    MR_String ll_backend__trace_gen__Var_53;
    MR_String ll_backend__trace_gen__Var_54;
    MR_String ll_backend__trace_gen__Var_56;
    MR_String ll_backend__trace_gen__Var_57;
    MR_String ll_backend__trace_gen__Var_59;
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61;
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66;
    MR_String ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72;
    MR_Word ll_backend__trace_gen__Var_98;
    MR_Word ll_backend__trace_gen__Var_101;
    MR_Word ll_backend__trace_gen__Var_102;
    MR_Word ll_backend__trace_gen__Var_104;
    MR_Word ll_backend__trace_gen__Var_105;
    MR_Word ll_backend__trace_gen__Var_175;
    MR_Word ll_backend__trace_gen__Var_176;
    MR_Word ll_backend__trace_gen__Var_177;
    MR_Word ll_backend__trace_gen__Var_178;

    {
      ll_backend__trace_gen__CodeModel_7 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__CI_4);
    }
    ll_backend__trace_gen__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 0)));
    ll_backend__trace_gen__Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 1)));
    ll_backend__trace_gen__MaybeFromFullSlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 2)));
    ll_backend__trace_gen__MaybeIoSeqSlot_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 3)));
    ll_backend__trace_gen__MaybeTrailLvals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 4)));
    ll_backend__trace_gen__MaybeMaxfrLval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 5)));
    ll_backend__trace_gen__MaybeCallTableLval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 6)));
    ll_backend__trace_gen__MaybeTailRecInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 7)));
    ll_backend__trace_gen__MaybeRedoLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_5, (MR_Integer) 8)));
    {
      ll_backend__trace_gen__event_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__EventNumLval_15);
    }
    {
      ll_backend__trace_gen__call_num_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__CallNumLval_16);
    }
    {
      ll_backend__trace_gen__call_depth_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__CallDepthLval_17);
    }
    {
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__EventNumLval_15, &ll_backend__trace_gen__EventNumStr_18);
    }
    {
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallNumLval_16, &ll_backend__trace_gen__CallNumStr_19);
    }
    {
      ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallDepthLval_17, &ll_backend__trace_gen__CallDepthStr_20);
    }
    {
      ll_backend__trace_gen__Var_59 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_20, (MR_String) ");\n");
    }
    {
      ll_backend__trace_gen__Var_57 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__Var_59);
    }
    {
      ll_backend__trace_gen__Var_56 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallNumStr_19, ll_backend__trace_gen__Var_57);
    }
    {
      ll_backend__trace_gen__Var_54 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__trace_gen__Var_56);
    }
    {
      ll_backend__trace_gen__Var_53 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__EventNumStr_18, ll_backend__trace_gen__Var_54);
    }
    {
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_trace_fill_std_slots(", ll_backend__trace_gen__Var_53);
    }
    if ((ll_backend__trace_gen__MaybeRedoLabel_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__trace_gen__MaybeLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__trace_gen__MaybeHashDefLabel_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51;
      }
    else
      {
        MR_Word ll_backend__trace_gen__RedoLayoutLval_23;
        MR_String ll_backend__trace_gen__RedoLayoutStr_24;
        MR_String ll_backend__trace_gen__Var_62;
        MR_String ll_backend__trace_gen__Var_64;

        {
          ll_backend__trace_gen__redo_layout_slot_2_p_0(ll_backend__trace_gen__CodeModel_7, &ll_backend__trace_gen__RedoLayoutLval_23);
        }
        {
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__RedoLayoutLval_23, &ll_backend__trace_gen__RedoLayoutStr_24);
        }
        {
          ll_backend__trace_gen__Var_64 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__RedoLayoutStr_24, (MR_String) " = (MR_Word) (const MR_Word *) MR_HASH_DEF_LABEL_LAYOUT;\n");
        }
        {
          ll_backend__trace_gen__Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__Var_64);
        }
        {
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_51_51, ll_backend__trace_gen__Var_62);
        }
        ll_backend__trace_gen__MaybeLayoutLabel_25 = ll_backend__trace_gen__MaybeRedoLabel_14;
        ll_backend__trace_gen__MaybeHashDefLabel_26 = ll_backend__trace_gen__MaybeRedoLabel_14;
      }
    if ((ll_backend__trace_gen__MaybeIoSeqSlot_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61;
    else
      {
        MR_Word ll_backend__trace_gen__IoSeqLval_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_9, (MR_Integer) 0)));
        MR_String ll_backend__trace_gen__IoSeqStr_28;
        MR_String ll_backend__trace_gen__Var_67;
        MR_String ll_backend__trace_gen__Var_69;

        {
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__IoSeqLval_27, &ll_backend__trace_gen__IoSeqStr_28);
        }
        {
          ll_backend__trace_gen__Var_69 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__IoSeqStr_28, (MR_String) " = MR_io_tabling_counter;\n");
        }
        {
          ll_backend__trace_gen__Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__Var_69);
        }
        {
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_61_61, ll_backend__trace_gen__Var_67);
        }
      }
    if ((ll_backend__trace_gen__MaybeTrailLvals_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66;
    else
      {
        MR_Word ll_backend__trace_gen__TrailLval_29;
        MR_Word ll_backend__trace_gen__TicketLval_30;
        MR_String ll_backend__trace_gen__TrailLvalStr_31;
        MR_String ll_backend__trace_gen__TicketLvalStr_32;
        MR_Word ll_backend__trace_gen__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_10, (MR_Integer) 0)));
        MR_String ll_backend__trace_gen__Var_73;
        MR_String ll_backend__trace_gen__Var_75;
        MR_String ll_backend__trace_gen__Var_76;
        MR_String ll_backend__trace_gen__Var_78;
        MR_String ll_backend__trace_gen__Var_80;

        ll_backend__trace_gen__TrailLval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_71, (MR_Integer) 0)));
        ll_backend__trace_gen__TicketLval_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_71, (MR_Integer) 1)));
        {
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TrailLval_29, &ll_backend__trace_gen__TrailLvalStr_31);
        }
        {
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TicketLval_30, &ll_backend__trace_gen__TicketLvalStr_32);
        }
        {
          ll_backend__trace_gen__Var_80 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TrailLvalStr_31, (MR_String) ");\n");
        }
        {
          ll_backend__trace_gen__Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_store_ticket(", ll_backend__trace_gen__Var_80);
        }
        {
          ll_backend__trace_gen__Var_76 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", ll_backend__trace_gen__Var_78);
        }
        {
          ll_backend__trace_gen__Var_75 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TicketLvalStr_32, ll_backend__trace_gen__Var_76);
        }
        {
          ll_backend__trace_gen__Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mark_ticket_stack(", ll_backend__trace_gen__Var_75);
        }
        {
          ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_66_66, ll_backend__trace_gen__Var_73);
        }
      }
    if ((ll_backend__trace_gen__MaybeFromFullSlot_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__trace_gen__TraceStmt1_35 = ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72;
    else
      {
        MR_Word ll_backend__trace_gen__CallFromFullSlot_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlot_8, (MR_Integer) 0)));
        MR_String ll_backend__trace_gen__CallFromFullSlotStr_34;
        MR_String ll_backend__trace_gen__Var_84;
        MR_String ll_backend__trace_gen__Var_85;
        MR_String ll_backend__trace_gen__Var_87;
        MR_String ll_backend__trace_gen__Var_89;
        MR_String ll_backend__trace_gen__Var_90;
        MR_String ll_backend__trace_gen__Var_92;
        MR_String ll_backend__trace_gen__Var_94;

        {
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallFromFullSlot_33, &ll_backend__trace_gen__CallFromFullSlotStr_34);
        }
        {
          ll_backend__trace_gen__Var_94 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallDepthStr_20, (MR_String) " = MR_trace_call_depth;\n\t\t}\n");
        }
        {
          ll_backend__trace_gen__Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__Var_94);
        }
        {
          ll_backend__trace_gen__Var_90 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t} else {\n", ll_backend__trace_gen__Var_92);
        }
        {
          ll_backend__trace_gen__Var_89 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__STATE_VARIABLE_CodeStr_72_72, ll_backend__trace_gen__Var_90);
        }
        {
          ll_backend__trace_gen__Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif (MR_trace_from_full) {\n", ll_backend__trace_gen__Var_89);
        }
        {
          ll_backend__trace_gen__Var_85 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_from_full;\n", ll_backend__trace_gen__Var_87);
        }
        {
          ll_backend__trace_gen__Var_84 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallFromFullSlotStr_34, ll_backend__trace_gen__Var_85);
        }
        {
          ll_backend__trace_gen__TraceStmt1_35 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__Var_84);
        }
      }
    ll_backend__trace_gen__TypeCtorInfo_233_233 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
    {
      ll_backend__trace_gen__Var_102 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
    }
    {
      ll_backend__trace_gen__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_101, 0) = ((MR_Box) (ll_backend__trace_gen__Var_102));
    }
    {
      ll_backend__trace_gen__Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_98, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_98, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_98, 3) = ((MR_Box) (ll_backend__trace_gen__Var_101));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_98, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt1_35));
    }
    {
      ll_backend__trace_gen__TraceComponents1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents1_36, 0) = ((MR_Box) (ll_backend__trace_gen__Var_98));
      MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents1_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ll_backend__trace_gen__TypeCtorInfo_234_234 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__trace_gen__Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_105, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents1_36));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_105, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_105, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_105, 6) = ((MR_Box) (ll_backend__trace_gen__MaybeLayoutLabel_25));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_105, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_105, 8) = ((MR_Box) (ll_backend__trace_gen__MaybeHashDefLabel_26));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_105, 9) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_105, 10) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      ll_backend__trace_gen__Var_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_104, 0) = ((MR_Box) (ll_backend__trace_gen__Var_105));
      MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_104, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__trace_gen__TraceCode1_37 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__Var_104)));
    }
    if ((ll_backend__trace_gen__MaybeMaxfrLval_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__trace_gen__TraceCode2_39 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
    else
      {
        MR_Word ll_backend__trace_gen__MaxfrLval_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_11, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__Var_114;
        MR_Word ll_backend__trace_gen__Var_115;

        {
          ll_backend__trace_gen__Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_115, 1) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_38));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_115, 2) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[3]));
        }
        {
          ll_backend__trace_gen__Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_114, 0) = ((MR_Box) (ll_backend__trace_gen__Var_115));
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_114, 1) = ((MR_Box) ((MR_String) "save initial maxfr"));
        }
        {
          ll_backend__trace_gen__TraceCode2_39 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__Var_114)));
        }
      }
    if ((ll_backend__trace_gen__MaybeTailRecInfo_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__trace_gen__TraceCode3_45 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
    else
      {
        MR_Word ll_backend__trace_gen__TailRecLval_40;
        MR_String ll_backend__trace_gen__TailRecLvalStr_42;
        MR_String ll_backend__trace_gen__TraceStmt3_43;
        MR_Word ll_backend__trace_gen__TraceComponents3_44;
        MR_Word ll_backend__trace_gen__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_13, (MR_Integer) 0)));
        MR_String ll_backend__trace_gen__Var_121;
        MR_String ll_backend__trace_gen__Var_123;
        MR_String ll_backend__trace_gen__Var_124;
        MR_String ll_backend__trace_gen__Var_126;
        MR_String ll_backend__trace_gen__Var_128;
        MR_String ll_backend__trace_gen__Var_130;
        MR_String ll_backend__trace_gen__Var_132;
        MR_Word ll_backend__trace_gen__Var_136;
        MR_Word ll_backend__trace_gen__Var_139;
        MR_Word ll_backend__trace_gen__Var_140;
        MR_Word ll_backend__trace_gen__Var_142;
        MR_Word ll_backend__trace_gen__Var_143;
        MR_Word ll_backend__trace_gen___TailRecLabel_41;

        ll_backend__trace_gen__TailRecLval_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_119, (MR_Integer) 0)));
        ll_backend__trace_gen___TailRecLabel_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_119, (MR_Integer) 1)));
        {
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__TailRecLval_40, &ll_backend__trace_gen__TailRecLvalStr_42);
        }
        {
          ll_backend__trace_gen__Var_132 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TailRecLvalStr_42, (MR_String) " = 0;\n\t\t}");
        }
        {
          ll_backend__trace_gen__Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__Var_132);
        }
        {
          ll_backend__trace_gen__Var_128 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t} else {", ll_backend__trace_gen__Var_130);
        }
        {
          ll_backend__trace_gen__Var_126 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\tMR_trace_tailrec_have_reused_frames = MR_FALSE;\n", ll_backend__trace_gen__Var_128);
        }
        {
          ll_backend__trace_gen__Var_124 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_tailrec_num_reused_frames;\n", ll_backend__trace_gen__Var_126);
        }
        {
          ll_backend__trace_gen__Var_123 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__TailRecLvalStr_42, ll_backend__trace_gen__Var_124);
        }
        {
          ll_backend__trace_gen__Var_121 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", ll_backend__trace_gen__Var_123);
        }
        {
          ll_backend__trace_gen__TraceStmt3_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif (MR_trace_tailrec_have_reused_frames) {\n", ll_backend__trace_gen__Var_121);
        }
        {
          ll_backend__trace_gen__Var_140 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
        }
        {
          ll_backend__trace_gen__Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_139, 0) = ((MR_Box) (ll_backend__trace_gen__Var_140));
        }
        {
          ll_backend__trace_gen__Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_136, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_136, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_136, 3) = ((MR_Box) (ll_backend__trace_gen__Var_139));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_136, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt3_43));
        }
        {
          ll_backend__trace_gen__TraceComponents3_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents3_44, 0) = ((MR_Box) (ll_backend__trace_gen__Var_136));
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents3_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__trace_gen__Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_143, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents3_44));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_143, 3) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_143, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_143, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_143, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_143, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_143, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_143, 9) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_143, 10) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          ll_backend__trace_gen__Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_142, 0) = ((MR_Box) (ll_backend__trace_gen__Var_143));
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_142, 1) = ((MR_Box) ((MR_String) "initialize tail recursion count"));
        }
        {
          ll_backend__trace_gen__TraceCode3_45 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__Var_142)));
        }
      }
    if ((ll_backend__trace_gen__MaybeCallTableLval_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__trace_gen__TraceCode4_50 = mercury__cord__empty_0_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234);
      }
    else
      {
        MR_Word ll_backend__trace_gen__CallTableLval_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_12, (MR_Integer) 0)));
        MR_String ll_backend__trace_gen__CallTableLvalStr_47;
        MR_String ll_backend__trace_gen__TraceStmt4_48;
        MR_Word ll_backend__trace_gen__TraceComponents4_49;
        MR_String ll_backend__trace_gen__Var_155;
        MR_Word ll_backend__trace_gen__Var_157;
        MR_Word ll_backend__trace_gen__Var_160;
        MR_Word ll_backend__trace_gen__Var_161;
        MR_Word ll_backend__trace_gen__Var_163;
        MR_Word ll_backend__trace_gen__Var_164;

        {
          ll_backend__trace_gen__stackref_to_string_2_p_0(ll_backend__trace_gen__CallTableLval_46, &ll_backend__trace_gen__CallTableLvalStr_47);
        }
        {
          ll_backend__trace_gen__Var_155 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__CallTableLvalStr_47, (MR_String) " = 0;\n");
        }
        {
          ll_backend__trace_gen__TraceStmt4_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", ll_backend__trace_gen__Var_155);
        }
        {
          ll_backend__trace_gen__Var_161 = mercury__set__init_0_f_0(ll_backend__trace_gen__TypeCtorInfo_233_233);
        }
        {
          ll_backend__trace_gen__Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__Var_160, 0) = ((MR_Box) (ll_backend__trace_gen__Var_161));
        }
        {
          ll_backend__trace_gen__Var_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_157, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_157, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_157, 3) = ((MR_Box) (ll_backend__trace_gen__Var_160));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_157, 4) = ((MR_Box) (ll_backend__trace_gen__TraceStmt4_48));
        }
        {
          ll_backend__trace_gen__TraceComponents4_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents4_49, 0) = ((MR_Box) (ll_backend__trace_gen__Var_157));
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__TraceComponents4_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__trace_gen__Var_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_164, 2) = ((MR_Box) (ll_backend__trace_gen__TraceComponents4_49));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_164, 3) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_164, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_164, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_164, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_164, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_164, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_164, 9) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Var_164, 10) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          ll_backend__trace_gen__Var_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_163, 0) = ((MR_Box) (ll_backend__trace_gen__Var_164));
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_163, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          ll_backend__trace_gen__TraceCode4_50 = mercury__cord__singleton_1_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ((MR_Box) (ll_backend__trace_gen__Var_163)));
        }
      }
    {
      ll_backend__trace_gen__Var_176 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode3_45, ll_backend__trace_gen__TraceCode4_50);
    }
    {
      ll_backend__trace_gen__Var_175 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode2_39, ll_backend__trace_gen__Var_176);
    }
    {
      *ll_backend__trace_gen__TraceCode_6 = mercury__cord__f_43_43_2_f_0(ll_backend__trace_gen__TypeCtorInfo_234_234, ll_backend__trace_gen__TraceCode1_37, ll_backend__trace_gen__Var_175);
    }
  }
}

static void MR_CALL 
ll_backend__trace_gen__redo_layout_slot_2_p_0(
  MR_Word ll_backend__trace_gen__CodeModel_3,
  MR_Word * ll_backend__trace_gen__RedoLayoutSlot_4)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    switch (ll_backend__trace_gen__CodeModel_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.redo_layout_slot\'/2", (MR_String) "attempt to access redo layout slot for det or semi procedure");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *ll_backend__trace_gen__RedoLayoutSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[20]);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__trace_gen__call_depth_slot_2_p_0(
  MR_Word ll_backend__trace_gen__CodeModel_3,
  MR_Word * ll_backend__trace_gen__CallDepthSlot_4)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    switch (ll_backend__trace_gen__CodeModel_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *ll_backend__trace_gen__CallDepthSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[18]);
        }
        break;
      case (MR_Integer) 2:
        {
          *ll_backend__trace_gen__CallDepthSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[19]);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__trace_gen__call_num_slot_2_p_0(
  MR_Word ll_backend__trace_gen__CodeModel_3,
  MR_Word * ll_backend__trace_gen__CallNumSlot_4)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    switch (ll_backend__trace_gen__CodeModel_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *ll_backend__trace_gen__CallNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[16]);
        }
        break;
      case (MR_Integer) 2:
        {
          *ll_backend__trace_gen__CallNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[17]);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__trace_gen__event_num_slot_2_p_0(
  MR_Word ll_backend__trace_gen__CodeModel_3,
  MR_Word * ll_backend__trace_gen__EventNumSlot_4)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    switch (ll_backend__trace_gen__CodeModel_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *ll_backend__trace_gen__EventNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[14]);
        }
        break;
      case (MR_Integer) 2:
        {
          *ll_backend__trace_gen__EventNumSlot_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[15]);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__trace_gen__stackref_to_string_2_p_0(
  MR_Word ll_backend__trace_gen__Lval_3,
  MR_String * ll_backend__trace_gen__LvalStr_4)
{
  {
    MR_bool ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Integer ll_backend__trace_gen__Slot_5;

    if (ll_backend__trace_gen__succeeded)
      {
        ll_backend__trace_gen__Slot_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
        {
          MR_String ll_backend__trace_gen__SlotString_6;
          MR_String ll_backend__trace_gen__Var_10;

          {
            mercury__string__int_to_string_2_p_0(ll_backend__trace_gen__Slot_5, &ll_backend__trace_gen__SlotString_6);
          }
          {
            ll_backend__trace_gen__Var_10 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__SlotString_6, (MR_String) ")");
          }
          {
            *ll_backend__trace_gen__LvalStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_sv(", ll_backend__trace_gen__Var_10);
          }
        }
      }
    else
      {
        MR_Integer ll_backend__trace_gen__Slot_22;

        ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (ll_backend__trace_gen__succeeded)
          {
            ll_backend__trace_gen__Slot_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
            {
              MR_String ll_backend__trace_gen__Var_13;
              MR_String ll_backend__trace_gen__SlotString_21;

              {
                mercury__string__int_to_string_2_p_0(ll_backend__trace_gen__Slot_22, &ll_backend__trace_gen__SlotString_21);
              }
              {
                ll_backend__trace_gen__Var_13 = mercury__string__f_43_43_2_f_0(ll_backend__trace_gen__SlotString_21, (MR_String) ")");
              }
              {
                *ll_backend__trace_gen__LvalStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_fv(", ll_backend__trace_gen__Var_13);
              }
            }
          }
        else
          {
            MR_Word ll_backend__trace_gen__Var_7;
            MR_Integer ll_backend__trace_gen__Var_8;

            ll_backend__trace_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__trace_gen__Lval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (ll_backend__trace_gen__succeeded)
              {
                ll_backend__trace_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 1)));
                ll_backend__trace_gen__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__trace_gen__Lval_3, (MR_Integer) 2)));
                {
                  mercury__require__sorry_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.stackref_to_string\'/2", (MR_String) "double-width stack slot");
                  return;
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.stackref_to_string\'/2", (MR_String) "non-stack lval");
                  return;
                }
              }
          }
      }
  }
}

void MR_CALL 
ll_backend__trace_gen__trace_setup_9_p_0(
  MR_Word ll_backend__trace_gen__ModuleInfo_10,
  MR_Word ll_backend__trace_gen__PredInfo_11,
  MR_Word ll_backend__trace_gen__ProcInfo_12,
  MR_Word ll_backend__trace_gen__Globals_13,
  MR_Word ll_backend__trace_gen__MaybeTailRecLabel_14,
  MR_Word * ll_backend__trace_gen__TraceSlotInfo_15,
  MR_Word * ll_backend__trace_gen__TraceInfo_16,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_CI_0_59,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_CI_60)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__CodeModel_18;
    MR_Word ll_backend__trace_gen__TraceLevel_19;
    MR_Word ll_backend__trace_gen__TraceSuppress_20;
    MR_Word ll_backend__trace_gen__TraceTableIo_21;
    MR_Word ll_backend__trace_gen__TraceRedo_22;
    MR_Word ll_backend__trace_gen__MaybeRedoLayoutLabel_25;
    MR_Word ll_backend__trace_gen__HasFromFullSlot_26;
    MR_Word ll_backend__trace_gen__StackId_27;
    MR_Word ll_backend__trace_gen__MaybeFromFullSlot_29;
    MR_Word ll_backend__trace_gen__MaybeFromFullSlotLval_31;
    MR_Word ll_backend__trace_gen__MaybeIoSeqSlot_33;
    MR_Word ll_backend__trace_gen__MaybeIoSeqLval_35;
    MR_Word ll_backend__trace_gen__UseTrail_36;
    MR_Word ll_backend__trace_gen__MaybeTrailSlot_39;
    MR_Word ll_backend__trace_gen__MaybeTrailLvals_42;
    MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_43;
    MR_Word ll_backend__trace_gen__MaybeMaxfrSlot_45;
    MR_Word ll_backend__trace_gen__MaybeMaxfrLval_47;
    MR_Word ll_backend__trace_gen__MaybeTailRecSlot_50;
    MR_Word ll_backend__trace_gen__MaybeTailRecInfo_52;
    MR_Word ll_backend__trace_gen__MaybeCallTableTip_53;
    MR_Word ll_backend__trace_gen__MaybeCallTableSlot_56;
    MR_Word ll_backend__trace_gen__MaybeCallTableLval_58;
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64;
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66;
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68;
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73;
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75;
    MR_Integer ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78;

    {
      ll_backend__trace_gen__CodeModel_18 = ll_backend__code_info__get_proc_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_CI_0_59);
    }
    {
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_13, &ll_backend__trace_gen__TraceLevel_19);
    }
    {
      libs__globals__get_trace_suppress_2_p_0(ll_backend__trace_gen__Globals_13, &ll_backend__trace_gen__TraceSuppress_20);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_13, (MR_Integer) 133, &ll_backend__trace_gen__TraceTableIo_21);
    }
    {
      ll_backend__trace_gen__TraceRedo_22 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_10, ll_backend__trace_gen__PredInfo_11, ll_backend__trace_gen__ProcInfo_12, ll_backend__trace_gen__TraceLevel_19, ll_backend__trace_gen__TraceSuppress_20, (MR_Integer) 2);
    }
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__TraceRedo_22 == (MR_Integer) 1);
    if (ll_backend__trace_gen__succeeded)
      ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CodeModel_18 == (MR_Integer) 2);
    if (ll_backend__trace_gen__succeeded)
      {
        MR_Word ll_backend__trace_gen__RedoLayoutLabel_24;

        {
          ll_backend__code_info__get_next_label_3_p_0(&ll_backend__trace_gen__RedoLayoutLabel_24, ll_backend__trace_gen__STATE_VARIABLE_CI_0_59, ll_backend__trace_gen__STATE_VARIABLE_CI_60);
        }
        {
          ll_backend__trace_gen__MaybeRedoLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeRedoLayoutLabel_25, 0) = ((MR_Box) (ll_backend__trace_gen__RedoLayoutLabel_24));
        }
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64 = (MR_Integer) 5;
      }
    else
      {
        ll_backend__trace_gen__MaybeRedoLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64 = (MR_Integer) 4;
        *ll_backend__trace_gen__STATE_VARIABLE_CI_60 = ll_backend__trace_gen__STATE_VARIABLE_CI_0_59;
      }
    {
      ll_backend__trace_gen__HasFromFullSlot_26 = libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(ll_backend__trace_gen__ModuleInfo_10, ll_backend__trace_gen__PredInfo_11, ll_backend__trace_gen__ProcInfo_12, ll_backend__trace_gen__TraceLevel_19);
    }
    {
      ll_backend__trace_gen__StackId_27 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__trace_gen__CodeModel_18);
    }
    switch (ll_backend__trace_gen__HasFromFullSlot_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__trace_gen__MaybeFromFullSlot_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__trace_gen__MaybeFromFullSlotLval_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__trace_gen__FromFullSlotLval_30;

          {
            ll_backend__trace_gen__MaybeFromFullSlot_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlot_29, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64));
          }
          {
            ll_backend__trace_gen__FromFullSlotLval_30 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64);
          }
          {
            ll_backend__trace_gen__MaybeFromFullSlotLval_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeFromFullSlotLval_31, 0) = ((MR_Box) (ll_backend__trace_gen__FromFullSlotLval_30));
          }
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_64_64 + (MR_Integer) 1);
        }
        break;
    }
    switch (ll_backend__trace_gen__TraceTableIo_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__trace_gen__MaybeIoSeqSlot_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__trace_gen__MaybeIoSeqLval_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__trace_gen__IoSeqLval_34;

          {
            ll_backend__trace_gen__MaybeIoSeqSlot_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqSlot_33, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66));
          }
          {
            ll_backend__trace_gen__IoSeqLval_34 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66);
          }
          {
            ll_backend__trace_gen__MaybeIoSeqLval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeIoSeqLval_35, 0) = ((MR_Box) (ll_backend__trace_gen__IoSeqLval_34));
          }
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_66_66 + (MR_Integer) 1);
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_13, (MR_Integer) 228, &ll_backend__trace_gen__UseTrail_36);
    }
    switch (ll_backend__trace_gen__UseTrail_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__trace_gen__MaybeTrailSlot_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__trace_gen__MaybeTrailLvals_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__trace_gen__TicketSlot_38 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 + (MR_Integer) 1);
          MR_Word ll_backend__trace_gen__TrailLval_40;
          MR_Word ll_backend__trace_gen__TicketLval_41;
          MR_Word ll_backend__trace_gen__Var_72;

          {
            ll_backend__trace_gen__MaybeTrailSlot_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailSlot_39, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68));
          }
          {
            ll_backend__trace_gen__TrailLval_40 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68);
          }
          {
            ll_backend__trace_gen__TicketLval_41 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__TicketSlot_38);
          }
          {
            ll_backend__trace_gen__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_72, 0) = ((MR_Box) (ll_backend__trace_gen__TrailLval_40));
            MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_72, 1) = ((MR_Box) (ll_backend__trace_gen__TicketLval_41));
          }
          {
            ll_backend__trace_gen__MaybeTrailLvals_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTrailLvals_42, 0) = ((MR_Box) (ll_backend__trace_gen__Var_72));
          }
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_68_68 + (MR_Integer) 2);
        }
        break;
    }
    {
      hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__trace_gen__ProcInfo_12, &ll_backend__trace_gen__NeedsMaxfrSlot_43);
    }
    switch (ll_backend__trace_gen__NeedsMaxfrSlot_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          ll_backend__trace_gen__MaybeMaxfrSlot_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__trace_gen__MaybeMaxfrLval_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__trace_gen__MaxfrLval_46;

          {
            ll_backend__trace_gen__MaybeMaxfrSlot_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrSlot_45, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73));
          }
          {
            ll_backend__trace_gen__MaxfrLval_46 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73);
          }
          {
            ll_backend__trace_gen__MaybeMaxfrLval_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeMaxfrLval_47, 0) = ((MR_Box) (ll_backend__trace_gen__MaxfrLval_46));
          }
          ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_73_73 + (MR_Integer) 1);
        }
        break;
    }
    if ((ll_backend__trace_gen__MaybeTailRecLabel_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__trace_gen__MaybeTailRecSlot_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__trace_gen__MaybeTailRecInfo_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78 = ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75;
      }
    else
      {
        MR_Word ll_backend__trace_gen__TailRecLabel_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecLabel_14, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__TailRecLval_51;
        MR_Word ll_backend__trace_gen__Var_77;

        {
          ll_backend__trace_gen__MaybeTailRecSlot_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecSlot_50, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75));
        }
        {
          ll_backend__trace_gen__TailRecLval_51 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75);
        }
        {
          ll_backend__trace_gen__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_77, 0) = ((MR_Box) (ll_backend__trace_gen__TailRecLval_51));
          MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_77, 1) = ((MR_Box) (ll_backend__trace_gen__TailRecLabel_48));
        }
        {
          ll_backend__trace_gen__MaybeTailRecInfo_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeTailRecInfo_52, 0) = ((MR_Box) (ll_backend__trace_gen__Var_77));
        }
        ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78 = (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_75_75 + (MR_Integer) 1);
      }
    {
      hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__trace_gen__ProcInfo_12, &ll_backend__trace_gen__MaybeCallTableTip_53);
    }
    if ((ll_backend__trace_gen__MaybeCallTableTip_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__trace_gen__MaybeCallTableSlot_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__trace_gen__MaybeCallTableLval_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ll_backend__trace_gen__CallTableLval_57;

        {
          ll_backend__trace_gen__MaybeCallTableSlot_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableSlot_56, 0) = ((MR_Box) (ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78));
        }
        {
          ll_backend__trace_gen__CallTableLval_57 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__trace_gen__StackId_27, ll_backend__trace_gen__STATE_VARIABLE_NextSlot_78_78);
        }
        {
          ll_backend__trace_gen__MaybeCallTableLval_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableLval_58, 0) = ((MR_Box) (ll_backend__trace_gen__CallTableLval_57));
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__trace_gen__TraceSlotInfo_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullSlot_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__trace_gen__MaybeIoSeqSlot_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__trace_gen__MaybeTrailSlot_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeMaxfrSlot_45));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__trace_gen__MaybeCallTableSlot_56));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__trace_gen__MaybeTailRecSlot_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__trace_gen__TraceInfo_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__trace_gen__TraceLevel_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__trace_gen__TraceSuppress_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__trace_gen__MaybeFromFullSlotLval_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__trace_gen__MaybeIoSeqLval_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__trace_gen__MaybeTrailLvals_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__trace_gen__MaybeMaxfrLval_47));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__trace_gen__MaybeCallTableLval_58));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__trace_gen__MaybeTailRecInfo_52));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__trace_gen__MaybeRedoLayoutLabel_25));
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__trace_reserved_slots_6_p_0(
  MR_Word ll_backend__trace_gen__ModuleInfo_7,
  MR_Word ll_backend__trace_gen__PredInfo_8,
  MR_Word ll_backend__trace_gen__ProcInfo_9,
  MR_Word ll_backend__trace_gen__Globals_10,
  MR_Integer * ll_backend__trace_gen__ReservedSlots_11,
  MR_Word * ll_backend__trace_gen__MaybeTableVarInfo_12)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__TraceLevel_13;
    MR_Word ll_backend__trace_gen__TraceSuppress_14;
    MR_Word ll_backend__trace_gen__TraceTableIo_15;
    MR_Word ll_backend__trace_gen__FixedSlots_16;

    {
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_10, &ll_backend__trace_gen__TraceLevel_13);
    }
    {
      libs__globals__get_trace_suppress_2_p_0(ll_backend__trace_gen__Globals_10, &ll_backend__trace_gen__TraceSuppress_14);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_10, (MR_Integer) 133, &ll_backend__trace_gen__TraceTableIo_15);
    }
    {
      ll_backend__trace_gen__FixedSlots_16 = libs__trace_params__eff_trace_level_needs_fixed_slots_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13);
    }
    switch (ll_backend__trace_gen__FixedSlots_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__trace_gen__ReservedSlots_11 = (MR_Integer) 0;
          *ll_backend__trace_gen__MaybeTableVarInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__trace_gen__RedoLayout_18;
          MR_Integer ll_backend__trace_gen__FromFull_19;
          MR_Integer ll_backend__trace_gen__IoSeq_20;
          MR_Word ll_backend__trace_gen__UseTrail_21;
          MR_Integer ll_backend__trace_gen__Trail_22;
          MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_23;
          MR_Integer ll_backend__trace_gen__Maxfr_24;
          MR_Word ll_backend__trace_gen__TailCallEvents_25;
          MR_Integer ll_backend__trace_gen__TailRec_26;
          MR_Integer ll_backend__trace_gen__ReservedSlots0_27;
          MR_Word ll_backend__trace_gen__MaybeCallTableVar_28;
          MR_Integer ll_backend__trace_gen__Var_36;
          MR_Integer ll_backend__trace_gen__Var_37;
          MR_Integer ll_backend__trace_gen__Var_38;
          MR_Integer ll_backend__trace_gen__Var_39;
          MR_Integer ll_backend__trace_gen__Var_40;
          MR_Word ll_backend__trace_gen__Var_31;
          MR_Word ll_backend__trace_gen__Var_32;
          MR_Word ll_backend__trace_gen__Var_33;
          MR_Word ll_backend__trace_gen__Var_34;

          {
            ll_backend__trace_gen__Var_31 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__trace_gen__ProcInfo_9);
          }
          ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_31 == (MR_Integer) 2);
          if (ll_backend__trace_gen__succeeded)
            {
              ll_backend__trace_gen__Var_33 = (MR_Integer) 2;
              {
                ll_backend__trace_gen__Var_32 = libs__trace_params__eff_trace_needs_port_6_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13, ll_backend__trace_gen__TraceSuppress_14, ll_backend__trace_gen__Var_33);
              }
              ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_32 == (MR_Integer) 1);
            }
          if (ll_backend__trace_gen__succeeded)
            ll_backend__trace_gen__RedoLayout_18 = (MR_Integer) 1;
          else
            ll_backend__trace_gen__RedoLayout_18 = (MR_Integer) 0;
          {
            ll_backend__trace_gen__Var_34 = libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo_8, ll_backend__trace_gen__ProcInfo_9, ll_backend__trace_gen__TraceLevel_13);
          }
          ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_34 == (MR_Integer) 1);
          if (ll_backend__trace_gen__succeeded)
            ll_backend__trace_gen__FromFull_19 = (MR_Integer) 1;
          else
            ll_backend__trace_gen__FromFull_19 = (MR_Integer) 0;
          switch (ll_backend__trace_gen__TraceTableIo_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ll_backend__trace_gen__IoSeq_20 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              ll_backend__trace_gen__IoSeq_20 = (MR_Integer) 1;
              break;
          }
          {
            libs__globals__lookup_bool_option_3_p_0(ll_backend__trace_gen__Globals_10, (MR_Integer) 228, &ll_backend__trace_gen__UseTrail_21);
          }
          switch (ll_backend__trace_gen__UseTrail_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ll_backend__trace_gen__Trail_22 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              ll_backend__trace_gen__Trail_22 = (MR_Integer) 2;
              break;
          }
          {
            hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__NeedsMaxfrSlot_23);
          }
          switch (ll_backend__trace_gen__NeedsMaxfrSlot_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              ll_backend__trace_gen__Maxfr_24 = (MR_Integer) 0;
              break;
            case (MR_Integer) 0:
              ll_backend__trace_gen__Maxfr_24 = (MR_Integer) 1;
              break;
          }
          {
            hlds__hlds_pred__proc_info_get_has_tail_call_event_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__TailCallEvents_25);
          }
          switch (ll_backend__trace_gen__TailCallEvents_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              ll_backend__trace_gen__TailRec_26 = (MR_Integer) 0;
              break;
            case (MR_Integer) 0:
              ll_backend__trace_gen__TailRec_26 = (MR_Integer) 1;
              break;
          }
          ll_backend__trace_gen__Var_40 = ((MR_Integer) 3 + ll_backend__trace_gen__RedoLayout_18);
          ll_backend__trace_gen__Var_39 = (ll_backend__trace_gen__Var_40 + ll_backend__trace_gen__FromFull_19);
          ll_backend__trace_gen__Var_38 = (ll_backend__trace_gen__Var_39 + ll_backend__trace_gen__IoSeq_20);
          ll_backend__trace_gen__Var_37 = (ll_backend__trace_gen__Var_38 + ll_backend__trace_gen__Trail_22);
          ll_backend__trace_gen__Var_36 = (ll_backend__trace_gen__Var_37 + ll_backend__trace_gen__Maxfr_24);
          ll_backend__trace_gen__ReservedSlots0_27 = (ll_backend__trace_gen__Var_36 + ll_backend__trace_gen__TailRec_26);
          {
            hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ll_backend__trace_gen__ProcInfo_9, &ll_backend__trace_gen__MaybeCallTableVar_28);
          }
          if ((ll_backend__trace_gen__MaybeCallTableVar_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *ll_backend__trace_gen__ReservedSlots_11 = ll_backend__trace_gen__ReservedSlots0_27;
              *ll_backend__trace_gen__MaybeTableVarInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          else
            {
              MR_Word ll_backend__trace_gen__CallTableVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__MaybeCallTableVar_28, (MR_Integer) 0)));
              MR_Word ll_backend__trace_gen__Var_42;

              *ll_backend__trace_gen__ReservedSlots_11 = (ll_backend__trace_gen__ReservedSlots0_27 + (MR_Integer) 1);
              {
                ll_backend__trace_gen__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_42, 0) = ((MR_Box) (ll_backend__trace_gen__CallTableVar_29));
                MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Var_42, 1) = ((MR_Box) (*ll_backend__trace_gen__ReservedSlots_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__trace_gen__MaybeTableVarInfo_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__Var_42));
              }
            }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__do_we_need_maxfr_slot_5_p_0(
  MR_Word ll_backend__trace_gen__Globals_6,
  MR_Word ll_backend__trace_gen__ModuleInfo_7,
  MR_Word ll_backend__trace_gen__PredInfo0_8,
  MR_Word ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_15)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__TraceLevel_10;
    MR_Word ll_backend__trace_gen__CodeModel_11;
    MR_Word ll_backend__trace_gen__NeedsMaxfrSlot_13;
    MR_Word ll_backend__trace_gen__Goal_12;
    MR_Word ll_backend__trace_gen__Var_16;
    MR_Word ll_backend__trace_gen__Var_17;
    MR_Word ll_backend__trace_gen__Var_19;

    {
      libs__globals__get_trace_level_2_p_0(ll_backend__trace_gen__Globals_6, &ll_backend__trace_gen__TraceLevel_10);
    }
    {
      ll_backend__trace_gen__CodeModel_11 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14);
    }
    {
      ll_backend__trace_gen__Var_16 = libs__trace_params__eff_trace_level_is_none_4_f_0(ll_backend__trace_gen__ModuleInfo_7, ll_backend__trace_gen__PredInfo0_8, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, ll_backend__trace_gen__TraceLevel_10);
    }
    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_16 == (MR_Integer) 0);
    if (ll_backend__trace_gen__succeeded)
      {
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__CodeModel_11 == (MR_Integer) 2);
        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
        if (ll_backend__trace_gen__succeeded)
          {
            {
              hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, &ll_backend__trace_gen__Goal_12);
            }
            ll_backend__trace_gen__Var_17 = (MR_Integer) 1;
            {
              ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__trace_gen__Goal_12, &ll_backend__trace_gen__Var_19);
            }
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_17 == ll_backend__trace_gen__Var_19);
          }
      }
    if (ll_backend__trace_gen__succeeded)
      ll_backend__trace_gen__NeedsMaxfrSlot_13 = (MR_Integer) 0;
    else
      ll_backend__trace_gen__NeedsMaxfrSlot_13 = (MR_Integer) 1;
    {
      hlds__hlds_pred__proc_info_set_needs_maxfr_slot_3_p_0(ll_backend__trace_gen__NeedsMaxfrSlot_13, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_0_14, ll_backend__trace_gen__STATE_VARIABLE_ProcInfo_15);
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__trace_fail_vars_3_p_0(
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
  MR_Word ll_backend__trace_gen__ProcInfo_5,
  MR_Word * ll_backend__trace_gen__FailVars_6)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__HeadVars_7;
    MR_Word ll_backend__trace_gen__Modes_8;
    MR_Word ll_backend__trace_gen__ArgInfos_9;
    MR_Word ll_backend__trace_gen__VarTypes_10;
    MR_Word ll_backend__trace_gen__Insts_11;
    MR_Word ll_backend__trace_gen__FailVarsList_12;

    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__HeadVars_7);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__Modes_8);
    }
    {
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__ArgInfos_9);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__trace_gen__ProcInfo_5, &ll_backend__trace_gen__VarTypes_10);
    }
    {
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Modes_8, &ll_backend__trace_gen__Insts_11);
    }
    {
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen__build_fail_vars_6_p_0(ll_backend__trace_gen__HeadVars_7, ll_backend__trace_gen__Insts_11, ll_backend__trace_gen__ArgInfos_9, ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__VarTypes_10, &ll_backend__trace_gen__FailVarsList_12);
    }
    if (ll_backend__trace_gen__succeeded)
      {
        {
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__trace_gen__FailVarsList_12, ll_backend__trace_gen__FailVars_6);
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.trace_gen", (MR_String) "predicate \140ll_backend.trace_gen.trace_fail_vars\'/3", (MR_String) "length mismatch");
          return;
        }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen__build_fail_vars_6_p_0(
  MR_Word ll_backend__trace_gen__HeadVar__1_1,
  MR_Word ll_backend__trace_gen__HeadVar__2_2,
  MR_Word ll_backend__trace_gen__HeadVar__3_3,
  MR_Word ll_backend__trace_gen__ModuleInfo_4,
  MR_Word ll_backend__trace_gen__VarTypes_5,
  MR_Word * ll_backend__trace_gen__HeadVar__6_6)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    if ((ll_backend__trace_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ll_backend__trace_gen__succeeded)
          {
            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ll_backend__trace_gen__succeeded)
              {
                *ll_backend__trace_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ll_backend__trace_gen__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        MR_Word ll_backend__trace_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__trace_gen__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__trace_gen__Inst_11;
        MR_Word ll_backend__trace_gen__Insts_12;
        MR_Word ll_backend__trace_gen__Info_13;
        MR_Word ll_backend__trace_gen__Infos_14;
        MR_Word ll_backend__trace_gen__FailVars0_18;
        MR_Word ll_backend__trace_gen__ArgMode_20;
        MR_Word ll_backend__trace_gen___Loc_19;
        MR_Word ll_backend__trace_gen__Type_21;
        MR_Word ll_backend__trace_gen__Var_22;

        ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__trace_gen__succeeded)
          {
            ll_backend__trace_gen__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__trace_gen__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__2_2, (MR_Integer) 1)));
            ll_backend__trace_gen__succeeded = ((MR_tag((MR_Word) ll_backend__trace_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__trace_gen__succeeded)
              {
                ll_backend__trace_gen__Info_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 0)));
                ll_backend__trace_gen__Infos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__trace_gen__HeadVar__3_3, (MR_Integer) 1)));
                {
                  ll_backend__trace_gen__succeeded = ll_backend__trace_gen__build_fail_vars_6_p_0(ll_backend__trace_gen__Vars_10, ll_backend__trace_gen__Insts_12, ll_backend__trace_gen__Infos_14, ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__VarTypes_5, &ll_backend__trace_gen__FailVars0_18);
                }
                if (ll_backend__trace_gen__succeeded)
                  {
                    ll_backend__trace_gen___Loc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_13, (MR_Integer) 0)));
                    ll_backend__trace_gen__ArgMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__Info_13, (MR_Integer) 1)));
                    ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__ArgMode_20 == (MR_Integer) 0);
                    if (ll_backend__trace_gen__succeeded)
                      {
                        {
                          ll_backend__trace_gen__succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Inst_11);
                        }
                        ll_backend__trace_gen__succeeded = !(ll_backend__trace_gen__succeeded);
                        if (ll_backend__trace_gen__succeeded)
                          {
                            {
                              hlds__vartypes__lookup_var_type_3_p_0(ll_backend__trace_gen__VarTypes_5, ll_backend__trace_gen__Var_9, &ll_backend__trace_gen__Type_21);
                            }
                            {
                              ll_backend__trace_gen__Var_22 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__trace_gen__ModuleInfo_4, ll_backend__trace_gen__Type_21);
                            }
                            ll_backend__trace_gen__succeeded = (ll_backend__trace_gen__Var_22 == (MR_Integer) 1);
                          }
                      }
                    if (ll_backend__trace_gen__succeeded)
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__trace_gen__HeadVar__6_6 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__trace_gen__Var_9));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__trace_gen__FailVars0_18));
                      }
                    else
                      *ll_backend__trace_gen__HeadVar__6_6 = ll_backend__trace_gen__FailVars0_18;
                    ll_backend__trace_gen__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return ll_backend__trace_gen__succeeded;
  }
}

void MR_CALL 
ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(
  MR_Word ll_backend__trace_gen__TraceInfo_3,
  MR_Word * ll_backend__trace_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;
    MR_Word ll_backend__trace_gen__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 0)));
    MR_Word ll_backend__trace_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 1)));
    MR_Word ll_backend__trace_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 2)));
    MR_Word ll_backend__trace_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 3)));
    MR_Word ll_backend__trace_gen__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 4)));
    MR_Word ll_backend__trace_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 5)));
    MR_Word ll_backend__trace_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 6)));
    MR_Word ll_backend__trace_gen__Var_11;

    *ll_backend__trace_gen__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 7)));
    ll_backend__trace_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__trace_gen__TraceInfo_3, (MR_Integer) 8)));
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0_10001(
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    {
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____external_event_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
    return ll_backend__trace_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0_10001(
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

    {
      ll_backend__trace_gen____Compare____external_event_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0_10001(
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    {
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____external_trace_port_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
    return ll_backend__trace_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0_10001(
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

    {
      ll_backend__trace_gen____Compare____external_trace_port_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0_10001(
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    {
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____negation_end_port_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
    return ll_backend__trace_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0_10001(
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

    {
      ll_backend__trace_gen____Compare____negation_end_port_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0_10001(
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    {
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____trace_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
    return ll_backend__trace_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0_10001(
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

    {
      ll_backend__trace_gen____Compare____trace_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0_10001(
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    {
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____trace_port_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
    return ll_backend__trace_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0_10001(
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

    {
      ll_backend__trace_gen____Compare____trace_port_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001(
  MR_Box ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__trace_gen__succeeded;

    {
      ll_backend__trace_gen__succeeded = ll_backend__trace_gen____Unify____trace_slot_info_0_0(((MR_Word) ll_backend__trace_gen__wrapper_arg_1), ((MR_Word) ll_backend__trace_gen__wrapper_arg_2));
    }
    return ll_backend__trace_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001(
  MR_Box * ll_backend__trace_gen__wrapper_arg_1,
  MR_Box ll_backend__trace_gen__wrapper_arg_2,
  MR_Box ll_backend__trace_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__trace_gen__conv0_HeadVar__1_1;

    {
      ll_backend__trace_gen____Compare____trace_slot_info_0_0(&ll_backend__trace_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__trace_gen__wrapper_arg_2), ((MR_Word) ll_backend__trace_gen__wrapper_arg_3));
    }
    *ll_backend__trace_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__trace_gen__conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__trace_gen__init(void)
{
}

void mercury__ll_backend__trace_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_external_event_info_0);
	MR_register_type_ctor_info(&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_external_trace_port_0);
	MR_register_type_ctor_info(&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_negation_end_port_0);
	MR_register_type_ctor_info(&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_info_0);
	MR_register_type_ctor_info(&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_port_info_0);
	MR_register_type_ctor_info(&ll_backend__trace_gen__ll_backend__trace_gen__type_ctor_info_trace_slot_info_0);
}

void mercury__ll_backend__trace_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__trace_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.trace_gen. */
