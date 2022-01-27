/*
** Automatically generated from `layout_out.m'
** by the Mercury compiler,
** version rotd-2016-02-26
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


/* :- module ll_backend.layout_out. */
/* :- implementation. */

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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__layout_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__layout_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

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

static MR_bool MR_CALL 
ll_backend__layout_out____Unify____being_defined_0_0_10001(
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2);

static void MR_CALL 
ll_backend__layout_out____Compare____being_defined_0_0_10001(
  MR_Box * ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box ll_backend__layout_out__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__layout_out____Unify____use_layout_macro_0_0_10001(
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2);

static void MR_CALL 
ll_backend__layout_out____Compare____use_layout_macro_0_0_10001(
  MR_Box * ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_105_110_110_101_114_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Integer ll_backend__layout_out__Count_2,
  MR_Word * ll_backend__layout_out__HeadVar__3_3,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Length_0_4,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Length_5);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_111_117_116_101_114_95_108_111_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Length_0_2,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Length_3);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_109_111_100_117_108_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word ll_backend__layout_out__ModuleName_8,
  MR_Word ll_backend__layout_out__HeadVar__3_3,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_16,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_17);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_115_108_111_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word ll_backend__layout_out__AllocSite_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_17,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_18);

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_5_p_0(
  MR_String ll_backend__layout_out__ModuleName_7,
  MR_Word ll_backend__layout_out__BasicLabelLayout_8);

static void MR_CALL 
ll_backend__layout_out__quote_and_write_string_3_p_0(
  MR_String ll_backend__layout_out__String_4);

static void MR_CALL 
ll_backend__layout_out__output_layout_name_in_vector_4_p_0(
  MR_String ll_backend__layout_out__Prefix_5,
  MR_Word ll_backend__layout_out__Name_6);

static void MR_CALL 
ll_backend__layout_out__output_upto_n_numbers_in_vector_noac_7_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Integer ll_backend__layout_out__N_2,
  MR_Word * ll_backend__layout_out__HeadVar__3_3,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_4,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_5);

static void MR_CALL 
ll_backend__layout_out__output_upto_n_numbers_in_vector_ac_7_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Integer ll_backend__layout_out__N_2,
  MR_Word * ll_backend__layout_out__HeadVar__3_3,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_4,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_5);

static void MR_CALL 
ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_2);

static void MR_CALL 
ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_2);

static void MR_CALL 
ll_backend__layout_out__output_layout_slot_chunk_5_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_layout_slot_chunk_5_p_0(
  MR_String ll_backend__layout_out__Macro_6,
  MR_String ll_backend__layout_out__ModuleName_7,
  MR_Word ll_backend__layout_out__SlotNums_8);

static void MR_CALL 
ll_backend__layout_out__find_slots_in_same_array_5_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_0_3,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_4,
  MR_Word * ll_backend__layout_out__HeadVar__5_5);

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_3(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0(
  MR_String ll_backend__layout_out__HeadVar__1_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_label_layout_vector_defn_9_p_0(
  MR_String ll_backend__layout_out__MangledModuleName_10,
  MR_Word ll_backend__layout_out__ModuleName_11,
  MR_Integer ll_backend__layout_out__FileNum_12,
  MR_Word ll_backend__layout_out__LabelSlots_13,
  MR_Word * ll_backend__layout_out__LayoutName_14,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_19,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_20);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_line_number_vector_defn_9_p_0(
  MR_Word ll_backend__layout_out__Info_10,
  MR_Word ll_backend__layout_out__ModuleName_11,
  MR_Integer ll_backend__layout_out__FileNum_12,
  MR_Word ll_backend__layout_out__LineNumbers_13,
  MR_Word * ll_backend__layout_out__LayoutName_14,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_20,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_21);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_data_defn_9_p_0(
  MR_Word ll_backend__layout_out__Info_10,
  MR_Word ll_backend__layout_out__ModuleName_11,
  MR_Integer ll_backend__layout_out__FileNum_12,
  MR_Word ll_backend__layout_out__FileLayout_13,
  MR_Word * ll_backend__layout_out__FileLayoutName_14,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_25,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_26);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_data_defns_9_p_0(
  MR_Word ll_backend__layout_out__Info_1,
  MR_Word ll_backend__layout_out__ModuleName_2,
  MR_Integer ll_backend__layout_out__FileNum_3,
  MR_Word ll_backend__layout_out__HeadVar__4_4,
  MR_Word * ll_backend__layout_out__HeadVar__5_5,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_6,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_7);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0(
  MR_Word ll_backend__layout_out__ModuleName_8,
  MR_Word ll_backend__layout_out__FileLayoutNames_9,
  MR_Word * ll_backend__layout_out__VectorName_10,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__layout_out__output_multi_byte_char_codes_3_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_module_string_table_chars_5_p_0(
  MR_Integer ll_backend__layout_out__CurIndex_6,
  MR_Integer ll_backend__layout_out__Count_7,
  MR_String ll_backend__layout_out__String_8);

static void MR_CALL 
ll_backend__layout_out__output_module_string_table_strings_4_p_0(
  MR_String ll_backend__layout_out__String_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2);

static void MR_CALL 
ll_backend__layout_out__output_event_set_desc_defn_7_p_0(
  MR_Word ll_backend__layout_out__ModuleName_8,
  MR_String ll_backend__layout_out__EventSetDesc_9,
  MR_Word * ll_backend__layout_out__LayoutName_10,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_14);

static void MR_CALL 
ll_backend__layout_out__output_proc_layout_name_in_vector_3_p_0(
  MR_Word ll_backend__layout_out__LayoutName_4);

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0(
  MR_Word ll_backend__layout_out__ModuleName_8,
  MR_Word ll_backend__layout_out__ProcLayoutNames_9,
  MR_Word * ll_backend__layout_out__VectorName_10,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__ModuleName_8,
  MR_Word ll_backend__layout_out__TypesRvalMap_9,
  MR_Word ll_backend__layout_out__EventSpec_10);

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_5_p_0(
  MR_Word ll_backend__layout_out__ModuleName_6,
  MR_Integer ll_backend__layout_out__EventNumber_7,
  MR_Word ll_backend__layout_out__Attr_8);

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_7_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_7_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_7_p_0(
  MR_Word ll_backend__layout_out__ModuleName_8,
  MR_Integer ll_backend__layout_out__EventNumber_9,
  MR_Word ll_backend__layout_out__Attr_10,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_23,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_24);

static void MR_CALL 
ll_backend__layout_out__output_attr_name_3_p_0(
  MR_Word ll_backend__layout_out__Attr_4);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_4(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_3(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0(
  MR_Word ll_backend__layout_out__ModuleName_7,
  MR_Word ll_backend__layout_out__EventSpec_8,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_21,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_22);

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_9_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_9_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_9_p_0(
  MR_Word ll_backend__layout_out__Info_10,
  MR_Word ll_backend__layout_out__EventSpecs_11,
  MR_Word ll_backend__layout_out__ModuleName_12,
  MR_Word ll_backend__layout_out__TypesRvalMap_13,
  MR_Word * ll_backend__layout_out__LayoutName_14,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_17,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_18);

static MR_Integer MR_CALL 
ll_backend__layout_out__layout_version_number_0_f_0(void);

static MR_String MR_CALL 
ll_backend__layout_out__subst_to_name_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__layout_out__ints_to_string_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1);

static MR_Box MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0_3(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1);

static MR_String MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__layout_out__origin_name_2_f_0(
  MR_Word ll_backend__layout_out__Origin_4,
  MR_String ll_backend__layout_out__Name0_5);

static void MR_CALL 
ll_backend__layout_out__output_proc_id_4_p_0(
  MR_Word ll_backend__layout_out__ProcLabel_5,
  MR_Word ll_backend__layout_out__Origin_6);

static void MR_CALL 
ll_backend__layout_out__output_bytecodes_6_p_0(
  MR_Word ll_backend__layout_out__Bytes_7,
  MR_Word * ll_backend__layout_out__BytesLeft_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Seq_0_14,
  MR_Integer ll_backend__layout_out__MaxSeq_10);

static void MR_CALL 
ll_backend__layout_out__output_bytecodes_driver_3_p_0(
  MR_Word ll_backend__layout_out__Bytes_4);

static MR_String MR_CALL 
ll_backend__layout_out__detism_to_c_detism_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_rval_as_addr_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__Rval_6);

static MR_String MR_CALL 
ll_backend__layout_out__proc_layout_kind_to_type_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_layout_decl_5_p_0(
  MR_Word ll_backend__layout_out__LayoutName_6,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_9,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_10);

static void MR_CALL 
ll_backend__layout_out__output_alloc_site_slot_6_p_0(
  MR_Word ll_backend__layout_out___Info_7,
  MR_Word ll_backend__layout_out__AllocSite_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_17,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_18);

static void MR_CALL 
ll_backend__layout_out__output_alloc_sites_array_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_alloc_sites_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__AllocSites_6);

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_String ll_backend__layout_out__String_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_12,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_13);

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_array_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__TSStringTable_6);

static MR_String MR_CALL 
ll_backend__layout_out__eval_method_to_c_string_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__write_maybe_slot_num_3_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1);

static void MR_CALL 
ll_backend__layout_out__output_exec_trace_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__ExecTrace_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_39,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_40);

static void MR_CALL 
ll_backend__layout_out__output_exec_traces_array_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_exec_traces_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__ExecTraces_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_event_layout_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__ProcEventLayoutSlotNames_6);

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__TableIoEntry_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_18,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_19);

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_array_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__TableIoEntries_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_body_bytecodes_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__Bytecodes_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_var_names_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__VarNames_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_head_var_nums_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__HeadVarNums_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__ProcStatic_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_29,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_30);

static void MR_CALL 
ll_backend__layout_out__output_proc_statics_array_defn_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_proc_statics_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__ProcStatics_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_dynamic_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Integer ll_backend__layout_out__NumCoveragePoints_6);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_slot_6_p_0(
  MR_Word ll_backend__layout_out__AutoComments_7,
  MR_Word ll_backend__layout_out__CoveragePoint_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_15,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_16);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_array_5_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_array_5_p_0(
  MR_Word ll_backend__layout_out__Info_6,
  MR_Word ll_backend__layout_out__CoveragePoints_7,
  MR_Integer ll_backend__layout_out__NumCoveragePoints_8);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__CallSiteStatic_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_20,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_21);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_slot_decls_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__CallSiteStatic_8,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_32,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_33);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_6_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_6_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__CallSiteStatics_8,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_16);

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layout_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__LabelLayout_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_32,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_33);

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layouts_array_defn_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layouts_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__LabelLayouts_6);

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layout_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__LabelLayout_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_31,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_32);

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layouts_array_defn_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layouts_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__LabelLayouts_6);

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layout_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__LabelLayout_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_22,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_23);

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layouts_array_defn_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layouts_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__LabelLayouts_6);

static void MR_CALL 
ll_backend__layout_out__output_user_event_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__UserEvent_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_16,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_17);

static void MR_CALL 
ll_backend__layout_out__output_user_events_array_defn_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_user_events_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__UserEvents_6);

static void MR_CALL 
ll_backend__layout_out__output_maybe_var_num_slot_5_p_0(
  MR_Word ll_backend__layout_out__MaybeVarNum_6,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_10,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_11);

static void MR_CALL 
ll_backend__layout_out__output_user_event_var_nums_array_defn_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_user_event_var_nums_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__MaybeVarNums_6);

static void MR_CALL 
ll_backend__layout_out__output_long_locns_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__LongLocns_6);

static void MR_CALL 
ll_backend__layout_out__output_short_locns_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__ShortLocns_6);

static void MR_CALL 
ll_backend__layout_out__output_hlds_var_nums_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__VarNums_6);

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_noac_6_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_noac_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__ChunkPTIs_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_12,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_13);

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_ac_6_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3);

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_ac_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__ChunkPTIs_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_12,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_13);

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_noac_6_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_noac_6_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_3,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_4);

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_ac_6_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5);

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_ac_6_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_3,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_4);

static void MR_CALL 
ll_backend__layout_out__output_pseudo_type_info_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__PTIs_6);


static /* final */ const MR_Box ll_backend__layout_out_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_2[15][3];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_3[2][4];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_4[4][1];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_6[15][9];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_7[2][7];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_8[4][8];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_9[2][5];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_10[3][6];

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_11[1][10];


/* sealed */ struct ll_backend__layout_out__vector_common_type_5_0_s {
  const MR_String ll_backend__layout_out__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct ll_backend__layout_out__vector_common_type_5_0_s ll_backend__layout_out_vector_common_5[24];



static /* final */ const MR_Box ll_backend__layout_out_scalar_common_1[5][2] = {
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
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (&ll_backend__layout_out_scalar_common_8[0])),
    ((MR_Box) (ll_backend__layout_out__output_user_event_var_nums_array_defn_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[0])),
    ((MR_Box) (ll_backend__layout_out__pred_transform_name_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[1])),
    ((MR_Box) (ll_backend__layout_out__pred_transform_name_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_9[0])),
    ((MR_Box) (ll_backend__layout_out__pred_transform_name_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_10[0])),
    ((MR_Box) (ll_backend__layout_out__output_event_spec_components_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_10[1])),
    ((MR_Box) (ll_backend__layout_out__output_event_spec_components_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_10[1])),
    ((MR_Box) (ll_backend__layout_out__output_synth_attr_args_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_10[1])),
    ((MR_Box) (ll_backend__layout_out__output_synth_attr_args_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_8[2])),
    ((MR_Box) (ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_10[2])),
    ((MR_Box) (ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_8[2])),
    ((MR_Box) (ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_10[1])),
    ((MR_Box) (ll_backend__layout_out__output_layout_slot_chunk_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__layout_out_scalar_common_7[1])),
    ((MR_Box) (ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "&"))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_6[15][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&ll_backend__layout_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_8[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__layout_out__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_9[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__layout_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_10[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__layout_out_scalar_common_11[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct ll_backend__layout_out__vector_common_type_5_0_s ll_backend__layout_out_vector_common_5[24] = {
  /* row 0 */   {     (MR_String) "CALL" },
  /* row 1 */   {     (MR_String) "EXIT" },
  /* row 2 */   {     (MR_String) "REDO" },
  /* row 3 */   {     (MR_String) "FAIL" },
  /* row 4 */   {     (MR_String) "TAILREC_CALL" },
  /* row 5 */   {     (MR_String) "EXCEPTION" },
  /* row 6 */   {     (MR_String) "COND" },
  /* row 7 */   {     (MR_String) "THEN" },
  /* row 8 */   {     (MR_String) "ELSE" },
  /* row 9 */   {     (MR_String) "NEG_ENTER" },
  /* row 10 */   {     (MR_String) "NEG_SUCCESS" },
  /* row 11 */   {     (MR_String) "NEG_FAILURE" },
  /* row 12 */   {     (MR_String) "DISJ_FIRST" },
  /* row 13 */   {     (MR_String) "DISJ_LATER" },
  /* row 14 */   {     (MR_String) "SWITCH" },
  /* row 15 */   {     (MR_String) "USER" },
  /* row 16 */   {     (MR_String) "MR_DETISM_DET" },
  /* row 17 */   {     (MR_String) "MR_DETISM_SEMI" },
  /* row 18 */   {     (MR_String) "MR_DETISM_MULTI" },
  /* row 19 */   {     (MR_String) "MR_DETISM_NON" },
  /* row 20 */   {     (MR_String) "MR_DETISM_CCMULTI" },
  /* row 21 */   {     (MR_String) "MR_DETISM_CCNON" },
  /* row 22 */   {     (MR_String) "MR_DETISM_ERRONEOUS" },
  /* row 23 */   {     (MR_String) "MR_DETISM_FAILURE" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__layout_out__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__layout_out__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__layout_out__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_being_defined_0_0 = {
  (MR_String) "not_being_defined",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_being_defined_0_1 = {
  (MR_String) "being_defined",
  (MR_Integer) 1
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__layout_out____Unify____being_defined_0_0_10001)),
  ((MR_Box) (ll_backend__layout_out____Compare____being_defined_0_0_10001)),
  (MR_String) "ll_backend.layout_out",
  (MR_String) "being_defined",
  {     ll_backend__layout_out__ll_backend__layout_out__enum_name_ordered_being_defined_0 },
  {     ll_backend__layout_out__ll_backend__layout_out__enum_value_ordered_being_defined_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__layout_out__ll_backend__layout_out__functor_number_map_being_defined_0
};

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_0 = {
  (MR_String) "do_not_use_layout_macro",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__layout_out__ll_backend__layout_out__enum_functor_desc_use_layout_macro_0_1 = {
  (MR_String) "use_layout_macro",
  (MR_Integer) 1
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__layout_out____Unify____use_layout_macro_0_0_10001)),
  ((MR_Box) (ll_backend__layout_out____Compare____use_layout_macro_0_0_10001)),
  (MR_String) "ll_backend.layout_out",
  (MR_String) "use_layout_macro",
  {     ll_backend__layout_out__ll_backend__layout_out__enum_name_ordered_use_layout_macro_0 },
  {     ll_backend__layout_out__ll_backend__layout_out__enum_value_ordered_use_layout_macro_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__layout_out__ll_backend__layout_out__functor_number_map_use_layout_macro_0
};

static MR_bool MR_CALL 
ll_backend__layout_out____Unify____being_defined_0_0_10001(
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    {
      ll_backend__layout_out__succeeded = ll_backend__layout_out____Unify____being_defined_0_0(((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Word) ll_backend__layout_out__wrapper_arg_2));
    }
    return ll_backend__layout_out__succeeded;
  }
}

static void MR_CALL 
ll_backend__layout_out____Compare____being_defined_0_0_10001(
  MR_Box * ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Word ll_backend__layout_out__conv0_HeadVar__1_1;

    {
      ll_backend__layout_out____Compare____being_defined_0_0(&ll_backend__layout_out__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout_out__wrapper_arg_2), ((MR_Word) ll_backend__layout_out__wrapper_arg_3));
    }
    *ll_backend__layout_out__wrapper_arg_1 = ((MR_Box) (ll_backend__layout_out__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__layout_out____Unify____use_layout_macro_0_0_10001(
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    {
      ll_backend__layout_out__succeeded = ll_backend__layout_out____Unify____use_layout_macro_0_0(((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Word) ll_backend__layout_out__wrapper_arg_2));
    }
    return ll_backend__layout_out__succeeded;
  }
}

static void MR_CALL 
ll_backend__layout_out____Compare____use_layout_macro_0_0_10001(
  MR_Box * ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Word ll_backend__layout_out__conv0_HeadVar__1_1;

    {
      ll_backend__layout_out____Compare____use_layout_macro_0_0(&ll_backend__layout_out__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout_out__wrapper_arg_2), ((MR_Word) ll_backend__layout_out__wrapper_arg_3));
    }
    *ll_backend__layout_out__wrapper_arg_1 = ((MR_Box) (ll_backend__layout_out__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_105_110_110_101_114_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Integer ll_backend__layout_out__Count_2,
  MR_Word * ll_backend__layout_out__HeadVar__3_3,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Length_0_4,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Length_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__layout_out__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__layout_out__STATE_VARIABLE_Length_5 = ll_backend__layout_out__STATE_VARIABLE_Length_0_4;
          }
        else
          {
            MR_Word ll_backend__layout_out__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box ll_backend__layout_out__H_10 = (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0));

            ll_backend__layout_out__succeeded = (ll_backend__layout_out__Count_2 > (MR_Integer) 0);
            if (ll_backend__layout_out__succeeded)
              {
                MR_Integer ll_backend__layout_out__STATE_VARIABLE_Length_18_18 = (ll_backend__layout_out__STATE_VARIABLE_Length_0_4 + (MR_Integer) 1);
                MR_Integer ll_backend__layout_out__V_20_20 = (ll_backend__layout_out__Count_2 - (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__layout_out__HeadVar__1__tmp_copy_1 = ll_backend__layout_out__T_11;
                  MR_Integer ll_backend__layout_out__Count__tmp_copy_2 = ll_backend__layout_out__V_20_20;
                  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Length_0__tmp_copy_4 = ll_backend__layout_out__STATE_VARIABLE_Length_18_18;

                  ll_backend__layout_out__STATE_VARIABLE_Length_0_4 = ll_backend__layout_out__STATE_VARIABLE_Length_0__tmp_copy_4;
                  ll_backend__layout_out__Count_2 = ll_backend__layout_out__Count__tmp_copy_2;
                  ll_backend__layout_out__HeadVar__1_1 = ll_backend__layout_out__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              {
                *ll_backend__layout_out__HeadVar__3_3 = ll_backend__layout_out__HeadVar__1_1;
                *ll_backend__layout_out__STATE_VARIABLE_Length_5 = ll_backend__layout_out__STATE_VARIABLE_Length_0_4;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_111_117_116_101_114_95_108_111_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Length_0_2,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Length_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__layout_out__STATE_VARIABLE_Length_3 = ll_backend__layout_out__STATE_VARIABLE_Length_0_2;
        else
          {
            MR_Word ll_backend__layout_out__LeftOver_11;
            MR_Integer ll_backend__layout_out__STATE_VARIABLE_Length_15_15;
            MR_Word ll_backend__layout_out__T_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__layout_out__STATE_VARIABLE_Length_18_30 = (ll_backend__layout_out__STATE_VARIABLE_Length_0_2 + (MR_Integer) 1);
            MR_Box ll_backend__layout_out__H_22 = (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0));

            {
              ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_105_110_110_101_114_95_108_111_111_112_95_95_91_49_93_95_48_5_p_0(ll_backend__layout_out__T_23, ((MR_Integer) 5000 - (MR_Integer) 1), &ll_backend__layout_out__LeftOver_11, ll_backend__layout_out__STATE_VARIABLE_Length_18_30, &ll_backend__layout_out__STATE_VARIABLE_Length_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__layout_out__HeadVar__1__tmp_copy_1 = ll_backend__layout_out__LeftOver_11;
              MR_Integer ll_backend__layout_out__STATE_VARIABLE_Length_0__tmp_copy_2 = ll_backend__layout_out__STATE_VARIABLE_Length_15_15;

              ll_backend__layout_out__STATE_VARIABLE_Length_0_2 = ll_backend__layout_out__STATE_VARIABLE_Length_0__tmp_copy_2;
              ll_backend__layout_out__HeadVar__1_1 = ll_backend__layout_out__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_109_111_100_117_108_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word ll_backend__layout_out__ModuleName_8,
  MR_Word ll_backend__layout_out__HeadVar__3_3,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_16,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_17)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__StringTable0_10 = (MR_Word) ll_backend__layout_out__HeadVar__3_3;
    MR_Word ll_backend__layout_out__TableName_13;
    MR_Word ll_backend__layout_out__V_29_29;

    {
      ll_backend__layout_out__TableName_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__TableName_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__TableName_13, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_8));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__TableName_13, (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {");
    }
    if ((ll_backend__layout_out__StringTable0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          ll_backend__layout_out__output_module_string_table_chars_5_p_0((MR_Integer) 0, (MR_Integer) 0, (MR_String) "");
        }
      }
    else
      {
        MR_String ll_backend__layout_out__FirstString_50 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__StringTable0_10, (MR_Integer) 0)));
        MR_Word ll_backend__layout_out__Rest_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__StringTable0_10, (MR_Integer) 1)));

        {
          ll_backend__layout_out__output_module_string_table_strings_4_p_0(ll_backend__layout_out__FirstString_50, ll_backend__layout_out__Rest_51);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    {
      ll_backend__layout_out__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_29_29, 1) = ((MR_Box) (ll_backend__layout_out__TableName_13));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_29_29, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_16, ll_backend__layout_out__STATE_VARIABLE_DeclSet_17);
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_115_108_111_116_95_95_91_49_93_95_48_6_p_0(
  MR_Word ll_backend__layout_out__AllocSite_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_17,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_18)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__AllocSite_8, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__AllocSite_8, (MR_Integer) 1)));
    MR_String ll_backend__layout_out__TypeMsg_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__AllocSite_8, (MR_Integer) 2)));
    MR_Integer ll_backend__layout_out__Words_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__AllocSite_8, (MR_Integer) 3)));
    MR_String ll_backend__layout_out__FileName_15;
    MR_Integer ll_backend__layout_out__LineNumber_16;

    {
      mercury__term__context_file_2_p_0(ll_backend__layout_out__Context_12, &ll_backend__layout_out__FileName_15);
    }
    {
      mercury__term__context_line_2_p_0(ll_backend__layout_out__Context_12, &ll_backend__layout_out__LineNumber_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t{ ");
    }
    {
      backend_libs__name_mangle__output_proc_label_3_p_0(ll_backend__layout_out__ProcLabel_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__layout_out__FileName_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__LineNumber_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__layout_out__TypeMsg_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__Words_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "},\n");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_18 = ll_backend__layout_out__STATE_VARIABLE_Slot_0_17;
  }
}

static void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_5_p_0(
  MR_String ll_backend__layout_out__ModuleName_7,
  MR_Word ll_backend__layout_out__BasicLabelLayout_8)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_8, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__MaybePort_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_8, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__MaybeIsHidden_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_8, (MR_Integer) 4)));
    MR_Integer ll_backend__layout_out__LabelNumberInModule_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_8, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__MaybeGoalPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_8, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__MaybeUserSlotName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_8, (MR_Integer) 7)));
    MR_String ll_backend__layout_out__MacroName_18;
    MR_String ll_backend__layout_out__STATE_VARIABLE_MacroName_27_27;
    MR_Integer ll_backend__layout_out___LabelNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_8, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out___ProcLayoutName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_8, (MR_Integer) 2)));

    if ((ll_backend__layout_out__MaybeIsHidden_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__layout_out__STATE_VARIABLE_MacroName_27_27 = (MR_String) "MR_LL";
    else
      {
        MR_Word ll_backend__layout_out__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeIsHidden_14, (MR_Integer) 0)));

        switch (ll_backend__layout_out__V_56_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__layout_out__STATE_VARIABLE_MacroName_27_27 = (MR_String) "MR_LL";
            break;
          case (MR_Integer) 1:
            ll_backend__layout_out__STATE_VARIABLE_MacroName_27_27 = (MR_String) "MR_LL_H";
            break;
        }
      }
    if ((ll_backend__layout_out__MaybeUserSlotName_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__layout_out__MacroName_18 = ll_backend__layout_out__STATE_VARIABLE_MacroName_27_27;
    else
      {
        {
          ll_backend__layout_out__MacroName_18 = mercury__string__f_43_43_2_f_0(ll_backend__layout_out__STATE_VARIABLE_MacroName_27_27, (MR_String) "_U");
        }
      }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__MacroName_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
    {
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__layout_out__ProcLabel_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    if ((ll_backend__layout_out__MaybePort_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NONE,");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__Port_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybePort_13, (MR_Integer) 0)));
        MR_String ll_backend__layout_out__V_40_40;

        {
          ll_backend__layout_out__V_40_40 = ll_backend__layout_out__trace_port_to_string_1_f_0(ll_backend__layout_out__Port_20);
        }
        {
          mercury__io__write_string_3_p_0(ll_backend__layout_out__V_40_40);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",");
        }
      }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__LabelNumberInModule_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    if ((ll_backend__layout_out__MaybeGoalPath_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "0");
        }
      }
    else
      {
        MR_Integer ll_backend__layout_out__GoalPath_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeGoalPath_16, (MR_Integer) 0)));

        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__GoalPath_21);
        }
      }
    if ((ll_backend__layout_out__MaybeUserSlotName_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word ll_backend__layout_out__UserSlotName_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeUserSlotName_17, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) ",");
        }
        {
          ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__ModuleName_7, ll_backend__layout_out__UserSlotName_22);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

MR_Word MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_97_121_111_117_116_95_110_97_109_101_95_119_111_117_108_100_95_105_110_99_108_117_100_101_95_99_111_100_101_95_97_100_100_114_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    return (MR_Integer) 0;
  }
}

void MR_CALL 
ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_111_115_117_114_101_95_108_97_121_111_117_116_95_100_97_116_97_95_100_101_102_110_95_95_91_49_93_95_48_6_p_0(
  MR_Word ll_backend__layout_out__ClosureData_8,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_20,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_21)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__CallerProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ClosureData_8, (MR_Integer) 0)));
    MR_Integer ll_backend__layout_out__SeqNo_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ClosureData_8, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__ClosureProcLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ClosureData_8, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ClosureData_8, (MR_Integer) 3)));
    MR_String ll_backend__layout_out__FileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ClosureData_8, (MR_Integer) 4)));
    MR_Integer ll_backend__layout_out__LineNumber_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ClosureData_8, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__PredOrigin_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ClosureData_8, (MR_Integer) 6)));
    MR_String ll_backend__layout_out__GoalPath_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ClosureData_8, (MR_Integer) 7)));
    MR_Word ll_backend__layout_out__LayoutName_19;
    MR_String ll_backend__layout_out__V_33_33;
    MR_Word ll_backend__layout_out__V_46_46;

    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__layout_out__LayoutName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__layout_out__LayoutName_19, 0) = ((MR_Box) (ll_backend__layout_out__CallerProcLabel_11));
      MR_hl_field(MR_mktag(1), ll_backend__layout_out__LayoutName_19, 1) = ((MR_Box) (ll_backend__layout_out__SeqNo_12));
      MR_hl_field(MR_mktag(1), ll_backend__layout_out__LayoutName_19, 2) = ((MR_Box) (ll_backend__layout_out__ClosureProcLabel_13));
    }
    {
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__LayoutName_19, (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n{\n");
    }
    {
      ll_backend__layout_out__output_proc_id_4_p_0(ll_backend__layout_out__ClosureProcLabel_13, ll_backend__layout_out__PredOrigin_17);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "},\n");
    }
    {
      ll_backend__layout_out__V_33_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__layout_out__ModuleName_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__layout_out__V_33_33);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__layout_out__FileName_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__LineNumber_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__layout_out__GoalPath_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
    {
      ll_backend__layout_out__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_46_46, 1) = ((MR_Box) (ll_backend__layout_out__LayoutName_19));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_46_46, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__layout_out__STATE_VARIABLE_DeclSet_21);
    }
  }
}

void MR_CALL 
ll_backend__layout_out____Compare____use_layout_macro_0_0(
  MR_Word * ll_backend__layout_out__HeadVar__1_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2,
  MR_Word ll_backend__layout_out__HeadVar__3_3)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Integer ll_backend__layout_out__Cast_HeadVar1_4 = (MR_Integer) ll_backend__layout_out__HeadVar__2_2;
    MR_Integer ll_backend__layout_out__Cast_HeadVar2_5 = (MR_Integer) ll_backend__layout_out__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout_out__HeadVar__1_1, ll_backend__layout_out__Cast_HeadVar1_4, ll_backend__layout_out__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__layout_out____Unify____use_layout_macro_0_0(
  MR_Word ll_backend__layout_out__HeadVar__2_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2)
{
  {
    MR_bool ll_backend__layout_out__succeeded = (ll_backend__layout_out__HeadVar__2_1 == ll_backend__layout_out__HeadVar__2_2);

    return ll_backend__layout_out__succeeded;
  }
}

void MR_CALL 
ll_backend__layout_out____Compare____being_defined_0_0(
  MR_Word * ll_backend__layout_out__HeadVar__1_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2,
  MR_Word ll_backend__layout_out__HeadVar__3_3)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Integer ll_backend__layout_out__Cast_HeadVar1_4 = (MR_Integer) ll_backend__layout_out__HeadVar__2_2;
    MR_Integer ll_backend__layout_out__Cast_HeadVar2_5 = (MR_Integer) ll_backend__layout_out__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout_out__HeadVar__1_1, ll_backend__layout_out__Cast_HeadVar1_4, ll_backend__layout_out__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__layout_out____Unify____being_defined_0_0(
  MR_Word ll_backend__layout_out__HeadVar__2_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2)
{
  {
    MR_bool ll_backend__layout_out__succeeded = (ll_backend__layout_out__HeadVar__2_1 == ll_backend__layout_out__HeadVar__2_2);

    return ll_backend__layout_out__succeeded;
  }
}

