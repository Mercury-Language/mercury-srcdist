/*
** Automatically generated from `layout_out.m'
** by the Mercury compiler,
** version rotd-2019-07-12
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
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "ll_backend.layout.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__layout_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__layout_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0;

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_being_defined_0_0;

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_being_defined_0_1;

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_value_ordered_being_defined_0[2];

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_name_ordered_being_defined_0[2];

static const MR_Integer ll_backend__layout_out__ll_backend__layout_out__functor_number_map_being_defined_0[2];

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_0;

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_1;

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_value_ordered_use_layout_macro_0[2];

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_name_ordered_use_layout_macro_0[2];

static const MR_Integer ll_backend__layout_out__ll_backend__layout_out__functor_number_map_use_layout_macro_0[2];

static void MR_CALL 
ll_backend__layout_out__output_layout_name_in_vector_4_p_0(
  MR_String Prefix_5,
  MR_Word Name_6);

static void MR_CALL 
ll_backend__layout_out__output_layout_slot_chunk_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_layout_slot_chunk_5_p_0(
  MR_String Macro_6,
  MR_String ModuleName_7,
  MR_Word SlotNums_8);

static void MR_CALL 
ll_backend__layout_out__output_proc_layout_name_in_vector_3_p_0(
  MR_Word LayoutName_4);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_6_p_0(
  MR_Word Info_7,
  MR_Word ModuleName_8,
  MR_Word TypesRvalMap_9,
  MR_Word EventSpec_10);

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_5_p_0(
  MR_Word ModuleName_6,
  MR_Integer EventNumber_7,
  MR_Word Attr_8);

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_7_p_0(
  MR_Word ModuleName_8,
  MR_Integer EventNumber_9,
  MR_Word Attr_10,
  MR_Word STATE_VARIABLE_DeclSet_0_23,
  MR_Word * STATE_VARIABLE_DeclSet_24);

static void MR_CALL 
ll_backend__layout_out__output_attr_name_3_p_0(
  MR_Word Attr_4);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0(
  MR_Word ModuleName_7,
  MR_Word EventSpec_8,
  MR_Word STATE_VARIABLE_DeclSet_0_21,
  MR_Word * STATE_VARIABLE_DeclSet_22);

static MR_String MR_CALL 
ll_backend__layout_out__subst_to_name_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_alloc_site_slot_6_p_0(
  MR_Word _Info_7,
  MR_Word AllocSite_8,
  MR_Integer STATE_VARIABLE_Slot_0_17,
  MR_Integer * STATE_VARIABLE_Slot_18);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_115_108_111_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word AllocSite_8,
  MR_Integer STATE_VARIABLE_Slot_0_17,
  MR_Integer * STATE_VARIABLE_Slot_18);

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_slot_6_p_0(
  MR_Word Info_7,
  MR_String String_8,
  MR_Integer STATE_VARIABLE_Slot_0_12,
  MR_Integer * STATE_VARIABLE_Slot_13);

static void MR_CALL 
ll_backend__layout_out__output_exec_trace_slot_6_p_0(
  MR_Word Info_7,
  MR_Word ExecTrace_8,
  MR_Integer STATE_VARIABLE_Slot_0_39,
  MR_Integer * STATE_VARIABLE_Slot_40);

static MR_String MR_CALL 
ll_backend__layout_out__eval_method_to_c_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__write_maybe_slot_num_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_slot_6_p_0(
  MR_Word Info_7,
  MR_Word TableIoEntry_8,
  MR_Integer STATE_VARIABLE_Slot_0_18,
  MR_Integer * STATE_VARIABLE_Slot_19);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_slot_6_p_0(
  MR_Word Info_7,
  MR_Word ProcStatic_8,
  MR_Integer STATE_VARIABLE_Slot_0_29,
  MR_Integer * STATE_VARIABLE_Slot_30);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_slot_6_p_0(
  MR_Word AutoComments_7,
  MR_Word CoveragePoint_8,
  MR_Integer STATE_VARIABLE_Slot_0_15,
  MR_Integer * STATE_VARIABLE_Slot_16);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_slot_6_p_0(
  MR_Word Info_7,
  MR_Word CallSiteStatic_8,
  MR_Integer STATE_VARIABLE_Slot_0_20,
  MR_Integer * STATE_VARIABLE_Slot_21);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_slot_decls_6_p_0(
  MR_Word Info_7,
  MR_Word CallSiteStatic_8,
  MR_Word STATE_VARIABLE_DeclSet_0_32,
  MR_Word * STATE_VARIABLE_DeclSet_33);

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layout_slot_6_p_0(
  MR_Word Info_7,
  MR_Word LabelLayout_8,
  MR_Integer STATE_VARIABLE_Slot_0_32,
  MR_Integer * STATE_VARIABLE_Slot_33);

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layout_slot_6_p_0(
  MR_Word Info_7,
  MR_Word LabelLayout_8,
  MR_Integer STATE_VARIABLE_Slot_0_31,
  MR_Integer * STATE_VARIABLE_Slot_32);

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layout_slot_6_p_0(
  MR_Word Info_7,
  MR_Word LabelLayout_8,
  MR_Integer STATE_VARIABLE_Slot_0_22,
  MR_Integer * STATE_VARIABLE_Slot_23);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_5_p_0(
  MR_String ModuleName_7,
  MR_Word BasicLabelLayout_8);

static void MR_CALL 
ll_backend__layout_out__output_user_event_slot_6_p_0(
  MR_Word Info_7,
  MR_Word UserEvent_8,
  MR_Integer STATE_VARIABLE_Slot_0_16,
  MR_Integer * STATE_VARIABLE_Slot_17);

static void MR_CALL 
ll_backend__layout_out__output_rval_as_addr_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6);

static void MR_CALL 
ll_backend__layout_out__output_maybe_var_num_slot_5_p_0(
  MR_Word MaybeVarNum_6,
  MR_Integer STATE_VARIABLE_Slot_0_10,
  MR_Integer * STATE_VARIABLE_Slot_11);

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_noac_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_noac_6_p_0(
  MR_Word Info_7,
  MR_Word ChunkPTIs_8,
  MR_Integer STATE_VARIABLE_Slot_0_12,
  MR_Integer * STATE_VARIABLE_Slot_13);

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_ac_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_ac_6_p_0(
  MR_Word Info_7,
  MR_Word ChunkPTIs_8,
  MR_Integer STATE_VARIABLE_Slot_0_12,
  MR_Integer * STATE_VARIABLE_Slot_13);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_109_111_100_117_108_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word ModuleName_8,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclSet_0_16,
  MR_Word * STATE_VARIABLE_DeclSet_17);

static void MR_CALL 
ll_backend__layout_out__output_module_string_table_strings_4_p_0(
  MR_String String_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_data_defns_9_p_0(
  MR_Word Info_1,
  MR_Word ModuleName_2,
  MR_Integer FileNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_DeclSet_0_6,
  MR_Word * STATE_VARIABLE_DeclSet_7);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_data_defn_9_p_0(
  MR_Word Info_10,
  MR_Word ModuleName_11,
  MR_Integer FileNum_12,
  MR_Word FileLayout_13,
  MR_Word * FileLayoutName_14,
  MR_Word STATE_VARIABLE_DeclSet_0_25,
  MR_Word * STATE_VARIABLE_DeclSet_26);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_label_layout_vector_defn_9_p_0(
  MR_String MangledModuleName_10,
  MR_Word ModuleName_11,
  MR_Integer FileNum_12,
  MR_Word LabelSlots_13,
  MR_Word * LayoutName_14,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_line_number_vector_defn_9_p_0(
  MR_Word Info_10,
  MR_Word ModuleName_11,
  MR_Integer FileNum_12,
  MR_Word LineNumbers_13,
  MR_Word * LayoutName_14,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_Word FileLayoutNames_9,
  MR_Word * VectorName_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__layout_out__output_event_set_desc_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_String EventSetDesc_9,
  MR_Word * LayoutName_10,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14);

static void MR_CALL 
ll_backend__layout_out__output_module_string_table_chars_5_p_0(
  MR_Integer CurIndex_6,
  MR_Integer Count_7,
  MR_String String_8);

static void MR_CALL 
ll_backend__layout_out__output_multi_byte_char_codes_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_Word ProcLayoutNames_9,
  MR_Word * VectorName_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_9_p_0(
  MR_Word Info_10,
  MR_Word EventSpecs_11,
  MR_Word ModuleName_12,
  MR_Word TypesRvalMap_13,
  MR_Word * LayoutName_14,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18);

static MR_Integer MR_CALL 
ll_backend__layout_out__layout_version_number_0_f_0(void);

static void MR_CALL 
ll_backend__layout_out__output_bytecodes_driver_3_p_0(
  MR_Word Bytes_4);

static void MR_CALL 
ll_backend__layout_out__output_bytecodes_6_p_0(
  MR_Word Bytes_7,
  MR_Word * BytesLeft_8,
  MR_Integer STATE_VARIABLE_Seq_0_14,
  MR_Integer MaxSeq_10);

static void MR_CALL 
ll_backend__layout_out__output_proc_id_4_p_0(
  MR_Word ProcLabel_5,
  MR_Word Origin_6);

static void MR_CALL 
ll_backend__layout_out__quote_and_write_string_3_p_0(
  MR_String String_4);

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

static MR_String MR_CALL 
ll_backend__layout_out__detism_to_c_detism_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_layout_decl_5_p_0(
  MR_Word LayoutName_6,
  MR_Word STATE_VARIABLE_DeclSet_0_9,
  MR_Word * STATE_VARIABLE_DeclSet_10);

static MR_String MR_CALL 
ll_backend__layout_out__proc_layout_kind_to_type_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_alloc_sites_array_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_alloc_sites_array_4_p_0(
  MR_Word Info_5,
  MR_Word AllocSites_6);

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_array_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_array_4_p_0(
  MR_Word Info_5,
  MR_Word TSStringTable_6);

static void MR_CALL 
ll_backend__layout_out__output_exec_traces_array_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_exec_traces_array_4_p_0(
  MR_Word Info_5,
  MR_Word ExecTraces_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_event_layout_array_4_p_0(
  MR_Word Info_5,
  MR_Word ProcEventLayoutSlotNames_6);

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__layout_out__find_slots_in_same_array_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevSlotNums_0_3,
  MR_Word * STATE_VARIABLE_RevSlotNums_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_array_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_array_4_p_0(
  MR_Word Info_5,
  MR_Word TableIoEntries_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_body_bytecodes_array_4_p_0(
  MR_Word Info_5,
  MR_Word Bytecodes_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_var_names_array_4_p_0(
  MR_Word Info_5,
  MR_Word VarNames_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_head_var_nums_array_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVarNums_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_statics_array_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_proc_statics_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word ProcStatics_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_dynamic_array_4_p_0(
  MR_Word Info_5,
  MR_Integer NumCoveragePoints_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_array_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_array_5_p_0(
  MR_Word Info_6,
  MR_Word CoveragePoints_7,
  MR_Integer NumCoveragePoints_8);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_6_p_0(
  MR_Word Info_7,
  MR_Word CallSiteStatics_8,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layouts_array_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layouts_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word LabelLayouts_6);

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layouts_array_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layouts_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word LabelLayouts_6);

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layouts_array_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layouts_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word LabelLayouts_6);

static void MR_CALL 
ll_backend__layout_out__output_user_events_array_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_user_events_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word UserEvents_6);

static void MR_CALL 
ll_backend__layout_out__output_user_event_var_nums_array_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_user_event_var_nums_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word MaybeVarNums_6);

static void MR_CALL 
ll_backend__layout_out__output_long_locns_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word LongLocns_6);

static void MR_CALL 
ll_backend__layout_out__output_short_locns_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word ShortLocns_6);

static void MR_CALL 
ll_backend__layout_out__output_hlds_var_nums_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word VarNums_6);

static void MR_CALL 
ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Slot_0_2);

static void MR_CALL 
ll_backend__layout_out__output_upto_n_numbers_in_vector_noac_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Slot_0_4,
  MR_Integer * STATE_VARIABLE_Slot_5);

static void MR_CALL 
ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Slot_0_2);

static void MR_CALL 
ll_backend__layout_out__output_upto_n_numbers_in_vector_ac_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Slot_0_4,
  MR_Integer * STATE_VARIABLE_Slot_5);

static void MR_CALL 
ll_backend__layout_out__output_pseudo_type_info_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word PTIs_6);

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
ll_backend__layout_out__output_ptis_outer_loop_noac_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_noac_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Slot_0_3,
  MR_Integer * STATE_VARIABLE_Slot_4);

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_ac_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_ac_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Slot_0_3,
  MR_Integer * STATE_VARIABLE_Slot_4);

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

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_2[15][3];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_3[2][4];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_4[4][1];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_5[15][9];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_6[4][8];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_8[2][5];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_9[3][6];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_10[2][7];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_11[1][10];


/* sealed */ struct ll_backend__layout_out__vector_common_type_7_0_s {
  const MR_String ll_backend__layout_out__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct ll_backend__layout_out__vector_common_type_7_0_s ll_backend__layout_out_vector_common_7[24];



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

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_2[15][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_6[0])),
    ((MR_Box) (ll_backend__layout_out__output_user_event_var_nums_array_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_8[0])),
    ((MR_Box) (ll_backend__layout_out__pred_transform_name_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_8[1])),
    ((MR_Box) (ll_backend__layout_out__pred_transform_name_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_8[0])),
    ((MR_Box) (ll_backend__layout_out__pred_transform_name_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_6[2])),
    ((MR_Box) (ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[0])),
    ((MR_Box) (ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_6[2])),
    ((MR_Box) (ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[1])),
    ((MR_Box) (ll_backend__layout_out__output_event_spec_components_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[2])),
    ((MR_Box) (ll_backend__layout_out__output_event_spec_components_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[2])),
    ((MR_Box) (ll_backend__layout_out__output_synth_attr_args_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[2])),
    ((MR_Box) (ll_backend__layout_out__output_synth_attr_args_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[2])),
    ((MR_Box) (ll_backend__layout_out__output_layout_slot_chunk_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_10[0])),
    ((MR_Box) (ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "&"))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_4[4][1] = {
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

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_5[15][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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
    ((MR_Box) ((MR_Integer) 6)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&ll_backend__layout_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_6[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_8[2][5] = {
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

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_9[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_10[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_11[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct ll_backend__layout_out__vector_common_type_7_0_s ll_backend__layout_out_vector_common_7[24] = {
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

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_value_ordered_being_defined_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__layout_out____Unify____being_defined_0_0_10001)),
  ((MR_Box) (ll_backend__layout_out____Compare____being_defined_0_0_10001)),
  (MR_String) "ll_backend.layout_out",
  (MR_String) "being_defined",
  {     ll_backend__layout_out__ll_backend__layout_out__enum_name_ordered_being_defined_0 },
  {     ll_backend__layout_out__ll_backend__layout_out__enum_value_ordered_being_defined_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__layout_out__ll_backend__layout_out__functor_number_map_being_defined_0
};

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_0 = {
  (MR_String) "do_not_use_layout_macro",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_1 = {
  (MR_String) "use_layout_macro",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__layout_out__ll_backend__layout_out__enum_value_ordered_use_layout_macro_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__layout_out____Unify____use_layout_macro_0_0_10001)),
  ((MR_Box) (ll_backend__layout_out____Compare____use_layout_macro_0_0_10001)),
  (MR_String) "ll_backend.layout_out",
  (MR_String) "use_layout_macro",
  {     ll_backend__layout_out__ll_backend__layout_out__enum_name_ordered_use_layout_macro_0 },
  {     ll_backend__layout_out__ll_backend__layout_out__enum_value_ordered_use_layout_macro_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__layout_out__ll_backend__layout_out__functor_number_map_use_layout_macro_0
};

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
ll_backend__layout_out__output_layout_name_in_vector_4_p_0(
  MR_String Prefix_5,
  MR_Word Name_6)
{
  {
    mercury__io__write_string_3_p_0(Prefix_5);
    ll_backend__layout_out__output_layout_name_3_p_0(Name_6);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slot_chunk_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_int_3_p_0(((MR_Integer) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slot_chunk_5_p_0(
  MR_String Macro_6,
  MR_String ModuleName_7,
  MR_Word SlotNums_8)
{
  {
    MR_Integer Length_10;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SlotNums_8, &Length_10);
    mercury__io__write_string_3_p_0(Macro_6);
    mercury__io__write_int_3_p_0(Length_10);
    mercury__io__write_string_3_p_0((MR_String) "(");
    mercury__io__write_string_3_p_0(ModuleName_7);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SlotNums_8, (MR_String) ",", (MR_Word) (&ll_backend__layout_out_scalar_common_2[14]));
    mercury__io__write_string_3_p_0((MR_String) ")\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_layout_name_in_vector_3_p_0(
  MR_Word LayoutName_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) LayoutName_4)) == (MR_Integer) 0);
    MR_Word RttiProcLabel_6;

    if (succeeded)
    {
      RttiProcLabel_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LayoutName_4, (MR_Integer) 0))));
      {
        MR_Word ProcLabel_8;

        ProcLabel_8 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_6);
        mercury__io__write_string_3_p_0((MR_String) "MR_PROC_LAYOUT1(");
        backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ProcLabel_8);
        mercury__io__write_string_3_p_0((MR_String) ")\n");
      }
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.layout_out.output_proc_layout_name_in_vector\'/3", (MR_String) "not proc layout");
        return;
      }
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_6_p_0(
  MR_Word Info_7,
  MR_Word ModuleName_8,
  MR_Word TypesRvalMap_9,
  MR_Word EventSpec_10)
{
  {
    MR_bool succeeded;
    MR_Integer EventNumber_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EventSpec_10, (MR_Integer) 0))));
    MR_String EventName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), EventSpec_10, (MR_Integer) 1))));
    MR_Word Attrs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSpec_10, (MR_Integer) 3))));
    MR_Word SynthOrder_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSpec_10, (MR_Integer) 4))));
    MR_Word TypesRval_17;
    MR_Word AttrNamesLayoutName_18;
    MR_Integer Var_30;
    MR_Box conv0_TypesRval_17;
    MR_Word Var_57;
    MR_Integer Var_58;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), TypesRvalMap_9, EventNumber_12, &conv0_TypesRval_17);
    TypesRval_17 = ((MR_Word) (conv0_TypesRval_17));
    mercury__io__write_string_3_p_0((MR_String) "{ \"");
    mercury__io__write_string_3_p_0(EventName_13);
    mercury__io__write_string_3_p_0((MR_String) "\", ");
    Var_30 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), Attrs_15);
    mercury__io__write_int_3_p_0(Var_30);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    {
      AttrNamesLayoutName_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), AttrNamesLayoutName_18, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), AttrNamesLayoutName_18, 1) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(3), AttrNamesLayoutName_18, 2) = ((MR_Box) (EventNumber_12));
    }
    ll_backend__layout_out__output_layout_name_3_p_0(AttrNamesLayoutName_18);
    mercury__io__write_string_3_p_0((MR_String) ",\n\t(MR_TypeInfo *) ");
    succeeded = ((((MR_tag((MR_Word) TypesRval_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypesRval_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypesRval_17, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 0))));
        succeeded = (Var_58 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "0");
    }
    else
    {
      MR_Word DataId_56;
      MR_Word Var_61;
      MR_Word Var_62;

      succeeded = ((((MR_tag((MR_Word) TypesRval_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypesRval_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypesRval_17, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_61, (MR_Integer) 0)))) == (MR_Integer) 13)));
        if (succeeded)
        {
          DataId_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_61, (MR_Integer) 1))));
          Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_61, (MR_Integer) 2))));
          succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
        ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(Info_7, DataId_56);
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "\n");
        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_7, TypesRval_17);
      }
    }
    mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    if ((SynthOrder_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL, NULL }");
    }
    else
    {
      MR_Word SynthAttrsLayoutName_21;
      MR_Word SynthOrderLayoutName_22;

      {
        SynthAttrsLayoutName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SynthAttrsLayoutName_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), SynthAttrsLayoutName_21, 1) = ((MR_Box) (ModuleName_8));
        MR_hl_field(MR_mktag(3), SynthAttrsLayoutName_21, 2) = ((MR_Box) (EventNumber_12));
      }
      {
        SynthOrderLayoutName_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SynthOrderLayoutName_22, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), SynthOrderLayoutName_22, 1) = ((MR_Box) (ModuleName_8));
        MR_hl_field(MR_mktag(3), SynthOrderLayoutName_22, 2) = ((MR_Box) (EventNumber_12));
      }
      ll_backend__layout_out__output_layout_name_3_p_0(SynthAttrsLayoutName_21);
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
      ll_backend__layout_out__output_layout_name_3_p_0(SynthOrderLayoutName_22);
      mercury__io__write_string_3_p_0((MR_String) " }");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_5_p_0(
  MR_Word ModuleName_6,
  MR_Integer EventNumber_7,
  MR_Word Attr_8)
{
  {
    MR_Word MaybeSynthCall_10;

    mercury__io__write_string_3_p_0((MR_String) "{ ");
    MaybeSynthCall_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr_8, (MR_Integer) 4))));
    if ((MaybeSynthCall_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "-1, -1, NULL, NULL");
    }
    else
    {
      MR_Word SynthCall_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSynthCall_10, (MR_Integer) 0))));
      MR_Integer FuncAttrNum_13;
      MR_Word ArgAttrNameNums_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SynthCall_11, (MR_Integer) 1))));
      MR_Integer AttrNumber_16;
      MR_Word ArgsLayoutName_17;
      MR_Word OrderLayoutName_18;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SynthCall_11, (MR_Integer) 0))));
      MR_Integer Var_29;

      FuncAttrNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
      mercury__io__write_int_3_p_0(FuncAttrNum_13);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      Var_29 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__layout_out_scalar_common_2[1]), ArgAttrNameNums_14);
      mercury__io__write_int_3_p_0(Var_29);
      mercury__io__write_string_3_p_0((MR_String) ",\n ");
      AttrNumber_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Attr_8, (MR_Integer) 0))));
      {
        ArgsLayoutName_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_17, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_17, 1) = ((MR_Box) (ModuleName_6));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_17, 2) = ((MR_Box) (EventNumber_7));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_17, 3) = ((MR_Box) (AttrNumber_16));
      }
      ll_backend__layout_out__output_layout_name_3_p_0(ArgsLayoutName_17);
      mercury__io__write_string_3_p_0((MR_String) ",\n ");
      {
        OrderLayoutName_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), OrderLayoutName_18, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), OrderLayoutName_18, 1) = ((MR_Box) (ModuleName_6));
        MR_hl_field(MR_mktag(3), OrderLayoutName_18, 2) = ((MR_Box) (EventNumber_7));
        MR_hl_field(MR_mktag(3), OrderLayoutName_18, 3) = ((MR_Box) (AttrNumber_16));
      }
      ll_backend__layout_out__output_layout_name_3_p_0(OrderLayoutName_18);
    }
    mercury__io__write_string_3_p_0((MR_String) " }");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_int_3_p_0(((MR_Integer) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_int_3_p_0(((MR_Integer) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_7_p_0(
  MR_Word ModuleName_8,
  MR_Integer EventNumber_9,
  MR_Word Attr_10,
  MR_Word STATE_VARIABLE_DeclSet_0_23,
  MR_Word * STATE_VARIABLE_DeclSet_24)
{
  {
    MR_Word MaybeSynthCall_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr_10, (MR_Integer) 4))));

    if ((MaybeSynthCall_13 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DeclSet_24 = STATE_VARIABLE_DeclSet_0_23;
    else
    {
      MR_Word SynthCall_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSynthCall_13, (MR_Integer) 0))));
      MR_Word ArgAttrNameNums_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SynthCall_14, (MR_Integer) 1))));
      MR_Word Order_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SynthCall_14, (MR_Integer) 2))));
      MR_Word ArgAttrNums_18;
      MR_Integer AttrNumber_19;
      MR_Word ArgsLayoutName_20;
      MR_Word OrderLayoutName_21;
      MR_Word OrderSentinel_22;
      MR_Word Var_27;
      MR_Word STATE_VARIABLE_DeclSet_28_28;
      MR_Word Var_38;

      mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgAttrNameNums_16, &ArgAttrNums_18);
      AttrNumber_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Attr_10, (MR_Integer) 0))));
      {
        ArgsLayoutName_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_20, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_20, 1) = ((MR_Box) (ModuleName_8));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_20, 2) = ((MR_Box) (EventNumber_9));
        MR_hl_field(MR_mktag(3), ArgsLayoutName_20, 3) = ((MR_Box) (AttrNumber_19));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (ArgsLayoutName_20));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_27, STATE_VARIABLE_DeclSet_0_23, &STATE_VARIABLE_DeclSet_28_28);
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ArgsLayoutName_20, (MR_Integer) 1);
      mercury__io__write_string_3_p_0((MR_String) " =\n{ ");
      mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgAttrNums_18, (MR_String) ", ", (MR_Word) (&ll_backend__layout_out_scalar_common_2[12]));
      mercury__io__write_string_3_p_0((MR_String) " };\n\n");
      {
        OrderLayoutName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), OrderLayoutName_21, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), OrderLayoutName_21, 1) = ((MR_Box) (ModuleName_8));
        MR_hl_field(MR_mktag(3), OrderLayoutName_21, 2) = ((MR_Box) (EventNumber_9));
        MR_hl_field(MR_mktag(3), OrderLayoutName_21, 3) = ((MR_Box) (AttrNumber_19));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (OrderLayoutName_21));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_38, STATE_VARIABLE_DeclSet_28_28, STATE_VARIABLE_DeclSet_24);
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(OrderLayoutName_21, (MR_Integer) 1);
      mercury__io__write_string_3_p_0((MR_String) " =\n{ ");
      OrderSentinel_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Order_17, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_1[3])));
      mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), OrderSentinel_22, (MR_String) ", ", (MR_Word) (&ll_backend__layout_out_scalar_common_2[13]));
      mercury__io__write_string_3_p_0((MR_String) " };\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_attr_name_3_p_0(
  MR_Word Attr_4)
{
  {
    MR_String Var_10;

    mercury__io__write_string_3_p_0((MR_String) "\"");
    Var_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Attr_4, (MR_Integer) 1))));
    mercury__io__write_string_3_p_0(Var_10);
    mercury__io__write_string_3_p_0((MR_String) "\"");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_int_3_p_0(((MR_Integer) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_synth_attr_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_2(
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

    ll_backend__layout_out__output_synth_attr_args_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_24);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_24));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_attr_name_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0(
  MR_Word ModuleName_7,
  MR_Word EventSpec_8,
  MR_Word STATE_VARIABLE_DeclSet_0_21,
  MR_Word * STATE_VARIABLE_DeclSet_22)
{
  {
    MR_Integer EventNumber_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EventSpec_8, (MR_Integer) 0))));
    MR_Word Attrs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSpec_8, (MR_Integer) 3))));
    MR_Word SynthOrder_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSpec_8, (MR_Integer) 4))));
    MR_Word AttrNamesLayoutName_16;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_DeclSet_26_26;

    {
      AttrNamesLayoutName_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), AttrNamesLayoutName_16, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), AttrNamesLayoutName_16, 1) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(3), AttrNamesLayoutName_16, 2) = ((MR_Box) (EventNumber_11));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (AttrNamesLayoutName_16));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_25, STATE_VARIABLE_DeclSet_0_21, &STATE_VARIABLE_DeclSet_26_26);
    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(AttrNamesLayoutName_16, (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), Attrs_14, (MR_String) ", ", (MR_Word) (&ll_backend__layout_out_scalar_common_2[10]));
    mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
    if ((SynthOrder_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DeclSet_22 = STATE_VARIABLE_DeclSet_26_26;
    else
    {
      MR_Word SynthAttrsLayoutName_19;
      MR_Word SynthOrderLayoutName_20;
      MR_Word Var_36;
      MR_Word STATE_VARIABLE_DeclSet_37_37;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_DeclSet_40_40;
      MR_Word Var_46;
      MR_Word Var_50;
      MR_Word Var_56;
      MR_Box conv2_STATE_VARIABLE_DeclSet_37_37;
      MR_Box conv1_STATE_VARIABLE_IO_38_38;

      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_11[0]));
        MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ll_backend__layout_out__output_event_spec_components_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (ModuleName_7));
        MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (EventNumber_11));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_36, Attrs_14, ((MR_Box) (STATE_VARIABLE_DeclSet_26_26)), &conv2_STATE_VARIABLE_DeclSet_37_37, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_38_38);
      STATE_VARIABLE_DeclSet_37_37 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_37_37));
      {
        SynthAttrsLayoutName_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SynthAttrsLayoutName_19, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), SynthAttrsLayoutName_19, 1) = ((MR_Box) (ModuleName_7));
        MR_hl_field(MR_mktag(3), SynthAttrsLayoutName_19, 2) = ((MR_Box) (EventNumber_11));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (SynthAttrsLayoutName_19));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_39, STATE_VARIABLE_DeclSet_37_37, &STATE_VARIABLE_DeclSet_40_40);
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(SynthAttrsLayoutName_19, (MR_Integer) 1);
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[3]));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (ll_backend__layout_out__output_event_spec_components_6_p_0_3));
        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (ModuleName_7));
        MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (EventNumber_11));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), Attrs_14, (MR_String) ",\n", Var_46);
      mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
      {
        SynthOrderLayoutName_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SynthOrderLayoutName_20, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), SynthOrderLayoutName_20, 1) = ((MR_Box) (ModuleName_7));
        MR_hl_field(MR_mktag(3), SynthOrderLayoutName_20, 2) = ((MR_Box) (EventNumber_11));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (SynthOrderLayoutName_20));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_50, STATE_VARIABLE_DeclSet_40_40, STATE_VARIABLE_DeclSet_22);
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(SynthOrderLayoutName_20, (MR_Integer) 1);
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SynthOrder_15, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_1[3])));
      mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_56, (MR_String) ", ", (MR_Word) (&ll_backend__layout_out_scalar_common_2[11]));
      mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
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
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), TVar_3, &Var_18);
    Str_5 = mercury__string__f_43_43_2_f_0(Var_18, Var_17);
    return Str_5;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_alloc_site_slot_6_p_0(
  MR_Word _Info_7,
  MR_Word AllocSite_8,
  MR_Integer STATE_VARIABLE_Slot_0_17,
  MR_Integer * STATE_VARIABLE_Slot_18)
{
  ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_115_108_111_116_95_95_91_49_93_95_48_6_p_0(AllocSite_8, STATE_VARIABLE_Slot_0_17, STATE_VARIABLE_Slot_18);
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_115_108_111_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word AllocSite_8,
  MR_Integer STATE_VARIABLE_Slot_0_17,
  MR_Integer * STATE_VARIABLE_Slot_18)
{
  {
    MR_Word ProcLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocSite_8, (MR_Integer) 0))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocSite_8, (MR_Integer) 1))));
    MR_String TypeMsg_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), AllocSite_8, (MR_Integer) 2))));
    MR_Integer Words_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AllocSite_8, (MR_Integer) 3))));
    MR_String FileName_15;
    MR_Integer LineNumber_16;

    mercury__term__context_file_2_p_0(Context_12, &FileName_15);
    mercury__term__context_line_2_p_0(Context_12, &LineNumber_16);
    mercury__io__write_string_3_p_0((MR_String) "\t{ ");
    backend_libs__name_mangle__output_proc_label_3_p_0(ProcLabel_11);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_string_3_p_0((MR_String) "\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(FileName_15);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(LineNumber_16);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_string_3_p_0((MR_String) "\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(TypeMsg_13);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    mercury__io__write_string_3_p_0((MR_String) ", ");
    mercury__io__write_int_3_p_0(Words_14);
    mercury__io__write_string_3_p_0((MR_String) "},\n");
    *STATE_VARIABLE_Slot_18 = STATE_VARIABLE_Slot_0_17;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_slot_6_p_0(
  MR_Word Info_7,
  MR_String String_8,
  MR_Integer STATE_VARIABLE_Slot_0_12,
  MR_Integer * STATE_VARIABLE_Slot_13)
{
  {
    MR_Word AutoComments_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);

    switch (AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_52;

          mercury__io__write_string_3_p_0((MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_12, &Var_52);
          mercury__io__write_string_3_p_0(Var_52);
          mercury__io__write_string_3_p_0((MR_String) " */ ");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "{ ");
    mercury__io__write_string_3_p_0((MR_String) "\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(String_8);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    mercury__io__write_string_3_p_0((MR_String) ", 0},\n");
    *STATE_VARIABLE_Slot_13 = STATE_VARIABLE_Slot_0_12;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_exec_trace_slot_6_p_0(
  MR_Word Info_7,
  MR_Word ExecTrace_8,
  MR_Integer STATE_VARIABLE_Slot_0_39,
  MR_Integer * STATE_VARIABLE_Slot_40)
{
  {
    MR_Word MaybeCallLabelSlotName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 0))));
    MR_Word EventLayoutsSlotName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 1))));
    MR_Integer NumEventLayouts_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 2))));
    MR_Word MaybeTableInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 3))));
    MR_Word MaybeHeadVarsSlotName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 4))));
    MR_Integer NumHeadVarNums_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 5))));
    MR_Word MaybeVarNamesSlotName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 6))));
    MR_Integer MaxVarNum_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 7))));
    MR_Integer MaxRegR_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 8))));
    MR_Integer MaxRegF_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 9))));
    MR_Word MaybeFromFullSlot_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 10))));
    MR_Word MaybeIoSeqSlot_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 11))));
    MR_Word MaybeTrailSlot_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 12))));
    MR_Word MaybeMaxfrSlot_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 13))));
    MR_Word EvalMethod_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 14))));
    MR_Word MaybeCallTableSlot_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 15))));
    MR_Word MaybeTailRecSlot_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 16))));
    MR_Word EffTraceLevel_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 17))) & (MR_Integer) 7);
    MR_Integer Flags_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExecTrace_8, (MR_Integer) 18))));
    MR_Word AutoComments_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    MR_String MangledModuleName_31;
    MR_Word ModuleName_33;
    MR_Word Var_60;
    MR_String Var_120;
    MR_String Var_127;

    mercury__io__write_string_3_p_0((MR_String) "{ ");
    switch (AutoComments_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_209;

          mercury__io__write_string_3_p_0((MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_39, &Var_209);
          mercury__io__write_string_3_p_0(Var_209);
          mercury__io__write_string_3_p_0((MR_String) " */ ");
        }
        break;
    }
    MangledModuleName_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
    if ((MaybeCallLabelSlotName_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL,\n  ");
    }
    else
    {
      MR_Word CallLabelSlotName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCallLabelSlotName_11, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) "(MR_LabelLayout *) ");
      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_31, CallLabelSlotName_32);
      mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    }
    mercury__io__write_string_3_p_0((MR_String) "(const MR_ModuleLayout *) &");
    ModuleName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (ModuleName_33));
    }
    ll_backend__layout_out__output_layout_name_3_p_0(Var_60);
    mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_31, EventLayoutsSlotName_12);
    mercury__io__write_string_3_p_0((MR_String) ",");
    mercury__io__write_int_3_p_0(NumEventLayouts_13);
    mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    mercury__io__write_string_3_p_0((MR_String) "{ ");
    if ((MaybeTableInfo_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL");
    }
    else
    {
      MR_Word TableInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTableInfo_14, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TableInfo_34)) == (MR_Integer) 1))
      {
        MR_Word TableDataId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TableInfo_34, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) "(const void *) &");
        ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_7, TableDataId_36);
      }
      else
      {
        MR_Word TableSlotName_35 = (MR_Word) ((MR_Word) (TableInfo_34));

        mercury__io__write_string_3_p_0((MR_String) "(const void *) ");
        ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_31, TableSlotName_35);
      }
    }
    mercury__io__write_string_3_p_0((MR_String) " },\n  ");
    if ((MaybeHeadVarsSlotName_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL");
    }
    else
    {
      MR_Word HeadVarNumsSlotName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHeadVarsSlotName_15, (MR_Integer) 0))));

      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_31, HeadVarNumsSlotName_37);
    }
    mercury__io__write_string_3_p_0((MR_String) ",");
    if ((MaybeVarNamesSlotName_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL");
    }
    else
    {
      MR_Word VarNamesSlotName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVarNamesSlotName_17, (MR_Integer) 0))));

      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_31, VarNamesSlotName_38);
    }
    mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    mercury__io__write_int_3_p_0(NumHeadVarNums_16);
    mercury__io__write_string_3_p_0((MR_String) ",");
    mercury__io__write_int_3_p_0(MaxVarNum_18);
    mercury__io__write_string_3_p_0((MR_String) ",");
    mercury__io__write_int_3_p_0(MaxRegR_19);
    mercury__io__write_string_3_p_0((MR_String) ",");
    mercury__io__write_int_3_p_0(MaxRegF_20);
    mercury__io__write_string_3_p_0((MR_String) ",");
    ll_backend__layout_out__write_maybe_slot_num_3_p_0(MaybeFromFullSlot_21);
    mercury__io__write_string_3_p_0((MR_String) ",");
    ll_backend__layout_out__write_maybe_slot_num_3_p_0(MaybeIoSeqSlot_22);
    mercury__io__write_string_3_p_0((MR_String) ",");
    ll_backend__layout_out__write_maybe_slot_num_3_p_0(MaybeTrailSlot_23);
    mercury__io__write_string_3_p_0((MR_String) ",");
    ll_backend__layout_out__write_maybe_slot_num_3_p_0(MaybeMaxfrSlot_24);
    mercury__io__write_string_3_p_0((MR_String) ",");
    Var_120 = ll_backend__layout_out__eval_method_to_c_string_1_f_0(EvalMethod_25);
    mercury__io__write_string_3_p_0(Var_120);
    mercury__io__write_string_3_p_0((MR_String) ",");
    ll_backend__layout_out__write_maybe_slot_num_3_p_0(MaybeCallTableSlot_26);
    mercury__io__write_string_3_p_0((MR_String) ",");
    Var_127 = libs__trace_params__trace_level_rep_1_f_0(EffTraceLevel_28);
    mercury__io__write_string_3_p_0(Var_127);
    mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    mercury__io__write_int_3_p_0(Flags_29);
    mercury__io__write_string_3_p_0((MR_String) ",");
    ll_backend__layout_out__write_maybe_slot_num_3_p_0(MaybeTailRecSlot_27);
    mercury__io__write_string_3_p_0((MR_String) " },\n");
    *STATE_VARIABLE_Slot_40 = STATE_VARIABLE_Slot_0_39;
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__eval_method_to_c_string_1_f_0(
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
            HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_NORMAL";
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_LOOP_CHECK";
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_MEMO";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word EntryKind_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
          MR_Word Unitize_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (EntryKind_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (Unitize_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_TABLE_IO";
                  break;
                case (MR_Integer) 0:
                  HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_TABLE_IO_UNITIZE";
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (Unitize_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_TABLE_IO_DECL";
                  break;
                case (MR_Integer) 0:
                  HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_TABLE_IO_UNITIZE_DECL";
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (Unitize_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_TABLE_IO";
                  break;
                case (MR_Integer) 0:
                  HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_TABLE_IO_UNITIZE";
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MinimalMethod_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);

          switch (MinimalMethod_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_MINIMAL_OWN_STACKS_CONSUMER";
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_MINIMAL_OWN_STACKS_GENERATOR";
              break;
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_MINIMAL_STACK_COPY";
              break;
          }
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__layout_out__write_maybe_slot_num_3_p_0(
  MR_Word HeadVar__1_1)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_int_3_p_0((MR_Integer) -1);
  }
  else
  {
    MR_Integer SlotNum_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    mercury__io__write_int_3_p_0(SlotNum_4);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_slot_6_p_0(
  MR_Word Info_7,
  MR_Word TableIoEntry_8,
  MR_Integer STATE_VARIABLE_Slot_0_18,
  MR_Integer * STATE_VARIABLE_Slot_19)
{
  {
    MR_Word ProcLayoutName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableIoEntry_8, (MR_Integer) 0))));
    MR_Word MaybeArgInfos_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableIoEntry_8, (MR_Integer) 1))));
    MR_Word AutoComments_13;

    mercury__io__write_string_3_p_0((MR_String) "{ ");
    AutoComments_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_75;

          mercury__io__write_string_3_p_0((MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_18, &Var_75);
          mercury__io__write_string_3_p_0(Var_75);
          mercury__io__write_string_3_p_0((MR_String) " */\n  ");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "(const MR_ProcLayout *) &");
    ll_backend__layout_out__output_layout_name_3_p_0(ProcLayoutName_11);
    mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    if ((MaybeArgInfos_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_FALSE, 0, NULL, NULL");
    }
    else
    {
      MR_Word ArgInfos_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgInfos_12, (MR_Integer) 0))));
      MR_Integer NumPTIs_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgInfos_14, (MR_Integer) 0))));
      MR_Word PTIVectorRval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfos_14, (MR_Integer) 1))));
      MR_Word TypeParamsRval_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfos_14, (MR_Integer) 2))));

      mercury__io__write_string_3_p_0((MR_String) "MR_TRUE,\n  ");
      mercury__io__write_int_3_p_0(NumPTIs_15);
      mercury__io__write_string_3_p_0((MR_String) ",\n  (const MR_PseudoTypeInfo *) ");
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_7, PTIVectorRval_16);
      mercury__io__write_string_3_p_0((MR_String) ", (const MR_TypeParamLocns *) ");
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_7, TypeParamsRval_17);
    }
    mercury__io__write_string_3_p_0((MR_String) " },\n");
    *STATE_VARIABLE_Slot_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_18 + (MR_Unsigned) (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_slot_6_p_0(
  MR_Word Info_7,
  MR_Word ProcStatic_8,
  MR_Integer STATE_VARIABLE_Slot_0_29,
  MR_Integer * STATE_VARIABLE_Slot_30)
{
  {
    MR_String FileName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 0))));
    MR_Integer LineNumber_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 1))));
    MR_Word IsInInterface_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word DeepExcpVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 3))));
    MR_Word MaybeCallSites_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 4))));
    MR_Word MaybeCoveragePoints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcStatic_8, (MR_Integer) 5))));
    MR_Word AutoComments_17;
    MR_String MangledModuleName_18;
    MR_Integer TopCSDSlot_22;
    MR_Integer MiddleCSDSlot_23;
    MR_Integer OldOutermostSlot_24;

    mercury__io__write_string_3_p_0((MR_String) "{ ");
    MangledModuleName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
    AutoComments_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_159;

          mercury__io__write_string_3_p_0((MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_29, &Var_159);
          mercury__io__write_string_3_p_0(Var_159);
          mercury__io__write_string_3_p_0((MR_String) " */ ");
        }
        break;
    }
    ll_backend__layout_out__quote_and_write_string_3_p_0(FileName_11);
    mercury__io__write_string_3_p_0((MR_String) ",");
    mercury__io__write_int_3_p_0(LineNumber_12);
    mercury__io__write_string_3_p_0((MR_String) ",");
    switch (IsInInterface_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_FALSE");
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_TRUE");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    if ((MaybeCallSites_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "0,NULL,\n");
    }
    else
    {
      MR_Integer CallSitesSlot_19;
      MR_Integer NumCallSites_20;
      MR_Word CallSitesSlotName_21;
      MR_Tuple Var_54 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeCallSites_15, (MR_Integer) 0))));

      CallSitesSlot_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0))));
      NumCallSites_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 1))));
      mercury__io__write_int_3_p_0(NumCallSites_20);
      mercury__io__write_string_3_p_0((MR_String) ",");
      {
        CallSitesSlotName_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CallSitesSlotName_21, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), CallSitesSlotName_21, 1) = ((MR_Box) (CallSitesSlot_19));
      }
      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_18, CallSitesSlotName_21);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_USE_ACTIVATION_COUNTS\n");
    mercury__io__write_string_3_p_0((MR_String) "0,\n");
    mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    mercury__io__write_string_3_p_0((MR_String) "NULL,");
    TopCSDSlot_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeepExcpVars_14, (MR_Integer) 0))));
    MiddleCSDSlot_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeepExcpVars_14, (MR_Integer) 1))));
    OldOutermostSlot_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeepExcpVars_14, (MR_Integer) 2))));
    mercury__io__write_int_3_p_0(TopCSDSlot_22);
    mercury__io__write_string_3_p_0((MR_String) ",");
    mercury__io__write_int_3_p_0(MiddleCSDSlot_23);
    mercury__io__write_string_3_p_0((MR_String) ",");
    mercury__io__write_int_3_p_0(OldOutermostSlot_24);
    mercury__io__write_string_3_p_0((MR_String) ",");
    mercury__io__write_string_3_p_0((MR_String) "\n#ifdef MR_DEEP_PROFILING_COVERAGE\n");
    if ((MaybeCoveragePoints_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "0,NULL,\n");
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC\n");
      mercury__io__write_string_3_p_0((MR_String) "NULL");
    }
    else
    {
      MR_Integer CoveragePointsSlot_25;
      MR_Integer NumCoveragePoints_26;
      MR_Word CoveragePointsStaticSlotName_27;
      MR_Word CoveragePointsDynamicSlotName_28;
      MR_Tuple Var_88 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeCoveragePoints_16, (MR_Integer) 0))));

      CoveragePointsSlot_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_88, (MR_Integer) 0))));
      NumCoveragePoints_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_88, (MR_Integer) 1))));
      mercury__io__write_int_3_p_0(NumCoveragePoints_26);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      {
        CoveragePointsStaticSlotName_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CoveragePointsStaticSlotName_27, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(MR_mktag(0), CoveragePointsStaticSlotName_27, 1) = ((MR_Box) (CoveragePointsSlot_25));
      }
      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_18, CoveragePointsStaticSlotName_27);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC\n");
      {
        CoveragePointsDynamicSlotName_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CoveragePointsDynamicSlotName_28, 0) = ((MR_Box) ((MR_Unsigned) 32U));
        MR_hl_field(MR_mktag(0), CoveragePointsDynamicSlotName_28, 1) = ((MR_Box) (CoveragePointsSlot_25));
      }
      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_18, CoveragePointsDynamicSlotName_28);
    }
    mercury__io__write_string_3_p_0((MR_String) "\n#endif\n");
    mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    mercury__io__write_string_3_p_0((MR_String) " },\n");
    *STATE_VARIABLE_Slot_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_29 + (MR_Unsigned) (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_slot_6_p_0(
  MR_Word AutoComments_7,
  MR_Word CoveragePoint_8,
  MR_Integer STATE_VARIABLE_Slot_0_15,
  MR_Integer * STATE_VARIABLE_Slot_16)
{
  {
    MR_Word RevGoalPath_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoveragePoint_8, (MR_Integer) 0))));
    MR_Word CPType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CoveragePoint_8, (MR_Integer) 1))));
    MR_String GoalPathString_13;
    MR_String CPTypeCValue_14;

    mercury__io__write_string_3_p_0((MR_String) "{ ");
    switch (AutoComments_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_39;

          mercury__io__write_string_3_p_0((MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_15, &Var_39);
          mercury__io__write_string_3_p_0(Var_39);
          mercury__io__write_string_3_p_0((MR_String) " */ ");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\"");
    GoalPathString_13 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_11);
    mercury__io__write_string_3_p_0(GoalPathString_13);
    mercury__io__write_string_3_p_0((MR_String) "\", ");
    mdbcomp__program_representation__coverage_point_type_c_value_2_p_0(CPType_12, &CPTypeCValue_14);
    mercury__io__write_string_3_p_0(CPTypeCValue_14);
    mercury__io__write_string_3_p_0((MR_String) " },\n");
    *STATE_VARIABLE_Slot_16 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_15 + (MR_Unsigned) (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_slot_6_p_0(
  MR_Word Info_7,
  MR_Word CallSiteStatic_8,
  MR_Integer STATE_VARIABLE_Slot_0_20,
  MR_Integer * STATE_VARIABLE_Slot_21)
{
  {
    MR_bool succeeded;
    MR_Word AutoComments_11;
    MR_String FileName_14;
    MR_Integer LineNumber_15;
    MR_Word GoalPath_16;
    MR_String Var_60;

    mercury__io__write_string_3_p_0((MR_String) "{ ");
    AutoComments_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_92;

          mercury__io__write_string_3_p_0((MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_20, &Var_92);
          mercury__io__write_string_3_p_0(Var_92);
          mercury__io__write_string_3_p_0((MR_String) " */ ");
        }
        break;
    }
    switch (MR_tag((MR_Word) CallSiteStatic_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Callee_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteStatic_8, (MR_Integer) 0))));
          MR_String TypeSubst_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), CallSiteStatic_8, (MR_Integer) 1))));
          MR_Word CalleeProcLabel_17;
          MR_Word CalleeUserOrUci_18;
          MR_Word CalleeProcLayoutName_19;
          MR_Word Var_41;

          FileName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), CallSiteStatic_8, (MR_Integer) 2))));
          LineNumber_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CallSiteStatic_8, (MR_Integer) 3))));
          GoalPath_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteStatic_8, (MR_Integer) 4))));
          mercury__io__write_string_3_p_0((MR_String) "MR_callsite_normal_call, (MR_ProcLayout *)\n&");
          CalleeProcLabel_17 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(Callee_12);
          CalleeUserOrUci_18 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(CalleeProcLabel_17);
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = (MR_Box) ((MR_Unsigned) (CalleeUserOrUci_18));
          }
          {
            CalleeProcLayoutName_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CalleeProcLayoutName_19, 0) = ((MR_Box) (Callee_12));
            MR_hl_field(MR_mktag(0), CalleeProcLayoutName_19, 1) = ((MR_Box) (Var_41));
          }
          ll_backend__layout_out__output_layout_name_3_p_0(CalleeProcLayoutName_19);
          mercury__io__write_string_3_p_0((MR_String) ",\n");
          succeeded = (strcmp(TypeSubst_13, (MR_String) "") == 0);
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "NULL, ");
          }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "\"");
            mercury__io__write_string_3_p_0(TypeSubst_13);
            mercury__io__write_string_3_p_0((MR_String) "\", ");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          FileName_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), CallSiteStatic_8, (MR_Integer) 0))));
          LineNumber_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), CallSiteStatic_8, (MR_Integer) 1))));
          GoalPath_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallSiteStatic_8, (MR_Integer) 2))));
          mercury__io__write_string_3_p_0((MR_String) "MR_callsite_special_call, NULL, NULL, ");
        }
        break;
      case (MR_Integer) 2:
        {
          FileName_14 = ((MR_String) ((MR_hl_field(MR_mktag(2), CallSiteStatic_8, (MR_Integer) 0))));
          LineNumber_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), CallSiteStatic_8, (MR_Integer) 1))));
          GoalPath_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallSiteStatic_8, (MR_Integer) 2))));
          mercury__io__write_string_3_p_0((MR_String) "MR_callsite_higher_order_call, NULL, NULL, ");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CallSiteStatic_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              FileName_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), CallSiteStatic_8, (MR_Integer) 1))));
              LineNumber_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), CallSiteStatic_8, (MR_Integer) 2))));
              GoalPath_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CallSiteStatic_8, (MR_Integer) 3))));
              mercury__io__write_string_3_p_0((MR_String) "MR_callsite_method_call, NULL, NULL, ");
            }
            break;
          case (MR_Integer) 1:
            {
              FileName_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), CallSiteStatic_8, (MR_Integer) 1))));
              LineNumber_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), CallSiteStatic_8, (MR_Integer) 2))));
              GoalPath_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CallSiteStatic_8, (MR_Integer) 3))));
              mercury__io__write_string_3_p_0((MR_String) "MR_callsite_callback, NULL, NULL, ");
            }
            break;
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\"");
    mercury__io__write_string_3_p_0(FileName_14);
    mercury__io__write_string_3_p_0((MR_String) "\", ");
    mercury__io__write_int_3_p_0(LineNumber_15);
    mercury__io__write_string_3_p_0((MR_String) ", \"");
    Var_60 = mdbcomp__goal_path__goal_path_to_string_1_f_0(GoalPath_16);
    mercury__io__write_string_3_p_0(Var_60);
    mercury__io__write_string_3_p_0((MR_String) "\" },\n");
    *STATE_VARIABLE_Slot_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_20 + (MR_Unsigned) (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_slot_decls_6_p_0(
  MR_Word Info_7,
  MR_Word CallSiteStatic_8,
  MR_Word STATE_VARIABLE_DeclSet_0_32,
  MR_Word * STATE_VARIABLE_DeclSet_33)
{
  switch (MR_tag((MR_Word) CallSiteStatic_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Callee_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallSiteStatic_8, (MR_Integer) 0))));
        MR_Word CalleeProcLabel_16;
        MR_Word CalleeUserOrUci_17;
        MR_Word CalleeProcLayoutName_18;
        MR_Word CalleProcLayoutDataId_19;
        MR_Word Var_36;

        CalleeProcLabel_16 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(Callee_11);
        if (((MR_tag((MR_Word) CalleeProcLabel_16)) == (MR_Integer) 0))
          CalleeUserOrUci_17 = (MR_Integer) 0;
        else
          CalleeUserOrUci_17 = (MR_Integer) 1;
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = (MR_Box) ((MR_Unsigned) (CalleeUserOrUci_17));
        }
        {
          CalleeProcLayoutName_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CalleeProcLayoutName_18, 0) = ((MR_Box) (Callee_11));
          MR_hl_field(MR_mktag(0), CalleeProcLayoutName_18, 1) = ((MR_Box) (Var_36));
        }
        {
          CalleProcLayoutDataId_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), CalleProcLayoutDataId_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), CalleProcLayoutDataId_19, 1) = ((MR_Box) (CalleeProcLayoutName_18));
        }
        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_6_p_0(Info_7, CalleProcLayoutDataId_19, STATE_VARIABLE_DeclSet_0_32, STATE_VARIABLE_DeclSet_33);
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_DeclSet_33 = STATE_VARIABLE_DeclSet_0_32;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_DeclSet_33 = STATE_VARIABLE_DeclSet_0_32;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CallSiteStatic_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_DeclSet_33 = STATE_VARIABLE_DeclSet_0_32;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_DeclSet_33 = STATE_VARIABLE_DeclSet_0_32;
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layout_slot_6_p_0(
  MR_Word Info_7,
  MR_Word LabelLayout_8,
  MR_Integer STATE_VARIABLE_Slot_0_32,
  MR_Integer * STATE_VARIABLE_Slot_33)
{
  {
    MR_bool succeeded;
    MR_String ModuleName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
    MR_Word BasicLabelLayout_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelLayout_8, (MR_Integer) 0))));
    MR_Word LabelVarInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelLayout_8, (MR_Integer) 1))));
    MR_Integer LabelNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_12, (MR_Integer) 1))));
    MR_Word AutoComments_22;
    MR_Integer EncodedVarCount_23;
    MR_Word TypeParams_24;
    MR_Integer PTIsSlot_25;
    MR_Integer HLDSVarNumsSlot_26;
    MR_Integer ShortLocnsSlot_27;
    MR_Integer LongLocnsSlot_28;
    MR_Integer Var_55;
    MR_Integer Var_56;

    mercury__io__write_string_3_p_0((MR_String) "{ ");
    AutoComments_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_195;
          MR_String Var_205;

          mercury__io__write_string_3_p_0((MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_32, &Var_195);
          mercury__io__write_string_3_p_0(Var_195);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), LabelNum_15, &Var_205);
          mercury__io__write_string_3_p_0(Var_205);
          mercury__io__write_string_3_p_0((MR_String) " */\n  ");
        }
        break;
    }
    ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_5_p_0(ModuleName_11, BasicLabelLayout_12);
    mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    EncodedVarCount_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_13, (MR_Integer) 0))));
    TypeParams_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelVarInfo_13, (MR_Integer) 1))));
    PTIsSlot_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_13, (MR_Integer) 2))));
    HLDSVarNumsSlot_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_13, (MR_Integer) 3))));
    ShortLocnsSlot_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_13, (MR_Integer) 4))));
    LongLocnsSlot_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_13, (MR_Integer) 5))));
    succeeded = (LongLocnsSlot_28 >= (MR_Integer) 0);
    if (!(succeeded))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.layout_out.output_long_var_label_layout_slot\'/6", (MR_String) "no long locn");
        return;
      }
    }
    mercury__io__write_int_3_p_0(EncodedVarCount_23);
    mercury__io__write_string_3_p_0((MR_String) ",");
    succeeded = (PTIsSlot_25 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_55 = (MR_Integer) 0;
      succeeded = (ShortLocnsSlot_27 >= Var_55);
      if (succeeded)
      {
        Var_56 = (MR_Integer) 0;
        succeeded = (HLDSVarNumsSlot_26 >= Var_56);
      }
    }
    if (succeeded)
    {
      MR_Word Var_57;
      MR_Integer Var_58;

      succeeded = ((((MR_tag((MR_Word) TypeParams_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeParams_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeParams_24, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 0))));
          succeeded = (Var_58 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        MR_String Var_219;
        MR_String Var_229;
        MR_String Var_239;
        MR_String Var_249;

        mercury__io__write_string_3_p_0((MR_String) "MR_LLVL0(");
        mercury__io__write_string_3_p_0(ModuleName_11);
        mercury__io__write_string_3_p_0((MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), PTIsSlot_25, &Var_219);
        mercury__io__write_string_3_p_0(Var_219);
        mercury__io__write_string_3_p_0((MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), HLDSVarNumsSlot_26, &Var_229);
        mercury__io__write_string_3_p_0(Var_229);
        mercury__io__write_string_3_p_0((MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), ShortLocnsSlot_27, &Var_239);
        mercury__io__write_string_3_p_0(Var_239);
        mercury__io__write_string_3_p_0((MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), LongLocnsSlot_28, &Var_249);
        mercury__io__write_string_3_p_0(Var_249);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      else
      {
        MR_Integer TPTypeNum_30;
        MR_Integer TPCellNum_31;
        MR_Word TPDataId_29;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;

        succeeded = ((((MR_tag((MR_Word) TypeParams_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeParams_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeParams_24, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_72)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_72, (MR_Integer) 0)))) == (MR_Integer) 13)));
          if (succeeded)
          {
            TPDataId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_72, (MR_Integer) 1))));
            Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_72, (MR_Integer) 2))));
            succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TPDataId_29)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TPDataId_29, (MR_Integer) 0))));
                TPCellNum_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), TPDataId_29, (MR_Integer) 1))));
                TPTypeNum_30 = (MR_Integer) (Var_74);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        if (succeeded)
        {
          MR_String Var_263;
          MR_String Var_273;
          MR_String Var_283;
          MR_String Var_293;
          MR_String Var_303;
          MR_String Var_313;

          mercury__io__write_string_3_p_0((MR_String) "MR_LLVLC(");
          mercury__io__write_string_3_p_0(ModuleName_11);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), TPTypeNum_30, &Var_263);
          mercury__io__write_string_3_p_0(Var_263);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), TPCellNum_31, &Var_273);
          mercury__io__write_string_3_p_0(Var_273);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), PTIsSlot_25, &Var_283);
          mercury__io__write_string_3_p_0(Var_283);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), HLDSVarNumsSlot_26, &Var_293);
          mercury__io__write_string_3_p_0(Var_293);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), ShortLocnsSlot_27, &Var_303);
          mercury__io__write_string_3_p_0(Var_303);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), LongLocnsSlot_28, &Var_313);
          mercury__io__write_string_3_p_0(Var_313);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_327;
          MR_String Var_337;
          MR_String Var_347;
          MR_String Var_357;

          ll_backend__layout_out__output_rval_as_addr_4_p_0(Info_7, TypeParams_24);
          mercury__io__write_string_3_p_0((MR_String) ",MR_LLVL(");
          mercury__io__write_string_3_p_0(ModuleName_11);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), PTIsSlot_25, &Var_327);
          mercury__io__write_string_3_p_0(Var_327);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), HLDSVarNumsSlot_26, &Var_337);
          mercury__io__write_string_3_p_0(Var_337);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), ShortLocnsSlot_27, &Var_347);
          mercury__io__write_string_3_p_0(Var_347);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), LongLocnsSlot_28, &Var_357);
          mercury__io__write_string_3_p_0(Var_357);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
    }
    else
    {
      MR_Word Var_139;

      mercury__io__write_string_3_p_0((MR_String) "(const MR_TypeParamLocns *) ");
      ll_backend__layout_out__output_rval_as_addr_4_p_0(Info_7, TypeParams_24);
      mercury__io__write_string_3_p_0((MR_String) ",");
      succeeded = (PTIsSlot_25 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_113;

        {
          Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (PTIsSlot_25));
        }
        ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ModuleName_11, Var_113);
        mercury__io__write_string_3_p_0((MR_String) ",");
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "0,");
      }
      succeeded = (HLDSVarNumsSlot_26 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_122;

        {
          Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (HLDSVarNumsSlot_26));
        }
        ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ModuleName_11, Var_122);
        mercury__io__write_string_3_p_0((MR_String) ",");
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "0,");
      }
      succeeded = (ShortLocnsSlot_27 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_131;

        {
          Var_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (ShortLocnsSlot_27));
        }
        ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ModuleName_11, Var_131);
        mercury__io__write_string_3_p_0((MR_String) ",");
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "0,");
      }
      {
        Var_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (LongLocnsSlot_28));
      }
      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ModuleName_11, Var_139);
    }
    mercury__io__write_string_3_p_0((MR_String) " },\n");
    *STATE_VARIABLE_Slot_33 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_32 + (MR_Unsigned) (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layout_slot_6_p_0(
  MR_Word Info_7,
  MR_Word LabelLayout_8,
  MR_Integer STATE_VARIABLE_Slot_0_31,
  MR_Integer * STATE_VARIABLE_Slot_32)
{
  {
    MR_bool succeeded;
    MR_String ModuleName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
    MR_Word BasicLabelLayout_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelLayout_8, (MR_Integer) 0))));
    MR_Word LabelVarInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelLayout_8, (MR_Integer) 1))));
    MR_Integer LabelNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_12, (MR_Integer) 1))));
    MR_Word AutoComments_22;
    MR_Integer EncodedVarCount_23;
    MR_Word TypeParams_24;
    MR_Integer PTIsSlot_25;
    MR_Integer HLDSVarNumsSlot_26;
    MR_Integer ShortLocnsSlot_27;
    MR_Integer Var_51;
    MR_Integer Var_52;

    mercury__io__write_string_3_p_0((MR_String) "{ ");
    AutoComments_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_179;
          MR_String Var_189;

          mercury__io__write_string_3_p_0((MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_31, &Var_179);
          mercury__io__write_string_3_p_0(Var_179);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), LabelNum_15, &Var_189);
          mercury__io__write_string_3_p_0(Var_189);
          mercury__io__write_string_3_p_0((MR_String) " */\n  ");
        }
        break;
    }
    ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_5_p_0(ModuleName_11, BasicLabelLayout_12);
    mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    EncodedVarCount_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_13, (MR_Integer) 0))));
    TypeParams_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LabelVarInfo_13, (MR_Integer) 1))));
    PTIsSlot_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_13, (MR_Integer) 2))));
    HLDSVarNumsSlot_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_13, (MR_Integer) 3))));
    ShortLocnsSlot_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LabelVarInfo_13, (MR_Integer) 4))));
    mercury__io__write_int_3_p_0(EncodedVarCount_23);
    mercury__io__write_string_3_p_0((MR_String) ",");
    succeeded = (PTIsSlot_25 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_51 = (MR_Integer) 0;
      succeeded = (HLDSVarNumsSlot_26 >= Var_51);
      if (succeeded)
      {
        Var_52 = (MR_Integer) 0;
        succeeded = (ShortLocnsSlot_27 >= Var_52);
      }
    }
    if (succeeded)
    {
      MR_Word Var_53;
      MR_Integer Var_54;

      succeeded = ((((MR_tag((MR_Word) TypeParams_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeParams_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeParams_24, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 0))));
          succeeded = (Var_54 == (MR_Integer) 0);
        }
      }
      if (succeeded)
      {
        MR_String Var_203;
        MR_String Var_213;
        MR_String Var_223;

        mercury__io__write_string_3_p_0((MR_String) "MR_LLVS0(");
        mercury__io__write_string_3_p_0(ModuleName_11);
        mercury__io__write_string_3_p_0((MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), PTIsSlot_25, &Var_203);
        mercury__io__write_string_3_p_0(Var_203);
        mercury__io__write_string_3_p_0((MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), HLDSVarNumsSlot_26, &Var_213);
        mercury__io__write_string_3_p_0(Var_213);
        mercury__io__write_string_3_p_0((MR_String) ",");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), ShortLocnsSlot_27, &Var_223);
        mercury__io__write_string_3_p_0(Var_223);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      else
      {
        MR_Integer TPTypeNum_29;
        MR_Integer TPCellNum_30;
        MR_Word TPDataId_28;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;

        succeeded = ((((MR_tag((MR_Word) TypeParams_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeParams_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeParams_24, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_66)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 0)))) == (MR_Integer) 13)));
          if (succeeded)
          {
            TPDataId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 1))));
            Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 2))));
            succeeded = (Var_67 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TPDataId_28)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TPDataId_28, (MR_Integer) 0))));
                TPCellNum_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), TPDataId_28, (MR_Integer) 1))));
                TPTypeNum_29 = (MR_Integer) (Var_68);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        if (succeeded)
        {
          MR_String Var_237;
          MR_String Var_247;
          MR_String Var_257;
          MR_String Var_267;
          MR_String Var_277;

          mercury__io__write_string_3_p_0((MR_String) "MR_LLVSC(");
          mercury__io__write_string_3_p_0(ModuleName_11);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), TPTypeNum_29, &Var_237);
          mercury__io__write_string_3_p_0(Var_237);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), TPCellNum_30, &Var_247);
          mercury__io__write_string_3_p_0(Var_247);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), PTIsSlot_25, &Var_257);
          mercury__io__write_string_3_p_0(Var_257);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), HLDSVarNumsSlot_26, &Var_267);
          mercury__io__write_string_3_p_0(Var_267);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), ShortLocnsSlot_27, &Var_277);
          mercury__io__write_string_3_p_0(Var_277);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_291;
          MR_String Var_301;
          MR_String Var_311;

          ll_backend__layout_out__output_rval_as_addr_4_p_0(Info_7, TypeParams_24);
          mercury__io__write_string_3_p_0((MR_String) ",MR_LLVS(");
          mercury__io__write_string_3_p_0(ModuleName_11);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), PTIsSlot_25, &Var_291);
          mercury__io__write_string_3_p_0(Var_291);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), HLDSVarNumsSlot_26, &Var_301);
          mercury__io__write_string_3_p_0(Var_301);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), ShortLocnsSlot_27, &Var_311);
          mercury__io__write_string_3_p_0(Var_311);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "(const MR_TypeParamLocns *) ");
      ll_backend__layout_out__output_rval_as_addr_4_p_0(Info_7, TypeParams_24);
      mercury__io__write_string_3_p_0((MR_String) ",");
      succeeded = (PTIsSlot_25 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_103;

        {
          Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (PTIsSlot_25));
        }
        ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ModuleName_11, Var_103);
        mercury__io__write_string_3_p_0((MR_String) ",");
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "0,");
      }
      succeeded = (HLDSVarNumsSlot_26 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_112;

        {
          Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (HLDSVarNumsSlot_26));
        }
        ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ModuleName_11, Var_112);
        mercury__io__write_string_3_p_0((MR_String) ",");
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "0,");
      }
      succeeded = (ShortLocnsSlot_27 >= (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_121;

        {
          Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (ShortLocnsSlot_27));
        }
        ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ModuleName_11, Var_121);
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "0");
      }
    }
    mercury__io__write_string_3_p_0((MR_String) " },\n");
    *STATE_VARIABLE_Slot_32 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_31 + (MR_Unsigned) (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layout_slot_6_p_0(
  MR_Word Info_7,
  MR_Word LabelLayout_8,
  MR_Integer STATE_VARIABLE_Slot_0_22,
  MR_Integer * STATE_VARIABLE_Slot_23)
{
  {
    MR_String ModuleName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
    MR_Word BasicLabelLayout_12 = (MR_Word) (LabelLayout_8);
    MR_Integer LabelNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_12, (MR_Integer) 1))));
    MR_Word AutoComments_21;

    mercury__io__write_string_3_p_0((MR_String) "{ ");
    AutoComments_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_89;
          MR_String Var_99;

          mercury__io__write_string_3_p_0((MR_String) "/* ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_22, &Var_89);
          mercury__io__write_string_3_p_0(Var_89);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), LabelNum_14, &Var_99);
          mercury__io__write_string_3_p_0(Var_99);
          mercury__io__write_string_3_p_0((MR_String) " */\n  ");
        }
        break;
    }
    ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_5_p_0(ModuleName_11, BasicLabelLayout_12);
    mercury__io__write_string_3_p_0((MR_String) " },\n");
    *STATE_VARIABLE_Slot_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_22 + (MR_Unsigned) (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_5_p_0(
  MR_String ModuleName_7,
  MR_Word BasicLabelLayout_8)
{
  {
    MR_Word ProcLabel_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_8, (MR_Integer) 0))));
    MR_Word MaybePort_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_8, (MR_Integer) 3))));
    MR_Word MaybeIsHidden_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_8, (MR_Integer) 4))));
    MR_Integer LabelNumberInModule_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_8, (MR_Integer) 5))));
    MR_Word MaybeGoalPath_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_8, (MR_Integer) 6))));
    MR_Word MaybeUserSlotName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BasicLabelLayout_8, (MR_Integer) 7))));
    MR_String MacroName_18;
    MR_String STATE_VARIABLE_MacroName_27_27;

    if ((MaybeIsHidden_14 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_MacroName_27_27 = (MR_String) "MR_LL";
    else
    {
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIsHidden_14, (MR_Integer) 0))));

      switch (Var_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_MacroName_27_27 = (MR_String) "MR_LL";
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_MacroName_27_27 = (MR_String) "MR_LL_H";
          break;
      }
    }
    if ((MaybeUserSlotName_17 == (MR_Word) ((MR_Unsigned) 0U)))
      MacroName_18 = STATE_VARIABLE_MacroName_27_27;
    else
    {
      MacroName_18 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_MacroName_27_27, (MR_String) "_U");
    }
    mercury__io__write_string_3_p_0(MacroName_18);
    mercury__io__write_string_3_p_0((MR_String) "(");
    backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ProcLabel_10);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    if ((MaybePort_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "NONE,");
    }
    else
    {
      MR_Word Port_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePort_13, (MR_Integer) 0))));
      MR_String Var_40;

      Var_40 = ll_backend__layout_out__trace_port_to_string_1_f_0(Port_20);
      mercury__io__write_string_3_p_0(Var_40);
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    mercury__io__write_int_3_p_0(LabelNumberInModule_15);
    mercury__io__write_string_3_p_0((MR_String) ",");
    if ((MaybeGoalPath_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "0");
    }
    else
    {
      MR_Integer GoalPath_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeGoalPath_16, (MR_Integer) 0))));

      mercury__io__write_int_3_p_0(GoalPath_21);
    }
    if (!((MaybeUserSlotName_17 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word UserSlotName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUserSlotName_17, (MR_Integer) 0))));

      mercury__io__write_string_3_p_0((MR_String) ",");
      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ModuleName_7, UserSlotName_22);
    }
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_event_slot_6_p_0(
  MR_Word Info_7,
  MR_Word UserEvent_8,
  MR_Integer STATE_VARIABLE_Slot_0_16,
  MR_Integer * STATE_VARIABLE_Slot_17)
{
  {
    MR_Integer UserEventNumber_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), UserEvent_8, (MR_Integer) 0))));
    MR_Word UserLocnsRval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UserEvent_8, (MR_Integer) 1))));
    MR_Word MaybeVarNumsSlot_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UserEvent_8, (MR_Integer) 2))));
    MR_Word AutoComments_14;
    MR_String ModuleName_15;

    mercury__io__write_string_3_p_0((MR_String) "{ ");
    AutoComments_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_88;

          mercury__io__write_string_3_p_0((MR_String) "/* slot ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_16, &Var_88);
          mercury__io__write_string_3_p_0(Var_88);
          mercury__io__write_string_3_p_0((MR_String) " */ ");
        }
        break;
    }
    mercury__io__write_int_3_p_0(UserEventNumber_11);
    mercury__io__write_string_3_p_0((MR_String) ", (MR_LongLval *) ");
    ll_backend__layout_out__output_rval_as_addr_4_p_0(Info_7, UserLocnsRval_12);
    mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    ModuleName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
    ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ModuleName_15, MaybeVarNumsSlot_13);
    mercury__io__write_string_3_p_0((MR_String) " },\n");
    *STATE_VARIABLE_Slot_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_16 + (MR_Unsigned) (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_rval_as_addr_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word Var_11;
    MR_Integer Var_12;

    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
        succeeded = (Var_12 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "0");
    }
    else
    {
      MR_Word DataId_8;
      MR_Word Var_15;
      MR_Word Var_16;

      succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 0)))) == (MR_Integer) 13)));
        if (succeeded)
        {
          DataId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 1))));
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 2))));
          succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
        ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(Info_5, DataId_8);
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "\n");
        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_6);
      }
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_maybe_var_num_slot_5_p_0(
  MR_Word MaybeVarNum_6,
  MR_Integer STATE_VARIABLE_Slot_0_10,
  MR_Integer * STATE_VARIABLE_Slot_11)
{
  {
    MR_bool succeeded;
    MR_Integer VarNum_9;
    MR_String Var_42;
    MR_Integer Var_14;

    if ((MaybeVarNum_6 == (MR_Word) ((MR_Unsigned) 0U)))
      VarNum_9 = (MR_Integer) 0;
    else
      VarNum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeVarNum_6, (MR_Integer) 0))));
    Var_14 = mercury__int__mod_2_f_0(STATE_VARIABLE_Slot_0_10, (MR_Integer) 10);
    succeeded = (Var_14 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_String Var_33;

      mercury__io__write_string_3_p_0((MR_String) "\n/* slot ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_10, &Var_33);
      mercury__io__write_string_3_p_0(Var_33);
      mercury__io__write_string_3_p_0((MR_String) " */ ");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), VarNum_9, &Var_42);
    mercury__io__write_string_3_p_0(Var_42);
    mercury__io__write_string_3_p_0((MR_String) ",");
    *STATE_VARIABLE_Slot_11 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_10 + (MR_Unsigned) (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_noac_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__llds_out__llds_out_data__output_rval_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_noac_6_p_0(
  MR_Word Info_7,
  MR_Word ChunkPTIs_8,
  MR_Integer STATE_VARIABLE_Slot_0_12,
  MR_Integer * STATE_VARIABLE_Slot_13)
{
  {
    MR_Integer NumChunkPTIs_11;
    MR_Word Var_22;
    MR_String Var_34;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ChunkPTIs_8, &NumChunkPTIs_11);
    mercury__io__write_string_3_p_0((MR_String) "\nMR_cast_to_pti");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumChunkPTIs_11, &Var_34);
    mercury__io__write_string_3_p_0(Var_34);
    mercury__io__write_string_3_p_0((MR_String) "(");
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ll_backend__layout_out__output_pti_chunk_noac_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Info_7));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ChunkPTIs_8, (MR_String) ",\n\t", Var_22);
    mercury__io__write_string_3_p_0((MR_String) ")");
    *STATE_VARIABLE_Slot_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_12 + (MR_Unsigned) NumChunkPTIs_11);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_ac_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__llds_out__llds_out_data__output_rval_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_ac_6_p_0(
  MR_Word Info_7,
  MR_Word ChunkPTIs_8,
  MR_Integer STATE_VARIABLE_Slot_0_12,
  MR_Integer * STATE_VARIABLE_Slot_13)
{
  {
    MR_Integer NumChunkPTIs_11;
    MR_Word Var_24;
    MR_String Var_36;
    MR_String Var_46;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ChunkPTIs_8, &NumChunkPTIs_11);
    mercury__io__write_string_3_p_0((MR_String) "\n/* slots ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_12, &Var_36);
    mercury__io__write_string_3_p_0(Var_36);
    mercury__io__write_string_3_p_0((MR_String) "+ */ MR_cast_to_pti");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumChunkPTIs_11, &Var_46);
    mercury__io__write_string_3_p_0(Var_46);
    mercury__io__write_string_3_p_0((MR_String) "(\n\t");
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ll_backend__layout_out__output_pti_chunk_ac_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Info_7));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ChunkPTIs_8, (MR_String) ",\n\t", Var_24);
    mercury__io__write_string_3_p_0((MR_String) ")");
    *STATE_VARIABLE_Slot_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_12 + (MR_Unsigned) NumChunkPTIs_11);
  }
}

