/*
** Automatically generated from `prog_rep.m'
** by the Mercury compiler,
** version rotd-2026-08-22
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


// :- module ll_backend.prog_rep.
// :- implementation.

/*
INIT mercury__ll_backend__prog_rep__init
ENDINIT
*/

#include "ll_backend.prog_rep.mih"


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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.proc_label.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_transform.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_test.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "ll_backend.prog_rep_tables.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
  MR_bool ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11;
  jmp_buf ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4;
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_29;
};

struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
  MR_bool ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11;
  jmp_buf ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4;
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_29;
};

struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
  MR_bool ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11;
  jmp_buf ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4;
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30;
};


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0;

static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1;

static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_ordinal_ordered_flatten_par_conjs_0[2];

static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_name_ordered_flatten_par_conjs_0[2];

static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_flatten_par_conjs_0[2];

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ll_backend__prog_rep__ll_backend__prog_rep__field_types_prog_rep_info_0_0[6];

static const MR_ConstString ll_backend__prog_rep__ll_backend__prog_rep__field_names_prog_rep_info_0_0[6];

static const MR_DuArgLocn ll_backend__prog_rep__ll_backend__prog_rep__field_locns_prog_rep_info_0_0[6];

static const MR_DuFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0[1];

static const MR_DuPtagLayout ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_name_ordered_prog_rep_info_0[1];

static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_prog_rep_info_0[1];

static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__322__1_2_p_0(
  MR_Word IncludeVarTypes_12,
  MR_Word HeadVar__2_55);

static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__464__1_2_p_0(
  MR_Word ConjType_13,
  MR_Word HeadVar__2_147);

static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__539__2_2_f_0(
  MR_Word HeadVar__1_281,
  MR_Word HeadVar__2_266);

static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__539__1_2_f_0(
  MR_Word HeadVar__1_155,
  MR_Word HeadVar__2_220);

static MR_Integer MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__608__1_3_f_0(
  MR_Word HeadVar__1_169,
  MR_Word HeadVar__2_170,
  MR_Word HeadVar__3_231);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_head_var_func_4_f_0(
  MR_Word Info_6,
  MR_Word InitialInstmap_7,
  MR_Word InstmapDelta_8,
  MR_Word Var_9);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(
  MR_Word Info_4,
  MR_Word MaybeVar_5);

static void MR_CALL 
ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(
  MR_Word ConsIdArity_5,
  MR_Word * ConsIdBytes_6,
  MR_Word STATE_VARIABLE_StringTable_0_12,
  MR_Word * STATE_VARIABLE_StringTable_13);

static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0(
  MR_Word Info_6,
  MR_Word Case_7,
  MR_Word * Bytes_8,
  MR_Word STATE_VARIABLE_StringTable_0_16,
  MR_Word * STATE_VARIABLE_StringTable_17);

static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0(
  MR_Word Info_5,
  MR_Word Instmap_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(
  MR_Word ConsId_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(
  MR_Word VarNumRep_13,
  MR_Word VarTable_14,
  MR_Word Var_15,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_NumVars_0_26,
  MR_Integer * STATE_VARIABLE_NumVars_27,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_28,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_29,
  MR_Word STATE_VARIABLE_StringTable_0_30,
  MR_Word * STATE_VARIABLE_StringTable_31,
  MR_Word STATE_VARIABLE_TypeTable_0_32,
  MR_Word * STATE_VARIABLE_TypeTable_33);

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_4_byte_8_p_0(
  MR_Word _ProgVar_9,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumVars_0_17,
  MR_Integer * STATE_VARIABLE_NumVars_18,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word STATE_VARIABLE_StringTable_0_21,
  MR_Word * STATE_VARIABLE_StringTable_22);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumVars_0_17,
  MR_Integer * STATE_VARIABLE_NumVars_18,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word STATE_VARIABLE_StringTable_0_21,
  MR_Word * STATE_VARIABLE_StringTable_22);

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_2_byte_8_p_0(
  MR_Word _ProgVar_9,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumVars_0_17,
  MR_Integer * STATE_VARIABLE_NumVars_18,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word STATE_VARIABLE_StringTable_0_21,
  MR_Word * STATE_VARIABLE_StringTable_22);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumVars_0_17,
  MR_Integer * STATE_VARIABLE_NumVars_18,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word STATE_VARIABLE_StringTable_0_21,
  MR_Word * STATE_VARIABLE_StringTable_22);

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_1_byte_8_p_0(
  MR_Word _ProgVar_9,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumVars_0_17,
  MR_Integer * STATE_VARIABLE_NumVars_18,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word STATE_VARIABLE_StringTable_0_21,
  MR_Word * STATE_VARIABLE_StringTable_22);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumVars_0_17,
  MR_Integer * STATE_VARIABLE_NumVars_18,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word STATE_VARIABLE_StringTable_0_21,
  MR_Word * STATE_VARIABLE_StringTable_22);

static MR_Integer MR_CALL 
ll_backend__prog_rep__max_var_num_3_f_0(
  MR_Word HeadVar__1_5,
  MR_Word HeadVar__2_2,
  MR_Integer VarNum2_8);

static MR_Integer MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(
  MR_Word HeadVar__2_2,
  MR_Integer VarNum2_8);

static void MR_CALL 
ll_backend__prog_rep__encode_oisu_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * BytesCord_6);

static MR_Box MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0(
  MR_Word Info_6,
  MR_Word HeadVar__2_2,
  MR_Word * Bytes_10,
  MR_Word STATE_VARIABLE_StringTable_0_71,
  MR_Word * STATE_VARIABLE_StringTable_72);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_method_num_func_1_f_0(
  MR_Integer VarNum_3);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_lineno_func_1_f_0(
  MR_Integer VarNum_3);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_length_func_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word List_3);

static MR_Box MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(
  MR_Word Info_4,
  MR_Word Vars_5);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_rep_func_2_f_0(
  MR_Word Info_4,
  MR_Integer Var_5);

static MR_Box MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0(
  MR_Word Info_4,
  MR_Word Vars_5);

static void MR_CALL 
ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(
  MR_String String_5,
  MR_Word * Bytes_6,
  MR_Word STATE_VARIABLE_StringTable_0_9,
  MR_Word * STATE_VARIABLE_StringTable_10);

static void MR_CALL 
ll_backend__prog_rep__conj_to_conj_rep_4_p_0(
  MR_Word Info_1,
  MR_Word Instmap0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Integer MR_CALL 
ll_backend__prog_rep__var_to_var_rep_2_f_0(
  MR_Word Info_4,
  MR_Word Var_5);

static MR_String MR_CALL 
ll_backend__prog_rep__cons_id_rep_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(
  MR_Word GoalInfo_7,
  MR_Word Instmap0_8,
  MR_Word Info_9,
  MR_String * FileName_10,
  MR_Integer * LineNo_11,
  MR_Word * BoundVars_12);

static void MR_CALL 
ll_backend__prog_rep__filter_input_args_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__prog_rep__lhs_finals_are_ground_3_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__prog_rep__detism_to_detism_rep_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_1[8][2];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_2[9][3];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_3[5][6];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_5[6][7];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_6[4][5];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_7[3][8];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_8[1][11];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_9[1][15];


struct ll_backend__prog_rep__vector_common_type_4_0_s {
  const MR_Word ll_backend__prog_rep__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct ll_backend__prog_rep__vector_common_type_4_0_s ll_backend__prog_rep_vector_common_4[8];

struct ll_backend__prog_rep__vector_common_type_10_0_s {
  const MR_String ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct ll_backend__prog_rep__vector_common_type_10_0_s ll_backend__prog_rep_vector_common_10[42];



static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_1[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_2[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_1[3])),
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[0])),
    ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[4])),
    ((MR_Box) (ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_8[0])),
    ((MR_Box) (ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_8[0])),
    ((MR_Box) (ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_8[0])),
    ((MR_Box) (ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[3])),
    ((MR_Box) (ll_backend__prog_rep__case_to_case_rep_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[5])),
    ((MR_Box) (ll_backend__prog_rep__encode_case_rep_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_3[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__prog_rep__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_5[6][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep____vpti_func_2__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_6[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_maybe_include_var_types_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_maybe_include_var_types_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_7[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_9[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_num_rep_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0))
  },
};


static /* final */ const struct ll_backend__prog_rep__vector_common_type_4_0_s ll_backend__prog_rep_vector_common_4[8] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 3 },
  /* row   3 */   { (MR_Integer) 2 },
  /* row   4 */   { (MR_Integer) 5 },
  /* row   5 */   { (MR_Integer) 4 },
  /* row   6 */   { (MR_Integer) 6 },
  /* row   7 */   { (MR_Integer) 7 },
};

static /* final */ const struct ll_backend__prog_rep__vector_common_type_10_0_s ll_backend__prog_rep_vector_common_10[42] = {
  /* row   0 */   { (MR_String) "" },
  /* row   1 */   { (MR_String) "ActivationPtr" },
  /* row   2 */   { (MR_String) "MethodNum" },
  /* row   3 */   { (MR_String) "MiddleCSD" },
  /* row   4 */   { (MR_String) "ProcStaticLayout" },
  /* row   5 */   { (MR_String) "SiteNum" },
  /* row   6 */   { (MR_String) "TopCSD" },
  /* row   7 */   { (MR_String) "V_" },
  /* row   8 */   { (MR_String) "HeadVar__" },
  /* row   9 */   { (MR_String) "TypeClassInfo_for_" },
  /* row  10 */   { (MR_String) "TypeInfo_" },
  /* row  11 */   { (MR_String) "TypeCtorInfo_" },
  /* row  12 */   { (MR_String) "STATE_VARIABLE_" },
  /* row  13 */   { (MR_String) "DCG_" },
  /* row  14 */   { (MR_String) "" },
  /* row  15 */   { (MR_String) "ActivationPtr" },
  /* row  16 */   { (MR_String) "MethodNum" },
  /* row  17 */   { (MR_String) "MiddleCSD" },
  /* row  18 */   { (MR_String) "ProcStaticLayout" },
  /* row  19 */   { (MR_String) "SiteNum" },
  /* row  20 */   { (MR_String) "TopCSD" },
  /* row  21 */   { (MR_String) "V_" },
  /* row  22 */   { (MR_String) "HeadVar__" },
  /* row  23 */   { (MR_String) "TypeClassInfo_for_" },
  /* row  24 */   { (MR_String) "TypeInfo_" },
  /* row  25 */   { (MR_String) "TypeCtorInfo_" },
  /* row  26 */   { (MR_String) "STATE_VARIABLE_" },
  /* row  27 */   { (MR_String) "DCG_" },
  /* row  28 */   { (MR_String) "" },
  /* row  29 */   { (MR_String) "ActivationPtr" },
  /* row  30 */   { (MR_String) "MethodNum" },
  /* row  31 */   { (MR_String) "MiddleCSD" },
  /* row  32 */   { (MR_String) "ProcStaticLayout" },
  /* row  33 */   { (MR_String) "SiteNum" },
  /* row  34 */   { (MR_String) "TopCSD" },
  /* row  35 */   { (MR_String) "V_" },
  /* row  36 */   { (MR_String) "HeadVar__" },
  /* row  37 */   { (MR_String) "TypeClassInfo_for_" },
  /* row  38 */   { (MR_String) "TypeInfo_" },
  /* row  39 */   { (MR_String) "TypeCtorInfo_" },
  /* row  40 */   { (MR_String) "STATE_VARIABLE_" },
  /* row  41 */   { (MR_String) "DCG_" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0),
    (MR_PseudoTypeInfo) (&ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  { (MR_PseudoTypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  { (MR_PseudoTypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0 = {
  (MR_String) "flatten_par_conjs",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1 = {
  (MR_String) "expect_no_par_conjs",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_ordinal_ordered_flatten_par_conjs_0[2] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0,
  &ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_name_ordered_flatten_par_conjs_0[2] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1,
  &ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0
};

static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_flatten_par_conjs_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_flatten_par_conjs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001)),
  (MR_String) "ll_backend.prog_rep",
  (MR_String) "flatten_par_conjs",
  { ll_backend__prog_rep__ll_backend__prog_rep__enum_name_ordered_flatten_par_conjs_0 },
  { ll_backend__prog_rep__ll_backend__prog_rep__enum_ordinal_ordered_flatten_par_conjs_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_flatten_par_conjs_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&ll_backend__prog_rep__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__prog_rep__ll_backend__prog_rep__field_types_prog_rep_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_num_rep_0),
  (MR_PseudoTypeInfo) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_flatten_par_conjs_0)
};

static const MR_ConstString ll_backend__prog_rep__ll_backend__prog_rep__field_names_prog_rep_info_0_0[6] = {
  (MR_String) "pri_module_info",
  (MR_String) "pri_filename",
  (MR_String) "pri_var_table",
  (MR_String) "pri_var_num_map",
  (MR_String) "pri_var_num_rep",
  (MR_String) "pri_flatten_par_conjs"
};

static const MR_DuArgLocn ll_backend__prog_rep__ll_backend__prog_rep__field_locns_prog_rep_info_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
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
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0 = {
  (MR_String) "prog_rep_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__prog_rep__ll_backend__prog_rep__field_types_prog_rep_info_0_0,
  ll_backend__prog_rep__ll_backend__prog_rep__field_names_prog_rep_info_0_0,
  ll_backend__prog_rep__ll_backend__prog_rep__field_locns_prog_rep_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0[1] = { &ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0 };

static const MR_DuPtagLayout ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_name_ordered_prog_rep_info_0[1] = { &ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0 };

static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_prog_rep_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001)),
  (MR_String) "ll_backend.prog_rep",
  (MR_String) "prog_rep_info",
  { ll_backend__prog_rep__ll_backend__prog_rep__du_name_ordered_prog_rep_info_0 },
  { ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_prog_rep_info_0,

};

const MR_TypeCtorInfo_Struct ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_var_num_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__prog_rep____Unify____var_num_map_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep____Compare____var_num_map_0_0_10001)),
  (MR_String) "ll_backend.prog_rep",
  (MR_String) "var_num_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__322__1_2_p_0(
  MR_Word IncludeVarTypes_12,
  MR_Word HeadVar__2_55)
{
  MR_bool succeeded = (IncludeVarTypes_12 == HeadVar__2_55);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__464__1_2_p_0(
  MR_Word ConjType_13,
  MR_Word HeadVar__2_147)
{
  MR_bool succeeded = (ConjType_13 == HeadVar__2_147);

  return succeeded;
}

static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__539__2_2_f_0(
  MR_Word HeadVar__1_281,
  MR_Word HeadVar__2_266)
{
  MR_Word HeadVar__3_267;

  HeadVar__3_267 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_281, HeadVar__2_266);
  return HeadVar__3_267;
}

static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__539__1_2_f_0(
  MR_Word HeadVar__1_155,
  MR_Word HeadVar__2_220)
{
  MR_Word HeadVar__3_221;

  HeadVar__3_221 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_155, HeadVar__2_220);
  return HeadVar__3_221;
}