static void MR_CALL 
ll_backend__layout_out__quote_and_write_string_3_p_0(
  MR_String ll_backend__layout_out__String_4)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__layout_out__String_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_name_in_vector_4_p_0(
  MR_String ll_backend__layout_out__Prefix_5,
  MR_Word ll_backend__layout_out__Name_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__Prefix_5);
    }
    {
      ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_upto_n_numbers_in_vector_noac_7_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Integer ll_backend__layout_out__N_2,
  MR_Word * ll_backend__layout_out__HeadVar__3_3,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_4,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__layout_out__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__layout_out__STATE_VARIABLE_Slot_5 = ll_backend__layout_out__STATE_VARIABLE_Slot_0_4;
          }
        else
          {
            MR_Integer ll_backend__layout_out__VarNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__layout_out__VarNums_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));

            ll_backend__layout_out__succeeded = (ll_backend__layout_out__N_2 > (MR_Integer) 0);
            if (ll_backend__layout_out__succeeded)
              {
                MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_26_26;
                MR_Integer ll_backend__layout_out__V_28_28;
                MR_String ll_backend__layout_out__V_52_52;
                MR_Integer ll_backend__layout_out__V_39_39;

                {
                  ll_backend__layout_out__V_39_39 = mercury__int__mod_2_f_0(ll_backend__layout_out__STATE_VARIABLE_Slot_0_4, (MR_Integer) 10);
                }
                ll_backend__layout_out__succeeded = (ll_backend__layout_out__V_39_39 == (MR_Integer) 0);
                if (ll_backend__layout_out__succeeded)
                  {
                    mercury__io__nl_2_p_0();
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) " ");
                    }
                  }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__VarNum_15, &ll_backend__layout_out__V_52_52);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_52_52);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                ll_backend__layout_out__STATE_VARIABLE_Slot_26_26 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_4 + (MR_Integer) 1);
                ll_backend__layout_out__V_28_28 = (ll_backend__layout_out__N_2 - (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__layout_out__HeadVar__1__tmp_copy_1 = ll_backend__layout_out__VarNums_16;
                  MR_Integer ll_backend__layout_out__N__tmp_copy_2 = ll_backend__layout_out__V_28_28;
                  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0__tmp_copy_4 = ll_backend__layout_out__STATE_VARIABLE_Slot_26_26;

                  ll_backend__layout_out__STATE_VARIABLE_Slot_0_4 = ll_backend__layout_out__STATE_VARIABLE_Slot_0__tmp_copy_4;
                  ll_backend__layout_out__N_2 = ll_backend__layout_out__N__tmp_copy_2;
                  ll_backend__layout_out__HeadVar__1_1 = ll_backend__layout_out__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              {
                *ll_backend__layout_out__HeadVar__3_3 = ll_backend__layout_out__HeadVar__1_1;
                *ll_backend__layout_out__STATE_VARIABLE_Slot_5 = ll_backend__layout_out__STATE_VARIABLE_Slot_0_4;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__output_upto_n_numbers_in_vector_ac_7_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Integer ll_backend__layout_out__N_2,
  MR_Word * ll_backend__layout_out__HeadVar__3_3,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_4,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__layout_out__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__layout_out__STATE_VARIABLE_Slot_5 = ll_backend__layout_out__STATE_VARIABLE_Slot_0_4;
          }
        else
          {
            MR_Integer ll_backend__layout_out__VarNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__layout_out__VarNums_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));

            ll_backend__layout_out__succeeded = (ll_backend__layout_out__N_2 > (MR_Integer) 0);
            if (ll_backend__layout_out__succeeded)
              {
                MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_26_26;
                MR_Integer ll_backend__layout_out__V_28_28;
                MR_String ll_backend__layout_out__V_67_67;
                MR_Integer ll_backend__layout_out__V_39_39;

                {
                  ll_backend__layout_out__V_39_39 = mercury__int__mod_2_f_0(ll_backend__layout_out__STATE_VARIABLE_Slot_0_4, (MR_Integer) 10);
                }
                ll_backend__layout_out__succeeded = (ll_backend__layout_out__V_39_39 == (MR_Integer) 0);
                if (ll_backend__layout_out__succeeded)
                  {
                    MR_String ll_backend__layout_out__V_58_58;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "\n/* slots ");
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__STATE_VARIABLE_Slot_0_4, &ll_backend__layout_out__V_58_58);
                    }
                    {
                      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_58_58);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "+ */ ");
                    }
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) " ");
                    }
                  }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__VarNum_15, &ll_backend__layout_out__V_67_67);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_67_67);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                ll_backend__layout_out__STATE_VARIABLE_Slot_26_26 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_4 + (MR_Integer) 1);
                ll_backend__layout_out__V_28_28 = (ll_backend__layout_out__N_2 - (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__layout_out__HeadVar__1__tmp_copy_1 = ll_backend__layout_out__VarNums_16;
                  MR_Integer ll_backend__layout_out__N__tmp_copy_2 = ll_backend__layout_out__V_28_28;
                  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0__tmp_copy_4 = ll_backend__layout_out__STATE_VARIABLE_Slot_26_26;

                  ll_backend__layout_out__STATE_VARIABLE_Slot_0_4 = ll_backend__layout_out__STATE_VARIABLE_Slot_0__tmp_copy_4;
                  ll_backend__layout_out__N_2 = ll_backend__layout_out__N__tmp_copy_2;
                  ll_backend__layout_out__HeadVar__1_1 = ll_backend__layout_out__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              {
                *ll_backend__layout_out__HeadVar__3_3 = ll_backend__layout_out__HeadVar__1_1;
                *ll_backend__layout_out__STATE_VARIABLE_Slot_5 = ll_backend__layout_out__STATE_VARIABLE_Slot_0_4;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__layout_out__LeftOverVarNums_14;
            MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_19_19;

            {
              ll_backend__layout_out__output_upto_n_numbers_in_vector_noac_7_p_0(ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1000, &ll_backend__layout_out__LeftOverVarNums_14, ll_backend__layout_out__STATE_VARIABLE_Slot_0_2, &ll_backend__layout_out__STATE_VARIABLE_Slot_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__layout_out__HeadVar__1__tmp_copy_1 = ll_backend__layout_out__LeftOverVarNums_14;
              MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0__tmp_copy_2 = ll_backend__layout_out__STATE_VARIABLE_Slot_19_19;

              ll_backend__layout_out__STATE_VARIABLE_Slot_0_2 = ll_backend__layout_out__STATE_VARIABLE_Slot_0__tmp_copy_2;
              ll_backend__layout_out__HeadVar__1_1 = ll_backend__layout_out__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__layout_out__LeftOverVarNums_14;
            MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_19_19;

            {
              ll_backend__layout_out__output_upto_n_numbers_in_vector_ac_7_p_0(ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1000, &ll_backend__layout_out__LeftOverVarNums_14, ll_backend__layout_out__STATE_VARIABLE_Slot_0_2, &ll_backend__layout_out__STATE_VARIABLE_Slot_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__layout_out__HeadVar__1__tmp_copy_1 = ll_backend__layout_out__LeftOverVarNums_14;
              MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0__tmp_copy_2 = ll_backend__layout_out__STATE_VARIABLE_Slot_19_19;

              ll_backend__layout_out__STATE_VARIABLE_Slot_0_2 = ll_backend__layout_out__STATE_VARIABLE_Slot_0__tmp_copy_2;
              ll_backend__layout_out__HeadVar__1_1 = ll_backend__layout_out__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slot_chunk_5_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slot_chunk_5_p_0(
  MR_String ll_backend__layout_out__Macro_6,
  MR_String ll_backend__layout_out__ModuleName_7,
  MR_Word ll_backend__layout_out__SlotNums_8)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer ll_backend__layout_out__Length_10;

    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_25_25, ll_backend__layout_out__SlotNums_8, &ll_backend__layout_out__Length_10);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__Macro_6);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__Length_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleName_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      mercury__io__write_list_5_p_0(ll_backend__layout_out__TypeCtorInfo_25_25, ll_backend__layout_out__SlotNums_8, (MR_String) ",", (MR_Word) &ll_backend__layout_out_scalar_common_2[14]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__find_slots_in_same_array_5_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_0_3,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_4,
  MR_Word * ll_backend__layout_out__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__layout_out__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_4 = ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_0_3;
          }
        else
          {
            MR_Word ll_backend__layout_out__SlotName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__layout_out__SlotNames_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__layout_out__SlotArrayName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SlotName_11, (MR_Integer) 0)));
            MR_Integer ll_backend__layout_out__SlotNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SlotName_11, (MR_Integer) 1)));

            {
              ll_backend__layout_out__succeeded = ll_backend__layout____Unify____layout_array_name_0_0(ll_backend__layout_out__SlotArrayName_15, ll_backend__layout_out__HeadVar__1_1);
            }
            if (ll_backend__layout_out__succeeded)
              {
                MR_Word ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_19_19;

                {
                  ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_19_19, 0) = ((MR_Box) (ll_backend__layout_out__SlotNum_16));
                  MR_hl_field(MR_mktag(1), ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_19_19, 1) = ((MR_Box) (ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_0_3));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__layout_out__HeadVar__2__tmp_copy_2 = ll_backend__layout_out__SlotNames_12;
                  MR_Word ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_0__tmp_copy_3 = ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_19_19;

                  ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_0_3 = ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_0__tmp_copy_3;
                  ll_backend__layout_out__HeadVar__2_2 = ll_backend__layout_out__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
            else
              {
                *ll_backend__layout_out__HeadVar__5_5 = ll_backend__layout_out__HeadVar__2_2;
                *ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_4 = ll_backend__layout_out__STATE_VARIABLE_RevSlotNums_0_3;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_3(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      ll_backend__layout_out__output_layout_slot_chunk_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      ll_backend__layout_out__output_layout_slot_chunk_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      ll_backend__layout_out__output_layout_slot_chunk_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_slots_in_vector_4_p_0(
  MR_String ll_backend__layout_out__HeadVar__1_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__layout_out__SlotName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__layout_out__SlotNames_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__layout_out__ArrayName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SlotName_10, (MR_Integer) 0)));
            MR_Integer ll_backend__layout_out__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SlotName_10, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ll_backend__layout_out__ArrayName_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__HeadVar__1_1, ll_backend__layout_out__SlotName_10);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ",\n");
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__layout_out__HeadVar__2__tmp_copy_2 = ll_backend__layout_out__SlotNames_11;

                    ll_backend__layout_out__HeadVar__2_2 = ll_backend__layout_out__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__layout_out__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__ArrayName_13, (MR_Integer) 0)));

                  switch (ll_backend__layout_out__V_74_74) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      {
                        MR_Word ll_backend__layout_out__TypeCtorInfo_36_71;
                        MR_Word ll_backend__layout_out__RevTailSlotNums_62;
                        MR_Word ll_backend__layout_out__OtherArraySlotNames_63;
                        MR_Word ll_backend__layout_out__TailSlotNums_64;
                        MR_Word ll_backend__layout_out__SlotNums_65;
                        MR_Word ll_backend__layout_out__SlotNumChunks_67;
                        MR_Word ll_backend__layout_out__V_69_69;
                        MR_Box ll_backend__layout_out__conv0_STATE_VARIABLE_IO_34_70;

                        {
                          ll_backend__layout_out__find_slots_in_same_array_5_p_0(ll_backend__layout_out__ArrayName_13, ll_backend__layout_out__SlotNames_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__layout_out__RevTailSlotNums_62, &ll_backend__layout_out__OtherArraySlotNames_63);
                        }
                        ll_backend__layout_out__TypeCtorInfo_36_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                        {
                          mercury__list__reverse_2_p_0(ll_backend__layout_out__TypeCtorInfo_36_71, ll_backend__layout_out__RevTailSlotNums_62, &ll_backend__layout_out__TailSlotNums_64);
                        }
                        {
                          ll_backend__layout_out__SlotNums_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__layout_out__SlotNums_65, 0) = ((MR_Box) (ll_backend__layout_out__SlotNum_14));
                          MR_hl_field(MR_mktag(1), ll_backend__layout_out__SlotNums_65, 1) = ((MR_Box) (ll_backend__layout_out__TailSlotNums_64));
                        }
                        {
                          mercury__list__chunk_3_p_0(ll_backend__layout_out__TypeCtorInfo_36_71, ll_backend__layout_out__SlotNums_65, (MR_Integer) 10, &ll_backend__layout_out__SlotNumChunks_67);
                        }
                        {
                          ll_backend__layout_out__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_69_69, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_8[3]));
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_69_69, 1) = ((MR_Box) (ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_1));
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_69_69, 3) = ((MR_Box) ((MR_String) "MR_lvar_label_layout_refs"));
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_69_69, 4) = ((MR_Box) (ll_backend__layout_out__HeadVar__1_1));
                        }
                        {
                          mercury__list__foldl_4_p_2((MR_Word) &ll_backend__layout_out_scalar_common_1[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_69_69, ll_backend__layout_out__SlotNumChunks_67, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv0_STATE_VARIABLE_IO_34_70);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__layout_out__HeadVar__2__tmp_copy_2 = ll_backend__layout_out__OtherArraySlotNames_63;

                          ll_backend__layout_out__HeadVar__2_2 = ll_backend__layout_out__HeadVar__2__tmp_copy_2;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word ll_backend__layout_out__TypeCtorInfo_36_36;
                        MR_Word ll_backend__layout_out__RevTailSlotNums_16;
                        MR_Word ll_backend__layout_out__OtherArraySlotNames_17;
                        MR_Word ll_backend__layout_out__TailSlotNums_18;
                        MR_Word ll_backend__layout_out__SlotNums_19;
                        MR_Word ll_backend__layout_out__SlotNumChunks_21;
                        MR_Word ll_backend__layout_out__V_33_33;
                        MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_34_34;

                        {
                          ll_backend__layout_out__find_slots_in_same_array_5_p_0(ll_backend__layout_out__ArrayName_13, ll_backend__layout_out__SlotNames_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__layout_out__RevTailSlotNums_16, &ll_backend__layout_out__OtherArraySlotNames_17);
                        }
                        ll_backend__layout_out__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                        {
                          mercury__list__reverse_2_p_0(ll_backend__layout_out__TypeCtorInfo_36_36, ll_backend__layout_out__RevTailSlotNums_16, &ll_backend__layout_out__TailSlotNums_18);
                        }
                        {
                          ll_backend__layout_out__SlotNums_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__layout_out__SlotNums_19, 0) = ((MR_Box) (ll_backend__layout_out__SlotNum_14));
                          MR_hl_field(MR_mktag(1), ll_backend__layout_out__SlotNums_19, 1) = ((MR_Box) (ll_backend__layout_out__TailSlotNums_18));
                        }
                        {
                          mercury__list__chunk_3_p_0(ll_backend__layout_out__TypeCtorInfo_36_36, ll_backend__layout_out__SlotNums_19, (MR_Integer) 10, &ll_backend__layout_out__SlotNumChunks_21);
                        }
                        {
                          ll_backend__layout_out__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_33_33, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_8[3]));
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_33_33, 1) = ((MR_Box) (ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_2));
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_33_33, 3) = ((MR_Box) ((MR_String) "MR_no_var_label_layout_refs"));
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_33_33, 4) = ((MR_Box) (ll_backend__layout_out__HeadVar__1_1));
                        }
                        {
                          mercury__list__foldl_4_p_2((MR_Word) &ll_backend__layout_out_scalar_common_1[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_33_33, ll_backend__layout_out__SlotNumChunks_21, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_34_34);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__layout_out__HeadVar__2__tmp_copy_2 = ll_backend__layout_out__OtherArraySlotNames_17;

                          ll_backend__layout_out__HeadVar__2_2 = ll_backend__layout_out__HeadVar__2__tmp_copy_2;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__layout_out__TypeCtorInfo_36_55;
                        MR_Word ll_backend__layout_out__RevTailSlotNums_46;
                        MR_Word ll_backend__layout_out__OtherArraySlotNames_47;
                        MR_Word ll_backend__layout_out__TailSlotNums_48;
                        MR_Word ll_backend__layout_out__SlotNums_49;
                        MR_Word ll_backend__layout_out__SlotNumChunks_51;
                        MR_Word ll_backend__layout_out__V_53_53;
                        MR_Box ll_backend__layout_out__conv2_STATE_VARIABLE_IO_34_54;

                        {
                          ll_backend__layout_out__find_slots_in_same_array_5_p_0(ll_backend__layout_out__ArrayName_13, ll_backend__layout_out__SlotNames_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__layout_out__RevTailSlotNums_46, &ll_backend__layout_out__OtherArraySlotNames_47);
                        }
                        ll_backend__layout_out__TypeCtorInfo_36_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                        {
                          mercury__list__reverse_2_p_0(ll_backend__layout_out__TypeCtorInfo_36_55, ll_backend__layout_out__RevTailSlotNums_46, &ll_backend__layout_out__TailSlotNums_48);
                        }
                        {
                          ll_backend__layout_out__SlotNums_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__layout_out__SlotNums_49, 0) = ((MR_Box) (ll_backend__layout_out__SlotNum_14));
                          MR_hl_field(MR_mktag(1), ll_backend__layout_out__SlotNums_49, 1) = ((MR_Box) (ll_backend__layout_out__TailSlotNums_48));
                        }
                        {
                          mercury__list__chunk_3_p_0(ll_backend__layout_out__TypeCtorInfo_36_55, ll_backend__layout_out__SlotNums_49, (MR_Integer) 10, &ll_backend__layout_out__SlotNumChunks_51);
                        }
                        {
                          ll_backend__layout_out__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_53_53, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_8[3]));
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_53_53, 1) = ((MR_Box) (ll_backend__layout_out__output_layout_slots_in_vector_4_p_0_3));
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_53_53, 3) = ((MR_Box) ((MR_String) "MR_svar_label_layout_refs"));
                          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_53_53, 4) = ((MR_Box) (ll_backend__layout_out__HeadVar__1_1));
                        }
                        {
                          mercury__list__foldl_4_p_2((MR_Word) &ll_backend__layout_out_scalar_common_1[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_53_53, ll_backend__layout_out__SlotNumChunks_51, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv2_STATE_VARIABLE_IO_34_54);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__layout_out__HeadVar__2__tmp_copy_2 = ll_backend__layout_out__OtherArraySlotNames_47;

                          ll_backend__layout_out__HeadVar__2_2 = ll_backend__layout_out__HeadVar__2__tmp_copy_2;
                        }
                        continue;
                      }
                      break;
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
ll_backend__layout_out__output_file_layout_label_layout_vector_defn_9_p_0(
  MR_String ll_backend__layout_out__MangledModuleName_10,
  MR_Word ll_backend__layout_out__ModuleName_11,
  MR_Integer ll_backend__layout_out__FileNum_12,
  MR_Word ll_backend__layout_out__LabelSlots_13,
  MR_Word * ll_backend__layout_out__LayoutName_14,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_19,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_20)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__V_34_34;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__layout_out__LayoutName_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_11));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__layout_out__FileNum_12));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*ll_backend__layout_out__LayoutName_14, (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    if ((ll_backend__layout_out__LabelSlots_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL\n");
        }
      }
    else
      {
        ll_backend__layout_out__output_layout_slots_in_vector_4_p_0(ll_backend__layout_out__MangledModuleName_10, ll_backend__layout_out__LabelSlots_13);
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    {
      ll_backend__layout_out__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_34_34, 1) = ((MR_Box) (*ll_backend__layout_out__LayoutName_14));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_34_34, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_19, ll_backend__layout_out__STATE_VARIABLE_DeclSet_20);
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_line_number_vector_defn_9_p_0(
  MR_Word ll_backend__layout_out__Info_10,
  MR_Word ll_backend__layout_out__ModuleName_11,
  MR_Integer ll_backend__layout_out__FileNum_12,
  MR_Word ll_backend__layout_out__LineNumbers_13,
  MR_Word * ll_backend__layout_out__LayoutName_14,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_20,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_21)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__V_38_38;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__layout_out__LayoutName_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_11));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__layout_out__FileNum_12));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*ll_backend__layout_out__LayoutName_14, (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {");
    }
    if ((ll_backend__layout_out__LineNumbers_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "\n0");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__AutoComments_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 0)));
        MR_String ll_backend__layout_out__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 1)));
        MR_String ll_backend__layout_out__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 2)));
        MR_Word ll_backend__layout_out__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 3)));
        MR_Word ll_backend__layout_out__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 4)));
        MR_Word ll_backend__layout_out__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 5)));
        MR_Word ll_backend__layout_out__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 6)));
        MR_Word ll_backend__layout_out__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        MR_Word ll_backend__layout_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
        MR_Word ll_backend__layout_out__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 8)));

        switch (ll_backend__layout_out__AutoComments_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__layout_out__LeftOverVarNums_70;
              MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_19_75;

              {
                ll_backend__layout_out__output_upto_n_numbers_in_vector_noac_7_p_0(ll_backend__layout_out__LineNumbers_13, (MR_Integer) 1000, &ll_backend__layout_out__LeftOverVarNums_70, (MR_Integer) 0, &ll_backend__layout_out__STATE_VARIABLE_Slot_19_75);
              }
              {
                ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(ll_backend__layout_out__LeftOverVarNums_70, ll_backend__layout_out__STATE_VARIABLE_Slot_19_75);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__layout_out__LeftOverVarNums_87;
              MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_19_92;

              {
                ll_backend__layout_out__output_upto_n_numbers_in_vector_ac_7_p_0(ll_backend__layout_out__LineNumbers_13, (MR_Integer) 1000, &ll_backend__layout_out__LeftOverVarNums_87, (MR_Integer) 0, &ll_backend__layout_out__STATE_VARIABLE_Slot_19_92);
              }
              {
                ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(ll_backend__layout_out__LeftOverVarNums_87, ll_backend__layout_out__STATE_VARIABLE_Slot_19_92);
              }
            }
            break;
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
    {
      ll_backend__layout_out__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_38_38, 1) = ((MR_Box) (*ll_backend__layout_out__LayoutName_14));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_38_38, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__layout_out__STATE_VARIABLE_DeclSet_21);
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_data_defn_9_p_0(
  MR_Word ll_backend__layout_out__Info_10,
  MR_Word ll_backend__layout_out__ModuleName_11,
  MR_Integer ll_backend__layout_out__FileNum_12,
  MR_Word ll_backend__layout_out__FileLayout_13,
  MR_Word * ll_backend__layout_out__FileLayoutName_14,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_25,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_26)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__MangledModuleName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 1)));
    MR_String ll_backend__layout_out__FileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__FileLayout_13, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__LineNoLabelList_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__FileLayout_13, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__LineNos_20;
    MR_Word ll_backend__layout_out__LabelLayoutSlots_21;
    MR_Integer ll_backend__layout_out__VectorLengths_22;
    MR_Word ll_backend__layout_out__LineNumberVectorName_23;
    MR_Word ll_backend__layout_out__LabelVectorName_24;
    MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_29_29;
    MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_31_31;
    MR_Word ll_backend__layout_out__V_51_51;
    MR_Word ll_backend__layout_out__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_10, (MR_Integer) 8)));

    {
      mercury__assoc_list__keys_and_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__layout_out__LineNoLabelList_19, &ll_backend__layout_out__LineNos_20, &ll_backend__layout_out__LabelLayoutSlots_21);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &ll_backend__layout_out_scalar_common_2[2], ll_backend__layout_out__LineNoLabelList_19, &ll_backend__layout_out__VectorLengths_22);
    }
    {
      ll_backend__layout_out__output_file_layout_line_number_vector_defn_9_p_0(ll_backend__layout_out__Info_10, ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__FileNum_12, ll_backend__layout_out__LineNos_20, &ll_backend__layout_out__LineNumberVectorName_23, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_25, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_29_29);
    }
    {
      ll_backend__layout_out__output_file_layout_label_layout_vector_defn_9_p_0(ll_backend__layout_out__MangledModuleName_17, ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__FileNum_12, ll_backend__layout_out__LabelLayoutSlots_21, &ll_backend__layout_out__LabelVectorName_24, ll_backend__layout_out__STATE_VARIABLE_DeclSet_29_29, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_31_31);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__layout_out__FileLayoutName_14 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__layout_out__ModuleName_11));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__layout_out__FileNum_12));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*ll_backend__layout_out__FileLayoutName_14, (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__layout_out__FileName_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__VectorLengths_22);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__LineNumberVectorName_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__LabelVectorName_24);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
    {
      ll_backend__layout_out__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_51_51, 1) = ((MR_Box) (*ll_backend__layout_out__FileLayoutName_14));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_51_51, ll_backend__layout_out__STATE_VARIABLE_DeclSet_31_31, ll_backend__layout_out__STATE_VARIABLE_DeclSet_26);
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_data_defns_9_p_0(
  MR_Word ll_backend__layout_out__Info_1,
  MR_Word ll_backend__layout_out__ModuleName_2,
  MR_Integer ll_backend__layout_out__FileNum_3,
  MR_Word ll_backend__layout_out__HeadVar__4_4,
  MR_Word * ll_backend__layout_out__HeadVar__5_5,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_6,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_7)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    if ((ll_backend__layout_out__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__layout_out__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__layout_out__STATE_VARIABLE_DeclSet_7 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_6;
      }
    else
      {
        MR_Word ll_backend__layout_out__FileLayout_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word ll_backend__layout_out__FileLayouts_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word ll_backend__layout_out__FileLayoutName_24;
        MR_Word ll_backend__layout_out__FileLayoutNames_25;
        MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_32_32;
        MR_Integer ll_backend__layout_out__V_34_34;

        {
          ll_backend__layout_out__output_file_layout_data_defn_9_p_0(ll_backend__layout_out__Info_1, ll_backend__layout_out__ModuleName_2, ll_backend__layout_out__FileNum_3, ll_backend__layout_out__FileLayout_22, &ll_backend__layout_out__FileLayoutName_24, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_6, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_32_32);
        }
        ll_backend__layout_out__V_34_34 = (ll_backend__layout_out__FileNum_3 + (MR_Integer) 1);
        {
          ll_backend__layout_out__output_file_layout_data_defns_9_p_0(ll_backend__layout_out__Info_1, ll_backend__layout_out__ModuleName_2, ll_backend__layout_out__V_34_34, ll_backend__layout_out__FileLayouts_23, &ll_backend__layout_out__FileLayoutNames_25, ll_backend__layout_out__STATE_VARIABLE_DeclSet_32_32, ll_backend__layout_out__STATE_VARIABLE_DeclSet_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__layout_out__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__layout_out__FileLayoutName_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__layout_out__FileLayoutNames_25));
        }
      }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      ll_backend__layout_out__output_layout_name_in_vector_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Word ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_10;

    {
      ll_backend__layout_out__output_layout_decl_5_p_0(((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Word) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_10);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_10));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0(
  MR_Word ll_backend__layout_out__ModuleName_8,
  MR_Word ll_backend__layout_out__FileLayoutNames_9,
  MR_Word * ll_backend__layout_out__VectorName_10,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_16)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_42_42 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0;
    MR_Word ll_backend__layout_out__TypeCtorInfo_44_44 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_20_20;
    MR_Word ll_backend__layout_out__V_35_35;
    MR_Box ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_20_20;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_21_21;

    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_42_42, (MR_Word) &ll_backend__layout_out_scalar_common_1[2], ll_backend__layout_out__TypeCtorInfo_44_44, (MR_Word) &ll_backend__layout_out_scalar_common_2[13], ll_backend__layout_out__FileLayoutNames_9, ((MR_Box) (ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_20_20, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_21_21);
    }
    ll_backend__layout_out__STATE_VARIABLE_DeclSet_20_20 = ((MR_Word) ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_20_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__layout_out__VectorName_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_8));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*ll_backend__layout_out__VectorName_10, (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    if ((ll_backend__layout_out__FileLayoutNames_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL\n");
        }
      }
    else
      {
        MR_Box ll_backend__layout_out__conv3_STATE_VARIABLE_IO_32_32;

        {
          mercury__list__foldl_4_p_2(ll_backend__layout_out__TypeCtorInfo_42_42, ll_backend__layout_out__TypeCtorInfo_44_44, (MR_Word) &ll_backend__layout_out_scalar_common_3[1], ll_backend__layout_out__FileLayoutNames_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv3_STATE_VARIABLE_IO_32_32);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    {
      ll_backend__layout_out__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_35_35, 1) = ((MR_Box) (*ll_backend__layout_out__VectorName_10));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_35_35, ll_backend__layout_out__STATE_VARIABLE_DeclSet_20_20, ll_backend__layout_out__STATE_VARIABLE_DeclSet_16);
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_multi_byte_char_codes_3_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Integer ll_backend__layout_out__C_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__layout_out__Cs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__io__write_int_3_p_0(ll_backend__layout_out__C_7);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__layout_out__HeadVar__1__tmp_copy_1 = ll_backend__layout_out__Cs_8;

              ll_backend__layout_out__HeadVar__1_1 = ll_backend__layout_out__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__output_module_string_table_chars_5_p_0(
  MR_Integer ll_backend__layout_out__CurIndex_6,
  MR_Integer ll_backend__layout_out__Count_7,
  MR_String ll_backend__layout_out__String_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;
        MR_Integer ll_backend__layout_out__NextIndex_10;
        MR_Char ll_backend__layout_out__Char_11;

        {
          ll_backend__layout_out__succeeded = mercury__string__unsafe_index_next_4_p_0(ll_backend__layout_out__String_8, ll_backend__layout_out__CurIndex_6, &ll_backend__layout_out__NextIndex_10, &ll_backend__layout_out__Char_11);
        }
        if (ll_backend__layout_out__succeeded)
          {
            MR_Integer ll_backend__layout_out__Int_12;

            {
              mercury__char__to_int_2_p_0(ll_backend__layout_out__Char_11, &ll_backend__layout_out__Int_12);
            }
            ll_backend__layout_out__succeeded = (ll_backend__layout_out__Int_12 <= (MR_Integer) 127);
            if (ll_backend__layout_out__succeeded)
              {
                {
                  mercury__io__write_char_3_p_0((MR_Char) 39);
                }
                {
                  backend_libs__c_util__output_quoted_char_3_p_0(ll_backend__layout_out__Char_11);
                }
                {
                  mercury__io__write_char_3_p_0((MR_Char) 39);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
              }
            else
              {
                MR_Word ll_backend__layout_out__Codes_13;

                {
                  ll_backend__layout_out__succeeded = mercury__char__to_utf8_2_p_0(ll_backend__layout_out__Char_11, &ll_backend__layout_out__Codes_13);
                }
                if (ll_backend__layout_out__succeeded)
                  {
                    ll_backend__layout_out__output_multi_byte_char_codes_3_p_0(ll_backend__layout_out__Codes_13);
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.layout_out", (MR_String) "predicate \140ll_backend.layout_out.output_module_string_table_chars\'/5", (MR_String) "invalid code point");
                      return;
                    }
                  }
              }
            ll_backend__layout_out__succeeded = (ll_backend__layout_out__Count_7 == (MR_Integer) 10);
            if (ll_backend__layout_out__succeeded)
              {
                {
                  mercury__io__nl_2_p_0();
                }
                /* direct tailcall eliminated */
                {
                  MR_Integer ll_backend__layout_out__CurIndex__tmp_copy_6 = ll_backend__layout_out__NextIndex_10;

                  ll_backend__layout_out__Count_7 = (MR_Integer) 0;
                  ll_backend__layout_out__CurIndex_6 = ll_backend__layout_out__CurIndex__tmp_copy_6;
                }
                continue;
              }
            else
              {
                MR_Integer ll_backend__layout_out__V_31_31 = (ll_backend__layout_out__Count_7 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Integer ll_backend__layout_out__CurIndex__tmp_copy_6 = ll_backend__layout_out__NextIndex_10;
                  MR_Integer ll_backend__layout_out__Count__tmp_copy_7 = ll_backend__layout_out__V_31_31;

                  ll_backend__layout_out__Count_7 = ll_backend__layout_out__Count__tmp_copy_7;
                  ll_backend__layout_out__CurIndex_6 = ll_backend__layout_out__CurIndex__tmp_copy_6;
                }
                continue;
              }
          }
        else
          {
            MR_Char ll_backend__layout_out__V_36_36;

            {
              mercury__io__write_char_3_p_0((MR_Char) 39);
            }
            {
              ll_backend__layout_out__V_36_36 = mercury__char__det_from_int_1_f_0((MR_Integer) 0);
            }
            {
              backend_libs__c_util__output_quoted_char_3_p_0(ll_backend__layout_out__V_36_36);
            }
            {
              mercury__io__write_char_3_p_0((MR_Char) 39);
            }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__output_module_string_table_strings_4_p_0(
  MR_String ll_backend__layout_out__String_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              ll_backend__layout_out__output_module_string_table_chars_5_p_0((MR_Integer) 0, (MR_Integer) 0, ll_backend__layout_out__String_1);
            }
          }
        else
          {
            MR_String ll_backend__layout_out__Next_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__layout_out__Rest_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__2_2, (MR_Integer) 1)));

            {
              ll_backend__layout_out__output_module_string_table_chars_5_p_0((MR_Integer) 0, (MR_Integer) 0, ll_backend__layout_out__String_1);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
            /* direct tailcall eliminated */
            {
              MR_String ll_backend__layout_out__String__tmp_copy_1 = ll_backend__layout_out__Next_13;
              MR_Word ll_backend__layout_out__HeadVar__2__tmp_copy_2 = ll_backend__layout_out__Rest_14;

              ll_backend__layout_out__HeadVar__2_2 = ll_backend__layout_out__HeadVar__2__tmp_copy_2;
              ll_backend__layout_out__String_1 = ll_backend__layout_out__String__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__output_event_set_desc_defn_7_p_0(
  MR_Word ll_backend__layout_out__ModuleName_8,
  MR_String ll_backend__layout_out__EventSetDesc_9,
  MR_Word * ll_backend__layout_out__LayoutName_10,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__V_27_27;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__layout_out__LayoutName_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_8));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*ll_backend__layout_out__LayoutName_10, (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {");
    }
    {
      ll_backend__layout_out__output_module_string_table_chars_5_p_0((MR_Integer) 0, (MR_Integer) 0, ll_backend__layout_out__EventSetDesc_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    {
      ll_backend__layout_out__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_27_27, 1) = ((MR_Box) (*ll_backend__layout_out__LayoutName_10));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_27_27, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_13, ll_backend__layout_out__STATE_VARIABLE_DeclSet_14);
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_layout_name_in_vector_3_p_0(
  MR_Word ll_backend__layout_out__LayoutName_4)
{
  {
    MR_bool ll_backend__layout_out__succeeded = ((MR_tag((MR_Word) ll_backend__layout_out__LayoutName_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ll_backend__layout_out__RttiProcLabel_6;
    MR_Word ll_backend__layout_out__V_7_7;

    if (ll_backend__layout_out__succeeded)
      {
        ll_backend__layout_out__RttiProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LayoutName_4, (MR_Integer) 0)));
        ll_backend__layout_out__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LayoutName_4, (MR_Integer) 1)));
        {
          MR_Word ll_backend__layout_out__ProcLabel_8;

          {
            ll_backend__layout_out__ProcLabel_8 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__layout_out__RttiProcLabel_6);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_PROC_LAYOUT1(");
          }
          {
            backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__layout_out__ProcLabel_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")\n");
          }
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.layout_out", (MR_String) "predicate \140ll_backend.layout_out.output_proc_layout_name_in_vector\'/3", (MR_String) "not proc layout");
          return;
        }
      }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      ll_backend__layout_out__output_proc_layout_name_in_vector_3_p_0(((MR_Word) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Word ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_10;

    {
      ll_backend__layout_out__output_layout_decl_5_p_0(((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Word) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_10);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_10));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0(
  MR_Word ll_backend__layout_out__ModuleName_8,
  MR_Word ll_backend__layout_out__ProcLayoutNames_9,
  MR_Word * ll_backend__layout_out__VectorName_10,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_16)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0;
    MR_Word ll_backend__layout_out__TypeCtorInfo_43_43 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_20_20;
    MR_Word ll_backend__layout_out__V_34_34;
    MR_Box ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_20_20;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_21_21;

    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_41_41, (MR_Word) &ll_backend__layout_out_scalar_common_1[2], ll_backend__layout_out__TypeCtorInfo_43_43, (MR_Word) &ll_backend__layout_out_scalar_common_2[11], ll_backend__layout_out__ProcLayoutNames_9, ((MR_Box) (ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_20_20, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_21_21);
    }
    ll_backend__layout_out__STATE_VARIABLE_DeclSet_20_20 = ((MR_Word) ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_20_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__layout_out__VectorName_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_8));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*ll_backend__layout_out__VectorName_10, (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    if ((ll_backend__layout_out__ProcLayoutNames_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL\n");
        }
      }
    else
      {
        MR_Box ll_backend__layout_out__conv3_STATE_VARIABLE_IO_31_31;

        {
          mercury__list__foldl_4_p_2(ll_backend__layout_out__TypeCtorInfo_41_41, ll_backend__layout_out__TypeCtorInfo_43_43, (MR_Word) &ll_backend__layout_out_scalar_common_2[12], ll_backend__layout_out__ProcLayoutNames_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv3_STATE_VARIABLE_IO_31_31);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    {
      ll_backend__layout_out__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_34_34, 1) = ((MR_Box) (*ll_backend__layout_out__VectorName_10));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_34_34, ll_backend__layout_out__STATE_VARIABLE_DeclSet_20_20, ll_backend__layout_out__STATE_VARIABLE_DeclSet_16);
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__ModuleName_8,
  MR_Word ll_backend__layout_out__TypesRvalMap_9,
  MR_Word ll_backend__layout_out__EventSpec_10)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Integer ll_backend__layout_out__EventNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSpec_10, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__EventName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSpec_10, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__Attrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSpec_10, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__SynthOrder_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSpec_10, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__TypesRval_17;
    MR_Word ll_backend__layout_out__AttrNamesLayoutName_18;
    MR_Integer ll_backend__layout_out__V_30_30;
    MR_Integer ll_backend__layout_out___EventLineNumber_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSpec_10, (MR_Integer) 2)));
    MR_Box ll_backend__layout_out__conv0_TypesRval_17;
    MR_Word ll_backend__layout_out__V_57_57;
    MR_Integer ll_backend__layout_out__V_58_58;

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__layout_out__TypesRvalMap_9, ll_backend__layout_out__EventNumber_12, &ll_backend__layout_out__conv0_TypesRval_17);
    }
    ll_backend__layout_out__TypesRval_17 = ((MR_Word) ll_backend__layout_out__conv0_TypesRval_17);
    {
      mercury__io__write_string_3_p_0((MR_String) "{ \"");
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__EventName_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\", ");
    }
    {
      ll_backend__layout_out__V_30_30 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0, ll_backend__layout_out__Attrs_15);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__V_30_30);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    {
      ll_backend__layout_out__AttrNamesLayoutName_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__AttrNamesLayoutName_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__AttrNamesLayoutName_18, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_8));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__AttrNamesLayoutName_18, 2) = ((MR_Box) (ll_backend__layout_out__EventNumber_12));
    }
    {
      ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__AttrNamesLayoutName_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t(MR_TypeInfo *) ");
    }
    ll_backend__layout_out__succeeded = ((((MR_tag((MR_Word) ll_backend__layout_out__TypesRval_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypesRval_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (ll_backend__layout_out__succeeded)
      {
        ll_backend__layout_out__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypesRval_17, (MR_Integer) 1)));
        ll_backend__layout_out__succeeded = ((MR_tag((MR_Word) ll_backend__layout_out__V_57_57)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__layout_out__succeeded)
          {
            ll_backend__layout_out__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__V_57_57, (MR_Integer) 0)));
            ll_backend__layout_out__succeeded = (ll_backend__layout_out__V_58_58 == (MR_Integer) 0);
          }
      }
    if (ll_backend__layout_out__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "0");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__DataId_56;
        MR_Word ll_backend__layout_out__V_61_61;
        MR_Word ll_backend__layout_out__V_62_62;

        ll_backend__layout_out__succeeded = ((((MR_tag((MR_Word) ll_backend__layout_out__TypesRval_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypesRval_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ll_backend__layout_out__succeeded)
          {
            ll_backend__layout_out__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypesRval_17, (MR_Integer) 1)));
            ll_backend__layout_out__succeeded = ((((MR_tag((MR_Word) ll_backend__layout_out__V_61_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_61_61, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (ll_backend__layout_out__succeeded)
              {
                ll_backend__layout_out__DataId_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_61_61, (MR_Integer) 1)));
                ll_backend__layout_out__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_61_61, (MR_Integer) 2)));
                ll_backend__layout_out__succeeded = (ll_backend__layout_out__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
        if (ll_backend__layout_out__succeeded)
          {
            ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__DataId_56);
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__TypesRval_17);
            }
          }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
    if ((ll_backend__layout_out__SynthOrder_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL, NULL }");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__SynthAttrsLayoutName_21;
        MR_Word ll_backend__layout_out__SynthOrderLayoutName_22;

        {
          ll_backend__layout_out__SynthAttrsLayoutName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__SynthAttrsLayoutName_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__SynthAttrsLayoutName_21, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_8));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__SynthAttrsLayoutName_21, 2) = ((MR_Box) (ll_backend__layout_out__EventNumber_12));
        }
        {
          ll_backend__layout_out__SynthOrderLayoutName_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__SynthOrderLayoutName_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__SynthOrderLayoutName_22, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_8));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__SynthOrderLayoutName_22, 2) = ((MR_Box) (ll_backend__layout_out__EventNumber_12));
        }
        {
          ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__SynthAttrsLayoutName_21);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n\t");
        }
        {
          ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__SynthOrderLayoutName_22);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " }");
        }
      }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_5_p_0(
  MR_Word ll_backend__layout_out__ModuleName_6,
  MR_Integer ll_backend__layout_out__EventNumber_7,
  MR_Word ll_backend__layout_out__Attr_8)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__MaybeSynthCall_10;
    MR_Integer ll_backend__layout_out__V_39_39;
    MR_String ll_backend__layout_out__V_40_40;
    MR_Word ll_backend__layout_out__V_41_41;
    MR_Word ll_backend__layout_out__V_42_42;

    {
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    ll_backend__layout_out__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_8, (MR_Integer) 0)));
    ll_backend__layout_out__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_8, (MR_Integer) 1)));
    ll_backend__layout_out__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_8, (MR_Integer) 2)));
    ll_backend__layout_out__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_8, (MR_Integer) 3)));
    ll_backend__layout_out__MaybeSynthCall_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_8, (MR_Integer) 4)));
    if ((ll_backend__layout_out__MaybeSynthCall_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "-1, -1, NULL, NULL");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__SynthCall_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeSynthCall_10, (MR_Integer) 0)));
        MR_Integer ll_backend__layout_out__FuncAttrNum_13;
        MR_Word ll_backend__layout_out__ArgAttrNameNums_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SynthCall_11, (MR_Integer) 1)));
        MR_Integer ll_backend__layout_out__AttrNumber_16;
        MR_Word ll_backend__layout_out__ArgsLayoutName_17;
        MR_Word ll_backend__layout_out__OrderLayoutName_18;
        MR_Word ll_backend__layout_out__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SynthCall_11, (MR_Integer) 0)));
        MR_Integer ll_backend__layout_out__V_29_29;
        MR_Word ll_backend__layout_out___EvalOrder_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SynthCall_11, (MR_Integer) 2)));
        MR_String ll_backend__layout_out___FuncAttrName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_25_25, (MR_Integer) 0)));
        MR_String ll_backend__layout_out__V_43_43;
        MR_Word ll_backend__layout_out__V_44_44;
        MR_Word ll_backend__layout_out__V_45_45;
        MR_Word ll_backend__layout_out__V_46_46;

        ll_backend__layout_out__FuncAttrNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_25_25, (MR_Integer) 1)));
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__FuncAttrNum_13);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
        {
          ll_backend__layout_out__V_29_29 = mercury__list__length_1_f_0((MR_Word) &ll_backend__layout_out_scalar_common_2[1], ll_backend__layout_out__ArgAttrNameNums_14);
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__V_29_29);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n ");
        }
        ll_backend__layout_out__AttrNumber_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_8, (MR_Integer) 0)));
        ll_backend__layout_out__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_8, (MR_Integer) 1)));
        ll_backend__layout_out__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_8, (MR_Integer) 2)));
        ll_backend__layout_out__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_8, (MR_Integer) 3)));
        ll_backend__layout_out__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_8, (MR_Integer) 4)));
        {
          ll_backend__layout_out__ArgsLayoutName_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__ArgsLayoutName_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__ArgsLayoutName_17, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_6));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__ArgsLayoutName_17, 2) = ((MR_Box) (ll_backend__layout_out__EventNumber_7));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__ArgsLayoutName_17, 3) = ((MR_Box) (ll_backend__layout_out__AttrNumber_16));
        }
        {
          ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__ArgsLayoutName_17);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n ");
        }
        {
          ll_backend__layout_out__OrderLayoutName_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__OrderLayoutName_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__OrderLayoutName_18, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_6));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__OrderLayoutName_18, 2) = ((MR_Box) (ll_backend__layout_out__EventNumber_7));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__OrderLayoutName_18, 3) = ((MR_Box) (ll_backend__layout_out__AttrNumber_16));
        }
        {
          ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__OrderLayoutName_18);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) " }");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_7_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_7_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_synth_attr_args_7_p_0(
  MR_Word ll_backend__layout_out__ModuleName_8,
  MR_Integer ll_backend__layout_out__EventNumber_9,
  MR_Word ll_backend__layout_out__Attr_10,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_23,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_24)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__MaybeSynthCall_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_10, (MR_Integer) 4)));
    MR_Integer ll_backend__layout_out__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_10, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_10, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_10, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_10, (MR_Integer) 3)));

    if ((ll_backend__layout_out__MaybeSynthCall_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__layout_out__STATE_VARIABLE_DeclSet_24 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_23;
    else
      {
        MR_Word ll_backend__layout_out__TypeCtorInfo_61_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word ll_backend__layout_out__SynthCall_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeSynthCall_13, (MR_Integer) 0)));
        MR_Word ll_backend__layout_out__ArgAttrNameNums_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SynthCall_14, (MR_Integer) 1)));
        MR_Word ll_backend__layout_out__Order_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SynthCall_14, (MR_Integer) 2)));
        MR_Word ll_backend__layout_out__ArgAttrNums_18;
        MR_Integer ll_backend__layout_out__AttrNumber_19;
        MR_Word ll_backend__layout_out__ArgsLayoutName_20;
        MR_Word ll_backend__layout_out__OrderLayoutName_21;
        MR_Word ll_backend__layout_out__OrderSentinel_22;
        MR_Word ll_backend__layout_out__V_27_27;
        MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_28_28;
        MR_Word ll_backend__layout_out__V_38_38;
        MR_Word ll_backend__layout_out___FuncAttrNameNum_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SynthCall_14, (MR_Integer) 0)));
        MR_String ll_backend__layout_out__V_56_56;
        MR_Word ll_backend__layout_out__V_57_57;
        MR_Word ll_backend__layout_out__V_58_58;
        MR_Word ll_backend__layout_out__V_59_59;

        {
          mercury__assoc_list__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__layout_out__TypeCtorInfo_61_61, ll_backend__layout_out__ArgAttrNameNums_16, &ll_backend__layout_out__ArgAttrNums_18);
        }
        ll_backend__layout_out__AttrNumber_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_10, (MR_Integer) 0)));
        ll_backend__layout_out__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_10, (MR_Integer) 1)));
        ll_backend__layout_out__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_10, (MR_Integer) 2)));
        ll_backend__layout_out__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_10, (MR_Integer) 3)));
        ll_backend__layout_out__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_10, (MR_Integer) 4)));
        {
          ll_backend__layout_out__ArgsLayoutName_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__ArgsLayoutName_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__ArgsLayoutName_20, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_8));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__ArgsLayoutName_20, 2) = ((MR_Box) (ll_backend__layout_out__EventNumber_9));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__ArgsLayoutName_20, 3) = ((MR_Box) (ll_backend__layout_out__AttrNumber_19));
        }
        {
          ll_backend__layout_out__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_27_27, 1) = ((MR_Box) (ll_backend__layout_out__ArgsLayoutName_20));
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_27_27, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_23, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_28_28);
        }
        {
          ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__ArgsLayoutName_20, (MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " =\n{ ");
        }
        {
          mercury__io__write_list_5_p_0(ll_backend__layout_out__TypeCtorInfo_61_61, ll_backend__layout_out__ArgAttrNums_18, (MR_String) ", ", (MR_Word) &ll_backend__layout_out_scalar_common_2[9]);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " };\n\n");
        }
        {
          ll_backend__layout_out__OrderLayoutName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__OrderLayoutName_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__OrderLayoutName_21, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_8));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__OrderLayoutName_21, 2) = ((MR_Box) (ll_backend__layout_out__EventNumber_9));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__OrderLayoutName_21, 3) = ((MR_Box) (ll_backend__layout_out__AttrNumber_19));
        }
        {
          ll_backend__layout_out__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_38_38, 1) = ((MR_Box) (ll_backend__layout_out__OrderLayoutName_21));
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_38_38, ll_backend__layout_out__STATE_VARIABLE_DeclSet_28_28, ll_backend__layout_out__STATE_VARIABLE_DeclSet_24);
        }
        {
          ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__OrderLayoutName_21, (MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " =\n{ ");
        }
        {
          ll_backend__layout_out__OrderSentinel_22 = mercury__list__f_43_43_2_f_0(ll_backend__layout_out__TypeCtorInfo_61_61, ll_backend__layout_out__Order_17, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_1[4]));
        }
        {
          mercury__io__write_list_5_p_0(ll_backend__layout_out__TypeCtorInfo_61_61, ll_backend__layout_out__OrderSentinel_22, (MR_String) ", ", (MR_Word) &ll_backend__layout_out_scalar_common_2[10]);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " };\n\n");
        }
      }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_attr_name_3_p_0(
  MR_Word ll_backend__layout_out__Attr_4)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__V_10_10;
    MR_Integer ll_backend__layout_out__V_14_14;
    MR_Word ll_backend__layout_out__V_15_15;
    MR_Word ll_backend__layout_out__V_16_16;
    MR_Word ll_backend__layout_out__V_17_17;

    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    ll_backend__layout_out__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_4, (MR_Integer) 0)));
    ll_backend__layout_out__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_4, (MR_Integer) 1)));
    ll_backend__layout_out__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_4, (MR_Integer) 2)));
    ll_backend__layout_out__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_4, (MR_Integer) 3)));
    ll_backend__layout_out__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Attr_4, (MR_Integer) 4)));
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_10_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_4(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_3(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      ll_backend__layout_out__output_synth_attr_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Word ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_24;

    {
      ll_backend__layout_out__output_synth_attr_args_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Word) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_24);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_24));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      ll_backend__layout_out__output_attr_name_3_p_0(((MR_Word) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_spec_components_6_p_0(
  MR_Word ll_backend__layout_out__ModuleName_7,
  MR_Word ll_backend__layout_out__EventSpec_8,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_21,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_22)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_68_68;
    MR_Integer ll_backend__layout_out__EventNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSpec_8, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__Attrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSpec_8, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__SynthOrder_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSpec_8, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__AttrNamesLayoutName_16;
    MR_Word ll_backend__layout_out__V_25_25;
    MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_26_26;
    MR_String ll_backend__layout_out___EventName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSpec_8, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out___EventLineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSpec_8, (MR_Integer) 2)));

    {
      ll_backend__layout_out__AttrNamesLayoutName_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__AttrNamesLayoutName_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__AttrNamesLayoutName_16, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_7));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__AttrNamesLayoutName_16, 2) = ((MR_Box) (ll_backend__layout_out__EventNumber_11));
    }
    {
      ll_backend__layout_out__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_25_25, 1) = ((MR_Box) (ll_backend__layout_out__AttrNamesLayoutName_16));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_25_25, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_21, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_26_26);
    }
    {
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__AttrNamesLayoutName_16, (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    ll_backend__layout_out__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0;
    {
      mercury__io__write_list_5_p_0(ll_backend__layout_out__TypeCtorInfo_68_68, ll_backend__layout_out__Attrs_14, (MR_String) ", ", (MR_Word) &ll_backend__layout_out_scalar_common_2[7]);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
    }
    if ((ll_backend__layout_out__SynthOrder_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__layout_out__STATE_VARIABLE_DeclSet_22 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_26_26;
    else
      {
        MR_Word ll_backend__layout_out__TypeCtorInfo_79_79;
        MR_Word ll_backend__layout_out__SynthAttrsLayoutName_19;
        MR_Word ll_backend__layout_out__SynthOrderLayoutName_20;
        MR_Word ll_backend__layout_out__V_36_36;
        MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_37_37;
        MR_Word ll_backend__layout_out__V_39_39;
        MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_40_40;
        MR_Word ll_backend__layout_out__V_46_46;
        MR_Word ll_backend__layout_out__V_50_50;
        MR_Word ll_backend__layout_out__V_56_56;
        MR_Box ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_37_37;
        MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_38_38;

        {
          ll_backend__layout_out__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_36_36, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_36_36, 1) = ((MR_Box) (ll_backend__layout_out__output_event_spec_components_6_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_36_36, 3) = ((MR_Box) (ll_backend__layout_out__ModuleName_7));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_36_36, 4) = ((MR_Box) (ll_backend__layout_out__EventNumber_11));
        }
        {
          mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_68_68, (MR_Word) &ll_backend__layout_out_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_36_36, ll_backend__layout_out__Attrs_14, ((MR_Box) (ll_backend__layout_out__STATE_VARIABLE_DeclSet_26_26)), &ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_37_37, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_38_38);
        }
        ll_backend__layout_out__STATE_VARIABLE_DeclSet_37_37 = ((MR_Word) ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_37_37);
        {
          ll_backend__layout_out__SynthAttrsLayoutName_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__SynthAttrsLayoutName_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__SynthAttrsLayoutName_19, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_7));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__SynthAttrsLayoutName_19, 2) = ((MR_Box) (ll_backend__layout_out__EventNumber_11));
        }
        {
          ll_backend__layout_out__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_39_39, 1) = ((MR_Box) (ll_backend__layout_out__SynthAttrsLayoutName_19));
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_39_39, ll_backend__layout_out__STATE_VARIABLE_DeclSet_37_37, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_40_40);
        }
        {
          ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__SynthAttrsLayoutName_19, (MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
        {
          ll_backend__layout_out__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_46_46, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_8[1]));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_46_46, 1) = ((MR_Box) (ll_backend__layout_out__output_event_spec_components_6_p_0_3));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_46_46, 3) = ((MR_Box) (ll_backend__layout_out__ModuleName_7));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_46_46, 4) = ((MR_Box) (ll_backend__layout_out__EventNumber_11));
        }
        {
          mercury__io__write_list_5_p_0(ll_backend__layout_out__TypeCtorInfo_68_68, ll_backend__layout_out__Attrs_14, (MR_String) ",\n", ll_backend__layout_out__V_46_46);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
        }
        {
          ll_backend__layout_out__SynthOrderLayoutName_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__SynthOrderLayoutName_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__SynthOrderLayoutName_20, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_7));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__SynthOrderLayoutName_20, 2) = ((MR_Box) (ll_backend__layout_out__EventNumber_11));
        }
        {
          ll_backend__layout_out__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_50_50, 1) = ((MR_Box) (ll_backend__layout_out__SynthOrderLayoutName_20));
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_50_50, ll_backend__layout_out__STATE_VARIABLE_DeclSet_40_40, ll_backend__layout_out__STATE_VARIABLE_DeclSet_22);
        }
        {
          ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__SynthOrderLayoutName_20, (MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
        ll_backend__layout_out__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          ll_backend__layout_out__V_56_56 = mercury__list__f_43_43_2_f_0(ll_backend__layout_out__TypeCtorInfo_79_79, ll_backend__layout_out__SynthOrder_15, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_1[4]));
        }
        {
          mercury__io__write_list_5_p_0(ll_backend__layout_out__TypeCtorInfo_79_79, ll_backend__layout_out__V_56_56, (MR_String) ", ", (MR_Word) &ll_backend__layout_out_scalar_common_2[8]);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
        }
      }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_9_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      ll_backend__layout_out__output_event_spec_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_9_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Word ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_22;

    {
      ll_backend__layout_out__output_event_spec_components_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Word) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_22);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_22));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_event_specs_and_components_9_p_0(
  MR_Word ll_backend__layout_out__Info_10,
  MR_Word ll_backend__layout_out__EventSpecs_11,
  MR_Word ll_backend__layout_out__ModuleName_12,
  MR_Word ll_backend__layout_out__TypesRvalMap_13,
  MR_Word * ll_backend__layout_out__LayoutName_14,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_17,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_18)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_40_40;
    MR_Word ll_backend__layout_out__V_21_21;
    MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_22_22;
    MR_Word ll_backend__layout_out__V_24_24;
    MR_Word ll_backend__layout_out__V_31_31;
    MR_Box ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_22_22;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23;

    {
      ll_backend__layout_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[13]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 1) = ((MR_Box) (ll_backend__layout_out__output_event_specs_and_components_9_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 3) = ((MR_Box) (ll_backend__layout_out__ModuleName_12));
    }
    ll_backend__layout_out__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0;
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_40_40, (MR_Word) &ll_backend__layout_out_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_21_21, ll_backend__layout_out__EventSpecs_11, ((MR_Box) (ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_17)), &ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_22_22, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23);
    }
    ll_backend__layout_out__STATE_VARIABLE_DeclSet_22_22 = ((MR_Word) ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_22_22);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__layout_out__LayoutName_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_12));
    }
    {
      ll_backend__layout_out__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_24_24, 1) = ((MR_Box) (*ll_backend__layout_out__LayoutName_14));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_24_24, ll_backend__layout_out__STATE_VARIABLE_DeclSet_22_22, ll_backend__layout_out__STATE_VARIABLE_DeclSet_18);
    }
    {
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(*ll_backend__layout_out__LayoutName_14, (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    {
      ll_backend__layout_out__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_31_31, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[14]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_31_31, 1) = ((MR_Box) (ll_backend__layout_out__output_event_specs_and_components_9_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_31_31, 3) = ((MR_Box) (ll_backend__layout_out__Info_10));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_31_31, 4) = ((MR_Box) (ll_backend__layout_out__ModuleName_12));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_31_31, 5) = ((MR_Box) (ll_backend__layout_out__TypesRvalMap_13));
    }
    {
      mercury__io__write_list_5_p_0(ll_backend__layout_out__TypeCtorInfo_40_40, ll_backend__layout_out__EventSpecs_11, (MR_String) ",\n", ll_backend__layout_out__V_31_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
    }
  }
}

