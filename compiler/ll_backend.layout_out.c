/*
** Automatically generated from `layout_out.m'
** by the Mercury compiler,
** version rotd-2022-01-15
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


// :- module ll_backend.layout_out.
// :- implementation.

/*
INIT mercury__ll_backend__layout_out__init
ENDINIT
*/

#include "ll_backend.layout_out.mih"


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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
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
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__layout_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__layout_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0;

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_being_defined_0_0;

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_being_defined_0_1;

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_ordinal_ordered_being_defined_0[2];

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_name_ordered_being_defined_0[2];

static const MR_Integer ll_backend__layout_out__ll_backend__layout_out__functor_number_map_being_defined_0[2];

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_0;

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_1;

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_ordinal_ordered_use_layout_macro_0[2];

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_name_ordered_use_layout_macro_0[2];

static const MR_Integer ll_backend__layout_out__ll_backend__layout_out__functor_number_map_use_layout_macro_0[2];

static void MR_CALL 
ll_backend__layout_out__IntroducedFrom__pred__output_layout_slot_chunk__3353__1_4_p_0(
  MR_Integer HeadVar__1_28,
  MR_Word HeadVar__2_29);

static void MR_CALL 
ll_backend__layout_out__IntroducedFrom__pred__output_synth_attr_args__2941__1_4_p_0(
  MR_Integer HeadVar__1_69,
  MR_Word HeadVar__2_70);

static void MR_CALL 
ll_backend__layout_out__IntroducedFrom__pred__output_synth_attr_args__2931__1_4_p_0(
  MR_Integer HeadVar__1_64,
  MR_Word HeadVar__2_65);

static void MR_CALL 
ll_backend__layout_out__IntroducedFrom__pred__output_event_spec_components__2900__1_4_p_0(
  MR_Integer HeadVar__1_83,
  MR_Word HeadVar__2_84);

static void MR_CALL 
ll_backend__layout_out__output_layout_name_in_vector_5_p_0(
  MR_Word Stream_6,
  MR_String Prefix_7,
  MR_Word Name_8);

static void MR_CALL 
ll_backend__layout_out__output_layout_slot_chunk_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__layout_out__output_layout_slot_chunk_6_p_0(
  MR_Word Stream_7,
  MR_String Macro_8,
  MR_String ModuleName_9,
  MR_Word SlotNums_10);

static void MR_CALL 
ll_backend__layout_out__output_proc_layout_name_in_vector_4_p_0(
  MR_Word Stream_5,
  MR_Word LayoutName_6);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_7_p_0(
  MR_Word Info_8,
  MR_Word ModuleName_9,
  MR_Word TypesRvalMap_10,
  MR_Word EventSpec_11,
  MR_Word Stream_12);

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_6_p_0(
  MR_Word ModuleName_7,
  MR_Integer EventNumber_8,
  MR_Word Attr_9,
  MR_Word Stream_10);

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleName_10,
  MR_Integer EventNumber_11,
  MR_Word Attr_12,
  MR_Word STATE_VARIABLE_DeclSet_0_25,
  MR_Word * STATE_VARIABLE_DeclSet_26);

static void MR_CALL 
ll_backend__layout_out__output_attr_name_4_p_0(
  MR_Word Attr_5,
  MR_Word Stream_6);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleName_9,
  MR_Word EventSpec_10,
  MR_Word STATE_VARIABLE_DeclSet_0_23,
  MR_Word * STATE_VARIABLE_DeclSet_24);

static MR_String MR_CALL 
ll_backend__layout_out__subst_to_name_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_alloc_site_slot_7_p_0(
  MR_Word _Info_8,
  MR_Word Stream_9,
  MR_Word AllocSite_10,
  MR_Integer STATE_VARIABLE_Slot_0_19,
  MR_Integer * STATE_VARIABLE_Slot_20);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_115_108_111_116_95_95_91_49_93_95_48_7_p_0(
  MR_Word Stream_9,
  MR_Word AllocSite_10,
  MR_Integer STATE_VARIABLE_Slot_0_19,
  MR_Integer * STATE_VARIABLE_Slot_20);

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String String_10,
  MR_Integer STATE_VARIABLE_Slot_0_14,
  MR_Integer * STATE_VARIABLE_Slot_15);

static void MR_CALL 
ll_backend__layout_out__output_exec_trace_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word ExecTrace_10,
  MR_Integer STATE_VARIABLE_Slot_0_41,
  MR_Integer * STATE_VARIABLE_Slot_42);

static MR_String MR_CALL 
ll_backend__layout_out__eval_method_to_c_string_1_f_0(
  MR_Word EvalMethod_3);

static void MR_CALL 
ll_backend__layout_out__write_maybe_slot_num_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word TableIoEntry_10,
  MR_Integer STATE_VARIABLE_Slot_0_20,
  MR_Integer * STATE_VARIABLE_Slot_21);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word ProcStatic_10,
  MR_Integer STATE_VARIABLE_Slot_0_31,
  MR_Integer * STATE_VARIABLE_Slot_32);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_slot_7_p_0(
  MR_Word Stream_8,
  MR_Word AutoComments_9,
  MR_Word CoveragePoint_10,
  MR_Integer STATE_VARIABLE_Slot_0_17,
  MR_Integer * STATE_VARIABLE_Slot_18);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word CallSiteStatic_10,
  MR_Integer STATE_VARIABLE_Slot_0_22,
  MR_Integer * STATE_VARIABLE_Slot_23);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_slot_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word CallSiteStatic_10,
  MR_Word STATE_VARIABLE_DeclSet_0_34,
  MR_Word * STATE_VARIABLE_DeclSet_35);

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layout_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word LabelLayout_10,
  MR_Integer STATE_VARIABLE_Slot_0_34,
  MR_Integer * STATE_VARIABLE_Slot_35);

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layout_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word LabelLayout_10,
  MR_Integer STATE_VARIABLE_Slot_0_33,
  MR_Integer * STATE_VARIABLE_Slot_34);

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layout_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word LabelLayout_10,
  MR_Integer STATE_VARIABLE_Slot_0_24,
  MR_Integer * STATE_VARIABLE_Slot_25);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word Stream_8,
  MR_String ModuleName_9,
  MR_Word BasicLabelLayout_10);

static void MR_CALL 
ll_backend__layout_out__output_user_event_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word UserEvent_10,
  MR_Integer STATE_VARIABLE_Slot_0_18,
  MR_Integer * STATE_VARIABLE_Slot_19);

static void MR_CALL 
ll_backend__layout_out__output_rval_as_addr_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Rval_8);

static void MR_CALL 
ll_backend__layout_out__output_maybe_var_num_slot_6_p_0(
  MR_Word Stream_7,
  MR_Word MaybeVarNum_8,
  MR_Integer STATE_VARIABLE_Slot_0_12,
  MR_Integer * STATE_VARIABLE_Slot_13);

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_noac_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_noac_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word ChunkPTIs_10,
  MR_Integer STATE_VARIABLE_Slot_0_14,
  MR_Integer * STATE_VARIABLE_Slot_15);

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_ac_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_ac_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word ChunkPTIs_10,
  MR_Integer STATE_VARIABLE_Slot_0_14,
  MR_Integer * STATE_VARIABLE_Slot_15);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_109_111_100_117_108_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_95_91_51_93_95_48_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleName_10,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DeclSet_0_18,
  MR_Word * STATE_VARIABLE_DeclSet_19);

static void MR_CALL 
ll_backend__layout_out__output_module_string_table_strings_5_p_0(
  MR_Word Stream_1,
  MR_String String_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_data_defns_10_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word ModuleName_3,
  MR_Integer FileNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_DeclSet_0_7,
  MR_Word * STATE_VARIABLE_DeclSet_8);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_data_defn_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word ModuleName_13,
  MR_Integer FileNum_14,
  MR_Word FileLayout_15,
  MR_Word * FileLayoutName_16,
  MR_Word STATE_VARIABLE_DeclSet_0_27,
  MR_Word * STATE_VARIABLE_DeclSet_28);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_label_layout_vector_defn_10_p_0(
  MR_Word Stream_11,
  MR_String MangledModuleName_12,
  MR_Word ModuleName_13,
  MR_Integer FileNum_14,
  MR_Word LabelSlots_15,
  MR_Word * LayoutName_16,
  MR_Word STATE_VARIABLE_DeclSet_0_21,
  MR_Word * STATE_VARIABLE_DeclSet_22);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_line_number_vector_defn_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word ModuleName_13,
  MR_Integer FileNum_14,
  MR_Word LineNumbers_15,
  MR_Word * LayoutName_16,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleName_10,
  MR_Word FileLayoutNames_11,
  MR_Word * VectorName_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__layout_out__output_event_set_desc_defn_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleName_10,
  MR_String EventSetDesc_11,
  MR_Word * LayoutName_12,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__layout_out__output_module_string_table_chars_6_p_0(
  MR_Word Stream_7,
  MR_Integer CurIndex_8,
  MR_Integer Count_9,
  MR_String String_10);

static void MR_CALL 
ll_backend__layout_out__output_multi_byte_char_codes_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleName_10,
  MR_Word ProcLayoutNames_11,
  MR_Word * VectorName_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word EventSpecs_13,
  MR_Word ModuleName_14,
  MR_Word TypesRvalMap_15,
  MR_Word * LayoutName_16,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20);

static MR_Integer MR_CALL 
ll_backend__layout_out__layout_version_number_0_f_0(void);

static void MR_CALL 
ll_backend__layout_out__output_bytecodes_driver_4_p_0(
  MR_Word Stream_5,
  MR_Word Bytes_6);

static void MR_CALL 
ll_backend__layout_out__output_bytecodes_7_p_0(
  MR_Word Stream_8,
  MR_Word Bytes_9,
  MR_Word * BytesLeft_10,
  MR_Integer STATE_VARIABLE_Seq_0_16,
  MR_Integer MaxSeq_12);

static MR_String MR_CALL 
ll_backend__layout_out__detism_to_c_detism_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_proc_id_5_p_0(
  MR_Word Stream_6,
  MR_Word ProcLabel_7,
  MR_Word Origin_8);

static void MR_CALL 
ll_backend__layout_out__quote_and_write_string_4_p_0(
  MR_Word Stream_5,
  MR_String String_6);

static MR_String MR_CALL 
ll_backend__layout_out__origin_name_2_f_0(
  MR_Word Origin_4,
  MR_String Name0_5);

static MR_Box MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__layout_out__ints_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_layout_decl_6_p_0(
  MR_Word Stream_7,
  MR_Word LayoutName_8,
  MR_Word STATE_VARIABLE_DeclSet_0_11,
  MR_Word * STATE_VARIABLE_DeclSet_12);

static MR_String MR_CALL 
ll_backend__layout_out__proc_layout_kind_to_type_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_alloc_sites_array_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_alloc_sites_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word AllocSites_8);

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_array_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TSStringTable_8);

static void MR_CALL 
ll_backend__layout_out__output_exec_traces_array_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_exec_traces_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ExecTraces_8);

static void MR_CALL 
ll_backend__layout_out__output_proc_event_layout_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ProcEventLayoutSlotNames_8);

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_5_p_0(
  MR_Word Stream_1,
  MR_String ModuleName_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__layout_out__find_slots_in_same_array_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevSlotNums_0_3,
  MR_Word * STATE_VARIABLE_RevSlotNums_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_array_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TableIoEntries_8);

static void MR_CALL 
ll_backend__layout_out__output_proc_body_bytecodes_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Bytecodes_8);

static void MR_CALL 
ll_backend__layout_out__output_proc_var_names_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word VarNames_8);

static void MR_CALL 
ll_backend__layout_out__output_proc_head_var_nums_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVarNums_8);

static void MR_CALL 
ll_backend__layout_out__output_proc_statics_array_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_proc_statics_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ProcStatics_8);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_dynamic_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Integer NumCoveragePoints_8);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_array_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_array_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word CoveragePoints_9,
  MR_Integer NumCoveragePoints_10);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word CallSiteStatics_10,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layouts_array_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layouts_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word LabelLayouts_8);

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layouts_array_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layouts_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word LabelLayouts_8);

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layouts_array_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layouts_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word LabelLayouts_8);

static void MR_CALL 
ll_backend__layout_out__output_user_events_array_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_user_events_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word UserEvents_8);

static void MR_CALL 
ll_backend__layout_out__output_user_event_var_nums_array_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_user_event_var_nums_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word MaybeVarNums_8);

static void MR_CALL 
ll_backend__layout_out__output_long_locns_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word LongLocns_8);

static void MR_CALL 
ll_backend__layout_out__output_short_locns_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ShortLocns_8);

static void MR_CALL 
ll_backend__layout_out__output_hlds_var_nums_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word VarNums_8);

static void MR_CALL 
ll_backend__layout_out__output_numbers_in_vector_noac_5_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Slot_0_3);

static void MR_CALL 
ll_backend__layout_out__output_upto_n_numbers_in_vector_noac_8_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Integer N_3,
  MR_Word * HeadVar__4_4,
  MR_Integer STATE_VARIABLE_Slot_0_5,
  MR_Integer * STATE_VARIABLE_Slot_6);

static void MR_CALL 
ll_backend__layout_out__output_numbers_in_vector_ac_5_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Slot_0_3);

static void MR_CALL 
ll_backend__layout_out__output_upto_n_numbers_in_vector_ac_8_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Integer N_3,
  MR_Word * HeadVar__4_4,
  MR_Integer STATE_VARIABLE_Slot_0_5,
  MR_Integer * STATE_VARIABLE_Slot_6);

static void MR_CALL 
ll_backend__layout_out__output_pseudo_type_info_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word PTIs_8);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_111_117_116_101_114_95_108_111_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Length_0_2,
  MR_Integer * STATE_VARIABLE_Length_3);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_105_110_110_101_114_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Count_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Length_0_4,
  MR_Integer * STATE_VARIABLE_Length_5);

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_noac_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_noac_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Slot_0_4,
  MR_Integer * STATE_VARIABLE_Slot_5);

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_ac_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_ac_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Slot_0_4,
  MR_Integer * STATE_VARIABLE_Slot_5);

static MR_bool MR_CALL 
ll_backend__layout_out____Unify____being_defined_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__layout_out____Compare____being_defined_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__layout_out____Unify____use_layout_macro_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__layout_out____Compare____use_layout_macro_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__layout_out_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_2[12][3];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_3[4][1];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_4[1][4];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_5[15][10];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_6[4][9];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_7[2][5];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_9[3][7];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_10[2][8];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_11[1][11];