static MR_Integer MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__608__1_3_f_0(
  MR_Word HeadVar__1_169,
  MR_Word HeadVar__2_170,
  MR_Word HeadVar__3_231)
{
  MR_Integer HeadVar__4_232;
  MR_Box conv0_HeadVar__4_232;

  conv0_HeadVar__4_232 = mercury__std_util__compose_3_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), HeadVar__1_169, HeadVar__2_170, ((MR_Box) (HeadVar__3_231)));
  HeadVar__4_232 = ((MR_Integer) (conv0_HeadVar__4_232));
  return HeadVar__4_232;
}

void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__var_table____Compare____var_table_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_29 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_30 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_29 < Var_30);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_29 > Var_30);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Integer Var_31 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_32 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_31 < Var_32);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_31 > Var_32);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&ll_backend__prog_rep_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
              succeeded = (ArgX6_13 == ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0(
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

MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_head_var_func_4_f_0(
  MR_Word Info_6,
  MR_Word InitialInstmap_7,
  MR_Word InstmapDelta_8,
  MR_Word Var_9)
{
  MR_bool succeeded;
  MR_Word Bytes_10;
  MR_Word VarBytes_11;
  MR_Word ModuleInfo_12;
  MR_Word InitialInst_13;
  MR_Word FinalInst_15;
  MR_Word VarTable_16;
  MR_Word Type_17;
  MR_Integer Var_18;
  MR_Word Var_19;
  MR_Integer Var_20;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Info_6, 3))));
  MR_Word Var_37;
  MR_Word VarNumRep_45;
  MR_Word InstRep_52;
  MR_Word InstRep_53;
  MR_Box conv0_Var_37;
  MR_Word FinalInstPrime_14;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), Var_36, ((MR_Box) (Var_9)), &conv0_Var_37);
  Var_37 = ((MR_Word) (conv0_Var_37));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, Var_37, 0))));
  ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, Info_6, 0))));
  VarNumRep_45 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, 4))) >> 1)) & (MR_Integer) 3);
  switch (VarNumRep_45) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        VarBytes_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VarBytes_11, 0) = ((MR_Box) (Var_18));
        MR_hl_field(1, VarBytes_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 1:
      mdbcomp__rtti_access__encode_short_det_2_p_0(Var_18, &VarBytes_11);
      break;
    case (MR_Integer) 2:
      mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_18, &VarBytes_11);
      break;
  }
  hlds__instmap__instmap_lookup_var_3_p_0(InitialInstmap_7, Var_9, &InitialInst_13);
  succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstmapDelta_8, Var_9, &FinalInstPrime_14);
  if (succeeded)
    FinalInst_15 = FinalInstPrime_14;
  else
    FinalInst_15 = InitialInst_13;
  VarTable_16 = ((MR_Word) ((MR_hl_field(0, Info_6, 2))));
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_16, Var_9, &Type_17);
  succeeded = (InitialInst_13 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    InstRep_52 = (MR_Integer) 0;
  else
  {
    succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_12, Type_17, InitialInst_13);
    if (succeeded)
      InstRep_52 = (MR_Integer) 1;
    else
      InstRep_52 = (MR_Integer) 2;
  }
  mdbcomp__program_representation__inst_representation_2_p_0(InstRep_52, &Var_20);
  succeeded = (FinalInst_15 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    InstRep_53 = (MR_Integer) 0;
  else
  {
    succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_12, Type_17, FinalInst_15);
    if (succeeded)
      InstRep_53 = (MR_Integer) 1;
    else
      InstRep_53 = (MR_Integer) 2;
  }
  mdbcomp__program_representation__inst_representation_2_p_0(InstRep_53, &Var_22);
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_21));
  }
  Bytes_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_11, Var_19);
  return Bytes_10;
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(
  MR_Word Info_4,
  MR_Word MaybeVar_5)
{
  MR_Word Bytes_6;

  if ((MaybeVar_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Bytes_6 = (MR_Word) (MR_mkword(1, &ll_backend__prog_rep_scalar_common_1[7]));
  else
  {
    MR_Integer Var_7 = ((MR_Integer) ((MR_hl_field(1, MaybeVar_5, 0))));
    MR_Word Var_9;
    MR_Word VarNumRep_12 = ((((MR_Unsigned) ((MR_hl_field(0, Info_4, 4))) >> 1)) & (MR_Integer) 3);

    switch (VarNumRep_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_7));
          MR_hl_field(1, Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 1:
        mdbcomp__rtti_access__encode_short_det_2_p_0(Var_7, &Var_9);
        break;
      case (MR_Integer) 2:
        mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_7, &Var_9);
        break;
    }
    {
      Bytes_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Bytes_6, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(1, Bytes_6, 1) = ((MR_Box) (Var_9));
    }
  }
  return Bytes_6;
}

static void MR_CALL 
ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(
  MR_Word ConsIdArity_5,
  MR_Word * ConsIdBytes_6,
  MR_Word STATE_VARIABLE_StringTable_0_12,
  MR_Word * STATE_VARIABLE_StringTable_13)
{
  MR_String ConsId_8 = ((MR_String) ((MR_hl_field(0, ConsIdArity_5, 0))));
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, ConsIdArity_5, 1))));
  MR_Word FunctorBytes_10;
  MR_Word ArityBytes_11;
  MR_Integer Index_15;

  ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ConsId_8, &Index_15, STATE_VARIABLE_StringTable_0_12, STATE_VARIABLE_StringTable_13);
  mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_15, &FunctorBytes_10);
  mdbcomp__rtti_access__encode_short_det_2_p_0(Arity_9, &ArityBytes_11);
  *ConsIdBytes_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FunctorBytes_10, ArityBytes_11);
}

static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ConsIdBytes_6;
  MR_Word conv0_STATE_VARIABLE_StringTable_13;

  ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_ConsIdBytes_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_StringTable_13);
  *wrapper_arg_2 = ((MR_Box) (conv1_ConsIdBytes_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StringTable_13));
}

static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0(
  MR_Word Info_6,
  MR_Word Case_7,
  MR_Word * Bytes_8,
  MR_Word STATE_VARIABLE_StringTable_0_16,
  MR_Word * STATE_VARIABLE_StringTable_17)
{
  MR_Word MainConsId_10 = ((MR_Word) ((MR_hl_field(0, Case_7, 0))));
  MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(0, Case_7, 1))));
  MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(0, Case_7, 2))));
  MR_Word GoalBytes_13;
  MR_Word MainConsIdBytes_14;
  MR_Word OtherConsIdsByteLists_15;
  MR_Word STATE_VARIABLE_StringTable_1_18;
  MR_Word STATE_VARIABLE_StringTable_2_19;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_String ConsId_34;
  MR_Integer Arity_35;
  MR_Word FunctorBytes_36;
  MR_Word ArityBytes_37;
  MR_Integer Index_39;
  MR_Integer Var_40;
  MR_Box conv2_STATE_VARIABLE_StringTable_17;

  ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_6, Goal_12, &GoalBytes_13, STATE_VARIABLE_StringTable_0_16, &STATE_VARIABLE_StringTable_1_18);
  ConsId_34 = ((MR_String) ((MR_hl_field(0, MainConsId_10, 0))));
  Arity_35 = ((MR_Integer) ((MR_hl_field(0, MainConsId_10, 1))));
  ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ConsId_34, &Index_39, STATE_VARIABLE_StringTable_1_18, &STATE_VARIABLE_StringTable_2_19);
  mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_39, &FunctorBytes_36);
  mdbcomp__rtti_access__encode_short_det_2_p_0(Arity_35, &ArityBytes_37);
  MainConsIdBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FunctorBytes_36, ArityBytes_37);
  mercury__list__map_foldl_5_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[8]), OtherConsIds_11, &OtherConsIdsByteLists_15, ((MR_Box) (STATE_VARIABLE_StringTable_2_19)), &conv2_STATE_VARIABLE_StringTable_17);
  *STATE_VARIABLE_StringTable_17 = ((MR_Word) (conv2_STATE_VARIABLE_StringTable_17));
  Var_40 = mercury__list__length_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0), OtherConsIds_11);
  mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_40, &Var_23);
  Var_25 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), OtherConsIdsByteLists_15);
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_25, GoalBytes_13);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_23, Var_24);
  *Bytes_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MainConsIdBytes_14, Var_22);
}

static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0(
  MR_Word Info_5,
  MR_Word Instmap_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_Word FirstConsId_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word OtherConsIds_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
  MR_Word FirstConsIdRep_10;
  MR_Word OtherConsIdsRep_11;
  MR_Word GoalRep_12;

  ll_backend__prog_rep__goal_to_goal_rep_4_p_0(Info_5, Instmap_6, Goal_9, &GoalRep_12);
  ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(FirstConsId_7, &FirstConsIdRep_10);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[7]), OtherConsIds_8, &OtherConsIdsRep_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FirstConsIdRep_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIdsRep_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (GoalRep_12));
  }
}

