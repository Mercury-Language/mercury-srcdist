/*
** Automatically generated from `trace_gen.m'
** by the Mercury compiler,
** version rotd-2020-10-02
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


// :- module ll_backend.trace_gen.
// :- implementation.

/*
INIT mercury__ll_backend__trace_gen__init
ENDINIT
*/

#include "ll_backend.trace_gen.mih"


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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
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
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "ll_backend.llds_out.llds_out_util.mih"




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

static const MR_DuArgLocn ll_backend__trace_gen__ll_backend__trace_gen__field_locns_trace_info_0_0[9];

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
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__1004__1_2_p_0(
  MR_Word MaybeFromFullLval_17,
  MR_Word HeadVar__2_60);

static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__998__1_2_p_0(
  MR_Word MaybeRedoLabelLval_16,
  MR_Word HeadVar__2_56);

static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1241__1_2_p_0(
  MR_Word Lval_8,
  MR_Word HeadVar__2_19);

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_var_info_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0(
  MR_Word Port_14,
  MR_Word PortInfo_15,
  MR_Word MaybeTraceInfo_16,
  MR_Word Context_17,
  MR_Word HideEvent_18,
  MR_Word MaybeUserInfo_19,
  MR_Word * Label_20,
  MR_Word * TvarDataMap_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CI_0_67,
  MR_Word * STATE_VARIABLE_CI_68,
  MR_Word STATE_VARIABLE_CLD_0_69,
  MR_Word * STATE_VARIABLE_CLD_70);

static void MR_CALL 
ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word VarTypes_3,
  MR_Word STATE_VARIABLE_TVars_0_6,
  MR_Word * STATE_VARIABLE_TVars_7,
  MR_Word STATE_VARIABLE_VarInfos_0_8,
  MR_Word * STATE_VARIABLE_VarInfos_9,
  MR_Word * HeadVar__10_10,
  MR_Word HeadVar__11_11,
  MR_Word STATE_VARIABLE_CLD_0_12,
  MR_Word * STATE_VARIABLE_CLD_13);

static void MR_CALL 
ll_backend__trace_gen__find_output_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_OutputVars_0_2,
  MR_Word * STATE_VARIABLE_OutputVars_3);

static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(
  MR_Word TraceInfo_5,
  MR_Word * Code_6,
  MR_Word STATE_VARIABLE_CI_0_42,
  MR_Word * STATE_VARIABLE_CI_43);

static void MR_CALL 
ll_backend__trace_gen__redo_layout_slot_2_p_0(
  MR_Word CodeModel_3,
  MR_Word * RedoLayoutSlot_4);

static void MR_CALL 
ll_backend__trace_gen__call_depth_slot_2_p_0(
  MR_Word CodeModel_3,
  MR_Word * CallDepthSlot_4);

static void MR_CALL 
ll_backend__trace_gen__call_num_slot_2_p_0(
  MR_Word CodeModel_3,
  MR_Word * CallNumSlot_4);

static void MR_CALL 
ll_backend__trace_gen__event_num_slot_2_p_0(
  MR_Word CodeModel_3,
  MR_Word * EventNumSlot_4);

static void MR_CALL 
ll_backend__trace_gen__stackref_to_string_2_p_0(
  MR_Word Lval_3,
  MR_String * LvalStr_4);

static MR_bool MR_CALL 
ll_backend__trace_gen__build_fail_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word ModuleInfo_4,
  MR_Word VarTypes_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_1[22][2];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_2[8][3];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_3[6][1];

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_4[5][5];


/* sealed */ struct ll_backend__trace_gen__vector_common_type_5_0_s {
  const MR_Word ll_backend__trace_gen__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct ll_backend__trace_gen__vector_common_type_5_0_s ll_backend__trace_gen_vector_common_5[4];



static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_1[22][2] = {
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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_2[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_2[2]))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_2[3]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_2[4]))),
    ((MR_Box) ((MR_String) "set up deep redo event"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_2[5]))),
    ((MR_Box) ((MR_String) "set up shallow redo event"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__trace_gen_scalar_common_3[5])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__trace_gen_scalar_common_3[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__trace_gen_scalar_common_3[2])))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[2])),
    ((MR_Box) (ll_backend__trace_gen__generate_event_code_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[3])),
    ((MR_Box) (ll_backend__trace_gen__generate_event_code_13_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__trace_gen_scalar_common_3[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
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
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
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


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__trace_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_layout_locn_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__cord__ti_cord_1ll_backend__llds__type_ctor_info_instruction_0)
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0 = {
  (MR_String) "external_event_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_external_event_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_external_event_info_0_0
};

static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_external_event_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____external_event_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____external_event_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "external_event_info",
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_external_event_info_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_external_event_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_event_info_0
};

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_0 = {
  (MR_String) "external_port_call",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_1 = {
  (MR_String) "external_port_exit",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_2 = {
  (MR_String) "external_port_fail",
  INT32_C(2)
};

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_external_trace_port_0_3 = {
  (MR_String) "external_port_tailrec_call",
  INT32_C(3)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__trace_gen____Unify____external_trace_port_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____external_trace_port_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "external_trace_port",
  {     ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_external_trace_port_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_external_trace_port_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_external_trace_port_0
};

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_0 = {
  (MR_String) "neg_success",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__enum_functor_desc_negation_end_port_0_1 = {
  (MR_String) "neg_failure",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__trace_gen____Unify____negation_end_port_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____negation_end_port_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "negation_end_port",
  {     ll_backend__trace_gen__ll_backend__trace_gen__enum_name_ordered_negation_end_port_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__enum_value_ordered_negation_end_port_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_negation_end_port_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_item_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__trace_gen__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_label_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0)
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

static const MR_DuArgLocn ll_backend__trace_gen__ll_backend__trace_gen__field_locns_trace_info_0_0[9] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
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
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0 = {
  (MR_String) "trace_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_info_0_0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_info_0_0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_locns_trace_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_info_0_0
};

static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____trace_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____trace_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "trace_info",
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_info_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_info_0
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_0 = {
  (MR_String) "port_info_external",
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

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__trace_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_pred__type_ctor_info_arg_info_0)
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_1 = {
  (MR_String) "port_info_tailrec_call",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&ll_backend__trace_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_2 = {
  (MR_String) "port_info_internal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_3 = {
  (MR_String) "port_info_negation_end",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
};

static const MR_DuFunctorDesc ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_port_info_0_4 = {
  (MR_String) "port_info_user",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_port_info_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_port_info_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____trace_port_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____trace_port_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "trace_port_info",
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_port_info_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_port_info_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_port_info_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__trace_gen__maybe__ti_maybe_1builtin__type_ctor_info_int_0)
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
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__trace_gen__ll_backend__trace_gen__field_types_trace_slot_info_0_0,
  ll_backend__trace_gen__ll_backend__trace_gen__field_names_trace_slot_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0[1] = {
  &ll_backend__trace_gen__ll_backend__trace_gen__du_functor_desc_trace_slot_info_0_0
};

static const MR_DuPtagLayout ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__trace_gen__ll_backend__trace_gen__du_stag_ordered_trace_slot_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001)),
  ((MR_Box) (ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001)),
  (MR_String) "ll_backend.trace_gen",
  (MR_String) "trace_slot_info",
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_name_ordered_trace_slot_info_0 },
  {     ll_backend__trace_gen__ll_backend__trace_gen__du_ptag_ordered_trace_slot_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__trace_gen__ll_backend__trace_gen__functor_number_map_trace_slot_info_0
};

static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__1004__1_2_p_0(
  MR_Word MaybeFromFullLval_17,
  MR_Word HeadVar__2_60)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[1]), ((MR_Box) (MaybeFromFullLval_17)), ((MR_Box) (HeadVar__2_60)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__998__1_2_p_0(
  MR_Word MaybeRedoLabelLval_16,
  MR_Word HeadVar__2_56)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[0]), ((MR_Box) (MaybeRedoLabelLval_16)), ((MR_Box) (HeadVar__2_56)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1241__1_2_p_0(
  MR_Word Lval_8,
  MR_Word HeadVar__2_19)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__llds____Unify____lval_0_0(Lval_8, HeadVar__2_19);
    return succeeded;
  }
}

void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[10]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[10]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[10]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[10]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[10]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[10]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[10]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[10]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[10]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[10]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[10]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_66 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_67 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_66 == CastY_67);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
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
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_14;

                  mdbcomp__goal_path____Compare____forward_goal_path_0_0(&SubResult1_14, Var_78, ArgY1_13);
                  succeeded = (SubResult1_14 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_14;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (Var_77)), ((MR_Box) (ArgY2_16)));
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
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_35;

                  mdbcomp__goal_path____Compare____forward_goal_path_0_0(&SubResult1_35, Var_75, ArgY1_34);
                  succeeded = (SubResult1_35 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_35;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Var_74)), ((MR_Box) (ArgY2_37)));
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
                MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                          MR_Word ArgY1_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mdbcomp__goal_path____Compare____forward_goal_path_0_0(HeadVar__1_1, Var_76, ArgY1_52);
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
                MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                          MR_Word ArgY1_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mdbcomp__goal_path____Compare____forward_goal_path_0_0(HeadVar__1_1, Var_79, ArgY1_65);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_23_23;
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ArgX1_5, ArgY1_6);
              if (succeeded)
              {
                TypeInfo_23_23 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[9]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_20_20;
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ArgX1_9, ArgY1_10);
              if (succeeded)
              {
                TypeInfo_20_20 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[8]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ArgX1_13, ArgY1_14);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(ArgX1_15, ArgY1_16);
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
ll_backend__trace_gen____Compare____trace_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word SubResult1_6;

      libs__trace_params____Compare____trace_level_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[6]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[1]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[1]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[7]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word TypeInfo_30_30;
      MR_Word TypeInfo_31_31;
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));

      succeeded = libs__trace_params____Unify____trace_level_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeCtorInfo_24_24 = (MR_Word) (&libs__trace_params__libs__trace_params__type_ctor_info_trace_suppress_items_0);
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_24_24, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_25_25 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_26_26 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_27_27 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[6]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_28_28 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_29_29 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_30_30 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[7]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_31_31 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[0]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    }
                  }
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

void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0(
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

MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0(
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

MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      ll_backend__llds____Compare____label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = ll_backend__llds____Unify____label_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&ll_backend__trace_gen_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&ll_backend__trace_gen_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Lval_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
      Lval_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    else
      Lval_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    return Lval_2;
  }
}