static MR_Integer MR_CALL 
ll_backend__layout_out__layout_version_number_0_f_0(void)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    return (MR_Integer) 5;
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__subst_to_name_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__Str_5;
    MR_Integer ll_backend__layout_out__TVar_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));
    MR_String ll_backend__layout_out__TypeStr_6;
    MR_Word ll_backend__layout_out__V_7_7;
    MR_String ll_backend__layout_out__V_17_17;
    MR_String ll_backend__layout_out__V_18_18;

    {
      ll_backend__layout_out__V_7_7 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
    {
      ll_backend__layout_out__TypeStr_6 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(ll_backend__layout_out__V_7_7, (MR_Integer) 0, ll_backend__layout_out__Type_4);
    }
    {
      ll_backend__layout_out__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "/", ll_backend__layout_out__TypeStr_6);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__TVar_3, &ll_backend__layout_out__V_18_18);
    }
    {
      ll_backend__layout_out__Str_5 = mercury__string__f_43_43_2_f_0(ll_backend__layout_out__V_18_18, ll_backend__layout_out__V_17_17);
    }
    return ll_backend__layout_out__Str_5;
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__ints_to_string_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__HeadVar__2_2;

    if ((ll_backend__layout_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__layout_out__HeadVar__2_2 = (MR_String) "";
    else
      {
        MR_Integer ll_backend__layout_out__N_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__layout_out__Ns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ll_backend__layout_out__V_6_6;
        MR_String ll_backend__layout_out__V_7_7;
        MR_String ll_backend__layout_out__V_8_8;

        {
          ll_backend__layout_out__V_7_7 = mercury__string__int_to_string_1_f_0(ll_backend__layout_out__N_3);
        }
        {
          ll_backend__layout_out__V_8_8 = ll_backend__layout_out__ints_to_string_1_f_0(ll_backend__layout_out__Ns_4);
        }
        {
          ll_backend__layout_out__V_6_6 = mercury__string__f_43_43_2_f_0(ll_backend__layout_out__V_7_7, ll_backend__layout_out__V_8_8);
        }
        {
          ll_backend__layout_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__layout_out__V_6_6);
        }
      }
    return ll_backend__layout_out__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0_3(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__layout_out__wrapper_arg_2;
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_String ll_backend__layout_out__conv2_HeadVar__2_2;

    {
      ll_backend__layout_out__conv2_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) ll_backend__layout_out__wrapper_arg_1));
    }
    ll_backend__layout_out__wrapper_arg_2 = ((MR_Box) (ll_backend__layout_out__conv2_HeadVar__2_2));
    return ll_backend__layout_out__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__layout_out__wrapper_arg_2;
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_String ll_backend__layout_out__conv1_Str_5;

    {
      ll_backend__layout_out__conv1_Str_5 = ll_backend__layout_out__subst_to_name_1_f_0(((MR_Word) ll_backend__layout_out__wrapper_arg_1));
    }
    ll_backend__layout_out__wrapper_arg_2 = ((MR_Box) (ll_backend__layout_out__conv1_Str_5));
    return ll_backend__layout_out__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1)
{
  {
    MR_Box ll_backend__layout_out__wrapper_arg_2;
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_String ll_backend__layout_out__conv0_HeadVar__2_2;

    {
      ll_backend__layout_out__conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) ll_backend__layout_out__wrapper_arg_1));
    }
    ll_backend__layout_out__wrapper_arg_2 = ((MR_Box) (ll_backend__layout_out__conv0_HeadVar__2_2));
    return ll_backend__layout_out__wrapper_arg_2;
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__pred_transform_name_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__layout_out__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__layout_out__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__layout_out__HeadVar__2_2 = (MR_String) "dep_par_conj_";
            break;
          case (MR_Integer) 1:
            ll_backend__layout_out__HeadVar__2_2 = (MR_String) "par_lc";
            break;
          case (MR_Integer) 2:
            ll_backend__layout_out__HeadVar__2_2 = (MR_String) "table_gen";
            break;
          case (MR_Integer) 3:
            ll_backend__layout_out__HeadVar__2_2 = (MR_String) "stm_expansion";
            break;
          case (MR_Integer) 4:
            ll_backend__layout_out__HeadVar__2_2 = (MR_String) "structure_reuse";
            break;
          case (MR_Integer) 5:
            ll_backend__layout_out__HeadVar__2_2 = (MR_String) "ssdebug";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__layout_out__Seq_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0)));
          MR_String ll_backend__layout_out__V_5_5;

          {
            ll_backend__layout_out__V_5_5 = mercury__string__int_to_string_1_f_0(ll_backend__layout_out__Seq_3);
          }
          {
            ll_backend__layout_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "ho", ll_backend__layout_out__V_5_5);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__layout_out__Proc_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0)));
          MR_String ll_backend__layout_out__V_8_8;

          {
            ll_backend__layout_out__V_8_8 = mercury__string__int_to_string_1_f_0(ll_backend__layout_out__Proc_6);
          }
          {
            ll_backend__layout_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "hoproc", ll_backend__layout_out__V_8_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__layout_out__Substs_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__layout_out__V_11_11;

              {
                ll_backend__layout_out__V_11_11 = mercury__list__map_2_f_0((MR_Word) &ll_backend__layout_out_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__layout_out_scalar_common_2[5], ll_backend__layout_out__Substs_9);
              }
              {
                ll_backend__layout_out__HeadVar__2_2 = mercury__string__join_list_2_f_0((MR_String) "_", ll_backend__layout_out__V_11_11);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__layout_out__Posns_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__V_15_15;
              MR_Word ll_backend__layout_out__V_17_17;

              {
                ll_backend__layout_out__V_17_17 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__layout_out_scalar_common_2[6], ll_backend__layout_out__Posns_13);
              }
              {
                ll_backend__layout_out__V_15_15 = mercury__string__join_list_2_f_0((MR_String) "_", ll_backend__layout_out__V_17_17);
              }
              {
                ll_backend__layout_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "ua_", ll_backend__layout_out__V_15_15);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__layout_out__Posns_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__V_21_21;
              MR_Word ll_backend__layout_out__V_23_23;

              {
                ll_backend__layout_out__V_23_23 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__layout_out_scalar_common_2[4], ll_backend__layout_out__Posns_19);
              }
              {
                ll_backend__layout_out__V_21_21 = mercury__string__join_list_2_f_0((MR_String) "_", ll_backend__layout_out__V_23_23);
              }
              {
                ll_backend__layout_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "acc_", ll_backend__layout_out__V_21_21);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer ll_backend__layout_out__Proc_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__V_27_27;

              {
                ll_backend__layout_out__V_27_27 = mercury__string__int_to_string_1_f_0(ll_backend__layout_out__Proc_25);
              }
              {
                ll_backend__layout_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "inv_", ll_backend__layout_out__V_27_27);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer ll_backend__layout_out__Proc_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__V_30_30;

              {
                ll_backend__layout_out__V_30_30 = mercury__string__int_to_string_1_f_0(ll_backend__layout_out__Proc_28);
              }
              {
                ll_backend__layout_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "tup_", ll_backend__layout_out__V_30_30);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ll_backend__layout_out__Proc_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__V_33_33;

              {
                ll_backend__layout_out__V_33_33 = mercury__string__int_to_string_1_f_0(ll_backend__layout_out__Proc_31);
              }
              {
                ll_backend__layout_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "untup_", ll_backend__layout_out__V_33_33);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ll_backend__layout_out__ProcId_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__layout_out__ArgPos_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 2)));
              MR_String ll_backend__layout_out__V_37_37;
              MR_String ll_backend__layout_out__V_38_38;
              MR_Integer ll_backend__layout_out__V_39_39;
              MR_String ll_backend__layout_out__V_40_40;
              MR_String ll_backend__layout_out__V_42_42;

              {
                ll_backend__layout_out__V_39_39 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__layout_out__ProcId_34);
              }
              {
                ll_backend__layout_out__V_38_38 = mercury__string__int_to_string_1_f_0(ll_backend__layout_out__V_39_39);
              }
              {
                ll_backend__layout_out__V_42_42 = ll_backend__layout_out__ints_to_string_1_f_0(ll_backend__layout_out__ArgPos_35);
              }
              {
                ll_backend__layout_out__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "_args", ll_backend__layout_out__V_42_42);
              }
              {
                ll_backend__layout_out__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__layout_out__V_38_38, ll_backend__layout_out__V_40_40);
              }
              {
                ll_backend__layout_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "retptr_", ll_backend__layout_out__V_37_37);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ll_backend__layout_out__N_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__V_45_45;

              {
                ll_backend__layout_out__V_45_45 = mercury__string__int_to_string_1_f_0(ll_backend__layout_out__N_43);
              }
              {
                ll_backend__layout_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "dnf_", ll_backend__layout_out__V_45_45);
              }
            }
            break;
        }
        break;
    }
    return ll_backend__layout_out__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__origin_name_2_f_0(
  MR_Word ll_backend__layout_out__Origin_4,
  MR_String ll_backend__layout_out__Name0_5)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__Name_6;

    switch (MR_tag((MR_Word) ll_backend__layout_out__Origin_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__layout_out__Name_6 = ll_backend__layout_out__Name0_5;
        break;
      case (MR_Integer) 1:
        ll_backend__layout_out__Name_6 = ll_backend__layout_out__Name0_5;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__layout_out__Transform_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__Origin_4, (MR_Integer) 0)));
          MR_Word ll_backend__layout_out__OldOrigin_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__Origin_4, (MR_Integer) 1)));
          MR_String ll_backend__layout_out__OldName_17;
          MR_Word ll_backend__layout_out__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__Origin_4, (MR_Integer) 2)));

          {
            ll_backend__layout_out__OldName_17 = ll_backend__layout_out__origin_name_2_f_0(ll_backend__layout_out__OldOrigin_15, (MR_String) "");
          }
          ll_backend__layout_out__succeeded = (strcmp(ll_backend__layout_out__OldName_17, (MR_String) "") == 0);
          if (ll_backend__layout_out__succeeded)
            ll_backend__layout_out__Name_6 = ll_backend__layout_out__Name0_5;
          else
            {
              MR_String ll_backend__layout_out__V_33_33;
              MR_String ll_backend__layout_out__V_35_35;

              {
                ll_backend__layout_out__V_35_35 = ll_backend__layout_out__pred_transform_name_1_f_0(ll_backend__layout_out__Transform_14);
              }
              {
                ll_backend__layout_out__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__layout_out__V_35_35);
              }
              {
                ll_backend__layout_out__Name_6 = mercury__string__f_43_43_2_f_0(ll_backend__layout_out__OldName_17, ll_backend__layout_out__V_33_33);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Origin_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            ll_backend__layout_out__Name_6 = ll_backend__layout_out__Name0_5;
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__layout_out__FileName0_7 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Origin_4, (MR_Integer) 1)));
              MR_Integer ll_backend__layout_out__LineNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Origin_4, (MR_Integer) 2)));
              MR_Integer ll_backend__layout_out__SeqNo_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Origin_4, (MR_Integer) 3)));
              MR_String ll_backend__layout_out__V_10_10;

              {
                ll_backend__layout_out__succeeded = mercury__string__append_3_p_1((MR_String) "IntroducedFrom", &ll_backend__layout_out__V_10_10, ll_backend__layout_out__Name0_5);
              }
              if (ll_backend__layout_out__succeeded)
                {
                  MR_String ll_backend__layout_out__FileName_11;

                  {
                    mercury__string__replace_all_4_p_0(ll_backend__layout_out__FileName0_7, (MR_String) ".", (MR_String) "_", &ll_backend__layout_out__FileName_11);
                  }
                  ll_backend__layout_out__succeeded = (ll_backend__layout_out__SeqNo_9 > (MR_Integer) 1);
                  if (ll_backend__layout_out__succeeded)
                    {
                      MR_String ll_backend__layout_out__V_54_54;
                      MR_Word ll_backend__layout_out__V_60_60 = (MR_Word) &ll_backend__layout_out_scalar_common_4[3];
                      MR_String ll_backend__layout_out__V_62_62;
                      MR_String ll_backend__layout_out__V_63_63;
                      MR_String ll_backend__layout_out__V_65_65;
                      MR_String ll_backend__layout_out__V_66_66;
                      MR_String ll_backend__layout_out__V_73_73;

                      {
                        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_60_60, ll_backend__layout_out__LineNum_8, &ll_backend__layout_out__V_54_54);
                      }
                      {
                        ll_backend__layout_out__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__layout_out__V_54_54);
                      }
                      {
                        ll_backend__layout_out__V_63_63 = mercury__string__f_43_43_2_f_0(ll_backend__layout_out__FileName_11, ll_backend__layout_out__V_62_62);
                      }
                      {
                        ll_backend__layout_out__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__layout_out__V_63_63);
                      }
                      {
                        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_60_60, ll_backend__layout_out__SeqNo_9, &ll_backend__layout_out__V_66_66);
                      }
                      {
                        ll_backend__layout_out__V_73_73 = mercury__string__f_43_43_2_f_0(ll_backend__layout_out__V_66_66, ll_backend__layout_out__V_65_65);
                      }
                      {
                        ll_backend__layout_out__Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda", ll_backend__layout_out__V_73_73);
                      }
                    }
                  else
                    {
                      MR_String ll_backend__layout_out__V_75_75;
                      MR_String ll_backend__layout_out__V_83_83;
                      MR_String ll_backend__layout_out__V_84_84;

                      {
                        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__LineNum_8, &ll_backend__layout_out__V_75_75);
                      }
                      {
                        ll_backend__layout_out__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__layout_out__V_75_75);
                      }
                      {
                        ll_backend__layout_out__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__layout_out__FileName_11, ll_backend__layout_out__V_83_83);
                      }
                      {
                        ll_backend__layout_out__Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda_", ll_backend__layout_out__V_84_84);
                      }
                    }
                }
              else
                ll_backend__layout_out__Name_6 = ll_backend__layout_out__Name0_5;
            }
            break;
        }
        break;
    }
    return ll_backend__layout_out__Name_6;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_id_4_p_0(
  MR_Word ll_backend__layout_out__ProcLabel_5,
  MR_Word ll_backend__layout_out__Origin_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    if (((MR_tag((MR_Word) ll_backend__layout_out__ProcLabel_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ll_backend__layout_out__DefiningModule_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLabel_5, (MR_Integer) 0)));
        MR_Word ll_backend__layout_out__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLabel_5, (MR_Integer) 1)));
        MR_Word ll_backend__layout_out__DeclaringModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLabel_5, (MR_Integer) 2)));
        MR_String ll_backend__layout_out__PredName0_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLabel_5, (MR_Integer) 3)));
        MR_Integer ll_backend__layout_out__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLabel_5, (MR_Integer) 4)));
        MR_Integer ll_backend__layout_out__Mode_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLabel_5, (MR_Integer) 5)));
        MR_String ll_backend__layout_out__PredName_14;
        MR_String ll_backend__layout_out__V_46_46;
        MR_String ll_backend__layout_out__V_50_50;

        {
          ll_backend__layout_out__PredName_14 = ll_backend__layout_out__origin_name_2_f_0(ll_backend__layout_out__Origin_6, ll_backend__layout_out__PredName0_11);
        }
        switch (ll_backend__layout_out__PredOrFunc_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_FUNCTION");
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_PREDICATE");
              }
            }
            break;
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          ll_backend__layout_out__V_46_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__layout_out__DeclaringModule_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\"");
        }
        {
          backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__layout_out__V_46_46);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\"");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          ll_backend__layout_out__V_50_50 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__layout_out__DefiningModule_8);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\"");
        }
        {
          backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__layout_out__V_50_50);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\"");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          ll_backend__layout_out__quote_and_write_string_3_p_0(ll_backend__layout_out__PredName_14);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__Arity_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__Mode_13);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__SpecialPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__ProcLabel_5, (MR_Integer) 1)));
        MR_Word ll_backend__layout_out__TypeModule_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__ProcLabel_5, (MR_Integer) 2)));
        MR_String ll_backend__layout_out__TypeName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__ProcLabel_5, (MR_Integer) 3)));
        MR_Integer ll_backend__layout_out__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__ProcLabel_5, (MR_Integer) 4)));
        MR_Word ll_backend__layout_out__TypeCtor_19;
        MR_Word ll_backend__layout_out__V_22_22;
        MR_String ll_backend__layout_out__V_26_26;
        MR_String ll_backend__layout_out__V_30_30;
        MR_Word ll_backend__layout_out__DefiningModule_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__ProcLabel_5, (MR_Integer) 0)));
        MR_String ll_backend__layout_out__PredName0_64;
        MR_Integer ll_backend__layout_out__Mode_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__ProcLabel_5, (MR_Integer) 5)));
        MR_String ll_backend__layout_out__PredName_66;

        {
          ll_backend__layout_out__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__layout_out__V_22_22, 0) = ((MR_Box) (ll_backend__layout_out__TypeModule_16));
          MR_hl_field(MR_mktag(1), ll_backend__layout_out__V_22_22, 1) = ((MR_Box) (ll_backend__layout_out__TypeName_17));
        }
        {
          ll_backend__layout_out__TypeCtor_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__TypeCtor_19, 0) = ((MR_Box) (ll_backend__layout_out__V_22_22));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__TypeCtor_19, 1) = ((MR_Box) (ll_backend__layout_out__TypeArity_18));
        }
        {
          ll_backend__layout_out__PredName0_64 = hlds__special_pred__special_pred_name_2_f_0(ll_backend__layout_out__SpecialPredId_15, ll_backend__layout_out__TypeCtor_19);
        }
        {
          ll_backend__layout_out__PredName_66 = ll_backend__layout_out__origin_name_2_f_0(ll_backend__layout_out__Origin_6, ll_backend__layout_out__PredName0_64);
        }
        {
          ll_backend__layout_out__quote_and_write_string_3_p_0(ll_backend__layout_out__TypeName_17);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          ll_backend__layout_out__V_26_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__layout_out__TypeModule_16);
        }
        {
          ll_backend__layout_out__quote_and_write_string_3_p_0(ll_backend__layout_out__V_26_26);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          ll_backend__layout_out__V_30_30 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__layout_out__DefiningModule_63);
        }
        {
          ll_backend__layout_out__quote_and_write_string_3_p_0(ll_backend__layout_out__V_30_30);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          ll_backend__layout_out__quote_and_write_string_3_p_0(ll_backend__layout_out__PredName_66);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__TypeArity_18);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__Mode_65);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_bytecodes_6_p_0(
  MR_Word ll_backend__layout_out__Bytes_7,
  MR_Word * ll_backend__layout_out__BytesLeft_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Seq_0_14,
  MR_Integer ll_backend__layout_out__MaxSeq_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__Bytes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__layout_out__BytesLeft_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer ll_backend__layout_out__Head_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__Bytes_7, (MR_Integer) 0)));
            MR_Word ll_backend__layout_out__Tail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__Bytes_7, (MR_Integer) 1)));

            ll_backend__layout_out__succeeded = (ll_backend__layout_out__STATE_VARIABLE_Seq_0_14 < ll_backend__layout_out__MaxSeq_10);
            if (ll_backend__layout_out__succeeded)
              {
                MR_Integer ll_backend__layout_out__STATE_VARIABLE_Seq_20_27;
                MR_Integer ll_backend__layout_out__V_22_22;

                {
                  mercury__io__write_int_3_p_0(ll_backend__layout_out__Head_12);
                }
                {
                  mercury__io__write_char_3_p_0((MR_Char) 44);
                }
                ll_backend__layout_out__STATE_VARIABLE_Seq_20_27 = (ll_backend__layout_out__STATE_VARIABLE_Seq_0_14 + (MR_Integer) 1);
                ll_backend__layout_out__V_22_22 = (ll_backend__layout_out__STATE_VARIABLE_Seq_20_27 % (MR_Integer) 16);
                ll_backend__layout_out__succeeded = (ll_backend__layout_out__V_22_22 == (MR_Integer) 0);
                if (ll_backend__layout_out__succeeded)
                  {
                    {
                      mercury__io__write_char_3_p_0((MR_Char) 10);
                    }
                  }
                else
                  {
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__layout_out__Bytes__tmp_copy_7 = ll_backend__layout_out__Tail_13;
                  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Seq_0__tmp_copy_14 = ll_backend__layout_out__STATE_VARIABLE_Seq_20_27;

                  ll_backend__layout_out__STATE_VARIABLE_Seq_0_14 = ll_backend__layout_out__STATE_VARIABLE_Seq_0__tmp_copy_14;
                  ll_backend__layout_out__Bytes_7 = ll_backend__layout_out__Bytes__tmp_copy_7;
                }
                continue;
              }
            else
              *ll_backend__layout_out__BytesLeft_8 = ll_backend__layout_out__Bytes_7;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__output_bytecodes_driver_3_p_0(
  MR_Word ll_backend__layout_out__Bytes_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__Bytes_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__layout_out__BytesLeft_8;

            {
              ll_backend__layout_out__output_bytecodes_6_p_0(ll_backend__layout_out__Bytes_4, &ll_backend__layout_out__BytesLeft_8, (MR_Integer) 0, (MR_Integer) 256);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__layout_out__Bytes__tmp_copy_4 = ll_backend__layout_out__BytesLeft_8;

              ll_backend__layout_out__Bytes_4 = ll_backend__layout_out__Bytes__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static MR_String MR_CALL 
ll_backend__layout_out__detism_to_c_detism_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__HeadVar__2_2 = ((&ll_backend__layout_out_vector_common_5[16 + ll_backend__layout_out__HeadVar__1_1]))->ll_backend__layout_out__vector_common_type_5_0__vct_5_f_0;

    return ll_backend__layout_out__HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_rval_as_addr_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__Rval_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded = ((((MR_tag((MR_Word) ll_backend__layout_out__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__V_11_11;
    MR_Integer ll_backend__layout_out__V_12_12;

    if (ll_backend__layout_out__succeeded)
      {
        ll_backend__layout_out__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Rval_6, (MR_Integer) 1)));
        ll_backend__layout_out__succeeded = ((MR_tag((MR_Word) ll_backend__layout_out__V_11_11)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__layout_out__succeeded)
          {
            ll_backend__layout_out__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__V_11_11, (MR_Integer) 0)));
            ll_backend__layout_out__succeeded = (ll_backend__layout_out__V_12_12 == (MR_Integer) 0);
          }
      }
    if (ll_backend__layout_out__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "0");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__DataId_8;
        MR_Word ll_backend__layout_out__V_15_15;
        MR_Word ll_backend__layout_out__V_16_16;

        ll_backend__layout_out__succeeded = ((((MR_tag((MR_Word) ll_backend__layout_out__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ll_backend__layout_out__succeeded)
          {
            ll_backend__layout_out__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Rval_6, (MR_Integer) 1)));
            ll_backend__layout_out__succeeded = ((((MR_tag((MR_Word) ll_backend__layout_out__V_15_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_15_15, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (ll_backend__layout_out__succeeded)
              {
                ll_backend__layout_out__DataId_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_15_15, (MR_Integer) 1)));
                ll_backend__layout_out__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_15_15, (MR_Integer) 2)));
                ll_backend__layout_out__succeeded = (ll_backend__layout_out__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
        if (ll_backend__layout_out__succeeded)
          {
            ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(ll_backend__layout_out__Info_5, ll_backend__layout_out__DataId_8);
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__layout_out__Info_5, ll_backend__layout_out__Rval_6);
            }
          }
      }
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__proc_layout_kind_to_type_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__HeadVar__2_2;

    if ((ll_backend__layout_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_ProcLayout_Traversal";
    else
      {
        MR_Word ll_backend__layout_out__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0)));

        switch (ll_backend__layout_out__V_5_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_ProcLayoutUCI";
            break;
          case (MR_Integer) 0:
            ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_ProcLayoutUser";
            break;
        }
      }
    return ll_backend__layout_out__HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_layout_decl_5_p_0(
  MR_Word ll_backend__layout_out__LayoutName_6,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_9,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_10)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__V_13_13;

    {
      ll_backend__layout_out__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_13_13, 1) = ((MR_Box) (ll_backend__layout_out__LayoutName_6));
    }
    {
      ll_backend__layout_out__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__layout_out__V_13_13, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_9);
    }
    if (ll_backend__layout_out__succeeded)
      *ll_backend__layout_out__STATE_VARIABLE_DeclSet_10 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_9;
    else
      {
        MR_Word ll_backend__layout_out__V_18_18;

        {
          ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__LayoutName_6, (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
        {
          ll_backend__layout_out__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_18_18, 1) = ((MR_Box) (ll_backend__layout_out__LayoutName_6));
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_18_18, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_9, ll_backend__layout_out__STATE_VARIABLE_DeclSet_10);
        }
      }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_alloc_site_slot_6_p_0(
  MR_Word ll_backend__layout_out___Info_7,
  MR_Word ll_backend__layout_out__AllocSite_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_17,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_18)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    {
      ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_97_108_108_111_99_95_115_105_116_101_95_115_108_111_116_95_95_91_49_93_95_48_6_p_0(ll_backend__layout_out__AllocSite_8, ll_backend__layout_out__STATE_VARIABLE_Slot_0_17, ll_backend__layout_out__STATE_VARIABLE_Slot_18);
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_alloc_sites_array_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_18;

    {
      ll_backend__layout_out__output_alloc_site_slot_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_18);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_18));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_alloc_sites_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__AllocSites_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_47_47;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumAllocSitess_9;
    MR_Word ll_backend__layout_out__V_21_21;
    MR_String ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Integer ll_backend__layout_out__V_10_10;
    MR_Box ll_backend__layout_out__conv2_V_10_10;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23;

    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)), (MR_Integer) 1);
    }
    ll_backend__layout_out__TypeCtorInfo_47_47 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0;
    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_47_47, ll_backend__layout_out__AllocSites_6, &ll_backend__layout_out__NumAllocSitess_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumAllocSitess_9, &ll_backend__layout_out__V_58_58);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_58_58);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    {
      ll_backend__layout_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[12]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 1) = ((MR_Box) (ll_backend__layout_out__output_alloc_sites_array_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 3) = ((MR_Box) (ll_backend__layout_out__Info_5));
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_47_47, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_21_21, ll_backend__layout_out__AllocSites_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv2_V_10_10, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23);
    }
    ll_backend__layout_out__V_10_10 = ((MR_Integer) ll_backend__layout_out__conv2_V_10_10);
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_String ll_backend__layout_out__String_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_12,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_13)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    MR_String ll_backend__layout_out__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));

    switch (ll_backend__layout_out__AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__layout_out__V_50_50;

          {
            mercury__io__write_string_3_p_0((MR_String) "/* ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__STATE_VARIABLE_Slot_0_12, &ll_backend__layout_out__V_50_50);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_50_50);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */ ");
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__layout_out__String_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", 0},\n");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_13 = ll_backend__layout_out__STATE_VARIABLE_Slot_0_12;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_array_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_13;

    {
      ll_backend__layout_out__output_threadscope_string_table_slot_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_String) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_13);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_13));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_threadscope_string_table_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__TSStringTable_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumStrings_9;
    MR_Word ll_backend__layout_out__V_23_23;
    MR_String ll_backend__layout_out__V_60_60;
    MR_Word ll_backend__layout_out__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Integer ll_backend__layout_out__V_11_11;
    MR_Box ll_backend__layout_out__conv2_V_11_11;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_25_25;

    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_49_49, ll_backend__layout_out__TSStringTable_6, &ll_backend__layout_out__NumStrings_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_THREADSCOPE\n");
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumStrings_9, &ll_backend__layout_out__V_60_60);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_60_60);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    {
      ll_backend__layout_out__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_23_23, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[11]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_23_23, 1) = ((MR_Box) (ll_backend__layout_out__output_threadscope_string_table_array_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_23_23, 3) = ((MR_Box) (ll_backend__layout_out__Info_5));
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_49_49, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_23_23, ll_backend__layout_out__TSStringTable_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_25_25);
    }
    ll_backend__layout_out__V_11_11 = ((MR_Integer) ll_backend__layout_out__conv2_V_11_11);
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n#endif\n\n");
    }
  }
}