static void MR_CALL 
ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(
  MR_Word ConsId_3,
  MR_Word * HeadVar__2_2)
{
  MR_String ConsIdName_4;
  MR_Integer Arity_5;
  MR_Word MaybeArity_6;

  switch (MR_tag((MR_Word) ConsId_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ConsIdName_4 = (MR_String) "\044typeclass_info_cell_constructor";
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_7;
        MR_Word Var_10 = (MR_Word) (MR_body((MR_Word) (ConsId_3), (MR_Integer) 1));

        SymName_7 = ((MR_Word) ((MR_hl_field(0, Var_10, 0))));
        if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
          ConsIdName_4 = ((MR_String) ((MR_hl_field(1, SymName_7, 1))));
        else
          ConsIdName_4 = ((MR_String) ((MR_hl_field(0, SymName_7, 0))));
      }
      break;
    case (MR_Integer) 2:
      ConsIdName_4 = (MR_String) "\044closure_cons";
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ConsIdName_4 = (MR_String) "\044type_info_cell_constructor";
          break;
        case (MR_Integer) 1:
          ConsIdName_4 = (MR_String) "\044tabling_info_const";
          break;
        case (MR_Integer) 2:
          ConsIdName_4 = (MR_String) "\044table_io_entry_desc";
          break;
        case (MR_Integer) 3:
          ConsIdName_4 = (MR_String) "\044deep_profiling_proc_layout";
          break;
        case (MR_Integer) 4:
          ConsIdName_4 = (MR_String) "{}";
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_12 = ((MR_Word) ((MR_hl_field(3, ConsId_3, 1))));
            MR_String _Suffix_14;

            parse_tree__parse_tree_out_cons_id__int_const_to_string_and_suffix_3_p_0(IntConst_12, &ConsIdName_4, &_Suffix_14);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_15 = MR_unbox_float((MR_hl_field(3, ConsId_3, 1)));

            ConsIdName_4 = mercury__string__float_to_string_1_f_0(Float_15);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char Char_16 = ((MR_Char) (MR_Word) (MR_hl_field(3, ConsId_3, 1)));

            ConsIdName_4 = mercury__string__char_to_string_1_f_0(Char_16);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String String_17 = ((MR_String) ((MR_hl_field(3, ConsId_3, 1))));
            MR_String Var_19;

            Var_19 = mercury__string__f_43_43_2_f_0(String_17, (MR_String) "\"");
            ConsIdName_4 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_19);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_21 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_3, 1))) & (MR_Integer) 7);

            ConsIdName_4 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_21);
          }
          break;
        case (MR_Integer) 10:
          ConsIdName_4 = (MR_String) "\044type_ctor_info_const";
          break;
        case (MR_Integer) 11:
          ConsIdName_4 = (MR_String) "\044base_typeclass_info_const";
          break;
        case (MR_Integer) 12:
          ConsIdName_4 = (MR_String) "\044type_info_const";
          break;
        case (MR_Integer) 13:
          ConsIdName_4 = (MR_String) "\044typeclass_info_const";
          break;
        case (MR_Integer) 14:
          ConsIdName_4 = (MR_String) "\044ground_term_const";
          break;
      }
      break;
  }
  MaybeArity_6 = parse_tree__prog_util__cons_id_maybe_arity_1_f_0(ConsId_3);
  if ((MaybeArity_6 == (MR_Word) ((MR_Unsigned) 0U)))
    Arity_5 = (MR_Integer) 0;
  else
    Arity_5 = ((MR_Integer) ((MR_hl_field(1, MaybeArity_6, 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsIdName_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Arity_5));
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(
  MR_Word VarNumRep_13,
  MR_Word VarTable_14,
  MR_Word Var_15,
  MR_Word HeadVar__4_4,
  MR_Integer STATE_VARIABLE_NumVars_0_26,
  MR_Integer * STATE_VARIABLE_NumVars_27,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_28,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_29,
  MR_Word STATE_VARIABLE_StringTable_0_30,
  MR_Word * STATE_VARIABLE_StringTable_31,
  MR_Word STATE_VARIABLE_TypeTable_0_32,
  MR_Word * STATE_VARIABLE_TypeTable_33)
{
  MR_Integer VarNum_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__4_4, 0))));
  MR_String VarName_17 = ((MR_String) ((MR_hl_field(0, HeadVar__4_4, 1))));
  MR_Word Type_22;
  MR_Word VarBytes_23;
  MR_Word VarNameBytes_24;
  MR_Word TypeBytes_25;
  MR_Word STATE_VARIABLE_StringTable_1_37;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Integer Index_44;
  MR_Integer Index_45;

  *STATE_VARIABLE_NumVars_27 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumVars_0_26 + (MR_Unsigned) 1);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_14, Var_15, &Type_22);
  switch (VarNumRep_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        VarBytes_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VarBytes_23, 0) = ((MR_Box) (VarNum_16));
        MR_hl_field(1, VarBytes_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 1:
      mdbcomp__rtti_access__encode_short_det_2_p_0(VarNum_16, &VarBytes_23);
      break;
    case (MR_Integer) 2:
      mdbcomp__rtti_access__encode_int32_det_2_p_0(VarNum_16, &VarBytes_23);
      break;
  }
  ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(VarName_17, &Index_44, STATE_VARIABLE_StringTable_0_30, &STATE_VARIABLE_StringTable_1_37);
  mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_44, &VarNameBytes_24);
  ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(Type_22, &Index_45, STATE_VARIABLE_StringTable_1_37, STATE_VARIABLE_StringTable_31, STATE_VARIABLE_TypeTable_0_32, STATE_VARIABLE_TypeTable_33);
  mdbcomp__rtti_access__encode_num_det_2_p_0(Index_45, &TypeBytes_25);
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeBytes_25, STATE_VARIABLE_VarNameTableBytes_0_28);
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNameBytes_24, Var_42);
  *STATE_VARIABLE_VarNameTableBytes_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_23, Var_41);
}

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_4_byte_8_p_0(
  MR_Word _ProgVar_9,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumVars_0_17,
  MR_Integer * STATE_VARIABLE_NumVars_18,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word STATE_VARIABLE_StringTable_0_21,
  MR_Word * STATE_VARIABLE_StringTable_22)
{
  ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(HeadVar__2_2, STATE_VARIABLE_NumVars_0_17, STATE_VARIABLE_NumVars_18, STATE_VARIABLE_VarNameTableBytes_0_19, STATE_VARIABLE_VarNameTableBytes_20, STATE_VARIABLE_StringTable_0_21, STATE_VARIABLE_StringTable_22);
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
  void * env_ptr_arg)
{
  struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4, 1);
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * env_ptr_arg)
{
  struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_29);
  if ((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
    ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(env_ptr);
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * env_ptr_arg)
{
  struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4) == 0)
    {
      {
        MR_Integer slot_5 = (MR_Integer) 0;

        do
        {
          (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_29 = ((&ll_backend__prog_rep_vector_common_10[35 + slot_5]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
          ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(env_ptr);
          slot_5 = (MR_Integer) ((MR_Unsigned) slot_5 + (MR_Unsigned) 1);
        }
        while ((slot_5 < (MR_Integer) 7));
      }
      (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumVars_0_17,
  MR_Integer * STATE_VARIABLE_NumVars_18,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word STATE_VARIABLE_StringTable_0_21,
  MR_Word * STATE_VARIABLE_StringTable_22)
{
  struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s env;

  {
    MR_Integer VarNum_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));

    (env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    {
      MR_Integer lo_0 = (MR_Integer) 0;
      MR_Integer hi_1 = (MR_Integer) 6;
      MR_Integer mid_2;
      MR_Integer result_3;

      // binary string simple lookup switch
      ;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, ((&ll_backend__prog_rep_vector_common_10[28 + mid_2]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          (env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
        else
          lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
      }
      while ((lo_0 <= hi_1));
      (env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
    label_0:;
    }
    if (!((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(&env);
    if ((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
    {
      *STATE_VARIABLE_StringTable_22 = STATE_VARIABLE_StringTable_0_21;
      *STATE_VARIABLE_VarNameTableBytes_20 = STATE_VARIABLE_VarNameTableBytes_0_19;
      *STATE_VARIABLE_NumVars_18 = STATE_VARIABLE_NumVars_0_17;
    }
    else
    {
      MR_Word VarBytes_15;
      MR_Word VarNameBytes_16;
      MR_Word Var_27;
      MR_Integer Index_30;

      *STATE_VARIABLE_NumVars_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumVars_0_17 + (MR_Unsigned) 1);
      mdbcomp__rtti_access__encode_int32_det_2_p_0(VarNum_10, &VarBytes_15);
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &Index_30, STATE_VARIABLE_StringTable_0_21, STATE_VARIABLE_StringTable_22);
      mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_30, &VarNameBytes_16);
      Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNameBytes_16, STATE_VARIABLE_VarNameTableBytes_0_19);
      *STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_15, Var_27);
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_2_byte_8_p_0(
  MR_Word _ProgVar_9,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumVars_0_17,
  MR_Integer * STATE_VARIABLE_NumVars_18,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word STATE_VARIABLE_StringTable_0_21,
  MR_Word * STATE_VARIABLE_StringTable_22)
{
  ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(HeadVar__2_2, STATE_VARIABLE_NumVars_0_17, STATE_VARIABLE_NumVars_18, STATE_VARIABLE_VarNameTableBytes_0_19, STATE_VARIABLE_VarNameTableBytes_20, STATE_VARIABLE_StringTable_0_21, STATE_VARIABLE_StringTable_22);
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
  void * env_ptr_arg)
{
  struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4, 1);
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * env_ptr_arg)
{
  struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_29);
  if ((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
    ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(env_ptr);
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * env_ptr_arg)
{
  struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4) == 0)
    {
      {
        MR_Integer slot_5 = (MR_Integer) 0;

        do
        {
          (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_29 = ((&ll_backend__prog_rep_vector_common_10[21 + slot_5]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
          ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(env_ptr);
          slot_5 = (MR_Integer) ((MR_Unsigned) slot_5 + (MR_Unsigned) 1);
        }
        while ((slot_5 < (MR_Integer) 7));
      }
      (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumVars_0_17,
  MR_Integer * STATE_VARIABLE_NumVars_18,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word STATE_VARIABLE_StringTable_0_21,
  MR_Word * STATE_VARIABLE_StringTable_22)
{
  struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s env;

  {
    MR_Integer VarNum_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));

    (env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    {
      MR_Integer lo_0 = (MR_Integer) 0;
      MR_Integer hi_1 = (MR_Integer) 6;
      MR_Integer mid_2;
      MR_Integer result_3;

      // binary string simple lookup switch
      ;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, ((&ll_backend__prog_rep_vector_common_10[14 + mid_2]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          (env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
        else
          lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
      }
      while ((lo_0 <= hi_1));
      (env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
    label_0:;
    }
    if (!((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(&env);
    if ((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
    {
      *STATE_VARIABLE_StringTable_22 = STATE_VARIABLE_StringTable_0_21;
      *STATE_VARIABLE_VarNameTableBytes_20 = STATE_VARIABLE_VarNameTableBytes_0_19;
      *STATE_VARIABLE_NumVars_18 = STATE_VARIABLE_NumVars_0_17;
    }
    else
    {
      MR_Word VarBytes_15;
      MR_Word VarNameBytes_16;
      MR_Word Var_27;
      MR_Integer Index_30;

      *STATE_VARIABLE_NumVars_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumVars_0_17 + (MR_Unsigned) 1);
      mdbcomp__rtti_access__encode_short_det_2_p_0(VarNum_10, &VarBytes_15);
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &Index_30, STATE_VARIABLE_StringTable_0_21, STATE_VARIABLE_StringTable_22);
      mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_30, &VarNameBytes_16);
      Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNameBytes_16, STATE_VARIABLE_VarNameTableBytes_0_19);
      *STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_15, Var_27);
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_1_byte_8_p_0(
  MR_Word _ProgVar_9,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumVars_0_17,
  MR_Integer * STATE_VARIABLE_NumVars_18,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word STATE_VARIABLE_StringTable_0_21,
  MR_Word * STATE_VARIABLE_StringTable_22)
{
  ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(HeadVar__2_2, STATE_VARIABLE_NumVars_0_17, STATE_VARIABLE_NumVars_18, STATE_VARIABLE_VarNameTableBytes_0_19, STATE_VARIABLE_VarNameTableBytes_20, STATE_VARIABLE_StringTable_0_21, STATE_VARIABLE_StringTable_22);
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
  void * env_ptr_arg)
{
  struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4, 1);
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * env_ptr_arg)
{
  struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30);
  if ((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
    ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(env_ptr);
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * env_ptr_arg)
{
  struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4) == 0)
    {
      {
        MR_Integer slot_5 = (MR_Integer) 0;

        do
        {
          (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30 = ((&ll_backend__prog_rep_vector_common_10[7 + slot_5]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
          ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(env_ptr);
          slot_5 = (MR_Integer) ((MR_Unsigned) slot_5 + (MR_Unsigned) 1);
        }
        while ((slot_5 < (MR_Integer) 7));
      }
      (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_NumVars_0_17,
  MR_Integer * STATE_VARIABLE_NumVars_18,
  MR_Word STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word STATE_VARIABLE_StringTable_0_21,
  MR_Word * STATE_VARIABLE_StringTable_22)
{
  struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s env;

  {
    MR_Integer VarNum_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));

    (env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    {
      MR_Integer lo_0 = (MR_Integer) 0;
      MR_Integer hi_1 = (MR_Integer) 6;
      MR_Integer mid_2;
      MR_Integer result_3;

      // binary string simple lookup switch
      ;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, ((&ll_backend__prog_rep_vector_common_10[0 + mid_2]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          (env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
        else
          lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
      }
      while ((lo_0 <= hi_1));
      (env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
    label_0:;
    }
    if (!((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(&env);
    if ((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
    {
      *STATE_VARIABLE_StringTable_22 = STATE_VARIABLE_StringTable_0_21;
      *STATE_VARIABLE_VarNameTableBytes_20 = STATE_VARIABLE_VarNameTableBytes_0_19;
      *STATE_VARIABLE_NumVars_18 = STATE_VARIABLE_NumVars_0_17;
    }
    else
    {
      MR_Word VarBytes_15;
      MR_Word VarNameBytes_16;
      MR_Word Var_28;
      MR_Integer Index_31;

      *STATE_VARIABLE_NumVars_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumVars_0_17 + (MR_Unsigned) 1);
      {
        VarBytes_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VarBytes_15, 0) = ((MR_Box) (VarNum_10));
        MR_hl_field(1, VarBytes_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &Index_31, STATE_VARIABLE_StringTable_0_21, STATE_VARIABLE_StringTable_22);
      mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_31, &VarNameBytes_16);
      Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNameBytes_16, STATE_VARIABLE_VarNameTableBytes_0_19);
      *STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_15, Var_28);
    }
  }
}

static MR_Integer MR_CALL 
ll_backend__prog_rep__max_var_num_3_f_0(
  MR_Word HeadVar__1_5,
  MR_Word HeadVar__2_2,
  MR_Integer VarNum2_8)
{
  MR_Integer Max_9;

  Max_9 = ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(HeadVar__2_2, VarNum2_8);
  return Max_9;
}

static MR_Integer MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(
  MR_Word HeadVar__2_2,
  MR_Integer VarNum2_8)
{
  MR_Integer Max_9;
  MR_Integer VarNum1_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));

  Max_9 = mercury__int__max_2_f_0(VarNum1_6, VarNum2_8);
  return Max_9;
}

static void MR_CALL 
ll_backend__prog_rep__encode_oisu_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * BytesCord_6)
{
  MR_bool succeeded;
  MR_Word PredInfo_7;
  MR_Word ProcTable_8;
  MR_Word Procs_9;
  MR_Integer ProcId_10;
  MR_Word Var_13;
  MR_Word Var_14;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_7, &ProcTable_8);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable_8, &Procs_9);
  succeeded = (Procs_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(1, Procs_9, 0))));
    Var_14 = ((MR_Word) ((MR_hl_field(1, Procs_9, 1))));
    succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ProcId_10 = ((MR_Integer) ((MR_hl_field(0, Var_13, 0))));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word ProcLabel_12;

    ProcLabel_12 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_4, PredId_5, ProcId_10);
    if (((MR_tag((MR_Word) ProcLabel_12)) == (MR_Integer) 0))
    {
      MR_Word DefModuleName_19 = ((MR_Word) ((MR_hl_field(0, ProcLabel_12, 0))));
      MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(0, ProcLabel_12, 1))) & (MR_Integer) 1);
      MR_Word DeclModuleName_21 = ((MR_Word) ((MR_hl_field(0, ProcLabel_12, 2))));
      MR_String PredName_22 = ((MR_String) ((MR_hl_field(0, ProcLabel_12, 3))));
      MR_Integer Arity_23 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_12, 4))));
      MR_Integer ModeNum_24 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_12, 5))));
      MR_Integer KindByte_25;
      MR_Word DeclModuleNameBytes_26;
      MR_Word DefModuleNameBytes_27;
      MR_Word PredNameBytes_28;
      MR_Word ArityBytes_29;
      MR_Word ModeNumBytes_30;
      MR_String Var_39;
      MR_String Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;

      switch (PredOrFunc_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          KindByte_25 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          KindByte_25 = (MR_Integer) 0;
          break;
      }
      Var_39 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DeclModuleName_21);
      mdbcomp__rtti_access__encode_len_string_2_p_0(Var_39, &DeclModuleNameBytes_26);
      Var_40 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DefModuleName_19);
      mdbcomp__rtti_access__encode_len_string_2_p_0(Var_40, &DefModuleNameBytes_27);
      mdbcomp__rtti_access__encode_len_string_2_p_0(PredName_22, &PredNameBytes_28);
      mdbcomp__rtti_access__encode_num_det_2_p_0(Arity_23, &ArityBytes_29);
      mdbcomp__rtti_access__encode_num_det_2_p_0(ModeNum_24, &ModeNumBytes_30);
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (KindByte_25));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (DeclModuleNameBytes_26));
      }
      Var_41 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_42);
      Var_44 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), DefModuleNameBytes_27);
      Var_46 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PredNameBytes_28);
      Var_48 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArityBytes_29);
      Var_49 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ModeNumBytes_30);
      Var_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_48, Var_49);
      Var_45 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_46, Var_47);
      Var_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_44, Var_45);
      *BytesCord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_41, Var_43);
    }
    else
    {
      MR_Word SpecialPredId_31 = ((MR_Unsigned) ((MR_hl_field(1, ProcLabel_12, 1))) & (MR_Integer) 3);
      MR_Word TypeModuleName_32 = ((MR_Word) ((MR_hl_field(1, ProcLabel_12, 2))));
      MR_String TypeName_33 = ((MR_String) ((MR_hl_field(1, ProcLabel_12, 3))));
      MR_Integer TypeArity_34 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_12, 4))));
      MR_Word TypeCtor_35;
      MR_Word TypeNameBytes_36;
      MR_Word TypeModuleNameBytes_37;
      MR_Word TypeArityBytes_38;
      MR_Word Var_50;
      MR_String Var_51;
      MR_String Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word DefModuleName_64 = ((MR_Word) ((MR_hl_field(1, ProcLabel_12, 0))));
      MR_String PredName_65;
      MR_Integer ModeNum_66 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_12, 5))));
      MR_Word DefModuleNameBytes_68;
      MR_Word PredNameBytes_69;
      MR_Word ModeNumBytes_70;

      {
        Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_50, 0) = ((MR_Box) (TypeModuleName_32));
        MR_hl_field(1, Var_50, 1) = ((MR_Box) (TypeName_33));
      }
      {
        TypeCtor_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeCtor_35, 0) = ((MR_Box) (Var_50));
        MR_hl_field(0, TypeCtor_35, 1) = ((MR_Box) (TypeArity_34));
      }
      PredName_65 = hlds__pred_name__uci_pred_name_2_f_0(SpecialPredId_31, TypeCtor_35);
      mdbcomp__rtti_access__encode_len_string_2_p_0(TypeName_33, &TypeNameBytes_36);
      Var_51 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeModuleName_32);
      mdbcomp__rtti_access__encode_len_string_2_p_0(Var_51, &TypeModuleNameBytes_37);
      Var_52 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DefModuleName_64);
      mdbcomp__rtti_access__encode_len_string_2_p_0(Var_52, &DefModuleNameBytes_68);
      mdbcomp__rtti_access__encode_len_string_2_p_0(PredName_65, &PredNameBytes_69);
      mdbcomp__rtti_access__encode_num_det_2_p_0(TypeArity_34, &TypeArityBytes_38);
      mdbcomp__rtti_access__encode_num_det_2_p_0(ModeNum_66, &ModeNumBytes_70);
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (TypeNameBytes_36));
      }
      Var_53 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_54);
      Var_56 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeModuleNameBytes_37);
      Var_58 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), DefModuleNameBytes_68);
      Var_60 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PredNameBytes_69);
      Var_62 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeArityBytes_38);
      Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ModeNumBytes_70);
      Var_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_62, Var_63);
      Var_59 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_60, Var_61);
      Var_57 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_58, Var_59);
      Var_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_56, Var_57);
      *BytesCord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_53, Var_55);
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.encode_oisu_proc\'/3", (MR_String) "OISU pred should have exactly one proc");
      return;
    }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv28_Bytes_10;

  conv28_Bytes_10 = ll_backend__prog_rep__encode_head_var_func_4_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv28_Bytes_10));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Integer conv23_STATE_VARIABLE_NumVars_27;
  MR_Word conv22_STATE_VARIABLE_VarNameTableBytes_29;
  MR_Word conv21_STATE_VARIABLE_StringTable_31;
  MR_Word conv20_STATE_VARIABLE_TypeTable_33;

  ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv23_STATE_VARIABLE_NumVars_27, ((MR_Word) (wrapper_arg_5)), &conv22_STATE_VARIABLE_VarNameTableBytes_29, ((MR_Word) (wrapper_arg_7)), &conv21_STATE_VARIABLE_StringTable_31, ((MR_Word) (wrapper_arg_9)), &conv20_STATE_VARIABLE_TypeTable_33);
  *wrapper_arg_4 = ((MR_Box) (conv23_STATE_VARIABLE_NumVars_27));
  *wrapper_arg_6 = ((MR_Box) (conv22_STATE_VARIABLE_VarNameTableBytes_29));
  *wrapper_arg_8 = ((MR_Box) (conv21_STATE_VARIABLE_StringTable_31));
  *wrapper_arg_10 = ((MR_Box) (conv20_STATE_VARIABLE_TypeTable_33));
}