static MR_Word MR_CALL 
ll_backend__trace_gen__find_lval_in_var_info_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word LayoutLocn_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) LayoutLocn_3)) == (MR_Integer) 0))
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LayoutLocn_3, (MR_Integer) 0))));
    else
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LayoutLocn_3, (MR_Integer) 0))));
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__trace_gen__IntroducedFrom__pred__maybe_setup_redo_event__1241__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__trace_gen__maybe_setup_redo_event_2_p_0(
  MR_Word TraceInfo_3,
  MR_Word * Code_4)
{
  {
    MR_bool succeeded;
    MR_Word TraceRedoLabel_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_3, (MR_Integer) 8))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_3, (MR_Integer) 2))));

    if ((TraceRedoLabel_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *Code_4 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    else
    if ((Var_30 == (MR_Word) ((MR_Unsigned) 0U)))
      *Code_4 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[11])));
    else
    {
      MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[4]));
        MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ll_backend__trace_gen__maybe_setup_redo_event_2_p_0_1));
        MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Lval_8));
        MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[21])));
      }
      mercury__require__expect_3_p_0(Var_16, (MR_String) "predicate \140ll_backend.trace_gen.maybe_setup_redo_event\'/2", (MR_String) "from-full flag not stored in expected slot");
      *Code_4 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__trace_gen_scalar_common_1[12])));
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__generate_tailrec_event_code_10_p_0(
  MR_Word TraceInfo_11,
  MR_Word ArgsInfos_12,
  MR_Word GoalId_13,
  MR_Word Context_14,
  MR_Word * Code_15,
  MR_Word * TailRecLabel_16,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30,
  MR_Word STATE_VARIABLE_CLD_0_31,
  MR_Word * STATE_VARIABLE_CLD_32)
{
  {
    MR_Word ContainingGoalMap_20;
    MR_Word GoalPath_21;
    MR_Word PortInfo_22;
    MR_Word MaybeTailRecInfo_27;
    MR_Word Var_33;
    MR_Word _Label_25;
    MR_Word _TvarDataMap_26;

    ll_backend__code_info__get_containing_goal_map_2_p_0(STATE_VARIABLE_CI_0_29, &ContainingGoalMap_20);
    GoalPath_21 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_20, GoalId_13);
    {
      PortInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PortInfo_22, 0) = ((MR_Box) (GoalPath_21));
      MR_hl_field(MR_mktag(1), PortInfo_22, 1) = ((MR_Box) (ArgsInfos_12));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (TraceInfo_11));
    }
    ll_backend__trace_gen__generate_event_code_13_p_0((MR_Integer) 4, PortInfo_22, Var_33, Context_14, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &_Label_25, &_TvarDataMap_26, Code_15, STATE_VARIABLE_CI_0_29, STATE_VARIABLE_CI_30, STATE_VARIABLE_CLD_0_31, STATE_VARIABLE_CLD_32);
    MaybeTailRecInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_11, (MR_Integer) 7))));
    if ((MaybeTailRecInfo_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_event_code\'/10", (MR_String) "no tail rec label");
        return;
      }
    else
    {
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailRecInfo_27, (MR_Integer) 0))));

      *TailRecLabel_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 1))));
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__generate_external_event_code_8_p_0(
  MR_Word ExternalPort_9,
  MR_Word TraceInfo_10,
  MR_Word Context_11,
  MR_Word * MaybeExternalInfo_12,
  MR_Word STATE_VARIABLE_CI_0_23,
  MR_Word * STATE_VARIABLE_CI_24,
  MR_Word STATE_VARIABLE_CLD_0_25,
  MR_Word * STATE_VARIABLE_CLD_26)
{
  {
    MR_Word Port_15 = ((&ll_backend__trace_gen_vector_common_5[0 + ExternalPort_9]))->ll_backend__trace_gen__vector_common_type_5_0__vct_5_f_0;
    MR_Word ModuleInfo_16;
    MR_Word PredInfo_17;
    MR_Word ProcInfo_18;
    MR_Word NeedPort_19;
    MR_Word Var_27;
    MR_Word Var_36;

    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_23, &ModuleInfo_16);
    ll_backend__code_info__get_pred_info_2_p_0(STATE_VARIABLE_CI_0_23, &PredInfo_17);
    ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_23, &ProcInfo_18);
    Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TraceInfo_10, (MR_Integer) 0))) & (MR_Integer) 7);
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_10, (MR_Integer) 1))));
    NeedPort_19 = libs__trace_params__eff_trace_needs_port_6_f_0(ModuleInfo_16, PredInfo_17, ProcInfo_18, Var_27, Var_36, Port_15);
    switch (NeedPort_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeExternalInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_CI_24 = STATE_VARIABLE_CI_0_23;
          *STATE_VARIABLE_CLD_26 = STATE_VARIABLE_CLD_0_25;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Label_20;
          MR_Word TvarDataMap_21;
          MR_Word Code_22;
          MR_Word Var_30;
          MR_Word Var_35;

          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (TraceInfo_10));
          }
          ll_backend__trace_gen__generate_event_code_13_p_0(Port_15, (MR_Word) ((MR_Unsigned) 0U), Var_30, Context_11, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Label_20, &TvarDataMap_21, &Code_22, STATE_VARIABLE_CI_0_23, STATE_VARIABLE_CI_24, STATE_VARIABLE_CLD_0_25, STATE_VARIABLE_CLD_26);
          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Label_20));
            MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (TvarDataMap_21));
            MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (Code_22));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeExternalInfo_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_35));
          }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__generate_user_event_code_7_p_0(
  MR_Word UserInfo_8,
  MR_Word GoalInfo_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_23,
  MR_Word * STATE_VARIABLE_CI_24,
  MR_Word STATE_VARIABLE_CLD_0_25,
  MR_Word * STATE_VARIABLE_CLD_26)
{
  {
    MR_Word GoalId_13;
    MR_Word ContainingGoalMap_14;
    MR_Word GoalPath_15;
    MR_Word Context_16;
    MR_Word PortInfo_18;
    MR_Word Var_27;
    MR_Word _Label_21;
    MR_Word _TvarDataMap_22;

    GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_9);
    ll_backend__code_info__get_containing_goal_map_2_p_0(STATE_VARIABLE_CI_0_23, &ContainingGoalMap_14);
    GoalPath_15 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_14, GoalId_13);
    Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
    {
      PortInfo_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), PortInfo_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), PortInfo_18, 1) = ((MR_Box) (GoalPath_15));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (UserInfo_8));
    }
    ll_backend__trace_gen__generate_event_code_13_p_0((MR_Integer) 15, PortInfo_18, (MR_Word) ((MR_Unsigned) 0U), Context_16, (MR_Integer) 0, Var_27, &_Label_21, &_TvarDataMap_22, Code_10, STATE_VARIABLE_CI_0_23, STATE_VARIABLE_CI_24, STATE_VARIABLE_CLD_0_25, STATE_VARIABLE_CLD_26);
  }
}

void MR_CALL 
ll_backend__trace_gen__maybe_generate_negated_event_code_8_p_0(
  MR_Word Goal_9,
  MR_Word OutsideGoalInfo_10,
  MR_Word NegPort_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CI_0_30,
  MR_Word * STATE_VARIABLE_CI_31,
  MR_Word STATE_VARIABLE_CLD_0_32,
  MR_Word * STATE_VARIABLE_CLD_33)
{
  {
    MR_bool succeeded;
    MR_Word MaybeTraceInfo_15;
    MR_Word Port_17;
    MR_Word TraceInfo_16;
    MR_Word ModuleInfo_18;
    MR_Word PredInfo_19;
    MR_Word ProcInfo_20;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_43;

    ll_backend__code_info__get_maybe_trace_info_2_p_0(STATE_VARIABLE_CI_0_30, &MaybeTraceInfo_15);
    succeeded = (MaybeTraceInfo_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TraceInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceInfo_15, (MR_Integer) 0))));
      switch (NegPort_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Port_17 = (MR_Integer) 11;
          break;
        case (MR_Integer) 0:
          Port_17 = (MR_Integer) 10;
          break;
      }
      ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_30, &ModuleInfo_18);
      ll_backend__code_info__get_pred_info_2_p_0(STATE_VARIABLE_CI_0_30, &PredInfo_19);
      ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_30, &ProcInfo_20);
      Var_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TraceInfo_16, (MR_Integer) 0))) & (MR_Integer) 7);
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_16, (MR_Integer) 1))));
      Var_34 = libs__trace_params__eff_trace_needs_port_6_f_0(ModuleInfo_18, PredInfo_19, ProcInfo_20, Var_35, Var_43, Port_17);
      succeeded = (Var_34 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word GoalInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 1))));
      MR_Word GoalId_23;
      MR_Word Context_24;
      MR_Word HideEvent_25;
      MR_Word ContainingGoalMap_26;
      MR_Word GoalPath_27;
      MR_Word Var_38;
      MR_Word Var_28;
      MR_Word Var_29;

      GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_22);
      Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_22);
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(OutsideGoalInfo_10, (MR_Integer) 8);
      if (succeeded)
        HideEvent_25 = (MR_Integer) 1;
      else
        HideEvent_25 = (MR_Integer) 0;
      ll_backend__code_info__get_containing_goal_map_2_p_0(STATE_VARIABLE_CI_0_30, &ContainingGoalMap_26);
      GoalPath_27 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_26, GoalId_23);
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (GoalPath_27));
      }
      ll_backend__trace_gen__generate_event_code_13_p_0(Port_17, Var_38, MaybeTraceInfo_15, Context_24, HideEvent_25, (MR_Word) ((MR_Unsigned) 0U), &Var_28, &Var_29, Code_12, STATE_VARIABLE_CI_0_30, STATE_VARIABLE_CI_31, STATE_VARIABLE_CLD_0_32, STATE_VARIABLE_CLD_33);
    }
    else
    {
      *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_33 = STATE_VARIABLE_CLD_0_32;
      *STATE_VARIABLE_CI_31 = STATE_VARIABLE_CI_0_30;
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__maybe_generate_internal_event_code_7_p_0(
  MR_Word Goal_8,
  MR_Word OutsideGoalInfo_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_36,
  MR_Word * STATE_VARIABLE_CI_37,
  MR_Word STATE_VARIABLE_CLD_0_38,
  MR_Word * STATE_VARIABLE_CLD_39)
{
  {
    MR_bool succeeded;
    MR_Word MaybeTraceInfo_13;

    ll_backend__code_info__get_maybe_trace_info_2_p_0(STATE_VARIABLE_CI_0_36, &MaybeTraceInfo_13);
    if ((MaybeTraceInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CI_37 = STATE_VARIABLE_CI_0_36;
      *STATE_VARIABLE_CLD_39 = STATE_VARIABLE_CLD_0_38;
    }
    else
    {
      MR_Word TraceInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceInfo_13, (MR_Integer) 0))));
      MR_Word GoalInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
      MR_Word GoalId_17;
      MR_Word ContainingGoalMap_18;
      MR_Word ContainingGoal_19;
      MR_Word Port_26;
      MR_Box conv0_ContainingGoal_19;
      MR_Word PortPrime_24;
      MR_Word LastStep_21;
      MR_Word ModuleInfo_27;
      MR_Word PredInfo_28;
      MR_Word ProcInfo_29;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_51;

      GoalId_17 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_16);
      ll_backend__code_info__get_containing_goal_map_2_p_0(STATE_VARIABLE_CI_0_36, &ContainingGoalMap_18);
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ContainingGoalMap_18, ((MR_Box) (GoalId_17)), &conv0_ContainingGoal_19);
      ContainingGoal_19 = ((MR_Word) (conv0_ContainingGoal_19));
      succeeded = (ContainingGoal_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        LastStep_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ContainingGoal_19, (MR_Integer) 1))));
        switch (MR_tag((MR_Word) LastStep_21)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(LastStep_21)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  PortPrime_24 = (MR_Integer) 6;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  PortPrime_24 = (MR_Integer) 7;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  PortPrime_24 = (MR_Integer) 8;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  PortPrime_24 = (MR_Integer) 9;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer DisjunctNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), LastStep_21, (MR_Integer) 0))));

              succeeded = (DisjunctNum_25 == (MR_Integer) 1);
              if (succeeded)
                PortPrime_24 = (MR_Integer) 12;
              else
                PortPrime_24 = (MR_Integer) 13;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), LastStep_21, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  PortPrime_24 = (MR_Integer) 14;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
      }
      if (succeeded)
        Port_26 = PortPrime_24;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.trace_gen.maybe_generate_internal_event_code\'/7", (MR_String) "bad path");
          return;
        }
      ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_36, &ModuleInfo_27);
      ll_backend__code_info__get_pred_info_2_p_0(STATE_VARIABLE_CI_0_36, &PredInfo_28);
      ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_36, &ProcInfo_29);
      Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TraceInfo_14, (MR_Integer) 0))) & (MR_Integer) 7);
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_14, (MR_Integer) 1))));
      Var_42 = libs__trace_params__eff_trace_needs_port_6_f_0(ModuleInfo_27, PredInfo_28, ProcInfo_29, Var_43, Var_51, Port_26);
      succeeded = (Var_42 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word PreDeaths_30;
        MR_Word Context_31;
        MR_Word HideEvent_32;
        MR_Word GoalPath_33;
        MR_Word Var_46;
        MR_Word Var_34;
        MR_Word Var_35;

        hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo_16, &PreDeaths_30);
        Context_31 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(OutsideGoalInfo_9, (MR_Integer) 8);
        if (succeeded)
          HideEvent_32 = (MR_Integer) 1;
        else
          HideEvent_32 = (MR_Integer) 0;
        GoalPath_33 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ContainingGoalMap_18, GoalId_17);
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_46, 0) = ((MR_Box) (GoalPath_33));
          MR_hl_field(MR_mktag(2), Var_46, 1) = ((MR_Box) (PreDeaths_30));
        }
        ll_backend__trace_gen__generate_event_code_13_p_0(Port_26, Var_46, MaybeTraceInfo_13, Context_31, HideEvent_32, (MR_Word) ((MR_Unsigned) 0U), &Var_34, &Var_35, Code_10, STATE_VARIABLE_CI_0_36, STATE_VARIABLE_CI_37, STATE_VARIABLE_CLD_0_38, STATE_VARIABLE_CLD_39);
      }
      else
      {
        *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CLD_39 = STATE_VARIABLE_CLD_0_38;
        *STATE_VARIABLE_CI_37 = STATE_VARIABLE_CI_0_36;
      }
    }
  }
}