static MR_String MR_CALL 
ll_backend__layout_out__eval_method_to_c_string_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__layout_out__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__layout_out__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_NORMAL";
            break;
          case (MR_Integer) 1:
            ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_LOOP_CHECK";
            break;
          case (MR_Integer) 2:
            ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_MEMO";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__layout_out__EntryKind_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__layout_out__Unitize_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 1)));

          switch (ll_backend__layout_out__EntryKind_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (ll_backend__layout_out__Unitize_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_TABLE_IO";
                  break;
                case (MR_Integer) 0:
                  ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_TABLE_IO_UNITIZE";
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (ll_backend__layout_out__Unitize_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_TABLE_IO_DECL";
                  break;
                case (MR_Integer) 0:
                  ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_TABLE_IO_UNITIZE_DECL";
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (ll_backend__layout_out__Unitize_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_TABLE_IO";
                  break;
                case (MR_Integer) 0:
                  ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_TABLE_IO_UNITIZE";
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__layout_out__MinimalMethod_3 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0)));

          switch (ll_backend__layout_out__MinimalMethod_3) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_MINIMAL_OWN_STACKS_CONSUMER";
              break;
            case (MR_Integer) 2:
              ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_MINIMAL_OWN_STACKS_GENERATOR";
              break;
            case (MR_Integer) 0:
              ll_backend__layout_out__HeadVar__2_2 = (MR_String) "MR_EVAL_METHOD_MINIMAL_STACK_COPY";
              break;
          }
        }
        break;
    }
    return ll_backend__layout_out__HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__layout_out__write_maybe_slot_num_3_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    if ((ll_backend__layout_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_int_3_p_0((MR_Integer) -1);
        }
      }
    else
      {
        MR_Integer ll_backend__layout_out__SlotNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__HeadVar__1_1, (MR_Integer) 0)));

        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__SlotNum_4);
        }
      }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_exec_trace_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__ExecTrace_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_39,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_40)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__MaybeCallLabelSlotName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__EventLayoutsSlotName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumEventLayouts_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__MaybeTableInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__MaybeHeadVarsSlotName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 4)));
    MR_Integer ll_backend__layout_out__NumHeadVarNums_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__MaybeVarNamesSlotName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 6)));
    MR_Integer ll_backend__layout_out__MaxVarNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 7)));
    MR_Integer ll_backend__layout_out__MaxRegR_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 8)));
    MR_Integer ll_backend__layout_out__MaxRegF_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 9)));
    MR_Word ll_backend__layout_out__MaybeFromFullSlot_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 10)));
    MR_Word ll_backend__layout_out__MaybeIoSeqSlot_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 11)));
    MR_Word ll_backend__layout_out__MaybeTrailSlot_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 12)));
    MR_Word ll_backend__layout_out__MaybeMaxfrSlot_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 13)));
    MR_Word ll_backend__layout_out__EvalMethod_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 14)));
    MR_Word ll_backend__layout_out__MaybeCallTableSlot_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 15)));
    MR_Word ll_backend__layout_out__MaybeTailRecSlot_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 16)));
    MR_Word ll_backend__layout_out__EffTraceLevel_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 17)));
    MR_Integer ll_backend__layout_out__Flags_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ExecTrace_8, (MR_Integer) 18)));
    MR_Word ll_backend__layout_out__AutoComments_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_String ll_backend__layout_out__MangledModuleName_31;
    MR_Word ll_backend__layout_out__ModuleName_33;
    MR_Word ll_backend__layout_out__V_60_60;
    MR_String ll_backend__layout_out__V_120_120;
    MR_String ll_backend__layout_out__V_127_127;
    MR_Word ll_backend__layout_out__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_138_138 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    MR_String ll_backend__layout_out__V_139_139 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_145_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_148_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_149_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_151_151 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_152_152 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_153_153 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_154_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_155_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_156_156 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    MR_Word ll_backend__layout_out__V_158_158;
    MR_String ll_backend__layout_out__V_159_159;
    MR_Word ll_backend__layout_out__V_160_160;
    MR_Word ll_backend__layout_out__V_161_161;
    MR_Word ll_backend__layout_out__V_162_162;
    MR_Word ll_backend__layout_out__V_163_163;
    MR_Word ll_backend__layout_out__V_164_164;
    MR_Word ll_backend__layout_out__V_165_165;
    MR_Word ll_backend__layout_out__V_166_166;
    MR_Word ll_backend__layout_out__V_167_167;
    MR_Word ll_backend__layout_out__V_168_168;
    MR_Word ll_backend__layout_out__V_169_169;
    MR_Word ll_backend__layout_out__V_170_170;
    MR_Word ll_backend__layout_out__V_171_171;
    MR_Word ll_backend__layout_out__V_172_172;
    MR_Word ll_backend__layout_out__V_173_173;
    MR_Word ll_backend__layout_out__V_174_174;
    MR_Word ll_backend__layout_out__V_175_175;
    MR_Word ll_backend__layout_out__V_176_176;
    MR_Word ll_backend__layout_out__V_177_177;
    MR_Word ll_backend__layout_out__V_178_178;
    MR_String ll_backend__layout_out__V_179_179;
    MR_String ll_backend__layout_out__V_180_180;
    MR_Word ll_backend__layout_out__V_181_181;
    MR_Word ll_backend__layout_out__V_182_182;
    MR_Word ll_backend__layout_out__V_183_183;
    MR_Word ll_backend__layout_out__V_184_184;
    MR_Word ll_backend__layout_out__V_185_185;
    MR_Word ll_backend__layout_out__V_186_186;
    MR_Word ll_backend__layout_out__V_187_187;
    MR_Word ll_backend__layout_out__V_188_188;
    MR_Word ll_backend__layout_out__V_189_189;
    MR_Word ll_backend__layout_out__V_190_190;
    MR_Word ll_backend__layout_out__V_191_191;
    MR_Word ll_backend__layout_out__V_192_192;
    MR_Word ll_backend__layout_out__V_193_193;
    MR_Word ll_backend__layout_out__V_194_194;
    MR_Word ll_backend__layout_out__V_195_195;
    MR_Word ll_backend__layout_out__V_196_196;
    MR_Word ll_backend__layout_out__V_197_197;
    MR_Word ll_backend__layout_out__V_198_198;
    MR_Word ll_backend__layout_out__V_199_199;

    {
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    switch (ll_backend__layout_out__AutoComments_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__layout_out__V_203_203;

          {
            mercury__io__write_string_3_p_0((MR_String) "/* ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__STATE_VARIABLE_Slot_0_39, &ll_backend__layout_out__V_203_203);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_203_203);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */ ");
          }
        }
        break;
    }
    ll_backend__layout_out__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    ll_backend__layout_out__MangledModuleName_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    ll_backend__layout_out__V_159_159 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    ll_backend__layout_out__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    ll_backend__layout_out__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    ll_backend__layout_out__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    ll_backend__layout_out__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    ll_backend__layout_out__V_164_164 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_165_165 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_166_166 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_167_167 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_168_168 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_169_169 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_170_170 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_171_171 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_172_172 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_173_173 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_174_174 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_175_175 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_176_176 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_177_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    if ((ll_backend__layout_out__MaybeCallLabelSlotName_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL,\n  ");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__CallLabelSlotName_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeCallLabelSlotName_11, (MR_Integer) 0)));

        {
          mercury__io__write_string_3_p_0((MR_String) "(MR_LabelLayout *) ");
        }
        {
          ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__MangledModuleName_31, ll_backend__layout_out__CallLabelSlotName_32);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n  ");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "(const MR_ModuleLayout *) &");
    }
    ll_backend__layout_out__ModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    ll_backend__layout_out__V_179_179 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    ll_backend__layout_out__V_180_180 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    ll_backend__layout_out__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    ll_backend__layout_out__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    ll_backend__layout_out__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    ll_backend__layout_out__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    ll_backend__layout_out__V_185_185 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_186_186 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_187_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_188_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_189_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_190_190 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_191_191 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_192_192 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_193_193 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_194_194 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_195_195 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_196_196 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_197_197 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_198_198 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    {
      ll_backend__layout_out__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_60_60, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_33));
    }
    {
      ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__V_60_60);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    }
    {
      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__MangledModuleName_31, ll_backend__layout_out__EventLayoutsSlotName_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__NumEventLayouts_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    if ((ll_backend__layout_out__MaybeTableInfo_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__TableInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeTableInfo_14, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) ll_backend__layout_out__TableInfo_34)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ll_backend__layout_out__TableDataId_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__TableInfo_34, (MR_Integer) 0)));

            {
              mercury__io__write_string_3_p_0((MR_String) "(const void *) &");
            }
            {
              ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__TableDataId_36);
            }
          }
        else
          {
            MR_Word ll_backend__layout_out__TableSlotName_35 = (MR_Word) MR_body(((MR_Word) ll_backend__layout_out__TableInfo_34), (MR_Integer) 0);

            {
              mercury__io__write_string_3_p_0((MR_String) "(const void *) ");
            }
            {
              ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__MangledModuleName_31, ll_backend__layout_out__TableSlotName_35);
            }
          }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) " },\n  ");
    }
    if ((ll_backend__layout_out__MaybeHeadVarsSlotName_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__HeadVarNumsSlotName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeHeadVarsSlotName_15, (MR_Integer) 0)));

        {
          ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__MangledModuleName_31, ll_backend__layout_out__HeadVarNumsSlotName_37);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    if ((ll_backend__layout_out__MaybeVarNamesSlotName_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__VarNamesSlotName_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeVarNamesSlotName_17, (MR_Integer) 0)));

        {
          ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__MangledModuleName_31, ll_backend__layout_out__VarNamesSlotName_38);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__NumHeadVarNums_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__MaxVarNum_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__MaxRegR_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__MaxRegF_20);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      ll_backend__layout_out__write_maybe_slot_num_3_p_0(ll_backend__layout_out__MaybeFromFullSlot_21);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      ll_backend__layout_out__write_maybe_slot_num_3_p_0(ll_backend__layout_out__MaybeIoSeqSlot_22);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      ll_backend__layout_out__write_maybe_slot_num_3_p_0(ll_backend__layout_out__MaybeTrailSlot_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      ll_backend__layout_out__write_maybe_slot_num_3_p_0(ll_backend__layout_out__MaybeMaxfrSlot_24);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      ll_backend__layout_out__V_120_120 = ll_backend__layout_out__eval_method_to_c_string_1_f_0(ll_backend__layout_out__EvalMethod_25);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_120_120);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      ll_backend__layout_out__write_maybe_slot_num_3_p_0(ll_backend__layout_out__MaybeCallTableSlot_26);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      ll_backend__layout_out__V_127_127 = libs__trace_params__trace_level_rep_1_f_0(ll_backend__layout_out__EffTraceLevel_28);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_127_127);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__Flags_29);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      ll_backend__layout_out__write_maybe_slot_num_3_p_0(ll_backend__layout_out__MaybeTailRecSlot_27);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " },\n");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_40 = ll_backend__layout_out__STATE_VARIABLE_Slot_0_39;
  }
}