static void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Integer conv16_STATE_VARIABLE_NumVars_18;
  MR_Word conv15_STATE_VARIABLE_VarNameTableBytes_20;
  MR_Word conv14_STATE_VARIABLE_StringTable_22;

  ll_backend__prog_rep__encode_var_name_table_entry_4_byte_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv16_STATE_VARIABLE_NumVars_18, ((MR_Word) (wrapper_arg_5)), &conv15_STATE_VARIABLE_VarNameTableBytes_20, ((MR_Word) (wrapper_arg_7)), &conv14_STATE_VARIABLE_StringTable_22);
  *wrapper_arg_4 = ((MR_Box) (conv16_STATE_VARIABLE_NumVars_18));
  *wrapper_arg_6 = ((MR_Box) (conv15_STATE_VARIABLE_VarNameTableBytes_20));
  *wrapper_arg_8 = ((MR_Box) (conv14_STATE_VARIABLE_StringTable_22));
}

static void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Integer conv10_STATE_VARIABLE_NumVars_18;
  MR_Word conv9_STATE_VARIABLE_VarNameTableBytes_20;
  MR_Word conv8_STATE_VARIABLE_StringTable_22;

  ll_backend__prog_rep__encode_var_name_table_entry_2_byte_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv10_STATE_VARIABLE_NumVars_18, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_VarNameTableBytes_20, ((MR_Word) (wrapper_arg_7)), &conv8_STATE_VARIABLE_StringTable_22);
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_NumVars_18));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_VarNameTableBytes_20));
  *wrapper_arg_8 = ((MR_Box) (conv8_STATE_VARIABLE_StringTable_22));
}

static void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Integer conv4_STATE_VARIABLE_NumVars_18;
  MR_Word conv3_STATE_VARIABLE_VarNameTableBytes_20;
  MR_Word conv2_STATE_VARIABLE_StringTable_22;

  ll_backend__prog_rep__encode_var_name_table_entry_1_byte_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv4_STATE_VARIABLE_NumVars_18, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_VarNameTableBytes_20, ((MR_Word) (wrapper_arg_7)), &conv2_STATE_VARIABLE_StringTable_22);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_NumVars_18));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_VarNameTableBytes_20));
  *wrapper_arg_8 = ((MR_Box) (conv2_STATE_VARIABLE_StringTable_22));
}

static MR_bool MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__322__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Integer conv0_Max_9;

  conv0_Max_9 = ll_backend__prog_rep__max_var_num_3_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_Max_9));
  return wrapper_arg_4;
}