/* sealed */ struct ll_backend__layout_out__vector_common_type_8_0_s {
  const MR_String ll_backend__layout_out__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct ll_backend__layout_out__vector_common_type_8_0_s ll_backend__layout_out_vector_common_8[24];



static /* final */ const MR_Box ll_backend__layout_out_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_2[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_7[0])),
    ((MR_Box) (ll_backend__layout_out__pred_transform_name_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_7[1])),
    ((MR_Box) (ll_backend__layout_out__pred_transform_name_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_7[0])),
    ((MR_Box) (ll_backend__layout_out__pred_transform_name_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[1])),
    ((MR_Box) (ll_backend__layout_out__output_event_spec_components_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[2])),
    ((MR_Box) (ll_backend__layout_out__output_event_spec_components_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[2])),
    ((MR_Box) (ll_backend__layout_out__output_synth_attr_args_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[2])),
    ((MR_Box) (ll_backend__layout_out__output_synth_attr_args_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[2])),
    ((MR_Box) (ll_backend__layout_out__output_layout_slot_chunk_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_3[4][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 3 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_5[15][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout_out__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_maybe_auto_comments_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&ll_backend__layout_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_6[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__layout_out__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_7[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__layout_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_9[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_10[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_11[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct ll_backend__layout_out__vector_common_type_8_0_s ll_backend__layout_out_vector_common_8[24] = {
  /* row 0 */   {     (MR_String) "MR_DETISM_DET" },
  /* row 1 */   {     (MR_String) "MR_DETISM_SEMI" },
  /* row 2 */   {     (MR_String) "MR_DETISM_MULTI" },
  /* row 3 */   {     (MR_String) "MR_DETISM_NON" },
  /* row 4 */   {     (MR_String) "MR_DETISM_CCMULTI" },
  /* row 5 */   {     (MR_String) "MR_DETISM_CCNON" },
  /* row 6 */   {     (MR_String) "MR_DETISM_ERRONEOUS" },
  /* row 7 */   {     (MR_String) "MR_DETISM_FAILURE" },
  /* row 8 */   {     (MR_String) "CALL" },
  /* row 9 */   {     (MR_String) "EXIT" },
  /* row 10 */   {     (MR_String) "REDO" },
  /* row 11 */   {     (MR_String) "FAIL" },
  /* row 12 */   {     (MR_String) "TAILREC_CALL" },
  /* row 13 */   {     (MR_String) "EXCEPTION" },
  /* row 14 */   {     (MR_String) "COND" },
  /* row 15 */   {     (MR_String) "THEN" },
  /* row 16 */   {     (MR_String) "ELSE" },
  /* row 17 */   {     (MR_String) "NEG_ENTER" },
  /* row 18 */   {     (MR_String) "NEG_SUCCESS" },
  /* row 19 */   {     (MR_String) "NEG_FAILURE" },
  /* row 20 */   {     (MR_String) "DISJ_FIRST" },
  /* row 21 */   {     (MR_String) "DISJ_LATER" },
  /* row 22 */   {     (MR_String) "SWITCH" },
  /* row 23 */   {     (MR_String) "USER" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__layout_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__layout_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)
  }
};

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_being_defined_0_0 = {
  (MR_String) "not_being_defined",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_being_defined_0_1 = {
  (MR_String) "being_defined",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_ordinal_ordered_being_defined_0[2] = {
  &ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_being_defined_0_0,
  &ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_being_defined_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_name_ordered_being_defined_0[2] = {
  &ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_being_defined_0_1,
  &ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_being_defined_0_0
};

static const MR_Integer ll_backend__layout_out__ll_backend__layout_out__functor_number_map_being_defined_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__layout_out__ll_backend__layout_out__type_ctor_info_being_defined_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__layout_out____Unify____being_defined_0_0_10001)),
  ((MR_Box) (ll_backend__layout_out____Compare____being_defined_0_0_10001)),
  (MR_String) "ll_backend.layout_out",
  (MR_String) "being_defined",
  {     ll_backend__layout_out__ll_backend__layout_out__enum_name_ordered_being_defined_0 },
  {     ll_backend__layout_out__ll_backend__layout_out__enum_ordinal_ordered_being_defined_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__layout_out__ll_backend__layout_out__functor_number_map_being_defined_0,

};

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_0 = {
  (MR_String) "do_not_use_layout_macro",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_1 = {
  (MR_String) "use_layout_macro",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_ordinal_ordered_use_layout_macro_0[2] = {
  &ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_0,
  &ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_name_ordered_use_layout_macro_0[2] = {
  &ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_0,
  &ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_1
};

static const MR_Integer ll_backend__layout_out__ll_backend__layout_out__functor_number_map_use_layout_macro_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__layout_out__ll_backend__layout_out__type_ctor_info_use_layout_macro_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__layout_out____Unify____use_layout_macro_0_0_10001)),
  ((MR_Box) (ll_backend__layout_out____Compare____use_layout_macro_0_0_10001)),
  (MR_String) "ll_backend.layout_out",
  (MR_String) "use_layout_macro",
  {     ll_backend__layout_out__ll_backend__layout_out__enum_name_ordered_use_layout_macro_0 },
  {     ll_backend__layout_out__ll_backend__layout_out__enum_ordinal_ordered_use_layout_macro_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__layout_out__ll_backend__layout_out__functor_number_map_use_layout_macro_0,

};

static void MR_CALL 
ll_backend__layout_out__IntroducedFrom__pred__output_layout_slot_chunk__3353__1_4_p_0(
  MR_Integer HeadVar__1_28,
  MR_Word HeadVar__2_29)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv1_HeadVar__4_31;

    func_0(((MR_Box) ((MR_Word) (&ll_backend__layout_out_scalar_common_2[1]))), ((MR_Box) (HeadVar__1_28)), ((MR_Box) (HeadVar__2_29)), ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__4_31);
  }
}

static void MR_CALL 
ll_backend__layout_out__IntroducedFrom__pred__output_synth_attr_args__2941__1_4_p_0(
  MR_Integer HeadVar__1_69,
  MR_Word HeadVar__2_70)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv1_HeadVar__4_72;

    func_0(((MR_Box) ((MR_Word) (&ll_backend__layout_out_scalar_common_2[1]))), ((MR_Box) (HeadVar__1_69)), ((MR_Box) (HeadVar__2_70)), ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__4_72);
  }
}

static void MR_CALL 
ll_backend__layout_out__IntroducedFrom__pred__output_synth_attr_args__2931__1_4_p_0(
  MR_Integer HeadVar__1_64,
  MR_Word HeadVar__2_65)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv1_HeadVar__4_67;

    func_0(((MR_Box) ((MR_Word) (&ll_backend__layout_out_scalar_common_2[1]))), ((MR_Box) (HeadVar__1_64)), ((MR_Box) (HeadVar__2_65)), ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__4_67);
  }
}

static void MR_CALL 
ll_backend__layout_out__IntroducedFrom__pred__output_event_spec_components__2900__1_4_p_0(
  MR_Integer HeadVar__1_83,
  MR_Word HeadVar__2_84)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv1_HeadVar__4_86;

    func_0(((MR_Box) ((MR_Word) (&ll_backend__layout_out_scalar_common_2[1]))), ((MR_Box) (HeadVar__1_83)), ((MR_Box) (HeadVar__2_84)), ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__4_86);
  }
}

void MR_CALL 
ll_backend__layout_out____Compare____use_layout_macro_0_0(
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
ll_backend__layout_out____Unify____use_layout_macro_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__layout_out____Compare____being_defined_0_0(
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
ll_backend__layout_out____Unify____being_defined_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_name_in_vector_5_p_0(
  MR_Word Stream_6,
  MR_String Prefix_7,
  MR_Word Name_8)
{
  {
    mercury__io__write_string_4_p_0(Stream_6, Prefix_7);
    ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_8);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slot_chunk_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__IntroducedFrom__pred__output_layout_slot_chunk__3353__1_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slot_chunk_6_p_0(
  MR_Word Stream_7,
  MR_String Macro_8,
  MR_String ModuleName_9,
  MR_Word SlotNums_10)
{
  {
    MR_Integer Length_12;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SlotNums_10, &Length_12);
    mercury__io__write_string_4_p_0(Stream_7, Macro_8);
    mercury__io__write_int_4_p_0(Stream_7, Length_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
    mercury__io__write_string_4_p_0(Stream_7, ModuleName_9);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[11]), (MR_String) ",", SlotNums_10, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_layout_name_in_vector_4_p_0(
  MR_Word Stream_5,
  MR_Word LayoutName_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) LayoutName_6)) == (MR_Integer) 0);
    MR_Word RttiProcLabel_8;

    if (succeeded)
    {
      RttiProcLabel_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LayoutName_6, (MR_Integer) 0))));
      {
        MR_Word ProcLabel_10;
        MR_String Var_15;

        ProcLabel_10 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_8);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "MR_PROC_LAYOUT1(");
        Var_15 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 0, ProcLabel_10);
        mercury__io__write_string_4_p_0(Stream_5, Var_15);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")\n");
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.layout_out.output_proc_layout_name_in_vector\'/4", (MR_String) "not proc layout");
        return;
      }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_7_p_0(
  MR_Word Info_8,
  MR_Word ModuleName_9,
  MR_Word TypesRvalMap_10,
  MR_Word EventSpec_11,
  MR_Word Stream_12)
{
  {
    MR_bool succeeded;
    MR_Integer EventNumber_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EventSpec_11, (MR_Integer) 0))));
    MR_String EventName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), EventSpec_11, (MR_Integer) 1))));
    MR_Word Attrs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSpec_11, (MR_Integer) 3))));
    MR_Word SynthOrder_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSpec_11, (MR_Integer) 4))));
    MR_Word TypesRval_19;
    MR_Word AttrNamesLayoutName_20;
    MR_Integer Var_32;
    MR_Box conv0_TypesRval_19;
    MR_Word Var_60;
    MR_Integer Var_61;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), TypesRvalMap_10, EventNumber_14, &conv0_TypesRval_19);
    TypesRval_19 = ((MR_Word) (conv0_TypesRval_19));
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "{ \"");
    mercury__io__write_string_4_p_0(Stream_12, EventName_15);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\", ");
    Var_32 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), Attrs_17);
    mercury__io__write_int_4_p_0(Stream_12, Var_32);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) ",\n\t");
    {
      AttrNamesLayoutName_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), AttrNamesLayoutName_20, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), AttrNamesLayoutName_20, 1) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(3), AttrNamesLayoutName_20, 2) = ((MR_Box) (EventNumber_14));
    }
    ll_backend__layout_out__output_layout_name_4_p_0(Stream_12, AttrNamesLayoutName_20);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) ",\n\t(MR_TypeInfo *) ");
    succeeded = ((((MR_tag((MR_Word) TypesRval_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypesRval_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypesRval_19, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0))));
        succeeded = (Var_61 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "0");
    else
    {
      MR_Word DataId_59;
      MR_Word Var_64;
      MR_Word Var_65;

      succeeded = ((((MR_tag((MR_Word) TypesRval_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypesRval_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypesRval_19, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_64)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_64, (MR_Integer) 0)))) == (MR_Integer) 13)));
        if (succeeded)
        {
          DataId_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_64, (MR_Integer) 1))));
          Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_64, (MR_Integer) 2))));
          succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
        ll_backend__llds_out__llds_out_data__output_data_id_addr_5_p_0(Info_8, Stream_12, DataId_59);
      else
      {
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, TypesRval_19, Stream_12);
      }
    }
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) ",\n\t");
    if ((SynthOrder_18 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "NULL, NULL }");
    else
    {
      MR_Word SynthAttrsLayoutName_23;
      MR_Word SynthOrderLayoutName_24;

      {
        SynthAttrsLayoutName_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SynthAttrsLayoutName_23, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), SynthAttrsLayoutName_23, 1) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(3), SynthAttrsLayoutName_23, 2) = ((MR_Box) (EventNumber_14));
      }
      {
        SynthOrderLayoutName_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SynthOrderLayoutName_24, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), SynthOrderLayoutName_24, 1) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(3), SynthOrderLayoutName_24, 2) = ((MR_Box) (EventNumber_14));
      }
      ll_backend__layout_out__output_layout_name_4_p_0(Stream_12, SynthAttrsLayoutName_23);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) ",\n\t");
      ll_backend__layout_out__output_layout_name_4_p_0(Stream_12, SynthOrderLayoutName_24);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) " }");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_6_p_0(
  MR_Word ModuleName_7,
  MR_Integer EventNumber_8,
  MR_Word Attr_9,
  MR_Word Stream_10)
{
  {
    MR_Word MaybeSynthCall_12;

    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{ ");
    MaybeSynthCall_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr_9, (MR_Integer) 4))));
    if ((MaybeSynthCall_12 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "-1, -1, NULL, NULL");
    else
    {
      MR_Word SynthCall_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSynthCall_12, (MR_Integer) 0))));
      MR_Integer FuncAttrNum_15;
      MR_Word ArgAttrNameNums_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SynthCall_13, (MR_Integer) 1))));
      MR_Integer AttrNumber_18;
      MR_Word ArgsLayoutName_19;
      MR_Word OrderLayoutName_20;
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SynthCall_13, (MR_Integer) 0))));
      MR_Integer Var_31;

      FuncAttrNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1))));
      mercury__io__write_int_4_p_0(Stream_10, FuncAttrNum_15);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", ");
      Var_31 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__layout_out_scalar_common_2[2]), ArgAttrNameNums_16);
      mercury__io__write_int_4_p_0(Stream_10, Var_31);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n ");
      AttrNumber_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Attr_9, (MR_Integer) 0))));
      {
        ArgsLayoutName_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_19, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_19, 1) = ((MR_Box) (ModuleName_7));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_19, 2) = ((MR_Box) (EventNumber_8));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_19, 3) = ((MR_Box) (AttrNumber_18));
      }
      ll_backend__layout_out__output_layout_name_4_p_0(Stream_10, ArgsLayoutName_19);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ",\n ");
      {
        OrderLayoutName_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), OrderLayoutName_20, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), OrderLayoutName_20, 1) = ((MR_Box) (ModuleName_7));
        MR_hl_field(MR_mktag(3), OrderLayoutName_20, 2) = ((MR_Box) (EventNumber_8));
        MR_hl_field(MR_mktag(3), OrderLayoutName_20, 3) = ((MR_Box) (AttrNumber_18));
      }
      ll_backend__layout_out__output_layout_name_4_p_0(Stream_10, OrderLayoutName_20);
    }
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) " }");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__IntroducedFrom__pred__output_synth_attr_args__2941__1_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__IntroducedFrom__pred__output_synth_attr_args__2931__1_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleName_10,
  MR_Integer EventNumber_11,
  MR_Word Attr_12,
  MR_Word STATE_VARIABLE_DeclSet_0_25,
  MR_Word * STATE_VARIABLE_DeclSet_26)
{
  {
    MR_Word MaybeSynthCall_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr_12, (MR_Integer) 4))));

    if ((MaybeSynthCall_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DeclSet_26 = STATE_VARIABLE_DeclSet_0_25;
    else
    {
      MR_Word SynthCall_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSynthCall_15, (MR_Integer) 0))));
      MR_Word ArgAttrNameNums_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SynthCall_16, (MR_Integer) 1))));
      MR_Word Order_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SynthCall_16, (MR_Integer) 2))));
      MR_Word ArgAttrNums_20;
      MR_Integer AttrNumber_21;
      MR_Word ArgsLayoutName_22;
      MR_Word OrderLayoutName_23;
      MR_Word OrderSentinel_24;
      MR_Word Var_29;
      MR_Word STATE_VARIABLE_DeclSet_30_30;
      MR_Word Var_40;

      mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgAttrNameNums_18, &ArgAttrNums_20);
      AttrNumber_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Attr_12, (MR_Integer) 0))));
      {
        ArgsLayoutName_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_22, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_22, 1) = ((MR_Box) (ModuleName_10));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_22, 2) = ((MR_Box) (EventNumber_11));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_22, 3) = ((MR_Box) (AttrNumber_21));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (ArgsLayoutName_22));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_29, STATE_VARIABLE_DeclSet_0_25, &STATE_VARIABLE_DeclSet_30_30);
      ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, ArgsLayoutName_22, (MR_Integer) 1);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) " =\n{ ");
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[9]), (MR_String) ", ", ArgAttrNums_20, Stream_9);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) " };\n\n");
      {
        OrderLayoutName_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), OrderLayoutName_23, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), OrderLayoutName_23, 1) = ((MR_Box) (ModuleName_10));
        MR_hl_field(MR_mktag(3), OrderLayoutName_23, 2) = ((MR_Box) (EventNumber_11));
        MR_hl_field(MR_mktag(3), OrderLayoutName_23, 3) = ((MR_Box) (AttrNumber_21));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (OrderLayoutName_23));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_40, STATE_VARIABLE_DeclSet_30_30, STATE_VARIABLE_DeclSet_26);
      ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, OrderLayoutName_23, (MR_Integer) 1);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) " =\n{ ");
      OrderSentinel_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Order_19, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_1[3])));
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[10]), (MR_String) ", ", OrderSentinel_24, Stream_9);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) " };\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_attr_name_4_p_0(
  MR_Word Attr_5,
  MR_Word Stream_6)
{
  {
    MR_String Var_12;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\"");
    Var_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Attr_5, (MR_Integer) 1))));
    mercury__io__write_string_4_p_0(Stream_6, Var_12);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\"");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__IntroducedFrom__pred__output_event_spec_components__2900__1_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_synth_attr_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_26;

    ll_backend__layout_out__output_synth_attr_args_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_26);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_26));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_attr_name_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleName_9,
  MR_Word EventSpec_10,
  MR_Word STATE_VARIABLE_DeclSet_0_23,
  MR_Word * STATE_VARIABLE_DeclSet_24)
{
  {
    MR_Integer EventNumber_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EventSpec_10, (MR_Integer) 0))));
    MR_Word Attrs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSpec_10, (MR_Integer) 3))));
    MR_Word SynthOrder_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSpec_10, (MR_Integer) 4))));
    MR_Word AttrNamesLayoutName_18;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_DeclSet_28_28;

    {
      AttrNamesLayoutName_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), AttrNamesLayoutName_18, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), AttrNamesLayoutName_18, 1) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(3), AttrNamesLayoutName_18, 2) = ((MR_Box) (EventNumber_13));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (AttrNamesLayoutName_18));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_27, STATE_VARIABLE_DeclSet_0_23, &STATE_VARIABLE_DeclSet_28_28);
    ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_8, AttrNamesLayoutName_18, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = {\n");
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[7]), (MR_String) ", ", Attrs_16, Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n};\n\n");
    if ((SynthOrder_17 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DeclSet_24 = STATE_VARIABLE_DeclSet_28_28;
    else
    {
      MR_Word SynthAttrsLayoutName_21;
      MR_Word SynthOrderLayoutName_22;
      MR_Word Var_38;
      MR_Word STATE_VARIABLE_DeclSet_39_39;
      MR_Word Var_41;
      MR_Word STATE_VARIABLE_DeclSet_42_42;
      MR_Word Var_47;
      MR_Word Var_52;
      MR_Word Var_60;
      MR_Box conv2_STATE_VARIABLE_DeclSet_39_39;
      MR_Box conv1_STATE_VARIABLE_IO_40_40;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_11[0]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ll_backend__layout_out__output_event_spec_components_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Stream_8));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) (EventNumber_13));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, Attrs_16, ((MR_Box) (STATE_VARIABLE_DeclSet_28_28)), &conv2_STATE_VARIABLE_DeclSet_39_39, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_40_40);
      STATE_VARIABLE_DeclSet_39_39 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_39_39));
      {
        SynthAttrsLayoutName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SynthAttrsLayoutName_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), SynthAttrsLayoutName_21, 1) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(3), SynthAttrsLayoutName_21, 2) = ((MR_Box) (EventNumber_13));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (SynthAttrsLayoutName_21));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_41, STATE_VARIABLE_DeclSet_39_39, &STATE_VARIABLE_DeclSet_42_42);
      ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_8, SynthAttrsLayoutName_21, (MR_Integer) 1);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = {\n");
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[3]));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ll_backend__layout_out__output_event_spec_components_7_p_0_3));
        MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (EventNumber_13));
      }
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), Var_47, (MR_String) ",\n", Attrs_16, Stream_8);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n};\n\n");
      {
        SynthOrderLayoutName_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SynthOrderLayoutName_22, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), SynthOrderLayoutName_22, 1) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(3), SynthOrderLayoutName_22, 2) = ((MR_Box) (EventNumber_13));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (SynthOrderLayoutName_22));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_52, STATE_VARIABLE_DeclSet_42_42, STATE_VARIABLE_DeclSet_24);
      ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_8, SynthOrderLayoutName_22, (MR_Integer) 1);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = {\n");
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SynthOrder_17, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_1[3])));
      parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[8]), (MR_String) ", ", Var_60, Stream_8);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n};\n\n");
    }
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__subst_to_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String Str_5;
    MR_Integer TVar_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Type_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String TypeStr_6;
    MR_Word Var_7;
    MR_String Var_17;
    MR_String Var_18;

    Var_7 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    TypeStr_6 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(Var_7, (MR_Integer) 0, Type_4);
    Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "/", TypeStr_6);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), TVar_3, &Var_18);
    Str_5 = mercury__string__f_43_43_2_f_0(Var_18, Var_17);
    return Str_5;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_alloc_site_slot_7_p_0(
  MR_Word _Info_8,
  MR_Word Stream_9,
  MR_Word AllocSite_10,
  MR_Integer STATE_VARIABLE_Slot_0_19,
  MR_Integer * STATE_VARIABLE_Slot_20)
{
  ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_115_108_111_116_95_95_91_49_93_95_48_7_p_0(Stream_9, AllocSite_10, STATE_VARIABLE_Slot_0_19, STATE_VARIABLE_Slot_20);
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_115_108_111_116_95_95_91_49_93_95_48_7_p_0(
  MR_Word Stream_9,
  MR_Word AllocSite_10,
  MR_Integer STATE_VARIABLE_Slot_0_19,
  MR_Integer * STATE_VARIABLE_Slot_20)
{
  {
    MR_Word ProcLabel_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocSite_10, (MR_Integer) 0))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocSite_10, (MR_Integer) 1))));
    MR_String TypeMsg_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), AllocSite_10, (MR_Integer) 2))));
    MR_Integer Words_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AllocSite_10, (MR_Integer) 3))));
    MR_String FileName_17;
    MR_Integer LineNumber_18;
    MR_String Var_25;

    mercury__term__context_file_2_p_0(Context_14, &FileName_17);
    mercury__term__context_line_2_p_0(Context_14, &LineNumber_18);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\t{ ");
    Var_25 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 1, ProcLabel_13);
    mercury__io__write_string_4_p_0(Stream_9, Var_25);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    backend_libs__c_util__output_quoted_string_4_p_0(Stream_9, FileName_17);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
    mercury__io__write_int_4_p_0(Stream_9, LineNumber_18);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    backend_libs__c_util__output_quoted_string_4_p_0(Stream_9, TypeMsg_15);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
    mercury__io__write_int_4_p_0(Stream_9, Words_16);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "},\n");
    *STATE_VARIABLE_Slot_20 = STATE_VARIABLE_Slot_0_19;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String String_10,
  MR_Integer STATE_VARIABLE_Slot_0_14,
  MR_Integer * STATE_VARIABLE_Slot_15)
{
  {
    MR_Word AutoComments_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);

    switch (AutoComments_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_54;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_14, &Var_54);
          mercury__io__write_string_4_p_0(Stream_9, Var_54);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */ ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    backend_libs__c_util__output_quoted_string_4_p_0(Stream_9, String_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", 0},\n");
    *STATE_VARIABLE_Slot_15 = STATE_VARIABLE_Slot_0_14;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_exec_trace_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word ExecTrace_10,
  MR_Integer STATE_VARIABLE_Slot_0_41,
  MR_Integer * STATE_VARIABLE_Slot_42)
{
  {
    MR_Word MaybeCallLabelSlotName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 0))));
    MR_Word EventLayoutsSlotName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 1))));
    MR_Integer NumEventLayouts_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 2))));
    MR_Word MaybeTableInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 3))));
    MR_Word MaybeHeadVarsSlotName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 4))));
    MR_Integer NumHeadVarNums_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 5))));
    MR_Word MaybeVarNamesSlotName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 6))));
    MR_Integer MaxVarNum_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 7))));
    MR_Integer MaxRegR_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 8))));
    MR_Integer MaxRegF_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 9))));
    MR_Word MaybeFromFullSlot_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 10))));
    MR_Word MaybeIoSeqSlot_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 11))));
    MR_Word MaybeTrailSlot_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 12))));
    MR_Word MaybeMaxfrSlot_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 13))));
    MR_Word EvalMethod_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 14))));
    MR_Word MaybeCallTableSlot_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 15))));
    MR_Word MaybeTailRecSlot_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 16))));
    MR_Word EffTraceLevel_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 17))) & (MR_Integer) 7);
    MR_Integer Flags_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExecTrace_10, (MR_Integer) 18))));
    MR_Word AutoComments_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    MR_String MangledModuleName_33;
    MR_Word ModuleName_35;
    MR_Word Var_62;
    MR_String Var_122;
    MR_String Var_129;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
    switch (AutoComments_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_211;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_41, &Var_211);
          mercury__io__write_string_4_p_0(Stream_9, Var_211);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */ ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    MangledModuleName_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))));
    if ((MaybeCallLabelSlotName_13 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n  ");
    else
    {
      MR_Word CallLabelSlotName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCallLabelSlotName_13, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(MR_LabelLayout *) ");
      ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, MangledModuleName_33, CallLabelSlotName_34);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n  ");
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(const MR_ModuleLayout *) &");
    ModuleName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (ModuleName_35));
    }
    ll_backend__layout_out__output_layout_name_4_p_0(Stream_9, Var_62);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n  ");
    ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, MangledModuleName_33, EventLayoutsSlotName_14);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    mercury__io__write_int_4_p_0(Stream_9, NumEventLayouts_15);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n  ");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
    if ((MaybeTableInfo_16 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL");
    else
    {
      MR_Word TableInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTableInfo_16, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TableInfo_36)) == (MR_Integer) 1))
      {
        MR_Word TableDataId_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TableInfo_36, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(const void *) &");
        ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_8, Stream_9, TableDataId_38);
      }
      else
      {
        MR_Word TableSlotName_37 = (MR_Word) ((MR_Word) (TableInfo_36));

        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(const void *) ");
        ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, MangledModuleName_33, TableSlotName_37);
      }
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " },\n  ");
    if ((MaybeHeadVarsSlotName_17 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL");
    else
    {
      MR_Word HeadVarNumsSlotName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadVarsSlotName_17, (MR_Integer) 0))));

      ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, MangledModuleName_33, HeadVarNumsSlotName_39);
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    if ((MaybeVarNamesSlotName_19 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL");
    else
    {
      MR_Word VarNamesSlotName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarNamesSlotName_19, (MR_Integer) 0))));

      ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, MangledModuleName_33, VarNamesSlotName_40);
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n  ");
    mercury__io__write_int_4_p_0(Stream_9, NumHeadVarNums_18);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    mercury__io__write_int_4_p_0(Stream_9, MaxVarNum_20);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    mercury__io__write_int_4_p_0(Stream_9, MaxRegR_21);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    mercury__io__write_int_4_p_0(Stream_9, MaxRegF_22);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    ll_backend__layout_out__write_maybe_slot_num_4_p_0(Stream_9, MaybeFromFullSlot_23);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    ll_backend__layout_out__write_maybe_slot_num_4_p_0(Stream_9, MaybeIoSeqSlot_24);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    ll_backend__layout_out__write_maybe_slot_num_4_p_0(Stream_9, MaybeTrailSlot_25);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    ll_backend__layout_out__write_maybe_slot_num_4_p_0(Stream_9, MaybeMaxfrSlot_26);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    Var_122 = ll_backend__layout_out__eval_method_to_c_string_1_f_0(EvalMethod_27);
    mercury__io__write_string_4_p_0(Stream_9, Var_122);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    ll_backend__layout_out__write_maybe_slot_num_4_p_0(Stream_9, MaybeCallTableSlot_28);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    Var_129 = libs__trace_params__trace_level_rep_1_f_0(EffTraceLevel_30);
    mercury__io__write_string_4_p_0(Stream_9, Var_129);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n  ");
    mercury__io__write_int_4_p_0(Stream_9, Flags_31);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    ll_backend__layout_out__write_maybe_slot_num_4_p_0(Stream_9, MaybeTailRecSlot_29);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " },\n");
    *STATE_VARIABLE_Slot_42 = STATE_VARIABLE_Slot_0_41;
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__eval_method_to_c_string_1_f_0(
  MR_Word EvalMethod_3)
{
  {
    MR_String Str_4;

    if ((EvalMethod_3 == (MR_Word) ((MR_Unsigned) 0U)))
      Str_4 = (MR_String) "MR_EVAL_METHOD_NORMAL";
    else
    {
      MR_Word TabledMethod_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EvalMethod_3, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) TabledMethod_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Str_4 = (MR_String) "MR_EVAL_METHOD_LOOP_CHECK";
          break;
        case (MR_Integer) 1:
          Str_4 = (MR_String) "MR_EVAL_METHOD_MEMO";
          break;
        case (MR_Integer) 2:
          {
            MR_Word EntryKind_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TabledMethod_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
            MR_Word Unitize_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TabledMethod_5, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (EntryKind_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (Unitize_9) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    Str_4 = (MR_String) "MR_EVAL_METHOD_TABLE_IO";
                    break;
                  case (MR_Integer) 0:
                    Str_4 = (MR_String) "MR_EVAL_METHOD_TABLE_IO_UNITIZE";
                    break;
                }
                break;
              case (MR_Integer) 2:
                switch (Unitize_9) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    Str_4 = (MR_String) "MR_EVAL_METHOD_TABLE_IO_DECL";
                    break;
                  case (MR_Integer) 0:
                    Str_4 = (MR_String) "MR_EVAL_METHOD_TABLE_IO_UNITIZE_DECL";
                    break;
                }
                break;
              case (MR_Integer) 1:
                switch (Unitize_9) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    Str_4 = (MR_String) "MR_EVAL_METHOD_TABLE_IO";
                    break;
                  case (MR_Integer) 0:
                    Str_4 = (MR_String) "MR_EVAL_METHOD_TABLE_IO_UNITIZE";
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word MinimalMethod_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TabledMethod_5, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (MinimalMethod_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Str_4 = (MR_String) "MR_EVAL_METHOD_MINIMAL_OWN_STACKS_CONSUMER";
                break;
              case (MR_Integer) 2:
                Str_4 = (MR_String) "MR_EVAL_METHOD_MINIMAL_OWN_STACKS_GENERATOR";
                break;
              case (MR_Integer) 0:
                Str_4 = (MR_String) "MR_EVAL_METHOD_MINIMAL_STACK_COPY";
                break;
            }
          }
          break;
      }
    }
    return Str_4;
  }
}