MR_String MR_CALL 
ll_backend__layout_out__trace_port_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&ll_backend__layout_out_vector_common_7[8 + HeadVar__1_1]))->ll_backend__layout_out__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__layout_out__output_pred_or_func_3_p_0(
  MR_Word PredOrFunc_4)
{
  switch (PredOrFunc_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_FUNCTION");
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_PREDICATE");
      }
      break;
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
  {
    return (MR_Integer) 0;
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_slot_id_5_p_0(
  MR_Word UseMacro_6,
  MR_String ModuleName_7,
  MR_Word SlotName_8)
{
  {
    MR_Word ArrayName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotName_8, (MR_Integer) 0))));
    MR_Integer SlotNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SlotName_8, (MR_Integer) 1))));
    MR_String Var_23;

    ll_backend__layout_out__output_layout_array_name_5_p_0(UseMacro_6, ModuleName_7, ArrayName_10);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), SlotNum_11, &Var_23);
    mercury__io__write_string_3_p_0(Var_23);
    mercury__io__write_string_3_p_0((MR_String) "]");
  }
}

void MR_CALL 
ll_backend__layout_out__output_maybe_layout_name_decl_5_p_0(
  MR_Word LayoutName_6,
  MR_Word STATE_VARIABLE_DeclSet_0_9,
  MR_Word * STATE_VARIABLE_DeclSet_10)
{
  {
    MR_bool succeeded;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (LayoutName_6));
    }
    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_13, STATE_VARIABLE_DeclSet_0_9);
    if (succeeded)
      *STATE_VARIABLE_DeclSet_10 = STATE_VARIABLE_DeclSet_0_9;
    else
    {
      MR_Word Var_15;

      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(LayoutName_6, (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (LayoutName_6));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_15, STATE_VARIABLE_DeclSet_0_9, STATE_VARIABLE_DeclSet_10);
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_name_decl_3_p_0(
  MR_Word LayoutName_4)
{
  {
    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(LayoutName_4, (MR_Integer) 0);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

void MR_CALL 
ll_backend__layout_out__output_closure_layout_data_defn_6_p_0(
  MR_Word _Info_7,
  MR_Word ClosureData_8,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21)
{
  ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_111_115_117_114_101_95_108_97_121_111_117_116_95_100_97_116_97_95_100_101_102_110_95_95_91_49_93_95_48_6_p_0(ClosureData_8, STATE_VARIABLE_DeclSet_0_20, STATE_VARIABLE_DeclSet_21);
}

void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_111_115_117_114_101_95_108_97_121_111_117_116_95_100_97_116_97_95_100_101_102_110_95_95_91_49_93_95_48_6_p_0(
  MR_Word ClosureData_8,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21)
{
  {
    MR_Word CallerProcLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClosureData_8, (MR_Integer) 0))));
    MR_Integer SeqNo_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClosureData_8, (MR_Integer) 1))));
    MR_Word ClosureProcLabel_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClosureData_8, (MR_Integer) 2))));
    MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClosureData_8, (MR_Integer) 3))));
    MR_String FileName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClosureData_8, (MR_Integer) 4))));
    MR_Integer LineNumber_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClosureData_8, (MR_Integer) 5))));
    MR_Word PredOrigin_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClosureData_8, (MR_Integer) 6))));
    MR_String GoalPath_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClosureData_8, (MR_Integer) 7))));
    MR_Word LayoutName_19;
    MR_String Var_33;
    MR_Word Var_46;

    mercury__io__write_string_3_p_0((MR_String) "\n");
    {
      LayoutName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LayoutName_19, 0) = ((MR_Box) (CallerProcLabel_11));
      MR_hl_field(MR_mktag(1), LayoutName_19, 1) = ((MR_Box) (SeqNo_12));
      MR_hl_field(MR_mktag(1), LayoutName_19, 2) = ((MR_Box) (ClosureProcLabel_13));
    }
    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(LayoutName_19, (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) " = {\n{\n");
    ll_backend__layout_out__output_proc_id_4_p_0(ClosureProcLabel_13, PredOrigin_17);
    mercury__io__write_string_3_p_0((MR_String) "},\n");
    Var_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_14);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(Var_33);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    mercury__io__write_string_3_p_0((MR_String) "\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(FileName_15);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    mercury__io__write_int_3_p_0(LineNumber_16);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    mercury__io__write_string_3_p_0((MR_String) "\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(GoalPath_18);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (LayoutName_19));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_46, STATE_VARIABLE_DeclSet_0_20, STATE_VARIABLE_DeclSet_21);
  }
}