void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0(
  MR_Word HeadVars_15,
  MR_Word Goal_16,
  MR_Word InstMap0_17,
  MR_Word VarTable_18,
  MR_Word VarNumMap_19,
  MR_Word ModuleInfo_20,
  MR_Word IncludeVarNameTable_21,
  MR_Word IncludeVarTypes_22,
  MR_Word ProcDetism_23,
  MR_Word STATE_VARIABLE_StringTable_0_40,
  MR_Word * STATE_VARIABLE_StringTable_41,
  MR_Word STATE_VARIABLE_TypeTable_0_42,
  MR_Word * STATE_VARIABLE_TypeTable_43,
  MR_Word * ProcRepBytes_26)
{
  MR_bool succeeded;
  MR_Word GoalInfo_28 = ((MR_Word) ((MR_hl_field(0, Goal_16, 1))));
  MR_Word Context_29;
  MR_String FileName_30;
  MR_Word VarNumRep_31;
  MR_Word VarNameTableBytes_32;
  MR_Word Info_33;
  MR_Word InstmapDelta_34;
  MR_Word FileNameBytes_35;
  MR_Word GoalBytes_36;
  MR_Integer DetismByte_37;
  MR_Word ProcRepBytes0_38;
  MR_Word LimitBytes_39;
  MR_Word STATE_VARIABLE_StringTable_1_44;
  MR_Word STATE_VARIABLE_StringTable_2_47;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Integer Var_55;
  MR_Integer Var_56;
  MR_Integer MaxVarNum_59;
  MR_Integer FlagByte_60;
  MR_Integer Index_100;
  MR_Word GoalRep_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Integer Var_109;
  MR_Box conv1_MaxVarNum_59;

  Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_28);
  FileName_30 = mercury__term_context__context_file_1_f_0(Context_29);
  conv1_MaxVarNum_59 = mercury__map__foldl_3_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[3]), VarNumMap_19, ((MR_Box) ((MR_Integer) 0)));
  MaxVarNum_59 = ((MR_Integer) (conv1_MaxVarNum_59));
  succeeded = (MaxVarNum_59 <= (MR_Integer) 127);
  if (succeeded)
    VarNumRep_31 = (MR_Integer) 0;
  else
  {
    succeeded = (MaxVarNum_59 <= (MR_Integer) 32767);
    if (succeeded)
      VarNumRep_31 = (MR_Integer) 1;
    else
      VarNumRep_31 = (MR_Integer) 2;
  }
  mdbcomp__program_representation__var_flag_byte_4_p_0(VarNumRep_31, IncludeVarNameTable_21, IncludeVarTypes_22, &FlagByte_60);
  switch (IncludeVarNameTable_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_83;

        {
          Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_83, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[2]));
          MR_hl_field(0, Var_83, 1) = ((MR_Box) (ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_2));
          MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_83, 3) = ((MR_Box) (IncludeVarTypes_22));
          MR_hl_field(0, Var_83, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_83, (MR_String) "predicate \140ll_backend.prog_rep.represent_var_table_as_bytecode\'/10", (MR_String) "IncludeVarTypes but not IncludeVarNameTable");
        {
          VarNameTableBytes_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, VarNameTableBytes_32, 0) = ((MR_Box) (FlagByte_60));
          MR_hl_field(1, VarNameTableBytes_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        STATE_VARIABLE_StringTable_1_44 = STATE_VARIABLE_StringTable_0_40;
        *STATE_VARIABLE_TypeTable_43 = STATE_VARIABLE_TypeTable_0_42;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer NumVars_61;
        MR_Word VarNameTableEntriesBytes_62;
        MR_Word NumVarsBytes_63;
        MR_Word Var_80;
        MR_Word Var_82;

        switch (IncludeVarTypes_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (VarNumRep_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Box conv7_NumVars_61;
                    MR_Box conv6_VarNameTableEntriesBytes_62;
                    MR_Box conv5_STATE_VARIABLE_StringTable_1_44;

                    mercury__map__foldl3_8_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[4]), VarNumMap_19, ((MR_Box) ((MR_Integer) 0)), &conv7_NumVars_61, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_VarNameTableEntriesBytes_62, ((MR_Box) (STATE_VARIABLE_StringTable_0_40)), &conv5_STATE_VARIABLE_StringTable_1_44);
                    NumVars_61 = ((MR_Integer) (conv7_NumVars_61));
                    VarNameTableEntriesBytes_62 = ((MR_Word) (conv6_VarNameTableEntriesBytes_62));
                    STATE_VARIABLE_StringTable_1_44 = ((MR_Word) (conv5_STATE_VARIABLE_StringTable_1_44));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Box conv13_NumVars_61;
                    MR_Box conv12_VarNameTableEntriesBytes_62;
                    MR_Box conv11_STATE_VARIABLE_StringTable_1_44;

                    mercury__map__foldl3_8_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[5]), VarNumMap_19, ((MR_Box) ((MR_Integer) 0)), &conv13_NumVars_61, ((MR_Box) ((MR_Unsigned) 0U)), &conv12_VarNameTableEntriesBytes_62, ((MR_Box) (STATE_VARIABLE_StringTable_0_40)), &conv11_STATE_VARIABLE_StringTable_1_44);
                    NumVars_61 = ((MR_Integer) (conv13_NumVars_61));
                    VarNameTableEntriesBytes_62 = ((MR_Word) (conv12_VarNameTableEntriesBytes_62));
                    STATE_VARIABLE_StringTable_1_44 = ((MR_Word) (conv11_STATE_VARIABLE_StringTable_1_44));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Box conv19_NumVars_61;
                    MR_Box conv18_VarNameTableEntriesBytes_62;
                    MR_Box conv17_STATE_VARIABLE_StringTable_1_44;

                    mercury__map__foldl3_8_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[6]), VarNumMap_19, ((MR_Box) ((MR_Integer) 0)), &conv19_NumVars_61, ((MR_Box) ((MR_Unsigned) 0U)), &conv18_VarNameTableEntriesBytes_62, ((MR_Box) (STATE_VARIABLE_StringTable_0_40)), &conv17_STATE_VARIABLE_StringTable_1_44);
                    NumVars_61 = ((MR_Integer) (conv19_NumVars_61));
                    VarNameTableEntriesBytes_62 = ((MR_Word) (conv18_VarNameTableEntriesBytes_62));
                    STATE_VARIABLE_StringTable_1_44 = ((MR_Word) (conv17_STATE_VARIABLE_StringTable_1_44));
                  }
                  break;
              }
              *STATE_VARIABLE_TypeTable_43 = STATE_VARIABLE_TypeTable_0_42;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_77;
              MR_Box conv27_NumVars_61;
              MR_Box conv26_VarNameTableEntriesBytes_62;
              MR_Box conv25_STATE_VARIABLE_StringTable_1_44;
              MR_Box conv24_STATE_VARIABLE_TypeTable_43;

              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_77, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_9[0]));
                MR_hl_field(0, Var_77, 1) = ((MR_Box) (ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_6));
                MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_77, 3) = ((MR_Box) (VarNumRep_31));
                MR_hl_field(0, Var_77, 4) = ((MR_Box) (VarTable_18));
              }
              mercury__map__foldl4_10_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0), Var_77, VarNumMap_19, ((MR_Box) ((MR_Integer) 0)), &conv27_NumVars_61, ((MR_Box) ((MR_Unsigned) 0U)), &conv26_VarNameTableEntriesBytes_62, ((MR_Box) (STATE_VARIABLE_StringTable_0_40)), &conv25_STATE_VARIABLE_StringTable_1_44, ((MR_Box) (STATE_VARIABLE_TypeTable_0_42)), &conv24_STATE_VARIABLE_TypeTable_43);
              NumVars_61 = ((MR_Integer) (conv27_NumVars_61));
              VarNameTableEntriesBytes_62 = ((MR_Word) (conv26_VarNameTableEntriesBytes_62));
              STATE_VARIABLE_StringTable_1_44 = ((MR_Word) (conv25_STATE_VARIABLE_StringTable_1_44));
              *STATE_VARIABLE_TypeTable_43 = ((MR_Word) (conv24_STATE_VARIABLE_TypeTable_43));
            }
            break;
        }
        mdbcomp__rtti_access__encode_num_det_2_p_0(NumVars_61, &NumVarsBytes_63);
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (FlagByte_60));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), NumVarsBytes_63, VarNameTableEntriesBytes_62);
        VarNameTableBytes_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_80, Var_82);
      }
      break;
  }
  {
    Info_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_33, 0) = ((MR_Box) (ModuleInfo_20));
    MR_hl_field(0, Info_33, 1) = ((MR_Box) (FileName_30));
    MR_hl_field(0, Info_33, 2) = ((MR_Box) (VarTable_18));
    MR_hl_field(0, Info_33, 3) = ((MR_Box) (VarNumMap_19));
    MR_hl_field(0, Info_33, 4) = (MR_Box) (((((MR_Unsigned) (VarNumRep_31) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
  }
  InstmapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_28);
  ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(FileName_30, &Index_100, STATE_VARIABLE_StringTable_1_44, &STATE_VARIABLE_StringTable_2_47);
  mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_100, &FileNameBytes_35);
  ll_backend__prog_rep__goal_to_goal_rep_4_p_0(Info_33, InstMap0_17, Goal_16, &GoalRep_101);
  ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_33, GoalRep_101, &GoalBytes_36, STATE_VARIABLE_StringTable_2_47, STATE_VARIABLE_StringTable_41);
  DetismByte_37 = hlds__code_model__represent_determinism_1_f_0(ProcDetism_23);
  Var_109 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), HeadVars_15);
  mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_109, &Var_102);
  {
    Var_105 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_105, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[2]));
    MR_hl_field(0, Var_105, 1) = ((MR_Box) (ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_7));
    MR_hl_field(0, Var_105, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_105, 3) = ((MR_Box) (Info_33));
    MR_hl_field(0, Var_105, 4) = ((MR_Box) (InstMap0_17));
    MR_hl_field(0, Var_105, 5) = ((MR_Box) (InstmapDelta_34));
  }
  Var_104 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), Var_105, HeadVars_15);
  Var_103 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_104);
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_102, Var_103);
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (DetismByte_37));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), GoalBytes_36, Var_53);
  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_51, Var_52);
  Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNameTableBytes_32, Var_50);
  ProcRepBytes0_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FileNameBytes_35, Var_49);
  Var_56 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ProcRepBytes0_38);
  Var_55 = (MR_Integer) ((MR_Unsigned) Var_56 + (MR_Unsigned) 4);
  mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_55, &LimitBytes_39);
  *ProcRepBytes_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LimitBytes_39, ProcRepBytes0_38);
}

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_Bytes_8;
  MR_Word conv6_STATE_VARIABLE_StringTable_17;

  ll_backend__prog_rep__encode_case_rep_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv7_Bytes_8, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_StringTable_17);
  *wrapper_arg_2 = ((MR_Box) (conv7_Bytes_8));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_StringTable_17));
}

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Bytes_10;
  MR_Word conv3_STATE_VARIABLE_StringTable_72;

  ll_backend__prog_rep__encode_goal_rep_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Bytes_10, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_StringTable_72);
  *wrapper_arg_2 = ((MR_Box) (conv4_Bytes_10));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_StringTable_72));
}

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Bytes_10;
  MR_Word conv0_STATE_VARIABLE_StringTable_72;

  ll_backend__prog_rep__encode_goal_rep_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Bytes_10, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_StringTable_72);
  *wrapper_arg_2 = ((MR_Box) (conv1_Bytes_10));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StringTable_72));
}

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0(
  MR_Word Info_6,
  MR_Word HeadVar__2_2,
  MR_Word * Bytes_10,
  MR_Word STATE_VARIABLE_StringTable_0_71,
  MR_Word * STATE_VARIABLE_StringTable_72)
{
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word Detism_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 7);
  MR_Word ExprBytes_14;
  MR_Integer DetismByte_70;
  MR_Word Var_206;

  switch (MR_tag((MR_Word) GoalExpr_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GoalReps_12 = ((MR_Word) ((MR_hl_field(0, GoalExpr_7, 0))));
        MR_Word ConjBytesList_13;
        MR_Word Var_73;
        MR_Word Var_75;
        MR_Integer Var_76;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Box conv2_STATE_VARIABLE_StringTable_72;

        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_73, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[0]));
          MR_hl_field(0, Var_73, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_1));
          MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_73, 3) = ((MR_Box) (Info_6));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[1]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), Var_73, GoalReps_12, &ConjBytesList_13, ((MR_Box) (STATE_VARIABLE_StringTable_0_71)), &conv2_STATE_VARIABLE_StringTable_72);
        *STATE_VARIABLE_StringTable_72 = ((MR_Word) (conv2_STATE_VARIABLE_StringTable_72));
        Var_76 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 0);
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_80 = ll_backend__prog_rep__encode_length_func_1_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[1]), GoalReps_12);
        Var_81 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConjBytesList_13);
        Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_80, Var_81);
        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_75, Var_79);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DisjBytesList_15;
        MR_Word Var_82;
        MR_Word Var_84;
        MR_Integer Var_85;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word GoalReps_208 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, 0))));
        MR_Box conv5_STATE_VARIABLE_StringTable_72;

        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_82, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[0]));
          MR_hl_field(0, Var_82, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_2));
          MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_82, 3) = ((MR_Box) (Info_6));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[1]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), Var_82, GoalReps_208, &DisjBytesList_15, ((MR_Box) (STATE_VARIABLE_StringTable_0_71)), &conv5_STATE_VARIABLE_StringTable_72);
        *STATE_VARIABLE_StringTable_72 = ((MR_Word) (conv5_STATE_VARIABLE_StringTable_72));
        Var_85 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 1);
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_89 = ll_backend__prog_rep__encode_length_func_1_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[1]), GoalReps_208);
        Var_90 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), DisjBytesList_15);
        Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_89, Var_90);
        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_84, Var_88);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer SwitchVar_63 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_7, 0))));
        MR_Word CanFail_64 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_7, 1))) & (MR_Integer) 1);
        MR_Word Cases_65 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, 2))));
        MR_Word CasesBytesList_66;
        MR_Integer CanFailByte_67;
        MR_Word Var_184;
        MR_Word Var_186;
        MR_Integer Var_187;
        MR_Word Var_190;
        MR_Word Var_191;
        MR_Word Var_193;
        MR_Word Var_194;
        MR_Word Var_195;
        MR_Word Var_196;
        MR_Word Var_197;
        MR_Box conv8_STATE_VARIABLE_StringTable_72;

        {
          Var_184 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_184, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[1]));
          MR_hl_field(0, Var_184, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_3));
          MR_hl_field(0, Var_184, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_184, 3) = ((MR_Box) (Info_6));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[2]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), Var_184, Cases_65, &CasesBytesList_66, ((MR_Box) (STATE_VARIABLE_StringTable_0_71)), &conv8_STATE_VARIABLE_StringTable_72);
        *STATE_VARIABLE_StringTable_72 = ((MR_Word) (conv8_STATE_VARIABLE_StringTable_72));
        mdbcomp__program_representation__can_fail_byte_2_p_0(CanFail_64, &CanFailByte_67);
        Var_187 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 2);
        {
          Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_186, 0) = ((MR_Box) (Var_187));
          MR_hl_field(1, Var_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_191, 0) = ((MR_Box) (CanFailByte_67));
          MR_hl_field(1, Var_191, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_194 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, SwitchVar_63);
        Var_196 = ll_backend__prog_rep__encode_length_func_1_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[2]), Cases_65);
        Var_197 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CasesBytesList_66);
        Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_196, Var_197);
        Var_193 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_194, Var_195);
        Var_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_191, Var_193);
        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_186, Var_190);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 1))));
            MR_Word Then_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 2))));
            MR_Word Else_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 3))));
            MR_Word CondBytes_21;
            MR_Word ThenBytes_22;
            MR_Word ElseBytes_23;
            MR_Word STATE_VARIABLE_StringTable_4_96;
            MR_Word STATE_VARIABLE_StringTable_5_97;
            MR_Word Var_99;
            MR_Integer Var_100;
            MR_Word Var_103;
            MR_Word Var_104;

            ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_6, Cond_18, &CondBytes_21, STATE_VARIABLE_StringTable_0_71, &STATE_VARIABLE_StringTable_4_96);
            ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_6, Then_19, &ThenBytes_22, STATE_VARIABLE_StringTable_4_96, &STATE_VARIABLE_StringTable_5_97);
            ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_6, Else_20, &ElseBytes_23, STATE_VARIABLE_StringTable_5_97, STATE_VARIABLE_StringTable_72);
            Var_100 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 3);
            {
              Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
              MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ThenBytes_22, ElseBytes_23);
            Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CondBytes_21, Var_104);
            ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_99, Var_103);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word SubGoal_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 1))));
            MR_Word SubGoalBytes_17;
            MR_Word Var_92;
            MR_Integer Var_93;

            ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_6, SubGoal_16, &SubGoalBytes_17, STATE_VARIABLE_StringTable_0_71, STATE_VARIABLE_StringTable_72);
            Var_93 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 4);
            {
              Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
              MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_92, SubGoalBytes_17);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MaybeCut_68 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_7, 2))) & (MR_Integer) 1);
            MR_Integer MaybeCutByte_69;
            MR_Word Var_199;
            MR_Integer Var_200;
            MR_Word Var_203;
            MR_Word Var_204;
            MR_Word SubGoal_217 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 1))));
            MR_Word SubGoalBytes_218;

            mdbcomp__program_representation__cut_byte_2_p_0(MaybeCut_68, &MaybeCutByte_69);
            ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_6, SubGoal_217, &SubGoalBytes_218, STATE_VARIABLE_StringTable_0_71, STATE_VARIABLE_StringTable_72);
            Var_200 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 5);
            {
              Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_199, 0) = ((MR_Box) (Var_200));
              MR_hl_field(1, Var_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_204, 0) = ((MR_Box) (MaybeCutByte_69));
              MR_hl_field(1, Var_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_203 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_204, SubGoalBytes_218);
            ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_199, Var_203);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String FileName_24 = ((MR_String) ((MR_hl_field(3, GoalExpr_7, 1))));
            MR_Integer Line_25 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_7, 2))));
            MR_Word BoundVars_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 3))));
            MR_Word AtomicGoalRep_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 4))));
            MR_Word FileNameBytes_28;
            MR_Word AtomicBytes_29;
            MR_Word STATE_VARIABLE_StringTable_7_105;
            MR_Word Var_106;
            MR_Word Var_107;
            MR_Word Var_108;

            ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(FileName_24, &FileNameBytes_28, STATE_VARIABLE_StringTable_0_71, &STATE_VARIABLE_StringTable_7_105);
            Var_107 = ll_backend__prog_rep__encode_lineno_func_1_f_0(Line_25);
            Var_108 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, BoundVars_26);
            Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_107, Var_108);
            AtomicBytes_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FileNameBytes_28, Var_106);
            switch (MR_tag((MR_Word) AtomicGoalRep_27)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Args_46 = ((MR_Word) ((MR_hl_field(0, AtomicGoalRep_27, 2))));
                  MR_Integer Var_274 = ((MR_Integer) ((MR_hl_field(0, AtomicGoalRep_27, 0))));
                  MR_String ConsId_275 = ((MR_String) ((MR_hl_field(0, AtomicGoalRep_27, 1))));
                  MR_Integer AtomicTypeByte_276;
                  MR_Word ArgsBytes_277;
                  MR_Word ConsIdBytes_278;
                  MR_Word VarBytes_279;
                  MR_Word Var_280;
                  MR_Word Var_282;
                  MR_Word Var_283;
                  MR_Word Var_284;

                  AtomicTypeByte_276 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 6);
                  ArgsBytes_277 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_46);
                  ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ConsId_275, &ConsIdBytes_278, STATE_VARIABLE_StringTable_7_105, STATE_VARIABLE_StringTable_72);
                  VarBytes_279 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Var_274);
                  {
                    Var_280 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_280, 0) = ((MR_Box) (AtomicTypeByte_276));
                    MR_hl_field(1, Var_280, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Var_284 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgsBytes_277, AtomicBytes_29);
                  Var_283 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsIdBytes_278, Var_284);
                  Var_282 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_279, Var_283);
                  ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_280, Var_282);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Var_285 = ((MR_Integer) ((MR_hl_field(1, AtomicGoalRep_27, 0))));
                  MR_String ConsId_286 = ((MR_String) ((MR_hl_field(1, AtomicGoalRep_27, 1))));
                  MR_Word Args_287 = ((MR_Word) ((MR_hl_field(1, AtomicGoalRep_27, 2))));
                  MR_Integer AtomicTypeByte_288;
                  MR_Word ArgsBytes_289;
                  MR_Word ConsIdBytes_290;
                  MR_Word VarBytes_291;
                  MR_Word Var_292;
                  MR_Word Var_294;
                  MR_Word Var_295;
                  MR_Word Var_296;

                  AtomicTypeByte_288 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 7);
                  ArgsBytes_289 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_287);
                  ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ConsId_286, &ConsIdBytes_290, STATE_VARIABLE_StringTable_7_105, STATE_VARIABLE_StringTable_72);
                  VarBytes_291 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Var_285);
                  {
                    Var_292 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_292, 0) = ((MR_Box) (AtomicTypeByte_288));
                    MR_hl_field(1, Var_292, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Var_296 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgsBytes_289, AtomicBytes_29);
                  Var_295 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsIdBytes_290, Var_296);
                  Var_294 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_291, Var_295);
                  ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_292, Var_294);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeArgs_248 = ((MR_Word) ((MR_hl_field(2, AtomicGoalRep_27, 2))));
                  MR_Integer Var_263 = ((MR_Integer) ((MR_hl_field(2, AtomicGoalRep_27, 0))));
                  MR_String ConsId_264 = ((MR_String) ((MR_hl_field(2, AtomicGoalRep_27, 1))));
                  MR_Integer AtomicTypeByte_265;
                  MR_Word ArgsBytes_266;
                  MR_Word ConsIdBytes_267;
                  MR_Word VarBytes_268;
                  MR_Word Var_269;
                  MR_Word Var_271;
                  MR_Word Var_272;
                  MR_Word Var_273;

                  AtomicTypeByte_265 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 9);
                  ArgsBytes_266 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(Info_6, MaybeArgs_248);
                  ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ConsId_264, &ConsIdBytes_267, STATE_VARIABLE_StringTable_7_105, STATE_VARIABLE_StringTable_72);
                  VarBytes_268 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Var_263);
                  {
                    Var_269 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_269, 0) = ((MR_Box) (AtomicTypeByte_265));
                    MR_hl_field(1, Var_269, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Var_273 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgsBytes_266, AtomicBytes_29);
                  Var_272 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsIdBytes_267, Var_273);
                  Var_271 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_268, Var_272);
                  ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_269, Var_271);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, AtomicGoalRep_27, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(3, AtomicGoalRep_27, 1))));
                      MR_String ConsId_45 = ((MR_String) ((MR_hl_field(3, AtomicGoalRep_27, 2))));
                      MR_Integer AtomicTypeByte_47;
                      MR_Word ArgsBytes_48;
                      MR_Word MaybeArgs_49 = ((MR_Word) ((MR_hl_field(3, AtomicGoalRep_27, 3))));
                      MR_Word ConsIdBytes_50;
                      MR_Word VarBytes_51;
                      MR_Word Var_122;
                      MR_Word Var_124;
                      MR_Word Var_125;
                      MR_Word Var_126;

                      AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 8);
                      ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(Info_6, MaybeArgs_49);
                      ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ConsId_45, &ConsIdBytes_50, STATE_VARIABLE_StringTable_7_105, STATE_VARIABLE_StringTable_72);
                      VarBytes_51 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Var_44);
                      {
                        Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_122, 0) = ((MR_Box) (AtomicTypeByte_47));
                        MR_hl_field(1, Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgsBytes_48, AtomicBytes_29);
                      Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsIdBytes_50, Var_126);
                      Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_51, Var_125);
                      ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_122, Var_124);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer Target_30 = ((MR_Integer) ((MR_hl_field(3, AtomicGoalRep_27, 1))));
                      MR_Integer Source_31 = ((MR_Integer) ((MR_hl_field(3, AtomicGoalRep_27, 2))));
                      MR_Word Var_109;
                      MR_Integer Var_110;
                      MR_Word Var_113;
                      MR_Word Var_114;
                      MR_Word Var_115;
                      MR_Word Var_116;

                      Var_110 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 10);
                      {
                        Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
                        MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_114 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Target_30);
                      Var_116 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Source_31);
                      Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_116, AtomicBytes_29);
                      Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_114, Var_115);
                      ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_109, Var_113);
                      *STATE_VARIABLE_StringTable_72 = STATE_VARIABLE_StringTable_7_105;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_161;
                      MR_Integer Var_162;
                      MR_Word Var_165;
                      MR_Word Var_166;
                      MR_Word Var_167;
                      MR_Word Var_168;
                      MR_Integer Target_213 = ((MR_Integer) ((MR_hl_field(3, AtomicGoalRep_27, 1))));
                      MR_Integer Source_214 = ((MR_Integer) ((MR_hl_field(3, AtomicGoalRep_27, 2))));

                      Var_162 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 11);
                      {
                        Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_161, 0) = ((MR_Box) (Var_162));
                        MR_hl_field(1, Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_166 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Target_213);
                      Var_168 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Source_214);
                      Var_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_168, AtomicBytes_29);
                      Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_166, Var_167);
                      ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_161, Var_165);
                      *STATE_VARIABLE_StringTable_72 = STATE_VARIABLE_StringTable_7_105;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Integer Var1_52 = ((MR_Integer) ((MR_hl_field(3, AtomicGoalRep_27, 1))));
                      MR_Integer Var2_53 = ((MR_Integer) ((MR_hl_field(3, AtomicGoalRep_27, 2))));
                      MR_Word Var_127;
                      MR_Integer Var_128;
                      MR_Word Var_131;
                      MR_Word Var_132;
                      MR_Word Var_133;
                      MR_Word Var_134;

                      Var_128 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 12);
                      {
                        Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_127, 0) = ((MR_Box) (Var_128));
                        MR_hl_field(1, Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_132 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Var1_52);
                      Var_134 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Var2_53);
                      Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_134, AtomicBytes_29);
                      Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_132, Var_133);
                      ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_127, Var_131);
                      *STATE_VARIABLE_StringTable_72 = STATE_VARIABLE_StringTable_7_105;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word Var_178;
                      MR_Integer Var_179;
                      MR_Word Var_182;
                      MR_Word Var_183;
                      MR_Word Args_216 = ((MR_Word) ((MR_hl_field(3, AtomicGoalRep_27, 1))));

                      Var_179 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 13);
                      {
                        Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_178, 0) = ((MR_Box) (Var_179));
                        MR_hl_field(1, Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_183 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_216);
                      Var_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_183, AtomicBytes_29);
                      ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_178, Var_182);
                      *STATE_VARIABLE_StringTable_72 = STATE_VARIABLE_StringTable_7_105;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Integer PredVar_54 = ((MR_Integer) ((MR_hl_field(3, AtomicGoalRep_27, 1))));
                      MR_Word Var_135;
                      MR_Integer Var_136;
                      MR_Word Var_139;
                      MR_Word Var_140;
                      MR_Word Var_141;
                      MR_Word Var_142;
                      MR_Word Args_209 = ((MR_Word) ((MR_hl_field(3, AtomicGoalRep_27, 2))));

                      Var_136 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 14);
                      {
                        Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_136));
                        MR_hl_field(1, Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_140 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, PredVar_54);
                      Var_142 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_209);
                      Var_141 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_142, AtomicBytes_29);
                      Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_140, Var_141);
                      ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_135, Var_139);
                      *STATE_VARIABLE_StringTable_72 = STATE_VARIABLE_StringTable_7_105;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Integer MethodNum_55 = ((MR_Integer) ((MR_hl_field(3, AtomicGoalRep_27, 2))));
                      MR_Word Var_143;
                      MR_Integer Var_144;
                      MR_Word Var_147;
                      MR_Word Var_148;
                      MR_Word Var_149;
                      MR_Word Var_150;
                      MR_Word Var_151;
                      MR_Word Var_152;
                      MR_Integer Var_210 = ((MR_Integer) ((MR_hl_field(3, AtomicGoalRep_27, 1))));
                      MR_Word Args_211 = ((MR_Word) ((MR_hl_field(3, AtomicGoalRep_27, 3))));

                      Var_144 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 15);
                      {
                        Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_143, 0) = ((MR_Box) (Var_144));
                        MR_hl_field(1, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_148 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Var_210);
                      Var_150 = ll_backend__prog_rep__encode_method_num_func_1_f_0(MethodNum_55);
                      Var_152 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_211);
                      Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_152, AtomicBytes_29);
                      Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_150, Var_151);
                      Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_148, Var_149);
                      ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_143, Var_147);
                      *STATE_VARIABLE_StringTable_72 = STATE_VARIABLE_StringTable_7_105;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_String ModuleName_249 = ((MR_String) ((MR_hl_field(3, AtomicGoalRep_27, 1))));
                      MR_String PredName_250 = ((MR_String) ((MR_hl_field(3, AtomicGoalRep_27, 2))));
                      MR_Word ModuleNameBytes_252;
                      MR_Word PredNameBytes_253;
                      MR_Word STATE_VARIABLE_StringTable_10_254;
                      MR_Word Var_255;
                      MR_Integer Var_256;
                      MR_Word Var_258;
                      MR_Word Var_259;
                      MR_Word Var_260;
                      MR_Word Var_261;
                      MR_Word Args_262 = ((MR_Word) ((MR_hl_field(3, AtomicGoalRep_27, 3))));

                      ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ModuleName_249, &ModuleNameBytes_252, STATE_VARIABLE_StringTable_7_105, &STATE_VARIABLE_StringTable_10_254);
                      ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(PredName_250, &PredNameBytes_253, STATE_VARIABLE_StringTable_10_254, STATE_VARIABLE_StringTable_72);
                      Var_256 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 16);
                      {
                        Var_255 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_255, 0) = ((MR_Box) (Var_256));
                        MR_hl_field(1, Var_255, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_261 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_262);
                      Var_260 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_261, AtomicBytes_29);
                      Var_259 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PredNameBytes_253, Var_260);
                      Var_258 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ModuleNameBytes_252, Var_259);
                      ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_255, Var_258);
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_String ModuleName_58 = ((MR_String) ((MR_hl_field(3, AtomicGoalRep_27, 1))));
                      MR_String PredName_59 = ((MR_String) ((MR_hl_field(3, AtomicGoalRep_27, 2))));
                      MR_Word ModuleNameBytes_61;
                      MR_Word PredNameBytes_62;
                      MR_Word STATE_VARIABLE_StringTable_10_169;
                      MR_Word Var_171;
                      MR_Integer Var_172;
                      MR_Word Var_174;
                      MR_Word Var_175;
                      MR_Word Var_176;
                      MR_Word Var_177;
                      MR_Word Args_215 = ((MR_Word) ((MR_hl_field(3, AtomicGoalRep_27, 3))));

                      ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ModuleName_58, &ModuleNameBytes_61, STATE_VARIABLE_StringTable_7_105, &STATE_VARIABLE_StringTable_10_169);
                      ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(PredName_59, &PredNameBytes_62, STATE_VARIABLE_StringTable_10_169, STATE_VARIABLE_StringTable_72);
                      Var_172 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 17);
                      {
                        Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_171, 0) = ((MR_Box) (Var_172));
                        MR_hl_field(1, Var_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_177 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_215);
                      Var_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_177, AtomicBytes_29);
                      Var_175 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PredNameBytes_62, Var_176);
                      Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ModuleNameBytes_61, Var_175);
                      ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_171, Var_174);
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      MR_String EventName_56 = ((MR_String) ((MR_hl_field(3, AtomicGoalRep_27, 1))));
                      MR_Word EventNameBytes_57;
                      MR_Word Var_154;
                      MR_Integer Var_155;
                      MR_Word Var_158;
                      MR_Word Var_159;
                      MR_Word Var_160;
                      MR_Word Args_212 = ((MR_Word) ((MR_hl_field(3, AtomicGoalRep_27, 2))));

                      ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(EventName_56, &EventNameBytes_57, STATE_VARIABLE_StringTable_7_105, STATE_VARIABLE_StringTable_72);
                      Var_155 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 18);
                      {
                        Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
                        MR_hl_field(1, Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_160 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_212);
                      Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_160, AtomicBytes_29);
                      Var_158 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), EventNameBytes_57, Var_159);
                      ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_154, Var_158);
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
  mdbcomp__program_representation__determinism_representation_2_p_0(Detism_8, &DetismByte_70);
  {
    Var_206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_206, 0) = ((MR_Box) (DetismByte_70));
    MR_hl_field(1, Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *Bytes_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ExprBytes_14, Var_206);
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_method_num_func_1_f_0(
  MR_Integer VarNum_3)
{
  MR_Word Bytes_4;

  mdbcomp__rtti_access__encode_short_det_2_p_0(VarNum_3, &Bytes_4);
  return Bytes_4;
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_lineno_func_1_f_0(
  MR_Integer VarNum_3)
{
  MR_Word Bytes_4;

  mdbcomp__rtti_access__encode_int32_det_2_p_0(VarNum_3, &Bytes_4);
  return Bytes_4;
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_length_func_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word List_3)
{
  MR_Word Bytes_4;
  MR_Integer Var_5;

  Var_5 = mercury__list__length_1_f_0(TypeInfo_for_T_6, List_3);
  mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_5, &Bytes_4);
  return Bytes_4;
}