static void MR_CALL 
ll_backend__layout_out__write_maybe_slot_num_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_int_4_p_0(Stream_1, (MR_Integer) -1);
  else
  {
    MR_Integer SlotNum_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__io__write_int_4_p_0(Stream_1, SlotNum_6);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word TableIoEntry_10,
  MR_Integer STATE_VARIABLE_Slot_0_20,
  MR_Integer * STATE_VARIABLE_Slot_21)
{
  {
    MR_Word ProcLayoutName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableIoEntry_10, (MR_Integer) 0))));
    MR_Word MaybeArgInfos_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableIoEntry_10, (MR_Integer) 1))));
    MR_Word AutoComments_15;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
    AutoComments_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_77;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_20, &Var_77);
          mercury__io__write_string_4_p_0(Stream_9, Var_77);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */\n  ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(const MR_ProcLayout *) &");
    ll_backend__layout_out__output_layout_name_4_p_0(Stream_9, ProcLayoutName_13);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n  ");
    if ((MaybeArgInfos_14 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_FALSE, 0, NULL, NULL");
    else
    {
      MR_Word ArgInfos_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgInfos_14, (MR_Integer) 0))));
      MR_Integer NumPTIs_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgInfos_16, (MR_Integer) 0))));
      MR_Word PTIVectorRval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfos_16, (MR_Integer) 1))));
      MR_Word TypeParamsRval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfos_16, (MR_Integer) 2))));

      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_TRUE,\n  ");
      mercury__io__write_int_4_p_0(Stream_9, NumPTIs_17);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n  (const MR_PseudoTypeInfo *) ");
      ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, PTIVectorRval_18, Stream_9);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", (const MR_TypeParamLocns *) ");
      ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, TypeParamsRval_19, Stream_9);
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " },\n");
    *STATE_VARIABLE_Slot_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_20 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word ProcStatic_10,
  MR_Integer STATE_VARIABLE_Slot_0_31,
  MR_Integer * STATE_VARIABLE_Slot_32)
{
  {
    MR_String FileName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcStatic_10, (MR_Integer) 0))));
    MR_Integer LineNumber_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcStatic_10, (MR_Integer) 1))));
    MR_Word IsInInterface_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcStatic_10, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word DeepExcpVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcStatic_10, (MR_Integer) 3))));
    MR_Word MaybeCallSites_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcStatic_10, (MR_Integer) 4))));
    MR_Word MaybeCoveragePoints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcStatic_10, (MR_Integer) 5))));
    MR_Word AutoComments_19;
    MR_String MangledModuleName_20;
    MR_Integer TopCSDSlot_24;
    MR_Integer MiddleCSDSlot_25;
    MR_Integer OldOutermostSlot_26;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
    MangledModuleName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))));
    AutoComments_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_161;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_31, &Var_161);
          mercury__io__write_string_4_p_0(Stream_9, Var_161);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */ ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    ll_backend__layout_out__quote_and_write_string_4_p_0(Stream_9, FileName_13);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    mercury__io__write_int_4_p_0(Stream_9, LineNumber_14);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    switch (IsInInterface_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_FALSE");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_TRUE");
        break;
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n  ");
    if ((MaybeCallSites_17 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,NULL,\n");
    else
    {
      MR_Integer CallSitesSlot_21;
      MR_Integer NumCallSites_22;
      MR_Word CallSitesSlotName_23;
      MR_Tuple Var_56 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeCallSites_17, (MR_Integer) 0))));

      CallSitesSlot_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 0))));
      NumCallSites_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
      mercury__io__write_int_4_p_0(Stream_9, NumCallSites_22);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
      {
        CallSitesSlotName_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CallSitesSlotName_23, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), CallSitesSlotName_23, 1) = ((MR_Box) (CallSitesSlot_21));
      }
      ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, MangledModuleName_20, CallSitesSlotName_23);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "#ifdef MR_USE_ACTIVATION_COUNTS\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "#endif\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,");
    TopCSDSlot_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeepExcpVars_16, (MR_Integer) 0))));
    MiddleCSDSlot_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeepExcpVars_16, (MR_Integer) 1))));
    OldOutermostSlot_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeepExcpVars_16, (MR_Integer) 2))));
    mercury__io__write_int_4_p_0(Stream_9, TopCSDSlot_24);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    mercury__io__write_int_4_p_0(Stream_9, MiddleCSDSlot_25);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    mercury__io__write_int_4_p_0(Stream_9, OldOutermostSlot_26);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n#ifdef MR_DEEP_PROFILING_COVERAGE\n");
    if ((MaybeCoveragePoints_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,NULL,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL");
    }
    else
    {
      MR_Integer CoveragePointsSlot_27;
      MR_Integer NumCoveragePoints_28;
      MR_Word CoveragePointsStaticSlotName_29;
      MR_Word CoveragePointsDynamicSlotName_30;
      MR_Tuple Var_90 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeCoveragePoints_18, (MR_Integer) 0))));

      CoveragePointsSlot_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_90, (MR_Integer) 0))));
      NumCoveragePoints_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_90, (MR_Integer) 1))));
      mercury__io__write_int_4_p_0(Stream_9, NumCoveragePoints_28);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      {
        CoveragePointsStaticSlotName_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CoveragePointsStaticSlotName_29, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(MR_mktag(0), CoveragePointsStaticSlotName_29, 1) = ((MR_Box) (CoveragePointsSlot_27));
      }
      ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, MangledModuleName_20, CoveragePointsStaticSlotName_29);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC\n");
      {
        CoveragePointsDynamicSlotName_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CoveragePointsDynamicSlotName_30, 0) = ((MR_Box) ((MR_Unsigned) 32U));
        MR_hl_field(MR_mktag(0), CoveragePointsDynamicSlotName_30, 1) = ((MR_Box) (CoveragePointsSlot_27));
      }
      ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, MangledModuleName_20, CoveragePointsDynamicSlotName_30);
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n#endif\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "#endif\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " },\n");
    *STATE_VARIABLE_Slot_32 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_31 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_slot_7_p_0(
  MR_Word Stream_8,
  MR_Word AutoComments_9,
  MR_Word CoveragePoint_10,
  MR_Integer STATE_VARIABLE_Slot_0_17,
  MR_Integer * STATE_VARIABLE_Slot_18)
{
  {
    MR_Word RevGoalPath_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoveragePoint_10, (MR_Integer) 0))));
    MR_Word CPType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoveragePoint_10, (MR_Integer) 1))));
    MR_String GoalPathString_15;
    MR_String CPTypeCValue_16;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{ ");
    switch (AutoComments_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_40;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_17, &Var_40);
          mercury__io__write_string_4_p_0(Stream_8, Var_40);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) " */ ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    GoalPathString_15 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_13);
    mdbcomp__program_representation__coverage_point_type_c_value_2_p_0(CPType_14, &CPTypeCValue_16);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\"");
    mercury__io__write_string_4_p_0(Stream_8, GoalPathString_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\", ");
    mercury__io__write_string_4_p_0(Stream_8, CPTypeCValue_16);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) " },\n");
    *STATE_VARIABLE_Slot_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_17 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word CallSiteStatic_10,
  MR_Integer STATE_VARIABLE_Slot_0_22,
  MR_Integer * STATE_VARIABLE_Slot_23)
{
  {
    MR_bool succeeded;
    MR_Word AutoComments_13;
    MR_String FileName_16;
    MR_Integer LineNumber_17;
    MR_Word GoalPath_18;
    MR_String Var_62;
    MR_String Var_106;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
    AutoComments_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_92;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_22, &Var_92);
          mercury__io__write_string_4_p_0(Stream_9, Var_92);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */ ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    switch (MR_tag((MR_Word) CallSiteStatic_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Callee_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteStatic_10, (MR_Integer) 0))));
          MR_String TypeSubst_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), CallSiteStatic_10, (MR_Integer) 1))));
          MR_Word CalleeProcLabel_19;
          MR_Word CalleeUserOrUci_20;
          MR_Word CalleeProcLayoutName_21;
          MR_Word Var_43;

          FileName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), CallSiteStatic_10, (MR_Integer) 2))));
          LineNumber_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CallSiteStatic_10, (MR_Integer) 3))));
          GoalPath_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteStatic_10, (MR_Integer) 4))));
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_callsite_normal_call, (MR_ProcLayout *)\n&");
          CalleeProcLabel_19 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(Callee_14);
          CalleeUserOrUci_20 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(CalleeProcLabel_19);
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = (MR_Box) ((MR_Unsigned) (CalleeUserOrUci_20));
          }
          {
            CalleeProcLayoutName_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CalleeProcLayoutName_21, 0) = ((MR_Box) (Callee_14));
            MR_hl_field(MR_mktag(0), CalleeProcLayoutName_21, 1) = ((MR_Box) (Var_43));
          }
          ll_backend__layout_out__output_layout_name_4_p_0(Stream_9, CalleeProcLayoutName_21);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
          succeeded = (strcmp(TypeSubst_15, (MR_String) "") == 0);
          if (succeeded)
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL, ");
          else
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
            mercury__io__write_string_4_p_0(Stream_9, TypeSubst_15);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\", ");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          FileName_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), CallSiteStatic_10, (MR_Integer) 0))));
          LineNumber_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), CallSiteStatic_10, (MR_Integer) 1))));
          GoalPath_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallSiteStatic_10, (MR_Integer) 2))));
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_callsite_special_call, NULL, NULL, ");
        }
        break;
      case (MR_Integer) 2:
        {
          FileName_16 = ((MR_String) ((MR_hl_field(MR_mktag(2), CallSiteStatic_10, (MR_Integer) 0))));
          LineNumber_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), CallSiteStatic_10, (MR_Integer) 1))));
          GoalPath_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallSiteStatic_10, (MR_Integer) 2))));
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_callsite_higher_order_call, NULL, NULL, ");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CallSiteStatic_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              FileName_16 = ((MR_String) ((MR_hl_field(MR_mktag(3), CallSiteStatic_10, (MR_Integer) 1))));
              LineNumber_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), CallSiteStatic_10, (MR_Integer) 2))));
              GoalPath_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CallSiteStatic_10, (MR_Integer) 3))));
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_callsite_method_call, NULL, NULL, ");
            }
            break;
          case (MR_Integer) 1:
            {
              FileName_16 = ((MR_String) ((MR_hl_field(MR_mktag(3), CallSiteStatic_10, (MR_Integer) 1))));
              LineNumber_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), CallSiteStatic_10, (MR_Integer) 2))));
              GoalPath_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CallSiteStatic_10, (MR_Integer) 3))));
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_callsite_callback, NULL, NULL, ");
            }
            break;
        }
        break;
    }
    Var_62 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_18);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    mercury__io__write_string_4_p_0(Stream_9, FileName_16);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\", ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), LineNumber_17, &Var_106);
    mercury__io__write_string_4_p_0(Stream_9, Var_106);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", \"");
    mercury__io__write_string_4_p_0(Stream_9, Var_62);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\" },\n");
    *STATE_VARIABLE_Slot_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_22 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_slot_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word CallSiteStatic_10,
  MR_Word STATE_VARIABLE_DeclSet_0_34,
  MR_Word * STATE_VARIABLE_DeclSet_35)
{
  switch (MR_tag((MR_Word) CallSiteStatic_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Callee_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteStatic_10, (MR_Integer) 0))));
        MR_Word CalleeProcLabel_18;
        MR_Word CalleeUserOrUci_19;
        MR_Word CalleeProcLayoutName_20;
        MR_Word CalleProcLayoutDataId_21;
        MR_Word Var_38;

        CalleeProcLabel_18 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(Callee_13);
        if (((MR_tag((MR_Word) CalleeProcLabel_18)) == (MR_Integer) 0))
          CalleeUserOrUci_19 = (MR_Integer) 0;
        else
          CalleeUserOrUci_19 = (MR_Integer) 1;
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = (MR_Box) ((MR_Unsigned) (CalleeUserOrUci_19));
        }
        {
          CalleeProcLayoutName_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CalleeProcLayoutName_20, 0) = ((MR_Box) (Callee_13));
          MR_hl_field(MR_mktag(0), CalleeProcLayoutName_20, 1) = ((MR_Box) (Var_38));
        }
        {
          CalleProcLayoutDataId_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), CalleProcLayoutDataId_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), CalleProcLayoutDataId_21, 1) = ((MR_Box) (CalleeProcLayoutName_20));
        }
        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_7_p_0(Info_8, Stream_9, CalleProcLayoutDataId_21, STATE_VARIABLE_DeclSet_0_34, STATE_VARIABLE_DeclSet_35);
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CallSiteStatic_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layout_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word LabelLayout_10,
  MR_Integer STATE_VARIABLE_Slot_0_34,
  MR_Integer * STATE_VARIABLE_Slot_35)
{
  {
    MR_bool succeeded;
    MR_String ModuleName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))));
    MR_Word BasicLabelLayout_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelLayout_10, (MR_Integer) 0))));
    MR_Word LabelVarInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelLayout_10, (MR_Integer) 1))));
    MR_Integer LabelNum_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_14, (MR_Integer) 1))));
    MR_Word AutoComments_24;
    MR_Integer EncodedVarCount_25;
    MR_Word TypeParams_26;
    MR_Integer PTIsSlot_27;
    MR_Integer HLDSVarNumsSlot_28;
    MR_Integer ShortLocnsSlot_29;
    MR_Integer LongLocnsSlot_30;
    MR_Integer Var_57;
    MR_Integer Var_58;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
    AutoComments_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_197;
          MR_String Var_207;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_34, &Var_197);
          mercury__io__write_string_4_p_0(Stream_9, Var_197);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), LabelNum_17, &Var_207);
          mercury__io__write_string_4_p_0(Stream_9, Var_207);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */\n  ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_6_p_0(Stream_9, ModuleName_13, BasicLabelLayout_14);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n  ");
    EncodedVarCount_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_15, (MR_Integer) 0))));
    TypeParams_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelVarInfo_15, (MR_Integer) 1))));
    PTIsSlot_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_15, (MR_Integer) 2))));
    HLDSVarNumsSlot_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_15, (MR_Integer) 3))));
    ShortLocnsSlot_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_15, (MR_Integer) 4))));
    LongLocnsSlot_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_15, (MR_Integer) 5))));
    succeeded = (LongLocnsSlot_30 >= (MR_Integer) 0);
    if (!(succeeded))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.layout_out.output_long_var_label_layout_slot\'/7", (MR_String) "no long locn");
        return;
      }
    mercury__io__write_int_4_p_0(Stream_9, EncodedVarCount_25);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    succeeded = (PTIsSlot_27 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_57 = (MR_Integer) 0;
      succeeded = (ShortLocnsSlot_29 >= Var_57);
      if (succeeded)
      {
        Var_58 = (MR_Integer) 0;
        succeeded = (HLDSVarNumsSlot_28 >= Var_58);
      }
    }
    if (succeeded)
    {
      MR_Word Var_59;
      MR_Integer Var_60;

      succeeded = ((((MR_tag((MR_Word) TypeParams_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeParams_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeParams_26, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_59)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 0))));
          succeeded = (Var_60 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        MR_String Var_221;
        MR_String Var_231;
        MR_String Var_241;
        MR_String Var_251;

        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_LLVL0(");
        mercury__io__write_string_4_p_0(Stream_9, ModuleName_13);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), PTIsSlot_27, &Var_221);
        mercury__io__write_string_4_p_0(Stream_9, Var_221);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), HLDSVarNumsSlot_28, &Var_231);
        mercury__io__write_string_4_p_0(Stream_9, Var_231);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), ShortLocnsSlot_29, &Var_241);
        mercury__io__write_string_4_p_0(Stream_9, Var_241);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), LongLocnsSlot_30, &Var_251);
        mercury__io__write_string_4_p_0(Stream_9, Var_251);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
      }
      else
      {
        MR_Integer TPTypeNum_32;
        MR_Integer TPCellNum_33;
        MR_Word TPDataId_31;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;

        succeeded = ((((MR_tag((MR_Word) TypeParams_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeParams_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeParams_26, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_74)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_74, (MR_Integer) 0)))) == (MR_Integer) 13)));
          if (succeeded)
          {
            TPDataId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_74, (MR_Integer) 1))));
            Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_74, (MR_Integer) 2))));
            succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TPDataId_31)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TPDataId_31, (MR_Integer) 0))));
                TPCellNum_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), TPDataId_31, (MR_Integer) 1))));
                TPTypeNum_32 = (MR_Integer) (Var_76);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        if (succeeded)
        {
          MR_String Var_265;
          MR_String Var_275;
          MR_String Var_285;
          MR_String Var_295;
          MR_String Var_305;
          MR_String Var_315;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_LLVLC(");
          mercury__io__write_string_4_p_0(Stream_9, ModuleName_13);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), TPTypeNum_32, &Var_265);
          mercury__io__write_string_4_p_0(Stream_9, Var_265);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), TPCellNum_33, &Var_275);
          mercury__io__write_string_4_p_0(Stream_9, Var_275);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), PTIsSlot_27, &Var_285);
          mercury__io__write_string_4_p_0(Stream_9, Var_285);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), HLDSVarNumsSlot_28, &Var_295);
          mercury__io__write_string_4_p_0(Stream_9, Var_295);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), ShortLocnsSlot_29, &Var_305);
          mercury__io__write_string_4_p_0(Stream_9, Var_305);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), LongLocnsSlot_30, &Var_315);
          mercury__io__write_string_4_p_0(Stream_9, Var_315);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
        }
        else
        {
          MR_String Var_329;
          MR_String Var_339;
          MR_String Var_349;
          MR_String Var_359;

          ll_backend__layout_out__output_rval_as_addr_5_p_0(Info_8, Stream_9, TypeParams_26);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",MR_LLVL(");
          mercury__io__write_string_4_p_0(Stream_9, ModuleName_13);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), PTIsSlot_27, &Var_329);
          mercury__io__write_string_4_p_0(Stream_9, Var_329);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), HLDSVarNumsSlot_28, &Var_339);
          mercury__io__write_string_4_p_0(Stream_9, Var_339);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), ShortLocnsSlot_29, &Var_349);
          mercury__io__write_string_4_p_0(Stream_9, Var_349);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), LongLocnsSlot_30, &Var_359);
          mercury__io__write_string_4_p_0(Stream_9, Var_359);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
        }
      }
    }
    else
    {
      MR_Word Var_141;

      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(const MR_TypeParamLocns *) ");
      ll_backend__layout_out__output_rval_as_addr_5_p_0(Info_8, Stream_9, TypeParams_26);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
      succeeded = (PTIsSlot_27 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_115;

        {
          Var_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (PTIsSlot_27));
        }
        ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, ModuleName_13, Var_115);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
      }
      else
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,");
      succeeded = (HLDSVarNumsSlot_28 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_124;

        {
          Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (HLDSVarNumsSlot_28));
        }
        ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, ModuleName_13, Var_124);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
      }
      else
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,");
      succeeded = (ShortLocnsSlot_29 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_133;

        {
          Var_133 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) (ShortLocnsSlot_29));
        }
        ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, ModuleName_13, Var_133);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
      }
      else
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,");
      {
        Var_141 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_141, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Var_141, 1) = ((MR_Box) (LongLocnsSlot_30));
      }
      ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, ModuleName_13, Var_141);
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " },\n");
    *STATE_VARIABLE_Slot_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_34 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layout_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word LabelLayout_10,
  MR_Integer STATE_VARIABLE_Slot_0_33,
  MR_Integer * STATE_VARIABLE_Slot_34)
{
  {
    MR_bool succeeded;
    MR_String ModuleName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))));
    MR_Word BasicLabelLayout_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelLayout_10, (MR_Integer) 0))));
    MR_Word LabelVarInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelLayout_10, (MR_Integer) 1))));
    MR_Integer LabelNum_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_14, (MR_Integer) 1))));
    MR_Word AutoComments_24;
    MR_Integer EncodedVarCount_25;
    MR_Word TypeParams_26;
    MR_Integer PTIsSlot_27;
    MR_Integer HLDSVarNumsSlot_28;
    MR_Integer ShortLocnsSlot_29;
    MR_Integer Var_53;
    MR_Integer Var_54;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
    AutoComments_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_181;
          MR_String Var_191;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_33, &Var_181);
          mercury__io__write_string_4_p_0(Stream_9, Var_181);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), LabelNum_17, &Var_191);
          mercury__io__write_string_4_p_0(Stream_9, Var_191);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */\n  ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_6_p_0(Stream_9, ModuleName_13, BasicLabelLayout_14);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n  ");
    EncodedVarCount_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_15, (MR_Integer) 0))));
    TypeParams_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelVarInfo_15, (MR_Integer) 1))));
    PTIsSlot_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_15, (MR_Integer) 2))));
    HLDSVarNumsSlot_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_15, (MR_Integer) 3))));
    ShortLocnsSlot_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_15, (MR_Integer) 4))));
    mercury__io__write_int_4_p_0(Stream_9, EncodedVarCount_25);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
    succeeded = (PTIsSlot_27 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_53 = (MR_Integer) 0;
      succeeded = (HLDSVarNumsSlot_28 >= Var_53);
      if (succeeded)
      {
        Var_54 = (MR_Integer) 0;
        succeeded = (ShortLocnsSlot_29 >= Var_54);
      }
    }
    if (succeeded)
    {
      MR_Word Var_55;
      MR_Integer Var_56;

      succeeded = ((((MR_tag((MR_Word) TypeParams_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeParams_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeParams_26, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 0))));
          succeeded = (Var_56 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        MR_String Var_205;
        MR_String Var_215;
        MR_String Var_225;

        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_LLVS0(");
        mercury__io__write_string_4_p_0(Stream_9, ModuleName_13);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), PTIsSlot_27, &Var_205);
        mercury__io__write_string_4_p_0(Stream_9, Var_205);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), HLDSVarNumsSlot_28, &Var_215);
        mercury__io__write_string_4_p_0(Stream_9, Var_215);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), ShortLocnsSlot_29, &Var_225);
        mercury__io__write_string_4_p_0(Stream_9, Var_225);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
      }
      else
      {
        MR_Integer TPTypeNum_31;
        MR_Integer TPCellNum_32;
        MR_Word TPDataId_30;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;

        succeeded = ((((MR_tag((MR_Word) TypeParams_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeParams_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeParams_26, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_68)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_68, (MR_Integer) 0)))) == (MR_Integer) 13)));
          if (succeeded)
          {
            TPDataId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_68, (MR_Integer) 1))));
            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_68, (MR_Integer) 2))));
            succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TPDataId_30)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TPDataId_30, (MR_Integer) 0))));
                TPCellNum_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), TPDataId_30, (MR_Integer) 1))));
                TPTypeNum_31 = (MR_Integer) (Var_70);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        if (succeeded)
        {
          MR_String Var_239;
          MR_String Var_249;
          MR_String Var_259;
          MR_String Var_269;
          MR_String Var_279;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_LLVSC(");
          mercury__io__write_string_4_p_0(Stream_9, ModuleName_13);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), TPTypeNum_31, &Var_239);
          mercury__io__write_string_4_p_0(Stream_9, Var_239);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), TPCellNum_32, &Var_249);
          mercury__io__write_string_4_p_0(Stream_9, Var_249);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), PTIsSlot_27, &Var_259);
          mercury__io__write_string_4_p_0(Stream_9, Var_259);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), HLDSVarNumsSlot_28, &Var_269);
          mercury__io__write_string_4_p_0(Stream_9, Var_269);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), ShortLocnsSlot_29, &Var_279);
          mercury__io__write_string_4_p_0(Stream_9, Var_279);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
        }
        else
        {
          MR_String Var_293;
          MR_String Var_303;
          MR_String Var_313;

          ll_backend__layout_out__output_rval_as_addr_5_p_0(Info_8, Stream_9, TypeParams_26);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",MR_LLVS(");
          mercury__io__write_string_4_p_0(Stream_9, ModuleName_13);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), PTIsSlot_27, &Var_293);
          mercury__io__write_string_4_p_0(Stream_9, Var_293);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), HLDSVarNumsSlot_28, &Var_303);
          mercury__io__write_string_4_p_0(Stream_9, Var_303);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), ShortLocnsSlot_29, &Var_313);
          mercury__io__write_string_4_p_0(Stream_9, Var_313);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
        }
      }
    }
    else
    {
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(const MR_TypeParamLocns *) ");
      ll_backend__layout_out__output_rval_as_addr_5_p_0(Info_8, Stream_9, TypeParams_26);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
      succeeded = (PTIsSlot_27 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_105;

        {
          Var_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (PTIsSlot_27));
        }
        ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, ModuleName_13, Var_105);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
      }
      else
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,");
      succeeded = (HLDSVarNumsSlot_28 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_114;

        {
          Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (HLDSVarNumsSlot_28));
        }
        ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, ModuleName_13, Var_114);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",");
      }
      else
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,");
      succeeded = (ShortLocnsSlot_29 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_123;

        {
          Var_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (ShortLocnsSlot_29));
        }
        ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, ModuleName_13, Var_123);
      }
      else
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0");
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " },\n");
    *STATE_VARIABLE_Slot_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_33 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layout_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word LabelLayout_10,
  MR_Integer STATE_VARIABLE_Slot_0_24,
  MR_Integer * STATE_VARIABLE_Slot_25)
{
  {
    MR_String ModuleName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))));
    MR_Word BasicLabelLayout_14 = (MR_Word) (LabelLayout_10);
    MR_Integer LabelNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_14, (MR_Integer) 1))));
    MR_Word AutoComments_23;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
    AutoComments_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_91;
          MR_String Var_101;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_24, &Var_91);
          mercury__io__write_string_4_p_0(Stream_9, Var_91);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), LabelNum_16, &Var_101);
          mercury__io__write_string_4_p_0(Stream_9, Var_101);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */\n  ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_6_p_0(Stream_9, ModuleName_13, BasicLabelLayout_14);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " },\n");
    *STATE_VARIABLE_Slot_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_24 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word Stream_8,
  MR_String ModuleName_9,
  MR_Word BasicLabelLayout_10)
{
  {
    MR_Word ProcLabel_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_10, (MR_Integer) 0))));
    MR_Word MaybePort_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_10, (MR_Integer) 3))));
    MR_Word MaybeIsHidden_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_10, (MR_Integer) 4))));
    MR_Integer LabelNumberInModule_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_10, (MR_Integer) 5))));
    MR_Word MaybeGoalPath_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_10, (MR_Integer) 6))));
    MR_Word MaybeUserSlotName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_10, (MR_Integer) 7))));
    MR_String PortStr_23;
    MR_Integer GoalPath_24;
    MR_String ProcLabelStr_25;
    MR_String STATE_VARIABLE_MacroName_31_31;
    MR_String Var_67;
    MR_String Var_76;

    if ((MaybeIsHidden_16 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_MacroName_31_31 = (MR_String) "MR_LL";
    else
    {
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIsHidden_16, (MR_Integer) 0))));

      switch (Var_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_MacroName_31_31 = (MR_String) "MR_LL";
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_MacroName_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "MR_LL", (MR_String) "_H");
          break;
      }
    }
    if ((MaybePort_15 == (MR_Word) ((MR_Unsigned) 0U)))
      PortStr_23 = (MR_String) "NONE";
    else
    {
      MR_Word Port_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePort_15, (MR_Integer) 0))));

      PortStr_23 = ll_backend__layout_out__trace_port_to_string_1_f_0(Port_22);
    }
    if ((MaybeGoalPath_18 == (MR_Word) ((MR_Unsigned) 0U)))
      GoalPath_24 = (MR_Integer) 0;
    else
      GoalPath_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeGoalPath_18, (MR_Integer) 0))));
    ProcLabelStr_25 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 0, ProcLabel_12);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), LabelNumberInModule_17, &Var_67);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), GoalPath_24, &Var_76);
    if ((MaybeUserSlotName_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(Stream_8, STATE_VARIABLE_MacroName_31_31);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
      mercury__io__write_string_4_p_0(Stream_8, ProcLabelStr_25);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
      mercury__io__write_string_4_p_0(Stream_8, PortStr_23);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
      mercury__io__write_string_4_p_0(Stream_8, Var_67);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
      mercury__io__write_string_4_p_0(Stream_8, Var_76);
    }
    else
    {
      MR_Word UserSlotName_26;
      MR_String MacroName_83;

      MacroName_83 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_MacroName_31_31, (MR_String) "_U");
      mercury__io__write_string_4_p_0(Stream_8, MacroName_83);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
      mercury__io__write_string_4_p_0(Stream_8, ProcLabelStr_25);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
      mercury__io__write_string_4_p_0(Stream_8, PortStr_23);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
      mercury__io__write_string_4_p_0(Stream_8, Var_67);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
      mercury__io__write_string_4_p_0(Stream_8, Var_76);
      UserSlotName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUserSlotName_19, (MR_Integer) 0))));
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
      ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_8, (MR_Integer) 1, ModuleName_9, UserSlotName_26);
    }
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_event_slot_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word UserEvent_10,
  MR_Integer STATE_VARIABLE_Slot_0_18,
  MR_Integer * STATE_VARIABLE_Slot_19)
{
  {
    MR_Integer UserEventNumber_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), UserEvent_10, (MR_Integer) 0))));
    MR_Word UserLocnsRval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UserEvent_10, (MR_Integer) 1))));
    MR_Word MaybeVarNumsSlot_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UserEvent_10, (MR_Integer) 2))));
    MR_Word AutoComments_16;
    MR_String ModuleName_17;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{ ");
    AutoComments_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_90;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* slot ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_18, &Var_90);
          mercury__io__write_string_4_p_0(Stream_9, Var_90);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */ ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    mercury__io__write_int_4_p_0(Stream_9, UserEventNumber_13);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", (MR_LongLval *) ");
    ll_backend__layout_out__output_rval_as_addr_5_p_0(Info_8, Stream_9, UserLocnsRval_14);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n  ");
    ModuleName_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))));
    ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, ModuleName_17, MaybeVarNumsSlot_15);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " },\n");
    *STATE_VARIABLE_Slot_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_18 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_rval_as_addr_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Rval_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word Var_13;
    MR_Integer Var_14;

    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0))));
        succeeded = (Var_14 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "0");
    else
    {
      MR_Word DataId_10;
      MR_Word Var_17;
      MR_Word Var_18;

      succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 0)))) == (MR_Integer) 13)));
        if (succeeded)
        {
          DataId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 1))));
          Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 2))));
          succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
        ll_backend__llds_out__llds_out_data__output_data_id_addr_5_p_0(Info_6, Stream_7, DataId_10);
      else
      {
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_8, Stream_7);
      }
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_maybe_var_num_slot_6_p_0(
  MR_Word Stream_7,
  MR_Word MaybeVarNum_8,
  MR_Integer STATE_VARIABLE_Slot_0_12,
  MR_Integer * STATE_VARIABLE_Slot_13)
{
  {
    MR_bool succeeded;
    MR_Integer VarNum_11;
    MR_String Var_44;
    MR_Integer Var_16;

    if ((MaybeVarNum_8 == (MR_Word) ((MR_Unsigned) 0U)))
      VarNum_11 = (MR_Integer) 0;
    else
      VarNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeVarNum_8, (MR_Integer) 0))));
    Var_16 = mercury__int__mod_2_f_0(STATE_VARIABLE_Slot_0_12, (MR_Integer) 10);
    succeeded = (Var_16 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_String Var_35;

      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n/* slot ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_12, &Var_35);
      mercury__io__write_string_4_p_0(Stream_7, Var_35);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " */ ");
    }
    else
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), VarNum_11, &Var_44);
    mercury__io__write_string_4_p_0(Stream_7, Var_44);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
    *STATE_VARIABLE_Slot_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_12 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_noac_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_noac_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word ChunkPTIs_10,
  MR_Integer STATE_VARIABLE_Slot_0_14,
  MR_Integer * STATE_VARIABLE_Slot_15)
{
  {
    MR_Integer NumChunkPTIs_13;
    MR_Word Var_23;
    MR_String Var_37;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ChunkPTIs_10, &NumChunkPTIs_13);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\nMR_cast_to_pti");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumChunkPTIs_13, &Var_37);
    mercury__io__write_string_4_p_0(Stream_9, Var_37);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__layout_out__output_pti_chunk_noac_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Info_8));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_23, (MR_String) ",\n\t", ChunkPTIs_10, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
    *STATE_VARIABLE_Slot_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_14 + (MR_Unsigned) NumChunkPTIs_13);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_ac_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_ac_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word ChunkPTIs_10,
  MR_Integer STATE_VARIABLE_Slot_0_14,
  MR_Integer * STATE_VARIABLE_Slot_15)
{
  {
    MR_Integer NumChunkPTIs_13;
    MR_Word Var_25;
    MR_String Var_39;
    MR_String Var_49;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ChunkPTIs_10, &NumChunkPTIs_13);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n/* slots ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_14, &Var_39);
    mercury__io__write_string_4_p_0(Stream_9, Var_39);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "+ */ MR_cast_to_pti");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumChunkPTIs_13, &Var_49);
    mercury__io__write_string_4_p_0(Stream_9, Var_49);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(\n\t");
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ll_backend__layout_out__output_pti_chunk_ac_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Info_8));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_25, (MR_String) ",\n\t", ChunkPTIs_10, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
    *STATE_VARIABLE_Slot_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_14 + (MR_Unsigned) NumChunkPTIs_13);
  }
}