void MR_CALL 
ll_backend__layout_out__output_module_layout_data_defn_6_p_0(
  MR_Word Info_7,
  MR_Word Data_8,
  MR_Word STATE_VARIABLE_DeclSet_0_75,
  MR_Word * STATE_VARIABLE_DeclSet_76)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_8, (MR_Integer) 0))));
    MR_Integer StringTableSize_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Data_8, (MR_Integer) 1))));
    MR_Word StringTable_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_8, (MR_Integer) 2))));
    MR_Word MaybeDeepProfData_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_8, (MR_Integer) 3))));
    MR_Word MaybeDebugData_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Data_8, (MR_Integer) 4))));
    MR_Tuple OISUInfo_27;
    MR_Word MaybeDebugInfo_52;
    MR_Word ModuleLayoutName_53;
    MR_Word ModuleStringTableName_54;
    MR_Integer NumOISUTypesB_55;
    MR_Word MaybeOISUBytesLayoutNameB_56;
    MR_Integer NumTypesB_57;
    MR_Word MaybeTypeTableLayoutNameB_58;
    MR_Word STATE_VARIABLE_DeclSet_79_79;
    MR_Word STATE_VARIABLE_DeclSet_106_106;
    MR_Word STATE_VARIABLE_DeclSet_124_124;
    MR_Integer Var_134;
    MR_String Var_138;
    MR_Word Var_244;

    ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_109_111_100_117_108_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_95_91_50_93_95_48_7_p_0(ModuleName_11, StringTable_13, STATE_VARIABLE_DeclSet_0_75, &STATE_VARIABLE_DeclSet_79_79);
    if ((MaybeDeepProfData_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      OISUInfo_27 = (MR_Tuple) (&ll_backend__layout_out_scalar_common_3[0]);
      STATE_VARIABLE_DeclSet_106_106 = STATE_VARIABLE_DeclSet_79_79;
    }
    else
    {
      MR_Word DeepProfData_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeepProfData_14, (MR_Integer) 0))));
      MR_Integer NumOISUTypesA_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeepProfData_16, (MR_Integer) 0))));
      MR_Word OISUBytes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepProfData_16, (MR_Integer) 1))));
      MR_Integer NumTypesA_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeepProfData_16, (MR_Integer) 2))));
      MR_Word TypeTableBytes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeepProfData_16, (MR_Integer) 3))));
      MR_Word MaybeOISUBytesLayoutNameA_21;
      MR_Word MaybeTypeTableLayoutNameA_23;
      MR_Word STATE_VARIABLE_DeclSet_95_95;

      succeeded = (NumOISUTypesA_17 == (MR_Integer) 0);
      if (succeeded)
      {
        MaybeOISUBytesLayoutNameA_21 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_DeclSet_95_95 = STATE_VARIABLE_DeclSet_79_79;
      }
      else
      {
        MR_Word OISUBytesLayoutNameA_22;
        MR_Word Var_94;

        {
          OISUBytesLayoutNameA_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), OISUBytesLayoutNameA_22, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), OISUBytesLayoutNameA_22, 1) = ((MR_Box) (ModuleName_11));
        }
        mercury__io__write_string_3_p_0((MR_String) "\n");
        ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(OISUBytesLayoutNameA_22, (MR_Integer) 1);
        mercury__io__write_string_3_p_0((MR_String) " = {");
        ll_backend__layout_out__output_bytecodes_driver_3_p_0(OISUBytes_18);
        mercury__io__write_string_3_p_0((MR_String) "};\n");
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (OISUBytesLayoutNameA_22));
        }
        ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_94, STATE_VARIABLE_DeclSet_79_79, &STATE_VARIABLE_DeclSet_95_95);
        {
          MaybeOISUBytesLayoutNameA_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeOISUBytesLayoutNameA_21, 0) = ((MR_Box) (OISUBytesLayoutNameA_22));
        }
      }
      if ((TypeTableBytes_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeTypeTableLayoutNameA_23 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_DeclSet_106_106 = STATE_VARIABLE_DeclSet_95_95;
      }
      else
      {
        MR_Word TypeTableLayoutNameA_26;
        MR_Word Var_105;

        {
          TypeTableLayoutNameA_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypeTableLayoutNameA_26, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(MR_mktag(3), TypeTableLayoutNameA_26, 1) = ((MR_Box) (ModuleName_11));
        }
        mercury__io__write_string_3_p_0((MR_String) "\n");
        ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(TypeTableLayoutNameA_26, (MR_Integer) 1);
        mercury__io__write_string_3_p_0((MR_String) " = {");
        ll_backend__layout_out__output_bytecodes_driver_3_p_0(TypeTableBytes_20);
        mercury__io__write_string_3_p_0((MR_String) "};\n");
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (TypeTableLayoutNameA_26));
        }
        ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_105, STATE_VARIABLE_DeclSet_95_95, &STATE_VARIABLE_DeclSet_106_106);
        {
          MaybeTypeTableLayoutNameA_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTypeTableLayoutNameA_23, 0) = ((MR_Box) (TypeTableLayoutNameA_26));
        }
      }
      {
        OISUInfo_27 = (MR_Tuple) MR_new_object(MR_Tuple, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OISUInfo_27, 0) = ((MR_Box) (NumOISUTypesA_17));
        MR_hl_field(MR_mktag(0), OISUInfo_27, 1) = ((MR_Box) (MaybeOISUBytesLayoutNameA_21));
        MR_hl_field(MR_mktag(0), OISUInfo_27, 2) = ((MR_Box) (NumTypesA_19));
        MR_hl_field(MR_mktag(0), OISUInfo_27, 3) = ((MR_Box) (MaybeTypeTableLayoutNameA_23));
      }
    }
    if ((MaybeDebugData_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeDebugInfo_52 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_DeclSet_124_124 = STATE_VARIABLE_DeclSet_106_106;
    }
    else
    {
      MR_Word DebugData_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDebugData_15, (MR_Integer) 0))));
      MR_Word ProcLayoutNames_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DebugData_28, (MR_Integer) 0))));
      MR_Word FileLayouts_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DebugData_28, (MR_Integer) 1))));
      MR_Word TraceLevelA_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DebugData_28, (MR_Integer) 2))) & (MR_Integer) 7);
      MR_Integer SuppressedEventsA_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DebugData_28, (MR_Integer) 3))));
      MR_Integer NumLabelsA_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DebugData_28, (MR_Integer) 4))));
      MR_Word MaybeEventSetA_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DebugData_28, (MR_Integer) 5))));
      MR_Word ProcLayoutVectorNameA_35;
      MR_Integer ProcLayoutVectorLengthA_36;
      MR_Word FileLayoutNames_37;
      MR_Integer FileLayoutVectorLengthA_38;
      MR_Word FileLayoutVectorNameA_39;
      MR_Word LabelExecCountNameA_40;
      MR_Word MaybeEventInfoA_41;
      MR_Word STATE_VARIABLE_DeclSet_107_107;
      MR_Word STATE_VARIABLE_DeclSet_110_110;
      MR_Word STATE_VARIABLE_DeclSet_112_112;
      MR_Word Var_120;
      MR_Word STATE_VARIABLE_DeclSet_121_121;
      MR_Tuple Var_127;

      ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0(ModuleName_11, ProcLayoutNames_29, &ProcLayoutVectorNameA_35, STATE_VARIABLE_DeclSet_106_106, &STATE_VARIABLE_DeclSet_107_107);
      mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0), ProcLayoutNames_29, &ProcLayoutVectorLengthA_36);
      ll_backend__layout_out__output_file_layout_data_defns_9_p_0(Info_7, ModuleName_11, (MR_Integer) 0, FileLayouts_30, &FileLayoutNames_37, STATE_VARIABLE_DeclSet_107_107, &STATE_VARIABLE_DeclSet_110_110);
      mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0), FileLayouts_30, &FileLayoutVectorLengthA_38);
      ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0(ModuleName_11, FileLayoutNames_37, &FileLayoutVectorNameA_39, STATE_VARIABLE_DeclSet_110_110, &STATE_VARIABLE_DeclSet_112_112);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      {
        LabelExecCountNameA_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), LabelExecCountNameA_40, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), LabelExecCountNameA_40, 1) = ((MR_Box) (ModuleName_11));
        MR_hl_field(MR_mktag(3), LabelExecCountNameA_40, 2) = ((MR_Box) (NumLabelsA_33));
      }
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(LabelExecCountNameA_40, (MR_Integer) 1);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      {
        Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (LabelExecCountNameA_40));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_120, STATE_VARIABLE_DeclSet_112_112, &STATE_VARIABLE_DeclSet_121_121);
      if ((MaybeEventSetA_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeEventInfoA_41 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_DeclSet_124_124 = STATE_VARIABLE_DeclSet_121_121;
      }
      else
      {
        MR_Word EventSetDataLayout_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEventSetA_34, (MR_Integer) 0))));
        MR_Word EventSetDataA_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSetDataLayout_42, (MR_Integer) 0))));
        MR_Word TypesRvalMap_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSetDataLayout_42, (MR_Integer) 1))));
        MR_String EventSetNameA_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), EventSetDataA_43, (MR_Integer) 0))));
        MR_String EventSetDesc_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), EventSetDataA_43, (MR_Integer) 1))));
        MR_Word EventSpecs_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSetDataA_43, (MR_Integer) 2))));
        MR_Integer MaxNumAttrA_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EventSetDataA_43, (MR_Integer) 3))));
        MR_Word EventSetDescLayoutNameA_49;
        MR_Word EventSpecsLayoutNameA_50;
        MR_Integer NumEventSpecsA_51;
        MR_Word STATE_VARIABLE_DeclSet_122_122;
        MR_Tuple Var_126;

        ll_backend__layout_out__output_event_set_desc_defn_7_p_0(ModuleName_11, EventSetDesc_46, &EventSetDescLayoutNameA_49, STATE_VARIABLE_DeclSet_121_121, &STATE_VARIABLE_DeclSet_122_122);
        ll_backend__layout_out__output_event_specs_and_components_9_p_0(Info_7, EventSpecs_47, ModuleName_11, TypesRvalMap_44, &EventSpecsLayoutNameA_50, STATE_VARIABLE_DeclSet_122_122, &STATE_VARIABLE_DeclSet_124_124);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecs_47, &NumEventSpecsA_51);
        {
          Var_126 = (MR_Tuple) MR_new_object(MR_Tuple, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (EventSetNameA_45));
          MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (MaxNumAttrA_48));
          MR_hl_field(MR_mktag(0), Var_126, 2) = ((MR_Box) (NumEventSpecsA_51));
          MR_hl_field(MR_mktag(0), Var_126, 3) = ((MR_Box) (EventSetDescLayoutNameA_49));
          MR_hl_field(MR_mktag(0), Var_126, 4) = ((MR_Box) (EventSpecsLayoutNameA_50));
        }
        {
          MaybeEventInfoA_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeEventInfoA_41, 0) = ((MR_Box) (Var_126));
        }
      }
      {
        Var_127 = (MR_Tuple) MR_new_object(MR_Tuple, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (ProcLayoutVectorLengthA_36));
        MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (ProcLayoutVectorNameA_35));
        MR_hl_field(MR_mktag(0), Var_127, 2) = ((MR_Box) (FileLayoutVectorLengthA_38));
        MR_hl_field(MR_mktag(0), Var_127, 3) = ((MR_Box) (FileLayoutVectorNameA_39));
        MR_hl_field(MR_mktag(0), Var_127, 4) = ((MR_Box) (TraceLevelA_31));
        MR_hl_field(MR_mktag(0), Var_127, 5) = ((MR_Box) (SuppressedEventsA_32));
        MR_hl_field(MR_mktag(0), Var_127, 6) = ((MR_Box) (NumLabelsA_33));
        MR_hl_field(MR_mktag(0), Var_127, 7) = ((MR_Box) (LabelExecCountNameA_40));
        MR_hl_field(MR_mktag(0), Var_127, 8) = ((MR_Box) (MaybeEventInfoA_41));
      }
      {
        MaybeDebugInfo_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDebugInfo_52, 0) = ((MR_Box) (Var_127));
      }
    }
    {
      ModuleLayoutName_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ModuleLayoutName_53, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(MR_mktag(3), ModuleLayoutName_53, 1) = ((MR_Box) (ModuleName_11));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ModuleLayoutName_53, (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    Var_134 = ll_backend__layout_out__layout_version_number_0_f_0();
    mercury__io__write_int_3_p_0(Var_134);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    Var_138 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_11);
    ll_backend__layout_out__quote_and_write_string_3_p_0(Var_138);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    mercury__io__write_int_3_p_0(StringTableSize_12);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    {
      ModuleStringTableName_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ModuleStringTableName_54, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ModuleStringTableName_54, 1) = ((MR_Box) (ModuleName_11));
    }
    ll_backend__layout_out__output_layout_name_3_p_0(ModuleStringTableName_54);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    NumOISUTypesB_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OISUInfo_27, (MR_Integer) 0))));
    MaybeOISUBytesLayoutNameB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_27, (MR_Integer) 1))));
    NumTypesB_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OISUInfo_27, (MR_Integer) 2))));
    MaybeTypeTableLayoutNameB_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo_27, (MR_Integer) 3))));
    mercury__io__write_int_3_p_0(NumOISUTypesB_55);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    if ((MaybeOISUBytesLayoutNameB_56 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
    }
    else
    {
      MR_Word OISUBytesLayoutNameB_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOISUBytesLayoutNameB_56, (MR_Integer) 0))));

      ll_backend__layout_out__output_layout_name_3_p_0(OISUBytesLayoutNameB_59);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    mercury__io__write_int_3_p_0(NumTypesB_57);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    if ((MaybeTypeTableLayoutNameB_58 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
    }
    else
    {
      MR_Word TypeTableLayoutNameB_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeTableLayoutNameB_58, (MR_Integer) 0))));

      ll_backend__layout_out__output_layout_name_3_p_0(TypeTableLayoutNameB_60);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    if ((MaybeDebugInfo_52 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "0,\n");
      mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
      mercury__io__write_string_3_p_0((MR_String) "0,\n");
      mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
      mercury__io__write_string_3_p_0((MR_String) "MR_TRACE_LEVEL_NONE,\n");
      mercury__io__write_string_3_p_0((MR_String) "0,\n");
      mercury__io__write_string_3_p_0((MR_String) "0,\n");
      mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
      mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
      mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
      mercury__io__write_string_3_p_0((MR_String) "0,\n");
      mercury__io__write_string_3_p_0((MR_String) "0,\n");
      mercury__io__write_string_3_p_0((MR_String) "NULL\n");
    }
    else
    {
      MR_Integer ProcLayoutVectorLengthB_61;
      MR_Word ProcLayoutVectorNameB_62;
      MR_Integer FileLayoutVectorLengthB_63;
      MR_Word FileLayoutVectorNameB_64;
      MR_Word TraceLevelB_65;
      MR_Integer SuppressedEventsB_66;
      MR_Integer NumLabelsB_67;
      MR_Word LabelExecCountNameB_68;
      MR_Word MaybeEventInfoB_69;
      MR_Tuple Var_190 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeDebugInfo_52, (MR_Integer) 0))));
      MR_String Var_203;

      ProcLayoutVectorLengthB_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_190, (MR_Integer) 0))));
      ProcLayoutVectorNameB_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_190, (MR_Integer) 1))));
      FileLayoutVectorLengthB_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_190, (MR_Integer) 2))));
      FileLayoutVectorNameB_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_190, (MR_Integer) 3))));
      TraceLevelB_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_190, (MR_Integer) 4))));
      SuppressedEventsB_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_190, (MR_Integer) 5))));
      NumLabelsB_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_190, (MR_Integer) 6))));
      LabelExecCountNameB_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_190, (MR_Integer) 7))));
      MaybeEventInfoB_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_190, (MR_Integer) 8))));
      mercury__io__write_int_3_p_0(ProcLayoutVectorLengthB_61);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      ll_backend__layout_out__output_layout_name_3_p_0(ProcLayoutVectorNameB_62);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      mercury__io__write_int_3_p_0(FileLayoutVectorLengthB_63);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      ll_backend__layout_out__output_layout_name_3_p_0(FileLayoutVectorNameB_64);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      Var_203 = libs__trace_params__trace_level_rep_1_f_0(TraceLevelB_65);
      mercury__io__write_string_3_p_0(Var_203);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      mercury__io__write_int_3_p_0(SuppressedEventsB_66);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      mercury__io__write_int_3_p_0(NumLabelsB_67);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      ll_backend__layout_out__output_layout_name_3_p_0(LabelExecCountNameB_68);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      if ((MaybeEventInfoB_69 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
        mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
        mercury__io__write_string_3_p_0((MR_String) "0,\n");
        mercury__io__write_string_3_p_0((MR_String) "0,\n");
        mercury__io__write_string_3_p_0((MR_String) "NULL\n");
      }
      else
      {
        MR_String EventSetNameB_70;
        MR_Integer MaxNumAttrB_71;
        MR_Integer NumEventSpecsB_72;
        MR_Word EventSetDescLayoutNameB_73;
        MR_Word EventSpecsLayoutNameB_74;
        MR_Tuple Var_216 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeEventInfoB_69, (MR_Integer) 0))));

        EventSetNameB_70 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_216, (MR_Integer) 0))));
        MaxNumAttrB_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_216, (MR_Integer) 1))));
        NumEventSpecsB_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_216, (MR_Integer) 2))));
        EventSetDescLayoutNameB_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_216, (MR_Integer) 3))));
        EventSpecsLayoutNameB_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_216, (MR_Integer) 4))));
        ll_backend__layout_out__quote_and_write_string_3_p_0(EventSetNameB_70);
        mercury__io__write_string_3_p_0((MR_String) ",\n");
        ll_backend__layout_out__output_layout_name_3_p_0(EventSetDescLayoutNameB_73);
        mercury__io__write_string_3_p_0((MR_String) ",\n");
        mercury__io__write_int_3_p_0(MaxNumAttrB_71);
        mercury__io__write_string_3_p_0((MR_String) ",\n");
        mercury__io__write_int_3_p_0(NumEventSpecsB_72);
        mercury__io__write_string_3_p_0((MR_String) ",\n");
        ll_backend__layout_out__output_layout_name_3_p_0(EventSpecsLayoutNameB_74);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    mercury__io__write_string_3_p_0((MR_String) "};\n");
    {
      Var_244 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_244, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_244, 1) = ((MR_Box) (ModuleLayoutName_53));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_244, STATE_VARIABLE_DeclSet_124_124, STATE_VARIABLE_DeclSet_76);
  }
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_109_111_100_117_108_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word ModuleName_8,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_DeclSet_0_16,
  MR_Word * STATE_VARIABLE_DeclSet_17)
{
  {
    MR_Word StringTable0_10 = (MR_Word) (HeadVar__3_3);
    MR_Word TableName_13;
    MR_Word Var_29;

    {
      TableName_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TableName_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), TableName_13, 1) = ((MR_Box) (ModuleName_8));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(TableName_13, (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) " = {");
    if ((StringTable0_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ll_backend__layout_out__output_module_string_table_chars_5_p_0((MR_Integer) 0, (MR_Integer) 0, (MR_String) "");
    }
    else
    {
      MR_String FirstString_50 = ((MR_String) ((MR_hl_field(MR_mktag(1), StringTable0_10, (MR_Integer) 0))));
      MR_Word Rest_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StringTable0_10, (MR_Integer) 1))));

      ll_backend__layout_out__output_module_string_table_strings_4_p_0(FirstString_50, Rest_51);
    }
    mercury__io__write_string_3_p_0((MR_String) "};\n");
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (TableName_13));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_29, STATE_VARIABLE_DeclSet_0_16, STATE_VARIABLE_DeclSet_17);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_string_table_strings_4_p_0(
  MR_String String_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ll_backend__layout_out__output_module_string_table_chars_5_p_0((MR_Integer) 0, (MR_Integer) 0, String_1);
    }
    else
    {
      MR_String Next_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Rest_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String next_value_of_String_1;
      MR_Word next_value_of_HeadVar__2_2;

      ll_backend__layout_out__output_module_string_table_chars_5_p_0((MR_Integer) 0, (MR_Integer) 0, String_1);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_String_1 = Next_13;
      next_value_of_HeadVar__2_2 = Rest_14;
      String_1 = next_value_of_String_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_data_defns_9_p_0(
  MR_Word Info_1,
  MR_Word ModuleName_2,
  MR_Integer FileNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_DeclSet_0_6,
  MR_Word * STATE_VARIABLE_DeclSet_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DeclSet_7 = STATE_VARIABLE_DeclSet_0_6;
  }
  else
  {
    MR_Word FileLayout_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word FileLayouts_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word FileLayoutName_24;
    MR_Word FileLayoutNames_25;
    MR_Word STATE_VARIABLE_DeclSet_32_32;
    MR_Integer Var_34;

    ll_backend__layout_out__output_file_layout_data_defn_9_p_0(Info_1, ModuleName_2, FileNum_3, FileLayout_22, &FileLayoutName_24, STATE_VARIABLE_DeclSet_0_6, &STATE_VARIABLE_DeclSet_32_32);
    Var_34 = (MR_Integer) ((MR_Unsigned) FileNum_3 + (MR_Unsigned) (MR_Integer) 1);
    ll_backend__layout_out__output_file_layout_data_defns_9_p_0(Info_1, ModuleName_2, Var_34, FileLayouts_23, &FileLayoutNames_25, STATE_VARIABLE_DeclSet_32_32, STATE_VARIABLE_DeclSet_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileLayoutName_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FileLayoutNames_25));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_data_defn_9_p_0(
  MR_Word Info_10,
  MR_Word ModuleName_11,
  MR_Integer FileNum_12,
  MR_Word FileLayout_13,
  MR_Word * FileLayoutName_14,
  MR_Word STATE_VARIABLE_DeclSet_0_25,
  MR_Word * STATE_VARIABLE_DeclSet_26)
{
  {
    MR_String MangledModuleName_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))));
    MR_String FileName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), FileLayout_13, (MR_Integer) 0))));
    MR_Word LineNoLabelList_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileLayout_13, (MR_Integer) 1))));
    MR_Word LineNos_20;
    MR_Word LabelLayoutSlots_21;
    MR_Integer VectorLengths_22;
    MR_Word LineNumberVectorName_23;
    MR_Word LabelVectorName_24;
    MR_Word STATE_VARIABLE_DeclSet_29_29;
    MR_Word STATE_VARIABLE_DeclSet_31_31;
    MR_Word Var_51;

    mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), LineNoLabelList_19, &LineNos_20, &LabelLayoutSlots_21);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_2[2]), LineNoLabelList_19, &VectorLengths_22);
    ll_backend__layout_out__output_file_layout_line_number_vector_defn_9_p_0(Info_10, ModuleName_11, FileNum_12, LineNos_20, &LineNumberVectorName_23, STATE_VARIABLE_DeclSet_0_25, &STATE_VARIABLE_DeclSet_29_29);
    ll_backend__layout_out__output_file_layout_label_layout_vector_defn_9_p_0(MangledModuleName_17, ModuleName_11, FileNum_12, LabelLayoutSlots_21, &LabelVectorName_24, STATE_VARIABLE_DeclSet_29_29, &STATE_VARIABLE_DeclSet_31_31);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *FileLayoutName_14 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (FileNum_12));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*FileLayoutName_14, (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    mercury__io__write_string_3_p_0((MR_String) "\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(FileName_18);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    mercury__io__write_int_3_p_0(VectorLengths_22);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    ll_backend__layout_out__output_layout_name_3_p_0(LineNumberVectorName_23);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    ll_backend__layout_out__output_layout_name_3_p_0(LabelVectorName_24);
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (*FileLayoutName_14));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_51, STATE_VARIABLE_DeclSet_31_31, STATE_VARIABLE_DeclSet_26);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_label_layout_vector_defn_9_p_0(
  MR_String MangledModuleName_10,
  MR_Word ModuleName_11,
  MR_Integer FileNum_12,
  MR_Word LabelSlots_13,
  MR_Word * LayoutName_14,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20)
{
  {
    MR_Word Var_34;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *LayoutName_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (FileNum_12));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*LayoutName_14, (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    if ((LabelSlots_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL\n");
    }
    else
      ll_backend__layout_out__output_layout_slots_in_vector_4_p_0(MangledModuleName_10, LabelSlots_13);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (*LayoutName_14));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_34, STATE_VARIABLE_DeclSet_0_19, STATE_VARIABLE_DeclSet_20);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_line_number_vector_defn_9_p_0(
  MR_Word Info_10,
  MR_Word ModuleName_11,
  MR_Integer FileNum_12,
  MR_Word LineNumbers_13,
  MR_Word * LayoutName_14,
  MR_Word STATE_VARIABLE_DeclSet_0_20,
  MR_Word * STATE_VARIABLE_DeclSet_21)
{
  {
    MR_Word Var_38;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *LayoutName_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (FileNum_12));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*LayoutName_14, (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) " = {");
    if ((LineNumbers_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "\n0");
    }
    else
    {
      MR_Word AutoComments_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);

      switch (AutoComments_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LeftOverVarNums_72;
            MR_Integer STATE_VARIABLE_Slot_19_77;

            ll_backend__layout_out__output_upto_n_numbers_in_vector_noac_7_p_0(LineNumbers_13, (MR_Integer) 1000, &LeftOverVarNums_72, (MR_Integer) 0, &STATE_VARIABLE_Slot_19_77);
            ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(LeftOverVarNums_72, STATE_VARIABLE_Slot_19_77);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LeftOverVarNums_89;
            MR_Integer STATE_VARIABLE_Slot_19_94;

            ll_backend__layout_out__output_upto_n_numbers_in_vector_ac_7_p_0(LineNumbers_13, (MR_Integer) 1000, &LeftOverVarNums_89, (MR_Integer) 0, &STATE_VARIABLE_Slot_19_94);
            ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(LeftOverVarNums_89, STATE_VARIABLE_Slot_19_94);
          }
          break;
      }
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (*LayoutName_14));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_38, STATE_VARIABLE_DeclSet_0_20, STATE_VARIABLE_DeclSet_21);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_layout_name_in_vector_4_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_10;

    ll_backend__layout_out__output_layout_decl_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_10));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_Word FileLayoutNames_9,
  MR_Word * VectorName_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  {
    MR_Word STATE_VARIABLE_DeclSet_20_20;
    MR_Word Var_35;
    MR_Box conv2_STATE_VARIABLE_DeclSet_20_20;
    MR_Box conv1_STATE_VARIABLE_IO_21_21;

    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[9]), FileLayoutNames_9, ((MR_Box) (STATE_VARIABLE_DeclSet_0_15)), &conv2_STATE_VARIABLE_DeclSet_20_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_21_21);
    STATE_VARIABLE_DeclSet_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_20_20));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *VectorName_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_8));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*VectorName_10, (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    if ((FileLayoutNames_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL\n");
    }
    else
    {
      MR_Box conv3_STATE_VARIABLE_IO_32_32;

      mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ll_backend__layout_out_scalar_common_3[1]), FileLayoutNames_9, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_32_32);
    }
    mercury__io__write_string_3_p_0((MR_String) "};\n");
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (*VectorName_10));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_35, STATE_VARIABLE_DeclSet_20_20, STATE_VARIABLE_DeclSet_16);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_set_desc_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_String EventSetDesc_9,
  MR_Word * LayoutName_10,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14)
{
  {
    MR_Word Var_27;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LayoutName_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_8));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*LayoutName_10, (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) " = {");
    ll_backend__layout_out__output_module_string_table_chars_5_p_0((MR_Integer) 0, (MR_Integer) 0, EventSetDesc_9);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (*LayoutName_10));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_27, STATE_VARIABLE_DeclSet_0_13, STATE_VARIABLE_DeclSet_14);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_string_table_chars_5_p_0(
  MR_Integer CurIndex_6,
  MR_Integer Count_7,
  MR_String String_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NextIndex_10;
    MR_Char Char_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_index_next_4_p_0(String_8, CurIndex_6, &NextIndex_10, &Char_11);
    if (succeeded)
    {
      MR_Integer Int_12;

      mercury__char__to_int_2_p_0(Char_11, &Int_12);
      succeeded = (Int_12 <= (MR_Integer) 127);
      if (succeeded)
      {
        mercury__io__write_char_3_p_0((MR_Char) 39);
        backend_libs__c_util__output_quoted_char_cur_stream_3_p_0(Char_11);
        mercury__io__write_char_3_p_0((MR_Char) 39);
        mercury__io__write_string_3_p_0((MR_String) ", ");
      }
      else
      {
        MR_Word Codes_13;

        succeeded = mercury__char__to_utf8_2_p_0(Char_11, &Codes_13);
        if (succeeded)
          ll_backend__layout_out__output_multi_byte_char_codes_3_p_0(Codes_13);
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.layout_out.output_module_string_table_chars\'/5", (MR_String) "invalid code point");
            return;
          }
        }
      }
      succeeded = (Count_7 == (MR_Integer) 10);
      if (succeeded)
      {
        MR_Integer next_value_of_CurIndex_6;

        mercury__io__nl_2_p_0();
        // direct tailcall eliminated
        ;
        next_value_of_CurIndex_6 = NextIndex_10;
        CurIndex_6 = next_value_of_CurIndex_6;
        Count_7 = (MR_Integer) 0;
        continue;
      }
      else
      {
        MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) Count_7 + (MR_Unsigned) (MR_Integer) 1);
        MR_Integer next_value_of_CurIndex_6 = NextIndex_10;
        MR_Integer next_value_of_Count_7 = Var_30;

        // direct tailcall eliminated
        ;
        CurIndex_6 = next_value_of_CurIndex_6;
        Count_7 = next_value_of_Count_7;
        continue;
      }
    }
    else
    {
      MR_Char Var_35;

      mercury__io__write_char_3_p_0((MR_Char) 39);
      Var_35 = mercury__char__det_from_int_1_f_0((MR_Integer) 0);
      backend_libs__c_util__output_quoted_char_cur_stream_3_p_0(Var_35);
      mercury__io__write_char_3_p_0((MR_Char) 39);
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_multi_byte_char_codes_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer C_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_int_3_p_0(C_7);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cs_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_proc_layout_name_in_vector_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_10;

    ll_backend__layout_out__output_layout_decl_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_10));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0(
  MR_Word ModuleName_8,
  MR_Word ProcLayoutNames_9,
  MR_Word * VectorName_10,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  {
    MR_Word STATE_VARIABLE_DeclSet_20_20;
    MR_Word Var_34;
    MR_Box conv2_STATE_VARIABLE_DeclSet_20_20;
    MR_Box conv1_STATE_VARIABLE_IO_21_21;

    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[7]), ProcLayoutNames_9, ((MR_Box) (STATE_VARIABLE_DeclSet_0_15)), &conv2_STATE_VARIABLE_DeclSet_20_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_21_21);
    STATE_VARIABLE_DeclSet_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_20_20));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *VectorName_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_8));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*VectorName_10, (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    if ((ProcLayoutNames_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL\n");
    }
    else
    {
      MR_Box conv3_STATE_VARIABLE_IO_31_31;

      mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[8]), ProcLayoutNames_9, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_31_31);
    }
    mercury__io__write_string_3_p_0((MR_String) "};\n");
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (*VectorName_10));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_34, STATE_VARIABLE_DeclSet_20_20, STATE_VARIABLE_DeclSet_16);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_event_spec_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_22;

    ll_backend__layout_out__output_event_spec_components_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_22);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_22));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_9_p_0(
  MR_Word Info_10,
  MR_Word EventSpecs_11,
  MR_Word ModuleName_12,
  MR_Word TypesRvalMap_13,
  MR_Word * LayoutName_14,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  {
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_DeclSet_22_22;
    MR_Word Var_24;
    MR_Word Var_31;
    MR_Box conv2_STATE_VARIABLE_DeclSet_22_22;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[13]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__layout_out__output_event_specs_and_components_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleName_12));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, EventSpecs_11, ((MR_Box) (STATE_VARIABLE_DeclSet_0_17)), &conv2_STATE_VARIABLE_DeclSet_22_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    STATE_VARIABLE_DeclSet_22_22 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_22_22));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *LayoutName_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ModuleName_12));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (*LayoutName_14));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_24, STATE_VARIABLE_DeclSet_22_22, STATE_VARIABLE_DeclSet_18);
    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*LayoutName_14, (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) " = {\n");
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[14]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (ll_backend__layout_out__output_event_specs_and_components_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Info_10));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (ModuleName_12));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (TypesRvalMap_13));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0), EventSpecs_11, (MR_String) ",\n", Var_31);
    mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
  }
}