static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Lval_2;

    conv1_Lval_2 = ll_backend__trace_gen__find_lval_in_layout_locn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Lval_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__trace_gen__find_lval_in_var_info_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__trace_gen__generate_event_code_13_p_0(
  MR_Word Port_14,
  MR_Word PortInfo_15,
  MR_Word MaybeTraceInfo_16,
  MR_Word Context_17,
  MR_Word HideEvent_18,
  MR_Word MaybeUserInfo_19,
  MR_Word * Label_20,
  MR_Word * TvarDataMap_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CI_0_67,
  MR_Word * STATE_VARIABLE_CI_68,
  MR_Word STATE_VARIABLE_CLD_0_69,
  MR_Word * STATE_VARIABLE_CLD_70)
{
  {
    MR_bool succeeded;
    MR_Word LiveVars0_25;
    MR_Word LiveVars_26;
    MR_Word Path_27;
    MR_Word TailRecResetCode_28;
    MR_Word VarSet_36;
    MR_Word VarTypes_37;
    MR_Word TvarSet_39;
    MR_Word VarInfoList_40;
    MR_Word ProduceCode_41;
    MR_Integer MaxRegR_42;
    MR_Integer MaxRegF_43;
    MR_Integer MaxTraceRegR0_44;
    MR_Integer MaxTraceRegF0_45;
    MR_Integer MaxTraceRegR_46;
    MR_Integer MaxTraceRegF_47;
    MR_Word VarLocs_48;
    MR_Word ProcInfo_49;
    MR_Word TvarList_50;
    MR_Word VarLvals_51;
    MR_Word TvarLocnSets_52;
    MR_Word TvarLocnSet_53;
    MR_Word TvarLocns_54;
    MR_Word TvarLvals_55;
    MR_Word LiveLvals_56;
    MR_Word LiveLvalSet_57;
    MR_Word VarInfoSet_58;
    MR_Word LayoutLabelInfo_59;
    MR_String TraceStmt0_60;
    MR_String TraceStmt_62;
    MR_Word TraceComponents_65;
    MR_Word TraceCode_66;
    MR_Word STATE_VARIABLE_CI_71_71;
    MR_Word STATE_VARIABLE_CI_75_75;
    MR_Word Var_76;
    MR_Word STATE_VARIABLE_CI_79_79;
    MR_String Var_83;
    MR_String Var_84;
    MR_String Var_85;
    MR_String Var_87;
    MR_String Var_89;
    MR_String Var_90;
    MR_String Var_91;
    MR_Word STATE_VARIABLE_CI_93_93;
    MR_Word STATE_VARIABLE_CI_95_95;
    MR_Word Var_100;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_116;
    MR_Word Var_123;
    MR_Word InstMap_38;
    MR_Word RedoLabel_64;
    MR_Word TraceInfo_63;
    MR_Word Var_96;

    ll_backend__code_info__get_next_label_3_p_0(Label_20, STATE_VARIABLE_CI_0_67, &STATE_VARIABLE_CI_71_71);
    ll_backend__code_loc_dep__get_known_variables_2_p_0(STATE_VARIABLE_CLD_0_69, &LiveVars0_25);
    switch (MR_tag((MR_Word) PortInfo_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          LiveVars_26 = LiveVars0_25;
          Path_27 = (MR_Word) ((MR_Unsigned) 0U);
          TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          STATE_VARIABLE_CI_75_75 = STATE_VARIABLE_CI_71_71;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgsInfos_29;
          MR_Word OutputVars_30;

          Path_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PortInfo_15, (MR_Integer) 0))));
          ArgsInfos_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PortInfo_15, (MR_Integer) 1))));
          ll_backend__trace_gen__find_output_vars_3_p_0(ArgsInfos_29, (MR_Word) ((MR_Unsigned) 0U), &OutputVars_30);
          mercury__list__delete_elems_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[2]), LiveVars0_25, OutputVars_30, &LiveVars_26);
          if ((MaybeTraceInfo_16 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.trace_gen.generate_event_code\'/13", (MR_String) "tailrec call without TraceInfo");
              return;
            }
          else
          {
            MR_Word TailRecTraceInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceInfo_16, (MR_Integer) 0))));

            ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(TailRecTraceInfo_31, &TailRecResetCode_28, STATE_VARIABLE_CI_71_71, &STATE_VARIABLE_CI_75_75);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PreDeaths_32;
          MR_Word ResumeVars_33;
          MR_Word RealPreDeaths_34;
          MR_Word RealPreDeathList_35;

          Path_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PortInfo_15, (MR_Integer) 0))));
          PreDeaths_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PortInfo_15, (MR_Integer) 1))));
          ResumeVars_33 = ll_backend__code_loc_dep__current_resume_point_vars_1_f_0(STATE_VARIABLE_CLD_0_69);
          parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PreDeaths_32, ResumeVars_33, &RealPreDeaths_34);
          RealPreDeathList_35 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RealPreDeaths_34);
          mercury__list__delete_elems_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[2]), LiveVars0_25, RealPreDeathList_35, &LiveVars_26);
          TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          STATE_VARIABLE_CI_75_75 = STATE_VARIABLE_CI_71_71;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), PortInfo_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Path_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PortInfo_15, (MR_Integer) 1))));
              LiveVars_26 = LiveVars0_25;
              TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              STATE_VARIABLE_CI_75_75 = STATE_VARIABLE_CI_71_71;
            }
            break;
          case (MR_Integer) 1:
            {
              Path_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PortInfo_15, (MR_Integer) 1))));
              LiveVars_26 = LiveVars0_25;
              TailRecResetCode_28 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              STATE_VARIABLE_CI_75_75 = STATE_VARIABLE_CI_71_71;
            }
            break;
        }
        break;
    }
    ll_backend__code_info__get_varset_2_p_0(STATE_VARIABLE_CI_75_75, &VarSet_36);
    ll_backend__code_info__get_vartypes_2_p_0(STATE_VARIABLE_CI_75_75, &VarTypes_37);
    ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_0_69, &InstMap_38);
    Var_76 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[3]));
    ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(LiveVars_26, VarSet_36, VarTypes_37, Var_76, &TvarSet_39, (MR_Word) ((MR_Unsigned) 0U), &VarInfoList_40, &ProduceCode_41, STATE_VARIABLE_CI_75_75, STATE_VARIABLE_CLD_0_69, STATE_VARIABLE_CLD_70);
    ll_backend__code_loc_dep__max_reg_in_use_3_p_0(*STATE_VARIABLE_CLD_70, &MaxRegR_42, &MaxRegF_43);
    ll_backend__code_info__get_max_regs_in_use_at_trace_3_p_0(STATE_VARIABLE_CI_75_75, &MaxTraceRegR0_44, &MaxTraceRegF0_45);
    mercury__int__max_3_p_0(MaxRegR_42, MaxTraceRegR0_44, &MaxTraceRegR_46);
    mercury__int__max_3_p_0(MaxRegF_43, MaxTraceRegF0_45, &MaxTraceRegF_47);
    succeeded = (MaxTraceRegR0_44 == MaxTraceRegR_46);
    if (succeeded)
      succeeded = (MaxTraceRegF0_45 == MaxTraceRegF_47);
    if (succeeded)
      STATE_VARIABLE_CI_79_79 = STATE_VARIABLE_CI_75_75;
    else
      ll_backend__code_info__set_max_regs_in_use_at_trace_4_p_0(MaxTraceRegR_46, MaxTraceRegF_47, STATE_VARIABLE_CI_75_75, &STATE_VARIABLE_CI_79_79);
    ll_backend__code_loc_dep__variable_locations_2_p_0(*STATE_VARIABLE_CLD_70, &VarLocs_48);
    ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_79_79, &ProcInfo_49);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[3]), TvarSet_39, &TvarList_50);
    ll_backend__continuation_info__find_typeinfos_for_tvars_4_p_0(TvarList_50, VarLocs_48, ProcInfo_49, TvarDataMap_21);
    VarLvals_51 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__trace_gen_scalar_common_2[6]), VarInfoList_40);
    mercury__map__values_2_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[3]), (MR_Word) (&ll_backend__trace_gen_scalar_common_1[4]), *TvarDataMap_21, &TvarLocnSets_52);
    TvarLocnSet_53 = mercury__set__union_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0), TvarLocnSets_52);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0), TvarLocnSet_53, &TvarLocns_54);
    TvarLvals_55 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_layout_locn_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__trace_gen_scalar_common_2[7]), TvarLocns_54);
    mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), VarLvals_51, TvarLvals_55, &LiveLvals_56);
    LiveLvalSet_57 = mercury__set__list_to_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LiveLvals_56);
    mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_layout_var_info_0), VarInfoList_40, &VarInfoSet_58);
    {
      LayoutLabelInfo_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LayoutLabelInfo_59, 0) = ((MR_Box) (VarInfoSet_58));
      MR_hl_field(MR_mktag(0), LayoutLabelInfo_59, 1) = ((MR_Box) (*TvarDataMap_21));
    }
    if ((MaybeUserInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
      TraceStmt0_60 = (MR_String) "\t\tMR_EVENT_SYS\n";
    else
      TraceStmt0_60 = (MR_String) "\t\tMR_EVENT_USER\n";
    Var_84 = ll_backend__layout_out__trace_port_to_string_1_f_0(Port_14);
    Var_90 = mdbcomp__goal_path__goal_path_to_string_1_f_0(Path_27);
    Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "> */\n", TraceStmt0_60);
    Var_89 = mercury__string__f_43_43_2_f_0(Var_90, Var_91);
    Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "path <", Var_89);
    Var_85 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_87);
    Var_83 = mercury__string__f_43_43_2_f_0(Var_84, Var_85);
    TraceStmt_62 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t/* port ", Var_83);
    ll_backend__code_info__add_trace_layout_for_label_9_p_0(*Label_20, Context_17, Port_14, HideEvent_18, Path_27, MaybeUserInfo_19, LayoutLabelInfo_59, STATE_VARIABLE_CI_79_79, &STATE_VARIABLE_CI_93_93);
    ll_backend__code_info__set_proc_trace_events_3_p_0((MR_Integer) 1, STATE_VARIABLE_CI_93_93, &STATE_VARIABLE_CI_95_95);
    succeeded = (Port_14 == (MR_Integer) 3);
    if (succeeded)
    {
      succeeded = (MaybeTraceInfo_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TraceInfo_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceInfo_16, (MR_Integer) 0))));
        Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_63, (MR_Integer) 8))));
        succeeded = (Var_96 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          RedoLabel_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_96, (MR_Integer) 0))));
      }
    }
    if (succeeded)
      ll_backend__code_info__add_trace_layout_for_label_9_p_0(RedoLabel_64, Context_17, (MR_Integer) 2, HideEvent_18, Path_27, (MR_Word) ((MR_Unsigned) 0U), LayoutLabelInfo_59, STATE_VARIABLE_CI_95_95, STATE_VARIABLE_CI_68);
    else
      *STATE_VARIABLE_CI_68 = STATE_VARIABLE_CI_95_95;
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (LiveLvalSet_57));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_100, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), Var_100, 2) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(3), Var_100, 3) = ((MR_Box) (TraceStmt_62));
    }
    {
      TraceComponents_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TraceComponents_65, 0) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(1), TraceComponents_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (*Label_20));
    }
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) ((MR_String) "A label to hang trace liveness on"));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (*Label_20));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_111, 2) = ((MR_Box) (TraceComponents_65));
      MR_hl_field(MR_mktag(3), Var_111, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_111, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_111, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_111, 6) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(3), Var_111, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_111, 8) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(3), Var_111, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
    {
      Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_109));
    }
    TraceCode_66 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_105);
    Var_123 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TailRecResetCode_28, TraceCode_66);
    *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceCode_41, Var_123);
  }
}

static void MR_CALL 
ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarSet_2,
  MR_Word VarTypes_3,
  MR_Word STATE_VARIABLE_TVars_0_6,
  MR_Word * STATE_VARIABLE_TVars_7,
  MR_Word STATE_VARIABLE_VarInfos_0_8,
  MR_Word * STATE_VARIABLE_VarInfos_9,
  MR_Word * HeadVar__10_10,
  MR_Word HeadVar__11_11,
  MR_Word STATE_VARIABLE_CLD_0_12,
  MR_Word * STATE_VARIABLE_CLD_13)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_13 = STATE_VARIABLE_CLD_0_12;
      *STATE_VARIABLE_VarInfos_9 = STATE_VARIABLE_VarInfos_0_8;
      *STATE_VARIABLE_TVars_7 = STATE_VARIABLE_TVars_0_6;
    }
    else
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word VarCode_36;
      MR_Word VarsCode_37;
      MR_Word Type_40;
      MR_Word ModuleInfo_41;
      MR_Word IsDummy_42;
      MR_Word STATE_VARIABLE_TVars_50_50;
      MR_Word STATE_VARIABLE_CLD_51_51;
      MR_Word STATE_VARIABLE_VarInfos_52_52;

      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_3, Var_28, &Type_40);
      ll_backend__code_info__get_module_info_2_p_0(HeadVar__11_11, &ModuleInfo_41);
      IsDummy_42 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_41, Type_40);
      switch (IsDummy_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            VarCode_36 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            STATE_VARIABLE_TVars_50_50 = STATE_VARIABLE_TVars_0_6;
            STATE_VARIABLE_VarInfos_52_52 = STATE_VARIABLE_VarInfos_0_8;
            STATE_VARIABLE_CLD_51_51 = STATE_VARIABLE_CLD_0_12;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word VarInfo_43;
            MR_Word Lval_70;
            MR_Word Type_71;
            MR_String Name_73;
            MR_Word LiveType_75;
            MR_Word TypeVars_76;
            MR_Word Var_78;
            MR_String SearchName_72;

            ll_backend__code_loc_dep__produce_variable_in_reg_or_stack_5_p_0(Var_28, &VarCode_36, &Lval_70, STATE_VARIABLE_CLD_0_12, &STATE_VARIABLE_CLD_51_51);
            Type_71 = ll_backend__code_info__variable_type_2_f_0(HeadVar__11_11, Var_28);
            succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, Var_28, &SearchName_72);
            if (succeeded)
              Name_73 = SearchName_72;
            else
              Name_73 = (MR_String) "";
            {
              LiveType_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), LiveType_75, 0) = ((MR_Box) (Var_28));
              MR_hl_field(MR_mktag(1), LiveType_75, 1) = ((MR_Box) (Name_73));
              MR_hl_field(MR_mktag(1), LiveType_75, 2) = ((MR_Box) (Type_71));
              MR_hl_field(MR_mktag(1), LiveType_75, 3) = NULL;
            }
            {
              Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Lval_70));
            }
            {
              VarInfo_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), VarInfo_43, 0) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(0), VarInfo_43, 1) = ((MR_Box) (LiveType_75));
              MR_hl_field(MR_mktag(0), VarInfo_43, 2) = ((MR_Box) ((MR_String) "trace"));
            }
            parse_tree__prog_type__type_vars_2_p_0(Type_71, &TypeVars_76);
            mercury__set__insert_list_3_p_0((MR_Word) (&ll_backend__trace_gen_scalar_common_1[3]), TypeVars_76, STATE_VARIABLE_TVars_0_6, &STATE_VARIABLE_TVars_50_50);
            {
              STATE_VARIABLE_VarInfos_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_VarInfos_52_52, 0) = ((MR_Box) (VarInfo_43));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_VarInfos_52_52, 1) = ((MR_Box) (STATE_VARIABLE_VarInfos_0_8));
            }
          }
          break;
      }
      ll_backend__trace_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_112_114_111_100_117_99_101_95_118_97_114_115_95_95_91_52_44_32_53_93_95_48_13_p_0(Vars_29, VarSet_2, VarTypes_3, STATE_VARIABLE_TVars_50_50, STATE_VARIABLE_TVars_7, STATE_VARIABLE_VarInfos_52_52, STATE_VARIABLE_VarInfos_9, &VarsCode_37, HeadVar__11_11, STATE_VARIABLE_CLD_51_51, STATE_VARIABLE_CLD_13);
      *HeadVar__10_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), VarCode_36, VarsCode_37);
    }
  }
}

static void MR_CALL 
ll_backend__trace_gen__find_output_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_OutputVars_0_2,
  MR_Word * STATE_VARIABLE_OutputVars_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_OutputVars_3 = STATE_VARIABLE_OutputVars_0_2;
    else
    {
      MR_Word Arg_7;
      MR_Word Info_8;
      MR_Word ArgsInfos_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Mode_12;
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_OutputVars_16_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_OutputVars_0_2;

      Arg_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
      Info_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
      Mode_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) & (MR_Integer) 3);
      switch (Mode_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_OutputVars_16_16 = STATE_VARIABLE_OutputVars_0_2;
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_OutputVars_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OutputVars_16_16, 0) = ((MR_Box) (Arg_7));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OutputVars_16_16, 1) = ((MR_Box) (STATE_VARIABLE_OutputVars_0_2));
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_OutputVars_16_16 = STATE_VARIABLE_OutputVars_0_2;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArgsInfos_9;
      next_value_of_STATE_VARIABLE_OutputVars_0_2 = STATE_VARIABLE_OutputVars_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_OutputVars_0_2 = next_value_of_STATE_VARIABLE_OutputVars_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__1004__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__trace_gen__IntroducedFrom__pred__generate_tailrec_reset_slots_code__998__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0(
  MR_Word TraceInfo_5,
  MR_Word * Code_6,
  MR_Word STATE_VARIABLE_CI_0_42,
  MR_Word * STATE_VARIABLE_CI_43)
{
  {
    MR_bool succeeded;
    MR_Word CodeModel_8;
    MR_Word EventNumLval_9;
    MR_Word CallNumLval_10;
    MR_Word CallDepthLval_11;
    MR_String EventNumStr_12;
    MR_String CallNumStr_13;
    MR_String CallDepthStr_14;
    MR_String StdSlotCodeStr_15;
    MR_Word MaybeRedoLabelLval_16;
    MR_Word MaybeFromFullLval_17;
    MR_Word MaybeIoSeqSlot_18;
    MR_String IoSeqCodeStr_21;
    MR_Word MaybeTrailLvals_22;
    MR_String TrailCodeStr_27;
    MR_Word MaybeMaxfrLval_28;
    MR_Word MaxfrCode_30;
    MR_Word TailRecInfo_31;
    MR_Word TailRecLvalCode_34;
    MR_Word MaybeCallTableLval_35;
    MR_String CallTableCodeStr_38;
    MR_String ForeignLangCodeStr_39;
    MR_Word ForeignLangComponents_40;
    MR_Word ForeignLangCode_41;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_48;
    MR_String Var_49;
    MR_String Var_51;
    MR_Word Var_53;
    MR_Word Var_57;
    MR_String Var_94;
    MR_String Var_95;
    MR_Word Var_96;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_114;

    CodeModel_8 = ll_backend__code_info__get_proc_model_1_f_0(STATE_VARIABLE_CI_0_42);
    ll_backend__trace_gen__event_num_slot_2_p_0(CodeModel_8, &EventNumLval_9);
    ll_backend__trace_gen__call_num_slot_2_p_0(CodeModel_8, &CallNumLval_10);
    ll_backend__trace_gen__call_depth_slot_2_p_0(CodeModel_8, &CallDepthLval_11);
    ll_backend__trace_gen__stackref_to_string_2_p_0(EventNumLval_9, &EventNumStr_12);
    ll_backend__trace_gen__stackref_to_string_2_p_0(CallNumLval_10, &CallNumStr_13);
    ll_backend__trace_gen__stackref_to_string_2_p_0(CallDepthLval_11, &CallDepthStr_14);
    Var_51 = mercury__string__f_43_43_2_f_0(CallDepthStr_14, (MR_String) ");\n");
    Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_51);
    Var_48 = mercury__string__f_43_43_2_f_0(CallNumStr_13, Var_49);
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_48);
    Var_45 = mercury__string__f_43_43_2_f_0(EventNumStr_12, Var_46);
    StdSlotCodeStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_trace_tailrec_std_slots(", Var_45);
    MaybeRedoLabelLval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 8))));
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (MaybeRedoLabelLval_16));
      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_53, (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "redo label in procedure with TAIL event");
    MaybeFromFullLval_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 2))));
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (ll_backend__trace_gen__generate_tailrec_reset_slots_code_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (MaybeFromFullLval_17));
      MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_57, (MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "from_full slot in procedure with TAIL event");
    MaybeIoSeqSlot_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 3))));
    MaybeTrailLvals_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 4))));
    MaybeMaxfrLval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 5))));
    MaybeCallTableLval_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 6))));
    TailRecInfo_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 7))));
    if ((MaybeIoSeqSlot_18 == (MR_Word) ((MR_Unsigned) 0U)))
      IoSeqCodeStr_21 = (MR_String) "";
    else
    {
      MR_Word IoSeqLval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIoSeqSlot_18, (MR_Integer) 0))));
      MR_String IoSeqStr_20;
      MR_String Var_62;

      ll_backend__trace_gen__stackref_to_string_2_p_0(IoSeqLval_19, &IoSeqStr_20);
      Var_62 = mercury__string__f_43_43_2_f_0(IoSeqStr_20, (MR_String) " = MR_io_tabling_counter;\n");
      IoSeqCodeStr_21 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_62);
    }
    if ((MaybeTrailLvals_22 == (MR_Word) ((MR_Unsigned) 0U)))
      TrailCodeStr_27 = (MR_String) "";
    else
    {
      MR_Word TrailLval_23;
      MR_Word TicketLval_24;
      MR_String TrailLvalStr_25;
      MR_String TicketLvalStr_26;
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTrailLvals_22, (MR_Integer) 0))));
      MR_String Var_66;
      MR_String Var_67;
      MR_String Var_69;
      MR_String Var_71;

      TrailLval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 0))));
      TicketLval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_64, (MR_Integer) 1))));
      ll_backend__trace_gen__stackref_to_string_2_p_0(TrailLval_23, &TrailLvalStr_25);
      ll_backend__trace_gen__stackref_to_string_2_p_0(TicketLval_24, &TicketLvalStr_26);
      Var_71 = mercury__string__f_43_43_2_f_0(TrailLvalStr_25, (MR_String) ");\n");
      Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_store_ticket(", Var_71);
      Var_67 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", Var_69);
      Var_66 = mercury__string__f_43_43_2_f_0(TicketLvalStr_26, Var_67);
      TrailCodeStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mark_ticket_stack(", Var_66);
    }
    if ((MaybeMaxfrLval_28 == (MR_Word) ((MR_Unsigned) 0U)))
      MaxfrCode_30 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    else
    {
      MR_Word MaxfrLval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaxfrLval_28, (MR_Integer) 0))));
      MR_Word Var_73;
      MR_Word Var_74;

      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (MaxfrLval_29));
        MR_hl_field(MR_mktag(3), Var_74, 2) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[3]));
      }
      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) ((MR_String) "save initial maxfr"));
      }
      MaxfrCode_30 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_73)));
    }
    if ((TailRecInfo_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.trace_gen.generate_tailrec_reset_slots_code\'/4", (MR_String) "no tail rec lval");
        return;
      }
    else
    {
      MR_Word TailRecLval_32;
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailRecInfo_31, (MR_Integer) 0))));
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_86;

      TailRecLval_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_80, (MR_Integer) 0))));
      {
        Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (TailRecLval_32));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__trace_gen_scalar_common_3[4])));
        MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(3), Var_83, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[20])));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (TailRecLval_32));
        MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (Var_83));
      }
      {
        Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) ((MR_String) "increment tail recursion counter"));
      }
      TailRecLvalCode_34 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_81)));
    }
    if ((MaybeCallTableLval_35 == (MR_Word) ((MR_Unsigned) 0U)))
      CallTableCodeStr_38 = (MR_String) "";
    else
    {
      MR_Word CallTableLval_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCallTableLval_35, (MR_Integer) 0))));
      MR_String CallTableLvalStr_37;
      MR_String Var_92;

      ll_backend__trace_gen__stackref_to_string_2_p_0(CallTableLval_36, &CallTableLvalStr_37);
      Var_92 = mercury__string__f_43_43_2_f_0(CallTableLvalStr_37, (MR_String) " = 0;\n");
      CallTableCodeStr_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_92);
    }
    Var_95 = mercury__string__f_43_43_2_f_0(TrailCodeStr_27, CallTableCodeStr_38);
    Var_94 = mercury__string__f_43_43_2_f_0(IoSeqCodeStr_21, Var_95);
    ForeignLangCodeStr_39 = mercury__string__f_43_43_2_f_0(StdSlotCodeStr_15, Var_94);
    Var_100 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_96, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), Var_96, 2) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(3), Var_96, 3) = ((MR_Box) (ForeignLangCodeStr_39));
    }
    {
      ForeignLangComponents_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ForeignLangComponents_40, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(1), ForeignLangComponents_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_103, 2) = ((MR_Box) (ForeignLangComponents_40));
      MR_hl_field(MR_mktag(3), Var_103, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_103, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_103, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_103, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_103, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_103, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_103, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    {
      Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) ((MR_String) ""));
    }
    ForeignLangCode_41 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_102)));
    Var_114 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaxfrCode_30, TailRecLvalCode_34);
    *Code_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ForeignLangCode_41, Var_114);
    *STATE_VARIABLE_CI_43 = STATE_VARIABLE_CI_0_42;
  }
}

void MR_CALL 
ll_backend__trace_gen__trace_prepare_for_call_2_p_0(
  MR_Word CI_3,
  MR_Word * TraceCode_4)
{
  {
    MR_Word MaybeTraceInfo_5;
    MR_Word CodeModel_6;

    ll_backend__code_info__get_maybe_trace_info_2_p_0(CI_3, &MaybeTraceInfo_5);
    CodeModel_6 = ll_backend__code_info__get_proc_model_1_f_0(CI_3);
    if ((MaybeTraceInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *TraceCode_4 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    else
    {
      MR_Word TraceInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceInfo_5, (MR_Integer) 0))));
      MR_Word MaybeFromFullSlot_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_7, (MR_Integer) 2))));
      MR_Word CallDepthLval_9;
      MR_String CallDepthStr_10;
      MR_String MacroStr_12;
      MR_String ResetStmt_13;
      MR_String Var_14;
      MR_String Var_16;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_21;
      MR_Word Var_22;

      switch (CodeModel_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          CallDepthLval_9 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[17]));
          break;
        case (MR_Integer) 2:
          CallDepthLval_9 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[18]));
          break;
      }
      ll_backend__trace_gen__stackref_to_string_2_p_0(CallDepthLval_9, &CallDepthStr_10);
      if ((MaybeFromFullSlot_8 == (MR_Word) ((MR_Unsigned) 0U)))
        MacroStr_12 = (MR_String) "MR_trace_reset_depth_from_full";
      else
        MacroStr_12 = (MR_String) "MR_trace_reset_depth_from_shallow";
      Var_16 = mercury__string__f_43_43_2_f_0(CallDepthStr_10, (MR_String) ");\n");
      Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_16);
      ResetStmt_13 = mercury__string__f_43_43_2_f_0(MacroStr_12, Var_14);
      Var_22 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Var_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_19, 2) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(3), Var_19, 3) = ((MR_Box) (ResetStmt_13));
      }
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) ((MR_String) ""));
      }
      *TraceCode_4 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_18)));
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__generate_slot_fill_code_3_p_0(
  MR_Word CI_4,
  MR_Word TraceInfo_5,
  MR_Word * TraceCode_6)
{
  {
    MR_Word CodeModel_7;
    MR_Word MaybeFromFullSlot_8;
    MR_Word MaybeIoSeqSlot_9;
    MR_Word MaybeTrailLvals_10;
    MR_Word MaybeMaxfrLval_11;
    MR_Word MaybeCallTableLval_12;
    MR_Word MaybeTailRecInfo_13;
    MR_Word MaybeRedoLabel_14;
    MR_Word EventNumLval_15;
    MR_Word CallNumLval_16;
    MR_Word CallDepthLval_17;
    MR_String EventNumStr_18;
    MR_String CallNumStr_19;
    MR_String CallDepthStr_20;
    MR_Word MaybeLayoutLabel_25;
    MR_Word MaybeHashDefLabel_26;
    MR_String TraceStmt1_35;
    MR_Word TraceComponents1_36;
    MR_Word TraceCode1_37;
    MR_Word TraceCode2_39;
    MR_Word TraceCode3_45;
    MR_Word TraceCode4_50;
    MR_String STATE_VARIABLE_CodeStr_51_51;
    MR_String Var_53;
    MR_String Var_54;
    MR_String Var_56;
    MR_String Var_57;
    MR_String Var_59;
    MR_String STATE_VARIABLE_CodeStr_61_61;
    MR_String STATE_VARIABLE_CodeStr_66_66;
    MR_String STATE_VARIABLE_CodeStr_72_72;
    MR_Word Var_98;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_175;
    MR_Word Var_176;

    CodeModel_7 = ll_backend__code_info__get_proc_model_1_f_0(CI_4);
    MaybeFromFullSlot_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 2))));
    MaybeIoSeqSlot_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 3))));
    MaybeTrailLvals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 4))));
    MaybeMaxfrLval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 5))));
    MaybeCallTableLval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 6))));
    MaybeTailRecInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 7))));
    MaybeRedoLabel_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_5, (MR_Integer) 8))));
    ll_backend__trace_gen__event_num_slot_2_p_0(CodeModel_7, &EventNumLval_15);
    ll_backend__trace_gen__call_num_slot_2_p_0(CodeModel_7, &CallNumLval_16);
    ll_backend__trace_gen__call_depth_slot_2_p_0(CodeModel_7, &CallDepthLval_17);
    ll_backend__trace_gen__stackref_to_string_2_p_0(EventNumLval_15, &EventNumStr_18);
    ll_backend__trace_gen__stackref_to_string_2_p_0(CallNumLval_16, &CallNumStr_19);
    ll_backend__trace_gen__stackref_to_string_2_p_0(CallDepthLval_17, &CallDepthStr_20);
    Var_59 = mercury__string__f_43_43_2_f_0(CallDepthStr_20, (MR_String) ");\n");
    Var_57 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_59);
    Var_56 = mercury__string__f_43_43_2_f_0(CallNumStr_19, Var_57);
    Var_54 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_56);
    Var_53 = mercury__string__f_43_43_2_f_0(EventNumStr_18, Var_54);
    STATE_VARIABLE_CodeStr_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_trace_fill_std_slots(", Var_53);
    if ((MaybeRedoLabel_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeLayoutLabel_25 = (MR_Word) ((MR_Unsigned) 0U);
      MaybeHashDefLabel_26 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_CodeStr_61_61 = STATE_VARIABLE_CodeStr_51_51;
    }
    else
    {
      MR_Word RedoLayoutLval_23;
      MR_String RedoLayoutStr_24;
      MR_String Var_62;
      MR_String Var_64;

      ll_backend__trace_gen__redo_layout_slot_2_p_0(CodeModel_7, &RedoLayoutLval_23);
      ll_backend__trace_gen__stackref_to_string_2_p_0(RedoLayoutLval_23, &RedoLayoutStr_24);
      Var_64 = mercury__string__f_43_43_2_f_0(RedoLayoutStr_24, (MR_String) " = (MR_Word) (const MR_Word *) MR_HASH_DEF_LABEL_LAYOUT;\n");
      Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_64);
      STATE_VARIABLE_CodeStr_61_61 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_CodeStr_51_51, Var_62);
      MaybeLayoutLabel_25 = MaybeRedoLabel_14;
      MaybeHashDefLabel_26 = MaybeRedoLabel_14;
    }
    if ((MaybeIoSeqSlot_9 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_CodeStr_66_66 = STATE_VARIABLE_CodeStr_61_61;
    else
    {
      MR_Word IoSeqLval_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIoSeqSlot_9, (MR_Integer) 0))));
      MR_String IoSeqStr_28;
      MR_String Var_67;
      MR_String Var_69;

      ll_backend__trace_gen__stackref_to_string_2_p_0(IoSeqLval_27, &IoSeqStr_28);
      Var_69 = mercury__string__f_43_43_2_f_0(IoSeqStr_28, (MR_String) " = MR_io_tabling_counter;\n");
      Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_69);
      STATE_VARIABLE_CodeStr_66_66 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_CodeStr_61_61, Var_67);
    }
    if ((MaybeTrailLvals_10 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_CodeStr_72_72 = STATE_VARIABLE_CodeStr_66_66;
    else
    {
      MR_Word TrailLval_29;
      MR_Word TicketLval_30;
      MR_String TrailLvalStr_31;
      MR_String TicketLvalStr_32;
      MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTrailLvals_10, (MR_Integer) 0))));
      MR_String Var_73;
      MR_String Var_75;
      MR_String Var_76;
      MR_String Var_78;
      MR_String Var_80;

      TrailLval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0))));
      TicketLval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 1))));
      ll_backend__trace_gen__stackref_to_string_2_p_0(TrailLval_29, &TrailLvalStr_31);
      ll_backend__trace_gen__stackref_to_string_2_p_0(TicketLval_30, &TicketLvalStr_32);
      Var_80 = mercury__string__f_43_43_2_f_0(TrailLvalStr_31, (MR_String) ");\n");
      Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_store_ticket(", Var_80);
      Var_76 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", Var_78);
      Var_75 = mercury__string__f_43_43_2_f_0(TicketLvalStr_32, Var_76);
      Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mark_ticket_stack(", Var_75);
      STATE_VARIABLE_CodeStr_72_72 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_CodeStr_66_66, Var_73);
    }
    if ((MaybeFromFullSlot_8 == (MR_Word) ((MR_Unsigned) 0U)))
      TraceStmt1_35 = STATE_VARIABLE_CodeStr_72_72;
    else
    {
      MR_Word CallFromFullSlot_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFromFullSlot_8, (MR_Integer) 0))));
      MR_String CallFromFullSlotStr_34;
      MR_String Var_84;
      MR_String Var_85;
      MR_String Var_87;
      MR_String Var_89;
      MR_String Var_90;
      MR_String Var_92;
      MR_String Var_94;
      MR_String Var_95;

      ll_backend__trace_gen__stackref_to_string_2_p_0(CallFromFullSlot_33, &CallFromFullSlotStr_34);
      Var_95 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_call_depth;\n", (MR_String) "\t\t}\n");
      Var_94 = mercury__string__f_43_43_2_f_0(CallDepthStr_20, Var_95);
      Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", Var_94);
      Var_90 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t} else {\n", Var_92);
      Var_89 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_CodeStr_72_72, Var_90);
      Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif (MR_trace_from_full) {\n", Var_89);
      Var_85 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_from_full;\n", Var_87);
      Var_84 = mercury__string__f_43_43_2_f_0(CallFromFullSlotStr_34, Var_85);
      TraceStmt1_35 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_84);
    }
    Var_102 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_98, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), Var_98, 2) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(3), Var_98, 3) = ((MR_Box) (TraceStmt1_35));
    }
    {
      TraceComponents1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TraceComponents1_36, 0) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(1), TraceComponents1_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_105, 2) = ((MR_Box) (TraceComponents1_36));
      MR_hl_field(MR_mktag(3), Var_105, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_105, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_105, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_105, 6) = ((MR_Box) (MaybeLayoutLabel_25));
      MR_hl_field(MR_mktag(3), Var_105, 7) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_105, 8) = ((MR_Box) (MaybeHashDefLabel_26));
      MR_hl_field(MR_mktag(3), Var_105, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
    {
      Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) ((MR_String) ""));
    }
    TraceCode1_37 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_104)));
    if ((MaybeMaxfrLval_11 == (MR_Word) ((MR_Unsigned) 0U)))
      TraceCode2_39 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    else
    {
      MR_Word MaxfrLval_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaxfrLval_11, (MR_Integer) 0))));
      MR_Word Var_114;
      MR_Word Var_115;

      {
        Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (MaxfrLval_38));
        MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (&ll_backend__trace_gen_scalar_common_3[3]));
      }
      {
        Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) ((MR_String) "save initial maxfr"));
      }
      TraceCode2_39 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_114)));
    }
    if ((MaybeTailRecInfo_13 == (MR_Word) ((MR_Unsigned) 0U)))
      TraceCode3_45 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    else
    {
      MR_Word TailRecLval_40;
      MR_String TailRecLvalStr_42;
      MR_String TraceStmt3_43;
      MR_Word TraceComponents3_44;
      MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailRecInfo_13, (MR_Integer) 0))));
      MR_String Var_121;
      MR_String Var_123;
      MR_String Var_124;
      MR_String Var_126;
      MR_String Var_128;
      MR_String Var_130;
      MR_String Var_132;
      MR_String Var_133;
      MR_Word Var_136;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word Var_142;
      MR_Word Var_143;

      TailRecLval_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_119, (MR_Integer) 0))));
      ll_backend__trace_gen__stackref_to_string_2_p_0(TailRecLval_40, &TailRecLvalStr_42);
      Var_133 = mercury__string__f_43_43_2_f_0((MR_String) " = 0;\n", (MR_String) "\t\t}");
      Var_132 = mercury__string__f_43_43_2_f_0(TailRecLvalStr_42, Var_133);
      Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", Var_132);
      Var_128 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t} else {", Var_130);
      Var_126 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\tMR_trace_tailrec_have_reused_frames = MR_FALSE;\n", Var_128);
      Var_124 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_trace_tailrec_num_reused_frames;\n", Var_126);
      Var_123 = mercury__string__f_43_43_2_f_0(TailRecLvalStr_42, Var_124);
      Var_121 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t", Var_123);
      TraceStmt3_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tif (MR_trace_tailrec_have_reused_frames) {\n", Var_121);
      Var_140 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
      {
        Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Var_140));
      }
      {
        Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_136, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Var_136, 2) = ((MR_Box) (Var_139));
        MR_hl_field(MR_mktag(3), Var_136, 3) = ((MR_Box) (TraceStmt3_43));
      }
      {
        TraceComponents3_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TraceComponents3_44, 0) = ((MR_Box) (Var_136));
        MR_hl_field(MR_mktag(1), TraceComponents3_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_143, 0) = ((MR_Box) ((MR_Unsigned) 27U));
        MR_hl_field(MR_mktag(3), Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_143, 2) = ((MR_Box) (TraceComponents3_44));
        MR_hl_field(MR_mktag(3), Var_143, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_143, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_143, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_143, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_143, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_143, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_143, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      }
      {
        Var_142 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (Var_143));
        MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) ((MR_String) "initialize tail recursion count"));
      }
      TraceCode3_45 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_142)));
    }
    if ((MaybeCallTableLval_12 == (MR_Word) ((MR_Unsigned) 0U)))
      TraceCode4_50 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    else
    {
      MR_Word CallTableLval_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCallTableLval_12, (MR_Integer) 0))));
      MR_String CallTableLvalStr_47;
      MR_String TraceStmt4_48;
      MR_Word TraceComponents4_49;
      MR_String Var_155;
      MR_Word Var_157;
      MR_Word Var_160;
      MR_Word Var_161;
      MR_Word Var_163;
      MR_Word Var_164;

      ll_backend__trace_gen__stackref_to_string_2_p_0(CallTableLval_46, &CallTableLvalStr_47);
      Var_155 = mercury__string__f_43_43_2_f_0(CallTableLvalStr_47, (MR_String) " = 0;\n");
      TraceStmt4_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_155);
      Var_161 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
      {
        Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (Var_161));
      }
      {
        Var_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_157, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_157, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Var_157, 2) = ((MR_Box) (Var_160));
        MR_hl_field(MR_mktag(3), Var_157, 3) = ((MR_Box) (TraceStmt4_48));
      }
      {
        TraceComponents4_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TraceComponents4_49, 0) = ((MR_Box) (Var_157));
        MR_hl_field(MR_mktag(1), TraceComponents4_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_164, 0) = ((MR_Box) ((MR_Unsigned) 27U));
        MR_hl_field(MR_mktag(3), Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_164, 2) = ((MR_Box) (TraceComponents4_49));
        MR_hl_field(MR_mktag(3), Var_164, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_164, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_164, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_164, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_164, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_164, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_164, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      }
      {
        Var_163 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (Var_164));
        MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) ((MR_String) ""));
      }
      TraceCode4_50 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_163)));
    }
    Var_176 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCode3_45, TraceCode4_50);
    Var_175 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCode2_39, Var_176);
    *TraceCode_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TraceCode1_37, Var_175);
  }
}

static void MR_CALL 
ll_backend__trace_gen__redo_layout_slot_2_p_0(
  MR_Word CodeModel_3,
  MR_Word * RedoLayoutSlot_4)
{
  switch (CodeModel_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.trace_gen.redo_layout_slot\'/2", (MR_String) "attempt to access redo layout slot for det or semi procedure");
        return;
      }
      break;
    case (MR_Integer) 2:
      *RedoLayoutSlot_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[19]));
      break;
  }
}

static void MR_CALL 
ll_backend__trace_gen__call_depth_slot_2_p_0(
  MR_Word CodeModel_3,
  MR_Word * CallDepthSlot_4)
{
  switch (CodeModel_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *CallDepthSlot_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[17]));
      break;
    case (MR_Integer) 2:
      *CallDepthSlot_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[18]));
      break;
  }
}

static void MR_CALL 
ll_backend__trace_gen__call_num_slot_2_p_0(
  MR_Word CodeModel_3,
  MR_Word * CallNumSlot_4)
{
  switch (CodeModel_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *CallNumSlot_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[15]));
      break;
    case (MR_Integer) 2:
      *CallNumSlot_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[16]));
      break;
  }
}

static void MR_CALL 
ll_backend__trace_gen__event_num_slot_2_p_0(
  MR_Word CodeModel_3,
  MR_Word * EventNumSlot_4)
{
  switch (CodeModel_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      *EventNumSlot_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[13]));
      break;
    case (MR_Integer) 2:
      *EventNumSlot_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__trace_gen_scalar_common_1[14]));
      break;
  }
}

static void MR_CALL 
ll_backend__trace_gen__stackref_to_string_2_p_0(
  MR_Word Lval_3,
  MR_String * LvalStr_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Lval_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Integer Slot_5;

    if (succeeded)
    {
      Slot_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 1))));
      {
        MR_String SlotString_6;
        MR_String Var_10;

        mercury__string__int_to_string_2_p_0(Slot_5, &SlotString_6);
        Var_10 = mercury__string__f_43_43_2_f_0(SlotString_6, (MR_String) ")");
        *LvalStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_sv(", Var_10);
      }
    }
    else
    {
      MR_Integer Slot_20;

      succeeded = ((((MR_tag((MR_Word) Lval_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Slot_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 1))));
        {
          MR_String Var_13;
          MR_String SlotString_19;

          mercury__string__int_to_string_2_p_0(Slot_20, &SlotString_19);
          Var_13 = mercury__string__f_43_43_2_f_0(SlotString_19, (MR_String) ")");
          *LvalStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_fv(", Var_13);
        }
      }
      else
      {
        succeeded = ((((MR_tag((MR_Word) Lval_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ll_backend.trace_gen.stackref_to_string\'/2", (MR_String) "double-width stack slot");
            return;
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.trace_gen.stackref_to_string\'/2", (MR_String) "non-stack lval");
            return;
          }
      }
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__trace_setup_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredInfo_11,
  MR_Word ProcInfo_12,
  MR_Word Globals_13,
  MR_Word MaybeTailRecLabel_14,
  MR_Word * TraceSlotInfo_15,
  MR_Word * TraceInfo_16,
  MR_Word STATE_VARIABLE_CI_0_59,
  MR_Word * STATE_VARIABLE_CI_60)
{
  {
    MR_bool succeeded;
    MR_Word CodeModel_18;
    MR_Word TraceLevel_19;
    MR_Word TraceSuppress_20;
    MR_Word TraceTableIo_21;
    MR_Word TraceRedo_22;
    MR_Word MaybeRedoLayoutLabel_25;
    MR_Word HasFromFullSlot_26;
    MR_Word StackId_27;
    MR_Word MaybeFromFullSlot_29;
    MR_Word MaybeFromFullSlotLval_31;
    MR_Word MaybeIoSeqSlot_33;
    MR_Word MaybeIoSeqLval_35;
    MR_Word UseTrail_36;
    MR_Word MaybeTrailSlot_39;
    MR_Word MaybeTrailLvals_42;
    MR_Word NeedsMaxfrSlot_43;
    MR_Word MaybeMaxfrSlot_45;
    MR_Word MaybeMaxfrLval_47;
    MR_Word MaybeTailRecSlot_50;
    MR_Word MaybeTailRecInfo_52;
    MR_Word MaybeCallTableTip_53;
    MR_Word MaybeCallTableSlot_56;
    MR_Word MaybeCallTableLval_58;
    MR_Integer STATE_VARIABLE_NextSlot_64_64;
    MR_Integer STATE_VARIABLE_NextSlot_66_66;
    MR_Integer STATE_VARIABLE_NextSlot_68_68;
    MR_Integer STATE_VARIABLE_NextSlot_73_73;
    MR_Integer STATE_VARIABLE_NextSlot_75_75;
    MR_Integer STATE_VARIABLE_NextSlot_78_78;

    CodeModel_18 = ll_backend__code_info__get_proc_model_1_f_0(STATE_VARIABLE_CI_0_59);
    libs__globals__get_trace_level_2_p_0(Globals_13, &TraceLevel_19);
    libs__globals__get_trace_suppress_2_p_0(Globals_13, &TraceSuppress_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 141, &TraceTableIo_21);
    TraceRedo_22 = libs__trace_params__eff_trace_needs_port_6_f_0(ModuleInfo_10, PredInfo_11, ProcInfo_12, TraceLevel_19, TraceSuppress_20, (MR_Integer) 2);
    succeeded = (TraceRedo_22 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (CodeModel_18 == (MR_Integer) 2);
    if (succeeded)
    {
      MR_Word RedoLayoutLabel_24;

      ll_backend__code_info__get_next_label_3_p_0(&RedoLayoutLabel_24, STATE_VARIABLE_CI_0_59, STATE_VARIABLE_CI_60);
      {
        MaybeRedoLayoutLabel_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRedoLayoutLabel_25, 0) = ((MR_Box) (RedoLayoutLabel_24));
      }
      STATE_VARIABLE_NextSlot_64_64 = (MR_Integer) 5;
    }
    else
    {
      MaybeRedoLayoutLabel_25 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_NextSlot_64_64 = (MR_Integer) 4;
      *STATE_VARIABLE_CI_60 = STATE_VARIABLE_CI_0_59;
    }
    HasFromFullSlot_26 = libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(ModuleInfo_10, PredInfo_11, ProcInfo_12, TraceLevel_19);
    StackId_27 = ll_backend__llds__code_model_to_main_stack_1_f_0(CodeModel_18);
    switch (HasFromFullSlot_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeFromFullSlot_29 = (MR_Word) ((MR_Unsigned) 0U);
          MaybeFromFullSlotLval_31 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_NextSlot_66_66 = STATE_VARIABLE_NextSlot_64_64;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word FromFullSlotLval_30;

          {
            MaybeFromFullSlot_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeFromFullSlot_29, 0) = ((MR_Box) (STATE_VARIABLE_NextSlot_64_64));
          }
          FromFullSlotLval_30 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_27, STATE_VARIABLE_NextSlot_64_64);
          {
            MaybeFromFullSlotLval_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeFromFullSlotLval_31, 0) = ((MR_Box) (FromFullSlotLval_30));
          }
          STATE_VARIABLE_NextSlot_66_66 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NextSlot_64_64 + (MR_Unsigned) 1);
        }
        break;
    }
    switch (TraceTableIo_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeIoSeqSlot_33 = (MR_Word) ((MR_Unsigned) 0U);
          MaybeIoSeqLval_35 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_NextSlot_68_68 = STATE_VARIABLE_NextSlot_66_66;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IoSeqLval_34;

          {
            MaybeIoSeqSlot_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeIoSeqSlot_33, 0) = ((MR_Box) (STATE_VARIABLE_NextSlot_66_66));
          }
          IoSeqLval_34 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_27, STATE_VARIABLE_NextSlot_66_66);
          {
            MaybeIoSeqLval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeIoSeqLval_35, 0) = ((MR_Box) (IoSeqLval_34));
          }
          STATE_VARIABLE_NextSlot_68_68 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NextSlot_66_66 + (MR_Unsigned) 1);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 249, &UseTrail_36);
    switch (UseTrail_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeTrailSlot_39 = (MR_Word) ((MR_Unsigned) 0U);
          MaybeTrailLvals_42 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_NextSlot_73_73 = STATE_VARIABLE_NextSlot_68_68;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer TicketSlot_38 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NextSlot_68_68 + (MR_Unsigned) 1);
          MR_Word TrailLval_40;
          MR_Word TicketLval_41;
          MR_Word Var_72;

          {
            MaybeTrailSlot_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTrailSlot_39, 0) = ((MR_Box) (STATE_VARIABLE_NextSlot_68_68));
          }
          TrailLval_40 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_27, STATE_VARIABLE_NextSlot_68_68);
          TicketLval_41 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_27, TicketSlot_38);
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (TrailLval_40));
            MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (TicketLval_41));
          }
          {
            MaybeTrailLvals_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTrailLvals_42, 0) = ((MR_Box) (Var_72));
          }
          STATE_VARIABLE_NextSlot_73_73 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NextSlot_68_68 + (MR_Unsigned) 2);
        }
        break;
    }
    hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ProcInfo_12, &NeedsMaxfrSlot_43);
    switch (NeedsMaxfrSlot_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MaybeMaxfrSlot_45 = (MR_Word) ((MR_Unsigned) 0U);
          MaybeMaxfrLval_47 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_NextSlot_75_75 = STATE_VARIABLE_NextSlot_73_73;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word MaxfrLval_46;

          {
            MaybeMaxfrSlot_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeMaxfrSlot_45, 0) = ((MR_Box) (STATE_VARIABLE_NextSlot_73_73));
          }
          MaxfrLval_46 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_27, STATE_VARIABLE_NextSlot_73_73);
          {
            MaybeMaxfrLval_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeMaxfrLval_47, 0) = ((MR_Box) (MaxfrLval_46));
          }
          STATE_VARIABLE_NextSlot_75_75 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NextSlot_73_73 + (MR_Unsigned) 1);
        }
        break;
    }
    if ((MaybeTailRecLabel_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeTailRecSlot_50 = (MR_Word) ((MR_Unsigned) 0U);
      MaybeTailRecInfo_52 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_NextSlot_78_78 = STATE_VARIABLE_NextSlot_75_75;
    }
    else
    {
      MR_Word TailRecLabel_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTailRecLabel_14, (MR_Integer) 0))));
      MR_Word TailRecLval_51;
      MR_Word Var_77;

      {
        MaybeTailRecSlot_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTailRecSlot_50, 0) = ((MR_Box) (STATE_VARIABLE_NextSlot_75_75));
      }
      TailRecLval_51 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_27, STATE_VARIABLE_NextSlot_75_75);
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (TailRecLval_51));
        MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (TailRecLabel_48));
      }
      {
        MaybeTailRecInfo_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTailRecInfo_52, 0) = ((MR_Box) (Var_77));
      }
      STATE_VARIABLE_NextSlot_78_78 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NextSlot_75_75 + (MR_Unsigned) 1);
    }
    hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ProcInfo_12, &MaybeCallTableTip_53);
    if ((MaybeCallTableTip_53 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeCallTableSlot_56 = (MR_Word) ((MR_Unsigned) 0U);
      MaybeCallTableLval_58 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word CallTableLval_57;

      {
        MaybeCallTableSlot_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeCallTableSlot_56, 0) = ((MR_Box) (STATE_VARIABLE_NextSlot_78_78));
      }
      CallTableLval_57 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_27, STATE_VARIABLE_NextSlot_78_78);
      {
        MaybeCallTableLval_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeCallTableLval_58, 0) = ((MR_Box) (CallTableLval_57));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *TraceSlotInfo_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeFromFullSlot_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeIoSeqSlot_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeTrailSlot_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeMaxfrSlot_45));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeCallTableSlot_56));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MaybeTailRecSlot_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *TraceInfo_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (TraceLevel_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TraceSuppress_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeFromFullSlotLval_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeIoSeqLval_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeTrailLvals_42));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MaybeMaxfrLval_47));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MaybeCallTableLval_58));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MaybeTailRecInfo_52));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MaybeRedoLayoutLabel_25));
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__trace_reserved_slots_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredInfo_8,
  MR_Word ProcInfo_9,
  MR_Word Globals_10,
  MR_Integer * ReservedSlots_11,
  MR_Word * MaybeTableVarInfo_12)
{
  {
    MR_bool succeeded;
    MR_Word TraceLevel_13;
    MR_Word TraceSuppress_14;
    MR_Word TraceTableIo_15;
    MR_Word FixedSlots_16;

    libs__globals__get_trace_level_2_p_0(Globals_10, &TraceLevel_13);
    libs__globals__get_trace_suppress_2_p_0(Globals_10, &TraceSuppress_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 141, &TraceTableIo_15);
    FixedSlots_16 = libs__trace_params__eff_trace_level_needs_fixed_slots_4_f_0(ModuleInfo_7, PredInfo_8, ProcInfo_9, TraceLevel_13);
    switch (FixedSlots_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ReservedSlots_11 = (MR_Integer) 0;
          *MaybeTableVarInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer RedoLayout_18;
          MR_Integer FromFull_19;
          MR_Integer IoSeq_20;
          MR_Word UseTrail_21;
          MR_Integer Trail_22;
          MR_Word NeedsMaxfrSlot_23;
          MR_Integer Maxfr_24;
          MR_Word HasTailRecCall_25;
          MR_Word HasSelfTailRecCall_26;
          MR_Integer TailRec_28;
          MR_Integer ReservedSlots0_29;
          MR_Word MaybeCallTableVar_30;
          MR_Integer Var_38;
          MR_Integer Var_39;
          MR_Integer Var_40;
          MR_Integer Var_41;
          MR_Integer Var_42;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_36;

          Var_33 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_9);
          succeeded = (Var_33 == (MR_Integer) 2);
          if (succeeded)
          {
            Var_35 = (MR_Integer) 2;
            Var_34 = libs__trace_params__eff_trace_needs_port_6_f_0(ModuleInfo_7, PredInfo_8, ProcInfo_9, TraceLevel_13, TraceSuppress_14, Var_35);
            succeeded = (Var_34 == (MR_Integer) 1);
          }
          if (succeeded)
            RedoLayout_18 = (MR_Integer) 1;
          else
            RedoLayout_18 = (MR_Integer) 0;
          Var_36 = libs__trace_params__eff_trace_level_needs_from_full_slot_4_f_0(ModuleInfo_7, PredInfo_8, ProcInfo_9, TraceLevel_13);
          succeeded = (Var_36 == (MR_Integer) 1);
          if (succeeded)
            FromFull_19 = (MR_Integer) 1;
          else
            FromFull_19 = (MR_Integer) 0;
          switch (TraceTableIo_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              IoSeq_20 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              IoSeq_20 = (MR_Integer) 1;
              break;
          }
          libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 249, &UseTrail_21);
          switch (UseTrail_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Trail_22 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              Trail_22 = (MR_Integer) 2;
              break;
          }
          hlds__hlds_pred__proc_info_get_needs_maxfr_slot_2_p_0(ProcInfo_9, &NeedsMaxfrSlot_23);
          switch (NeedsMaxfrSlot_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Maxfr_24 = (MR_Integer) 0;
              break;
            case (MR_Integer) 0:
              Maxfr_24 = (MR_Integer) 1;
              break;
          }
          hlds__hlds_pred__proc_info_get_has_tail_rec_call_2_p_0(ProcInfo_9, &HasTailRecCall_25);
          HasSelfTailRecCall_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HasTailRecCall_25, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          switch (HasSelfTailRecCall_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              TailRec_28 = (MR_Integer) 0;
              break;
            case (MR_Integer) 0:
              TailRec_28 = (MR_Integer) 1;
              break;
          }
          Var_42 = (MR_Integer) ((MR_Unsigned) 3 + (MR_Unsigned) RedoLayout_18);
          Var_41 = (MR_Integer) ((MR_Unsigned) Var_42 + (MR_Unsigned) FromFull_19);
          Var_40 = (MR_Integer) ((MR_Unsigned) Var_41 + (MR_Unsigned) IoSeq_20);
          Var_39 = (MR_Integer) ((MR_Unsigned) Var_40 + (MR_Unsigned) Trail_22);
          Var_38 = (MR_Integer) ((MR_Unsigned) Var_39 + (MR_Unsigned) Maxfr_24);
          ReservedSlots0_29 = (MR_Integer) ((MR_Unsigned) Var_38 + (MR_Unsigned) TailRec_28);
          hlds__hlds_pred__proc_info_get_call_table_tip_2_p_0(ProcInfo_9, &MaybeCallTableVar_30);
          if ((MaybeCallTableVar_30 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *ReservedSlots_11 = ReservedSlots0_29;
            *MaybeTableVarInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word CallTableVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCallTableVar_30, (MR_Integer) 0))));
            MR_Word Var_44;

            *ReservedSlots_11 = (MR_Integer) ((MR_Unsigned) ReservedSlots0_29 + (MR_Unsigned) 1);
            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (CallTableVar_31));
              MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (*ReservedSlots_11));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeTableVarInfo_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_44));
            }
          }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__trace_gen__do_we_need_maxfr_slot_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleInfo_7,
  MR_Word PredInfo0_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * STATE_VARIABLE_ProcInfo_15)
{
  {
    MR_bool succeeded;
    MR_Word TraceLevel_10;
    MR_Word CodeModel_11;
    MR_Word NeedsMaxfrSlot_13;
    MR_Word Goal_12;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;

    libs__globals__get_trace_level_2_p_0(Globals_6, &TraceLevel_10);
    CodeModel_11 = hlds__code_model__proc_info_interface_code_model_1_f_0(STATE_VARIABLE_ProcInfo_0_14);
    Var_16 = libs__trace_params__eff_trace_level_is_none_4_f_0(ModuleInfo_7, PredInfo0_8, STATE_VARIABLE_ProcInfo_0_14, TraceLevel_10);
    succeeded = (Var_16 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (CodeModel_11 != (MR_Integer) 2);
      if (succeeded)
      {
        hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_14, &Goal_12);
        Var_17 = (MR_Integer) 1;
        ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(Goal_12, &Var_19);
        succeeded = (Var_17 == Var_19);
      }
    }
    if (succeeded)
      NeedsMaxfrSlot_13 = (MR_Integer) 0;
    else
      NeedsMaxfrSlot_13 = (MR_Integer) 1;
    hlds__hlds_pred__proc_info_set_needs_maxfr_slot_3_p_0(NeedsMaxfrSlot_13, STATE_VARIABLE_ProcInfo_0_14, STATE_VARIABLE_ProcInfo_15);
  }
}

void MR_CALL 
ll_backend__trace_gen__trace_fail_vars_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ProcInfo_5,
  MR_Word * FailVars_6)
{
  {
    MR_bool succeeded;
    MR_Word HeadVars_7;
    MR_Word Modes_8;
    MR_Word ArgInfos_9;
    MR_Word VarTypes_10;
    MR_Word Insts_11;
    MR_Word FailVarsList_12;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_5, &HeadVars_7);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_5, &Modes_8);
    hlds__hlds_pred__proc_info_arg_info_2_p_0(ProcInfo_5, &ArgInfos_9);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_5, &VarTypes_10);
    check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_4, Modes_8, &Insts_11);
    succeeded = ll_backend__trace_gen__build_fail_vars_6_p_0(HeadVars_7, Insts_11, ArgInfos_9, ModuleInfo_4, VarTypes_10, &FailVarsList_12);
    if (succeeded)
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FailVarsList_12, FailVars_6);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.trace_gen.trace_fail_vars\'/3", (MR_String) "length mismatch");
        return;
      }
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen__build_fail_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word ModuleInfo_4,
  MR_Word VarTypes_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Inst_11;
      MR_Word Insts_12;
      MR_Word Info_13;
      MR_Word Infos_14;
      MR_Word FailVars0_18;
      MR_Word ArgMode_20;
      MR_Word Type_21;
      MR_Word Var_22;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Inst_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Insts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Info_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
          Infos_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
          succeeded = ll_backend__trace_gen__build_fail_vars_6_p_0(Vars_10, Insts_12, Infos_14, ModuleInfo_4, VarTypes_5, &FailVars0_18);
          if (succeeded)
          {
            ArgMode_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 1))) & (MR_Integer) 3);
            succeeded = (ArgMode_20 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ModuleInfo_4, Inst_11);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__vartypes__lookup_var_type_3_p_0(VarTypes_5, Var_9, &Type_21);
                Var_22 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_4, Type_21);
                succeeded = (Var_22 == (MR_Integer) 1);
              }
            }
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FailVars0_18));
              }
            else
              *HeadVar__6_6 = FailVars0_18;
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__trace_gen__get_trace_maybe_tail_rec_info_2_p_0(
  MR_Word TraceInfo_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceInfo_3, (MR_Integer) 7))));
}

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_event_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__trace_gen____Unify____external_event_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____external_event_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__trace_gen____Compare____external_event_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____external_trace_port_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__trace_gen____Unify____external_trace_port_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____external_trace_port_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__trace_gen____Compare____external_trace_port_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____negation_end_port_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__trace_gen____Unify____negation_end_port_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____negation_end_port_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__trace_gen____Compare____negation_end_port_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__trace_gen____Unify____trace_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__trace_gen____Compare____trace_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_port_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__trace_gen____Unify____trace_port_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_port_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__trace_gen____Compare____trace_port_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__trace_gen____Unify____trace_slot_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__trace_gen____Unify____trace_slot_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__trace_gen____Compare____trace_slot_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__trace_gen____Compare____trace_slot_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module ll_backend.trace_gen.