MR_String MR_CALL 
ll_backend__layout_out__trace_port_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&ll_backend__layout_out_vector_common_8[8 + HeadVar__1_1]))->ll_backend__layout_out__vector_common_type_8_0__vct_8_f_0;

    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__layout_out__mr_pred_or_func_to_string_1_f_0(
  MR_Word PredOrFunc_3)
{
  {
    MR_String Str_4;

    switch (PredOrFunc_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Str_4 = (MR_String) "MR_FUNCTION";
        break;
      case (MR_Integer) 0:
        Str_4 = (MR_String) "MR_PREDICATE";
        break;
    }
    return Str_4;
  }
}

MR_Word MR_CALL 
ll_backend__layout_out__layout_name_would_include_code_addr_1_f_0(
  MR_Word LayoutName_3)
{
  {
    MR_Word InclCodeAddr_4;

    InclCodeAddr_4 = ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_97_121_111_117_116_95_110_97_109_101_95_119_111_117_108_100_95_105_110_99_108_117_100_101_95_99_111_100_101_95_97_100_100_114_95_95_91_49_93_95_48_1_f_0();
    return InclCodeAddr_4;
  }
}

MR_Word MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_97_121_111_117_116_95_110_97_109_101_95_119_111_117_108_100_95_105_110_99_108_117_100_101_95_99_111_100_101_95_97_100_100_114_95_95_91_49_93_95_48_1_f_0(void)
{
  return (MR_Integer) 0;
}