static MR_Box MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Bytes_6;

  conv0_Bytes_6 = ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Bytes_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(
  MR_Word Info_4,
  MR_Word Vars_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Integer Var_13;

  Var_13 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[5]), Vars_5);
  mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_13, &Var_6);
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[4]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (Info_4));
  }
  Var_8 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[5]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), Var_9, Vars_5);
  Var_7 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_8);
  HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_6, Var_7);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_rep_func_2_f_0(
  MR_Word Info_4,
  MR_Integer Var_5)
{
  MR_Word Bytes_6;
  MR_Word VarNumRep_7 = ((((MR_Unsigned) ((MR_hl_field(0, Info_4, 4))) >> 1)) & (MR_Integer) 3);

  switch (VarNumRep_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        Bytes_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Bytes_6, 0) = ((MR_Box) (Var_5));
        MR_hl_field(1, Bytes_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 1:
      mdbcomp__rtti_access__encode_short_det_2_p_0(Var_5, &Bytes_6);
      break;
    case (MR_Integer) 2:
      mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_5, &Bytes_6);
      break;
  }
  return Bytes_6;
}

static MR_Box MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Bytes_6;

  conv0_Bytes_6 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Bytes_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0(
  MR_Word Info_4,
  MR_Word Vars_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Integer Var_12;

  Var_12 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Vars_5);
  mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_12, &Var_6);
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[3]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (ll_backend__prog_rep__encode_var_reps_func_2_f_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (Info_4));
  }
  Var_8 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), Var_9, Vars_5);
  Var_7 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_8);
  HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_6, Var_7);
  return HeadVar__3_3;
}

static void MR_CALL 
ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(
  MR_String String_5,
  MR_Word * Bytes_6,
  MR_Word STATE_VARIABLE_StringTable_0_9,
  MR_Word * STATE_VARIABLE_StringTable_10)
{
  MR_Integer Index_8;

  ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(String_5, &Index_8, STATE_VARIABLE_StringTable_0_9, STATE_VARIABLE_StringTable_10);
  mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_8, Bytes_6);
}

static void MR_CALL 
ll_backend__prog_rep__conj_to_conj_rep_4_p_0(
  MR_Word Info_1,
  MR_Word Instmap0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Conj_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Conjs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ConjRep_11;
    MR_Word ConjReps_12;
    MR_Word GoalInfo_13;
    MR_Word InstmapDelta_14;
    MR_Word Instmap1_15;

    ll_backend__prog_rep__goal_to_goal_rep_4_p_0(Info_1, Instmap0_2, Conj_9, &ConjRep_11);
    GoalInfo_13 = ((MR_Word) ((MR_hl_field(0, Conj_9, 1))));
    InstmapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_13);
    hlds__instmap__apply_instmap_delta_3_p_0(InstmapDelta_14, Instmap0_2, &Instmap1_15);
    ll_backend__prog_rep__conj_to_conj_rep_4_p_0(Info_1, Instmap1_15, Conjs_10, &ConjReps_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConjRep_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (ConjReps_12));
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__4_4;

  ll_backend__prog_rep__case_to_case_rep_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv9_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_GoalRep_9;

  ll_backend__prog_rep__goal_to_goal_rep_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv8_GoalRep_9);
  *wrapper_arg_2 = ((MR_Box) (conv8_GoalRep_9));
}

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__464__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__3_267;

  conv7_HeadVar__3_267 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__539__2_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__3_267));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__3_221;

  conv6_HeadVar__3_221 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__539__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__3_221));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv5_Num_6;

  conv5_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_Num_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv4_Num_6;

  conv4_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_Num_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv3_Num_6;

  conv3_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_Num_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv2_HeadVar__4_232;

  conv2_HeadVar__4_232 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__608__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_232));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_Num_6;

  conv0_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Num_6));
  return wrapper_arg_2;
}