static MR_Integer MR_CALL 
ll_backend__layout_out__layout_version_number_0_f_0(void)
{
  {
    return (MR_Integer) 5;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_bytecodes_driver_3_p_0(
  MR_Word Bytes_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Bytes_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word BytesLeft_8;
      MR_Word next_value_of_Bytes_4;

      ll_backend__layout_out__output_bytecodes_6_p_0(Bytes_4, &BytesLeft_8, (MR_Integer) 0, (MR_Integer) 256);
      // direct tailcall eliminated
      ;
      next_value_of_Bytes_4 = BytesLeft_8;
      Bytes_4 = next_value_of_Bytes_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_bytecodes_6_p_0(
  MR_Word Bytes_7,
  MR_Word * BytesLeft_8,
  MR_Integer STATE_VARIABLE_Seq_0_14,
  MR_Integer MaxSeq_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Bytes_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *BytesLeft_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Head_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Bytes_7, (MR_Integer) 0))));
      MR_Word Tail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Bytes_7, (MR_Integer) 1))));

      succeeded = (STATE_VARIABLE_Seq_0_14 < MaxSeq_10);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_Seq_20_20;
        MR_Integer Var_22;
        MR_Word next_value_of_Bytes_7;
        MR_Integer next_value_of_STATE_VARIABLE_Seq_0_14;

        mercury__io__write_int_3_p_0(Head_12);
        mercury__io__write_char_3_p_0((MR_Char) 44);
        STATE_VARIABLE_Seq_20_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Seq_0_14 + (MR_Unsigned) (MR_Integer) 1);
        Var_22 = (STATE_VARIABLE_Seq_20_20 % (MR_Integer) 16);
        succeeded = (Var_22 == (MR_Integer) 0);
        if (succeeded)
        {
          mercury__io__write_char_3_p_0((MR_Char) 10);
        }
        // direct tailcall eliminated
        ;
        next_value_of_Bytes_7 = Tail_13;
        next_value_of_STATE_VARIABLE_Seq_0_14 = STATE_VARIABLE_Seq_20_20;
        Bytes_7 = next_value_of_Bytes_7;
        STATE_VARIABLE_Seq_0_14 = next_value_of_STATE_VARIABLE_Seq_0_14;
        continue;
      }
      else
        *BytesLeft_8 = Bytes_7;
    }
    break;
  }
}