void MR_CALL 
ll_backend__layout_out__output_module_layout_data_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Data_10,
  MR_Word STATE_VARIABLE_DeclSet_0_77,
  MR_Word * STATE_VARIABLE_DeclSet_78)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_10, (MR_Integer) 0))));
    MR_Integer StringTableSize_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Data_10, (MR_Integer) 1))));
    MR_Word StringTable_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_10, (MR_Integer) 2))));
    MR_Word MaybeDeepProfData_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_10, (MR_Integer) 3))));
    MR_Word MaybeDebugData_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_10, (MR_Integer) 4))));
    MR_Tuple OISUInfo_29;
    MR_Word MaybeDebugInfo_54;
    MR_Word ModuleLayoutName_55;
    MR_Word ModuleStringTableName_56;
    MR_Integer NumOISUTypesB_57;
    MR_Word MaybeOISUBytesLayoutNameB_58;
    MR_Integer NumTypesB_59;
    MR_Word MaybeTypeTableLayoutNameB_60;
    MR_Word STATE_VARIABLE_DeclSet_81_81;
    MR_Word STATE_VARIABLE_DeclSet_108_108;
    MR_Word STATE_VARIABLE_DeclSet_126_126;
    MR_Integer Var_136;
    MR_String Var_140;
    MR_Word Var_246;

    ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_109_111_100_117_108_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_95_91_51_93_95_48_8_p_0(Stream_9, ModuleName_13, StringTable_15, STATE_VARIABLE_DeclSet_0_77, &STATE_VARIABLE_DeclSet_81_81);
    if ((MaybeDeepProfData_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      OISUInfo_29 = (MR_Tuple) (&ll_backend__layout_out_scalar_common_4[0]);
      STATE_VARIABLE_DeclSet_108_108 = STATE_VARIABLE_DeclSet_81_81;
    }
    else
    {
      MR_Word DeepProfData_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeepProfData_16, (MR_Integer) 0))));
      MR_Integer NumOISUTypesA_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeepProfData_18, (MR_Integer) 0))));
      MR_Word OISUBytes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepProfData_18, (MR_Integer) 1))));
      MR_Integer NumTypesA_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeepProfData_18, (MR_Integer) 2))));
      MR_Word TypeTableBytes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepProfData_18, (MR_Integer) 3))));
      MR_Word MaybeOISUBytesLayoutNameA_23;
      MR_Word MaybeTypeTableLayoutNameA_25;
      MR_Word STATE_VARIABLE_DeclSet_97_97;

      succeeded = (NumOISUTypesA_19 == (MR_Integer) 0);
      if (succeeded)
      {
        MaybeOISUBytesLayoutNameA_23 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_DeclSet_97_97 = STATE_VARIABLE_DeclSet_81_81;
      }
      else
      {
        MR_Word OISUBytesLayoutNameA_24;
        MR_Word Var_96;

        {
          OISUBytesLayoutNameA_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), OISUBytesLayoutNameA_24, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), OISUBytesLayoutNameA_24, 1) = ((MR_Box) (ModuleName_13));
        }
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, OISUBytesLayoutNameA_24, (MR_Integer) 1);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {");
        ll_backend__layout_out__output_bytecodes_driver_4_p_0(Stream_9, OISUBytes_20);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
        {
          Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (OISUBytesLayoutNameA_24));
        }
        ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_96, STATE_VARIABLE_DeclSet_81_81, &STATE_VARIABLE_DeclSet_97_97);
        {
          MaybeOISUBytesLayoutNameA_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeOISUBytesLayoutNameA_23, 0) = ((MR_Box) (OISUBytesLayoutNameA_24));
        }
      }
      if ((TypeTableBytes_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeTypeTableLayoutNameA_25 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_DeclSet_108_108 = STATE_VARIABLE_DeclSet_97_97;
      }
      else
      {
        MR_Word TypeTableLayoutNameA_28;
        MR_Word Var_107;

        {
          TypeTableLayoutNameA_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypeTableLayoutNameA_28, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(MR_mktag(3), TypeTableLayoutNameA_28, 1) = ((MR_Box) (ModuleName_13));
        }
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, TypeTableLayoutNameA_28, (MR_Integer) 1);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {");
        ll_backend__layout_out__output_bytecodes_driver_4_p_0(Stream_9, TypeTableBytes_22);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
        {
          Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (TypeTableLayoutNameA_28));
        }
        ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_107, STATE_VARIABLE_DeclSet_97_97, &STATE_VARIABLE_DeclSet_108_108);
        {
          MaybeTypeTableLayoutNameA_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTypeTableLayoutNameA_25, 0) = ((MR_Box) (TypeTableLayoutNameA_28));
        }
      }
      {
        OISUInfo_29 = (MR_Tuple) MR_new_object(MR_Tuple, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OISUInfo_29, 0) = ((MR_Box) (NumOISUTypesA_19));
        MR_hl_field(MR_mktag(0), OISUInfo_29, 1) = ((MR_Box) (MaybeOISUBytesLayoutNameA_23));
        MR_hl_field(MR_mktag(0), OISUInfo_29, 2) = ((MR_Box) (NumTypesA_21));
        MR_hl_field(MR_mktag(0), OISUInfo_29, 3) = ((MR_Box) (MaybeTypeTableLayoutNameA_25));
      }
    }
    if ((MaybeDebugData_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeDebugInfo_54 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_DeclSet_126_126 = STATE_VARIABLE_DeclSet_108_108;
    }
    else
    {
      MR_Word DebugData_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDebugData_17, (MR_Integer) 0))));
      MR_Word ProcLayoutNames_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DebugData_30, (MR_Integer) 0))));
      MR_Word FileLayouts_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DebugData_30, (MR_Integer) 1))));
      MR_Word TraceLevelA_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DebugData_30, (MR_Integer) 2))) & (MR_Integer) 7);
      MR_Integer SuppressedEventsA_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DebugData_30, (MR_Integer) 3))));
      MR_Integer NumLabelsA_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DebugData_30, (MR_Integer) 4))));
      MR_Word MaybeEventSetA_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DebugData_30, (MR_Integer) 5))));
      MR_Word ProcLayoutVectorNameA_37;
      MR_Integer ProcLayoutVectorLengthA_38;
      MR_Word FileLayoutNames_39;
      MR_Integer FileLayoutVectorLengthA_40;
      MR_Word FileLayoutVectorNameA_41;
      MR_Word LabelExecCountNameA_42;
      MR_Word MaybeEventInfoA_43;
      MR_Word STATE_VARIABLE_DeclSet_109_109;
      MR_Word STATE_VARIABLE_DeclSet_112_112;
      MR_Word STATE_VARIABLE_DeclSet_114_114;
      MR_Word Var_122;
      MR_Word STATE_VARIABLE_DeclSet_123_123;
      MR_Tuple Var_129;

      ll_backend__layout_out__output_module_layout_proc_vector_defn_8_p_0(Stream_9, ModuleName_13, ProcLayoutNames_31, &ProcLayoutVectorNameA_37, STATE_VARIABLE_DeclSet_108_108, &STATE_VARIABLE_DeclSet_109_109);
      mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0), ProcLayoutNames_31, &ProcLayoutVectorLengthA_38);
      ll_backend__layout_out__output_file_layout_data_defns_10_p_0(Info_8, Stream_9, ModuleName_13, (MR_Integer) 0, FileLayouts_32, &FileLayoutNames_39, STATE_VARIABLE_DeclSet_109_109, &STATE_VARIABLE_DeclSet_112_112);
      mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0), FileLayouts_32, &FileLayoutVectorLengthA_40);
      ll_backend__layout_out__output_file_layout_vector_data_defn_8_p_0(Stream_9, ModuleName_13, FileLayoutNames_39, &FileLayoutVectorNameA_41, STATE_VARIABLE_DeclSet_112_112, &STATE_VARIABLE_DeclSet_114_114);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      {
        LabelExecCountNameA_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LabelExecCountNameA_42, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), LabelExecCountNameA_42, 1) = ((MR_Box) (ModuleName_13));
        MR_hl_field(MR_mktag(3), LabelExecCountNameA_42, 2) = ((MR_Box) (NumLabelsA_35));
      }
      ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, LabelExecCountNameA_42, (MR_Integer) 1);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
      {
        Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (LabelExecCountNameA_42));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_122, STATE_VARIABLE_DeclSet_114_114, &STATE_VARIABLE_DeclSet_123_123);
      if ((MaybeEventSetA_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeEventInfoA_43 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_DeclSet_126_126 = STATE_VARIABLE_DeclSet_123_123;
      }
      else
      {
        MR_Word EventSetDataLayout_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEventSetA_36, (MR_Integer) 0))));
        MR_Word EventSetDataA_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSetDataLayout_44, (MR_Integer) 0))));
        MR_Word TypesRvalMap_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSetDataLayout_44, (MR_Integer) 1))));
        MR_String EventSetNameA_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), EventSetDataA_45, (MR_Integer) 0))));
        MR_String EventSetDesc_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), EventSetDataA_45, (MR_Integer) 1))));
        MR_Word EventSpecs_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSetDataA_45, (MR_Integer) 2))));
        MR_Integer MaxNumAttrA_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EventSetDataA_45, (MR_Integer) 3))));
        MR_Word EventSetDescLayoutNameA_51;
        MR_Word EventSpecsLayoutNameA_52;
        MR_Integer NumEventSpecsA_53;
        MR_Word STATE_VARIABLE_DeclSet_124_124;
        MR_Tuple Var_128;

        ll_backend__layout_out__output_event_set_desc_defn_8_p_0(Stream_9, ModuleName_13, EventSetDesc_48, &EventSetDescLayoutNameA_51, STATE_VARIABLE_DeclSet_123_123, &STATE_VARIABLE_DeclSet_124_124);
        ll_backend__layout_out__output_event_specs_and_components_10_p_0(Info_8, Stream_9, EventSpecs_49, ModuleName_13, TypesRvalMap_46, &EventSpecsLayoutNameA_52, STATE_VARIABLE_DeclSet_124_124, &STATE_VARIABLE_DeclSet_126_126);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecs_49, &NumEventSpecsA_53);
        {
          Var_128 = (MR_Tuple) MR_new_object(MR_Tuple, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (EventSetNameA_47));
          MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (MaxNumAttrA_50));
          MR_hl_field(MR_mktag(0), Var_128, 2) = ((MR_Box) (NumEventSpecsA_53));
          MR_hl_field(MR_mktag(0), Var_128, 3) = ((MR_Box) (EventSetDescLayoutNameA_51));
          MR_hl_field(MR_mktag(0), Var_128, 4) = ((MR_Box) (EventSpecsLayoutNameA_52));
        }
        {
          MaybeEventInfoA_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeEventInfoA_43, 0) = ((MR_Box) (Var_128));
        }
      }
      {
        Var_129 = (MR_Tuple) MR_new_object(MR_Tuple, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (ProcLayoutVectorLengthA_38));
        MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (ProcLayoutVectorNameA_37));
        MR_hl_field(MR_mktag(0), Var_129, 2) = ((MR_Box) (FileLayoutVectorLengthA_40));
        MR_hl_field(MR_mktag(0), Var_129, 3) = ((MR_Box) (FileLayoutVectorNameA_41));
        MR_hl_field(MR_mktag(0), Var_129, 4) = ((MR_Box) (TraceLevelA_33));
        MR_hl_field(MR_mktag(0), Var_129, 5) = ((MR_Box) (SuppressedEventsA_34));
        MR_hl_field(MR_mktag(0), Var_129, 6) = ((MR_Box) (NumLabelsA_35));
        MR_hl_field(MR_mktag(0), Var_129, 7) = ((MR_Box) (LabelExecCountNameA_42));
        MR_hl_field(MR_mktag(0), Var_129, 8) = ((MR_Box) (MaybeEventInfoA_43));
      }
      {
        MaybeDebugInfo_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDebugInfo_54, 0) = ((MR_Box) (Var_129));
      }
    }
    {
      ModuleLayoutName_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ModuleLayoutName_55, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(MR_mktag(3), ModuleLayoutName_55, 1) = ((MR_Box) (ModuleName_13));
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, ModuleLayoutName_55, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n");
    Var_136 = ll_backend__layout_out__layout_version_number_0_f_0();
    mercury__io__write_int_4_p_0(Stream_9, Var_136);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    Var_140 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
    ll_backend__layout_out__quote_and_write_string_4_p_0(Stream_9, Var_140);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    mercury__io__write_int_4_p_0(Stream_9, StringTableSize_14);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    {
      ModuleStringTableName_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ModuleStringTableName_56, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ModuleStringTableName_56, 1) = ((MR_Box) (ModuleName_13));
    }
    ll_backend__layout_out__output_layout_name_4_p_0(Stream_9, ModuleStringTableName_56);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    NumOISUTypesB_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OISUInfo_29, (MR_Integer) 0))));
    MaybeOISUBytesLayoutNameB_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_29, (MR_Integer) 1))));
    NumTypesB_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OISUInfo_29, (MR_Integer) 2))));
    MaybeTypeTableLayoutNameB_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_29, (MR_Integer) 3))));
    mercury__io__write_int_4_p_0(Stream_9, NumOISUTypesB_57);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    if ((MaybeOISUBytesLayoutNameB_58 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
    else
    {
      MR_Word OISUBytesLayoutNameB_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOISUBytesLayoutNameB_58, (MR_Integer) 0))));

      ll_backend__layout_out__output_layout_name_4_p_0(Stream_9, OISUBytesLayoutNameB_61);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    }
    mercury__io__write_int_4_p_0(Stream_9, NumTypesB_59);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    if ((MaybeTypeTableLayoutNameB_60 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
    else
    {
      MR_Word TypeTableLayoutNameB_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeTableLayoutNameB_60, (MR_Integer) 0))));

      ll_backend__layout_out__output_layout_name_4_p_0(Stream_9, TypeTableLayoutNameB_62);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    }
    if ((MaybeDebugInfo_54 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_TRACE_LEVEL_NONE,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL\n");
    }
    else
    {
      MR_Integer ProcLayoutVectorLengthB_63;
      MR_Word ProcLayoutVectorNameB_64;
      MR_Integer FileLayoutVectorLengthB_65;
      MR_Word FileLayoutVectorNameB_66;
      MR_Word TraceLevelB_67;
      MR_Integer SuppressedEventsB_68;
      MR_Integer NumLabelsB_69;
      MR_Word LabelExecCountNameB_70;
      MR_Word MaybeEventInfoB_71;
      MR_Tuple Var_192 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeDebugInfo_54, (MR_Integer) 0))));
      MR_String Var_205;

      ProcLayoutVectorLengthB_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_192, (MR_Integer) 0))));
      ProcLayoutVectorNameB_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_192, (MR_Integer) 1))));
      FileLayoutVectorLengthB_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_192, (MR_Integer) 2))));
      FileLayoutVectorNameB_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_192, (MR_Integer) 3))));
      TraceLevelB_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_192, (MR_Integer) 4))));
      SuppressedEventsB_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_192, (MR_Integer) 5))));
      NumLabelsB_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_192, (MR_Integer) 6))));
      LabelExecCountNameB_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_192, (MR_Integer) 7))));
      MaybeEventInfoB_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_192, (MR_Integer) 8))));
      mercury__io__write_int_4_p_0(Stream_9, ProcLayoutVectorLengthB_63);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      ll_backend__layout_out__output_layout_name_4_p_0(Stream_9, ProcLayoutVectorNameB_64);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      mercury__io__write_int_4_p_0(Stream_9, FileLayoutVectorLengthB_65);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      ll_backend__layout_out__output_layout_name_4_p_0(Stream_9, FileLayoutVectorNameB_66);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      Var_205 = libs__trace_params__trace_level_rep_1_f_0(TraceLevelB_67);
      mercury__io__write_string_4_p_0(Stream_9, Var_205);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      mercury__io__write_int_4_p_0(Stream_9, SuppressedEventsB_68);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      mercury__io__write_int_4_p_0(Stream_9, NumLabelsB_69);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      ll_backend__layout_out__output_layout_name_4_p_0(Stream_9, LabelExecCountNameB_70);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      if ((MaybeEventInfoB_71 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL\n");
      }
      else
      {
        MR_String EventSetNameB_72;
        MR_Integer MaxNumAttrB_73;
        MR_Integer NumEventSpecsB_74;
        MR_Word EventSetDescLayoutNameB_75;
        MR_Word EventSpecsLayoutNameB_76;
        MR_Tuple Var_218 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeEventInfoB_71, (MR_Integer) 0))));

        EventSetNameB_72 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 0))));
        MaxNumAttrB_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 1))));
        NumEventSpecsB_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 2))));
        EventSetDescLayoutNameB_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 3))));
        EventSpecsLayoutNameB_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_218, (MR_Integer) 4))));
        ll_backend__layout_out__quote_and_write_string_4_p_0(Stream_9, EventSetNameB_72);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
        ll_backend__layout_out__output_layout_name_4_p_0(Stream_9, EventSetDescLayoutNameB_75);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
        mercury__io__write_int_4_p_0(Stream_9, MaxNumAttrB_73);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
        mercury__io__write_int_4_p_0(Stream_9, NumEventSpecsB_74);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
        ll_backend__layout_out__output_layout_name_4_p_0(Stream_9, EventSpecsLayoutNameB_76);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      }
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
    {
      Var_246 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_246, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_246, 1) = ((MR_Box) (ModuleLayoutName_55));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_246, STATE_VARIABLE_DeclSet_126_126, STATE_VARIABLE_DeclSet_78);
  }
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_109_111_100_117_108_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_95_91_51_93_95_48_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleName_10,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DeclSet_0_18,
  MR_Word * STATE_VARIABLE_DeclSet_19)
{
  {
    MR_Word StringTable0_12 = (MR_Word) (HeadVar__4_4);
    MR_Word TableName_15;
    MR_Word Var_31;

    {
      TableName_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TableName_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), TableName_15, 1) = ((MR_Box) (ModuleName_10));
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, TableName_15, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {");
    if ((StringTable0_12 == (MR_Word) ((MR_Unsigned) 0U)))
      ll_backend__layout_out__output_module_string_table_chars_6_p_0(Stream_9, (MR_Integer) 0, (MR_Integer) 0, (MR_String) "");
    else
    {
      MR_String FirstString_54 = ((MR_String) ((MR_hl_field(MR_mktag(1), StringTable0_12, (MR_Integer) 0))));
      MR_Word Rest_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StringTable0_12, (MR_Integer) 1))));

      ll_backend__layout_out__output_module_string_table_strings_5_p_0(Stream_9, FirstString_54, Rest_55);
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (TableName_15));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_31, STATE_VARIABLE_DeclSet_0_18, STATE_VARIABLE_DeclSet_19);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_string_table_strings_5_p_0(
  MR_Word Stream_1,
  MR_String String_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      ll_backend__layout_out__output_module_string_table_chars_6_p_0(Stream_1, (MR_Integer) 0, (MR_Integer) 0, String_2);
    else
    {
      MR_String Next_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Rest_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_String next_value_of_String_2;
      MR_Word next_value_of_HeadVar__3_3;

      ll_backend__layout_out__output_module_string_table_chars_6_p_0(Stream_1, (MR_Integer) 0, (MR_Integer) 0, String_2);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_String_2 = Next_16;
      next_value_of_HeadVar__3_3 = Rest_17;
      String_2 = next_value_of_String_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_data_defns_10_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word ModuleName_3,
  MR_Integer FileNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_DeclSet_0_7,
  MR_Word * STATE_VARIABLE_DeclSet_8)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DeclSet_8 = STATE_VARIABLE_DeclSet_0_7;
  }
  else
  {
    MR_Word FileLayout_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word FileLayouts_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word FileLayoutName_27;
    MR_Word FileLayoutNames_28;
    MR_Word STATE_VARIABLE_DeclSet_35_35;
    MR_Integer Var_37;

    ll_backend__layout_out__output_file_layout_data_defn_10_p_0(Info_1, Stream_2, ModuleName_3, FileNum_4, FileLayout_25, &FileLayoutName_27, STATE_VARIABLE_DeclSet_0_7, &STATE_VARIABLE_DeclSet_35_35);
    Var_37 = (MR_Integer) ((MR_Unsigned) FileNum_4 + (MR_Unsigned) 1);
    ll_backend__layout_out__output_file_layout_data_defns_10_p_0(Info_1, Stream_2, ModuleName_3, Var_37, FileLayouts_26, &FileLayoutNames_28, STATE_VARIABLE_DeclSet_35_35, STATE_VARIABLE_DeclSet_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileLayoutName_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FileLayoutNames_28));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_data_defn_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word ModuleName_13,
  MR_Integer FileNum_14,
  MR_Word FileLayout_15,
  MR_Word * FileLayoutName_16,
  MR_Word STATE_VARIABLE_DeclSet_0_27,
  MR_Word * STATE_VARIABLE_DeclSet_28)
{
  {
    MR_String MangledModuleName_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1))));
    MR_String FileName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileLayout_15, (MR_Integer) 0))));
    MR_Word LineNoLabelList_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileLayout_15, (MR_Integer) 1))));
    MR_Word LineNos_22;
    MR_Word LabelLayoutSlots_23;
    MR_Integer VectorLengths_24;
    MR_Word LineNumberVectorName_25;
    MR_Word LabelVectorName_26;
    MR_Word STATE_VARIABLE_DeclSet_31_31;
    MR_Word STATE_VARIABLE_DeclSet_33_33;
    MR_Word Var_53;

    mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), LineNoLabelList_21, &LineNos_22, &LabelLayoutSlots_23);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_2[3]), LineNoLabelList_21, &VectorLengths_24);
    ll_backend__layout_out__output_file_layout_line_number_vector_defn_10_p_0(Info_11, Stream_12, ModuleName_13, FileNum_14, LineNos_22, &LineNumberVectorName_25, STATE_VARIABLE_DeclSet_0_27, &STATE_VARIABLE_DeclSet_31_31);
    ll_backend__layout_out__output_file_layout_label_layout_vector_defn_10_p_0(Stream_12, MangledModuleName_19, ModuleName_13, FileNum_14, LabelLayoutSlots_23, &LabelVectorName_26, STATE_VARIABLE_DeclSet_31_31, &STATE_VARIABLE_DeclSet_33_33);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *FileLayoutName_16 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ModuleName_13));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (FileNum_14));
    }
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_12, *FileLayoutName_16, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) " = {\n");
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\"");
    backend_libs__c_util__output_quoted_string_4_p_0(Stream_12, FileName_20);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\"");
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) ",\n");
    mercury__io__write_int_4_p_0(Stream_12, VectorLengths_24);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) ",\n");
    ll_backend__layout_out__output_layout_name_4_p_0(Stream_12, LineNumberVectorName_25);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) ",\n");
    ll_backend__layout_out__output_layout_name_4_p_0(Stream_12, LabelVectorName_26);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n};\n");
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (*FileLayoutName_16));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_53, STATE_VARIABLE_DeclSet_33_33, STATE_VARIABLE_DeclSet_28);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_label_layout_vector_defn_10_p_0(
  MR_Word Stream_11,
  MR_String MangledModuleName_12,
  MR_Word ModuleName_13,
  MR_Integer FileNum_14,
  MR_Word LabelSlots_15,
  MR_Word * LayoutName_16,
  MR_Word STATE_VARIABLE_DeclSet_0_21,
  MR_Word * STATE_VARIABLE_DeclSet_22)
{
  {
    MR_Word Var_36;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *LayoutName_16 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_13));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (FileNum_14));
    }
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_11, *LayoutName_16, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) " = {\n");
    if ((LabelSlots_15 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "NULL\n");
    else
      ll_backend__layout_out__output_layout_slots_in_vector_5_p_0(Stream_11, MangledModuleName_12, LabelSlots_15);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "};\n");
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (*LayoutName_16));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_36, STATE_VARIABLE_DeclSet_0_21, STATE_VARIABLE_DeclSet_22);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_line_number_vector_defn_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word ModuleName_13,
  MR_Integer FileNum_14,
  MR_Word LineNumbers_15,
  MR_Word * LayoutName_16,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23)
{
  {
    MR_Word Var_40;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *LayoutName_16 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_13));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (FileNum_14));
    }
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_12, *LayoutName_16, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) " = {");
    if ((LineNumbers_15 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n0");
    else
    {
      MR_Word AutoComments_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);

      switch (AutoComments_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word LeftOverVarNums_76;
            MR_Integer STATE_VARIABLE_Slot_22_81;

            ll_backend__layout_out__output_upto_n_numbers_in_vector_ac_8_p_0(Stream_12, LineNumbers_15, (MR_Integer) 1000, &LeftOverVarNums_76, (MR_Integer) 0, &STATE_VARIABLE_Slot_22_81);
            ll_backend__layout_out__output_numbers_in_vector_ac_5_p_0(Stream_12, LeftOverVarNums_76, STATE_VARIABLE_Slot_22_81);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word LeftOverVarNums_95;
            MR_Integer STATE_VARIABLE_Slot_22_100;

            ll_backend__layout_out__output_upto_n_numbers_in_vector_noac_8_p_0(Stream_12, LineNumbers_15, (MR_Integer) 1000, &LeftOverVarNums_95, (MR_Integer) 0, &STATE_VARIABLE_Slot_22_100);
            ll_backend__layout_out__output_numbers_in_vector_noac_5_p_0(Stream_12, LeftOverVarNums_95, STATE_VARIABLE_Slot_22_100);
          }
          break;
      }
    }
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n};\n");
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (*LayoutName_16));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_40, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_layout_name_in_vector_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_12;

    ll_backend__layout_out__output_layout_decl_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_12));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleName_10,
  MR_Word FileLayoutNames_11,
  MR_Word * VectorName_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  {
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_DeclSet_22_22;
    MR_Word Var_37;
    MR_Box conv2_STATE_VARIABLE_DeclSet_22_22;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__layout_out__output_file_layout_vector_data_defn_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Stream_9));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, FileLayoutNames_11, ((MR_Box) (STATE_VARIABLE_DeclSet_0_17)), &conv2_STATE_VARIABLE_DeclSet_22_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    STATE_VARIABLE_DeclSet_22_22 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_22_22));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *VectorName_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_10));
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, *VectorName_12, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n");
    if ((FileLayoutNames_11 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL\n");
    else
    {
      MR_Word Var_30;
      MR_Box conv3_STATE_VARIABLE_IO_34_34;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_10[0]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ll_backend__layout_out__output_file_layout_vector_data_defn_8_p_0_2));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Stream_9));
        MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_String) "&"));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, FileLayoutNames_11, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_34_34);
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (*VectorName_12));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_37, STATE_VARIABLE_DeclSet_22_22, STATE_VARIABLE_DeclSet_18);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_set_desc_defn_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleName_10,
  MR_String EventSetDesc_11,
  MR_Word * LayoutName_12,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  {
    MR_Word Var_29;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LayoutName_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_10));
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, *LayoutName_12, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {");
    ll_backend__layout_out__output_module_string_table_chars_6_p_0(Stream_9, (MR_Integer) 0, (MR_Integer) 0, EventSetDesc_11);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (*LayoutName_12));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_29, STATE_VARIABLE_DeclSet_0_15, STATE_VARIABLE_DeclSet_16);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_string_table_chars_6_p_0(
  MR_Word Stream_7,
  MR_Integer CurIndex_8,
  MR_Integer Count_9,
  MR_String String_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NextIndex_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_index_next_4_p_0(String_10, CurIndex_8, &NextIndex_12, &Char_13);
    if (succeeded)
    {
      MR_Integer Int_14;

      mercury__char__to_int_2_p_0(Char_13, &Int_14);
      succeeded = (Int_14 <= (MR_Integer) 127);
      if (succeeded)
      {
        mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 39);
        backend_libs__c_util__output_quoted_char_4_p_0(Stream_7, Char_13);
        mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 39);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      }
      else
      {
        MR_Word Codes_15;

        succeeded = mercury__char__to_utf8_2_p_0(Char_13, &Codes_15);
        if (succeeded)
          ll_backend__layout_out__output_multi_byte_char_codes_4_p_0(Stream_7, Codes_15);
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.layout_out.output_module_string_table_chars\'/6", (MR_String) "invalid code point");
            return;
          }
      }
      succeeded = (Count_9 == (MR_Integer) 10);
      if (succeeded)
      {
        MR_Integer next_value_of_CurIndex_8;

        mercury__io__nl_3_p_0(Stream_7);
        // direct tailcall eliminated
        ;
        next_value_of_CurIndex_8 = NextIndex_12;
        CurIndex_8 = next_value_of_CurIndex_8;
        Count_9 = (MR_Integer) 0;
        continue;
      }
      else
      {
        MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Count_9 + (MR_Unsigned) 1);
        MR_Integer next_value_of_CurIndex_8 = NextIndex_12;
        MR_Integer next_value_of_Count_9 = Var_32;

        // direct tailcall eliminated
        ;
        CurIndex_8 = next_value_of_CurIndex_8;
        Count_9 = next_value_of_Count_9;
        continue;
      }
    }
    else
    {
      MR_Char Var_37;

      mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 39);
      Var_37 = mercury__char__det_from_int_1_f_0((MR_Integer) 0);
      backend_libs__c_util__output_quoted_char_4_p_0(Stream_7, Var_37);
      mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 39);
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_multi_byte_char_codes_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer C_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_int_4_p_0(Stream_1, C_10);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cs_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_proc_layout_name_in_vector_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_12;

    ll_backend__layout_out__output_layout_decl_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_12));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleName_10,
  MR_Word ProcLayoutNames_11,
  MR_Word * VectorName_12,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  {
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_DeclSet_22_22;
    MR_Word Var_36;
    MR_Box conv2_STATE_VARIABLE_DeclSet_22_22;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__layout_out__output_module_layout_proc_vector_defn_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Stream_9));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, ProcLayoutNames_11, ((MR_Box) (STATE_VARIABLE_DeclSet_0_17)), &conv2_STATE_VARIABLE_DeclSet_22_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    STATE_VARIABLE_DeclSet_22_22 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_22_22));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *VectorName_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_10));
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, *VectorName_12, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n");
    if ((ProcLayoutNames_11 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL\n");
    else
    {
      MR_Word Var_30;
      MR_Box conv3_STATE_VARIABLE_IO_33_33;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ll_backend__layout_out__output_module_layout_proc_vector_defn_8_p_0_2));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Stream_9));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, ProcLayoutNames_11, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_33_33);
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (*VectorName_12));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_36, STATE_VARIABLE_DeclSet_22_22, STATE_VARIABLE_DeclSet_18);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_event_spec_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_24;

    ll_backend__layout_out__output_event_spec_components_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_24);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_24));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word EventSpecs_13,
  MR_Word ModuleName_14,
  MR_Word TypesRvalMap_15,
  MR_Word * LayoutName_16,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20)
{
  {
    MR_Word Var_23;
    MR_Word STATE_VARIABLE_DeclSet_24_24;
    MR_Word Var_26;
    MR_Word Var_32;
    MR_Box conv2_STATE_VARIABLE_DeclSet_24_24;
    MR_Box conv1_STATE_VARIABLE_IO_25_25;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[13]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__layout_out__output_event_specs_and_components_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Stream_12));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (ModuleName_14));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, EventSpecs_13, ((MR_Box) (STATE_VARIABLE_DeclSet_0_19)), &conv2_STATE_VARIABLE_DeclSet_24_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
    STATE_VARIABLE_DeclSet_24_24 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_24_24));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LayoutName_16 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_14));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (*LayoutName_16));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_26, STATE_VARIABLE_DeclSet_24_24, STATE_VARIABLE_DeclSet_20);
    ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_12, *LayoutName_16, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) " = {\n");
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[14]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ll_backend__layout_out__output_event_specs_and_components_10_p_0_2));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Info_11));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (ModuleName_14));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (TypesRvalMap_15));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), Var_32, (MR_String) ",\n", EventSpecs_13, Stream_12);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n};\n\n");
  }
}

static MR_Integer MR_CALL 
ll_backend__layout_out__layout_version_number_0_f_0(void)
{
  return (MR_Integer) 5;
}

static void MR_CALL 
ll_backend__layout_out__output_bytecodes_driver_4_p_0(
  MR_Word Stream_5,
  MR_Word Bytes_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Bytes_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word BytesLeft_10;
      MR_Word next_value_of_Bytes_6;

      ll_backend__layout_out__output_bytecodes_7_p_0(Stream_5, Bytes_6, &BytesLeft_10, (MR_Integer) 0, (MR_Integer) 256);
      // direct tailcall eliminated
      ;
      next_value_of_Bytes_6 = BytesLeft_10;
      Bytes_6 = next_value_of_Bytes_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_bytecodes_7_p_0(
  MR_Word Stream_8,
  MR_Word Bytes_9,
  MR_Word * BytesLeft_10,
  MR_Integer STATE_VARIABLE_Seq_0_16,
  MR_Integer MaxSeq_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Bytes_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *BytesLeft_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Head_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Bytes_9, (MR_Integer) 0))));
      MR_Word Tail_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Bytes_9, (MR_Integer) 1))));

      succeeded = (STATE_VARIABLE_Seq_0_16 < MaxSeq_12);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_Seq_22_22;
        MR_Integer Var_24;
        MR_Word next_value_of_Bytes_9;
        MR_Integer next_value_of_STATE_VARIABLE_Seq_0_16;

        mercury__io__write_int_4_p_0(Stream_8, Head_14);
        mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 44);
        STATE_VARIABLE_Seq_22_22 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Seq_0_16 + (MR_Unsigned) 1);
        Var_24 = (STATE_VARIABLE_Seq_22_22 % (MR_Integer) 16);
        succeeded = (Var_24 == (MR_Integer) 0);
        if (succeeded)
          mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 10);
        // direct tailcall eliminated
        ;
        next_value_of_Bytes_9 = Tail_15;
        next_value_of_STATE_VARIABLE_Seq_0_16 = STATE_VARIABLE_Seq_22_22;
        Bytes_9 = next_value_of_Bytes_9;
        STATE_VARIABLE_Seq_0_16 = next_value_of_STATE_VARIABLE_Seq_0_16;
        continue;
      }
      else
        *BytesLeft_10 = Bytes_9;
    }
    break;
  }
}

void MR_CALL 
ll_backend__layout_out__output_closure_layout_data_defn_7_p_0(
  MR_Word _Info_8,
  MR_Word Stream_9,
  MR_Word ClosureData_10,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23)
{
  ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_111_115_117_114_101_95_108_97_121_111_117_116_95_100_97_116_97_95_100_101_102_110_95_95_91_49_93_95_48_7_p_0(Stream_9, ClosureData_10, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
}

void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_111_115_117_114_101_95_108_97_121_111_117_116_95_100_97_116_97_95_100_101_102_110_95_95_91_49_93_95_48_7_p_0(
  MR_Word Stream_9,
  MR_Word ClosureData_10,
  MR_Word STATE_VARIABLE_DeclSet_0_22,
  MR_Word * STATE_VARIABLE_DeclSet_23)
{
  {
    MR_Word CallerProcLabel_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClosureData_10, (MR_Integer) 0))));
    MR_Integer SeqNo_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClosureData_10, (MR_Integer) 1))));
    MR_Word ClosureProcLabel_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClosureData_10, (MR_Integer) 2))));
    MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClosureData_10, (MR_Integer) 3))));
    MR_String FileName_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClosureData_10, (MR_Integer) 4))));
    MR_Integer LineNumber_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClosureData_10, (MR_Integer) 5))));
    MR_Word PredOrigin_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClosureData_10, (MR_Integer) 6))));
    MR_String GoalPath_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClosureData_10, (MR_Integer) 7))));
    MR_Word LayoutName_21;
    MR_String Var_35;
    MR_Word Var_48;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    {
      LayoutName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LayoutName_21, 0) = ((MR_Box) (CallerProcLabel_13));
      MR_hl_field(MR_mktag(1), LayoutName_21, 1) = ((MR_Box) (SeqNo_14));
      MR_hl_field(MR_mktag(1), LayoutName_21, 2) = ((MR_Box) (ClosureProcLabel_15));
    }
    ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, LayoutName_21, (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n{\n");
    ll_backend__layout_out__output_proc_id_5_p_0(Stream_9, ClosureProcLabel_15, PredOrigin_19);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "},\n");
    Var_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_16);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    backend_libs__c_util__output_quoted_string_4_p_0(Stream_9, Var_35);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    backend_libs__c_util__output_quoted_string_4_p_0(Stream_9, FileName_17);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    mercury__io__write_int_4_p_0(Stream_9, LineNumber_18);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    backend_libs__c_util__output_quoted_string_4_p_0(Stream_9, GoalPath_20);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n};\n");
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (LayoutName_21));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_48, STATE_VARIABLE_DeclSet_0_22, STATE_VARIABLE_DeclSet_23);
  }
}