void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0(
  MR_Word Info_5,
  MR_Word Instmap0_6,
  MR_Word HeadVar__3_3,
  MR_Word * GoalRep_9)
{
  MR_bool succeeded;
  MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word Detism_10;
  MR_Word DetismRep_11;
  MR_Word GoalExprRep_12;

  Detism_10 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_8);
  ll_backend__prog_rep__detism_to_detism_rep_2_p_0(Detism_10, &DetismRep_11);
  switch (MR_tag((MR_Word) GoalExpr_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal_18 = (MR_Word) ((MR_Word) (GoalExpr_7));
        MR_Word SubGoalRep_19;

        ll_backend__prog_rep__goal_to_goal_rep_4_p_0(Info_5, Instmap0_6, SubGoal_18, &SubGoalRep_19);
        {
          GoalExprRep_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExprRep_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, GoalExprRep_12, 1) = ((MR_Box) (SubGoalRep_19));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_73;
        MR_String FileName_288;
        MR_Integer LineNo_289;
        MR_Word BoundVars_290;
        MR_Word BoundVarsRep_291;
        MR_Word AtomicGoalRep_292;
        MR_Word Var_293;

        ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(GoalInfo_8, Instmap0_6, Info_5, &FileName_288, &LineNo_289, &BoundVars_290);
        {
          Var_293 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_293, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
          MR_hl_field(0, Var_293, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6));
          MR_hl_field(0, Var_293, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_293, 3) = ((MR_Box) (Info_5));
        }
        BoundVarsRep_291 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_293, BoundVars_290);
        Unification_73 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, 3))));
        switch (MR_tag((MR_Word) Unification_73)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ConsId_78 = ((MR_Word) ((MR_hl_field(0, Unification_73, 1))));
              MR_Word ArgVars_79 = ((MR_Word) ((MR_hl_field(0, Unification_73, 2))));
              MR_Word ArgModes_80 = ((MR_Word) ((MR_hl_field(0, Unification_73, 3))));
              MR_String ConsIdRep_86;
              MR_Word ArgVarsRep_87;
              MR_Word MaybeArgVars_88;
              MR_Word MaybeArgVarsRep_89;
              MR_Word Var_154;
              MR_Word Var_177 = ((MR_Word) ((MR_hl_field(0, Unification_73, 0))));
              MR_Integer VarRep_178;

              VarRep_178 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var_177);
              ConsIdRep_86 = ll_backend__prog_rep__cons_id_rep_1_f_0(ConsId_78);
              ArgVarsRep_87 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_293, ArgVars_79);
              ll_backend__prog_rep__filter_input_args_4_p_0(Info_5, ArgModes_80, ArgVars_79, &MaybeArgVars_88);
              {
                Var_154 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_154, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
                MR_hl_field(0, Var_154, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7));
                MR_hl_field(0, Var_154, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_154, 3) = ((MR_Box) (Var_293));
              }
              MaybeArgVarsRep_89 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[4]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[5]), Var_154, MaybeArgVars_88);
              succeeded = ll_backend__prog_rep__lhs_finals_are_ground_3_p_0(Info_5, ArgVars_79, ArgModes_80);
              if (succeeded)
                {
                  AtomicGoalRep_292 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, AtomicGoalRep_292, 0) = ((MR_Box) (VarRep_178));
                  MR_hl_field(0, AtomicGoalRep_292, 1) = ((MR_Box) (ConsIdRep_86));
                  MR_hl_field(0, AtomicGoalRep_292, 2) = ((MR_Box) (ArgVarsRep_87));
                }
              else
                {
                  AtomicGoalRep_292 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, AtomicGoalRep_292, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, AtomicGoalRep_292, 1) = ((MR_Box) (VarRep_178));
                  MR_hl_field(3, AtomicGoalRep_292, 2) = ((MR_Box) (ConsIdRep_86));
                  MR_hl_field(3, AtomicGoalRep_292, 3) = ((MR_Box) (MaybeArgVarsRep_89));
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ConsId_272 = ((MR_Word) ((MR_hl_field(1, Unification_73, 1))));
              MR_Word ArgVars_273 = ((MR_Word) ((MR_hl_field(1, Unification_73, 2))));
              MR_Word ArgModes_274 = ((MR_Word) ((MR_hl_field(1, Unification_73, 3))));
              MR_String ConsIdRep_275;
              MR_Word ArgVarsRep_276;
              MR_Word MaybeArgVars_277;
              MR_Word MaybeArgVarsRep_278;
              MR_Word Var_280;
              MR_Word Var_282 = ((MR_Word) ((MR_hl_field(1, Unification_73, 0))));
              MR_Integer VarRep_283;

              VarRep_283 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var_282);
              ConsIdRep_275 = ll_backend__prog_rep__cons_id_rep_1_f_0(ConsId_272);
              ArgVarsRep_276 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_293, ArgVars_273);
              ll_backend__prog_rep__filter_input_args_4_p_0(Info_5, ArgModes_274, ArgVars_273, &MaybeArgVars_277);
              {
                Var_280 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_280, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
                MR_hl_field(0, Var_280, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8));
                MR_hl_field(0, Var_280, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_280, 3) = ((MR_Box) (Var_293));
              }
              MaybeArgVarsRep_278 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[4]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[5]), Var_280, MaybeArgVars_277);
              succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), ((MR_Box) (Var_282)), BoundVars_290);
              if (succeeded)
                {
                  AtomicGoalRep_292 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, AtomicGoalRep_292, 0) = ((MR_Box) (VarRep_283));
                  MR_hl_field(2, AtomicGoalRep_292, 1) = ((MR_Box) (ConsIdRep_275));
                  MR_hl_field(2, AtomicGoalRep_292, 2) = ((MR_Box) (MaybeArgVarsRep_278));
                }
              else
                {
                  AtomicGoalRep_292 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, AtomicGoalRep_292, 0) = ((MR_Box) (VarRep_283));
                  MR_hl_field(1, AtomicGoalRep_292, 1) = ((MR_Box) (ConsIdRep_275));
                  MR_hl_field(1, AtomicGoalRep_292, 2) = ((MR_Box) (ArgVarsRep_276));
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Target_75 = ((MR_Word) ((MR_hl_field(2, Unification_73, 0))));
              MR_Word Source_76 = ((MR_Word) ((MR_hl_field(2, Unification_73, 1))));
              MR_Integer Var_151;
              MR_Integer Var_152;

              Var_151 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Target_75);
              Var_152 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Source_76);
              {
                AtomicGoalRep_292 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, AtomicGoalRep_292, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, AtomicGoalRep_292, 1) = ((MR_Box) (Var_151));
                MR_hl_field(3, AtomicGoalRep_292, 2) = ((MR_Box) (Var_152));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Unification_73, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var1_103 = ((MR_Word) ((MR_hl_field(3, Unification_73, 1))));
                  MR_Word Var2_104 = ((MR_Word) ((MR_hl_field(3, Unification_73, 2))));
                  MR_Integer Var_156;
                  MR_Integer Var_157;

                  Var_156 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var1_103);
                  Var_157 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var2_104);
                  {
                    AtomicGoalRep_292 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, AtomicGoalRep_292, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, AtomicGoalRep_292, 1) = ((MR_Box) (Var_156));
                    MR_hl_field(3, AtomicGoalRep_292, 2) = ((MR_Box) (Var_157));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "complicated_unify");
                  return;
                }
                break;
            }
            break;
        }
        {
          GoalExprRep_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExprRep_12, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, GoalExprRep_12, 1) = ((MR_Box) (FileName_288));
          MR_hl_field(3, GoalExprRep_12, 2) = ((MR_Box) (LineNo_289));
          MR_hl_field(3, GoalExprRep_12, 3) = ((MR_Box) (BoundVarsRep_291));
          MR_hl_field(3, GoalExprRep_12, 4) = ((MR_Box) (AtomicGoalRep_292));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_127;
        MR_Word Builtin_129;
        MR_Word PredInfo_132;
        MR_Word ModuleSymName_133;
        MR_String ModuleName_134;
        MR_String PredName_135;
        MR_Word Var_166;
        MR_Word Args_189;
        MR_Word ArgsRep_190;
        MR_String FileName_252;
        MR_Integer LineNo_253;
        MR_Word BoundVars_254;
        MR_Word BoundVarsRep_255;
        MR_Word AtomicGoalRep_256;
        MR_Word Var_257;

        ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(GoalInfo_8, Instmap0_6, Info_5, &FileName_252, &LineNo_253, &BoundVars_254);
        {
          Var_257 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_257, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
          MR_hl_field(0, Var_257, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5));
          MR_hl_field(0, Var_257, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_257, 3) = ((MR_Box) (Info_5));
        }
        BoundVarsRep_255 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_257, BoundVars_254);
        PredId_127 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, 0))));
        Args_189 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, 2))));
        Builtin_129 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_7, 3))) & (MR_Integer) 1);
        Var_166 = ((MR_Word) ((MR_hl_field(0, Info_5, 0))));
        hlds__hlds_module__module_info_pred_info_3_p_0(Var_166, PredId_127, &PredInfo_132);
        ModuleSymName_133 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_132);
        ModuleName_134 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleSymName_133);
        PredName_135 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_132);
        ArgsRep_190 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_257, Args_189);
        switch (Builtin_129) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              AtomicGoalRep_256 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, AtomicGoalRep_256, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, AtomicGoalRep_256, 1) = ((MR_Box) (ModuleName_134));
              MR_hl_field(3, AtomicGoalRep_256, 2) = ((MR_Box) (PredName_135));
              MR_hl_field(3, AtomicGoalRep_256, 3) = ((MR_Box) (ArgsRep_190));
            }
            break;
          case (MR_Integer) 1:
            {
              AtomicGoalRep_256 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, AtomicGoalRep_256, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, AtomicGoalRep_256, 1) = ((MR_Box) (ModuleName_134));
              MR_hl_field(3, AtomicGoalRep_256, 2) = ((MR_Box) (PredName_135));
              MR_hl_field(3, AtomicGoalRep_256, 3) = ((MR_Box) (ArgsRep_190));
            }
            break;
        }
        {
          GoalExprRep_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExprRep_12, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, GoalExprRep_12, 1) = ((MR_Box) (FileName_252));
          MR_hl_field(3, GoalExprRep_12, 2) = ((MR_Box) (LineNo_253));
          MR_hl_field(3, GoalExprRep_12, 3) = ((MR_Box) (BoundVarsRep_255));
          MR_hl_field(3, GoalExprRep_12, 4) = ((MR_Box) (AtomicGoalRep_256));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_108;
            MR_Word Args_109;
            MR_Word ArgsRep_113;
            MR_String FileName_242;
            MR_Integer LineNo_243;
            MR_Word BoundVars_244;
            MR_Word BoundVarsRep_245;
            MR_Word AtomicGoalRep_246;
            MR_Word Var_247;

            ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(GoalInfo_8, Instmap0_6, Info_5, &FileName_242, &LineNo_243, &BoundVars_244);
            {
              Var_247 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_247, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
              MR_hl_field(0, Var_247, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4));
              MR_hl_field(0, Var_247, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_247, 3) = ((MR_Box) (Info_5));
            }
            BoundVarsRep_245 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_247, BoundVars_244);
            GenericCall_108 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 1))));
            Args_109 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 2))));
            ArgsRep_113 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_247, Args_109);
            switch (MR_tag((MR_Word) GenericCall_108)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word PredVar_114 = ((MR_Word) ((MR_hl_field(0, GenericCall_108, 0))));
                  MR_Integer PredVarRep_119;

                  PredVarRep_119 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, PredVar_114);
                  {
                    AtomicGoalRep_246 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, AtomicGoalRep_246, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, AtomicGoalRep_246, 1) = ((MR_Box) (PredVarRep_119));
                    MR_hl_field(3, AtomicGoalRep_246, 2) = ((MR_Box) (ArgsRep_113));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Num_120;
                  MR_Word Var_161 = ((MR_Word) ((MR_hl_field(1, GenericCall_108, 1))));
                  MR_Word Var_183 = ((MR_Word) ((MR_hl_field(1, GenericCall_108, 0))));
                  MR_Integer VarRep_184;

                  Num_120 = (MR_Integer) (Var_161);
                  VarRep_184 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var_183);
                  {
                    AtomicGoalRep_246 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, AtomicGoalRep_246, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, AtomicGoalRep_246, 1) = ((MR_Box) (VarRep_184));
                    MR_hl_field(3, AtomicGoalRep_246, 2) = ((MR_Box) (Num_120));
                    MR_hl_field(3, AtomicGoalRep_246, 3) = ((MR_Box) (ArgsRep_113));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String EventName_123 = ((MR_String) ((MR_hl_field(2, GenericCall_108, 0))));

                  {
                    AtomicGoalRep_246 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, AtomicGoalRep_246, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                    MR_hl_field(3, AtomicGoalRep_246, 1) = ((MR_Box) (EventName_123));
                    MR_hl_field(3, AtomicGoalRep_246, 2) = ((MR_Box) (ArgsRep_113));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Integer InputArgRep_125;
                  MR_Integer OutputArgRep_126;
                  MR_Word Var_162;
                  MR_Word Var_163;

                  succeeded = (ArgsRep_113 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    InputArgRep_125 = ((MR_Integer) ((MR_hl_field(1, ArgsRep_113, 0))));
                    Var_162 = ((MR_Word) ((MR_hl_field(1, ArgsRep_113, 1))));
                    succeeded = (Var_162 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      OutputArgRep_126 = ((MR_Integer) ((MR_hl_field(1, Var_162, 0))));
                      Var_163 = ((MR_Word) ((MR_hl_field(1, Var_162, 1))));
                      succeeded = (Var_163 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                  if (succeeded)
                    {
                      AtomicGoalRep_246 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, AtomicGoalRep_246, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, AtomicGoalRep_246, 1) = ((MR_Box) (OutputArgRep_126));
                      MR_hl_field(3, AtomicGoalRep_246, 2) = ((MR_Box) (InputArgRep_125));
                    }
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "cast/coerce arity != 2");
                      return;
                    }
                }
                break;
            }
            {
              GoalExprRep_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExprRep_12, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExprRep_12, 1) = ((MR_Box) (FileName_242));
              MR_hl_field(3, GoalExprRep_12, 2) = ((MR_Box) (LineNo_243));
              MR_hl_field(3, GoalExprRep_12, 3) = ((MR_Box) (BoundVarsRep_245));
              MR_hl_field(3, GoalExprRep_12, 4) = ((MR_Box) (AtomicGoalRep_246));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String FileName_66;
            MR_Integer LineNo_67;
            MR_Word BoundVars_68;
            MR_Word BoundVarsRep_69;
            MR_Word AtomicGoalRep_77;
            MR_Word Var_150;
            MR_Word Var_168;
            MR_Word ArgVarsRep_191;
            MR_Word Args_192;

            ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(GoalInfo_8, Instmap0_6, Info_5, &FileName_66, &LineNo_67, &BoundVars_68);
            {
              Var_150 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_150, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
              MR_hl_field(0, Var_150, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1));
              MR_hl_field(0, Var_150, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_150, 3) = ((MR_Box) (Info_5));
            }
            BoundVarsRep_69 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_150, BoundVars_68);
            Args_192 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 4))));
            {
              Var_168 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_168, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[1]));
              MR_hl_field(0, Var_168, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3));
              MR_hl_field(0, Var_168, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_168, 3) = ((MR_Box) (Var_150));
              MR_hl_field(0, Var_168, 4) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_2[2]));
            }
            ArgVarsRep_191 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_168, Args_192);
            {
              AtomicGoalRep_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, AtomicGoalRep_77, 1) = ((MR_Box) (ArgVarsRep_191));
            }
            {
              GoalExprRep_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExprRep_12, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExprRep_12, 1) = ((MR_Box) (FileName_66));
              MR_hl_field(3, GoalExprRep_12, 2) = ((MR_Box) (LineNo_67));
              MR_hl_field(3, GoalExprRep_12, 3) = ((MR_Box) (BoundVarsRep_69));
              MR_hl_field(3, GoalExprRep_12, 4) = ((MR_Box) (AtomicGoalRep_77));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_13 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_7, 1))) & (MR_Integer) 1);
            MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 2))));
            MR_Word FlattenParConjs_15 = ((MR_Unsigned) ((MR_hl_field(0, Info_5, 4))) & (MR_Integer) 1);
            MR_Word Goals_16;
            MR_Word GoalReps_17;

            switch (FlattenParConjs_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_144;

                  Goals_16 = Goals0_14;
                  {
                    Var_144 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_144, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[1]));
                    MR_hl_field(0, Var_144, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9));
                    MR_hl_field(0, Var_144, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_144, 3) = ((MR_Box) (ConjType_13));
                    MR_hl_field(0, Var_144, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mercury__require__expect_3_p_0(Var_144, (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "non-plain conjunction and declarative debugging");
                }
                break;
              case (MR_Integer) 0:
                hlds__goal_transform__flatten_conj_2_p_0(Goals0_14, &Goals_16);
                break;
            }
            ll_backend__prog_rep__conj_to_conj_rep_4_p_0(Info_5, Instmap0_6, Goals_16, &GoalReps_17);
            {
              GoalExprRep_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, GoalExprRep_12, 0) = ((MR_Box) (GoalReps_17));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_148;
            MR_Word Goals_173 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 1))));
            MR_Word GoalReps_174;

            {
              Var_148 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_148, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[2]));
              MR_hl_field(0, Var_148, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_10));
              MR_hl_field(0, Var_148, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_148, 3) = ((MR_Box) (Info_5));
              MR_hl_field(0, Var_148, 4) = ((MR_Box) (Instmap0_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[1]), Var_148, Goals_173, &GoalReps_174);
            {
              GoalExprRep_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, GoalExprRep_12, 0) = ((MR_Box) (GoalReps_174));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 1))));
            MR_Word CanFail_32 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_7, 2))) & (MR_Integer) 1);
            MR_Word Cases_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 3))));
            MR_Word CasesRep_34;
            MR_Word CanFailRep_35;
            MR_Integer VarRep_36;
            MR_Word Var_149;

            {
              Var_149 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_149, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[3]));
              MR_hl_field(0, Var_149, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_11));
              MR_hl_field(0, Var_149, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_149, 3) = ((MR_Box) (Info_5));
              MR_hl_field(0, Var_149, 4) = ((MR_Box) (Instmap0_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[2]), Var_149, Cases_33, &CasesRep_34);
            switch (CanFail_32) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                CanFailRep_35 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                CanFailRep_35 = (MR_Integer) 1;
                break;
            }
            VarRep_36 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var_31);
            {
              GoalExprRep_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, GoalExprRep_12, 0) = ((MR_Box) (VarRep_36));
              MR_hl_field(2, GoalExprRep_12, 1) = (MR_Box) ((MR_Unsigned) (CanFailRep_35));
              MR_hl_field(2, GoalExprRep_12, 2) = ((MR_Box) (CasesRep_34));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SubGoalInfo_39;
            MR_Word OuterDetism_40;
            MR_Word InnerDetism_41;
            MR_Word MaybeCut_42;
            MR_Word SubGoal_175 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 2))));
            MR_Word SubGoalRep_176;

            SubGoalInfo_39 = ((MR_Word) ((MR_hl_field(0, SubGoal_175, 1))));
            ll_backend__prog_rep__goal_to_goal_rep_4_p_0(Info_5, Instmap0_6, SubGoal_175, &SubGoalRep_176);
            OuterDetism_40 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_8);
            InnerDetism_41 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_39);
            succeeded = (InnerDetism_41 == OuterDetism_40);
            if (succeeded)
              MaybeCut_42 = (MR_Integer) 1;
            else
              MaybeCut_42 = (MR_Integer) 0;
            {
              GoalExprRep_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExprRep_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExprRep_12, 1) = ((MR_Box) (SubGoalRep_176));
              MR_hl_field(3, GoalExprRep_12, 2) = (MR_Box) ((MR_Unsigned) (MaybeCut_42));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Cond_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 2))));
            MR_Word Then_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 3))));
            MR_Word Else_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 4))));
            MR_Word CondGoalInfo_25 = ((MR_Word) ((MR_hl_field(0, Cond_21, 1))));
            MR_Word InstmapDelta_26;
            MR_Word InstmapAfterCond_27;
            MR_Word CondRep_28;
            MR_Word ThenRep_29;
            MR_Word ElseRep_30;

            InstmapDelta_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondGoalInfo_25);
            hlds__instmap__apply_instmap_delta_3_p_0(InstmapDelta_26, Instmap0_6, &InstmapAfterCond_27);
            ll_backend__prog_rep__goal_to_goal_rep_4_p_0(Info_5, Instmap0_6, Cond_21, &CondRep_28);
            ll_backend__prog_rep__goal_to_goal_rep_4_p_0(Info_5, InstmapAfterCond_27, Then_22, &ThenRep_29);
            ll_backend__prog_rep__goal_to_goal_rep_4_p_0(Info_5, Instmap0_6, Else_23, &ElseRep_30);
            {
              GoalExprRep_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExprRep_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, GoalExprRep_12, 1) = ((MR_Box) (CondRep_28));
              MR_hl_field(3, GoalExprRep_12, 2) = ((MR_Box) (ThenRep_29));
              MR_hl_field(3, GoalExprRep_12, 3) = ((MR_Box) (ElseRep_30));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "unexpected shorthand");
            return;
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *GoalRep_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExprRep_12));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (DetismRep_11));
    MR_hl_field(0, base, 2) = NULL;
  }
}