void MR_CALL 
ll_backend__layout_out__output_proc_layout_data_defn_6_p_0(
  MR_Word Info_7,
  MR_Word ProcLayoutData_8,
  MR_Word STATE_VARIABLE_DeclSet_0_38,
  MR_Word * STATE_VARIABLE_DeclSet_39)
{
  {
    MR_Word RttiProcLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLayoutData_8, (MR_Integer) 0))));
    MR_Word Traversal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLayoutData_8, (MR_Integer) 1))));
    MR_Word MaybeRest_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLayoutData_8, (MR_Integer) 2))));
    MR_Word ProcLabel_14;
    MR_Word MaybeEntryLabel_15;
    MR_Word MaybeSuccipSlot_16;
    MR_Integer StackSlotCount_17;
    MR_Word Detism_18;
    MR_Word ProcLayoutName_25;
    MR_Word DeclId_37;
    MR_Word STATE_VARIABLE_DeclSet_46_46;
    MR_String Var_70;

    ProcLabel_14 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_11);
    MaybeEntryLabel_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Traversal_12, (MR_Integer) 0))));
    MaybeSuccipSlot_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Traversal_12, (MR_Integer) 1))));
    StackSlotCount_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Traversal_12, (MR_Integer) 2))));
    Detism_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Traversal_12, (MR_Integer) 3))) & (MR_Integer) 7);
    if ((MaybeEntryLabel_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Kind_20;

      if ((MaybeRest_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Kind_20 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_DeclSet_46_46 = STATE_VARIABLE_DeclSet_0_38;
      }
      else
      {
        MR_Word ModuleLayoutDecl_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRest_13, (MR_Integer) 3))));
        MR_Word Var_45;

        Var_45 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ProcLabel_14);
        {
          Kind_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Kind_20, 0) = (MR_Box) ((MR_Unsigned) (Var_45));
        }
        ll_backend__layout_out__output_layout_decl_5_p_0(ModuleLayoutDecl_24, STATE_VARIABLE_DeclSet_0_38, &STATE_VARIABLE_DeclSet_46_46);
      }
      mercury__io__write_string_3_p_0((MR_String) "\n");
      {
        ProcLayoutName_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcLayoutName_25, 0) = ((MR_Box) (RttiProcLabel_11));
        MR_hl_field(MR_mktag(0), ProcLayoutName_25, 1) = ((MR_Box) (Kind_20));
      }
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ProcLayoutName_25, (MR_Integer) 1);
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      mercury__io__write_string_3_p_0((MR_String) "{\n");
      mercury__io__write_string_3_p_0((MR_String) "NULL");
    }
    else
    {
      MR_Word EntryLabel_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEntryLabel_15, (MR_Integer) 0))));
      MR_Word Var_42;
      MR_Word Kind_156;
      MR_Word STATE_VARIABLE_DeclSet_43_161;

      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (EntryLabel_26));
      }
      ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(Info_7, Var_42, STATE_VARIABLE_DeclSet_0_38, &STATE_VARIABLE_DeclSet_43_161);
      if ((MaybeRest_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Kind_156 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_DeclSet_46_46 = STATE_VARIABLE_DeclSet_43_161;
      }
      else
      {
        MR_Word ModuleLayoutDecl_149 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRest_13, (MR_Integer) 3))));
        MR_Word Var_150;

        Var_150 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ProcLabel_14);
        {
          Kind_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Kind_156, 0) = (MR_Box) ((MR_Unsigned) (Var_150));
        }
        ll_backend__layout_out__output_layout_decl_5_p_0(ModuleLayoutDecl_149, STATE_VARIABLE_DeclSet_43_161, &STATE_VARIABLE_DeclSet_46_46);
      }
      mercury__io__write_string_3_p_0((MR_String) "\n");
      {
        ProcLayoutName_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcLayoutName_25, 0) = ((MR_Box) (RttiProcLabel_11));
        MR_hl_field(MR_mktag(0), ProcLayoutName_25, 1) = ((MR_Box) (Kind_156));
      }
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ProcLayoutName_25, (MR_Integer) 1);
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      mercury__io__write_string_3_p_0((MR_String) "{\n");
      ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(Var_42);
    }
    mercury__io__write_string_3_p_0((MR_String) ", ");
    if ((MaybeSuccipSlot_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_int_3_p_0((MR_Integer) -1);
    }
    else
    {
      MR_Integer SuccipSlot_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSuccipSlot_16, (MR_Integer) 0))));

      mercury__io__write_int_3_p_0(SuccipSlot_27);
    }
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    mercury__io__write_int_3_p_0(StackSlotCount_17);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    Var_70 = ll_backend__layout_out__detism_to_c_detism_1_f_0(Detism_18);
    mercury__io__write_string_3_p_0(Var_70);
    mercury__io__write_string_3_p_0((MR_String) "\n},\n");
    if ((MaybeRest_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "-1\n");
    }
    else
    {
      MR_Word MaybeProcStatic_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRest_13, (MR_Integer) 0))));
      MR_Word MaybeExecTrace_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRest_13, (MR_Integer) 1))));
      MR_Word MaybeProcBodyBytes_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRest_13, (MR_Integer) 2))));
      MR_Word ModuleLayout_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRest_13, (MR_Integer) 3))));
      MR_Word Origin_32;
      MR_String MangledModuleName_33;

      mercury__io__write_string_3_p_0((MR_String) "{\n");
      Origin_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 11))));
      ll_backend__layout_out__output_proc_id_4_p_0(ProcLabel_14, Origin_32);
      mercury__io__write_string_3_p_0((MR_String) "},\n");
      MangledModuleName_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
      if ((MaybeExecTrace_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
      }
      else
      {
        MR_Word ExecTraceSlotName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExecTrace_29, (MR_Integer) 0))));

        ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_33, ExecTraceSlotName_34);
        mercury__io__write_string_3_p_0((MR_String) ",\n");
      }
      if ((MaybeProcStatic_28 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
      }
      else
      {
        MR_Word ProcStaticSlotName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcStatic_28, (MR_Integer) 0))));

        ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_33, ProcStaticSlotName_35);
        mercury__io__write_string_3_p_0((MR_String) ",\n");
      }
      if ((MaybeProcBodyBytes_30 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
      }
      else
      {
        MR_Word ProcBodyBytesSlotName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcBodyBytes_30, (MR_Integer) 0))));

        ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, MangledModuleName_33, ProcBodyBytesSlotName_36);
        mercury__io__write_string_3_p_0((MR_String) ",\n");
      }
      mercury__io__write_string_3_p_0((MR_String) "&");
      ll_backend__layout_out__output_layout_name_3_p_0(ModuleLayout_31);
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    {
      DeclId_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), DeclId_37, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), DeclId_37, 1) = ((MR_Box) (ProcLayoutName_25));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(DeclId_37, STATE_VARIABLE_DeclSet_46_46, STATE_VARIABLE_DeclSet_39);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_id_4_p_0(
  MR_Word ProcLabel_5,
  MR_Word Origin_6)
{
  if (((MR_tag((MR_Word) ProcLabel_5)) == (MR_Integer) 0))
  {
    MR_Word DefiningModule_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_5, (MR_Integer) 0))));
    MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcLabel_5, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word DeclaringModule_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_5, (MR_Integer) 2))));
    MR_String PredName0_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_5, (MR_Integer) 3))));
    MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_5, (MR_Integer) 4))));
    MR_Integer Mode_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_5, (MR_Integer) 5))));
    MR_String PredName_14;
    MR_String Var_46;
    MR_String Var_50;

    PredName_14 = ll_backend__layout_out__origin_name_2_f_0(Origin_6, PredName0_11);
    switch (PredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_FUNCTION");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_PREDICATE");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    Var_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DeclaringModule_10);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(Var_46);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    Var_50 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DefiningModule_8);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(Var_50);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    ll_backend__layout_out__quote_and_write_string_3_p_0(PredName_14);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    mercury__io__write_int_3_p_0(Arity_12);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    mercury__io__write_int_3_p_0(Mode_13);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
  else
  {
    MR_Word SpecialPredId_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ProcLabel_5, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word TypeModule_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcLabel_5, (MR_Integer) 2))));
    MR_String TypeName_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_5, (MR_Integer) 3))));
    MR_Integer TypeArity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_5, (MR_Integer) 4))));
    MR_Word TypeCtor_19;
    MR_Word Var_22;
    MR_String Var_26;
    MR_String Var_30;
    MR_Word DefiningModule_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcLabel_5, (MR_Integer) 0))));
    MR_String PredName0_64;
    MR_Integer Mode_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_5, (MR_Integer) 5))));
    MR_String PredName_66;

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (TypeModule_16));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (TypeName_17));
    }
    {
      TypeCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_19, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), TypeCtor_19, 1) = ((MR_Box) (TypeArity_18));
    }
    PredName0_64 = hlds__special_pred__special_pred_name_2_f_0(SpecialPredId_15, TypeCtor_19);
    PredName_66 = ll_backend__layout_out__origin_name_2_f_0(Origin_6, PredName0_64);
    ll_backend__layout_out__quote_and_write_string_3_p_0(TypeName_17);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    Var_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeModule_16);
    ll_backend__layout_out__quote_and_write_string_3_p_0(Var_26);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    Var_30 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DefiningModule_63);
    ll_backend__layout_out__quote_and_write_string_3_p_0(Var_30);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    ll_backend__layout_out__quote_and_write_string_3_p_0(PredName_66);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    mercury__io__write_int_3_p_0(TypeArity_18);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    mercury__io__write_int_3_p_0(Mode_65);
    mercury__io__write_string_3_p_0((MR_String) "\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__quote_and_write_string_3_p_0(
  MR_String String_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "\"");
    backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(String_4);
    mercury__io__write_string_3_p_0((MR_String) "\"");
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
        {
          MR_Word Transform_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_4, (MR_Integer) 0))));
          MR_Word OldOrigin_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_4, (MR_Integer) 1))));
          MR_String OldName_17;

          OldName_17 = ll_backend__layout_out__origin_name_2_f_0(OldOrigin_15, (MR_String) "");
          succeeded = (strcmp(OldName_17, (MR_String) "") == 0);
          if (succeeded)
            Name_6 = Name0_5;
          else
          {
            MR_String Var_33;
            MR_String Var_35;

            Var_35 = ll_backend__layout_out__pred_transform_name_1_f_0(Transform_14);
            Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_35);
            Name_6 = mercury__string__f_43_43_2_f_0(OldName_17, Var_33);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            Name_6 = Name0_5;
            break;
          case (MR_Integer) 2:
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
                  MR_String Var_54;
                  MR_String Var_62;
                  MR_String Var_63;
                  MR_String Var_65;
                  MR_String Var_66;
                  MR_String Var_73;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), LineNum_8, &Var_54);
                  Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_54);
                  Var_63 = mercury__string__f_43_43_2_f_0(FileName_11, Var_62);
                  Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_63);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), SeqNo_9, &Var_66);
                  Var_73 = mercury__string__f_43_43_2_f_0(Var_66, Var_65);
                  Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda", Var_73);
                }
                else
                {
                  MR_String Var_75;
                  MR_String Var_83;
                  MR_String Var_84;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), LineNum_8, &Var_75);
                  Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_75);
                  Var_84 = mercury__string__f_43_43_2_f_0(FileName_11, Var_83);
                  Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda_", Var_84);
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