void MR_CALL 
ll_backend__layout_out__output_proc_layout_data_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word ProcLayoutData_10,
  MR_Word STATE_VARIABLE_DeclSet_0_40,
  MR_Word * STATE_VARIABLE_DeclSet_41)
{
  {
    MR_Word RttiProcLabel_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLayoutData_10, (MR_Integer) 0))));
    MR_Word Traversal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLayoutData_10, (MR_Integer) 1))));
    MR_Word MaybeRest_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLayoutData_10, (MR_Integer) 2))));
    MR_Word ProcLabel_16;
    MR_Word MaybeEntryLabel_17;
    MR_Word MaybeSuccipSlot_18;
    MR_Integer StackSlotCount_19;
    MR_Word Detism_20;
    MR_Word ProcLayoutName_27;
    MR_Word DeclId_39;
    MR_Word STATE_VARIABLE_DeclSet_48_48;
    MR_String Var_72;

    ProcLabel_16 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_13);
    MaybeEntryLabel_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Traversal_14, (MR_Integer) 0))));
    MaybeSuccipSlot_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Traversal_14, (MR_Integer) 1))));
    StackSlotCount_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Traversal_14, (MR_Integer) 2))));
    Detism_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Traversal_14, (MR_Integer) 3))) & (MR_Integer) 7);
    if ((MaybeEntryLabel_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Kind_22;

      if ((MaybeRest_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Kind_22 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_DeclSet_48_48 = STATE_VARIABLE_DeclSet_0_40;
      }
      else
      {
        MR_Word ModuleLayoutDecl_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRest_15, (MR_Integer) 3))));
        MR_Word Var_47;

        Var_47 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ProcLabel_16);
        {
          Kind_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Kind_22, 0) = (MR_Box) ((MR_Unsigned) (Var_47));
        }
        ll_backend__layout_out__output_layout_decl_6_p_0(Stream_9, ModuleLayoutDecl_26, STATE_VARIABLE_DeclSet_0_40, &STATE_VARIABLE_DeclSet_48_48);
      }
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      {
        ProcLayoutName_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcLayoutName_27, 0) = ((MR_Box) (RttiProcLabel_13));
        MR_hl_field(MR_mktag(0), ProcLayoutName_27, 1) = ((MR_Box) (Kind_22));
      }
      ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, ProcLayoutName_27, (MR_Integer) 1);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL");
    }
    else
    {
      MR_Word EntryLabel_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEntryLabel_17, (MR_Integer) 0))));
      MR_Word Var_44;
      MR_Word Kind_158;
      MR_Word STATE_VARIABLE_DeclSet_45_163;

      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (EntryLabel_28));
      }
      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_7_p_0(Info_8, Stream_9, Var_44, STATE_VARIABLE_DeclSet_0_40, &STATE_VARIABLE_DeclSet_45_163);
      if ((MaybeRest_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Kind_158 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_DeclSet_48_48 = STATE_VARIABLE_DeclSet_45_163;
      }
      else
      {
        MR_Word ModuleLayoutDecl_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRest_15, (MR_Integer) 3))));
        MR_Word Var_152;

        Var_152 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ProcLabel_16);
        {
          Kind_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Kind_158, 0) = (MR_Box) ((MR_Unsigned) (Var_152));
        }
        ll_backend__layout_out__output_layout_decl_6_p_0(Stream_9, ModuleLayoutDecl_151, STATE_VARIABLE_DeclSet_45_163, &STATE_VARIABLE_DeclSet_48_48);
      }
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      {
        ProcLayoutName_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcLayoutName_27, 0) = ((MR_Box) (RttiProcLabel_13));
        MR_hl_field(MR_mktag(0), ProcLayoutName_27, 1) = ((MR_Box) (Kind_158));
      }
      ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_9, ProcLayoutName_27, (MR_Integer) 1);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = {\n");
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
      ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_9, Var_44);
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
    if ((MaybeSuccipSlot_18 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_int_4_p_0(Stream_9, (MR_Integer) -1);
    else
    {
      MR_Integer SuccipSlot_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSuccipSlot_18, (MR_Integer) 0))));

      mercury__io__write_int_4_p_0(Stream_9, SuccipSlot_29);
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    mercury__io__write_int_4_p_0(Stream_9, StackSlotCount_19);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    Var_72 = ll_backend__layout_out__detism_to_c_detism_1_f_0(Detism_20);
    mercury__io__write_string_4_p_0(Stream_9, Var_72);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n},\n");
    if ((MaybeRest_15 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "-1\n");
    else
    {
      MR_Word MaybeProcStatic_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRest_15, (MR_Integer) 0))));
      MR_Word MaybeExecTrace_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRest_15, (MR_Integer) 1))));
      MR_Word MaybeProcBodyBytes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRest_15, (MR_Integer) 2))));
      MR_Word ModuleLayout_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRest_15, (MR_Integer) 3))));
      MR_Word Origin_34;
      MR_String MangledModuleName_35;

      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
      Origin_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_13, (MR_Integer) 11))));
      ll_backend__layout_out__output_proc_id_5_p_0(Stream_9, ProcLabel_16, Origin_34);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "},\n");
      MangledModuleName_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))));
      if ((MaybeExecTrace_31 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
      else
      {
        MR_Word ExecTraceSlotName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExecTrace_31, (MR_Integer) 0))));

        ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, MangledModuleName_35, ExecTraceSlotName_36);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      }
      if ((MaybeProcStatic_30 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
      else
      {
        MR_Word ProcStaticSlotName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcStatic_30, (MR_Integer) 0))));

        ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, MangledModuleName_35, ProcStaticSlotName_37);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      }
      if ((MaybeProcBodyBytes_32 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
      else
      {
        MR_Word ProcBodyBytesSlotName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcBodyBytes_32, (MR_Integer) 0))));

        ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_9, (MR_Integer) 1, MangledModuleName_35, ProcBodyBytesSlotName_38);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      }
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "&");
      ll_backend__layout_out__output_layout_name_4_p_0(Stream_9, ModuleLayout_33);
    }
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n};\n");
    {
      DeclId_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), DeclId_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), DeclId_39, 1) = ((MR_Box) (ProcLayoutName_27));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(DeclId_39, STATE_VARIABLE_DeclSet_48_48, STATE_VARIABLE_DeclSet_41);
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__detism_to_c_detism_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&ll_backend__layout_out_vector_common_8[0 + HeadVar__1_1]))->ll_backend__layout_out__vector_common_type_8_0__vct_8_f_0;

    return HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_id_5_p_0(
  MR_Word Stream_6,
  MR_Word ProcLabel_7,
  MR_Word Origin_8)
{
  if (((MR_tag((MR_Word) ProcLabel_7)) == (MR_Integer) 0))
  {
    MR_Word DefiningModule_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_7, (MR_Integer) 0))));
    MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcLabel_7, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word DeclaringModule_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_7, (MR_Integer) 2))));
    MR_String PredName0_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_7, (MR_Integer) 3))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_7, (MR_Integer) 4))));
    MR_Integer ModeNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_7, (MR_Integer) 5))));
    MR_String PredName_16;
    MR_String Var_45;
    MR_String Var_49;
    MR_String Var_53;

    PredName_16 = ll_backend__layout_out__origin_name_2_f_0(Origin_8, PredName0_13);
    switch (PredOrFunc_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Var_45 = (MR_String) "MR_FUNCTION";
        break;
      case (MR_Integer) 0:
        Var_45 = (MR_String) "MR_PREDICATE";
        break;
    }
    mercury__io__write_string_4_p_0(Stream_6, Var_45);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    Var_49 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DeclaringModule_12);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\"");
    backend_libs__c_util__output_quoted_string_4_p_0(Stream_6, Var_49);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\"");
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    Var_53 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DefiningModule_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\"");
    backend_libs__c_util__output_quoted_string_4_p_0(Stream_6, Var_53);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\"");
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    ll_backend__layout_out__quote_and_write_string_4_p_0(Stream_6, PredName_16);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    mercury__io__write_int_4_p_0(Stream_6, Arity_14);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    mercury__io__write_int_4_p_0(Stream_6, ModeNum_15);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
  else
  {
    MR_Word SpecialPredId_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ProcLabel_7, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word TypeModule_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcLabel_7, (MR_Integer) 2))));
    MR_String TypeName_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_7, (MR_Integer) 3))));
    MR_Integer TypeArity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_7, (MR_Integer) 4))));
    MR_Word TypeCtor_21;
    MR_Word Var_24;
    MR_String Var_28;
    MR_String Var_32;
    MR_Word DefiningModule_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcLabel_7, (MR_Integer) 0))));
    MR_String PredName0_67;
    MR_Integer ModeNum_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_7, (MR_Integer) 5))));
    MR_String PredName_69;

    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (TypeModule_18));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (TypeName_19));
    }
    {
      TypeCtor_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_21, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), TypeCtor_21, 1) = ((MR_Box) (TypeArity_20));
    }
    PredName0_67 = hlds__special_pred__special_pred_name_2_f_0(SpecialPredId_17, TypeCtor_21);
    PredName_69 = ll_backend__layout_out__origin_name_2_f_0(Origin_8, PredName0_67);
    ll_backend__layout_out__quote_and_write_string_4_p_0(Stream_6, TypeName_19);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    Var_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeModule_18);
    ll_backend__layout_out__quote_and_write_string_4_p_0(Stream_6, Var_28);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    Var_32 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DefiningModule_66);
    ll_backend__layout_out__quote_and_write_string_4_p_0(Stream_6, Var_32);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    ll_backend__layout_out__quote_and_write_string_4_p_0(Stream_6, PredName_69);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    mercury__io__write_int_4_p_0(Stream_6, TypeArity_20);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
    mercury__io__write_int_4_p_0(Stream_6, ModeNum_68);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__quote_and_write_string_4_p_0(
  MR_Word Stream_5,
  MR_String String_6)
{
  {
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\"");
    backend_libs__c_util__output_quoted_string_4_p_0(Stream_5, String_6);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\"");
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__origin_name_2_f_0(
  MR_Word Origin_4,
  MR_String Name0_5)
{
  {
    MR_bool succeeded;
    MR_String Name_6;

    switch (MR_tag((MR_Word) Origin_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Name_6 = Name0_5;
        break;
      case (MR_Integer) 1:
        Name_6 = Name0_5;
        break;
      case (MR_Integer) 2:
        Name_6 = Name0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            Name_6 = Name0_5;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Transform_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 1))));
              MR_Word OldOrigin_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 2))));
              MR_String OldName_17;

              OldName_17 = ll_backend__layout_out__origin_name_2_f_0(OldOrigin_15, (MR_String) "");
              succeeded = (strcmp(OldName_17, (MR_String) "") == 0);
              if (succeeded)
                Name_6 = Name0_5;
              else
              {
                MR_String Var_35;
                MR_String Var_37;

                Var_37 = ll_backend__layout_out__pred_transform_name_1_f_0(Transform_14);
                Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_37);
                Name_6 = mercury__string__f_43_43_2_f_0(OldName_17, Var_35);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String FileName0_7 = ((MR_String) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 1))));
              MR_Integer LineNum_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 2))));
              MR_Integer SeqNo_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 3))));
              MR_String Var_10;

              succeeded = mercury__string__append_3_p_1((MR_String) "IntroducedFrom", &Var_10, Name0_5);
              if (succeeded)
              {
                MR_String FileName_11;

                mercury__string__replace_all_4_p_0(FileName0_7, (MR_String) ".", (MR_String) "_", &FileName_11);
                succeeded = (SeqNo_9 > (MR_Integer) 1);
                if (succeeded)
                {
                  MR_String Var_56;
                  MR_String Var_64;
                  MR_String Var_65;
                  MR_String Var_67;
                  MR_String Var_68;
                  MR_String Var_75;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), LineNum_8, &Var_56);
                  Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_56);
                  Var_65 = mercury__string__f_43_43_2_f_0(FileName_11, Var_64);
                  Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_65);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), SeqNo_9, &Var_68);
                  Var_75 = mercury__string__f_43_43_2_f_0(Var_68, Var_67);
                  Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda", Var_75);
                }
                else
                {
                  MR_String Var_77;
                  MR_String Var_85;
                  MR_String Var_86;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), LineNum_8, &Var_77);
                  Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_77);
                  Var_86 = mercury__string__f_43_43_2_f_0(FileName_11, Var_85);
                  Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda_", Var_86);
                }
              }
              else
                Name_6 = Name0_5;
            }
            break;
        }
        break;
    }
    return Name_6;
  }
}

static MR_Box MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_Str_5;

    conv1_Str_5 = ll_backend__layout_out__subst_to_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Str_5));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_String) "dep_par_conj_";
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "par_lc";
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_String) "table_gen";
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_String) "stm_expansion";
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_String) "structure_reuse";
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_String) "ssdebug";
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_String) "daio";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Seq_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_String Var_5;

          Var_5 = mercury__string__int_to_string_1_f_0(Seq_3);
          HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "ho", Var_5);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Proc_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_String Var_8;

          Var_8 = mercury__string__int_to_string_1_f_0(Proc_6);
          HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "hoproc", Var_8);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Substs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word Var_11;

              Var_11 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__layout_out_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[5]), Substs_9);
              HeadVar__2_2 = mercury__string__join_list_2_f_0((MR_String) "_", Var_11);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Posns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String Var_15;
              MR_Word Var_17;

              Var_17 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[6]), Posns_13);
              Var_15 = mercury__string__join_list_2_f_0((MR_String) "_", Var_17);
              HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "ua_", Var_15);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Posns_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String Var_21;
              MR_Word Var_23;

              Var_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[4]), Posns_19);
              Var_21 = mercury__string__join_list_2_f_0((MR_String) "_", Var_23);
              HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "acc_", Var_21);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Proc_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String Var_27;

              Var_27 = mercury__string__int_to_string_1_f_0(Proc_25);
              HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "inv_", Var_27);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Proc_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String Var_30;

              Var_30 = mercury__string__int_to_string_1_f_0(Proc_28);
              HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "tup_", Var_30);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Proc_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String Var_33;

              Var_33 = mercury__string__int_to_string_1_f_0(Proc_31);
              HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "untup_", Var_33);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ProcId_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgPos_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_String Var_37;
              MR_String Var_38;
              MR_Integer Var_39;
              MR_String Var_40;
              MR_String Var_42;

              Var_39 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_34);
              Var_38 = mercury__string__int_to_string_1_f_0(Var_39);
              Var_42 = ll_backend__layout_out__ints_to_string_1_f_0(ArgPos_35);
              Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "_args", Var_42);
              Var_37 = mercury__string__f_43_43_2_f_0(Var_38, Var_40);
              HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "retptr_", Var_37);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer N_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String Var_45;

              Var_45 = mercury__string__int_to_string_1_f_0(N_43);
              HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "dnf_", Var_45);
            }
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__ints_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_String) "";
    else
    {
      MR_Integer N_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ns_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Var_6;
      MR_String Var_7;
      MR_String Var_8;

      Var_7 = mercury__string__int_to_string_1_f_0(N_3);
      Var_8 = ll_backend__layout_out__ints_to_string_1_f_0(Ns_4);
      Var_6 = mercury__string__f_43_43_2_f_0(Var_7, Var_8);
      HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_6);
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_decl_6_p_0(
  MR_Word Stream_7,
  MR_Word LayoutName_8,
  MR_Word STATE_VARIABLE_DeclSet_0_11,
  MR_Word * STATE_VARIABLE_DeclSet_12)
{
  {
    MR_bool succeeded;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (LayoutName_8));
    }
    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_15, STATE_VARIABLE_DeclSet_0_11);
    if (succeeded)
      *STATE_VARIABLE_DeclSet_12 = STATE_VARIABLE_DeclSet_0_11;
    else
    {
      MR_Word Var_20;

      ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_7, LayoutName_8, (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n");
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (LayoutName_8));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_20, STATE_VARIABLE_DeclSet_0_11, STATE_VARIABLE_DeclSet_12);
    }
  }
}

MR_Word MR_CALL 
ll_backend__layout_out__proc_label_user_or_uci_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
      HeadVar__2_2 = (MR_Integer) 0;
    else
      HeadVar__2_2 = (MR_Integer) 1;
    return HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_slot_id_6_p_0(
  MR_Word Stream_7,
  MR_Word UseMacro_8,
  MR_String ModuleName_9,
  MR_Word SlotName_10)
{
  {
    MR_Word ArrayName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotName_10, (MR_Integer) 0))));
    MR_Integer SlotNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SlotName_10, (MR_Integer) 1))));
    MR_String Var_25;

    ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, UseMacro_8, ModuleName_9, ArrayName_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), SlotNum_13, &Var_25);
    mercury__io__write_string_4_p_0(Stream_7, Var_25);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
  }
}