static MR_Integer MR_CALL 
ll_backend__prog_rep__var_to_var_rep_2_f_0(
  MR_Word Info_4,
  MR_Word Var_5)
{
  MR_Integer Num_6;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, Info_4, 3))));
  MR_Word Var_9;
  MR_Box conv0_Var_9;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), Var_8, ((MR_Box) (Var_5)), &conv0_Var_9);
  Var_9 = ((MR_Word) (conv0_Var_9));
  Num_6 = ((MR_Integer) ((MR_hl_field(0, Var_9, 0))));
  return Num_6;
}

static MR_String MR_CALL 
ll_backend__prog_rep__cons_id_rep_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "\044typeclass_info_cell_constructor";
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_3;
        MR_Word Var_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));

        SymName_3 = ((MR_Word) ((MR_hl_field(0, Var_6, 0))));
        if (((MR_tag((MR_Word) SymName_3)) == (MR_Integer) 1))
          HeadVar__2_2 = ((MR_String) ((MR_hl_field(1, SymName_3, 1))));
        else
          HeadVar__2_2 = ((MR_String) ((MR_hl_field(0, SymName_3, 0))));
      }
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "\044closure_cons";
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "\044type_info_cell_constructor";
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "\044tabling_info_const";
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_String) "\044table_io_entry_desc";
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_String) "\044deep_profiling_proc_layout";
          break;
        case (MR_Integer) 4:
          HeadVar__2_2 = (MR_String) "{}";
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
            MR_String _Suffix_10;

            parse_tree__parse_tree_out_cons_id__int_const_to_string_and_suffix_3_p_0(IntConst_8, &HeadVar__2_2, &_Suffix_10);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Float Float_11 = MR_unbox_float((MR_hl_field(3, HeadVar__1_1, 1)));

            HeadVar__2_2 = mercury__string__float_to_string_1_f_0(Float_11);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Char Char_12 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, 1)));

            HeadVar__2_2 = mercury__string__char_to_string_1_f_0(Char_12);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String String_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
            MR_String Var_15;

            Var_15 = mercury__string__f_43_43_2_f_0(String_13, (MR_String) "\"");
            HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_15);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 7);

            HeadVar__2_2 = parse_tree__prog_data__impl_defined_const_kind_to_str_1_f_0(IDCKind_17);
          }
          break;
        case (MR_Integer) 10:
          HeadVar__2_2 = (MR_String) "\044type_ctor_info_const";
          break;
        case (MR_Integer) 11:
          HeadVar__2_2 = (MR_String) "\044base_typeclass_info_const";
          break;
        case (MR_Integer) 12:
          HeadVar__2_2 = (MR_String) "\044type_info_const";
          break;
        case (MR_Integer) 13:
          HeadVar__2_2 = (MR_String) "\044typeclass_info_const";
          break;
        case (MR_Integer) 14:
          HeadVar__2_2 = (MR_String) "\044ground_term_const";
          break;
      }
      break;
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_ground_in_instmap_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(
  MR_Word GoalInfo_7,
  MR_Word Instmap0_8,
  MR_Word Info_9,
  MR_String * FileName_10,
  MR_Integer * LineNo_11,
  MR_Word * BoundVars_12)
{
  MR_bool succeeded;
  MR_Word Context_13;
  MR_String FileName0_14;
  MR_Word InstmapDelta_15;
  MR_Word ChangedVarsSet_16;
  MR_Word ChangedVars_17;
  MR_Word ModuleInfo_18;
  MR_Word VarTable_19;
  MR_Word Var_20;
  MR_String Var_39;

  Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_7);
  FileName0_14 = mercury__term_context__context_file_1_f_0(Context_13);
  Var_39 = ((MR_String) ((MR_hl_field(0, Info_9, 1))));
  succeeded = (strcmp(FileName0_14, Var_39) == 0);
  if (succeeded)
    *FileName_10 = (MR_String) "";
  else
    *FileName_10 = FileName0_14;
  *LineNo_11 = mercury__term_context__context_line_1_f_0(Context_13);
  InstmapDelta_15 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_7);
  hlds__instmap__instmap_delta_changed_vars_2_p_0(InstmapDelta_15, &ChangedVarsSet_16);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVarsSet_16, &ChangedVars_17);
  ModuleInfo_18 = ((MR_Word) ((MR_hl_field(0, Info_9, 0))));
  VarTable_19 = ((MR_Word) ((MR_hl_field(0, Info_9, 2))));
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (ModuleInfo_18));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (VarTable_19));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (Instmap0_8));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), Var_20, ChangedVars_17, BoundVars_12);
}

static void MR_CALL 
ll_backend__prog_rep__filter_input_args_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.filter_input_args\'/4", (MR_String) "mismatched lists");
        return;
      }
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.filter_input_args\'/4", (MR_String) "mismatched lists");
        return;
      }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word MaybeVar_23;
      MR_Word MaybeVars_24;
      MR_Word RHSInitInst_29 = ((MR_Word) ((MR_hl_field(0, Var_26, 2))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Info_1, 0))));

      succeeded = hlds__mode_test__init_inst_is_input_2_p_0(Var_31, RHSInitInst_29);
      if (succeeded)
        {
          MaybeVar_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeVar_23, 0) = ((MR_Box) (Var_21));
        }
      else
        MaybeVar_23 = (MR_Word) ((MR_Unsigned) 0U);
      ll_backend__prog_rep__filter_input_args_4_p_0(Info_1, Var_25, Vars_22, &MaybeVars_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MaybeVar_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (MaybeVars_24));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__lhs_finals_are_ground_3_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.lhs_finals_are_ground\'/3", (MR_String) "list length mismatch");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.lhs_finals_are_ground\'/3", (MR_String) "list length mismatch");
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word UnifyMode_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        MR_Word UnifyModes_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        MR_Word VarTable_20 = ((MR_Word) ((MR_hl_field(0, Info_1, 2))));
        MR_Word Type_21;
        MR_Word LHSFinalInst_23;
        MR_Word ModuleInfo_26;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_20, Var_38, &Type_21);
        LHSFinalInst_23 = ((MR_Word) ((MR_hl_field(0, UnifyMode_18, 1))));
        ModuleInfo_26 = ((MR_Word) ((MR_hl_field(0, Info_1, 0))));
        succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_26, Type_21, LHSFinalInst_23);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Var_37;
          next_value_of_HeadVar__3_3 = UnifyModes_19;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__prog_rep__detism_to_detism_rep_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((&ll_backend__prog_rep_vector_common_4[0 + HeadVar__1_1]))->ll_backend__prog_rep__vector_common_type_4_0__vct_4_f_0;
}

static void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_BytesCord_6;

  ll_backend__prog_rep__encode_oisu_proc_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_BytesCord_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_BytesCord_6));
}

void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Integer) 0;
    *HeadVar__4_4 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  }
  else
  {
    MR_Word Pair_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Pairs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Integer TailNumOISUTypes_11;
    MR_Word TailBytes_12;
    MR_Word ModuleName_13;
    MR_Word TypeCtor_14;
    MR_Word Preds_15;
    MR_Word TypeCtorSymName_16;
    MR_Word TypeCtorModuleName_18;
    MR_String TypeCtorName_19;

    ll_backend__prog_rep__encode_oisu_type_procs_4_p_0(HeadVar__1_1, Pairs_8, &TailNumOISUTypes_11, &TailBytes_12);
    hlds__hlds_module__module_info_get_name_2_p_0(HeadVar__1_1, &ModuleName_13);
    TypeCtor_14 = ((MR_Word) ((MR_hl_field(0, Pair_7, 0))));
    Preds_15 = ((MR_Word) ((MR_hl_field(0, Pair_7, 1))));
    TypeCtorSymName_16 = ((MR_Word) ((MR_hl_field(0, TypeCtor_14, 0))));
    if (((MR_tag((MR_Word) TypeCtorSymName_16)) == (MR_Integer) 1))
    {
      TypeCtorModuleName_18 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_16, 0))));
      TypeCtorName_19 = ((MR_String) ((MR_hl_field(1, TypeCtorSymName_16, 1))));
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.encode_oisu_type_procs\'/4", (MR_String) "unqualified type_ctor name");
        return;
      }
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeCtorModuleName_18, ModuleName_13);
    if (succeeded)
    {
      MR_Word TypeCtorNameBytes_21;
      MR_Word CreatorPreds_22;
      MR_Word MutatorPreds_23;
      MR_Word DestructorPreds_24;
      MR_Integer NumCreatorPreds_25;
      MR_Integer NumMutatorPreds_26;
      MR_Integer NumDestructorPreds_27;
      MR_Word NumCreatorPredsBytes_28;
      MR_Word NumMutatorPredsBytes_29;
      MR_Word NumDestructorPredsBytes_30;
      MR_Word CreatorPredBytes_31;
      MR_Word MutatorPredBytes_32;
      MR_Word DestructorPredBytes_33;
      MR_Word HeadBytes_34;
      MR_Word Var_37;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;

      mdbcomp__rtti_access__encode_len_string_2_p_0(TypeCtorName_19, &TypeCtorNameBytes_21);
      CreatorPreds_22 = ((MR_Word) ((MR_hl_field(0, Preds_15, 0))));
      MutatorPreds_23 = ((MR_Word) ((MR_hl_field(0, Preds_15, 1))));
      DestructorPreds_24 = ((MR_Word) ((MR_hl_field(0, Preds_15, 2))));
      mercury__list__length_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), CreatorPreds_22, &NumCreatorPreds_25);
      mercury__list__length_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), MutatorPreds_23, &NumMutatorPreds_26);
      mercury__list__length_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), DestructorPreds_24, &NumDestructorPreds_27);
      mdbcomp__rtti_access__encode_num_det_2_p_0(NumCreatorPreds_25, &NumCreatorPredsBytes_28);
      mdbcomp__rtti_access__encode_num_det_2_p_0(NumMutatorPreds_26, &NumMutatorPredsBytes_29);
      mdbcomp__rtti_access__encode_num_det_2_p_0(NumDestructorPreds_27, &NumDestructorPredsBytes_30);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[0]));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) (ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1));
        MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_37, 3) = ((MR_Box) (HeadVar__1_1));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[0]), Var_37, CreatorPreds_22, &CreatorPredBytes_31);
      mercury__list__map_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[0]), Var_37, MutatorPreds_23, &MutatorPredBytes_32);
      mercury__list__map_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[0]), Var_37, DestructorPreds_24, &DestructorPredBytes_33);
      Var_40 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeCtorNameBytes_21);
      Var_42 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), NumCreatorPredsBytes_28);
      Var_44 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CreatorPredBytes_31);
      Var_46 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), NumMutatorPredsBytes_29);
      Var_48 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MutatorPredBytes_32);
      Var_50 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), NumDestructorPredsBytes_30);
      Var_51 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), DestructorPredBytes_33);
      Var_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_50, Var_51);
      Var_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_48, Var_49);
      Var_45 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_46, Var_47);
      Var_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_44, Var_45);
      Var_41 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_42, Var_43);
      HeadBytes_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_40, Var_41);
      *HeadVar__3_3 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) TailNumOISUTypes_11);
      *HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadBytes_34, TailBytes_12);
    }
    else
    {
      *HeadVar__3_3 = TailNumOISUTypes_11;
      *HeadVar__4_4 = TailBytes_12;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__prog_rep____Unify____flatten_par_conjs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__prog_rep____Compare____flatten_par_conjs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__prog_rep____Unify____prog_rep_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__prog_rep____Compare____prog_rep_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__prog_rep____Unify____var_num_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__prog_rep____Compare____var_num_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__prog_rep__init(void)
{
}

void mercury__ll_backend__prog_rep__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_flatten_par_conjs_0);
  MR_register_type_ctor_info(&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0);
  MR_register_type_ctor_info(&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_var_num_map_0);
}

void mercury__ll_backend__prog_rep__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__prog_rep__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.prog_rep.