static void MR_CALL 
ll_backend__layout_out__output_exec_traces_array_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_40;

    {
      ll_backend__layout_out__output_exec_trace_slot_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_40);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_40));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_exec_traces_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__ExecTraces_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_47_47 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumExecTraces_9;
    MR_Word ll_backend__layout_out__V_21_21;
    MR_String ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Integer ll_backend__layout_out__V_11_11;
    MR_Box ll_backend__layout_out__conv2_V_11_11;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23;

    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_47_47, ll_backend__layout_out__ExecTraces_6, &ll_backend__layout_out__NumExecTraces_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumExecTraces_9, &ll_backend__layout_out__V_58_58);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_58_58);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    {
      ll_backend__layout_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[10]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 1) = ((MR_Box) (ll_backend__layout_out__output_exec_traces_array_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 3) = ((MR_Box) (ll_backend__layout_out__Info_5));
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_47_47, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_21_21, ll_backend__layout_out__ExecTraces_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23);
    }
    ll_backend__layout_out__V_11_11 = ((MR_Integer) ll_backend__layout_out__conv2_V_11_11);
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_event_layout_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__ProcEventLayoutSlotNames_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumProcEventLayoutSlotNames_9;
    MR_String ll_backend__layout_out__V_48_48;
    MR_Word ll_backend__layout_out__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));

    {
      mercury__list__length_2_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__layout_out__ProcEventLayoutSlotNames_6, &ll_backend__layout_out__NumProcEventLayoutSlotNames_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumProcEventLayoutSlotNames_9, &ll_backend__layout_out__V_48_48);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_48_48);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    {
      ll_backend__layout_out__output_layout_slots_in_vector_4_p_0(ll_backend__layout_out__ModuleName_8, ll_backend__layout_out__ProcEventLayoutSlotNames_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__TableIoEntry_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_18,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_19)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__ProcLayoutName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__TableIoEntry_8, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__MaybeArgInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__TableIoEntry_8, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__AutoComments_13;
    MR_Word ll_backend__layout_out__V_49_49;
    MR_String ll_backend__layout_out__V_50_50;
    MR_String ll_backend__layout_out__V_51_51;
    MR_Word ll_backend__layout_out__V_52_52;
    MR_Word ll_backend__layout_out__V_53_53;
    MR_Word ll_backend__layout_out__V_54_54;
    MR_Word ll_backend__layout_out__V_55_55;
    MR_Word ll_backend__layout_out__V_56_56;
    MR_Word ll_backend__layout_out__V_57_57;
    MR_Word ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_60_60;
    MR_Word ll_backend__layout_out__V_61_61;
    MR_Word ll_backend__layout_out__V_62_62;
    MR_Word ll_backend__layout_out__V_63_63;
    MR_Word ll_backend__layout_out__V_64_64;
    MR_Word ll_backend__layout_out__V_65_65;
    MR_Word ll_backend__layout_out__V_66_66;
    MR_Word ll_backend__layout_out__V_67_67;
    MR_Word ll_backend__layout_out__V_68_68;
    MR_Word ll_backend__layout_out__V_69_69;

    {
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    ll_backend__layout_out__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    ll_backend__layout_out__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    ll_backend__layout_out__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    ll_backend__layout_out__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    ll_backend__layout_out__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    ll_backend__layout_out__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    ll_backend__layout_out__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__layout_out__V_73_73;

          {
            mercury__io__write_string_3_p_0((MR_String) "/* ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__STATE_VARIABLE_Slot_0_18, &ll_backend__layout_out__V_73_73);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_73_73);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */\n  ");
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "(const MR_ProcLayout *) &");
    }
    {
      ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__ProcLayoutName_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    }
    if ((ll_backend__layout_out__MaybeArgInfos_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_FALSE, 0, NULL, NULL");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__ArgInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeArgInfos_12, (MR_Integer) 0)));
        MR_Integer ll_backend__layout_out__NumPTIs_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ArgInfos_14, (MR_Integer) 0)));
        MR_Word ll_backend__layout_out__PTIVectorRval_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ArgInfos_14, (MR_Integer) 1)));
        MR_Word ll_backend__layout_out__TypeParamsRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ArgInfos_14, (MR_Integer) 2)));

        {
          mercury__io__write_string_3_p_0((MR_String) "MR_TRUE,\n  ");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__NumPTIs_15);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n  (const MR_PseudoTypeInfo *) ");
        }
        {
          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__PTIVectorRval_16);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", (const MR_TypeParamLocns *) ");
        }
        {
          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__TypeParamsRval_17);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) " },\n");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_19 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_18 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_array_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_19;

    {
      ll_backend__layout_out__output_table_io_entry_slot_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_19);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_19));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_table_io_entry_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__TableIoEntries_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_47_47 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_entry_data_0;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumTableIoEntries_9;
    MR_Word ll_backend__layout_out__V_21_21;
    MR_String ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Integer ll_backend__layout_out__V_11_11;
    MR_Box ll_backend__layout_out__conv2_V_11_11;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23;

    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_47_47, ll_backend__layout_out__TableIoEntries_6, &ll_backend__layout_out__NumTableIoEntries_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumTableIoEntries_9, &ll_backend__layout_out__V_58_58);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_58_58);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    {
      ll_backend__layout_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[9]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 1) = ((MR_Box) (ll_backend__layout_out__output_table_io_entry_array_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 3) = ((MR_Box) (ll_backend__layout_out__Info_5));
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_47_47, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_21_21, ll_backend__layout_out__TableIoEntries_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23);
    }
    ll_backend__layout_out__V_11_11 = ((MR_Integer) ll_backend__layout_out__conv2_V_11_11);
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_body_bytecodes_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__Bytecodes_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumBytecodes_9;
    MR_Word ll_backend__layout_out__AutoComments_11;
    MR_String ll_backend__layout_out__V_73_73;
    MR_Word ll_backend__layout_out__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Word ll_backend__layout_out__V_48_48;
    MR_String ll_backend__layout_out__V_49_49;
    MR_String ll_backend__layout_out__V_50_50;
    MR_Word ll_backend__layout_out__V_51_51;
    MR_Word ll_backend__layout_out__V_52_52;
    MR_Word ll_backend__layout_out__V_53_53;
    MR_Word ll_backend__layout_out__V_54_54;
    MR_Word ll_backend__layout_out__V_55_55;
    MR_Word ll_backend__layout_out__V_56_56;
    MR_Word ll_backend__layout_out__V_57_57;
    MR_Word ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_60_60;
    MR_Word ll_backend__layout_out__V_61_61;
    MR_Word ll_backend__layout_out__V_62_62;
    MR_Word ll_backend__layout_out__V_63_63;
    MR_Word ll_backend__layout_out__V_64_64;
    MR_Word ll_backend__layout_out__V_65_65;
    MR_Word ll_backend__layout_out__V_66_66;
    MR_Word ll_backend__layout_out__V_67_67;
    MR_Word ll_backend__layout_out__V_68_68;

    {
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__layout_out__Bytecodes_6, &ll_backend__layout_out__NumBytecodes_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumBytecodes_9, &ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    ll_backend__layout_out__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    ll_backend__layout_out__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    ll_backend__layout_out__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    ll_backend__layout_out__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    ll_backend__layout_out__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    ll_backend__layout_out__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    ll_backend__layout_out__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(ll_backend__layout_out__Bytecodes_6, (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(ll_backend__layout_out__Bytecodes_6, (MR_Integer) 0);
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_var_names_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__VarNames_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumVarNames_9;
    MR_Word ll_backend__layout_out__AutoComments_11;
    MR_String ll_backend__layout_out__V_73_73;
    MR_Word ll_backend__layout_out__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Word ll_backend__layout_out__V_48_48;
    MR_String ll_backend__layout_out__V_49_49;
    MR_String ll_backend__layout_out__V_50_50;
    MR_Word ll_backend__layout_out__V_51_51;
    MR_Word ll_backend__layout_out__V_52_52;
    MR_Word ll_backend__layout_out__V_53_53;
    MR_Word ll_backend__layout_out__V_54_54;
    MR_Word ll_backend__layout_out__V_55_55;
    MR_Word ll_backend__layout_out__V_56_56;
    MR_Word ll_backend__layout_out__V_57_57;
    MR_Word ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_60_60;
    MR_Word ll_backend__layout_out__V_61_61;
    MR_Word ll_backend__layout_out__V_62_62;
    MR_Word ll_backend__layout_out__V_63_63;
    MR_Word ll_backend__layout_out__V_64_64;
    MR_Word ll_backend__layout_out__V_65_65;
    MR_Word ll_backend__layout_out__V_66_66;
    MR_Word ll_backend__layout_out__V_67_67;
    MR_Word ll_backend__layout_out__V_68_68;

    {
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__layout_out__VarNames_6, &ll_backend__layout_out__NumVarNames_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumVarNames_9, &ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {");
    }
    ll_backend__layout_out__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    ll_backend__layout_out__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    ll_backend__layout_out__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    ll_backend__layout_out__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    ll_backend__layout_out__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    ll_backend__layout_out__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    ll_backend__layout_out__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(ll_backend__layout_out__VarNames_6, (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(ll_backend__layout_out__VarNames_6, (MR_Integer) 0);
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_head_var_nums_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__HeadVarNums_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumHeadVarNums_9;
    MR_Word ll_backend__layout_out__AutoComments_11;
    MR_String ll_backend__layout_out__V_73_73;
    MR_Word ll_backend__layout_out__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Word ll_backend__layout_out__V_48_48;
    MR_String ll_backend__layout_out__V_49_49;
    MR_String ll_backend__layout_out__V_50_50;
    MR_Word ll_backend__layout_out__V_51_51;
    MR_Word ll_backend__layout_out__V_52_52;
    MR_Word ll_backend__layout_out__V_53_53;
    MR_Word ll_backend__layout_out__V_54_54;
    MR_Word ll_backend__layout_out__V_55_55;
    MR_Word ll_backend__layout_out__V_56_56;
    MR_Word ll_backend__layout_out__V_57_57;
    MR_Word ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_60_60;
    MR_Word ll_backend__layout_out__V_61_61;
    MR_Word ll_backend__layout_out__V_62_62;
    MR_Word ll_backend__layout_out__V_63_63;
    MR_Word ll_backend__layout_out__V_64_64;
    MR_Word ll_backend__layout_out__V_65_65;
    MR_Word ll_backend__layout_out__V_66_66;
    MR_Word ll_backend__layout_out__V_67_67;
    MR_Word ll_backend__layout_out__V_68_68;

    {
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__layout_out__HeadVarNums_6, &ll_backend__layout_out__NumHeadVarNums_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumHeadVarNums_9, &ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {");
    }
    ll_backend__layout_out__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    ll_backend__layout_out__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    ll_backend__layout_out__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    ll_backend__layout_out__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    ll_backend__layout_out__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    ll_backend__layout_out__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    ll_backend__layout_out__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(ll_backend__layout_out__HeadVarNums_6, (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(ll_backend__layout_out__HeadVarNums_6, (MR_Integer) 0);
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__ProcStatic_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_29,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_30)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcStatic_8, (MR_Integer) 0)));
    MR_Integer ll_backend__layout_out__LineNumber_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcStatic_8, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__IsInInterface_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcStatic_8, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__DeepExcpVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcStatic_8, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__MaybeCallSites_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcStatic_8, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__MaybeCoveragePoints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcStatic_8, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__AutoComments_17;
    MR_String ll_backend__layout_out__MangledModuleName_18;
    MR_Integer ll_backend__layout_out__TopCSDSlot_22;
    MR_Integer ll_backend__layout_out__MiddleCSDSlot_23;
    MR_Integer ll_backend__layout_out__OldOutermostSlot_24;
    MR_Word ll_backend__layout_out__V_110_110;
    MR_String ll_backend__layout_out__V_112_112;
    MR_Word ll_backend__layout_out__V_113_113;
    MR_Word ll_backend__layout_out__V_114_114;
    MR_Word ll_backend__layout_out__V_115_115;
    MR_Word ll_backend__layout_out__V_116_116;
    MR_Word ll_backend__layout_out__V_117_117;
    MR_Word ll_backend__layout_out__V_118_118;
    MR_Word ll_backend__layout_out__V_119_119;
    MR_Word ll_backend__layout_out__V_120_120;
    MR_Word ll_backend__layout_out__V_121_121;
    MR_Word ll_backend__layout_out__V_122_122;
    MR_Word ll_backend__layout_out__V_123_123;
    MR_Word ll_backend__layout_out__V_124_124;
    MR_Word ll_backend__layout_out__V_125_125;
    MR_Word ll_backend__layout_out__V_126_126;
    MR_Word ll_backend__layout_out__V_127_127;
    MR_Word ll_backend__layout_out__V_128_128;
    MR_Word ll_backend__layout_out__V_129_129;
    MR_Word ll_backend__layout_out__V_130_130;

    {
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    ll_backend__layout_out__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    ll_backend__layout_out__MangledModuleName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    ll_backend__layout_out__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    ll_backend__layout_out__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    ll_backend__layout_out__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    ll_backend__layout_out__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    ll_backend__layout_out__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_117_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_118_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_122_122 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__layout_out__V_155_155;

          {
            mercury__io__write_string_3_p_0((MR_String) "/* ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__STATE_VARIABLE_Slot_0_29, &ll_backend__layout_out__V_155_155);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_155_155);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */ ");
          }
        }
        break;
    }
    {
      ll_backend__layout_out__quote_and_write_string_3_p_0(ll_backend__layout_out__FileName_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__LineNumber_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    switch (ll_backend__layout_out__IsInInterface_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_FALSE");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_TRUE");
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    }
    if ((ll_backend__layout_out__MaybeCallSites_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "0,NULL,\n");
        }
      }
    else
      {
        MR_Integer ll_backend__layout_out__CallSitesSlot_19;
        MR_Integer ll_backend__layout_out__NumCallSites_20;
        MR_Word ll_backend__layout_out__CallSitesSlotName_21;
        MR_Tuple ll_backend__layout_out__V_54_54 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeCallSites_15, (MR_Integer) 0)));

        ll_backend__layout_out__CallSitesSlot_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_54_54, (MR_Integer) 0)));
        ll_backend__layout_out__NumCallSites_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_54_54, (MR_Integer) 1)));
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__NumCallSites_20);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",");
        }
        {
          ll_backend__layout_out__CallSitesSlotName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__CallSitesSlotName_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__CallSitesSlotName_21, 1) = ((MR_Box) (ll_backend__layout_out__CallSitesSlot_19));
        }
        {
          ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__MangledModuleName_18, ll_backend__layout_out__CallSitesSlotName_21);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_USE_ACTIVATION_COUNTS\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "0,\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "NULL,");
    }
    ll_backend__layout_out__TopCSDSlot_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DeepExcpVars_14, (MR_Integer) 0)));
    ll_backend__layout_out__MiddleCSDSlot_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DeepExcpVars_14, (MR_Integer) 1)));
    ll_backend__layout_out__OldOutermostSlot_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DeepExcpVars_14, (MR_Integer) 2)));
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__TopCSDSlot_22);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__MiddleCSDSlot_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__OldOutermostSlot_24);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n#ifdef MR_DEEP_PROFILING_COVERAGE\n");
    }
    if ((ll_backend__layout_out__MaybeCoveragePoints_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "0,NULL,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        MR_Integer ll_backend__layout_out__CoveragePointsSlot_25;
        MR_Integer ll_backend__layout_out__NumCoveragePoints_26;
        MR_Word ll_backend__layout_out__CoveragePointsStaticSlotName_27;
        MR_Word ll_backend__layout_out__CoveragePointsDynamicSlotName_28;
        MR_Tuple ll_backend__layout_out__V_88_88 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeCoveragePoints_16, (MR_Integer) 0)));

        ll_backend__layout_out__CoveragePointsSlot_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_88_88, (MR_Integer) 0)));
        ll_backend__layout_out__NumCoveragePoints_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_88_88, (MR_Integer) 1)));
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__NumCoveragePoints_26);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          ll_backend__layout_out__CoveragePointsStaticSlotName_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__CoveragePointsStaticSlotName_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__CoveragePointsStaticSlotName_27, 1) = ((MR_Box) (ll_backend__layout_out__CoveragePointsSlot_25));
        }
        {
          ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__MangledModuleName_18, ll_backend__layout_out__CoveragePointsStaticSlotName_27);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC\n");
        }
        {
          ll_backend__layout_out__CoveragePointsDynamicSlotName_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__CoveragePointsDynamicSlotName_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__CoveragePointsDynamicSlotName_28, 1) = ((MR_Box) (ll_backend__layout_out__CoveragePointsSlot_25));
        }
        {
          ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__MangledModuleName_18, ll_backend__layout_out__CoveragePointsDynamicSlotName_28);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n#endif\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " },\n");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_30 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_29 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_statics_array_defn_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_30;

    {
      ll_backend__layout_out__output_proc_static_slot_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_30);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_30));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_statics_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__ProcStatics_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_47_47 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_proc_static_0;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumProcStatics_9;
    MR_Word ll_backend__layout_out__V_21_21;
    MR_String ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Integer ll_backend__layout_out__V_11_11;
    MR_Box ll_backend__layout_out__conv2_V_11_11;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23;

    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_47_47, ll_backend__layout_out__ProcStatics_6, &ll_backend__layout_out__NumProcStatics_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumProcStatics_9, &ll_backend__layout_out__V_58_58);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_58_58);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    {
      ll_backend__layout_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[8]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 1) = ((MR_Box) (ll_backend__layout_out__output_proc_statics_array_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 3) = ((MR_Box) (ll_backend__layout_out__Info_5));
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_47_47, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_21_21, ll_backend__layout_out__ProcStatics_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23);
    }
    ll_backend__layout_out__V_11_11 = ((MR_Integer) ll_backend__layout_out__conv2_V_11_11);
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_dynamic_array_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Integer ll_backend__layout_out__NumCoveragePoints_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_String ll_backend__layout_out__V_43_43;
    MR_Word ll_backend__layout_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));

    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumCoveragePoints_6, &ll_backend__layout_out__V_43_43);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_43_43);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "];\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_slot_6_p_0(
  MR_Word ll_backend__layout_out__AutoComments_7,
  MR_Word ll_backend__layout_out__CoveragePoint_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_15,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_16)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__RevGoalPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__CoveragePoint_8, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__CPType_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__CoveragePoint_8, (MR_Integer) 1)));
    MR_String ll_backend__layout_out__GoalPathString_13;
    MR_String ll_backend__layout_out__CPTypeCValue_14;

    {
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    switch (ll_backend__layout_out__AutoComments_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__layout_out__V_39_39;

          {
            mercury__io__write_string_3_p_0((MR_String) "/* ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__STATE_VARIABLE_Slot_0_15, &ll_backend__layout_out__V_39_39);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_39_39);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */ ");
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      ll_backend__layout_out__GoalPathString_13 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(ll_backend__layout_out__RevGoalPath_11);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__GoalPathString_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\", ");
    }
    {
      mdbcomp__program_representation__coverage_point_type_c_value_2_p_0(ll_backend__layout_out__CPType_12, &ll_backend__layout_out__CPTypeCValue_14);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__CPTypeCValue_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " },\n");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_16 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_15 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_array_5_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_16;

    {
      ll_backend__layout_out__output_proc_static_cp_static_slot_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_16);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_16));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_proc_static_cp_static_array_5_p_0(
  MR_Word ll_backend__layout_out__Info_6,
  MR_Word ll_backend__layout_out__CoveragePoints_7,
  MR_Integer ll_backend__layout_out__NumCoveragePoints_8)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__AutoComments_12;
    MR_Word ll_backend__layout_out__V_23_23;
    MR_String ll_backend__layout_out__V_81_81;
    MR_Word ll_backend__layout_out__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 8)));
    MR_Word ll_backend__layout_out__V_49_49;
    MR_String ll_backend__layout_out__V_50_50;
    MR_String ll_backend__layout_out__V_51_51;
    MR_Word ll_backend__layout_out__V_52_52;
    MR_Word ll_backend__layout_out__V_53_53;
    MR_Word ll_backend__layout_out__V_54_54;
    MR_Word ll_backend__layout_out__V_55_55;
    MR_Word ll_backend__layout_out__V_56_56;
    MR_Word ll_backend__layout_out__V_57_57;
    MR_Word ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_60_60;
    MR_Word ll_backend__layout_out__V_61_61;
    MR_Word ll_backend__layout_out__V_62_62;
    MR_Word ll_backend__layout_out__V_63_63;
    MR_Word ll_backend__layout_out__V_64_64;
    MR_Word ll_backend__layout_out__V_65_65;
    MR_Word ll_backend__layout_out__V_66_66;
    MR_Word ll_backend__layout_out__V_67_67;
    MR_Word ll_backend__layout_out__V_68_68;
    MR_Word ll_backend__layout_out__V_69_69;
    MR_Integer ll_backend__layout_out__V_13_13;
    MR_Box ll_backend__layout_out__conv2_V_13_13;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_25_25;

    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumCoveragePoints_8, &ll_backend__layout_out__V_81_81);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_81_81);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    ll_backend__layout_out__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 0)));
    ll_backend__layout_out__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 1)));
    ll_backend__layout_out__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 2)));
    ll_backend__layout_out__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 3)));
    ll_backend__layout_out__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 4)));
    ll_backend__layout_out__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 5)));
    ll_backend__layout_out__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_6, (MR_Integer) 8)));
    {
      ll_backend__layout_out__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_23_23, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[7]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_23_23, 1) = ((MR_Box) (ll_backend__layout_out__output_proc_static_cp_static_array_5_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_23_23, 3) = ((MR_Box) (ll_backend__layout_out__AutoComments_12));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_23_23, ll_backend__layout_out__CoveragePoints_7, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv2_V_13_13, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_25_25);
    }
    ll_backend__layout_out__V_13_13 = ((MR_Integer) ll_backend__layout_out__conv2_V_13_13);
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__CallSiteStatic_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_20,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_21)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__AutoComments_11;
    MR_String ll_backend__layout_out__FileName_14;
    MR_Integer ll_backend__layout_out__LineNumber_15;
    MR_Word ll_backend__layout_out__GoalPath_16;
    MR_String ll_backend__layout_out__V_60_60;
    MR_Word ll_backend__layout_out__V_66_66;
    MR_String ll_backend__layout_out__V_67_67;
    MR_String ll_backend__layout_out__V_68_68;
    MR_Word ll_backend__layout_out__V_69_69;
    MR_Word ll_backend__layout_out__V_70_70;
    MR_Word ll_backend__layout_out__V_71_71;
    MR_Word ll_backend__layout_out__V_72_72;
    MR_Word ll_backend__layout_out__V_73_73;
    MR_Word ll_backend__layout_out__V_74_74;
    MR_Word ll_backend__layout_out__V_75_75;
    MR_Word ll_backend__layout_out__V_76_76;
    MR_Word ll_backend__layout_out__V_77_77;
    MR_Word ll_backend__layout_out__V_78_78;
    MR_Word ll_backend__layout_out__V_79_79;
    MR_Word ll_backend__layout_out__V_80_80;
    MR_Word ll_backend__layout_out__V_81_81;
    MR_Word ll_backend__layout_out__V_82_82;
    MR_Word ll_backend__layout_out__V_83_83;
    MR_Word ll_backend__layout_out__V_84_84;
    MR_Word ll_backend__layout_out__V_85_85;
    MR_Word ll_backend__layout_out__V_86_86;

    {
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    ll_backend__layout_out__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    ll_backend__layout_out__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    ll_backend__layout_out__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    ll_backend__layout_out__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    ll_backend__layout_out__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    ll_backend__layout_out__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    ll_backend__layout_out__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__layout_out__V_90_90;

          {
            mercury__io__write_string_3_p_0((MR_String) "/* ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__STATE_VARIABLE_Slot_0_20, &ll_backend__layout_out__V_90_90);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_90_90);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */ ");
          }
        }
        break;
    }
    switch (MR_tag((MR_Word) ll_backend__layout_out__CallSiteStatic_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__layout_out__Callee_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 0)));
          MR_String ll_backend__layout_out__TypeSubst_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 1)));
          MR_Word ll_backend__layout_out__CalleeProcLabel_17;
          MR_Word ll_backend__layout_out__CalleeUserOrUci_18;
          MR_Word ll_backend__layout_out__CalleeProcLayoutName_19;
          MR_Word ll_backend__layout_out__V_41_41;

          ll_backend__layout_out__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 2)));
          ll_backend__layout_out__LineNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 3)));
          ll_backend__layout_out__GoalPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 4)));
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_callsite_normal_call, (MR_ProcLayout *)\n&");
          }
          {
            ll_backend__layout_out__CalleeProcLabel_17 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__layout_out__Callee_12);
          }
          {
            ll_backend__layout_out__CalleeUserOrUci_18 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ll_backend__layout_out__CalleeProcLabel_17);
          }
          {
            ll_backend__layout_out__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__layout_out__V_41_41, 0) = ((MR_Box) (ll_backend__layout_out__CalleeUserOrUci_18));
          }
          {
            ll_backend__layout_out__CalleeProcLayoutName_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__layout_out__CalleeProcLayoutName_19, 0) = ((MR_Box) (ll_backend__layout_out__Callee_12));
            MR_hl_field(MR_mktag(0), ll_backend__layout_out__CalleeProcLayoutName_19, 1) = ((MR_Box) (ll_backend__layout_out__V_41_41));
          }
          {
            ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__CalleeProcLayoutName_19);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n");
          }
          ll_backend__layout_out__succeeded = (strcmp(ll_backend__layout_out__TypeSubst_13, (MR_String) "") == 0);
          if (ll_backend__layout_out__succeeded)
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "NULL, ");
              }
            }
          else
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__TypeSubst_13);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\", ");
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__layout_out__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 0)));
          ll_backend__layout_out__LineNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 1)));
          ll_backend__layout_out__GoalPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 2)));
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_callsite_special_call, NULL, NULL, ");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          ll_backend__layout_out__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 0)));
          ll_backend__layout_out__LineNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 1)));
          ll_backend__layout_out__GoalPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 2)));
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_callsite_higher_order_call, NULL, NULL, ");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ll_backend__layout_out__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 1)));
              ll_backend__layout_out__LineNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 2)));
              ll_backend__layout_out__GoalPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 3)));
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_callsite_method_call, NULL, NULL, ");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              ll_backend__layout_out__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 1)));
              ll_backend__layout_out__LineNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 2)));
              ll_backend__layout_out__GoalPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 3)));
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_callsite_callback, NULL, NULL, ");
              }
            }
            break;
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__FileName_14);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\", ");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__LineNumber_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", \"");
    }
    {
      ll_backend__layout_out__V_60_60 = mdbcomp__goal_path__goal_path_to_string_1_f_0(ll_backend__layout_out__GoalPath_16);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_60_60);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\" },\n");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_21 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_20 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_slot_decls_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__CallSiteStatic_8,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_32,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_33)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    switch (MR_tag((MR_Word) ll_backend__layout_out__CallSiteStatic_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__layout_out__Callee_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 0)));
          MR_Word ll_backend__layout_out__CalleeProcLabel_16;
          MR_Word ll_backend__layout_out__CalleeUserOrUci_17;
          MR_Word ll_backend__layout_out__CalleeProcLayoutName_18;
          MR_Word ll_backend__layout_out__CalleProcLayoutDataId_19;
          MR_Word ll_backend__layout_out__V_36_36;
          MR_String ll_backend__layout_out__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 1)));
          MR_String ll_backend__layout_out__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 2)));
          MR_Integer ll_backend__layout_out__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 3)));
          MR_Word ll_backend__layout_out__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 4)));

          {
            ll_backend__layout_out__CalleeProcLabel_16 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__layout_out__Callee_11);
          }
          if (((MR_tag((MR_Word) ll_backend__layout_out__CalleeProcLabel_16)) == (MR_mktag((MR_Integer) 0))))
            ll_backend__layout_out__CalleeUserOrUci_17 = (MR_Integer) 0;
          else
            ll_backend__layout_out__CalleeUserOrUci_17 = (MR_Integer) 1;
          {
            ll_backend__layout_out__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__layout_out__V_36_36, 0) = ((MR_Box) (ll_backend__layout_out__CalleeUserOrUci_17));
          }
          {
            ll_backend__layout_out__CalleeProcLayoutName_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__layout_out__CalleeProcLayoutName_18, 0) = ((MR_Box) (ll_backend__layout_out__Callee_11));
            MR_hl_field(MR_mktag(0), ll_backend__layout_out__CalleeProcLayoutName_18, 1) = ((MR_Box) (ll_backend__layout_out__V_36_36));
          }
          {
            ll_backend__layout_out__CalleProcLayoutDataId_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__layout_out__CalleProcLayoutDataId_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__layout_out__CalleProcLayoutDataId_19, 1) = ((MR_Box) (ll_backend__layout_out__CalleeProcLayoutName_18));
          }
          {
            ll_backend__llds_out__llds_out_data__output_record_data_id_decls_6_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__CalleProcLayoutDataId_19, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_32, ll_backend__layout_out__STATE_VARIABLE_DeclSet_33);
          }
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__layout_out__STATE_VARIABLE_DeclSet_33 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_32;
        break;
      case (MR_Integer) 2:
        *ll_backend__layout_out__STATE_VARIABLE_DeclSet_33 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_32;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__CallSiteStatic_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__layout_out__STATE_VARIABLE_DeclSet_33 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_32;
            break;
          case (MR_Integer) 1:
            *ll_backend__layout_out__STATE_VARIABLE_DeclSet_33 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_32;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_6_p_0_2(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv3_STATE_VARIABLE_Slot_21;

    {
      ll_backend__layout_out__output_call_site_static_slot_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv3_STATE_VARIABLE_Slot_21);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv3_STATE_VARIABLE_Slot_21));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_6_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Word ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_33;

    {
      ll_backend__layout_out__output_call_site_static_slot_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Word) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_33);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_DeclSet_33));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_call_site_static_array_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__CallSiteStatics_8,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_15,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_16)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_61_61;
    MR_Word ll_backend__layout_out__TypeCtorInfo_63_63;
    MR_String ll_backend__layout_out__ModuleName_11;
    MR_Integer ll_backend__layout_out__NumCallSiteStatics_13;
    MR_Word ll_backend__layout_out__V_19_19;
    MR_Word ll_backend__layout_out__V_30_30;
    MR_String ll_backend__layout_out__V_73_73;
    MR_Box ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_16;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_21_21;
    MR_Word ll_backend__layout_out__V_35_35;
    MR_String ll_backend__layout_out__V_36_36;
    MR_Word ll_backend__layout_out__V_37_37;
    MR_Word ll_backend__layout_out__V_38_38;
    MR_Word ll_backend__layout_out__V_39_39;
    MR_Word ll_backend__layout_out__V_40_40;
    MR_Word ll_backend__layout_out__V_41_41;
    MR_Word ll_backend__layout_out__V_42_42;
    MR_Word ll_backend__layout_out__V_43_43;
    MR_Word ll_backend__layout_out__V_44_44;
    MR_Word ll_backend__layout_out__V_45_45;
    MR_Word ll_backend__layout_out__V_46_46;
    MR_Word ll_backend__layout_out__V_47_47;
    MR_Word ll_backend__layout_out__V_48_48;
    MR_Word ll_backend__layout_out__V_49_49;
    MR_Word ll_backend__layout_out__V_50_50;
    MR_Word ll_backend__layout_out__V_51_51;
    MR_Word ll_backend__layout_out__V_52_52;
    MR_Word ll_backend__layout_out__V_53_53;
    MR_Word ll_backend__layout_out__V_54_54;
    MR_Word ll_backend__layout_out__V_55_55;
    MR_Integer ll_backend__layout_out__V_14_14;
    MR_Box ll_backend__layout_out__conv5_V_14_14;
    MR_Box ll_backend__layout_out__conv4_STATE_VARIABLE_IO_32_32;

    {
      ll_backend__layout_out__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_19_19, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[5]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_19_19, 1) = ((MR_Box) (ll_backend__layout_out__output_call_site_static_array_6_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_19_19, 3) = ((MR_Box) (ll_backend__layout_out__Info_7));
    }
    ll_backend__layout_out__TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_site_static_data_0;
    ll_backend__layout_out__TypeCtorInfo_63_63 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_61_61, (MR_Word) &ll_backend__layout_out_scalar_common_1[2], ll_backend__layout_out__TypeCtorInfo_63_63, ll_backend__layout_out__V_19_19, ll_backend__layout_out__CallSiteStatics_8, ((MR_Box) (ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_21_21);
    }
    *ll_backend__layout_out__STATE_VARIABLE_DeclSet_16 = ((MR_Word) ll_backend__layout_out__conv2_STATE_VARIABLE_DeclSet_16);
    {
      mercury__io__nl_2_p_0();
    }
    ll_backend__layout_out__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    ll_backend__layout_out__ModuleName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    ll_backend__layout_out__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    ll_backend__layout_out__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    ll_backend__layout_out__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    ll_backend__layout_out__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    ll_backend__layout_out__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    ll_backend__layout_out__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), (MR_Integer) 1);
    }
    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_61_61, ll_backend__layout_out__CallSiteStatics_8, &ll_backend__layout_out__NumCallSiteStatics_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumCallSiteStatics_13, &ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    {
      ll_backend__layout_out__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_30_30, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[6]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_30_30, 1) = ((MR_Box) (ll_backend__layout_out__output_call_site_static_array_6_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_30_30, 3) = ((MR_Box) (ll_backend__layout_out__Info_7));
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_61_61, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__layout_out__TypeCtorInfo_63_63, ll_backend__layout_out__V_30_30, ll_backend__layout_out__CallSiteStatics_8, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv5_V_14_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv4_STATE_VARIABLE_IO_32_32);
    }
    ll_backend__layout_out__V_14_14 = ((MR_Integer) ll_backend__layout_out__conv5_V_14_14);
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layout_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__LabelLayout_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_32,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_33)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__BasicLabelLayout_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelLayout_8, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__LabelVarInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelLayout_8, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__LabelNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__AutoComments_22;
    MR_Integer ll_backend__layout_out__EncodedVarCount_23;
    MR_Word ll_backend__layout_out__TypeParams_24;
    MR_Integer ll_backend__layout_out__PTIsSlot_25;
    MR_Integer ll_backend__layout_out__HLDSVarNumsSlot_26;
    MR_Integer ll_backend__layout_out__ShortLocnsSlot_27;
    MR_Integer ll_backend__layout_out__LongLocnsSlot_28;
    MR_Word ll_backend__layout_out__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_148_148 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_153_153 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_154_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_155_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_156_156 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_157_157 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_158_158 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_159_159 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_160_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_161_161 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_162_162 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_163_163 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_164_164 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_165_165 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_166_166 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    MR_Word ll_backend__layout_out___ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 4)));
    MR_Integer ll_backend__layout_out__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 7)));
    MR_Word ll_backend__layout_out__V_168_168;
    MR_String ll_backend__layout_out__V_169_169;
    MR_String ll_backend__layout_out__V_170_170;
    MR_Word ll_backend__layout_out__V_171_171;
    MR_Word ll_backend__layout_out__V_172_172;
    MR_Word ll_backend__layout_out__V_173_173;
    MR_Word ll_backend__layout_out__V_174_174;
    MR_Word ll_backend__layout_out__V_175_175;
    MR_Word ll_backend__layout_out__V_176_176;
    MR_Word ll_backend__layout_out__V_177_177;
    MR_Word ll_backend__layout_out__V_178_178;
    MR_Word ll_backend__layout_out__V_179_179;
    MR_Word ll_backend__layout_out__V_180_180;
    MR_Word ll_backend__layout_out__V_181_181;
    MR_Word ll_backend__layout_out__V_182_182;
    MR_Word ll_backend__layout_out__V_183_183;
    MR_Word ll_backend__layout_out__V_184_184;
    MR_Word ll_backend__layout_out__V_185_185;
    MR_Word ll_backend__layout_out__V_186_186;
    MR_Word ll_backend__layout_out__V_187_187;
    MR_Word ll_backend__layout_out__V_188_188;
    MR_Integer ll_backend__layout_out__V_56_56;
    MR_Integer ll_backend__layout_out__V_57_57;

    {
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    ll_backend__layout_out__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    ll_backend__layout_out__V_169_169 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    ll_backend__layout_out__V_170_170 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    ll_backend__layout_out__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    ll_backend__layout_out__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    ll_backend__layout_out__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    ll_backend__layout_out__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_175_175 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_176_176 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_177_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_178_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_179_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_180_180 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_181_181 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_182_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_183_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_186_186 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_187_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__layout_out__V_192_192;
          MR_Word ll_backend__layout_out__V_198_198;
          MR_String ll_backend__layout_out__V_202_202;

          {
            mercury__io__write_string_3_p_0((MR_String) "/* ");
          }
          ll_backend__layout_out__V_198_198 = (MR_Word) &ll_backend__layout_out_scalar_common_4[3];
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_198_198, ll_backend__layout_out__STATE_VARIABLE_Slot_0_32, &ll_backend__layout_out__V_192_192);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_192_192);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_198_198, ll_backend__layout_out__LabelNum_15, &ll_backend__layout_out__V_202_202);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_202_202);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */\n  ");
          }
        }
        break;
    }
    {
      ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_5_p_0(ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__BasicLabelLayout_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    }
    ll_backend__layout_out__EncodedVarCount_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelVarInfo_13, (MR_Integer) 0)));
    ll_backend__layout_out__TypeParams_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelVarInfo_13, (MR_Integer) 1)));
    ll_backend__layout_out__PTIsSlot_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelVarInfo_13, (MR_Integer) 2)));
    ll_backend__layout_out__HLDSVarNumsSlot_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelVarInfo_13, (MR_Integer) 3)));
    ll_backend__layout_out__ShortLocnsSlot_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelVarInfo_13, (MR_Integer) 4)));
    ll_backend__layout_out__LongLocnsSlot_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelVarInfo_13, (MR_Integer) 5)));
    ll_backend__layout_out__succeeded = (ll_backend__layout_out__LongLocnsSlot_28 >= (MR_Integer) 0);
    if (ll_backend__layout_out__succeeded)
      {
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.layout_out", (MR_String) "predicate \140ll_backend.layout_out.output_long_var_label_layout_slot\'/6", (MR_String) "no long locn");
          return;
        }
      }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__EncodedVarCount_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    ll_backend__layout_out__succeeded = (ll_backend__layout_out__PTIsSlot_25 >= (MR_Integer) 0);
    if (ll_backend__layout_out__succeeded)
      {
        ll_backend__layout_out__V_56_56 = (MR_Integer) 0;
        ll_backend__layout_out__succeeded = (ll_backend__layout_out__ShortLocnsSlot_27 >= ll_backend__layout_out__V_56_56);
        if (ll_backend__layout_out__succeeded)
          {
            ll_backend__layout_out__V_57_57 = (MR_Integer) 0;
            ll_backend__layout_out__succeeded = (ll_backend__layout_out__HLDSVarNumsSlot_26 >= ll_backend__layout_out__V_57_57);
          }
      }
    if (ll_backend__layout_out__succeeded)
      {
        MR_Word ll_backend__layout_out__V_58_58;
        MR_Integer ll_backend__layout_out__V_59_59;

        ll_backend__layout_out__succeeded = ((((MR_tag((MR_Word) ll_backend__layout_out__TypeParams_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypeParams_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ll_backend__layout_out__succeeded)
          {
            ll_backend__layout_out__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypeParams_24, (MR_Integer) 1)));
            ll_backend__layout_out__succeeded = ((MR_tag((MR_Word) ll_backend__layout_out__V_58_58)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__layout_out__succeeded)
              {
                ll_backend__layout_out__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__V_58_58, (MR_Integer) 0)));
                ll_backend__layout_out__succeeded = (ll_backend__layout_out__V_59_59 == (MR_Integer) 0);
              }
          }
        if (ll_backend__layout_out__succeeded)
          {
            MR_String ll_backend__layout_out__V_216_216;
            MR_Word ll_backend__layout_out__V_222_222;
            MR_String ll_backend__layout_out__V_226_226;
            MR_String ll_backend__layout_out__V_236_236;
            MR_String ll_backend__layout_out__V_246_246;

            {
              mercury__io__write_string_3_p_0((MR_String) "MR_LLVL0(");
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleName_11);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
            ll_backend__layout_out__V_222_222 = (MR_Word) &ll_backend__layout_out_scalar_common_4[3];
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_222_222, ll_backend__layout_out__PTIsSlot_25, &ll_backend__layout_out__V_216_216);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__layout_out__V_216_216);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_222_222, ll_backend__layout_out__HLDSVarNumsSlot_26, &ll_backend__layout_out__V_226_226);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__layout_out__V_226_226);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_222_222, ll_backend__layout_out__ShortLocnsSlot_27, &ll_backend__layout_out__V_236_236);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__layout_out__V_236_236);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_222_222, ll_backend__layout_out__LongLocnsSlot_28, &ll_backend__layout_out__V_246_246);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__layout_out__V_246_246);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        else
          {
            MR_Integer ll_backend__layout_out__TPTypeNum_30;
            MR_Integer ll_backend__layout_out__TPCellNum_31;
            MR_Word ll_backend__layout_out__TPDataId_29;
            MR_Word ll_backend__layout_out__V_73_73;
            MR_Word ll_backend__layout_out__V_74_74;
            MR_Word ll_backend__layout_out__V_75_75;

            ll_backend__layout_out__succeeded = ((((MR_tag((MR_Word) ll_backend__layout_out__TypeParams_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypeParams_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (ll_backend__layout_out__succeeded)
              {
                ll_backend__layout_out__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypeParams_24, (MR_Integer) 1)));
                ll_backend__layout_out__succeeded = ((((MR_tag((MR_Word) ll_backend__layout_out__V_73_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_73_73, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (ll_backend__layout_out__succeeded)
                  {
                    ll_backend__layout_out__TPDataId_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_73_73, (MR_Integer) 1)));
                    ll_backend__layout_out__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_73_73, (MR_Integer) 2)));
                    ll_backend__layout_out__succeeded = (ll_backend__layout_out__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (ll_backend__layout_out__succeeded)
                      {
                        ll_backend__layout_out__succeeded = ((MR_tag((MR_Word) ll_backend__layout_out__TPDataId_29)) == (MR_mktag((MR_Integer) 2)));
                        if (ll_backend__layout_out__succeeded)
                          {
                            ll_backend__layout_out__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__TPDataId_29, (MR_Integer) 0)));
                            ll_backend__layout_out__TPCellNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__TPDataId_29, (MR_Integer) 1)));
                            ll_backend__layout_out__TPTypeNum_30 = (MR_Integer) ll_backend__layout_out__V_75_75;
                            ll_backend__layout_out__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
            if (ll_backend__layout_out__succeeded)
              {
                MR_String ll_backend__layout_out__V_260_260;
                MR_Word ll_backend__layout_out__V_266_266;
                MR_String ll_backend__layout_out__V_270_270;
                MR_String ll_backend__layout_out__V_280_280;
                MR_String ll_backend__layout_out__V_290_290;
                MR_String ll_backend__layout_out__V_300_300;
                MR_String ll_backend__layout_out__V_310_310;

                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_LLVLC(");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleName_11);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                ll_backend__layout_out__V_266_266 = (MR_Word) &ll_backend__layout_out_scalar_common_4[3];
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_266_266, ll_backend__layout_out__TPTypeNum_30, &ll_backend__layout_out__V_260_260);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_260_260);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_266_266, ll_backend__layout_out__TPCellNum_31, &ll_backend__layout_out__V_270_270);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_270_270);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_266_266, ll_backend__layout_out__PTIsSlot_25, &ll_backend__layout_out__V_280_280);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_280_280);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_266_266, ll_backend__layout_out__HLDSVarNumsSlot_26, &ll_backend__layout_out__V_290_290);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_290_290);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_266_266, ll_backend__layout_out__ShortLocnsSlot_27, &ll_backend__layout_out__V_300_300);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_300_300);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_266_266, ll_backend__layout_out__LongLocnsSlot_28, &ll_backend__layout_out__V_310_310);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_310_310);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
            else
              {
                MR_String ll_backend__layout_out__V_324_324;
                MR_Word ll_backend__layout_out__V_330_330;
                MR_String ll_backend__layout_out__V_334_334;
                MR_String ll_backend__layout_out__V_344_344;
                MR_String ll_backend__layout_out__V_354_354;

                {
                  ll_backend__layout_out__output_rval_as_addr_4_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__TypeParams_24);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",MR_LLVL(");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleName_11);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                ll_backend__layout_out__V_330_330 = (MR_Word) &ll_backend__layout_out_scalar_common_4[3];
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_330_330, ll_backend__layout_out__PTIsSlot_25, &ll_backend__layout_out__V_324_324);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_324_324);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_330_330, ll_backend__layout_out__HLDSVarNumsSlot_26, &ll_backend__layout_out__V_334_334);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_334_334);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_330_330, ll_backend__layout_out__ShortLocnsSlot_27, &ll_backend__layout_out__V_344_344);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_344_344);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_330_330, ll_backend__layout_out__LongLocnsSlot_28, &ll_backend__layout_out__V_354_354);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_354_354);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
          }
      }
    else
      {
        MR_Word ll_backend__layout_out__V_140_140;

        {
          mercury__io__write_string_3_p_0((MR_String) "(const MR_TypeParamLocns *) ");
        }
        {
          ll_backend__layout_out__output_rval_as_addr_4_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__TypeParams_24);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",");
        }
        ll_backend__layout_out__succeeded = (ll_backend__layout_out__PTIsSlot_25 >= (MR_Integer) 0);
        if (ll_backend__layout_out__succeeded)
          {
            MR_Word ll_backend__layout_out__V_114_114;

            {
              ll_backend__layout_out__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_114_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_114_114, 1) = ((MR_Box) (ll_backend__layout_out__PTIsSlot_25));
            }
            {
              ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__V_114_114);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "0,");
            }
          }
        ll_backend__layout_out__succeeded = (ll_backend__layout_out__HLDSVarNumsSlot_26 >= (MR_Integer) 0);
        if (ll_backend__layout_out__succeeded)
          {
            MR_Word ll_backend__layout_out__V_123_123;

            {
              ll_backend__layout_out__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_123_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_123_123, 1) = ((MR_Box) (ll_backend__layout_out__HLDSVarNumsSlot_26));
            }
            {
              ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__V_123_123);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "0,");
            }
          }
        ll_backend__layout_out__succeeded = (ll_backend__layout_out__ShortLocnsSlot_27 >= (MR_Integer) 0);
        if (ll_backend__layout_out__succeeded)
          {
            MR_Word ll_backend__layout_out__V_132_132;

            {
              ll_backend__layout_out__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_132_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_132_132, 1) = ((MR_Box) (ll_backend__layout_out__ShortLocnsSlot_27));
            }
            {
              ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__V_132_132);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "0,");
            }
          }
        {
          ll_backend__layout_out__V_140_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_140_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_140_140, 1) = ((MR_Box) (ll_backend__layout_out__LongLocnsSlot_28));
        }
        {
          ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__V_140_140);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) " },\n");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_33 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_32 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layouts_array_defn_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_33;

    {
      ll_backend__layout_out__output_long_var_label_layout_slot_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_33);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_33));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_long_var_label_layouts_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__LabelLayouts_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_48_48 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_long_vars_0;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumLabelLayouts_9;
    MR_Word ll_backend__layout_out__V_22_22;
    MR_String ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Integer ll_backend__layout_out__V_11_11;
    MR_Box ll_backend__layout_out__conv2_V_11_11;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_24_24;

    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_48_48, ll_backend__layout_out__LabelLayouts_6, &ll_backend__layout_out__NumLabelLayouts_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_4[2]), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumLabelLayouts_9, &ll_backend__layout_out__V_59_59);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_59_59);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    {
      ll_backend__layout_out__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 1) = ((MR_Box) (ll_backend__layout_out__output_long_var_label_layouts_array_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 3) = ((MR_Box) (ll_backend__layout_out__Info_5));
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_48_48, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_22_22, ll_backend__layout_out__LabelLayouts_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_24_24);
    }
    ll_backend__layout_out__V_11_11 = ((MR_Integer) ll_backend__layout_out__conv2_V_11_11);
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layout_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__LabelLayout_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_31,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_32)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__BasicLabelLayout_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelLayout_8, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__LabelVarInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelLayout_8, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__LabelNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__AutoComments_22;
    MR_Integer ll_backend__layout_out__EncodedVarCount_23;
    MR_Word ll_backend__layout_out__TypeParams_24;
    MR_Integer ll_backend__layout_out__PTIsSlot_25;
    MR_Integer ll_backend__layout_out__HLDSVarNumsSlot_26;
    MR_Integer ll_backend__layout_out__ShortLocnsSlot_27;
    MR_Word ll_backend__layout_out__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_131_131 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_136_136 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_145_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_148_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_149_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    MR_Word ll_backend__layout_out___ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 4)));
    MR_Integer ll_backend__layout_out__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 7)));
    MR_Word ll_backend__layout_out__V_151_151;
    MR_String ll_backend__layout_out__V_152_152;
    MR_String ll_backend__layout_out__V_153_153;
    MR_Word ll_backend__layout_out__V_154_154;
    MR_Word ll_backend__layout_out__V_155_155;
    MR_Word ll_backend__layout_out__V_156_156;
    MR_Word ll_backend__layout_out__V_157_157;
    MR_Word ll_backend__layout_out__V_158_158;
    MR_Word ll_backend__layout_out__V_159_159;
    MR_Word ll_backend__layout_out__V_160_160;
    MR_Word ll_backend__layout_out__V_161_161;
    MR_Word ll_backend__layout_out__V_162_162;
    MR_Word ll_backend__layout_out__V_163_163;
    MR_Word ll_backend__layout_out__V_164_164;
    MR_Word ll_backend__layout_out__V_165_165;
    MR_Word ll_backend__layout_out__V_166_166;
    MR_Word ll_backend__layout_out__V_167_167;
    MR_Word ll_backend__layout_out__V_168_168;
    MR_Word ll_backend__layout_out__V_169_169;
    MR_Word ll_backend__layout_out__V_170_170;
    MR_Word ll_backend__layout_out__V_171_171;
    MR_Integer ll_backend__layout_out__V_51_51;
    MR_Integer ll_backend__layout_out__V_52_52;

    {
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    ll_backend__layout_out__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    ll_backend__layout_out__V_152_152 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    ll_backend__layout_out__V_153_153 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    ll_backend__layout_out__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    ll_backend__layout_out__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    ll_backend__layout_out__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    ll_backend__layout_out__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_158_158 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_159_159 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_160_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_161_161 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_162_162 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_163_163 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_164_164 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_165_165 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_166_166 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_167_167 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_168_168 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_169_169 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_170_170 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__layout_out__V_175_175;
          MR_Word ll_backend__layout_out__V_181_181;
          MR_String ll_backend__layout_out__V_185_185;

          {
            mercury__io__write_string_3_p_0((MR_String) "/* ");
          }
          ll_backend__layout_out__V_181_181 = (MR_Word) &ll_backend__layout_out_scalar_common_4[3];
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_181_181, ll_backend__layout_out__STATE_VARIABLE_Slot_0_31, &ll_backend__layout_out__V_175_175);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_175_175);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_181_181, ll_backend__layout_out__LabelNum_15, &ll_backend__layout_out__V_185_185);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_185_185);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */\n  ");
          }
        }
        break;
    }
    {
      ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_5_p_0(ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__BasicLabelLayout_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    }
    ll_backend__layout_out__EncodedVarCount_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelVarInfo_13, (MR_Integer) 0)));
    ll_backend__layout_out__TypeParams_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelVarInfo_13, (MR_Integer) 1)));
    ll_backend__layout_out__PTIsSlot_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelVarInfo_13, (MR_Integer) 2)));
    ll_backend__layout_out__HLDSVarNumsSlot_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelVarInfo_13, (MR_Integer) 3)));
    ll_backend__layout_out__ShortLocnsSlot_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__LabelVarInfo_13, (MR_Integer) 4)));
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__EncodedVarCount_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    ll_backend__layout_out__succeeded = (ll_backend__layout_out__PTIsSlot_25 >= (MR_Integer) 0);
    if (ll_backend__layout_out__succeeded)
      {
        ll_backend__layout_out__V_51_51 = (MR_Integer) 0;
        ll_backend__layout_out__succeeded = (ll_backend__layout_out__HLDSVarNumsSlot_26 >= ll_backend__layout_out__V_51_51);
        if (ll_backend__layout_out__succeeded)
          {
            ll_backend__layout_out__V_52_52 = (MR_Integer) 0;
            ll_backend__layout_out__succeeded = (ll_backend__layout_out__ShortLocnsSlot_27 >= ll_backend__layout_out__V_52_52);
          }
      }
    if (ll_backend__layout_out__succeeded)
      {
        MR_Word ll_backend__layout_out__V_53_53;
        MR_Integer ll_backend__layout_out__V_54_54;

        ll_backend__layout_out__succeeded = ((((MR_tag((MR_Word) ll_backend__layout_out__TypeParams_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypeParams_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ll_backend__layout_out__succeeded)
          {
            ll_backend__layout_out__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypeParams_24, (MR_Integer) 1)));
            ll_backend__layout_out__succeeded = ((MR_tag((MR_Word) ll_backend__layout_out__V_53_53)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__layout_out__succeeded)
              {
                ll_backend__layout_out__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__V_53_53, (MR_Integer) 0)));
                ll_backend__layout_out__succeeded = (ll_backend__layout_out__V_54_54 == (MR_Integer) 0);
              }
          }
        if (ll_backend__layout_out__succeeded)
          {
            MR_String ll_backend__layout_out__V_199_199;
            MR_Word ll_backend__layout_out__V_205_205;
            MR_String ll_backend__layout_out__V_209_209;
            MR_String ll_backend__layout_out__V_219_219;

            {
              mercury__io__write_string_3_p_0((MR_String) "MR_LLVS0(");
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleName_11);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
            ll_backend__layout_out__V_205_205 = (MR_Word) &ll_backend__layout_out_scalar_common_4[3];
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_205_205, ll_backend__layout_out__PTIsSlot_25, &ll_backend__layout_out__V_199_199);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__layout_out__V_199_199);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_205_205, ll_backend__layout_out__HLDSVarNumsSlot_26, &ll_backend__layout_out__V_209_209);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__layout_out__V_209_209);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_205_205, ll_backend__layout_out__ShortLocnsSlot_27, &ll_backend__layout_out__V_219_219);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__layout_out__V_219_219);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        else
          {
            MR_Integer ll_backend__layout_out__TPTypeNum_29;
            MR_Integer ll_backend__layout_out__TPCellNum_30;
            MR_Word ll_backend__layout_out__TPDataId_28;
            MR_Word ll_backend__layout_out__V_66_66;
            MR_Word ll_backend__layout_out__V_67_67;
            MR_Word ll_backend__layout_out__V_68_68;

            ll_backend__layout_out__succeeded = ((((MR_tag((MR_Word) ll_backend__layout_out__TypeParams_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypeParams_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (ll_backend__layout_out__succeeded)
              {
                ll_backend__layout_out__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypeParams_24, (MR_Integer) 1)));
                ll_backend__layout_out__succeeded = ((((MR_tag((MR_Word) ll_backend__layout_out__V_66_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_66_66, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (ll_backend__layout_out__succeeded)
                  {
                    ll_backend__layout_out__TPDataId_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_66_66, (MR_Integer) 1)));
                    ll_backend__layout_out__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_66_66, (MR_Integer) 2)));
                    ll_backend__layout_out__succeeded = (ll_backend__layout_out__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (ll_backend__layout_out__succeeded)
                      {
                        ll_backend__layout_out__succeeded = ((MR_tag((MR_Word) ll_backend__layout_out__TPDataId_28)) == (MR_mktag((MR_Integer) 2)));
                        if (ll_backend__layout_out__succeeded)
                          {
                            ll_backend__layout_out__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__TPDataId_28, (MR_Integer) 0)));
                            ll_backend__layout_out__TPCellNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__TPDataId_28, (MR_Integer) 1)));
                            ll_backend__layout_out__TPTypeNum_29 = (MR_Integer) ll_backend__layout_out__V_68_68;
                            ll_backend__layout_out__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
            if (ll_backend__layout_out__succeeded)
              {
                MR_String ll_backend__layout_out__V_233_233;
                MR_Word ll_backend__layout_out__V_239_239;
                MR_String ll_backend__layout_out__V_243_243;
                MR_String ll_backend__layout_out__V_253_253;
                MR_String ll_backend__layout_out__V_263_263;
                MR_String ll_backend__layout_out__V_273_273;

                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_LLVSC(");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleName_11);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                ll_backend__layout_out__V_239_239 = (MR_Word) &ll_backend__layout_out_scalar_common_4[3];
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_239_239, ll_backend__layout_out__TPTypeNum_29, &ll_backend__layout_out__V_233_233);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_233_233);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_239_239, ll_backend__layout_out__TPCellNum_30, &ll_backend__layout_out__V_243_243);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_243_243);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_239_239, ll_backend__layout_out__PTIsSlot_25, &ll_backend__layout_out__V_253_253);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_253_253);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_239_239, ll_backend__layout_out__HLDSVarNumsSlot_26, &ll_backend__layout_out__V_263_263);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_263_263);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_239_239, ll_backend__layout_out__ShortLocnsSlot_27, &ll_backend__layout_out__V_273_273);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_273_273);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
            else
              {
                MR_String ll_backend__layout_out__V_287_287;
                MR_Word ll_backend__layout_out__V_293_293;
                MR_String ll_backend__layout_out__V_297_297;
                MR_String ll_backend__layout_out__V_307_307;

                {
                  ll_backend__layout_out__output_rval_as_addr_4_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__TypeParams_24);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",MR_LLVS(");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleName_11);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                ll_backend__layout_out__V_293_293 = (MR_Word) &ll_backend__layout_out_scalar_common_4[3];
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_293_293, ll_backend__layout_out__PTIsSlot_25, &ll_backend__layout_out__V_287_287);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_287_287);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_293_293, ll_backend__layout_out__HLDSVarNumsSlot_26, &ll_backend__layout_out__V_297_297);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_297_297);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_293_293, ll_backend__layout_out__ShortLocnsSlot_27, &ll_backend__layout_out__V_307_307);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__layout_out__V_307_307);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
          }
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "(const MR_TypeParamLocns *) ");
        }
        {
          ll_backend__layout_out__output_rval_as_addr_4_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__TypeParams_24);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",");
        }
        ll_backend__layout_out__succeeded = (ll_backend__layout_out__PTIsSlot_25 >= (MR_Integer) 0);
        if (ll_backend__layout_out__succeeded)
          {
            MR_Word ll_backend__layout_out__V_103_103;

            {
              ll_backend__layout_out__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_103_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_103_103, 1) = ((MR_Box) (ll_backend__layout_out__PTIsSlot_25));
            }
            {
              ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__V_103_103);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "0,");
            }
          }
        ll_backend__layout_out__succeeded = (ll_backend__layout_out__HLDSVarNumsSlot_26 >= (MR_Integer) 0);
        if (ll_backend__layout_out__succeeded)
          {
            MR_Word ll_backend__layout_out__V_112_112;

            {
              ll_backend__layout_out__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_112_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_112_112, 1) = ((MR_Box) (ll_backend__layout_out__HLDSVarNumsSlot_26));
            }
            {
              ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__V_112_112);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "0,");
            }
          }
        ll_backend__layout_out__succeeded = (ll_backend__layout_out__ShortLocnsSlot_27 >= (MR_Integer) 0);
        if (ll_backend__layout_out__succeeded)
          {
            MR_Word ll_backend__layout_out__V_121_121;

            {
              ll_backend__layout_out__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_121_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_121_121, 1) = ((MR_Box) (ll_backend__layout_out__ShortLocnsSlot_27));
            }
            {
              ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__V_121_121);
            }
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "0");
            }
          }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) " },\n");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_32 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_31 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layouts_array_defn_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_32;

    {
      ll_backend__layout_out__output_short_var_label_layout_slot_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_32);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_32));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_short_var_label_layouts_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__LabelLayouts_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_48_48 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_short_vars_0;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumLabelLayouts_9;
    MR_Word ll_backend__layout_out__V_22_22;
    MR_String ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Integer ll_backend__layout_out__V_11_11;
    MR_Box ll_backend__layout_out__conv2_V_11_11;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_24_24;

    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_48_48, ll_backend__layout_out__LabelLayouts_6, &ll_backend__layout_out__NumLabelLayouts_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_4[1]), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumLabelLayouts_9, &ll_backend__layout_out__V_59_59);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_59_59);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    {
      ll_backend__layout_out__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 1) = ((MR_Box) (ll_backend__layout_out__output_short_var_label_layouts_array_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 3) = ((MR_Box) (ll_backend__layout_out__Info_5));
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_48_48, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_22_22, ll_backend__layout_out__LabelLayouts_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_24_24);
    }
    ll_backend__layout_out__V_11_11 = ((MR_Integer) ll_backend__layout_out__conv2_V_11_11);
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layout_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__LabelLayout_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_22,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_23)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__BasicLabelLayout_12 = (MR_Word) ll_backend__layout_out__LabelLayout_8;
    MR_Integer ll_backend__layout_out__LabelNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__AutoComments_21;
    MR_Word ll_backend__layout_out__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    MR_Word ll_backend__layout_out___ProcLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 4)));
    MR_Integer ll_backend__layout_out__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__BasicLabelLayout_12, (MR_Integer) 7)));
    MR_Word ll_backend__layout_out__V_61_61;
    MR_String ll_backend__layout_out__V_62_62;
    MR_String ll_backend__layout_out__V_63_63;
    MR_Word ll_backend__layout_out__V_64_64;
    MR_Word ll_backend__layout_out__V_65_65;
    MR_Word ll_backend__layout_out__V_66_66;
    MR_Word ll_backend__layout_out__V_67_67;
    MR_Word ll_backend__layout_out__V_68_68;
    MR_Word ll_backend__layout_out__V_69_69;
    MR_Word ll_backend__layout_out__V_70_70;
    MR_Word ll_backend__layout_out__V_71_71;
    MR_Word ll_backend__layout_out__V_72_72;
    MR_Word ll_backend__layout_out__V_73_73;
    MR_Word ll_backend__layout_out__V_74_74;
    MR_Word ll_backend__layout_out__V_75_75;
    MR_Word ll_backend__layout_out__V_76_76;
    MR_Word ll_backend__layout_out__V_77_77;
    MR_Word ll_backend__layout_out__V_78_78;
    MR_Word ll_backend__layout_out__V_79_79;
    MR_Word ll_backend__layout_out__V_80_80;
    MR_Word ll_backend__layout_out__V_81_81;

    {
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    ll_backend__layout_out__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    ll_backend__layout_out__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    ll_backend__layout_out__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    ll_backend__layout_out__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    ll_backend__layout_out__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    ll_backend__layout_out__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    ll_backend__layout_out__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__layout_out__V_85_85;
          MR_Word ll_backend__layout_out__V_91_91;
          MR_String ll_backend__layout_out__V_95_95;

          {
            mercury__io__write_string_3_p_0((MR_String) "/* ");
          }
          ll_backend__layout_out__V_91_91 = (MR_Word) &ll_backend__layout_out_scalar_common_4[3];
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_91_91, ll_backend__layout_out__STATE_VARIABLE_Slot_0_22, &ll_backend__layout_out__V_85_85);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_85_85);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ", ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_91_91, ll_backend__layout_out__LabelNum_14, &ll_backend__layout_out__V_95_95);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_95_95);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */\n  ");
          }
        }
        break;
    }
    {
      ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_98_97_115_105_99_95_108_97_98_101_108_95_108_97_121_111_117_116_95_115_108_111_116_95_95_91_49_93_95_48_5_p_0(ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__BasicLabelLayout_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " },\n");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_23 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_22 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layouts_array_defn_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_23;

    {
      ll_backend__layout_out__output_no_var_label_layout_slot_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_23);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_23));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_no_var_label_layouts_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__LabelLayouts_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_48_48 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_layout_no_vars_0;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumLabelLayouts_9;
    MR_Word ll_backend__layout_out__V_22_22;
    MR_String ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Integer ll_backend__layout_out__V_11_11;
    MR_Box ll_backend__layout_out__conv2_V_11_11;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_24_24;

    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_48_48, ll_backend__layout_out__LabelLayouts_6, &ll_backend__layout_out__NumLabelLayouts_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_4[0]), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumLabelLayouts_9, &ll_backend__layout_out__V_59_59);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_59_59);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    {
      ll_backend__layout_out__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 1) = ((MR_Box) (ll_backend__layout_out__output_no_var_label_layouts_array_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 3) = ((MR_Box) (ll_backend__layout_out__Info_5));
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_48_48, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_22_22, ll_backend__layout_out__LabelLayouts_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_24_24);
    }
    ll_backend__layout_out__V_11_11 = ((MR_Integer) ll_backend__layout_out__conv2_V_11_11);
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_event_slot_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__UserEvent_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_16,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_17)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Integer ll_backend__layout_out__UserEventNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__UserEvent_8, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__UserLocnsRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__UserEvent_8, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__MaybeVarNumsSlot_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__UserEvent_8, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__AutoComments_14;
    MR_String ll_backend__layout_out__ModuleName_15;
    MR_Word ll_backend__layout_out__V_39_39;
    MR_String ll_backend__layout_out__V_40_40;
    MR_String ll_backend__layout_out__V_41_41;
    MR_Word ll_backend__layout_out__V_42_42;
    MR_Word ll_backend__layout_out__V_43_43;
    MR_Word ll_backend__layout_out__V_44_44;
    MR_Word ll_backend__layout_out__V_45_45;
    MR_Word ll_backend__layout_out__V_46_46;
    MR_Word ll_backend__layout_out__V_47_47;
    MR_Word ll_backend__layout_out__V_48_48;
    MR_Word ll_backend__layout_out__V_49_49;
    MR_Word ll_backend__layout_out__V_50_50;
    MR_Word ll_backend__layout_out__V_51_51;
    MR_Word ll_backend__layout_out__V_52_52;
    MR_Word ll_backend__layout_out__V_53_53;
    MR_Word ll_backend__layout_out__V_54_54;
    MR_Word ll_backend__layout_out__V_55_55;
    MR_Word ll_backend__layout_out__V_56_56;
    MR_Word ll_backend__layout_out__V_57_57;
    MR_Word ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_60_60;
    MR_String ll_backend__layout_out__V_61_61;
    MR_Word ll_backend__layout_out__V_62_62;
    MR_Word ll_backend__layout_out__V_63_63;
    MR_Word ll_backend__layout_out__V_64_64;
    MR_Word ll_backend__layout_out__V_65_65;
    MR_Word ll_backend__layout_out__V_66_66;
    MR_Word ll_backend__layout_out__V_67_67;
    MR_Word ll_backend__layout_out__V_68_68;
    MR_Word ll_backend__layout_out__V_69_69;
    MR_Word ll_backend__layout_out__V_70_70;
    MR_Word ll_backend__layout_out__V_71_71;
    MR_Word ll_backend__layout_out__V_72_72;
    MR_Word ll_backend__layout_out__V_73_73;
    MR_Word ll_backend__layout_out__V_74_74;
    MR_Word ll_backend__layout_out__V_75_75;
    MR_Word ll_backend__layout_out__V_76_76;
    MR_Word ll_backend__layout_out__V_77_77;
    MR_Word ll_backend__layout_out__V_78_78;
    MR_Word ll_backend__layout_out__V_79_79;
    MR_Word ll_backend__layout_out__V_80_80;

    {
      mercury__io__write_string_3_p_0((MR_String) "{ ");
    }
    ll_backend__layout_out__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    ll_backend__layout_out__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    ll_backend__layout_out__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    ll_backend__layout_out__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    ll_backend__layout_out__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    ll_backend__layout_out__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    ll_backend__layout_out__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__layout_out__V_84_84;

          {
            mercury__io__write_string_3_p_0((MR_String) "/* slot ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__STATE_VARIABLE_Slot_0_16, &ll_backend__layout_out__V_84_84);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_84_84);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " */ ");
          }
        }
        break;
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__UserEventNumber_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", (MR_LongLval *) ");
    }
    {
      ll_backend__layout_out__output_rval_as_addr_4_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__UserLocnsRval_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n  ");
    }
    ll_backend__layout_out__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
    ll_backend__layout_out__ModuleName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
    ll_backend__layout_out__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
    ll_backend__layout_out__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
    ll_backend__layout_out__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
    ll_backend__layout_out__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
    ll_backend__layout_out__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
    ll_backend__layout_out__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
    {
      ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__ModuleName_15, ll_backend__layout_out__MaybeVarNumsSlot_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " },\n");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_17 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_16 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_events_array_defn_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_17;

    {
      ll_backend__layout_out__output_user_event_slot_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_17);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_17));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_events_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__UserEvents_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_47_47 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumUserEvents_9;
    MR_Word ll_backend__layout_out__V_21_21;
    MR_String ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Integer ll_backend__layout_out__V_11_11;
    MR_Box ll_backend__layout_out__conv2_V_11_11;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23;

    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_47_47, ll_backend__layout_out__UserEvents_6, &ll_backend__layout_out__NumUserEvents_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumUserEvents_9, &ll_backend__layout_out__V_58_58);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_58_58);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
    }
    {
      ll_backend__layout_out__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 1) = ((MR_Box) (ll_backend__layout_out__output_user_events_array_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_21_21, 3) = ((MR_Box) (ll_backend__layout_out__Info_5));
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeCtorInfo_47_47, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_21_21, ll_backend__layout_out__UserEvents_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23);
    }
    ll_backend__layout_out__V_11_11 = ((MR_Integer) ll_backend__layout_out__conv2_V_11_11);
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_maybe_var_num_slot_5_p_0(
  MR_Word ll_backend__layout_out__MaybeVarNum_6,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_10,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_11)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Integer ll_backend__layout_out__VarNum_9;
    MR_String ll_backend__layout_out__V_42_42;
    MR_Integer ll_backend__layout_out__V_14_14;

    if ((ll_backend__layout_out__MaybeVarNum_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__layout_out__VarNum_9 = (MR_Integer) 0;
    else
      ll_backend__layout_out__VarNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeVarNum_6, (MR_Integer) 0)));
    {
      ll_backend__layout_out__V_14_14 = mercury__int__mod_2_f_0(ll_backend__layout_out__STATE_VARIABLE_Slot_0_10, (MR_Integer) 10);
    }
    ll_backend__layout_out__succeeded = (ll_backend__layout_out__V_14_14 == (MR_Integer) 0);
    if (ll_backend__layout_out__succeeded)
      {
        MR_String ll_backend__layout_out__V_33_33;

        {
          mercury__io__write_string_3_p_0((MR_String) "\n/* slot ");
        }
        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__STATE_VARIABLE_Slot_0_10, &ll_backend__layout_out__V_33_33);
        }
        {
          mercury__io__write_string_3_p_0(ll_backend__layout_out__V_33_33);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " */ ");
        }
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
      }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__VarNum_9, &ll_backend__layout_out__V_42_42);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_42_42);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_11 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_10 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_event_var_nums_array_defn_4_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_11;

    {
      ll_backend__layout_out__output_maybe_var_num_slot_5_p_0(((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_11);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_11));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_user_event_var_nums_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__MaybeVarNums_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeInfo_47_47 = (MR_Word) &ll_backend__layout_out_scalar_common_1[1];
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumMaybeVarNums_9;
    MR_String ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Integer ll_backend__layout_out__V_11_11;
    MR_Box ll_backend__layout_out__conv2_V_11_11;
    MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23;

    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeInfo_47_47, ll_backend__layout_out__MaybeVarNums_6, &ll_backend__layout_out__NumMaybeVarNums_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumMaybeVarNums_9, &ll_backend__layout_out__V_58_58);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_58_58);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {");
    }
    {
      mercury__list__foldl2_6_p_2(ll_backend__layout_out__TypeInfo_47_47, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__layout_out_scalar_common_2[3], ll_backend__layout_out__MaybeVarNums_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv2_V_11_11, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_23_23);
    }
    ll_backend__layout_out__V_11_11 = ((MR_Integer) ll_backend__layout_out__conv2_V_11_11);
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_long_locns_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__LongLocns_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumLongLocns_9;
    MR_Word ll_backend__layout_out__AutoComments_11;
    MR_String ll_backend__layout_out__V_73_73;
    MR_Word ll_backend__layout_out__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Word ll_backend__layout_out__V_48_48;
    MR_String ll_backend__layout_out__V_49_49;
    MR_String ll_backend__layout_out__V_50_50;
    MR_Word ll_backend__layout_out__V_51_51;
    MR_Word ll_backend__layout_out__V_52_52;
    MR_Word ll_backend__layout_out__V_53_53;
    MR_Word ll_backend__layout_out__V_54_54;
    MR_Word ll_backend__layout_out__V_55_55;
    MR_Word ll_backend__layout_out__V_56_56;
    MR_Word ll_backend__layout_out__V_57_57;
    MR_Word ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_60_60;
    MR_Word ll_backend__layout_out__V_61_61;
    MR_Word ll_backend__layout_out__V_62_62;
    MR_Word ll_backend__layout_out__V_63_63;
    MR_Word ll_backend__layout_out__V_64_64;
    MR_Word ll_backend__layout_out__V_65_65;
    MR_Word ll_backend__layout_out__V_66_66;
    MR_Word ll_backend__layout_out__V_67_67;
    MR_Word ll_backend__layout_out__V_68_68;

    {
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__layout_out__LongLocns_6, &ll_backend__layout_out__NumLongLocns_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumLongLocns_9, &ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {");
    }
    ll_backend__layout_out__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    ll_backend__layout_out__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    ll_backend__layout_out__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    ll_backend__layout_out__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    ll_backend__layout_out__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    ll_backend__layout_out__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    ll_backend__layout_out__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(ll_backend__layout_out__LongLocns_6, (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(ll_backend__layout_out__LongLocns_6, (MR_Integer) 0);
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_short_locns_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__ShortLocns_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumShortLocns_9;
    MR_Word ll_backend__layout_out__AutoComments_11;
    MR_String ll_backend__layout_out__V_73_73;
    MR_Word ll_backend__layout_out__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Word ll_backend__layout_out__V_48_48;
    MR_String ll_backend__layout_out__V_49_49;
    MR_String ll_backend__layout_out__V_50_50;
    MR_Word ll_backend__layout_out__V_51_51;
    MR_Word ll_backend__layout_out__V_52_52;
    MR_Word ll_backend__layout_out__V_53_53;
    MR_Word ll_backend__layout_out__V_54_54;
    MR_Word ll_backend__layout_out__V_55_55;
    MR_Word ll_backend__layout_out__V_56_56;
    MR_Word ll_backend__layout_out__V_57_57;
    MR_Word ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_60_60;
    MR_Word ll_backend__layout_out__V_61_61;
    MR_Word ll_backend__layout_out__V_62_62;
    MR_Word ll_backend__layout_out__V_63_63;
    MR_Word ll_backend__layout_out__V_64_64;
    MR_Word ll_backend__layout_out__V_65_65;
    MR_Word ll_backend__layout_out__V_66_66;
    MR_Word ll_backend__layout_out__V_67_67;
    MR_Word ll_backend__layout_out__V_68_68;

    {
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__layout_out__ShortLocns_6, &ll_backend__layout_out__NumShortLocns_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumShortLocns_9, &ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {");
    }
    ll_backend__layout_out__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    ll_backend__layout_out__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    ll_backend__layout_out__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    ll_backend__layout_out__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    ll_backend__layout_out__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    ll_backend__layout_out__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    ll_backend__layout_out__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(ll_backend__layout_out__ShortLocns_6, (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(ll_backend__layout_out__ShortLocns_6, (MR_Integer) 0);
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_hlds_var_nums_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__VarNums_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumVarNums_9;
    MR_Word ll_backend__layout_out__AutoComments_11;
    MR_String ll_backend__layout_out__V_73_73;
    MR_Word ll_backend__layout_out__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Word ll_backend__layout_out__V_48_48;
    MR_String ll_backend__layout_out__V_49_49;
    MR_String ll_backend__layout_out__V_50_50;
    MR_Word ll_backend__layout_out__V_51_51;
    MR_Word ll_backend__layout_out__V_52_52;
    MR_Word ll_backend__layout_out__V_53_53;
    MR_Word ll_backend__layout_out__V_54_54;
    MR_Word ll_backend__layout_out__V_55_55;
    MR_Word ll_backend__layout_out__V_56_56;
    MR_Word ll_backend__layout_out__V_57_57;
    MR_Word ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_60_60;
    MR_Word ll_backend__layout_out__V_61_61;
    MR_Word ll_backend__layout_out__V_62_62;
    MR_Word ll_backend__layout_out__V_63_63;
    MR_Word ll_backend__layout_out__V_64_64;
    MR_Word ll_backend__layout_out__V_65_65;
    MR_Word ll_backend__layout_out__V_66_66;
    MR_Word ll_backend__layout_out__V_67_67;
    MR_Word ll_backend__layout_out__V_68_68;

    {
      ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_111_117_116_101_114_95_108_111_111_112_95_95_91_49_93_95_48_3_p_0(ll_backend__layout_out__VarNums_6, (MR_Integer) 0, &ll_backend__layout_out__NumVarNums_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumVarNums_9, &ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_73_73);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {");
    }
    ll_backend__layout_out__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    ll_backend__layout_out__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    ll_backend__layout_out__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    ll_backend__layout_out__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    ll_backend__layout_out__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    ll_backend__layout_out__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    ll_backend__layout_out__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__layout_out__output_numbers_in_vector_noac_4_p_0(ll_backend__layout_out__VarNums_6, (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__layout_out__output_numbers_in_vector_ac_4_p_0(ll_backend__layout_out__VarNums_6, (MR_Integer) 0);
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_noac_6_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_noac_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__ChunkPTIs_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_12,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_13)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_27_27 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
    MR_Integer ll_backend__layout_out__NumChunkPTIs_11;
    MR_Word ll_backend__layout_out__V_22_22;
    MR_String ll_backend__layout_out__V_34_34;

    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_27_27, ll_backend__layout_out__ChunkPTIs_8, &ll_backend__layout_out__NumChunkPTIs_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\nMR_cast_to_pti");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumChunkPTIs_11, &ll_backend__layout_out__V_34_34);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_34_34);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
    {
      ll_backend__layout_out__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 1) = ((MR_Box) (ll_backend__layout_out__output_pti_chunk_noac_6_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_22_22, 3) = ((MR_Box) (ll_backend__layout_out__Info_7));
    }
    {
      mercury__io__write_list_5_p_0(ll_backend__layout_out__TypeCtorInfo_27_27, ll_backend__layout_out__ChunkPTIs_8, (MR_String) ",\n\t", ll_backend__layout_out__V_22_22);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_13 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_12 + ll_backend__layout_out__NumChunkPTIs_11);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_ac_6_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;

    {
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
ll_backend__layout_out__output_pti_chunk_ac_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__ChunkPTIs_8,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_12,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_13)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__TypeCtorInfo_29_29 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
    MR_Integer ll_backend__layout_out__NumChunkPTIs_11;
    MR_Word ll_backend__layout_out__V_24_24;
    MR_String ll_backend__layout_out__V_36_36;
    MR_Word ll_backend__layout_out__V_42_42;
    MR_String ll_backend__layout_out__V_46_46;

    {
      mercury__list__length_2_p_0(ll_backend__layout_out__TypeCtorInfo_29_29, ll_backend__layout_out__ChunkPTIs_8, &ll_backend__layout_out__NumChunkPTIs_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n/* slots ");
    }
    ll_backend__layout_out__V_42_42 = (MR_Word) &ll_backend__layout_out_scalar_common_4[3];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_42_42, ll_backend__layout_out__STATE_VARIABLE_Slot_0_12, &ll_backend__layout_out__V_36_36);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_36_36);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "+ */ MR_cast_to_pti");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__layout_out__V_42_42, ll_backend__layout_out__NumChunkPTIs_11, &ll_backend__layout_out__V_46_46);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_46_46);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "(\n\t");
    }
    {
      ll_backend__layout_out__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_24_24, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_24_24, 1) = ((MR_Box) (ll_backend__layout_out__output_pti_chunk_ac_6_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_24_24, 3) = ((MR_Box) (ll_backend__layout_out__Info_7));
    }
    {
      mercury__io__write_list_5_p_0(ll_backend__layout_out__TypeCtorInfo_29_29, ll_backend__layout_out__ChunkPTIs_8, (MR_String) ",\n\t", ll_backend__layout_out__V_24_24);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    *ll_backend__layout_out__STATE_VARIABLE_Slot_13 = (ll_backend__layout_out__STATE_VARIABLE_Slot_0_12 + ll_backend__layout_out__NumChunkPTIs_11);
  }
}

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_noac_6_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_13;

    {
      ll_backend__layout_out__output_pti_chunk_noac_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_13);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_13));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_noac_6_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_3,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__layout_out__STATE_VARIABLE_Slot_4 = ll_backend__layout_out__STATE_VARIABLE_Slot_0_3;
        else
          {
            MR_Word ll_backend__layout_out__TypeCtorInfo_34_34 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
            MR_Word ll_backend__layout_out__StartPTIs_20;
            MR_Word ll_backend__layout_out__LaterPTIs_21;
            MR_Word ll_backend__layout_out__PTIChunks_22;
            MR_Word ll_backend__layout_out__V_29_29;
            MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_30_30;
            MR_Box ll_backend__layout_out__conv2_STATE_VARIABLE_Slot_30_30;
            MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_31_31;

            {
              mercury__list__split_upto_4_p_0(ll_backend__layout_out__TypeCtorInfo_34_34, (MR_Integer) 1000, ll_backend__layout_out__HeadVar__2_2, &ll_backend__layout_out__StartPTIs_20, &ll_backend__layout_out__LaterPTIs_21);
            }
            {
              mercury__list__chunk_3_p_0(ll_backend__layout_out__TypeCtorInfo_34_34, ll_backend__layout_out__StartPTIs_20, (MR_Integer) 10, &ll_backend__layout_out__PTIChunks_22);
            }
            {
              ll_backend__layout_out__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_29_29, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_29_29, 1) = ((MR_Box) (ll_backend__layout_out__output_ptis_outer_loop_noac_6_p_0_1));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_29_29, 3) = ((MR_Box) (ll_backend__layout_out__HeadVar__1_1));
            }
            {
              mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout_out_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_29_29, ll_backend__layout_out__PTIChunks_22, ((MR_Box) (ll_backend__layout_out__STATE_VARIABLE_Slot_0_3)), &ll_backend__layout_out__conv2_STATE_VARIABLE_Slot_30_30, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_31_31);
            }
            ll_backend__layout_out__STATE_VARIABLE_Slot_30_30 = ((MR_Integer) ll_backend__layout_out__conv2_STATE_VARIABLE_Slot_30_30);
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__layout_out__HeadVar__2__tmp_copy_2 = ll_backend__layout_out__LaterPTIs_21;
              MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0__tmp_copy_3 = ll_backend__layout_out__STATE_VARIABLE_Slot_30_30;

              ll_backend__layout_out__STATE_VARIABLE_Slot_0_3 = ll_backend__layout_out__STATE_VARIABLE_Slot_0__tmp_copy_3;
              ll_backend__layout_out__HeadVar__2_2 = ll_backend__layout_out__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_ac_6_p_0_1(
  MR_Box ll_backend__layout_out__closure_arg,
  MR_Box ll_backend__layout_out__wrapper_arg_1,
  MR_Box ll_backend__layout_out__wrapper_arg_2,
  MR_Box * ll_backend__layout_out__wrapper_arg_3,
  MR_Box ll_backend__layout_out__wrapper_arg_4,
  MR_Box * ll_backend__layout_out__wrapper_arg_5)
{
  {
    MR_Box ll_backend__layout_out__closure = ll_backend__layout_out__closure_arg;
    MR_Integer ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_13;

    {
      ll_backend__layout_out__output_pti_chunk_ac_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__layout_out__wrapper_arg_1), ((MR_Integer) ll_backend__layout_out__wrapper_arg_2), &ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_13);
    }
    *ll_backend__layout_out__wrapper_arg_3 = ((MR_Box) (ll_backend__layout_out__conv0_STATE_VARIABLE_Slot_13));
  }
}

static void MR_CALL 
ll_backend__layout_out__output_ptis_outer_loop_ac_6_p_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1,
  MR_Word ll_backend__layout_out__HeadVar__2_2,
  MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0_3,
  MR_Integer * ll_backend__layout_out__STATE_VARIABLE_Slot_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__layout_out__succeeded;

        if ((ll_backend__layout_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__layout_out__STATE_VARIABLE_Slot_4 = ll_backend__layout_out__STATE_VARIABLE_Slot_0_3;
        else
          {
            MR_Word ll_backend__layout_out__TypeCtorInfo_34_34 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
            MR_Word ll_backend__layout_out__StartPTIs_20;
            MR_Word ll_backend__layout_out__LaterPTIs_21;
            MR_Word ll_backend__layout_out__PTIChunks_22;
            MR_Word ll_backend__layout_out__V_29_29;
            MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_30_30;
            MR_Box ll_backend__layout_out__conv2_STATE_VARIABLE_Slot_30_30;
            MR_Box ll_backend__layout_out__conv1_STATE_VARIABLE_IO_31_31;

            {
              mercury__list__split_upto_4_p_0(ll_backend__layout_out__TypeCtorInfo_34_34, (MR_Integer) 1000, ll_backend__layout_out__HeadVar__2_2, &ll_backend__layout_out__StartPTIs_20, &ll_backend__layout_out__LaterPTIs_21);
            }
            {
              mercury__list__chunk_3_p_0(ll_backend__layout_out__TypeCtorInfo_34_34, ll_backend__layout_out__StartPTIs_20, (MR_Integer) 10, &ll_backend__layout_out__PTIChunks_22);
            }
            {
              ll_backend__layout_out__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_29_29, 0) = ((MR_Box) (&ll_backend__layout_out_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_29_29, 1) = ((MR_Box) (ll_backend__layout_out__output_ptis_outer_loop_ac_6_p_0_1));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_29_29, 3) = ((MR_Box) (ll_backend__layout_out__HeadVar__1_1));
            }
            {
              mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout_out_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__layout_out__V_29_29, ll_backend__layout_out__PTIChunks_22, ((MR_Box) (ll_backend__layout_out__STATE_VARIABLE_Slot_0_3)), &ll_backend__layout_out__conv2_STATE_VARIABLE_Slot_30_30, ((MR_Box) ((MR_Integer) 0)), &ll_backend__layout_out__conv1_STATE_VARIABLE_IO_31_31);
            }
            ll_backend__layout_out__STATE_VARIABLE_Slot_30_30 = ((MR_Integer) ll_backend__layout_out__conv2_STATE_VARIABLE_Slot_30_30);
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__layout_out__HeadVar__2__tmp_copy_2 = ll_backend__layout_out__LaterPTIs_21;
              MR_Integer ll_backend__layout_out__STATE_VARIABLE_Slot_0__tmp_copy_3 = ll_backend__layout_out__STATE_VARIABLE_Slot_30_30;

              ll_backend__layout_out__STATE_VARIABLE_Slot_0_3 = ll_backend__layout_out__STATE_VARIABLE_Slot_0__tmp_copy_3;
              ll_backend__layout_out__HeadVar__2_2 = ll_backend__layout_out__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__layout_out__output_pseudo_type_info_array_defn_4_p_0(
  MR_Word ll_backend__layout_out__Info_5,
  MR_Word ll_backend__layout_out__PTIs_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__ModuleName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    MR_Integer ll_backend__layout_out__NumPTIs_9;
    MR_Word ll_backend__layout_out__AutoComments_11;
    MR_String ll_backend__layout_out__V_75_75;
    MR_Word ll_backend__layout_out__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    MR_Word ll_backend__layout_out__V_50_50;
    MR_String ll_backend__layout_out__V_51_51;
    MR_String ll_backend__layout_out__V_52_52;
    MR_Word ll_backend__layout_out__V_53_53;
    MR_Word ll_backend__layout_out__V_54_54;
    MR_Word ll_backend__layout_out__V_55_55;
    MR_Word ll_backend__layout_out__V_56_56;
    MR_Word ll_backend__layout_out__V_57_57;
    MR_Word ll_backend__layout_out__V_58_58;
    MR_Word ll_backend__layout_out__V_59_59;
    MR_Word ll_backend__layout_out__V_60_60;
    MR_Word ll_backend__layout_out__V_61_61;
    MR_Word ll_backend__layout_out__V_62_62;
    MR_Word ll_backend__layout_out__V_63_63;
    MR_Word ll_backend__layout_out__V_64_64;
    MR_Word ll_backend__layout_out__V_65_65;
    MR_Word ll_backend__layout_out__V_66_66;
    MR_Word ll_backend__layout_out__V_67_67;
    MR_Word ll_backend__layout_out__V_68_68;
    MR_Word ll_backend__layout_out__V_69_69;
    MR_Word ll_backend__layout_out__V_70_70;

    {
      ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_110_103_95_108_101_110_103_116_104_95_111_117_116_101_114_95_108_111_111_112_95_95_91_49_93_95_48_3_p_0(ll_backend__layout_out__PTIs_6, (MR_Integer) 0, &ll_backend__layout_out__NumPTIs_9);
    }
    {
      ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__ModuleName_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__NumPTIs_9, &ll_backend__layout_out__V_75_75);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_75_75);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] = {");
    }
    ll_backend__layout_out__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 0)));
    ll_backend__layout_out__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 1)));
    ll_backend__layout_out__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 2)));
    ll_backend__layout_out__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 3)));
    ll_backend__layout_out__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 4)));
    ll_backend__layout_out__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 5)));
    ll_backend__layout_out__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 6)));
    ll_backend__layout_out__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    ll_backend__layout_out__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    ll_backend__layout_out__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    ll_backend__layout_out__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__layout_out__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__layout_out__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    ll_backend__layout_out__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    ll_backend__layout_out__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    ll_backend__layout_out__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    ll_backend__layout_out__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    ll_backend__layout_out__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    ll_backend__layout_out__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    ll_backend__layout_out__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    ll_backend__layout_out__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    ll_backend__layout_out__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_5, (MR_Integer) 8)));
    switch (ll_backend__layout_out__AutoComments_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ll_backend__layout_out__V_13_13;

          {
            ll_backend__layout_out__output_ptis_outer_loop_noac_6_p_0(ll_backend__layout_out__Info_5, ll_backend__layout_out__PTIs_6, (MR_Integer) 0, &ll_backend__layout_out__V_13_13);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__layout_out__V_12_12;

          {
            ll_backend__layout_out__output_ptis_outer_loop_ac_6_p_0(ll_backend__layout_out__Info_5, ll_backend__layout_out__PTIs_6, (MR_Integer) 0, &ll_backend__layout_out__V_12_12);
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n\n");
    }
  }
}