static MR_String MR_CALL 
ll_backend__layout_out__detism_to_c_detism_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&ll_backend__layout_out_vector_common_7[0 + HeadVar__1_1]))->ll_backend__layout_out__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_decl_5_p_0(
  MR_Word LayoutName_6,
  MR_Word STATE_VARIABLE_DeclSet_0_9,
  MR_Word * STATE_VARIABLE_DeclSet_10)
{
  {
    MR_bool succeeded;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (LayoutName_6));
    }
    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_13, STATE_VARIABLE_DeclSet_0_9);
    if (succeeded)
      *STATE_VARIABLE_DeclSet_10 = STATE_VARIABLE_DeclSet_0_9;
    else
    {
      MR_Word Var_18;

      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(LayoutName_6, (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (LayoutName_6));
      }
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Var_18, STATE_VARIABLE_DeclSet_0_9, STATE_VARIABLE_DeclSet_10);
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
ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(
  MR_Word Name_5,
  MR_Word BeingDefined_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Name_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RttiProcLabel_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name_5, (MR_Integer) 0))));
          MR_Word Kind_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name_5, (MR_Integer) 1))));
          MR_Word ProcIsImported_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_8, (MR_Integer) 12))) & (MR_Integer) 1);
          MR_Word ProcIsExported_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_8, (MR_Integer) 12))) >> 1)) & (MR_Integer) 1);
          MR_String Var_131;

          succeeded = (ProcIsImported_10 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (ProcIsExported_11 == (MR_Integer) 0);
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "static ");
          }
          else
            switch (BeingDefined_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "extern ");
                }
                break;
            }
          mercury__io__write_string_3_p_0((MR_String) "const ");
          Var_131 = ll_backend__layout_out__proc_layout_kind_to_type_1_f_0(Kind_9);
          mercury__io__write_string_3_p_0(Var_131);
          mercury__io__write_string_3_p_0((MR_String) " ");
          ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClosureProcLabel_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Name_5, (MR_Integer) 2))));

          mercury__io__write_string_3_p_0((MR_String) "static const ");
          if (((MR_tag((MR_Word) ClosureProcLabel_14)) == (MR_Integer) 0))
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_UserClosureId\n");
          }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_UCIClosureId\n");
          }
          ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__io__write_string_3_p_0((MR_String) "static const MR_ModuleFileLayout ");
          ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "static const MR_int_least16_t ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "static const MR_LabelLayout *");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "static const char ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "static const MR_ModuleFileLayout *");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "static const MR_ProcLayout *");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer NumElements_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_5, (MR_Integer) 2))));

              mercury__io__write_string_3_p_0((MR_String) "static MR_Unsigned ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[");
              mercury__io__write_int_3_p_0(NumElements_29);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "static const char ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "static const char * ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "static MR_SynthAttr ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "static MR_uint_least16_t ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 10:
            {
              mercury__io__write_string_3_p_0((MR_String) "static MR_int_least16_t ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 11:
            {
              mercury__io__write_string_3_p_0((MR_String) "static MR_int_least16_t ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 12:
            {
              mercury__io__write_string_3_p_0((MR_String) "static MR_UserEventSpec ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 13:
            {
              mercury__io__write_string_3_p_0((MR_String) "static const MR_uint_least8_t ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 14:
            {
              mercury__io__write_string_3_p_0((MR_String) "static const MR_uint_least8_t ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
              mercury__io__write_string_3_p_0((MR_String) "[]");
            }
            break;
          case (MR_Integer) 15:
            {
              mercury__io__write_string_3_p_0((MR_String) "static const MR_ModuleLayout ");
              ll_backend__layout_out__output_layout_name_3_p_0(Name_5);
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
ll_backend__layout_out__output_layout_name_3_p_0(
  MR_Word Name_4)
{
  switch (MR_tag((MR_Word) Name_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiProcLabel_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name_4, (MR_Integer) 0))));
        MR_String Var_142;
        MR_Word Var_146;

        Var_142 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_3_p_0(Var_142);
        mercury__io__write_string_3_p_0((MR_String) "_proc_layout__");
        Var_146 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_6);
        backend_libs__name_mangle__output_proc_label_3_p_0(Var_146);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CallerProcLabel_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Name_4, (MR_Integer) 0))));
        MR_Integer SeqNo_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Name_4, (MR_Integer) 1))));
        MR_String Var_134;

        Var_134 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_3_p_0(Var_134);
        mercury__io__write_string_3_p_0((MR_String) "_closure_layout__");
        backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(CallerProcLabel_8);
        mercury__io__write_string_3_p_0((MR_String) "_");
        mercury__io__write_int_3_p_0(SeqNo_9);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Name_4, (MR_Integer) 0))));
        MR_Integer FileNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Name_4, (MR_Integer) 1))));
        MR_String ModuleNameStr_13;
        MR_String Var_126;

        Var_126 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
        mercury__io__write_string_3_p_0(Var_126);
        mercury__io__write_string_3_p_0((MR_String) "_file_layout__");
        ModuleNameStr_13 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_11);
        mercury__io__write_string_3_p_0(ModuleNameStr_13);
        mercury__io__write_string_3_p_0((MR_String) "_");
        mercury__io__write_int_3_p_0(FileNum_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_118;
            MR_Word ModuleName_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_Integer FileNum_149 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 2))));
            MR_String ModuleNameStr_150;

            Var_118 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_118);
            mercury__io__write_string_3_p_0((MR_String) "_file_lines__");
            ModuleNameStr_150 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_148);
            mercury__io__write_string_3_p_0(ModuleNameStr_150);
            mercury__io__write_string_3_p_0((MR_String) "_");
            mercury__io__write_int_3_p_0(FileNum_149);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_110;
            MR_Word ModuleName_151 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_Integer FileNum_152 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 2))));
            MR_String ModuleNameStr_153;

            Var_110 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_110);
            mercury__io__write_string_3_p_0((MR_String) "_file_label_layouts__");
            ModuleNameStr_153 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_151);
            mercury__io__write_string_3_p_0(ModuleNameStr_153);
            mercury__io__write_string_3_p_0((MR_String) "_");
            mercury__io__write_int_3_p_0(FileNum_152);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_105;
            MR_Word ModuleName_154 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_155;

            Var_105 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_105);
            mercury__io__write_string_3_p_0((MR_String) "_module_strings__");
            ModuleNameStr_155 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_154);
            mercury__io__write_string_3_p_0(ModuleNameStr_155);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_100;
            MR_Word ModuleName_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_157;

            Var_100 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_100);
            mercury__io__write_string_3_p_0((MR_String) "_module_files__");
            ModuleNameStr_157 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_156);
            mercury__io__write_string_3_p_0(ModuleNameStr_157);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String Var_95;
            MR_Word ModuleName_158 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_159;

            Var_95 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_95);
            mercury__io__write_string_3_p_0((MR_String) "_module_procs__");
            ModuleNameStr_159 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_158);
            mercury__io__write_string_3_p_0(ModuleNameStr_159);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String Var_90;
            MR_Word ModuleName_160 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_161;

            Var_90 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_90);
            mercury__io__write_string_3_p_0((MR_String) "_module_label_exec_counts__");
            ModuleNameStr_161 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_160);
            mercury__io__write_string_3_p_0(ModuleNameStr_161);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String Var_85;
            MR_Word ModuleName_162 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_163;

            Var_85 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_85);
            mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_set_desc__");
            ModuleNameStr_163 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_162);
            mercury__io__write_string_3_p_0(ModuleNameStr_163);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Integer EventNumber_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 2))));
            MR_String Var_77;
            MR_Word ModuleName_164 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_165;

            Var_77 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_77);
            mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_arg_names__");
            ModuleNameStr_165 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_164);
            mercury__io__write_string_3_p_0(ModuleNameStr_165);
            mercury__io__write_string_3_p_0((MR_String) "_");
            mercury__io__write_int_3_p_0(EventNumber_15);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String Var_69;
            MR_Word ModuleName_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_167;
            MR_Integer EventNumber_168 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 2))));

            Var_69 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_69);
            mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_synth_attrs__");
            ModuleNameStr_167 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_166);
            mercury__io__write_string_3_p_0(ModuleNameStr_167);
            mercury__io__write_string_3_p_0((MR_String) "_");
            mercury__io__write_int_3_p_0(EventNumber_168);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer SynthCallArgNumber_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 3))));
            MR_String Var_58;
            MR_Word ModuleName_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_170;
            MR_Integer EventNumber_171 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 2))));

            Var_58 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_58);
            mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_synth_attr_args__");
            ModuleNameStr_170 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_169);
            mercury__io__write_string_3_p_0(ModuleNameStr_170);
            mercury__io__write_string_3_p_0((MR_String) "_");
            mercury__io__write_int_3_p_0(EventNumber_171);
            mercury__io__write_string_3_p_0((MR_String) "_");
            mercury__io__write_int_3_p_0(SynthCallArgNumber_16);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String Var_47;
            MR_Word ModuleName_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_173;
            MR_Integer EventNumber_174 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 2))));
            MR_Integer SynthCallArgNumber_175 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 3))));

            Var_47 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_47);
            mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_synth_attr_order__");
            ModuleNameStr_173 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_172);
            mercury__io__write_string_3_p_0(ModuleNameStr_173);
            mercury__io__write_string_3_p_0((MR_String) "_");
            mercury__io__write_int_3_p_0(EventNumber_174);
            mercury__io__write_string_3_p_0((MR_String) "_");
            mercury__io__write_int_3_p_0(SynthCallArgNumber_175);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String Var_39;
            MR_Word ModuleName_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_177;
            MR_Integer EventNumber_178 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 2))));

            Var_39 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_39);
            mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_synth_order__");
            ModuleNameStr_177 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_176);
            mercury__io__write_string_3_p_0(ModuleNameStr_177);
            mercury__io__write_string_3_p_0((MR_String) "_");
            mercury__io__write_int_3_p_0(EventNumber_178);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_String Var_34;
            MR_Word ModuleName_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_180;

            Var_34 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_34);
            mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_specs__");
            ModuleNameStr_180 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_179);
            mercury__io__write_string_3_p_0(ModuleNameStr_180);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_String Var_29;
            MR_Word ModuleName_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_182;

            Var_29 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_29);
            mercury__io__write_string_3_p_0((MR_String) "_module_layout_oisu_bytes__");
            ModuleNameStr_182 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_181);
            mercury__io__write_string_3_p_0(ModuleNameStr_182);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String Var_24;
            MR_Word ModuleName_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_184;

            Var_24 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_24);
            mercury__io__write_string_3_p_0((MR_String) "_module_layout_type_table_bytes__");
            ModuleNameStr_184 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_183);
            mercury__io__write_string_3_p_0(ModuleNameStr_184);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_String Var_19;
            MR_Word ModuleName_185 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Name_4, (MR_Integer) 1))));
            MR_String ModuleNameStr_186;

            Var_19 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
            mercury__io__write_string_3_p_0(Var_19);
            mercury__io__write_string_3_p_0((MR_String) "_module_layout__");
            ModuleNameStr_186 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_185);
            mercury__io__write_string_3_p_0(ModuleNameStr_186);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_array_defns_25_p_0(
  MR_Word Info_26,
  MR_Word PseudoTypeInfos_27,
  MR_Word HLDSVarNums_28,
  MR_Word ShortLocns_29,
  MR_Word LongLocns_30,
  MR_Word UserEventVarNums_31,
  MR_Word UserEvents_32,
  MR_Word NoVarLabelLayouts_33,
  MR_Word SVarLabelLayouts_34,
  MR_Word LVarLabelLayouts_35,
  MR_Word CallSiteStatics_36,
  MR_Word CoveragePoints_37,
  MR_Word ProcStatics_38,
  MR_Word ProcHeadVarNums_39,
  MR_Word ProcVarNames_40,
  MR_Word ProcBodyBytecodes_41,
  MR_Word TableIoEntries_42,
  MR_Word ProcEventLayouts_43,
  MR_Word ExecTraces_44,
  MR_Word TSStringTable_45,
  MR_Word AllocSites_46,
  MR_Word STATE_VARIABLE_DeclSet_0_90,
  MR_Word * STATE_VARIABLE_DeclSet_91)
{
  {
    if (!((PseudoTypeInfos_27 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_pseudo_type_info_array_defn_4_p_0(Info_26, PseudoTypeInfos_27);
    }
    if (!((HLDSVarNums_28 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_hlds_var_nums_array_defn_4_p_0(Info_26, HLDSVarNums_28);
    }
    if (!((ShortLocns_29 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_short_locns_array_defn_4_p_0(Info_26, ShortLocns_29);
    }
    if (!((LongLocns_30 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_long_locns_array_defn_4_p_0(Info_26, LongLocns_30);
    }
    if (!((UserEventVarNums_31 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_user_event_var_nums_array_defn_4_p_0(Info_26, UserEventVarNums_31);
    }
    if (!((UserEvents_32 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_user_events_array_defn_4_p_0(Info_26, UserEvents_32);
    }
    if (!((NoVarLabelLayouts_33 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_no_var_label_layouts_array_defn_4_p_0(Info_26, NoVarLabelLayouts_33);
    }
    if (!((SVarLabelLayouts_34 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_short_var_label_layouts_array_defn_4_p_0(Info_26, SVarLabelLayouts_34);
    }
    if (!((LVarLabelLayouts_35 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_long_var_label_layouts_array_defn_4_p_0(Info_26, LVarLabelLayouts_35);
    }
    if ((CallSiteStatics_36 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DeclSet_91 = STATE_VARIABLE_DeclSet_0_90;
    else
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_call_site_static_array_6_p_0(Info_26, CallSiteStatics_36, STATE_VARIABLE_DeclSet_0_90, STATE_VARIABLE_DeclSet_91);
    }
    if (!((CoveragePoints_37 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer NumCoveragePoints_71;

      mercury__io__nl_2_p_0();
      mercury__list__length_2_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), CoveragePoints_37, &NumCoveragePoints_71);
      ll_backend__layout_out__output_proc_static_cp_static_array_5_p_0(Info_26, CoveragePoints_37, NumCoveragePoints_71);
      ll_backend__layout_out__output_proc_static_cp_dynamic_array_4_p_0(Info_26, NumCoveragePoints_71);
    }
    if (!((ProcStatics_38 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_proc_statics_array_defn_4_p_0(Info_26, ProcStatics_38);
    }
    if (!((ProcHeadVarNums_39 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_proc_head_var_nums_array_4_p_0(Info_26, ProcHeadVarNums_39);
    }
    if (!((ProcVarNames_40 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_proc_var_names_array_4_p_0(Info_26, ProcVarNames_40);
    }
    if (!((ProcBodyBytecodes_41 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_proc_body_bytecodes_array_4_p_0(Info_26, ProcBodyBytecodes_41);
    }
    if (!((TableIoEntries_42 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_table_io_entry_array_4_p_0(Info_26, TableIoEntries_42);
    }
    if (!((ProcEventLayouts_43 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_proc_event_layout_array_4_p_0(Info_26, ProcEventLayouts_43);
    }
    if (!((ExecTraces_44 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_exec_traces_array_4_p_0(Info_26, ExecTraces_44);
    }
    if (!((TSStringTable_45 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_threadscope_string_table_array_4_p_0(Info_26, TSStringTable_45);
    }
    if (!((AllocSites_46 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__nl_2_p_0();
      ll_backend__layout_out__output_alloc_sites_array_4_p_0(Info_26, AllocSites_46);
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_alloc_sites_array_4_p_0_1(
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

    ll_backend__layout_out__output_alloc_site_slot_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_18));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_alloc_sites_array_4_p_0(
  MR_Word Info_5,
  MR_Word AllocSites_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumAllocSitess_9;
    MR_Word Var_21;
    MR_String Var_60;
    MR_Box conv2_Var_10;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;

    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 68U), (MR_Integer) 1);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0), AllocSites_6, &NumAllocSitess_9);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumAllocSitess_9, &Var_60);
    mercury__io__write_string_3_p_0(Var_60);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[12]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__layout_out__output_alloc_sites_array_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, AllocSites_6, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_array_4_p_0_1(
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

    ll_backend__layout_out__output_threadscope_string_table_slot_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_13));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_array_4_p_0(
  MR_Word Info_5,
  MR_Word TSStringTable_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumStrings_9;
    MR_Word Var_23;
    MR_String Var_62;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_25_25;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TSStringTable_6, &NumStrings_9);
    mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_THREADSCOPE\n");
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 64U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumStrings_9, &Var_62);
    mercury__io__write_string_3_p_0(Var_62);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[11]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__layout_out__output_threadscope_string_table_array_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, TSStringTable_6, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
    mercury__io__write_string_3_p_0((MR_String) "};\n#endif\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_exec_traces_array_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_40;

    ll_backend__layout_out__output_exec_trace_slot_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_40);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_40));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_exec_traces_array_4_p_0(
  MR_Word Info_5,
  MR_Word ExecTraces_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumExecTraces_9;
    MR_Word Var_21;
    MR_String Var_60;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0), ExecTraces_6, &NumExecTraces_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 60U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumExecTraces_9, &Var_60);
    mercury__io__write_string_3_p_0(Var_60);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[10]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__layout_out__output_exec_traces_array_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, ExecTraces_6, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_event_layout_array_4_p_0(
  MR_Word Info_5,
  MR_Word ProcEventLayoutSlotNames_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumProcEventLayoutSlotNames_9;
    MR_String Var_50;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), ProcEventLayoutSlotNames_6, &NumProcEventLayoutSlotNames_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 56U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumProcEventLayoutSlotNames_9, &Var_50);
    mercury__io__write_string_3_p_0(Var_50);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    ll_backend__layout_out__output_layout_slots_in_vector_4_p_0(ModuleName_8, ProcEventLayoutSlotNames_6);
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_layout_slot_chunk_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_layout_slot_chunk_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__layout_out__output_layout_slot_chunk_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word SlotName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word SlotNames_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArrayName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotName_10, (MR_Integer) 0))));
      MR_Integer SlotNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SlotName_10, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArrayName_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2;

            ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, HeadVar__1_1, SlotName_10);
            mercury__io__write_string_3_p_0((MR_String) ",\n");
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = SlotNames_11;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArrayName_13, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (Var_74) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  MR_Word RevTailSlotNums_62;
                  MR_Word OtherArraySlotNames_63;
                  MR_Word TailSlotNums_64;
                  MR_Word SlotNums_65;
                  MR_Word SlotNumChunks_67;
                  MR_Word Var_69;
                  MR_Box conv0_STATE_VARIABLE_IO_34_70;
                  MR_Word next_value_of_HeadVar__2_2;

                  ll_backend__layout_out__find_slots_in_same_array_5_p_0(ArrayName_13, SlotNames_11, (MR_Word) ((MR_Unsigned) 0U), &RevTailSlotNums_62, &OtherArraySlotNames_63);
                  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevTailSlotNums_62, &TailSlotNums_64);
                  {
                    SlotNums_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SlotNums_65, 0) = ((MR_Box) (SlotNum_14));
                    MR_hl_field(MR_mktag(1), SlotNums_65, 1) = ((MR_Box) (TailSlotNums_64));
                  }
                  mercury__list__chunk_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SlotNums_65, (MR_Integer) 10, &SlotNumChunks_67);
                  {
                    Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) ((MR_String) "MR_lvar_label_layout_refs"));
                    MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (HeadVar__1_1));
                  }
                  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__layout_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, SlotNumChunks_67, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_34_70);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__2_2 = OtherArraySlotNames_63;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  continue;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word RevTailSlotNums_16;
                  MR_Word OtherArraySlotNames_17;
                  MR_Word TailSlotNums_18;
                  MR_Word SlotNums_19;
                  MR_Word SlotNumChunks_21;
                  MR_Word Var_33;
                  MR_Box conv1_STATE_VARIABLE_IO_34_34;
                  MR_Word next_value_of_HeadVar__2_2;

                  ll_backend__layout_out__find_slots_in_same_array_5_p_0(ArrayName_13, SlotNames_11, (MR_Word) ((MR_Unsigned) 0U), &RevTailSlotNums_16, &OtherArraySlotNames_17);
                  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevTailSlotNums_16, &TailSlotNums_18);
                  {
                    SlotNums_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SlotNums_19, 0) = ((MR_Box) (SlotNum_14));
                    MR_hl_field(MR_mktag(1), SlotNums_19, 1) = ((MR_Box) (TailSlotNums_18));
                  }
                  mercury__list__chunk_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SlotNums_19, (MR_Integer) 10, &SlotNumChunks_21);
                  {
                    Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) ((MR_String) "MR_no_var_label_layout_refs"));
                    MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (HeadVar__1_1));
                  }
                  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__layout_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, SlotNumChunks_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_34);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__2_2 = OtherArraySlotNames_17;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word RevTailSlotNums_46;
                  MR_Word OtherArraySlotNames_47;
                  MR_Word TailSlotNums_48;
                  MR_Word SlotNums_49;
                  MR_Word SlotNumChunks_51;
                  MR_Word Var_53;
                  MR_Box conv2_STATE_VARIABLE_IO_34_54;
                  MR_Word next_value_of_HeadVar__2_2;

                  ll_backend__layout_out__find_slots_in_same_array_5_p_0(ArrayName_13, SlotNames_11, (MR_Word) ((MR_Unsigned) 0U), &RevTailSlotNums_46, &OtherArraySlotNames_47);
                  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), RevTailSlotNums_46, &TailSlotNums_48);
                  {
                    SlotNums_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SlotNums_49, 0) = ((MR_Box) (SlotNum_14));
                    MR_hl_field(MR_mktag(1), SlotNums_49, 1) = ((MR_Box) (TailSlotNums_48));
                  }
                  mercury__list__chunk_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SlotNums_49, (MR_Integer) 10, &SlotNumChunks_51);
                  {
                    Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[1]));
                    MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) ((MR_String) "MR_svar_label_layout_refs"));
                    MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (HeadVar__1_1));
                  }
                  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__layout_out_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, SlotNumChunks_51, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_34_54);
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__2_2 = OtherArraySlotNames_47;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
ll_backend__layout_out__output_layout_slot_addr_5_p_0(
  MR_Word UseMacro_6,
  MR_String ModuleName_7,
  MR_Word SlotName_8)
{
  {
    MR_Word ArrayName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotName_8, (MR_Integer) 0))));
    MR_Integer SlotNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SlotName_8, (MR_Integer) 1))));
    MR_String Var_25;

    mercury__io__write_string_3_p_0((MR_String) "&");
    ll_backend__layout_out__output_layout_array_name_5_p_0(UseMacro_6, ModuleName_7, ArrayName_10);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), SlotNum_11, &Var_25);
    mercury__io__write_string_3_p_0(Var_25);
    mercury__io__write_string_3_p_0((MR_String) "]");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_array_4_p_0_1(
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

    ll_backend__layout_out__output_table_io_entry_slot_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_19));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_array_4_p_0(
  MR_Word Info_5,
  MR_Word TableIoEntries_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumTableIoEntries_9;
    MR_Word Var_21;
    MR_String Var_60;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0), TableIoEntries_6, &NumTableIoEntries_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 52U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumTableIoEntries_9, &Var_60);
    mercury__io__write_string_3_p_0(Var_60);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[9]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__layout_out__output_table_io_entry_array_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, TableIoEntries_6, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_body_bytecodes_array_4_p_0(
  MR_Word Info_5,
  MR_Word Bytecodes_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumBytecodes_9;
    MR_Word AutoComments_11;
    MR_String Var_77;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Bytecodes_6, &NumBytecodes_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 48U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumBytecodes_9, &Var_77);
    mercury__io__write_string_3_p_0(Var_77);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    AutoComments_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(Bytecodes_6, (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(Bytecodes_6, (MR_Integer) 0);
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_var_names_array_4_p_0(
  MR_Word Info_5,
  MR_Word VarNames_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumVarNames_9;
    MR_Word AutoComments_11;
    MR_String Var_77;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNames_6, &NumVarNames_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 44U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumVarNames_9, &Var_77);
    mercury__io__write_string_3_p_0(Var_77);
    mercury__io__write_string_3_p_0((MR_String) "] = {");
    AutoComments_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(VarNames_6, (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(VarNames_6, (MR_Integer) 0);
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_head_var_nums_array_4_p_0(
  MR_Word Info_5,
  MR_Word HeadVarNums_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumHeadVarNums_9;
    MR_Word AutoComments_11;
    MR_String Var_77;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVarNums_6, &NumHeadVarNums_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 40U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumHeadVarNums_9, &Var_77);
    mercury__io__write_string_3_p_0(Var_77);
    mercury__io__write_string_3_p_0((MR_String) "] = {");
    AutoComments_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(HeadVarNums_6, (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(HeadVarNums_6, (MR_Integer) 0);
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_statics_array_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_30;

    ll_backend__layout_out__output_proc_static_slot_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_30);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_30));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_statics_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word ProcStatics_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumProcStatics_9;
    MR_Word Var_21;
    MR_String Var_60;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0), ProcStatics_6, &NumProcStatics_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 36U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumProcStatics_9, &Var_60);
    mercury__io__write_string_3_p_0(Var_60);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[8]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__layout_out__output_proc_statics_array_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, ProcStatics_6, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_dynamic_array_4_p_0(
  MR_Word Info_5,
  MR_Integer NumCoveragePoints_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_String Var_45;

    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 32U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumCoveragePoints_6, &Var_45);
    mercury__io__write_string_3_p_0(Var_45);
    mercury__io__write_string_3_p_0((MR_String) "];\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_array_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_16;

    ll_backend__layout_out__output_proc_static_cp_static_slot_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_16));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_array_5_p_0(
  MR_Word Info_6,
  MR_Word CoveragePoints_7,
  MR_Integer NumCoveragePoints_8)
{
  {
    MR_String ModuleName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))));
    MR_Word AutoComments_12;
    MR_Word Var_23;
    MR_String Var_85;
    MR_Box conv2_Var_13;
    MR_Box conv1_STATE_VARIABLE_IO_25_25;

    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_10, (MR_Word) ((MR_Unsigned) 28U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumCoveragePoints_8, &Var_85);
    mercury__io__write_string_3_p_0(Var_85);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    AutoComments_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[7]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__layout_out__output_proc_static_cp_static_array_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (AutoComments_12));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, CoveragePoints_7, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25_25);
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv3_STATE_VARIABLE_Slot_21;

    ll_backend__layout_out__output_call_site_static_slot_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Slot_21);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Slot_21));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DeclSet_33;

    ll_backend__layout_out__output_call_site_static_slot_decls_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DeclSet_33);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DeclSet_33));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_6_p_0(
  MR_Word Info_7,
  MR_Word CallSiteStatics_8,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  {
    MR_String ModuleName_11;
    MR_Integer NumCallSiteStatics_13;
    MR_Word Var_19;
    MR_Word Var_30;
    MR_String Var_75;
    MR_Box conv2_STATE_VARIABLE_DeclSet_16;
    MR_Box conv1_STATE_VARIABLE_IO_21_21;
    MR_Box conv5_Var_14;
    MR_Box conv4_STATE_VARIABLE_IO_32_32;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ll_backend__layout_out__output_call_site_static_array_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Info_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), (MR_Word) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, CallSiteStatics_8, ((MR_Box) (STATE_VARIABLE_DeclSet_0_15)), &conv2_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_21_21);
    *STATE_VARIABLE_DeclSet_16 = ((MR_Word) (conv2_STATE_VARIABLE_DeclSet_16));
    mercury__io__nl_2_p_0();
    ModuleName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_11, (MR_Word) ((MR_Unsigned) 24U), (MR_Integer) 1);
    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), CallSiteStatics_8, &NumCallSiteStatics_13);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumCallSiteStatics_13, &Var_75);
    mercury__io__write_string_3_p_0(Var_75);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[6]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ll_backend__layout_out__output_call_site_static_array_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Info_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, CallSiteStatics_8, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_14, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_32_32);
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layouts_array_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_33;

    ll_backend__layout_out__output_long_var_label_layout_slot_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_33);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_33));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layouts_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word LabelLayouts_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumLabelLayouts_9;
    MR_Word Var_22;
    MR_String Var_61;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_24_24;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0), LabelLayouts_6, &NumLabelLayouts_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_4[2])), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumLabelLayouts_9, &Var_61);
    mercury__io__write_string_3_p_0(Var_61);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ll_backend__layout_out__output_long_var_label_layouts_array_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, LabelLayouts_6, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_24);
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layouts_array_defn_4_p_0_1(
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

    ll_backend__layout_out__output_short_var_label_layout_slot_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_32);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_32));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layouts_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word LabelLayouts_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumLabelLayouts_9;
    MR_Word Var_22;
    MR_String Var_61;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_24_24;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0), LabelLayouts_6, &NumLabelLayouts_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_4[1])), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumLabelLayouts_9, &Var_61);
    mercury__io__write_string_3_p_0(Var_61);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ll_backend__layout_out__output_short_var_label_layouts_array_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, LabelLayouts_6, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_24);
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layouts_array_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_23;

    ll_backend__layout_out__output_no_var_label_layout_slot_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_23));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layouts_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word LabelLayouts_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumLabelLayouts_9;
    MR_Word Var_22;
    MR_String Var_61;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_24_24;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0), LabelLayouts_6, &NumLabelLayouts_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_4[0])), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumLabelLayouts_9, &Var_61);
    mercury__io__write_string_3_p_0(Var_61);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ll_backend__layout_out__output_no_var_label_layouts_array_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, LabelLayouts_6, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_24);
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_events_array_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_17;

    ll_backend__layout_out__output_user_event_slot_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_17));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_events_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word UserEvents_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumUserEvents_9;
    MR_Word Var_21;
    MR_String Var_60;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0), UserEvents_6, &NumUserEvents_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 16U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumUserEvents_9, &Var_60);
    mercury__io__write_string_3_p_0(Var_60);
    mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__layout_out__output_user_events_array_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Info_5));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, UserEvents_6, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_event_var_nums_array_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_Slot_11;

    ll_backend__layout_out__output_maybe_var_num_slot_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_11));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_event_var_nums_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word MaybeVarNums_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumMaybeVarNums_9;
    MR_String Var_60;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_23_23;

    mercury__list__length_2_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_1[1]), MaybeVarNums_6, &NumMaybeVarNums_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 20U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumMaybeVarNums_9, &Var_60);
    mercury__io__write_string_3_p_0(Var_60);
    mercury__io__write_string_3_p_0((MR_String) "] = {");
    mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout_out_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ll_backend__layout_out_scalar_common_2[3]), MaybeVarNums_6, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
    mercury__io__write_string_3_p_0((MR_String) "};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_long_locns_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word LongLocns_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumLongLocns_9;
    MR_Word AutoComments_11;
    MR_String Var_77;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LongLocns_6, &NumLongLocns_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 12U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumLongLocns_9, &Var_77);
    mercury__io__write_string_3_p_0(Var_77);
    mercury__io__write_string_3_p_0((MR_String) "] = {");
    AutoComments_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(LongLocns_6, (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(LongLocns_6, (MR_Integer) 0);
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_short_locns_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word ShortLocns_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumShortLocns_9;
    MR_Word AutoComments_11;
    MR_String Var_77;

    mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ShortLocns_6, &NumShortLocns_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 8U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumShortLocns_9, &Var_77);
    mercury__io__write_string_3_p_0(Var_77);
    mercury__io__write_string_3_p_0((MR_String) "] = {");
    AutoComments_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(ShortLocns_6, (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(ShortLocns_6, (MR_Integer) 0);
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_hlds_var_nums_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word VarNums_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumVarNums_9;
    MR_Word AutoComments_11;
    MR_String Var_77;

    ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_111_117_116_101_114_95_108_111_111_112_95_95_91_49_93_95_48_3_p_0(VarNums_6, (MR_Integer) 0, &NumVarNums_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 4U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumVarNums_9, &Var_77);
    mercury__io__write_string_3_p_0(Var_77);
    mercury__io__write_string_3_p_0((MR_String) "] = {");
    AutoComments_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(VarNums_6, (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(VarNums_6, (MR_Integer) 0);
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
  }
}

static void MR_CALL 
ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Slot_0_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word LeftOverVarNums_14;
      MR_Integer STATE_VARIABLE_Slot_19_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_Slot_0_2;

      ll_backend__layout_out__output_upto_n_numbers_in_vector_noac_7_p_0(HeadVar__1_1, (MR_Integer) 1000, &LeftOverVarNums_14, STATE_VARIABLE_Slot_0_2, &STATE_VARIABLE_Slot_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = LeftOverVarNums_14;
      next_value_of_STATE_VARIABLE_Slot_0_2 = STATE_VARIABLE_Slot_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Slot_0_2 = next_value_of_STATE_VARIABLE_Slot_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_upto_n_numbers_in_vector_noac_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Slot_0_4,
  MR_Integer * STATE_VARIABLE_Slot_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Slot_5 = STATE_VARIABLE_Slot_0_4;
    }
    else
    {
      MR_Integer VarNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word VarNums_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (N_2 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_Slot_26_26;
        MR_Integer Var_28;
        MR_String Var_52;
        MR_Integer Var_39;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Integer next_value_of_N_2;
        MR_Integer next_value_of_STATE_VARIABLE_Slot_0_4;

        Var_39 = mercury__int__mod_2_f_0(STATE_VARIABLE_Slot_0_4, (MR_Integer) 10);
        succeeded = (Var_39 == (MR_Integer) 0);
        if (succeeded)
          mercury__io__nl_2_p_0();
        else
        {
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), VarNum_15, &Var_52);
        mercury__io__write_string_3_p_0(Var_52);
        mercury__io__write_string_3_p_0((MR_String) ",");
        STATE_VARIABLE_Slot_26_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_4 + (MR_Unsigned) (MR_Integer) 1);
        Var_28 = (MR_Integer) ((MR_Unsigned) N_2 - (MR_Unsigned) (MR_Integer) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = VarNums_16;
        next_value_of_N_2 = Var_28;
        next_value_of_STATE_VARIABLE_Slot_0_4 = STATE_VARIABLE_Slot_26_26;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        N_2 = next_value_of_N_2;
        STATE_VARIABLE_Slot_0_4 = next_value_of_STATE_VARIABLE_Slot_0_4;
        continue;
      }
      else
      {
        *HeadVar__3_3 = HeadVar__1_1;
        *STATE_VARIABLE_Slot_5 = STATE_VARIABLE_Slot_0_4;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Slot_0_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word LeftOverVarNums_14;
      MR_Integer STATE_VARIABLE_Slot_19_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_Slot_0_2;

      ll_backend__layout_out__output_upto_n_numbers_in_vector_ac_7_p_0(HeadVar__1_1, (MR_Integer) 1000, &LeftOverVarNums_14, STATE_VARIABLE_Slot_0_2, &STATE_VARIABLE_Slot_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = LeftOverVarNums_14;
      next_value_of_STATE_VARIABLE_Slot_0_2 = STATE_VARIABLE_Slot_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Slot_0_2 = next_value_of_STATE_VARIABLE_Slot_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_upto_n_numbers_in_vector_ac_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word * HeadVar__3_3,
  MR_Integer STATE_VARIABLE_Slot_0_4,
  MR_Integer * STATE_VARIABLE_Slot_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Slot_5 = STATE_VARIABLE_Slot_0_4;
    }
    else
    {
      MR_Integer VarNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word VarNums_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (N_2 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_Slot_26_26;
        MR_Integer Var_28;
        MR_String Var_67;
        MR_Integer Var_39;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Integer next_value_of_N_2;
        MR_Integer next_value_of_STATE_VARIABLE_Slot_0_4;

        Var_39 = mercury__int__mod_2_f_0(STATE_VARIABLE_Slot_0_4, (MR_Integer) 10);
        succeeded = (Var_39 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_String Var_58;

          mercury__io__write_string_3_p_0((MR_String) "\n/* slots ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), STATE_VARIABLE_Slot_0_4, &Var_58);
          mercury__io__write_string_3_p_0(Var_58);
          mercury__io__write_string_3_p_0((MR_String) "+ */ ");
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), VarNum_15, &Var_67);
        mercury__io__write_string_3_p_0(Var_67);
        mercury__io__write_string_3_p_0((MR_String) ",");
        STATE_VARIABLE_Slot_26_26 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Slot_0_4 + (MR_Unsigned) (MR_Integer) 1);
        Var_28 = (MR_Integer) ((MR_Unsigned) N_2 - (MR_Unsigned) (MR_Integer) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = VarNums_16;
        next_value_of_N_2 = Var_28;
        next_value_of_STATE_VARIABLE_Slot_0_4 = STATE_VARIABLE_Slot_26_26;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        N_2 = next_value_of_N_2;
        STATE_VARIABLE_Slot_0_4 = next_value_of_STATE_VARIABLE_Slot_0_4;
        continue;
      }
      else
      {
        *HeadVar__3_3 = HeadVar__1_1;
        *STATE_VARIABLE_Slot_5 = STATE_VARIABLE_Slot_0_4;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pseudo_type_info_array_defn_4_p_0(
  MR_Word Info_5,
  MR_Word PTIs_6)
{
  {
    MR_String ModuleName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
    MR_Integer NumPTIs_9;
    MR_Word AutoComments_11;
    MR_String Var_79;

    ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_111_117_116_101_114_95_108_111_111_112_95_95_91_49_93_95_48_3_p_0(PTIs_6, (MR_Integer) 0, &NumPTIs_9);
    ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ModuleName_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__layout_out_scalar_common_4[3]), NumPTIs_9, &Var_79);
    mercury__io__write_string_3_p_0(Var_79);
    mercury__io__write_string_3_p_0((MR_String) "] = {");
    AutoComments_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 17)) & (MR_Integer) 1);
    switch (AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Var_13;

          ll_backend__layout_out__output_ptis_outer_loop_noac_6_p_0(Info_5, PTIs_6, (MR_Integer) 0, &Var_13);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_12;

          ll_backend__layout_out__output_ptis_outer_loop_ac_6_p_0(Info_5, PTIs_6, (MR_Integer) 0, &Var_12);
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Length_3 = STATE_VARIABLE_Length_0_2;
    else
    {
      MR_Word LeftOver_11;
      MR_Integer STATE_VARIABLE_Length_15_15;
      MR_Word T_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_Length_18_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Length_0_2 + (MR_Unsigned) (MR_Integer) 1);
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_Length_0_2;

      ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_105_110_110_101_114_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(T_23, (MR_Integer) ((MR_Unsigned) (MR_Integer) 5000 - (MR_Unsigned) (MR_Integer) 1), &LeftOver_11, STATE_VARIABLE_Length_18_30, &STATE_VARIABLE_Length_15_15);
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
        MR_Integer STATE_VARIABLE_Length_18_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Length_0_4 + (MR_Unsigned) (MR_Integer) 1);
        MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) Count_2 - (MR_Unsigned) (MR_Integer) 1);
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
ll_backend__layout_out__output_ptis_outer_loop_noac_6_p_0_1(
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

    ll_backend__layout_out__output_pti_chunk_noac_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_13));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_noac_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Slot_0_3,
  MR_Integer * STATE_VARIABLE_Slot_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Slot_4 = STATE_VARIABLE_Slot_0_3;
    else
    {
      MR_Word StartPTIs_20;
      MR_Word LaterPTIs_21;
      MR_Word PTIChunks_22;
      MR_Word Var_29;
      MR_Integer STATE_VARIABLE_Slot_30_30;
      MR_Box conv2_STATE_VARIABLE_Slot_30_30;
      MR_Box conv1_STATE_VARIABLE_IO_31_31;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_Slot_0_3;

      mercury__list__split_upto_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Integer) 1000, HeadVar__2_2, &StartPTIs_20, &LaterPTIs_21);
      mercury__list__chunk_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), StartPTIs_20, (MR_Integer) 10, &PTIChunks_22);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ll_backend__layout_out__output_ptis_outer_loop_noac_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (HeadVar__1_1));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout_out_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, PTIChunks_22, ((MR_Box) (STATE_VARIABLE_Slot_0_3)), &conv2_STATE_VARIABLE_Slot_30_30, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31);
      STATE_VARIABLE_Slot_30_30 = ((MR_Integer) (conv2_STATE_VARIABLE_Slot_30_30));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = LaterPTIs_21;
      next_value_of_STATE_VARIABLE_Slot_0_3 = STATE_VARIABLE_Slot_30_30;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Slot_0_3 = next_value_of_STATE_VARIABLE_Slot_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_ac_6_p_0_1(
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

    ll_backend__layout_out__output_pti_chunk_ac_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Slot_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Slot_13));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_ac_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_Slot_0_3,
  MR_Integer * STATE_VARIABLE_Slot_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Slot_4 = STATE_VARIABLE_Slot_0_3;
    else
    {
      MR_Word StartPTIs_20;
      MR_Word LaterPTIs_21;
      MR_Word PTIChunks_22;
      MR_Word Var_29;
      MR_Integer STATE_VARIABLE_Slot_30_30;
      MR_Box conv2_STATE_VARIABLE_Slot_30_30;
      MR_Box conv1_STATE_VARIABLE_IO_31_31;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_Slot_0_3;

      mercury__list__split_upto_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Integer) 1000, HeadVar__2_2, &StartPTIs_20, &LaterPTIs_21);
      mercury__list__chunk_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), StartPTIs_20, (MR_Integer) 10, &PTIChunks_22);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ll_backend__layout_out__output_ptis_outer_loop_ac_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (HeadVar__1_1));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&ll_backend__layout_out_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, PTIChunks_22, ((MR_Box) (STATE_VARIABLE_Slot_0_3)), &conv2_STATE_VARIABLE_Slot_30_30, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31);
      STATE_VARIABLE_Slot_30_30 = ((MR_Integer) (conv2_STATE_VARIABLE_Slot_30_30));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = LaterPTIs_21;
      next_value_of_STATE_VARIABLE_Slot_0_3 = STATE_VARIABLE_Slot_30_30;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Slot_0_3 = next_value_of_STATE_VARIABLE_Slot_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_array_decls_22_p_0(
  MR_Word Info_23,
  MR_Word PseudoTypeInfos_24,
  MR_Word HLDSVarNums_25,
  MR_Word ShortLocns_26,
  MR_Word LongLocns_27,
  MR_Word UserEventVarNums_28,
  MR_Word UserEvents_29,
  MR_Word NoVarLabelLayouts_30,
  MR_Word SVarLabelLayouts_31,
  MR_Word LVarLabelLayouts_32,
  MR_Word CallSiteStatics_33,
  MR_Word CoveragePoints_34,
  MR_Word ProcStatics_35,
  MR_Word ProcHeadVarNums_36,
  MR_Word ProcVarNames_37,
  MR_Word ProcBodyBytecodes_38,
  MR_Word TableIoEntries_39,
  MR_Word ProcEventLayouts_40,
  MR_Word ExecTraces_41,
  MR_Word AllocSites_42)
{
  {
    MR_String MangledModuleName_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_23, (MR_Integer) 1))));

    if (!((PseudoTypeInfos_24 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((HLDSVarNums_25 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 4U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((ShortLocns_26 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 8U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((LongLocns_27 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 12U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((UserEventVarNums_28 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 20U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((UserEvents_29 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 16U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((NoVarLabelLayouts_30 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_4[0])), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((SVarLabelLayouts_31 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_4[1])), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((LVarLabelLayouts_32 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_4[2])), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((CallSiteStatics_33 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 24U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((CoveragePoints_34 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 28U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 32U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((ProcStatics_35 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 36U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((ProcHeadVarNums_36 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 40U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((ProcVarNames_37 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 44U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((ProcBodyBytecodes_38 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 48U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((TableIoEntries_39 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 52U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((ExecTraces_41 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 60U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((ProcEventLayouts_40 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 56U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
    if (!((AllocSites_42 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(MangledModuleName_44, (MR_Word) ((MR_Unsigned) 68U), (MR_Integer) 0);
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(
  MR_String ModuleName_6,
  MR_Word Name_7,
  MR_Word BeingDefined_8)
{
  {
    switch (BeingDefined_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "static ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_STATIC_LINKAGE ");
        }
        break;
    }
    switch (MR_tag((MR_Word) Name_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Name_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "const MR_PseudoTypeInfo ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "const MR_HLDSVarNum ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "const MR_ShortLval ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "const MR_LongLval ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "const struct MR_UserEvent_Struct ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "const MR_HLDSVarNum ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "const MR_CallSiteStatic ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "const MR_CoveragePointStatic ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_ProcStatic ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 10:
            {
              mercury__io__write_string_3_p_0((MR_String) "const MR_uint_least16_t ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 11:
            {
              mercury__io__write_string_3_p_0((MR_String) "const MR_uint_least32_t ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 12:
            {
              mercury__io__write_string_3_p_0((MR_String) "const MR_uint_least8_t ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 13:
            {
              mercury__io__write_string_3_p_0((MR_String) "const MR_TableIoEntry ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 14:
            {
              mercury__io__write_string_3_p_0((MR_String) "const MR_LabelLayout *");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 15:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_STATIC_CODE_CONST MR_ExecTrace ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 16:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_Threadscope_String ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
          case (MR_Integer) 17:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_AllocSiteInfo ");
              ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Name_7, (MR_Integer) 0))) & (MR_Integer) 3);

          switch (Var_103) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_LabelLayout ");
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_LabelLayoutNoVarInfo ");
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_LabelLayoutShort ");
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ModuleName_6, Name_7);
              }
              break;
          }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_array_name_5_p_0(
  MR_Word UseMacro_6,
  MR_String ModuleName_7,
  MR_Word ArrayName_8)
{
  switch (UseMacro_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        switch (MR_tag((MR_Word) ArrayName_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ArrayName_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__pseudo_type_info_array__");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__hlds_var_nums_array__");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__short_locns_array__");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__long_locns_array__");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__user_event_layouts_array__");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__user_event_var_nums_array__");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_call_sites_array__");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_cp_statics_array__");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_cp_dynamics_array__");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_statics_array__");
                }
                break;
              case (MR_Integer) 10:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_head_var_nums_array__");
                }
                break;
              case (MR_Integer) 11:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_var_names_array__");
                }
                break;
              case (MR_Integer) 12:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_body_bytecodes_array__");
                }
                break;
              case (MR_Integer) 13:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_table_io_entries_array__");
                }
                break;
              case (MR_Integer) 14:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_event_layouts_array__");
                }
                break;
              case (MR_Integer) 15:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_exec_traces_array__");
                }
                break;
              case (MR_Integer) 16:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__threadscope_string_table_array__");
                }
                break;
              case (MR_Integer) 17:
                {
                  mercury__io__write_string_3_p_0((MR_String) "mercury_data__alloc_sites_array__");
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_108 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArrayName_8, (MR_Integer) 0))) & (MR_Integer) 3);

              switch (Var_108) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "mercury_data__lvar_label_layout_array__");
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "mercury_data__no_var_label_layout_array__");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "mercury_data__svar_label_layout_array__");
                  }
                  break;
              }
            }
            break;
        }
        mercury__io__write_string_3_p_0(ModuleName_7);
      }
      break;
    case (MR_Integer) 1:
      {
        switch (MR_tag((MR_Word) ArrayName_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ArrayName_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_pseudo_type_infos");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_hlds_var_nums");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_short_locns");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_long_locns");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_user_event_layouts");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_user_event_var_nums");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_proc_call_sites");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_proc_cp_statics");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_proc_cp_dynamics");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_proc_statics");
                }
                break;
              case (MR_Integer) 10:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_proc_head_var_nums");
                }
                break;
              case (MR_Integer) 11:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_proc_var_names");
                }
                break;
              case (MR_Integer) 12:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_proc_body_bytecodes");
                }
                break;
              case (MR_Integer) 13:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_proc_table_io_entries");
                }
                break;
              case (MR_Integer) 14:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_proc_event_layouts");
                }
                break;
              case (MR_Integer) 15:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_proc_exec_traces");
                }
                break;
              case (MR_Integer) 16:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_threadscope_strings");
                }
                break;
              case (MR_Integer) 17:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_alloc_sites");
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_109 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArrayName_8, (MR_Integer) 0))) & (MR_Integer) 3);

              switch (Var_109) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_lvar_label_layouts");
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_no_var_label_layouts");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_svar_label_layouts");
                  }
                  break;
              }
            }
            break;
        }
        mercury__io__write_string_3_p_0((MR_String) "(");
        mercury__io__write_string_3_p_0(ModuleName_7);
        mercury__io__write_string_3_p_0((MR_String) ")");
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