void MR_CALL 
ll_backend__layout_out__output_maybe_layout_name_decl_6_p_0(
  MR_Word Stream_7,
  MR_Word LayoutName_8,
  MR_Word STATE_VARIABLE_DeclSet_0_11,
  MR_Word * STATE_VARIABLE_DeclSet_12)
{
  {
    MR_bool succeeded;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (LayoutName_8));
    }
    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_15, STATE_VARIABLE_DeclSet_0_11);
    if (succeeded)
      *STATE_VARIABLE_DeclSet_12 = STATE_VARIABLE_DeclSet_0_11;
    else
    {
      MR_Word Var_17;

      ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_7, LayoutName_8, (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n");
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (LayoutName_8));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_17, STATE_VARIABLE_DeclSet_0_11, STATE_VARIABLE_DeclSet_12);
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_name_decl_4_p_0(
  MR_Word Stream_5,
  MR_Word LayoutName_6)
{
  {
    ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_5, LayoutName_6, (MR_Integer) 0);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ";\n");
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(
  MR_Word Stream_6,
  MR_Word Name_7,
  MR_Word BeingDefined_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Name_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RttiProcLabel_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name_7, (MR_Integer) 0))));
          MR_Word Kind_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name_7, (MR_Integer) 1))));
          MR_Word ProcIsImported_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_10, (MR_Integer) 12))) & (MR_Integer) 1);
          MR_Word ProcIsExported_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_10, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
          MR_String Var_133;

          succeeded = (ProcIsImported_12 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (ProcIsExported_13 == (MR_Integer) 0);
          if (succeeded)
            mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static ");
          else
            switch (BeingDefined_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                }
                break;
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_6, (MR_String) "extern ");
                break;
            }
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "const ");
          Var_133 = ll_backend__layout_out__proc_layout_kind_to_type_1_f_0(Kind_11);
          mercury__io__write_string_4_p_0(Stream_6, Var_133);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
          ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClosureProcLabel_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Name_7, (MR_Integer) 2))));

          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static const ");
          if (((MR_tag((MR_Word) ClosureProcLabel_16)) == (MR_Integer) 0))
            mercury__io__write_string_4_p_0(Stream_6, (MR_String) "MR_UserClosureId\n");
          else
            mercury__io__write_string_4_p_0(Stream_6, (MR_String) "MR_UCIClosureId\n");
          ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static const MR_ModuleFileLayout ");
          ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static const MR_int_least16_t ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static const MR_LabelLayout *");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static const char ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static const MR_ModuleFileLayout *");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static const MR_ProcLayout *");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer NumElements_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_7, (MR_Integer) 2))));

              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static MR_Unsigned ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[");
              mercury__io__write_int_4_p_0(Stream_6, NumElements_31);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "]");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static const char ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static const char * ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static MR_SynthAttr ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static MR_uint_least16_t ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 10:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static MR_int_least16_t ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 11:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static MR_int_least16_t ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 12:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static MR_UserEventSpec ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 13:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static const MR_uint_least8_t ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 14:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static const MR_uint_least8_t ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "[]");
            }
            break;
          case (MR_Integer) 15:
            {
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static const MR_ModuleLayout ");
              ll_backend__layout_out__output_layout_name_4_p_0(Stream_6, Name_7);
            }
            break;
        }
        break;
    }
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__proc_layout_kind_to_type_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_String) "MR_ProcLayout_Traversal";
    else
    {
      MR_Word Var_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);

      switch (Var_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "MR_ProcLayoutUCI";
          break;
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "MR_ProcLayoutUser";
          break;
      }
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_name_4_p_0(
  MR_Word Stream_5,
  MR_Word Name_6)
{
  switch (MR_tag((MR_Word) Name_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiProcLabel_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name_6, (MR_Integer) 0))));
        MR_Word ProcLabel_10;
        MR_String ProcLabelStr_11;
        MR_String Var_196;

        ProcLabel_10 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_8);
        ProcLabelStr_11 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 1, ProcLabel_10);
        Var_196 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_4_p_0(Stream_5, Var_196);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_proc_layout__");
        mercury__io__write_string_4_p_0(Stream_5, ProcLabelStr_11);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CallerProcLabel_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Name_6, (MR_Integer) 0))));
        MR_Integer SeqNo_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Name_6, (MR_Integer) 1))));
        MR_String CallerProcLabelStr_15;
        MR_String Var_185;
        MR_String Var_399;

        CallerProcLabelStr_15 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0((MR_Integer) 0, CallerProcLabel_12);
        Var_185 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_4_p_0(Stream_5, Var_185);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_closure_layout__");
        mercury__io__write_string_4_p_0(Stream_5, CallerProcLabelStr_15);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), SeqNo_13, &Var_399);
        mercury__io__write_string_4_p_0(Stream_5, Var_399);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Name_6, (MR_Integer) 0))));
        MR_Integer FileNum_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Name_6, (MR_Integer) 1))));
        MR_String ModuleNameStr_18;
        MR_String Var_174;
        MR_String Var_386;

        ModuleNameStr_18 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_16);
        Var_174 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_4_p_0(Stream_5, Var_174);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_file_layout__");
        mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_18);
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), FileNum_17, &Var_386);
        mercury__io__write_string_4_p_0(Stream_5, Var_386);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_164;
            MR_Word ModuleName_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_Integer FileNum_201 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 2))));
            MR_String ModuleNameStr_202;
            MR_String Var_360;

            ModuleNameStr_202 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_200);
            Var_164 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_164);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_file_lines__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_202);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), FileNum_201, &Var_360);
            mercury__io__write_string_4_p_0(Stream_5, Var_360);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_154;
            MR_Word ModuleName_203 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_Integer FileNum_204 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 2))));
            MR_String ModuleNameStr_205;
            MR_String Var_373;

            ModuleNameStr_205 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_203);
            Var_154 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_154);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_file_label_layouts__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_205);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), FileNum_204, &Var_373);
            mercury__io__write_string_4_p_0(Stream_5, Var_373);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_146;
            MR_Word ModuleName_206 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_207;

            ModuleNameStr_207 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_206);
            Var_146 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_146);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_strings__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_207);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_138;
            MR_Word ModuleName_208 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_209;

            ModuleNameStr_209 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_208);
            Var_138 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_138);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_files__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_209);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String Var_130;
            MR_Word ModuleName_210 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_211;

            ModuleNameStr_211 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_210);
            Var_130 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_130);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_procs__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_211);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String Var_122;
            MR_Word ModuleName_212 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_213;

            ModuleNameStr_213 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_212);
            Var_122 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_122);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_label_exec_counts__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_213);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String Var_114;
            MR_Word ModuleName_214 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_215;

            ModuleNameStr_215 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_214);
            Var_114 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_114);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_layout_event_set_desc__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_215);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Integer EventNumber_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 2))));
            MR_String Var_104;
            MR_Word ModuleName_216 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_217;
            MR_String Var_344;

            ModuleNameStr_217 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_216);
            Var_104 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_104);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_layout_event_arg_names__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_217);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), EventNumber_20, &Var_344);
            mercury__io__write_string_4_p_0(Stream_5, Var_344);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String Var_94;
            MR_Word ModuleName_218 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_219;
            MR_Integer EventNumber_220 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 2))));
            MR_String Var_279;

            ModuleNameStr_219 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_218);
            Var_94 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_94);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_layout_event_synth_attrs__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_219);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), EventNumber_220, &Var_279);
            mercury__io__write_string_4_p_0(Stream_5, Var_279);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer SynthCallArgNumber_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 3))));
            MR_String Var_82;
            MR_Word ModuleName_221 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_222;
            MR_Integer EventNumber_223 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 2))));
            MR_String Var_316;
            MR_String Var_325;

            ModuleNameStr_222 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_221);
            Var_82 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_82);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_layout_event_synth_attr_args__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_222);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), EventNumber_223, &Var_316);
            mercury__io__write_string_4_p_0(Stream_5, Var_316);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), SynthCallArgNumber_21, &Var_325);
            mercury__io__write_string_4_p_0(Stream_5, Var_325);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String Var_70;
            MR_Word ModuleName_224 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_225;
            MR_Integer EventNumber_226 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 2))));
            MR_Integer SynthCallArgNumber_227 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 3))));
            MR_String Var_293;
            MR_String Var_302;

            ModuleNameStr_225 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_224);
            Var_70 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_70);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_layout_event_synth_attr_order__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_225);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), EventNumber_226, &Var_293);
            mercury__io__write_string_4_p_0(Stream_5, Var_293);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), SynthCallArgNumber_227, &Var_302);
            mercury__io__write_string_4_p_0(Stream_5, Var_302);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String Var_60;
            MR_Word ModuleName_228 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_229;
            MR_Integer EventNumber_230 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 2))));
            MR_String Var_266;

            ModuleNameStr_229 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_228);
            Var_60 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_60);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_layout_event_synth_order__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_229);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), EventNumber_230, &Var_266);
            mercury__io__write_string_4_p_0(Stream_5, Var_266);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_String Var_52;
            MR_Word ModuleName_231 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_232;

            ModuleNameStr_232 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_231);
            Var_52 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_52);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_layout_event_specs__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_232);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_String Var_44;
            MR_Word ModuleName_233 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_234;

            ModuleNameStr_234 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_233);
            Var_44 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_44);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_layout_oisu_bytes__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_234);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String Var_36;
            MR_Word ModuleName_235 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_236;

            ModuleNameStr_236 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_235);
            Var_36 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_36);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_layout_type_table_bytes__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_236);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_String Var_28;
            MR_Word ModuleName_237 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_6, (MR_Integer) 1))));
            MR_String ModuleNameStr_238;

            ModuleNameStr_238 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_237);
            Var_28 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_4_p_0(Stream_5, Var_28);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_module_layout__");
            mercury__io__write_string_4_p_0(Stream_5, ModuleNameStr_238);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_array_defns_26_p_0(
  MR_Word Info_27,
  MR_Word Stream_28,
  MR_Word PseudoTypeInfos_29,
  MR_Word HLDSVarNums_30,
  MR_Word ShortLocns_31,
  MR_Word LongLocns_32,
  MR_Word UserEventVarNums_33,
  MR_Word UserEvents_34,
  MR_Word NoVarLabelLayouts_35,
  MR_Word SVarLabelLayouts_36,
  MR_Word LVarLabelLayouts_37,
  MR_Word CallSiteStatics_38,
  MR_Word CoveragePoints_39,
  MR_Word ProcStatics_40,
  MR_Word ProcHeadVarNums_41,
  MR_Word ProcVarNames_42,
  MR_Word ProcBodyBytecodes_43,
  MR_Word TableIoEntries_44,
  MR_Word ProcEventLayouts_45,
  MR_Word ExecTraces_46,
  MR_Word TSStringTable_47,
  MR_Word AllocSites_48,
  MR_Word STATE_VARIABLE_DeclSet_0_92,
  MR_Word * STATE_VARIABLE_DeclSet_93)
{
  {
    if (!((PseudoTypeInfos_29 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_pseudo_type_info_array_defn_5_p_0(Info_27, Stream_28, PseudoTypeInfos_29);
    }
    if (!((HLDSVarNums_30 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_hlds_var_nums_array_defn_5_p_0(Info_27, Stream_28, HLDSVarNums_30);
    }
    if (!((ShortLocns_31 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_short_locns_array_defn_5_p_0(Info_27, Stream_28, ShortLocns_31);
    }
    if (!((LongLocns_32 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_long_locns_array_defn_5_p_0(Info_27, Stream_28, LongLocns_32);
    }
    if (!((UserEventVarNums_33 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_user_event_var_nums_array_defn_5_p_0(Info_27, Stream_28, UserEventVarNums_33);
    }
    if (!((UserEvents_34 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_user_events_array_defn_5_p_0(Info_27, Stream_28, UserEvents_34);
    }
    if (!((NoVarLabelLayouts_35 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_no_var_label_layouts_array_defn_5_p_0(Info_27, Stream_28, NoVarLabelLayouts_35);
    }
    if (!((SVarLabelLayouts_36 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_short_var_label_layouts_array_defn_5_p_0(Info_27, Stream_28, SVarLabelLayouts_36);
    }
    if (!((LVarLabelLayouts_37 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_long_var_label_layouts_array_defn_5_p_0(Info_27, Stream_28, LVarLabelLayouts_37);
    }
    if ((CallSiteStatics_38 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DeclSet_93 = STATE_VARIABLE_DeclSet_0_92;
    else
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_call_site_static_array_7_p_0(Info_27, Stream_28, CallSiteStatics_38, STATE_VARIABLE_DeclSet_0_92, STATE_VARIABLE_DeclSet_93);
    }
    if (!((CoveragePoints_39 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer NumCoveragePoints_73;

      mercury__io__nl_3_p_0(Stream_28);
      mercury__list__length_2_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), CoveragePoints_39, &NumCoveragePoints_73);
      ll_backend__layout_out__output_proc_static_cp_static_array_6_p_0(Info_27, Stream_28, CoveragePoints_39, NumCoveragePoints_73);
      ll_backend__layout_out__output_proc_static_cp_dynamic_array_5_p_0(Info_27, Stream_28, NumCoveragePoints_73);
    }
    if (!((ProcStatics_40 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_proc_statics_array_defn_5_p_0(Info_27, Stream_28, ProcStatics_40);
    }
    if (!((ProcHeadVarNums_41 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_proc_head_var_nums_array_5_p_0(Info_27, Stream_28, ProcHeadVarNums_41);
    }
    if (!((ProcVarNames_42 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_proc_var_names_array_5_p_0(Info_27, Stream_28, ProcVarNames_42);
    }
    if (!((ProcBodyBytecodes_43 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_proc_body_bytecodes_array_5_p_0(Info_27, Stream_28, ProcBodyBytecodes_43);
    }
    if (!((TableIoEntries_44 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_table_io_entry_array_5_p_0(Info_27, Stream_28, TableIoEntries_44);
    }
    if (!((ProcEventLayouts_45 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_proc_event_layout_array_5_p_0(Info_27, Stream_28, ProcEventLayouts_45);
    }
    if (!((ExecTraces_46 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_exec_traces_array_5_p_0(Info_27, Stream_28, ExecTraces_46);
    }
    if (!((TSStringTable_47 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_threadscope_string_table_array_5_p_0(Info_27, Stream_28, TSStringTable_47);
    }
    if (!((AllocSites_48 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_3_p_0(Stream_28);
      ll_backend__layout_out__output_alloc_sites_array_5_p_0(Info_27, Stream_28, AllocSites_48);
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_alloc_sites_array_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_20;

    ll_backend__layout_out__output_alloc_site_slot_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_20);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_20));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_alloc_sites_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word AllocSites_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumAllocSitess_11;
    MR_Word Var_23;
    MR_String Var_62;
    MR_Box conv2_Var_12;
    MR_Box conv1_STATE_VARIABLE_IO_25_25;

    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 68U), (MR_Integer) 1);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0), AllocSites_8, &NumAllocSitess_11);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumAllocSitess_11, &Var_62);
    mercury__io__write_string_4_p_0(Stream_7, Var_62);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {\n");
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[12]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__layout_out__output_alloc_sites_array_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, AllocSites_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_array_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_15;

    ll_backend__layout_out__output_threadscope_string_table_slot_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_15));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TSStringTable_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumStrings_11;
    MR_Word Var_25;
    MR_String Var_64;
    MR_Box conv2_Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_27_27;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TSStringTable_8, &NumStrings_11);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "#ifdef MR_THREADSCOPE\n");
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 64U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumStrings_11, &Var_64);
    mercury__io__write_string_4_p_0(Stream_7, Var_64);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {\n");
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[11]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ll_backend__layout_out__output_threadscope_string_table_array_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, TSStringTable_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27_27);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n#endif\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_exec_traces_array_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_42;

    ll_backend__layout_out__output_exec_trace_slot_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_42);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_42));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_exec_traces_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ExecTraces_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumExecTraces_11;
    MR_Word Var_23;
    MR_String Var_62;
    MR_Box conv2_Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_25_25;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0), ExecTraces_8, &NumExecTraces_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 60U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumExecTraces_11, &Var_62);
    mercury__io__write_string_4_p_0(Stream_7, Var_62);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {\n");
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[10]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__layout_out__output_exec_traces_array_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, ExecTraces_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_event_layout_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ProcEventLayoutSlotNames_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumProcEventLayoutSlotNames_11;
    MR_String Var_52;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), ProcEventLayoutSlotNames_8, &NumProcEventLayoutSlotNames_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 56U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumProcEventLayoutSlotNames_11, &Var_52);
    mercury__io__write_string_4_p_0(Stream_7, Var_52);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {\n");
    ll_backend__layout_out__output_layout_slots_in_vector_5_p_0(Stream_7, ModuleName_10, ProcEventLayoutSlotNames_8);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_layout_slot_chunk_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_layout_slot_chunk_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_layout_slot_chunk_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_5_p_0(
  MR_Word Stream_1,
  MR_String ModuleName_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word SlotName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word SlotNames_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArrayName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotName_13, (MR_Integer) 0))));
      MR_Integer SlotNum_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SlotName_13, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArrayName_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__3_3;

            ll_backend__layout_out__output_layout_slot_addr_6_p_0(Stream_1, (MR_Integer) 1, ModuleName_2, SlotName_13);
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n");
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__3_3 = SlotNames_14;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArrayName_16, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (Var_77) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  MR_Word RevTailSlotNums_65;
                  MR_Word OtherArraySlotNames_66;
                  MR_Word TailSlotNums_67;
                  MR_Word SlotNums_68;
                  MR_Word SlotNumChunks_70;
                  MR_Word Var_72;
                  MR_Box conv0_STATE_VARIABLE_IO_37_73;
                  MR_Word next_value_of_HeadVar__3_3;

                  ll_backend__layout_out__find_slots_in_same_array_5_p_0(ArrayName_16, SlotNames_14, (MR_Word) ((MR_Unsigned) 0U), &RevTailSlotNums_65, &OtherArraySlotNames_66);
                  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevTailSlotNums_65, &TailSlotNums_67);
                  {
                    SlotNums_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SlotNums_68, 0) = ((MR_Box) (SlotNum_17));
                    MR_hl_field(MR_mktag(1), SlotNums_68, 1) = ((MR_Box) (TailSlotNums_67));
                  }
                  mercury__list__chunk_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SlotNums_68, (MR_Integer) 10, &SlotNumChunks_70);
                  {
                    Var_72 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (ll_backend__layout_out__output_layout_slots_in_vector_5_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Stream_1));
                    MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_String) "MR_lvar_label_layout_refs"));
                    MR_hl_field(MR_mktag(0), Var_72, 5) = ((MR_Box) (ModuleName_2));
                  }
                  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__layout_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, SlotNumChunks_70, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_37_73);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = OtherArraySlotNames_66;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  continue;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word RevTailSlotNums_19;
                  MR_Word OtherArraySlotNames_20;
                  MR_Word TailSlotNums_21;
                  MR_Word SlotNums_22;
                  MR_Word SlotNumChunks_24;
                  MR_Word Var_36;
                  MR_Box conv1_STATE_VARIABLE_IO_37_37;
                  MR_Word next_value_of_HeadVar__3_3;

                  ll_backend__layout_out__find_slots_in_same_array_5_p_0(ArrayName_16, SlotNames_14, (MR_Word) ((MR_Unsigned) 0U), &RevTailSlotNums_19, &OtherArraySlotNames_20);
                  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevTailSlotNums_19, &TailSlotNums_21);
                  {
                    SlotNums_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SlotNums_22, 0) = ((MR_Box) (SlotNum_17));
                    MR_hl_field(MR_mktag(1), SlotNums_22, 1) = ((MR_Box) (TailSlotNums_21));
                  }
                  mercury__list__chunk_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SlotNums_22, (MR_Integer) 10, &SlotNumChunks_24);
                  {
                    Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ll_backend__layout_out__output_layout_slots_in_vector_5_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Stream_1));
                    MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) ((MR_String) "MR_no_var_label_layout_refs"));
                    MR_hl_field(MR_mktag(0), Var_36, 5) = ((MR_Box) (ModuleName_2));
                  }
                  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__layout_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_36, SlotNumChunks_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_37_37);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = OtherArraySlotNames_20;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word RevTailSlotNums_49;
                  MR_Word OtherArraySlotNames_50;
                  MR_Word TailSlotNums_51;
                  MR_Word SlotNums_52;
                  MR_Word SlotNumChunks_54;
                  MR_Word Var_56;
                  MR_Box conv2_STATE_VARIABLE_IO_37_57;
                  MR_Word next_value_of_HeadVar__3_3;

                  ll_backend__layout_out__find_slots_in_same_array_5_p_0(ArrayName_16, SlotNames_14, (MR_Word) ((MR_Unsigned) 0U), &RevTailSlotNums_49, &OtherArraySlotNames_50);
                  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevTailSlotNums_49, &TailSlotNums_51);
                  {
                    SlotNums_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SlotNums_52, 0) = ((MR_Box) (SlotNum_17));
                    MR_hl_field(MR_mktag(1), SlotNums_52, 1) = ((MR_Box) (TailSlotNums_51));
                  }
                  mercury__list__chunk_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SlotNums_52, (MR_Integer) 10, &SlotNumChunks_54);
                  {
                    Var_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (ll_backend__layout_out__output_layout_slots_in_vector_5_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (Stream_1));
                    MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) ((MR_String) "MR_svar_label_layout_refs"));
                    MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (ModuleName_2));
                  }
                  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__layout_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, SlotNumChunks_54, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_37_57);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__3_3 = OtherArraySlotNames_50;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  continue;
                }
                break;
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__find_slots_in_same_array_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevSlotNums_0_3,
  MR_Word * STATE_VARIABLE_RevSlotNums_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevSlotNums_4 = STATE_VARIABLE_RevSlotNums_0_3;
    }
    else
    {
      MR_Word SlotName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word SlotNames_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SlotArrayName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotName_11, (MR_Integer) 0))));
      MR_Integer SlotNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SlotName_11, (MR_Integer) 1))));

      succeeded = ll_backend__layout____Unify____layout_array_name_0_0(SlotArrayName_15, HeadVar__1_1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_RevSlotNums_19_19;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_RevSlotNums_0_3;

        {
          STATE_VARIABLE_RevSlotNums_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSlotNums_19_19, 0) = ((MR_Box) (SlotNum_16));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevSlotNums_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevSlotNums_0_3));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = SlotNames_12;
        next_value_of_STATE_VARIABLE_RevSlotNums_0_3 = STATE_VARIABLE_RevSlotNums_19_19;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_RevSlotNums_0_3 = next_value_of_STATE_VARIABLE_RevSlotNums_0_3;
        continue;
      }
      else
      {
        *HeadVar__5_5 = HeadVar__2_2;
        *STATE_VARIABLE_RevSlotNums_4 = STATE_VARIABLE_RevSlotNums_0_3;
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_slot_addr_6_p_0(
  MR_Word Stream_7,
  MR_Word UseMacro_8,
  MR_String ModuleName_9,
  MR_Word SlotName_10)
{
  {
    MR_Word ArrayName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotName_10, (MR_Integer) 0))));
    MR_Integer SlotNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SlotName_10, (MR_Integer) 1))));
    MR_String Var_27;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "&");
    ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, UseMacro_8, ModuleName_9, ArrayName_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), SlotNum_13, &Var_27);
    mercury__io__write_string_4_p_0(Stream_7, Var_27);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_array_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_21;

    ll_backend__layout_out__output_table_io_entry_slot_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_21));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TableIoEntries_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumTableIoEntries_11;
    MR_Word Var_23;
    MR_String Var_62;
    MR_Box conv2_Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_25_25;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0), TableIoEntries_8, &NumTableIoEntries_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 52U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumTableIoEntries_11, &Var_62);
    mercury__io__write_string_4_p_0(Stream_7, Var_62);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {\n");
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[9]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__layout_out__output_table_io_entry_array_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, TableIoEntries_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_body_bytecodes_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Bytecodes_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumBytecodes_11;
    MR_Word AutoComments_13;
    MR_String Var_79;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Bytecodes_8, &NumBytecodes_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 48U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumBytecodes_11, &Var_79);
    mercury__io__write_string_4_p_0(Stream_7, Var_79);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {\n");
    AutoComments_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__layout_out__output_numbers_in_vector_ac_5_p_0(Stream_7, Bytecodes_8, (MR_Integer) 0);
        break;
      case (MR_Integer) 0:
        ll_backend__layout_out__output_numbers_in_vector_noac_5_p_0(Stream_7, Bytecodes_8, (MR_Integer) 0);
        break;
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_var_names_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word VarNames_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumVarNames_11;
    MR_Word AutoComments_13;
    MR_String Var_79;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNames_8, &NumVarNames_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 44U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumVarNames_11, &Var_79);
    mercury__io__write_string_4_p_0(Stream_7, Var_79);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {");
    AutoComments_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__layout_out__output_numbers_in_vector_ac_5_p_0(Stream_7, VarNames_8, (MR_Integer) 0);
        break;
      case (MR_Integer) 0:
        ll_backend__layout_out__output_numbers_in_vector_noac_5_p_0(Stream_7, VarNames_8, (MR_Integer) 0);
        break;
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_head_var_nums_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word HeadVarNums_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumHeadVarNums_11;
    MR_Word AutoComments_13;
    MR_String Var_79;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVarNums_8, &NumHeadVarNums_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 40U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumHeadVarNums_11, &Var_79);
    mercury__io__write_string_4_p_0(Stream_7, Var_79);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {");
    AutoComments_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__layout_out__output_numbers_in_vector_ac_5_p_0(Stream_7, HeadVarNums_8, (MR_Integer) 0);
        break;
      case (MR_Integer) 0:
        ll_backend__layout_out__output_numbers_in_vector_noac_5_p_0(Stream_7, HeadVarNums_8, (MR_Integer) 0);
        break;
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_statics_array_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_32;

    ll_backend__layout_out__output_proc_static_slot_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_32);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_32));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_statics_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ProcStatics_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumProcStatics_11;
    MR_Word Var_23;
    MR_String Var_62;
    MR_Box conv2_Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_25_25;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0), ProcStatics_8, &NumProcStatics_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 36U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumProcStatics_11, &Var_62);
    mercury__io__write_string_4_p_0(Stream_7, Var_62);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {\n");
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[8]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__layout_out__output_proc_statics_array_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, ProcStatics_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_dynamic_array_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Integer NumCoveragePoints_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_String Var_47;

    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 32U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumCoveragePoints_8, &Var_47);
    mercury__io__write_string_4_p_0(Stream_7, Var_47);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "];\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_array_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_18;

    ll_backend__layout_out__output_proc_static_cp_static_slot_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_18));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_array_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word CoveragePoints_9,
  MR_Integer NumCoveragePoints_10)
{
  {
    MR_String ModuleName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
    MR_Word AutoComments_14;
    MR_Word Var_25;
    MR_String Var_87;
    MR_Box conv2_Var_15;
    MR_Box conv1_STATE_VARIABLE_IO_27_27;

    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_8, ModuleName_12, (MR_Word) ((MR_Unsigned) 28U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumCoveragePoints_10, &Var_87);
    mercury__io__write_string_4_p_0(Stream_8, Var_87);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "] = {\n");
    AutoComments_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[7]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ll_backend__layout_out__output_proc_static_cp_static_array_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (AutoComments_14));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, CoveragePoints_9, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_27_27);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv3_STATE_VARIABLE_Slot_23;

    ll_backend__layout_out__output_call_site_static_slot_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Slot_23);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Slot_23));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_35;

    ll_backend__layout_out__output_call_site_static_slot_decls_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_35);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_35));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word CallSiteStatics_10,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  {
    MR_String ModuleName_13;
    MR_Integer NumCallSiteStatics_15;
    MR_Word Var_21;
    MR_Word Var_32;
    MR_String Var_77;
    MR_Box conv2_STATE_VARIABLE_DeclSet_18;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;
    MR_Box conv5_Var_16;
    MR_Box conv4_STATE_VARIABLE_IO_34_34;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__layout_out__output_call_site_static_array_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_8));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Stream_9));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, CallSiteStatics_10, ((MR_Box) (STATE_VARIABLE_DeclSet_0_17)), &conv2_STATE_VARIABLE_DeclSet_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    *STATE_VARIABLE_DeclSet_18 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_18));
    mercury__io__nl_3_p_0(Stream_9);
    ModuleName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))));
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_9, ModuleName_13, (MR_Word) ((MR_Unsigned) 24U), (MR_Integer) 1);
    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), CallSiteStatics_10, &NumCallSiteStatics_15);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumCallSiteStatics_15, &Var_77);
    mercury__io__write_string_4_p_0(Stream_9, Var_77);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] = {\n");
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[6]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ll_backend__layout_out__output_call_site_static_array_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Info_8));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (Stream_9));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, CallSiteStatics_10, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_16, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_34_34);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layouts_array_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_35;

    ll_backend__layout_out__output_long_var_label_layout_slot_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_35);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_35));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layouts_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word LabelLayouts_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumLabelLayouts_11;
    MR_Word Var_24;
    MR_String Var_63;
    MR_Box conv2_Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_26_26;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0), LabelLayouts_8, &NumLabelLayouts_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_3[2])), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumLabelLayouts_11, &Var_63);
    mercury__io__write_string_4_p_0(Stream_7, Var_63);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {\n");
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ll_backend__layout_out__output_long_var_label_layouts_array_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, LabelLayouts_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_26);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layouts_array_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_34;

    ll_backend__layout_out__output_short_var_label_layout_slot_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_34);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_34));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layouts_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word LabelLayouts_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumLabelLayouts_11;
    MR_Word Var_24;
    MR_String Var_63;
    MR_Box conv2_Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_26_26;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0), LabelLayouts_8, &NumLabelLayouts_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_3[1])), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumLabelLayouts_11, &Var_63);
    mercury__io__write_string_4_p_0(Stream_7, Var_63);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {\n");
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ll_backend__layout_out__output_short_var_label_layouts_array_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, LabelLayouts_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_26);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layouts_array_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_25;

    ll_backend__layout_out__output_no_var_label_layout_slot_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_25);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_25));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layouts_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word LabelLayouts_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumLabelLayouts_11;
    MR_Word Var_24;
    MR_String Var_63;
    MR_Box conv2_Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_26_26;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0), LabelLayouts_8, &NumLabelLayouts_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_3[0])), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumLabelLayouts_11, &Var_63);
    mercury__io__write_string_4_p_0(Stream_7, Var_63);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {\n");
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ll_backend__layout_out__output_no_var_label_layouts_array_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, LabelLayouts_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26_26);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_events_array_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_19;

    ll_backend__layout_out__output_user_event_slot_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_19));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_events_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word UserEvents_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumUserEvents_11;
    MR_Word Var_23;
    MR_String Var_62;
    MR_Box conv2_Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_25_25;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0), UserEvents_8, &NumUserEvents_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 16U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumUserEvents_11, &Var_62);
    mercury__io__write_string_4_p_0(Stream_7, Var_62);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {\n");
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__layout_out__output_user_events_array_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, UserEvents_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_event_var_nums_array_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_13;

    ll_backend__layout_out__output_maybe_var_num_slot_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_13));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_event_var_nums_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word MaybeVarNums_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumMaybeVarNums_11;
    MR_Word Var_23;
    MR_String Var_62;
    MR_Box conv2_Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_25_25;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_1[1]), MaybeVarNums_8, &NumMaybeVarNums_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 20U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumMaybeVarNums_11, &Var_62);
    mercury__io__write_string_4_p_0(Stream_7, Var_62);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {");
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__layout_out__output_user_event_var_nums_array_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Stream_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout_out_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, MaybeVarNums_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_long_locns_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word LongLocns_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumLongLocns_11;
    MR_Word AutoComments_13;
    MR_String Var_79;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LongLocns_8, &NumLongLocns_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 12U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumLongLocns_11, &Var_79);
    mercury__io__write_string_4_p_0(Stream_7, Var_79);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {");
    AutoComments_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__layout_out__output_numbers_in_vector_ac_5_p_0(Stream_7, LongLocns_8, (MR_Integer) 0);
        break;
      case (MR_Integer) 0:
        ll_backend__layout_out__output_numbers_in_vector_noac_5_p_0(Stream_7, LongLocns_8, (MR_Integer) 0);
        break;
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_short_locns_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ShortLocns_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumShortLocns_11;
    MR_Word AutoComments_13;
    MR_String Var_79;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ShortLocns_8, &NumShortLocns_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 8U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumShortLocns_11, &Var_79);
    mercury__io__write_string_4_p_0(Stream_7, Var_79);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {");
    AutoComments_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__layout_out__output_numbers_in_vector_ac_5_p_0(Stream_7, ShortLocns_8, (MR_Integer) 0);
        break;
      case (MR_Integer) 0:
        ll_backend__layout_out__output_numbers_in_vector_noac_5_p_0(Stream_7, ShortLocns_8, (MR_Integer) 0);
        break;
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_hlds_var_nums_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word VarNums_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumVarNums_11;
    MR_Word AutoComments_13;
    MR_String Var_79;

    ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_111_117_116_101_114_95_108_111_111_112_95_95_91_49_93_95_48_3_p_0(VarNums_8, (MR_Integer) 0, &NumVarNums_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 4U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumVarNums_11, &Var_79);
    mercury__io__write_string_4_p_0(Stream_7, Var_79);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {");
    AutoComments_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__layout_out__output_numbers_in_vector_ac_5_p_0(Stream_7, VarNums_8, (MR_Integer) 0);
        break;
      case (MR_Integer) 0:
        ll_backend__layout_out__output_numbers_in_vector_noac_5_p_0(Stream_7, VarNums_8, (MR_Integer) 0);
        break;
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_numbers_in_vector_noac_5_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Slot_0_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word LeftOverVarNums_17;
      MR_Integer STATE_VARIABLE_Slot_22_22;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_Slot_0_3;

      ll_backend__layout_out__output_upto_n_numbers_in_vector_noac_8_p_0(Stream_1, HeadVar__2_2, (MR_Integer) 1000, &LeftOverVarNums_17, STATE_VARIABLE_Slot_0_3, &STATE_VARIABLE_Slot_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = LeftOverVarNums_17;
      next_value_of_STATE_VARIABLE_Slot_0_3 = STATE_VARIABLE_Slot_22_22;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Slot_0_3 = next_value_of_STATE_VARIABLE_Slot_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_upto_n_numbers_in_vector_noac_8_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Integer N_3,
  MR_Word * HeadVar__4_4,
  MR_Integer STATE_VARIABLE_Slot_0_5,
  MR_Integer * STATE_VARIABLE_Slot_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Slot_6 = STATE_VARIABLE_Slot_0_5;
    }
    else
    {
      MR_Integer VarNum_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word VarNums_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (N_3 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_Slot_29_29;
        MR_Integer Var_31;
        MR_String Var_56;
        MR_Integer Var_43;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_N_3;
        MR_Integer next_value_of_STATE_VARIABLE_Slot_0_5;

        Var_43 = mercury__int__mod_2_f_0(STATE_VARIABLE_Slot_0_5, (MR_Integer) 10);
        succeeded = (Var_43 == (MR_Integer) 0);
        if (succeeded)
          mercury__io__nl_3_p_0(Stream_1);
        else
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), VarNum_18, &Var_56);
        mercury__io__write_string_4_p_0(Stream_1, Var_56);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",");
        STATE_VARIABLE_Slot_29_29 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_5 + (MR_Unsigned) 1);
        Var_31 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = VarNums_19;
        next_value_of_N_3 = Var_31;
        next_value_of_STATE_VARIABLE_Slot_0_5 = STATE_VARIABLE_Slot_29_29;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        N_3 = next_value_of_N_3;
        STATE_VARIABLE_Slot_0_5 = next_value_of_STATE_VARIABLE_Slot_0_5;
        continue;
      }
      else
      {
        *HeadVar__4_4 = HeadVar__2_2;
        *STATE_VARIABLE_Slot_6 = STATE_VARIABLE_Slot_0_5;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_numbers_in_vector_ac_5_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Slot_0_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word LeftOverVarNums_17;
      MR_Integer STATE_VARIABLE_Slot_22_22;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_Slot_0_3;

      ll_backend__layout_out__output_upto_n_numbers_in_vector_ac_8_p_0(Stream_1, HeadVar__2_2, (MR_Integer) 1000, &LeftOverVarNums_17, STATE_VARIABLE_Slot_0_3, &STATE_VARIABLE_Slot_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = LeftOverVarNums_17;
      next_value_of_STATE_VARIABLE_Slot_0_3 = STATE_VARIABLE_Slot_22_22;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Slot_0_3 = next_value_of_STATE_VARIABLE_Slot_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_upto_n_numbers_in_vector_ac_8_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Integer N_3,
  MR_Word * HeadVar__4_4,
  MR_Integer STATE_VARIABLE_Slot_0_5,
  MR_Integer * STATE_VARIABLE_Slot_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Slot_6 = STATE_VARIABLE_Slot_0_5;
    }
    else
    {
      MR_Integer VarNum_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word VarNums_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (N_3 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_Slot_29_29;
        MR_Integer Var_31;
        MR_String Var_71;
        MR_Integer Var_43;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_N_3;
        MR_Integer next_value_of_STATE_VARIABLE_Slot_0_5;

        Var_43 = mercury__int__mod_2_f_0(STATE_VARIABLE_Slot_0_5, (MR_Integer) 10);
        succeeded = (Var_43 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_String Var_62;

          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n/* slots ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), STATE_VARIABLE_Slot_0_5, &Var_62);
          mercury__io__write_string_4_p_0(Stream_1, Var_62);
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "+ */ ");
        }
        else
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), VarNum_18, &Var_71);
        mercury__io__write_string_4_p_0(Stream_1, Var_71);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",");
        STATE_VARIABLE_Slot_29_29 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_5 + (MR_Unsigned) 1);
        Var_31 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = VarNums_19;
        next_value_of_N_3 = Var_31;
        next_value_of_STATE_VARIABLE_Slot_0_5 = STATE_VARIABLE_Slot_29_29;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        N_3 = next_value_of_N_3;
        STATE_VARIABLE_Slot_0_5 = next_value_of_STATE_VARIABLE_Slot_0_5;
        continue;
      }
      else
      {
        *HeadVar__4_4 = HeadVar__2_2;
        *STATE_VARIABLE_Slot_6 = STATE_VARIABLE_Slot_0_5;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pseudo_type_info_array_defn_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word PTIs_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Integer NumPTIs_11;
    MR_Word AutoComments_13;
    MR_String Var_81;

    ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_111_117_116_101_114_95_108_111_111_112_95_95_91_49_93_95_48_3_p_0(PTIs_8, (MR_Integer) 0, &NumPTIs_11);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_7, ModuleName_10, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_3[3]), NumPTIs_11, &Var_81);
    mercury__io__write_string_4_p_0(Stream_7, Var_81);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "] = {");
    AutoComments_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Var_14;

          ll_backend__layout_out__output_ptis_outer_loop_ac_7_p_0(Info_6, Stream_7, PTIs_8, (MR_Integer) 0, &Var_14);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer Var_15;

          ll_backend__layout_out__output_ptis_outer_loop_noac_7_p_0(Info_6, Stream_7, PTIs_8, (MR_Integer) 0, &Var_15);
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_111_117_116_101_114_95_108_111_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Length_0_2,
  MR_Integer * STATE_VARIABLE_Length_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Length_3 = STATE_VARIABLE_Length_0_2;
    else
    {
      MR_Word LeftOver_11;
      MR_Integer STATE_VARIABLE_Length_15_15;
      MR_Word T_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_Length_0_2;

      succeeded = ((MR_Integer) 5000 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_Length_18_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Length_0_2 + (MR_Unsigned) 1);

        ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_105_110_110_101_114_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(T_23, (MR_Integer) ((MR_Unsigned) 5000 - (MR_Unsigned) 1), &LeftOver_11, STATE_VARIABLE_Length_18_30, &STATE_VARIABLE_Length_15_15);
      }
      else
      {
        LeftOver_11 = HeadVar__1_1;
        STATE_VARIABLE_Length_15_15 = STATE_VARIABLE_Length_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = LeftOver_11;
      next_value_of_STATE_VARIABLE_Length_0_2 = STATE_VARIABLE_Length_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Length_0_2 = next_value_of_STATE_VARIABLE_Length_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_105_110_110_101_114_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Count_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Length_0_4,
  MR_Integer * STATE_VARIABLE_Length_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Length_5 = STATE_VARIABLE_Length_0_4;
    }
    else
    {
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (Count_2 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_Length_18_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Length_0_4 + (MR_Unsigned) 1);
        MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) Count_2 - (MR_Unsigned) 1);
        MR_Word next_value_of_HeadVar__1_1 = T_11;
        MR_Integer next_value_of_Count_2 = Var_20;
        MR_Integer next_value_of_STATE_VARIABLE_Length_0_4 = STATE_VARIABLE_Length_18_18;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        Count_2 = next_value_of_Count_2;
        STATE_VARIABLE_Length_0_4 = next_value_of_STATE_VARIABLE_Length_0_4;
        continue;
      }
      else
      {
        *HeadVar__3_3 = HeadVar__1_1;
        *STATE_VARIABLE_Length_5 = STATE_VARIABLE_Length_0_4;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_noac_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_15;

    ll_backend__layout_out__output_pti_chunk_noac_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_15));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_noac_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Slot_0_4,
  MR_Integer * STATE_VARIABLE_Slot_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Slot_5 = STATE_VARIABLE_Slot_0_4;
    else
    {
      MR_Word StartPTIs_23;
      MR_Word LaterPTIs_24;
      MR_Word PTIChunks_25;
      MR_Word Var_32;
      MR_Integer STATE_VARIABLE_Slot_33_33;
      MR_Box conv2_STATE_VARIABLE_Slot_33_33;
      MR_Box conv1_STATE_VARIABLE_IO_34_34;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_Slot_0_4;

      mercury__list__split_upto_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Integer) 1000, HeadVar__3_3, &StartPTIs_23, &LaterPTIs_24);
      mercury__list__chunk_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), StartPTIs_23, (MR_Integer) 10, &PTIChunks_25);
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ll_backend__layout_out__output_ptis_outer_loop_noac_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (HeadVar__2_2));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout_out_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, PTIChunks_25, ((MR_Box) (STATE_VARIABLE_Slot_0_4)), &conv2_STATE_VARIABLE_Slot_33_33, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_34);
      STATE_VARIABLE_Slot_33_33 = ((MR_Integer) (conv2_STATE_VARIABLE_Slot_33_33));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = LaterPTIs_24;
      next_value_of_STATE_VARIABLE_Slot_0_4 = STATE_VARIABLE_Slot_33_33;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Slot_0_4 = next_value_of_STATE_VARIABLE_Slot_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_ac_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_15;

    ll_backend__layout_out__output_pti_chunk_ac_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_15));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_ac_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Slot_0_4,
  MR_Integer * STATE_VARIABLE_Slot_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Slot_5 = STATE_VARIABLE_Slot_0_4;
    else
    {
      MR_Word StartPTIs_23;
      MR_Word LaterPTIs_24;
      MR_Word PTIChunks_25;
      MR_Word Var_32;
      MR_Integer STATE_VARIABLE_Slot_33_33;
      MR_Box conv2_STATE_VARIABLE_Slot_33_33;
      MR_Box conv1_STATE_VARIABLE_IO_34_34;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_Slot_0_4;

      mercury__list__split_upto_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Integer) 1000, HeadVar__3_3, &StartPTIs_23, &LaterPTIs_24);
      mercury__list__chunk_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), StartPTIs_23, (MR_Integer) 10, &PTIChunks_25);
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ll_backend__layout_out__output_ptis_outer_loop_ac_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (HeadVar__2_2));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout_out_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, PTIChunks_25, ((MR_Box) (STATE_VARIABLE_Slot_0_4)), &conv2_STATE_VARIABLE_Slot_33_33, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_34);
      STATE_VARIABLE_Slot_33_33 = ((MR_Integer) (conv2_STATE_VARIABLE_Slot_33_33));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = LaterPTIs_24;
      next_value_of_STATE_VARIABLE_Slot_0_4 = STATE_VARIABLE_Slot_33_33;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Slot_0_4 = next_value_of_STATE_VARIABLE_Slot_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_array_decls_23_p_0(
  MR_Word Info_24,
  MR_Word Stream_25,
  MR_Word PseudoTypeInfos_26,
  MR_Word HLDSVarNums_27,
  MR_Word ShortLocns_28,
  MR_Word LongLocns_29,
  MR_Word UserEventVarNums_30,
  MR_Word UserEvents_31,
  MR_Word NoVarLabelLayouts_32,
  MR_Word SVarLabelLayouts_33,
  MR_Word LVarLabelLayouts_34,
  MR_Word CallSiteStatics_35,
  MR_Word CoveragePoints_36,
  MR_Word ProcStatics_37,
  MR_Word ProcHeadVarNums_38,
  MR_Word ProcVarNames_39,
  MR_Word ProcBodyBytecodes_40,
  MR_Word TableIoEntries_41,
  MR_Word ProcEventLayouts_42,
  MR_Word ExecTraces_43,
  MR_Word AllocSites_44)
{
  {
    MR_String MangledModuleName_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_24, (MR_Integer) 1))));

    if (!((PseudoTypeInfos_26 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((HLDSVarNums_27 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 4U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((ShortLocns_28 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 8U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((LongLocns_29 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 12U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((UserEventVarNums_30 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 20U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((UserEvents_31 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 16U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((NoVarLabelLayouts_32 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_3[0])), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((SVarLabelLayouts_33 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_3[1])), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((LVarLabelLayouts_34 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_3[2])), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((CallSiteStatics_35 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 24U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((CoveragePoints_36 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 28U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 32U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((ProcStatics_37 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 36U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((ProcHeadVarNums_38 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 40U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((ProcVarNames_39 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 44U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((ProcBodyBytecodes_40 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 48U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((TableIoEntries_41 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 52U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((ExecTraces_43 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 60U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((ProcEventLayouts_42 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 56U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
    if (!((AllocSites_44 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(Stream_25, MangledModuleName_46, (MR_Word) ((MR_Unsigned) 68U), (MR_Integer) 0);
      mercury__io__write_string_4_p_0(Stream_25, (MR_String) "[];\n");
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_array_name_storage_type_name_6_p_0(
  MR_Word Stream_7,
  MR_String ModuleName_8,
  MR_Word Name_9,
  MR_Word BeingDefined_10)
{
  {
    switch (BeingDefined_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "static ");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_STATIC_LINKAGE ");
        break;
    }
    switch (MR_tag((MR_Word) Name_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Name_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_PseudoTypeInfo ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_HLDSVarNum ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_ShortLval ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_LongLval ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const struct MR_UserEvent_Struct ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_HLDSVarNum ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_CallSiteStatic ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_CoveragePointStatic ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_Unsigned ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_ProcStatic ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 10:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_uint_least16_t ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 11:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_uint_least32_t ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 12:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_uint_least8_t ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 13:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_TableIoEntry ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 14:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_LabelLayout *");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 15:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_STATIC_CODE_CONST MR_ExecTrace ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 16:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_Threadscope_String ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
          case (MR_Integer) 17:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_AllocSiteInfo ");
              ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_105 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Name_9, (MR_Integer) 0))) & (MR_Integer) 3);

          switch (Var_105) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_LabelLayout ");
                ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_LabelLayoutNoVarInfo ");
                ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "const MR_LabelLayoutShort ");
                ll_backend__layout_out__output_layout_array_name_6_p_0(Stream_7, (MR_Integer) 0, ModuleName_8, Name_9);
              }
              break;
          }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_array_name_6_p_0(
  MR_Word Stream_7,
  MR_Word UseMacro_8,
  MR_String ModuleName_9,
  MR_Word ArrayName_10)
{
  switch (UseMacro_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Prefix_13;

        switch (MR_tag((MR_Word) ArrayName_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ArrayName_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Prefix_13 = (MR_String) "mercury_data__pseudo_type_info_array__";
                break;
              case (MR_Integer) 1:
                Prefix_13 = (MR_String) "mercury_data__hlds_var_nums_array__";
                break;
              case (MR_Integer) 2:
                Prefix_13 = (MR_String) "mercury_data__short_locns_array__";
                break;
              case (MR_Integer) 3:
                Prefix_13 = (MR_String) "mercury_data__long_locns_array__";
                break;
              case (MR_Integer) 4:
                Prefix_13 = (MR_String) "mercury_data__user_event_layouts_array__";
                break;
              case (MR_Integer) 5:
                Prefix_13 = (MR_String) "mercury_data__user_event_var_nums_array__";
                break;
              case (MR_Integer) 6:
                Prefix_13 = (MR_String) "mercury_data__proc_call_sites_array__";
                break;
              case (MR_Integer) 7:
                Prefix_13 = (MR_String) "mercury_data__proc_cp_statics_array__";
                break;
              case (MR_Integer) 8:
                Prefix_13 = (MR_String) "mercury_data__proc_cp_dynamics_array__";
                break;
              case (MR_Integer) 9:
                Prefix_13 = (MR_String) "mercury_data__proc_statics_array__";
                break;
              case (MR_Integer) 10:
                Prefix_13 = (MR_String) "mercury_data__proc_head_var_nums_array__";
                break;
              case (MR_Integer) 11:
                Prefix_13 = (MR_String) "mercury_data__proc_var_names_array__";
                break;
              case (MR_Integer) 12:
                Prefix_13 = (MR_String) "mercury_data__proc_body_bytecodes_array__";
                break;
              case (MR_Integer) 13:
                Prefix_13 = (MR_String) "mercury_data__proc_table_io_entries_array__";
                break;
              case (MR_Integer) 14:
                Prefix_13 = (MR_String) "mercury_data__proc_event_layouts_array__";
                break;
              case (MR_Integer) 15:
                Prefix_13 = (MR_String) "mercury_data__proc_exec_traces_array__";
                break;
              case (MR_Integer) 16:
                Prefix_13 = (MR_String) "mercury_data__threadscope_string_table_array__";
                break;
              case (MR_Integer) 17:
                Prefix_13 = (MR_String) "mercury_data__alloc_sites_array__";
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArrayName_10, (MR_Integer) 0))) & (MR_Integer) 3);

              switch (Var_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  Prefix_13 = (MR_String) "mercury_data__lvar_label_layout_array__";
                  break;
                case (MR_Integer) 0:
                  Prefix_13 = (MR_String) "mercury_data__no_var_label_layout_array__";
                  break;
                case (MR_Integer) 1:
                  Prefix_13 = (MR_String) "mercury_data__svar_label_layout_array__";
                  break;
              }
            }
            break;
        }
        mercury__io__write_string_4_p_0(Stream_7, Prefix_13);
        mercury__io__write_string_4_p_0(Stream_7, ModuleName_9);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Macro_12;

        switch (MR_tag((MR_Word) ArrayName_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ArrayName_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Macro_12 = (MR_String) "MR_pseudo_type_infos";
                break;
              case (MR_Integer) 1:
                Macro_12 = (MR_String) "MR_hlds_var_nums";
                break;
              case (MR_Integer) 2:
                Macro_12 = (MR_String) "MR_short_locns";
                break;
              case (MR_Integer) 3:
                Macro_12 = (MR_String) "MR_long_locns";
                break;
              case (MR_Integer) 4:
                Macro_12 = (MR_String) "MR_user_event_layouts";
                break;
              case (MR_Integer) 5:
                Macro_12 = (MR_String) "MR_user_event_var_nums";
                break;
              case (MR_Integer) 6:
                Macro_12 = (MR_String) "MR_proc_call_sites";
                break;
              case (MR_Integer) 7:
                Macro_12 = (MR_String) "MR_proc_cp_statics";
                break;
              case (MR_Integer) 8:
                Macro_12 = (MR_String) "MR_proc_cp_dynamics";
                break;
              case (MR_Integer) 9:
                Macro_12 = (MR_String) "MR_proc_statics";
                break;
              case (MR_Integer) 10:
                Macro_12 = (MR_String) "MR_proc_head_var_nums";
                break;
              case (MR_Integer) 11:
                Macro_12 = (MR_String) "MR_proc_var_names";
                break;
              case (MR_Integer) 12:
                Macro_12 = (MR_String) "MR_proc_body_bytecodes";
                break;
              case (MR_Integer) 13:
                Macro_12 = (MR_String) "MR_proc_table_io_entries";
                break;
              case (MR_Integer) 14:
                Macro_12 = (MR_String) "MR_proc_event_layouts";
                break;
              case (MR_Integer) 15:
                Macro_12 = (MR_String) "MR_proc_exec_traces";
                break;
              case (MR_Integer) 16:
                Macro_12 = (MR_String) "MR_threadscope_strings";
                break;
              case (MR_Integer) 17:
                Macro_12 = (MR_String) "MR_alloc_sites";
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArrayName_10, (MR_Integer) 0))) & (MR_Integer) 3);

              switch (Var_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  Macro_12 = (MR_String) "MR_lvar_label_layouts";
                  break;
                case (MR_Integer) 0:
                  Macro_12 = (MR_String) "MR_no_var_label_layouts";
                  break;
                case (MR_Integer) 1:
                  Macro_12 = (MR_String) "MR_svar_label_layouts";
                  break;
              }
            }
            break;
        }
        mercury__io__write_string_4_p_0(Stream_7, Macro_12);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
        mercury__io__write_string_4_p_0(Stream_7, ModuleName_9);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__layout_out____Unify____being_defined_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__layout_out____Unify____being_defined_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__layout_out____Compare____being_defined_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__layout_out____Compare____being_defined_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__layout_out____Unify____use_layout_macro_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__layout_out____Unify____use_layout_macro_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__layout_out____Compare____use_layout_macro_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__layout_out____Compare____use_layout_macro_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__layout_out__init(void)
{
}

void mercury__ll_backend__layout_out__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__layout_out__ll_backend__layout_out__type_ctor_info_being_defined_0);
	MR_register_type_ctor_info(&ll_backend__layout_out__ll_backend__layout_out__type_ctor_info_use_layout_macro_0);
}

void mercury__ll_backend__layout_out__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__layout_out__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.layout_out.