MR_String MR_CALL 
ll_backend__layout_out__trace_port_to_string_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__HeadVar__2_2 = ((&ll_backend__layout_out_vector_common_5[0 + ll_backend__layout_out__HeadVar__1_1]))->ll_backend__layout_out__vector_common_type_5_0__vct_5_f_0;

    return ll_backend__layout_out__HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__layout_out__output_pred_or_func_3_p_0(
  MR_Word ll_backend__layout_out__PredOrFunc_4)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    switch (ll_backend__layout_out__PredOrFunc_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_FUNCTION");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_PREDICATE");
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
ll_backend__layout_out__proc_label_user_or_uci_1_f_0(
  MR_Word ll_backend__layout_out__HeadVar__1_1)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__HeadVar__2_2;

    if (((MR_tag((MR_Word) ll_backend__layout_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      ll_backend__layout_out__HeadVar__2_2 = (MR_Integer) 0;
    else
      ll_backend__layout_out__HeadVar__2_2 = (MR_Integer) 1;
    return ll_backend__layout_out__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ll_backend__layout_out__layout_name_would_include_code_addr_1_f_0(
  MR_Word ll_backend__layout_out__LayoutName_3)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__InclCodeAddr_4;

    {
      ll_backend__layout_out__InclCodeAddr_4 = ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_97_121_111_117_116_95_110_97_109_101_95_119_111_117_108_100_95_105_110_99_108_117_100_101_95_99_111_100_101_95_97_100_100_114_95_95_91_49_93_95_48_1_f_0();
    }
    return ll_backend__layout_out__InclCodeAddr_4;
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_name_3_p_0(
  MR_Word ll_backend__layout_out__Name_4)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    switch (MR_tag((MR_Word) ll_backend__layout_out__Name_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__layout_out__RttiProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Name_4, (MR_Integer) 0)));
          MR_String ll_backend__layout_out__V_142_142;
          MR_Word ll_backend__layout_out__V_146_146;
          MR_Word ll_backend__layout_out__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Name_4, (MR_Integer) 1)));

          {
            ll_backend__layout_out__V_142_142 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_142_142);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "_proc_layout__");
          }
          {
            ll_backend__layout_out__V_146_146 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__layout_out__RttiProcLabel_6);
          }
          {
            backend_libs__name_mangle__output_proc_label_3_p_0(ll_backend__layout_out__V_146_146);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__layout_out__CallerProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__Name_4, (MR_Integer) 0)));
          MR_Integer ll_backend__layout_out__SeqNo_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
          MR_String ll_backend__layout_out__V_134_134;
          MR_Word ll_backend__layout_out__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__Name_4, (MR_Integer) 2)));

          {
            ll_backend__layout_out__V_134_134 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_134_134);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "_closure_layout__");
          }
          {
            backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__layout_out__CallerProcLabel_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "_");
          }
          {
            mercury__io__write_int_3_p_0(ll_backend__layout_out__SeqNo_9);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__layout_out__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__Name_4, (MR_Integer) 0)));
          MR_Integer ll_backend__layout_out__FileNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
          MR_String ll_backend__layout_out__ModuleNameStr_13;
          MR_String ll_backend__layout_out__V_126_126;

          {
            ll_backend__layout_out__V_126_126 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_126_126);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "_file_layout__");
          }
          {
            ll_backend__layout_out__ModuleNameStr_13 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_11);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_13);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "_");
          }
          {
            mercury__io__write_int_3_p_0(ll_backend__layout_out__FileNum_12);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ll_backend__layout_out__V_118_118;
              MR_Word ll_backend__layout_out__ModuleName_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_Integer ll_backend__layout_out__FileNum_149 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 2)));
              MR_String ll_backend__layout_out__ModuleNameStr_150;

              {
                ll_backend__layout_out__V_118_118 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_118_118);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_file_lines__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_150 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_148);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_150);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__layout_out__FileNum_149);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__layout_out__V_110_110;
              MR_Word ll_backend__layout_out__ModuleName_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_Integer ll_backend__layout_out__FileNum_152 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 2)));
              MR_String ll_backend__layout_out__ModuleNameStr_153;

              {
                ll_backend__layout_out__V_110_110 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_110_110);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_file_label_layouts__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_153 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_151);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_153);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__layout_out__FileNum_152);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__layout_out__V_105_105;
              MR_Word ll_backend__layout_out__ModuleName_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_155;

              {
                ll_backend__layout_out__V_105_105 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_105_105);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_strings__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_155 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_154);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_155);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ll_backend__layout_out__V_100_100;
              MR_Word ll_backend__layout_out__ModuleName_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_157;

              {
                ll_backend__layout_out__V_100_100 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_100_100);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_files__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_157 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_156);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_157);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String ll_backend__layout_out__V_95_95;
              MR_Word ll_backend__layout_out__ModuleName_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_159;

              {
                ll_backend__layout_out__V_95_95 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_95_95);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_procs__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_159 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_158);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_159);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String ll_backend__layout_out__V_90_90;
              MR_Word ll_backend__layout_out__ModuleName_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_161;
              MR_Integer ll_backend__layout_out__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 2)));

              {
                ll_backend__layout_out__V_90_90 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_90_90);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_label_exec_counts__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_161 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_160);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_161);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String ll_backend__layout_out__V_85_85;
              MR_Word ll_backend__layout_out__ModuleName_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_163;

              {
                ll_backend__layout_out__V_85_85 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_85_85);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_set_desc__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_163 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_162);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_163);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ll_backend__layout_out__EventNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 2)));
              MR_String ll_backend__layout_out__V_77_77;
              MR_Word ll_backend__layout_out__ModuleName_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_165;

              {
                ll_backend__layout_out__V_77_77 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_77_77);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_arg_names__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_165 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_164);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_165);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__layout_out__EventNumber_15);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String ll_backend__layout_out__V_69_69;
              MR_Word ll_backend__layout_out__ModuleName_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_167;
              MR_Integer ll_backend__layout_out__EventNumber_168 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 2)));

              {
                ll_backend__layout_out__V_69_69 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_69_69);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_synth_attrs__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_167 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_166);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_167);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__layout_out__EventNumber_168);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer ll_backend__layout_out__SynthCallArgNumber_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 3)));
              MR_String ll_backend__layout_out__V_58_58;
              MR_Word ll_backend__layout_out__ModuleName_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_170;
              MR_Integer ll_backend__layout_out__EventNumber_171 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 2)));

              {
                ll_backend__layout_out__V_58_58 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_58_58);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_synth_attr_args__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_170 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_169);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_170);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__layout_out__EventNumber_171);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__layout_out__SynthCallArgNumber_16);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String ll_backend__layout_out__V_47_47;
              MR_Word ll_backend__layout_out__ModuleName_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_173;
              MR_Integer ll_backend__layout_out__EventNumber_174 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 2)));
              MR_Integer ll_backend__layout_out__SynthCallArgNumber_175 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 3)));

              {
                ll_backend__layout_out__V_47_47 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_47_47);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_synth_attr_order__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_173 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_172);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_173);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__layout_out__EventNumber_174);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__layout_out__SynthCallArgNumber_175);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String ll_backend__layout_out__V_39_39;
              MR_Word ll_backend__layout_out__ModuleName_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_177;
              MR_Integer ll_backend__layout_out__EventNumber_178 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 2)));

              {
                ll_backend__layout_out__V_39_39 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_39_39);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_synth_order__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_177 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_176);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_177);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__layout_out__EventNumber_178);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String ll_backend__layout_out__V_34_34;
              MR_Word ll_backend__layout_out__ModuleName_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_180;

              {
                ll_backend__layout_out__V_34_34 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_34_34);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_layout_event_specs__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_180 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_179);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_180);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String ll_backend__layout_out__V_29_29;
              MR_Word ll_backend__layout_out__ModuleName_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_182;

              {
                ll_backend__layout_out__V_29_29 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_29_29);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_layout_oisu_bytes__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_182 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_181);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_182);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_String ll_backend__layout_out__V_24_24;
              MR_Word ll_backend__layout_out__ModuleName_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_184;

              {
                ll_backend__layout_out__V_24_24 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_24_24);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_layout_type_table_bytes__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_184 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_183);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_184);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String ll_backend__layout_out__V_19_19;
              MR_Word ll_backend__layout_out__ModuleName_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_4, (MR_Integer) 1)));
              MR_String ll_backend__layout_out__ModuleNameStr_186;

              {
                ll_backend__layout_out__V_19_19 = backend_libs__name_mangle__mercury_data_prefix_0_f_0();
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__V_19_19);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "_module_layout__");
              }
              {
                ll_backend__layout_out__ModuleNameStr_186 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__layout_out__ModuleName_185);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleNameStr_186);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_slot_addr_5_p_0(
  MR_Word ll_backend__layout_out__UseMacro_6,
  MR_String ll_backend__layout_out__ModuleName_7,
  MR_Word ll_backend__layout_out__SlotName_8)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__ArrayName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SlotName_8, (MR_Integer) 0)));
    MR_Integer ll_backend__layout_out__SlotNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SlotName_8, (MR_Integer) 1)));
    MR_String ll_backend__layout_out__V_25_25;

    {
      mercury__io__write_string_3_p_0((MR_String) "&");
    }
    {
      ll_backend__layout_out__output_layout_array_name_5_p_0(ll_backend__layout_out__UseMacro_6, ll_backend__layout_out__ModuleName_7, ll_backend__layout_out__ArrayName_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__SlotNum_11, &ll_backend__layout_out__V_25_25);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_25_25);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_slot_id_5_p_0(
  MR_Word ll_backend__layout_out__UseMacro_6,
  MR_String ll_backend__layout_out__ModuleName_7,
  MR_Word ll_backend__layout_out__SlotName_8)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__ArrayName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SlotName_8, (MR_Integer) 0)));
    MR_Integer ll_backend__layout_out__SlotNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__SlotName_8, (MR_Integer) 1)));
    MR_String ll_backend__layout_out__V_23_23;

    {
      ll_backend__layout_out__output_layout_array_name_5_p_0(ll_backend__layout_out__UseMacro_6, ll_backend__layout_out__ModuleName_7, ll_backend__layout_out__ArrayName_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__layout_out_scalar_common_4[3], ll_backend__layout_out__SlotNum_11, &ll_backend__layout_out__V_23_23);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_23_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_array_name_5_p_0(
  MR_Word ll_backend__layout_out__UseMacro_6,
  MR_String ll_backend__layout_out__ModuleName_7,
  MR_Word ll_backend__layout_out__ArrayName_8)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    switch (ll_backend__layout_out__UseMacro_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (MR_tag((MR_Word) ll_backend__layout_out__ArrayName_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ll_backend__layout_out__ArrayName_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__pseudo_type_info_array__");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__hlds_var_nums_array__");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__short_locns_array__");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__long_locns_array__");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__user_event_layouts_array__");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__user_event_var_nums_array__");
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_call_sites_array__");
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_cp_statics_array__");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_cp_dynamics_array__");
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_statics_array__");
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_head_var_nums_array__");
                    }
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_var_names_array__");
                    }
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_body_bytecodes_array__");
                    }
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_table_io_entries_array__");
                    }
                  }
                  break;
                case (MR_Integer) 14:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_event_layouts_array__");
                    }
                  }
                  break;
                case (MR_Integer) 15:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__proc_exec_traces_array__");
                    }
                  }
                  break;
                case (MR_Integer) 16:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__threadscope_string_table_array__");
                    }
                  }
                  break;
                case (MR_Integer) 17:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "mercury_data__alloc_sites_array__");
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__layout_out__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__ArrayName_8, (MR_Integer) 0)));

                switch (ll_backend__layout_out__V_108_108) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "mercury_data__lvar_label_layout_array__");
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "mercury_data__no_var_label_layout_array__");
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "mercury_data__svar_label_layout_array__");
                      }
                    }
                    break;
                }
              }
              break;
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleName_7);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          switch (MR_tag((MR_Word) ll_backend__layout_out__ArrayName_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ll_backend__layout_out__ArrayName_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_pseudo_type_infos");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_hlds_var_nums");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_short_locns");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_long_locns");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_user_event_layouts");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_user_event_var_nums");
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_proc_call_sites");
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_proc_cp_statics");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_proc_cp_dynamics");
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_proc_statics");
                    }
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_proc_head_var_nums");
                    }
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_proc_var_names");
                    }
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_proc_body_bytecodes");
                    }
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_proc_table_io_entries");
                    }
                  }
                  break;
                case (MR_Integer) 14:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_proc_event_layouts");
                    }
                  }
                  break;
                case (MR_Integer) 15:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_proc_exec_traces");
                    }
                  }
                  break;
                case (MR_Integer) 16:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_threadscope_strings");
                    }
                  }
                  break;
                case (MR_Integer) 17:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_alloc_sites");
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__layout_out__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__ArrayName_8, (MR_Integer) 0)));

                switch (ll_backend__layout_out__V_109_109) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_lvar_label_layouts");
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_no_var_label_layouts");
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_svar_label_layouts");
                      }
                    }
                    break;
                }
              }
              break;
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__ModuleName_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(
  MR_String ll_backend__layout_out__ModuleName_6,
  MR_Word ll_backend__layout_out__Name_7,
  MR_Word ll_backend__layout_out__BeingDefined_8)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    switch (ll_backend__layout_out__BeingDefined_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "static ");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_STATIC_LINKAGE ");
          }
        }
        break;
    }
    switch (MR_tag((MR_Word) ll_backend__layout_out__Name_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__layout_out__Name_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_PseudoTypeInfo ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_HLDSVarNum ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_ShortLval ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_LongLval ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const struct MR_UserEvent_Struct ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_HLDSVarNum ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_CallSiteStatic ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_CoveragePointStatic ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_ProcStatic ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_uint_least16_t ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_uint_least32_t ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_uint_least8_t ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_TableIoEntry ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "const MR_LabelLayout *");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_STATIC_CODE_CONST MR_ExecTrace ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_Threadscope_String ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
          case (MR_Integer) 17:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_AllocSiteInfo ");
              }
              {
                ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__layout_out__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__Name_7, (MR_Integer) 0)));

          switch (ll_backend__layout_out__V_103_103) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "const MR_LabelLayout ");
                }
                {
                  ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "const MR_LabelLayoutNoVarInfo ");
                }
                {
                  ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "const MR_LabelLayoutShort ");
                }
                {
                  ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__layout_out__ModuleName_6, ll_backend__layout_out__Name_7);
                }
              }
              break;
          }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(
  MR_Word ll_backend__layout_out__Name_5,
  MR_Word ll_backend__layout_out__BeingDefined_6)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    switch (MR_tag((MR_Word) ll_backend__layout_out__Name_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__layout_out__RttiProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Name_5, (MR_Integer) 0)));
          MR_Word ll_backend__layout_out__Kind_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Name_5, (MR_Integer) 1)));
          MR_Word ll_backend__layout_out__ProcIsImported_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ll_backend__layout_out__ProcIsExported_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 12)))) & (MR_Integer) 1);
          MR_String ll_backend__layout_out__V_131_131;
          MR_Word ll_backend__layout_out__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 0)));
          MR_Word ll_backend__layout_out__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 1)));
          MR_Word ll_backend__layout_out__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 2)));
          MR_String ll_backend__layout_out__V_185_185 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 3)));
          MR_Integer ll_backend__layout_out__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 4)));
          MR_Word ll_backend__layout_out__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 5)));
          MR_Word ll_backend__layout_out__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 6)));
          MR_Integer ll_backend__layout_out__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 7)));
          MR_Word ll_backend__layout_out__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 8)));
          MR_Word ll_backend__layout_out__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 9)));
          MR_Word ll_backend__layout_out__V_192_192 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 10)))) & (MR_Integer) 7);
          MR_Word ll_backend__layout_out__V_193_193 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word ll_backend__layout_out__V_194_194 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          MR_Word ll_backend__layout_out__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_8, (MR_Integer) 11)));

          ll_backend__layout_out__succeeded = (ll_backend__layout_out__ProcIsImported_10 == (MR_Integer) 0);
          if (ll_backend__layout_out__succeeded)
            ll_backend__layout_out__succeeded = (ll_backend__layout_out__ProcIsExported_11 == (MR_Integer) 0);
          if (ll_backend__layout_out__succeeded)
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static ");
              }
            }
          else
            switch (ll_backend__layout_out__BeingDefined_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "extern ");
                  }
                }
                break;
            }
          {
            mercury__io__write_string_3_p_0((MR_String) "const ");
          }
          {
            ll_backend__layout_out__V_131_131 = ll_backend__layout_out__proc_layout_kind_to_type_1_f_0(ll_backend__layout_out__Kind_9);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__layout_out__V_131_131);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
          {
            ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__layout_out__ClosureProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__Name_5, (MR_Integer) 2)));
          MR_Word ll_backend__layout_out___CallerProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__Name_5, (MR_Integer) 0)));
          MR_Integer ll_backend__layout_out___SeqNo_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__Name_5, (MR_Integer) 1)));

          {
            mercury__io__write_string_3_p_0((MR_String) "static const ");
          }
          if (((MR_tag((MR_Word) ll_backend__layout_out__ClosureProcLabel_14)) == (MR_mktag((MR_Integer) 0))))
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_UserClosureId\n");
              }
            }
          else
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_UCIClosureId\n");
              }
            }
          {
            ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "static const MR_ModuleFileLayout ");
          }
          {
            ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static const MR_int_least16_t ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static const MR_LabelLayout *");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static const char ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static const MR_ModuleFileLayout *");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static const MR_ProcLayout *");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ll_backend__layout_out__NumElements_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_5, (MR_Integer) 2)));
              MR_Word ll_backend__layout_out___ModuleName_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout_out__Name_5, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "static MR_Unsigned ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__layout_out__NumElements_29);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static const char ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static const char * ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static MR_SynthAttr ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static MR_uint_least16_t ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static MR_uint_least16_t ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 11:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static MR_int_least16_t ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static MR_UserEventSpec ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 13:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static const MR_uint_least8_t ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 14:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static const MR_uint_least8_t ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "[]");
              }
            }
            break;
          case (MR_Integer) 15:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "static const MR_ModuleLayout ");
              }
              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__Name_5);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_maybe_layout_name_decl_5_p_0(
  MR_Word ll_backend__layout_out__LayoutName_6,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_9,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_10)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__V_13_13;

    {
      ll_backend__layout_out__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_13_13, 1) = ((MR_Box) (ll_backend__layout_out__LayoutName_6));
    }
    {
      ll_backend__layout_out__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__layout_out__V_13_13, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_9);
    }
    if (ll_backend__layout_out__succeeded)
      *ll_backend__layout_out__STATE_VARIABLE_DeclSet_10 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_9;
    else
      {
        MR_Word ll_backend__layout_out__V_15_15;

        {
          ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__LayoutName_6, (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
        {
          ll_backend__layout_out__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_15_15, 1) = ((MR_Box) (ll_backend__layout_out__LayoutName_6));
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_15_15, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_9, ll_backend__layout_out__STATE_VARIABLE_DeclSet_10);
        }
      }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_name_decl_3_p_0(
  MR_Word ll_backend__layout_out__LayoutName_4)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    {
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__LayoutName_4, (MR_Integer) 0);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_closure_layout_data_defn_6_p_0(
  MR_Word ll_backend__layout_out___Info_7,
  MR_Word ll_backend__layout_out__ClosureData_8,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_20,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_21)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    {
      ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_108_111_115_117_114_101_95_108_97_121_111_117_116_95_100_97_116_97_95_100_101_102_110_95_95_91_49_93_95_48_6_p_0(ll_backend__layout_out__ClosureData_8, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_20, ll_backend__layout_out__STATE_VARIABLE_DeclSet_21);
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_module_layout_data_defn_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__Data_8,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_75,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_76)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Data_8, (MR_Integer) 0)));
    MR_Integer ll_backend__layout_out__StringTableSize_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Data_8, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__StringTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Data_8, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__MaybeDeepProfData_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Data_8, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__MaybeDebugData_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Data_8, (MR_Integer) 4)));
    MR_Tuple ll_backend__layout_out__OISUInfo_27;
    MR_Word ll_backend__layout_out__MaybeDebugInfo_52;
    MR_Word ll_backend__layout_out__ModuleLayoutName_53;
    MR_Word ll_backend__layout_out__ModuleStringTableName_54;
    MR_Integer ll_backend__layout_out__NumOISUTypesB_55;
    MR_Word ll_backend__layout_out__MaybeOISUBytesLayoutNameB_56;
    MR_Integer ll_backend__layout_out__NumTypesB_57;
    MR_Word ll_backend__layout_out__MaybeTypeTableLayoutNameB_58;
    MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_79_79;
    MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_106_106;
    MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_124_124;
    MR_Integer ll_backend__layout_out__V_134_134;
    MR_String ll_backend__layout_out__V_138_138;
    MR_Word ll_backend__layout_out__V_244_244;

    {
      ll_backend__layout_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_109_111_100_117_108_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_95_91_50_93_95_48_7_p_0(ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__StringTable_13, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_75, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_79_79);
    }
    if ((ll_backend__layout_out__MaybeDeepProfData_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__layout_out__OISUInfo_27 = (MR_Tuple) &ll_backend__layout_out_scalar_common_3[0];
        ll_backend__layout_out__STATE_VARIABLE_DeclSet_106_106 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_79_79;
      }
    else
      {
        MR_Word ll_backend__layout_out__DeepProfData_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeDeepProfData_14, (MR_Integer) 0)));
        MR_Integer ll_backend__layout_out__NumOISUTypesA_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DeepProfData_16, (MR_Integer) 0)));
        MR_Word ll_backend__layout_out__OISUBytes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DeepProfData_16, (MR_Integer) 1)));
        MR_Integer ll_backend__layout_out__NumTypesA_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DeepProfData_16, (MR_Integer) 2)));
        MR_Word ll_backend__layout_out__TypeTableBytes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DeepProfData_16, (MR_Integer) 3)));
        MR_Word ll_backend__layout_out__MaybeOISUBytesLayoutNameA_21;
        MR_Word ll_backend__layout_out__MaybeTypeTableLayoutNameA_23;
        MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_95_95;

        ll_backend__layout_out__succeeded = (ll_backend__layout_out__NumOISUTypesA_17 == (MR_Integer) 0);
        if (ll_backend__layout_out__succeeded)
          {
            ll_backend__layout_out__MaybeOISUBytesLayoutNameA_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ll_backend__layout_out__STATE_VARIABLE_DeclSet_95_95 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_79_79;
          }
        else
          {
            MR_Word ll_backend__layout_out__OISUBytesLayoutNameA_22;
            MR_Word ll_backend__layout_out__V_94_94;

            {
              ll_backend__layout_out__OISUBytesLayoutNameA_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__layout_out__OISUBytesLayoutNameA_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), ll_backend__layout_out__OISUBytesLayoutNameA_22, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_11));
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__OISUBytesLayoutNameA_22, (MR_Integer) 1);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " = {");
            }
            {
              ll_backend__layout_out__output_bytecodes_driver_3_p_0(ll_backend__layout_out__OISUBytes_18);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "};\n");
            }
            {
              ll_backend__layout_out__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_94_94, 1) = ((MR_Box) (ll_backend__layout_out__OISUBytesLayoutNameA_22));
            }
            {
              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_94_94, ll_backend__layout_out__STATE_VARIABLE_DeclSet_79_79, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_95_95);
            }
            {
              ll_backend__layout_out__MaybeOISUBytesLayoutNameA_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeOISUBytesLayoutNameA_21, 0) = ((MR_Box) (ll_backend__layout_out__OISUBytesLayoutNameA_22));
            }
          }
        if ((ll_backend__layout_out__TypeTableBytes_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ll_backend__layout_out__MaybeTypeTableLayoutNameA_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ll_backend__layout_out__STATE_VARIABLE_DeclSet_106_106 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_95_95;
          }
        else
          {
            MR_Word ll_backend__layout_out__TypeTableLayoutNameA_26;
            MR_Word ll_backend__layout_out__V_105_105;

            {
              ll_backend__layout_out__TypeTableLayoutNameA_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypeTableLayoutNameA_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), ll_backend__layout_out__TypeTableLayoutNameA_26, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_11));
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__TypeTableLayoutNameA_26, (MR_Integer) 1);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " = {");
            }
            {
              ll_backend__layout_out__output_bytecodes_driver_3_p_0(ll_backend__layout_out__TypeTableBytes_20);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "};\n");
            }
            {
              ll_backend__layout_out__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_105_105, 1) = ((MR_Box) (ll_backend__layout_out__TypeTableLayoutNameA_26));
            }
            {
              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_105_105, ll_backend__layout_out__STATE_VARIABLE_DeclSet_95_95, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_106_106);
            }
            {
              ll_backend__layout_out__MaybeTypeTableLayoutNameA_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeTypeTableLayoutNameA_23, 0) = ((MR_Box) (ll_backend__layout_out__TypeTableLayoutNameA_26));
            }
          }
        {
          ll_backend__layout_out__OISUInfo_27 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__OISUInfo_27, 0) = ((MR_Box) (ll_backend__layout_out__NumOISUTypesA_17));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__OISUInfo_27, 1) = ((MR_Box) (ll_backend__layout_out__MaybeOISUBytesLayoutNameA_21));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__OISUInfo_27, 2) = ((MR_Box) (ll_backend__layout_out__NumTypesA_19));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__OISUInfo_27, 3) = ((MR_Box) (ll_backend__layout_out__MaybeTypeTableLayoutNameA_23));
        }
      }
    if ((ll_backend__layout_out__MaybeDebugData_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__layout_out__MaybeDebugInfo_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__layout_out__STATE_VARIABLE_DeclSet_124_124 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_106_106;
      }
    else
      {
        MR_Word ll_backend__layout_out__DebugData_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeDebugData_15, (MR_Integer) 0)));
        MR_Word ll_backend__layout_out__ProcLayoutNames_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DebugData_28, (MR_Integer) 0)));
        MR_Word ll_backend__layout_out__FileLayouts_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DebugData_28, (MR_Integer) 1)));
        MR_Word ll_backend__layout_out__TraceLevelA_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DebugData_28, (MR_Integer) 2)));
        MR_Integer ll_backend__layout_out__SuppressedEventsA_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DebugData_28, (MR_Integer) 3)));
        MR_Integer ll_backend__layout_out__NumLabelsA_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DebugData_28, (MR_Integer) 4)));
        MR_Word ll_backend__layout_out__MaybeEventSetA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__DebugData_28, (MR_Integer) 5)));
        MR_Word ll_backend__layout_out__ProcLayoutVectorNameA_35;
        MR_Integer ll_backend__layout_out__ProcLayoutVectorLengthA_36;
        MR_Word ll_backend__layout_out__FileLayoutNames_37;
        MR_Integer ll_backend__layout_out__FileLayoutVectorLengthA_38;
        MR_Word ll_backend__layout_out__FileLayoutVectorNameA_39;
        MR_Word ll_backend__layout_out__LabelExecCountNameA_40;
        MR_Word ll_backend__layout_out__MaybeEventInfoA_41;
        MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_107_107;
        MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_110_110;
        MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_112_112;
        MR_Word ll_backend__layout_out__V_120_120;
        MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_121_121;
        MR_Tuple ll_backend__layout_out__V_127_127;

        {
          ll_backend__layout_out__output_module_layout_proc_vector_defn_7_p_0(ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__ProcLayoutNames_29, &ll_backend__layout_out__ProcLayoutVectorNameA_35, ll_backend__layout_out__STATE_VARIABLE_DeclSet_106_106, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_107_107);
        }
        {
          mercury__list__length_2_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0, ll_backend__layout_out__ProcLayoutNames_29, &ll_backend__layout_out__ProcLayoutVectorLengthA_36);
        }
        {
          ll_backend__layout_out__output_file_layout_data_defns_9_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__ModuleName_11, (MR_Integer) 0, ll_backend__layout_out__FileLayouts_30, &ll_backend__layout_out__FileLayoutNames_37, ll_backend__layout_out__STATE_VARIABLE_DeclSet_107_107, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_110_110);
        }
        {
          mercury__list__length_2_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0, ll_backend__layout_out__FileLayouts_30, &ll_backend__layout_out__FileLayoutVectorLengthA_38);
        }
        {
          ll_backend__layout_out__output_file_layout_vector_data_defn_7_p_0(ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__FileLayoutNames_37, &ll_backend__layout_out__FileLayoutVectorNameA_39, ll_backend__layout_out__STATE_VARIABLE_DeclSet_110_110, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_112_112);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          ll_backend__layout_out__LabelExecCountNameA_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__LabelExecCountNameA_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__LabelExecCountNameA_40, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_11));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__LabelExecCountNameA_40, 2) = ((MR_Box) (ll_backend__layout_out__NumLabelsA_33));
        }
        {
          ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__LabelExecCountNameA_40, (MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
        {
          ll_backend__layout_out__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_120_120, 1) = ((MR_Box) (ll_backend__layout_out__LabelExecCountNameA_40));
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_120_120, ll_backend__layout_out__STATE_VARIABLE_DeclSet_112_112, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_121_121);
        }
        if ((ll_backend__layout_out__MaybeEventSetA_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ll_backend__layout_out__MaybeEventInfoA_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ll_backend__layout_out__STATE_VARIABLE_DeclSet_124_124 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_121_121;
          }
        else
          {
            MR_Word ll_backend__layout_out__EventSetDataLayout_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeEventSetA_34, (MR_Integer) 0)));
            MR_Word ll_backend__layout_out__EventSetDataA_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSetDataLayout_42, (MR_Integer) 0)));
            MR_Word ll_backend__layout_out__TypesRvalMap_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSetDataLayout_42, (MR_Integer) 1)));
            MR_String ll_backend__layout_out__EventSetNameA_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSetDataA_43, (MR_Integer) 0)));
            MR_String ll_backend__layout_out__EventSetDesc_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSetDataA_43, (MR_Integer) 1)));
            MR_Word ll_backend__layout_out__EventSpecs_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSetDataA_43, (MR_Integer) 2)));
            MR_Integer ll_backend__layout_out__MaxNumAttrA_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__EventSetDataA_43, (MR_Integer) 3)));
            MR_Word ll_backend__layout_out__EventSetDescLayoutNameA_49;
            MR_Word ll_backend__layout_out__EventSpecsLayoutNameA_50;
            MR_Integer ll_backend__layout_out__NumEventSpecsA_51;
            MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_122_122;
            MR_Tuple ll_backend__layout_out__V_126_126;

            {
              ll_backend__layout_out__output_event_set_desc_defn_7_p_0(ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__EventSetDesc_46, &ll_backend__layout_out__EventSetDescLayoutNameA_49, ll_backend__layout_out__STATE_VARIABLE_DeclSet_121_121, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_122_122);
            }
            {
              ll_backend__layout_out__output_event_specs_and_components_9_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__EventSpecs_47, ll_backend__layout_out__ModuleName_11, ll_backend__layout_out__TypesRvalMap_44, &ll_backend__layout_out__EventSpecsLayoutNameA_50, ll_backend__layout_out__STATE_VARIABLE_DeclSet_122_122, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_124_124);
            }
            {
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0, ll_backend__layout_out__EventSpecs_47, &ll_backend__layout_out__NumEventSpecsA_51);
            }
            {
              ll_backend__layout_out__V_126_126 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_126_126, 0) = ((MR_Box) (ll_backend__layout_out__EventSetNameA_45));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_126_126, 1) = ((MR_Box) (ll_backend__layout_out__MaxNumAttrA_48));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_126_126, 2) = ((MR_Box) (ll_backend__layout_out__NumEventSpecsA_51));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_126_126, 3) = ((MR_Box) (ll_backend__layout_out__EventSetDescLayoutNameA_49));
              MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_126_126, 4) = ((MR_Box) (ll_backend__layout_out__EventSpecsLayoutNameA_50));
            }
            {
              ll_backend__layout_out__MaybeEventInfoA_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeEventInfoA_41, 0) = ((MR_Box) (ll_backend__layout_out__V_126_126));
            }
          }
        {
          ll_backend__layout_out__V_127_127 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_127_127, 0) = ((MR_Box) (ll_backend__layout_out__ProcLayoutVectorLengthA_36));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_127_127, 1) = ((MR_Box) (ll_backend__layout_out__ProcLayoutVectorNameA_35));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_127_127, 2) = ((MR_Box) (ll_backend__layout_out__FileLayoutVectorLengthA_38));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_127_127, 3) = ((MR_Box) (ll_backend__layout_out__FileLayoutVectorNameA_39));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_127_127, 4) = ((MR_Box) (ll_backend__layout_out__TraceLevelA_31));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_127_127, 5) = ((MR_Box) (ll_backend__layout_out__SuppressedEventsA_32));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_127_127, 6) = ((MR_Box) (ll_backend__layout_out__NumLabelsA_33));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_127_127, 7) = ((MR_Box) (ll_backend__layout_out__LabelExecCountNameA_40));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_127_127, 8) = ((MR_Box) (ll_backend__layout_out__MaybeEventInfoA_41));
        }
        {
          ll_backend__layout_out__MaybeDebugInfo_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeDebugInfo_52, 0) = ((MR_Box) (ll_backend__layout_out__V_127_127));
        }
      }
    {
      ll_backend__layout_out__ModuleLayoutName_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__ModuleLayoutName_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__ModuleLayoutName_53, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_11));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__ModuleLayoutName_53, (MR_Integer) 1);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
    }
    {
      ll_backend__layout_out__V_134_134 = ll_backend__layout_out__layout_version_number_0_f_0();
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__V_134_134);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      ll_backend__layout_out__V_138_138 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__layout_out__ModuleName_11);
    }
    {
      ll_backend__layout_out__quote_and_write_string_3_p_0(ll_backend__layout_out__V_138_138);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__StringTableSize_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      ll_backend__layout_out__ModuleStringTableName_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__ModuleStringTableName_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__ModuleStringTableName_54, 1) = ((MR_Box) (ll_backend__layout_out__ModuleName_11));
    }
    {
      ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__ModuleStringTableName_54);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    ll_backend__layout_out__NumOISUTypesB_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__OISUInfo_27, (MR_Integer) 0)));
    ll_backend__layout_out__MaybeOISUBytesLayoutNameB_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__OISUInfo_27, (MR_Integer) 1)));
    ll_backend__layout_out__NumTypesB_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__OISUInfo_27, (MR_Integer) 2)));
    ll_backend__layout_out__MaybeTypeTableLayoutNameB_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__OISUInfo_27, (MR_Integer) 3)));
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__NumOISUTypesB_55);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    if ((ll_backend__layout_out__MaybeOISUBytesLayoutNameB_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__OISUBytesLayoutNameB_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeOISUBytesLayoutNameB_56, (MR_Integer) 0)));

        {
          ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__OISUBytesLayoutNameB_59);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
      }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__NumTypesB_57);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    if ((ll_backend__layout_out__MaybeTypeTableLayoutNameB_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__TypeTableLayoutNameB_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeTypeTableLayoutNameB_58, (MR_Integer) 0)));

        {
          ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__TypeTableLayoutNameB_60);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
      }
    if ((ll_backend__layout_out__MaybeDebugInfo_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_TRACE_LEVEL_NONE,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL\n");
        }
      }
    else
      {
        MR_Integer ll_backend__layout_out__ProcLayoutVectorLengthB_61;
        MR_Word ll_backend__layout_out__ProcLayoutVectorNameB_62;
        MR_Integer ll_backend__layout_out__FileLayoutVectorLengthB_63;
        MR_Word ll_backend__layout_out__FileLayoutVectorNameB_64;
        MR_Word ll_backend__layout_out__TraceLevelB_65;
        MR_Integer ll_backend__layout_out__SuppressedEventsB_66;
        MR_Integer ll_backend__layout_out__NumLabelsB_67;
        MR_Word ll_backend__layout_out__LabelExecCountNameB_68;
        MR_Word ll_backend__layout_out__MaybeEventInfoB_69;
        MR_Tuple ll_backend__layout_out__V_190_190 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeDebugInfo_52, (MR_Integer) 0)));
        MR_String ll_backend__layout_out__V_203_203;

        ll_backend__layout_out__ProcLayoutVectorLengthB_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_190_190, (MR_Integer) 0)));
        ll_backend__layout_out__ProcLayoutVectorNameB_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_190_190, (MR_Integer) 1)));
        ll_backend__layout_out__FileLayoutVectorLengthB_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_190_190, (MR_Integer) 2)));
        ll_backend__layout_out__FileLayoutVectorNameB_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_190_190, (MR_Integer) 3)));
        ll_backend__layout_out__TraceLevelB_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_190_190, (MR_Integer) 4)));
        ll_backend__layout_out__SuppressedEventsB_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_190_190, (MR_Integer) 5)));
        ll_backend__layout_out__NumLabelsB_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_190_190, (MR_Integer) 6)));
        ll_backend__layout_out__LabelExecCountNameB_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_190_190, (MR_Integer) 7)));
        ll_backend__layout_out__MaybeEventInfoB_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_190_190, (MR_Integer) 8)));
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__ProcLayoutVectorLengthB_61);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__ProcLayoutVectorNameB_62);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__FileLayoutVectorLengthB_63);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__FileLayoutVectorNameB_64);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          ll_backend__layout_out__V_203_203 = libs__trace_params__trace_level_rep_1_f_0(ll_backend__layout_out__TraceLevelB_65);
        }
        {
          mercury__io__write_string_3_p_0(ll_backend__layout_out__V_203_203);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__SuppressedEventsB_66);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__NumLabelsB_67);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__LabelExecCountNameB_68);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        if ((ll_backend__layout_out__MaybeEventInfoB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "0,\n");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "0,\n");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "NULL\n");
            }
          }
        else
          {
            MR_String ll_backend__layout_out__EventSetNameB_70;
            MR_Integer ll_backend__layout_out__MaxNumAttrB_71;
            MR_Integer ll_backend__layout_out__NumEventSpecsB_72;
            MR_Word ll_backend__layout_out__EventSetDescLayoutNameB_73;
            MR_Word ll_backend__layout_out__EventSpecsLayoutNameB_74;
            MR_Tuple ll_backend__layout_out__V_216_216 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeEventInfoB_69, (MR_Integer) 0)));

            ll_backend__layout_out__EventSetNameB_70 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_216_216, (MR_Integer) 0)));
            ll_backend__layout_out__MaxNumAttrB_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_216_216, (MR_Integer) 1)));
            ll_backend__layout_out__NumEventSpecsB_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_216_216, (MR_Integer) 2)));
            ll_backend__layout_out__EventSetDescLayoutNameB_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_216_216, (MR_Integer) 3)));
            ll_backend__layout_out__EventSpecsLayoutNameB_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__V_216_216, (MR_Integer) 4)));
            {
              ll_backend__layout_out__quote_and_write_string_3_p_0(ll_backend__layout_out__EventSetNameB_70);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
            {
              ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__EventSetDescLayoutNameB_73);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
            {
              mercury__io__write_int_3_p_0(ll_backend__layout_out__MaxNumAttrB_71);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
            {
              mercury__io__write_int_3_p_0(ll_backend__layout_out__NumEventSpecsB_72);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
            {
              ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__EventSpecsLayoutNameB_74);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    {
      ll_backend__layout_out__V_244_244 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_244_244, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__V_244_244, 1) = ((MR_Box) (ll_backend__layout_out__ModuleLayoutName_53));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__V_244_244, ll_backend__layout_out__STATE_VARIABLE_DeclSet_124_124, ll_backend__layout_out__STATE_VARIABLE_DeclSet_76);
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_proc_layout_data_defn_6_p_0(
  MR_Word ll_backend__layout_out__Info_7,
  MR_Word ll_backend__layout_out__ProcLayoutData_8,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_38,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_39)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_Word ll_backend__layout_out__RttiProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLayoutData_8, (MR_Integer) 0)));
    MR_Word ll_backend__layout_out__Traversal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLayoutData_8, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__MaybeRest_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLayoutData_8, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__ProcLabel_14;
    MR_Word ll_backend__layout_out__MaybeEntryLabel_15;
    MR_Word ll_backend__layout_out__MaybeSuccipSlot_16;
    MR_Integer ll_backend__layout_out__StackSlotCount_17;
    MR_Word ll_backend__layout_out__Detism_18;
    MR_Word ll_backend__layout_out__ProcLayoutName_25;
    MR_Word ll_backend__layout_out__DeclId_37;
    MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_46_46;
    MR_String ll_backend__layout_out__V_70_70;

    {
      ll_backend__layout_out__ProcLabel_14 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__layout_out__RttiProcLabel_11);
    }
    ll_backend__layout_out__MaybeEntryLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Traversal_12, (MR_Integer) 0)));
    ll_backend__layout_out__MaybeSuccipSlot_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Traversal_12, (MR_Integer) 1)));
    ll_backend__layout_out__StackSlotCount_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Traversal_12, (MR_Integer) 2)));
    ll_backend__layout_out__Detism_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Traversal_12, (MR_Integer) 3)));
    if ((ll_backend__layout_out__MaybeEntryLabel_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__layout_out__Kind_20;

        if ((ll_backend__layout_out__MaybeRest_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ll_backend__layout_out__Kind_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ll_backend__layout_out__STATE_VARIABLE_DeclSet_46_46 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_38;
          }
        else
          {
            MR_Word ll_backend__layout_out__ModuleLayoutDecl_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeRest_13, (MR_Integer) 3)));
            MR_Word ll_backend__layout_out__V_45_45;
            MR_Word ll_backend__layout_out__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeRest_13, (MR_Integer) 0)));
            MR_Word ll_backend__layout_out__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeRest_13, (MR_Integer) 1)));
            MR_Word ll_backend__layout_out__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeRest_13, (MR_Integer) 2)));

            {
              ll_backend__layout_out__V_45_45 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ll_backend__layout_out__ProcLabel_14);
            }
            {
              ll_backend__layout_out__Kind_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__layout_out__Kind_20, 0) = ((MR_Box) (ll_backend__layout_out__V_45_45));
            }
            {
              ll_backend__layout_out__output_layout_decl_5_p_0(ll_backend__layout_out__ModuleLayoutDecl_24, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_38, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_46_46);
            }
          }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          ll_backend__layout_out__ProcLayoutName_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLayoutName_25, 0) = ((MR_Box) (ll_backend__layout_out__RttiProcLabel_11));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLayoutName_25, 1) = ((MR_Box) (ll_backend__layout_out__Kind_20));
        }
        {
          ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__ProcLayoutName_25, (MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__EntryLabel_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeEntryLabel_15, (MR_Integer) 0)));
        MR_Word ll_backend__layout_out__V_42_42;
        MR_Word ll_backend__layout_out__Kind_154;
        MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_43_159;

        {
          ll_backend__layout_out__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__layout_out__V_42_42, 0) = ((MR_Box) (ll_backend__layout_out__EntryLabel_26));
        }
        {
          ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_6_p_0(ll_backend__layout_out__Info_7, ll_backend__layout_out__V_42_42, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_38, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_43_159);
        }
        if ((ll_backend__layout_out__MaybeRest_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ll_backend__layout_out__Kind_154 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ll_backend__layout_out__STATE_VARIABLE_DeclSet_46_46 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_43_159;
          }
        else
          {
            MR_Word ll_backend__layout_out__ModuleLayoutDecl_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeRest_13, (MR_Integer) 3)));
            MR_Word ll_backend__layout_out__V_148_148;
            MR_Word ll_backend__layout_out__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeRest_13, (MR_Integer) 0)));
            MR_Word ll_backend__layout_out__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeRest_13, (MR_Integer) 1)));
            MR_Word ll_backend__layout_out__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeRest_13, (MR_Integer) 2)));

            {
              ll_backend__layout_out__V_148_148 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ll_backend__layout_out__ProcLabel_14);
            }
            {
              ll_backend__layout_out__Kind_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__layout_out__Kind_154, 0) = ((MR_Box) (ll_backend__layout_out__V_148_148));
            }
            {
              ll_backend__layout_out__output_layout_decl_5_p_0(ll_backend__layout_out__ModuleLayoutDecl_147, ll_backend__layout_out__STATE_VARIABLE_DeclSet_43_159, &ll_backend__layout_out__STATE_VARIABLE_DeclSet_46_46);
            }
          }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          ll_backend__layout_out__ProcLayoutName_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLayoutName_25, 0) = ((MR_Box) (ll_backend__layout_out__RttiProcLabel_11));
          MR_hl_field(MR_mktag(0), ll_backend__layout_out__ProcLayoutName_25, 1) = ((MR_Box) (ll_backend__layout_out__Kind_154));
        }
        {
          ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__layout_out__ProcLayoutName_25, (MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
        {
          ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__layout_out__V_42_42);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    if ((ll_backend__layout_out__MaybeSuccipSlot_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_int_3_p_0((MR_Integer) -1);
        }
      }
    else
      {
        MR_Integer ll_backend__layout_out__SuccipSlot_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeSuccipSlot_16, (MR_Integer) 0)));

        {
          mercury__io__write_int_3_p_0(ll_backend__layout_out__SuccipSlot_27);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__layout_out__StackSlotCount_17);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      ll_backend__layout_out__V_70_70 = ll_backend__layout_out__detism_to_c_detism_1_f_0(ll_backend__layout_out__Detism_18);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__layout_out__V_70_70);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n},\n");
    }
    if ((ll_backend__layout_out__MaybeRest_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "-1\n");
        }
      }
    else
      {
        MR_Word ll_backend__layout_out__MaybeProcStatic_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeRest_13, (MR_Integer) 0)));
        MR_Word ll_backend__layout_out__MaybeExecTrace_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeRest_13, (MR_Integer) 1)));
        MR_Word ll_backend__layout_out__MaybeProcBodyBytes_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeRest_13, (MR_Integer) 2)));
        MR_Word ll_backend__layout_out__ModuleLayout_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeRest_13, (MR_Integer) 3)));
        MR_Word ll_backend__layout_out__Origin_32;
        MR_String ll_backend__layout_out__MangledModuleName_33;
        MR_Word ll_backend__layout_out__V_105_105;
        MR_Word ll_backend__layout_out__V_106_106;
        MR_Word ll_backend__layout_out__V_107_107;
        MR_String ll_backend__layout_out__V_108_108;
        MR_Integer ll_backend__layout_out__V_109_109;
        MR_Word ll_backend__layout_out__V_110_110;
        MR_Word ll_backend__layout_out__V_111_111;
        MR_Integer ll_backend__layout_out__V_112_112;
        MR_Word ll_backend__layout_out__V_113_113;
        MR_Word ll_backend__layout_out__V_114_114;
        MR_Word ll_backend__layout_out__V_115_115;
        MR_Word ll_backend__layout_out__V_116_116;
        MR_Word ll_backend__layout_out__V_117_117;
        MR_Word ll_backend__layout_out__V_118_118;
        MR_Word ll_backend__layout_out__V_119_119;
        MR_Word ll_backend__layout_out__V_120_120;
        MR_String ll_backend__layout_out__V_121_121;
        MR_Word ll_backend__layout_out__V_122_122;
        MR_Word ll_backend__layout_out__V_123_123;
        MR_Word ll_backend__layout_out__V_124_124;
        MR_Word ll_backend__layout_out__V_125_125;
        MR_Word ll_backend__layout_out__V_126_126;
        MR_Word ll_backend__layout_out__V_127_127;
        MR_Word ll_backend__layout_out__V_128_128;
        MR_Word ll_backend__layout_out__V_129_129;
        MR_Word ll_backend__layout_out__V_130_130;
        MR_Word ll_backend__layout_out__V_131_131;
        MR_Word ll_backend__layout_out__V_132_132;
        MR_Word ll_backend__layout_out__V_133_133;
        MR_Word ll_backend__layout_out__V_134_134;
        MR_Word ll_backend__layout_out__V_135_135;
        MR_Word ll_backend__layout_out__V_136_136;
        MR_Word ll_backend__layout_out__V_137_137;
        MR_Word ll_backend__layout_out__V_138_138;
        MR_Word ll_backend__layout_out__V_139_139;
        MR_Word ll_backend__layout_out__V_140_140;

        {
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
        ll_backend__layout_out__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 0)));
        ll_backend__layout_out__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 1)));
        ll_backend__layout_out__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 2)));
        ll_backend__layout_out__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 3)));
        ll_backend__layout_out__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 4)));
        ll_backend__layout_out__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 5)));
        ll_backend__layout_out__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 6)));
        ll_backend__layout_out__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 7)));
        ll_backend__layout_out__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 8)));
        ll_backend__layout_out__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 9)));
        ll_backend__layout_out__V_115_115 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 10)))) & (MR_Integer) 7);
        ll_backend__layout_out__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        ll_backend__layout_out__V_117_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        ll_backend__layout_out__Origin_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 11)));
        ll_backend__layout_out__V_118_118 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 12)))) & (MR_Integer) 1);
        ll_backend__layout_out__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__RttiProcLabel_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        {
          ll_backend__layout_out__output_proc_id_4_p_0(ll_backend__layout_out__ProcLabel_14, ll_backend__layout_out__Origin_32);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "},\n");
        }
        ll_backend__layout_out__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 0)));
        ll_backend__layout_out__MangledModuleName_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 1)));
        ll_backend__layout_out__V_121_121 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 2)));
        ll_backend__layout_out__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 3)));
        ll_backend__layout_out__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 4)));
        ll_backend__layout_out__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 5)));
        ll_backend__layout_out__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 6)));
        ll_backend__layout_out__V_126_126 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
        ll_backend__layout_out__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        ll_backend__layout_out__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        ll_backend__layout_out__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        ll_backend__layout_out__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
        ll_backend__layout_out__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
        ll_backend__layout_out__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
        ll_backend__layout_out__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
        ll_backend__layout_out__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
        ll_backend__layout_out__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
        ll_backend__layout_out__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
        ll_backend__layout_out__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
        ll_backend__layout_out__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
        ll_backend__layout_out__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
        ll_backend__layout_out__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_7, (MR_Integer) 8)));
        if ((ll_backend__layout_out__MaybeExecTrace_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
            }
          }
        else
          {
            MR_Word ll_backend__layout_out__ExecTraceSlotName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeExecTrace_29, (MR_Integer) 0)));

            {
              ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__MangledModuleName_33, ll_backend__layout_out__ExecTraceSlotName_34);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
          }
        if ((ll_backend__layout_out__MaybeProcStatic_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
            }
          }
        else
          {
            MR_Word ll_backend__layout_out__ProcStaticSlotName_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeProcStatic_28, (MR_Integer) 0)));

            {
              ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__MangledModuleName_33, ll_backend__layout_out__ProcStaticSlotName_35);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
          }
        if ((ll_backend__layout_out__MaybeProcBodyBytes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
            }
          }
        else
          {
            MR_Word ll_backend__layout_out__ProcBodyBytesSlotName_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout_out__MaybeProcBodyBytes_30, (MR_Integer) 0)));

            {
              ll_backend__layout_out__output_layout_slot_addr_5_p_0((MR_Integer) 1, ll_backend__layout_out__MangledModuleName_33, ll_backend__layout_out__ProcBodyBytesSlotName_36);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
          }
        {
          mercury__io__write_string_3_p_0((MR_String) "&");
        }
        {
          ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__layout_out__ModuleLayout_31);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n};\n");
    }
    {
      ll_backend__layout_out__DeclId_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__DeclId_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__layout_out__DeclId_37, 1) = ((MR_Box) (ll_backend__layout_out__ProcLayoutName_25));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__layout_out__DeclId_37, ll_backend__layout_out__STATE_VARIABLE_DeclSet_46_46, ll_backend__layout_out__STATE_VARIABLE_DeclSet_39);
    }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_array_defns_25_p_0(
  MR_Word ll_backend__layout_out__Info_26,
  MR_Word ll_backend__layout_out__PseudoTypeInfos_27,
  MR_Word ll_backend__layout_out__HLDSVarNums_28,
  MR_Word ll_backend__layout_out__ShortLocns_29,
  MR_Word ll_backend__layout_out__LongLocns_30,
  MR_Word ll_backend__layout_out__UserEventVarNums_31,
  MR_Word ll_backend__layout_out__UserEvents_32,
  MR_Word ll_backend__layout_out__NoVarLabelLayouts_33,
  MR_Word ll_backend__layout_out__SVarLabelLayouts_34,
  MR_Word ll_backend__layout_out__LVarLabelLayouts_35,
  MR_Word ll_backend__layout_out__CallSiteStatics_36,
  MR_Word ll_backend__layout_out__CoveragePoints_37,
  MR_Word ll_backend__layout_out__ProcStatics_38,
  MR_Word ll_backend__layout_out__ProcHeadVarNums_39,
  MR_Word ll_backend__layout_out__ProcVarNames_40,
  MR_Word ll_backend__layout_out__ProcBodyBytecodes_41,
  MR_Word ll_backend__layout_out__TableIoEntries_42,
  MR_Word ll_backend__layout_out__ProcEventLayouts_43,
  MR_Word ll_backend__layout_out__ExecTraces_44,
  MR_Word ll_backend__layout_out__TSStringTable_45,
  MR_Word ll_backend__layout_out__AllocSites_46,
  MR_Word ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_90,
  MR_Word * ll_backend__layout_out__STATE_VARIABLE_DeclSet_91)
{
  {
    MR_bool ll_backend__layout_out__succeeded;

    if ((ll_backend__layout_out__PseudoTypeInfos_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_pseudo_type_info_array_defn_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__PseudoTypeInfos_27);
        }
      }
    if ((ll_backend__layout_out__HLDSVarNums_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_hlds_var_nums_array_defn_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__HLDSVarNums_28);
        }
      }
    if ((ll_backend__layout_out__ShortLocns_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_short_locns_array_defn_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__ShortLocns_29);
        }
      }
    if ((ll_backend__layout_out__LongLocns_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_long_locns_array_defn_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__LongLocns_30);
        }
      }
    if ((ll_backend__layout_out__UserEventVarNums_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_user_event_var_nums_array_defn_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__UserEventVarNums_31);
        }
      }
    if ((ll_backend__layout_out__UserEvents_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_user_events_array_defn_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__UserEvents_32);
        }
      }
    if ((ll_backend__layout_out__NoVarLabelLayouts_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_no_var_label_layouts_array_defn_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__NoVarLabelLayouts_33);
        }
      }
    if ((ll_backend__layout_out__SVarLabelLayouts_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_short_var_label_layouts_array_defn_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__SVarLabelLayouts_34);
        }
      }
    if ((ll_backend__layout_out__LVarLabelLayouts_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_long_var_label_layouts_array_defn_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__LVarLabelLayouts_35);
        }
      }
    if ((ll_backend__layout_out__CallSiteStatics_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__layout_out__STATE_VARIABLE_DeclSet_91 = ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_90;
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_call_site_static_array_6_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__CallSiteStatics_36, ll_backend__layout_out__STATE_VARIABLE_DeclSet_0_90, ll_backend__layout_out__STATE_VARIABLE_DeclSet_91);
        }
      }
    if ((ll_backend__layout_out__CoveragePoints_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Integer ll_backend__layout_out__NumCoveragePoints_71;

        {
          mercury__io__nl_2_p_0();
        }
        {
          mercury__list__length_2_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, ll_backend__layout_out__CoveragePoints_37, &ll_backend__layout_out__NumCoveragePoints_71);
        }
        {
          ll_backend__layout_out__output_proc_static_cp_static_array_5_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__CoveragePoints_37, ll_backend__layout_out__NumCoveragePoints_71);
        }
        {
          ll_backend__layout_out__output_proc_static_cp_dynamic_array_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__NumCoveragePoints_71);
        }
      }
    if ((ll_backend__layout_out__ProcStatics_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_proc_statics_array_defn_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__ProcStatics_38);
        }
      }
    if ((ll_backend__layout_out__ProcHeadVarNums_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_proc_head_var_nums_array_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__ProcHeadVarNums_39);
        }
      }
    if ((ll_backend__layout_out__ProcVarNames_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_proc_var_names_array_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__ProcVarNames_40);
        }
      }
    if ((ll_backend__layout_out__ProcBodyBytecodes_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_proc_body_bytecodes_array_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__ProcBodyBytecodes_41);
        }
      }
    if ((ll_backend__layout_out__TableIoEntries_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_table_io_entry_array_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__TableIoEntries_42);
        }
      }
    if ((ll_backend__layout_out__ProcEventLayouts_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_proc_event_layout_array_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__ProcEventLayouts_43);
        }
      }
    if ((ll_backend__layout_out__ExecTraces_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_exec_traces_array_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__ExecTraces_44);
        }
      }
    if ((ll_backend__layout_out__TSStringTable_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_threadscope_string_table_array_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__TSStringTable_45);
        }
      }
    if ((ll_backend__layout_out__AllocSites_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__nl_2_p_0();
        }
        {
          ll_backend__layout_out__output_alloc_sites_array_4_p_0(ll_backend__layout_out__Info_26, ll_backend__layout_out__AllocSites_46);
        }
      }
  }
}

void MR_CALL 
ll_backend__layout_out__output_layout_array_decls_22_p_0(
  MR_Word ll_backend__layout_out__Info_23,
  MR_Word ll_backend__layout_out__PseudoTypeInfos_24,
  MR_Word ll_backend__layout_out__HLDSVarNums_25,
  MR_Word ll_backend__layout_out__ShortLocns_26,
  MR_Word ll_backend__layout_out__LongLocns_27,
  MR_Word ll_backend__layout_out__UserEventVarNums_28,
  MR_Word ll_backend__layout_out__UserEvents_29,
  MR_Word ll_backend__layout_out__NoVarLabelLayouts_30,
  MR_Word ll_backend__layout_out__SVarLabelLayouts_31,
  MR_Word ll_backend__layout_out__LVarLabelLayouts_32,
  MR_Word ll_backend__layout_out__CallSiteStatics_33,
  MR_Word ll_backend__layout_out__CoveragePoints_34,
  MR_Word ll_backend__layout_out__ProcStatics_35,
  MR_Word ll_backend__layout_out__ProcHeadVarNums_36,
  MR_Word ll_backend__layout_out__ProcVarNames_37,
  MR_Word ll_backend__layout_out__ProcBodyBytecodes_38,
  MR_Word ll_backend__layout_out__TableIoEntries_39,
  MR_Word ll_backend__layout_out__ProcEventLayouts_40,
  MR_Word ll_backend__layout_out__ExecTraces_41,
  MR_Word ll_backend__layout_out__AllocSites_42)
{
  {
    MR_bool ll_backend__layout_out__succeeded;
    MR_String ll_backend__layout_out__MangledModuleName_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 1)));
    MR_Word ll_backend__layout_out__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 0)));
    MR_String ll_backend__layout_out__V_189_189 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 2)));
    MR_Word ll_backend__layout_out__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 3)));
    MR_Word ll_backend__layout_out__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 4)));
    MR_Word ll_backend__layout_out__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 5)));
    MR_Word ll_backend__layout_out__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 6)));
    MR_Word ll_backend__layout_out__V_194_194 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_195_195 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_196_196 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_197_197 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_198_198 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_199_199 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_200_200 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_201_201 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_202_202 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_203_203 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_204_204 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_205_205 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_206_206 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__layout_out__V_207_207 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__layout_out__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout_out__Info_23, (MR_Integer) 8)));

    if ((ll_backend__layout_out__PseudoTypeInfos_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__HLDSVarNums_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__ShortLocns_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__LongLocns_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__UserEventVarNums_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__UserEvents_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__NoVarLabelLayouts_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_4[0]), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__SVarLabelLayouts_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_4[1]), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__LVarLabelLayouts_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__layout_out_scalar_common_4[2]), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__CallSiteStatics_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__CoveragePoints_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__ProcStatics_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__ProcHeadVarNums_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__ProcVarNames_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__ProcBodyBytecodes_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__TableIoEntries_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__ExecTraces_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__ProcEventLayouts_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
    if ((ll_backend__layout_out__AllocSites_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          ll_backend__layout_out__output_layout_array_name_storage_type_name_5_p_0(ll_backend__layout_out__MangledModuleName_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)), (MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "[];\n");
        }
      }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.layout_out. */
