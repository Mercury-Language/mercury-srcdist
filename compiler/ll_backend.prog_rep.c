/*
** Automatically generated from `prog_rep.m'
** by the Mercury compiler,
** version rotd-2020-09-29
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
#include "std_util.mih"
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
#include "backend_libs.proc_label.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "ll_backend.prog_rep_tables.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
  MR_bool ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11;
  jmp_buf ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4;
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30;
};

struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
  MR_bool ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11;
  jmp_buf ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4;
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30;
};

struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
  MR_bool ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11;
  jmp_buf ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4;
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_31;
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

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0;

static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1;

static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_value_ordered_flatten_par_conjs_0[2];

static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_name_ordered_flatten_par_conjs_0[2];

static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_flatten_par_conjs_0[2];

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

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
ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__317__1_2_p_0(
  MR_Word IncludeVarTypes_12,
  MR_Word HeadVar__2_35);

static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__453__1_2_p_0(
  MR_Word ConjType_13,
  MR_Word HeadVar__2_170);

static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__524__2_2_f_0(
  MR_Word HeadVar__1_264,
  MR_Word HeadVar__2_249);

static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__524__1_2_f_0(
  MR_Word HeadVar__1_161,
  MR_Word HeadVar__2_223);

static MR_Integer MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__594__1_3_f_0(
  MR_Word HeadVar__1_146,
  MR_Word HeadVar__2_147,
  MR_Word HeadVar__3_236);

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

static MR_bool MR_CALL 
ll_backend__prog_rep__lhs_final_is_ground_2_p_0(
  MR_Word Info_3,
  MR_Word UnifyMode_4);

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
ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(
  MR_Word ConsId_3,
  MR_Word * HeadVar__2_2);

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
ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(
  MR_Word VarNumRep_13,
  MR_Word VarTypes_14,
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
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_6(
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
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_5(
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
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_4(
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
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_3(
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
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0(
  MR_Word IncludeVarNameTable_11,
  MR_Word IncludeVarTypes_12,
  MR_Word VarTypes_13,
  MR_Word VarNumMap_14,
  MR_Word * VarNumRep_15,
  MR_Word * Bytes_16,
  MR_Word STATE_VARIABLE_StringTable_0_24,
  MR_Word * STATE_VARIABLE_StringTable_25,
  MR_Word STATE_VARIABLE_TypeTable_0_26,
  MR_Word * STATE_VARIABLE_TypeTable_27);

static void MR_CALL 
ll_backend__prog_rep__conj_to_conj_rep_4_p_0(
  MR_Word Info_1,
  MR_Word Instmap0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
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

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_3[6][6];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_5[5][5];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_6[5][7];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_7[1][11];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_8[1][15];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_9[3][8];


/* sealed */ struct ll_backend__prog_rep__vector_common_type_4_0_s {
  const MR_Word ll_backend__prog_rep__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct ll_backend__prog_rep__vector_common_type_4_0_s ll_backend__prog_rep_vector_common_4[8];

/* sealed */ struct ll_backend__prog_rep__vector_common_type_10_0_s {
  const MR_String ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct ll_backend__prog_rep__vector_common_type_10_0_s ll_backend__prog_rep_vector_common_10[42];



static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_1[3])),
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[0])),
    ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[3])),
    ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[0])),
    ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[0])),
    ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[0])),
    ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[4])),
    ((MR_Box) (ll_backend__prog_rep__case_to_case_rep_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[4])),
    ((MR_Box) (ll_backend__prog_rep__encode_case_rep_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_3[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__prog_rep__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_5[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_maybe_include_var_types_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_maybe_include_var_types_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_6[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep____vpti_func_2__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
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

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_7[1][11] = {
  /* row 0 */
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

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_8[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_num_rep_0)),
    ((MR_Box) (&ll_backend__prog_rep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
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

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_9[3][8] = {
  /* row 0 */
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
  /* row 1 */
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
  /* row 2 */
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


static /* final */ const struct ll_backend__prog_rep__vector_common_type_4_0_s ll_backend__prog_rep_vector_common_4[8] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 3 },
  /* row 3 */   {     (MR_Integer) 2 },
  /* row 4 */   {     (MR_Integer) 5 },
  /* row 5 */   {     (MR_Integer) 4 },
  /* row 6 */   {     (MR_Integer) 6 },
  /* row 7 */   {     (MR_Integer) 7 },
};

static /* final */ const struct ll_backend__prog_rep__vector_common_type_10_0_s ll_backend__prog_rep_vector_common_10[42] = {
  /* row 0 */   {     (MR_String) "" },
  /* row 1 */   {     (MR_String) "ActivationPtr" },
  /* row 2 */   {     (MR_String) "MethodNum" },
  /* row 3 */   {     (MR_String) "MiddleCSD" },
  /* row 4 */   {     (MR_String) "ProcStaticLayout" },
  /* row 5 */   {     (MR_String) "SiteNum" },
  /* row 6 */   {     (MR_String) "TopCSD" },
  /* row 7 */   {     (MR_String) "V_" },
  /* row 8 */   {     (MR_String) "HeadVar__" },
  /* row 9 */   {     (MR_String) "TypeClassInfo_for_" },
  /* row 10 */   {     (MR_String) "TypeInfo_" },
  /* row 11 */   {     (MR_String) "TypeCtorInfo_" },
  /* row 12 */   {     (MR_String) "STATE_VARIABLE_" },
  /* row 13 */   {     (MR_String) "DCG_" },
  /* row 14 */   {     (MR_String) "" },
  /* row 15 */   {     (MR_String) "ActivationPtr" },
  /* row 16 */   {     (MR_String) "MethodNum" },
  /* row 17 */   {     (MR_String) "MiddleCSD" },
  /* row 18 */   {     (MR_String) "ProcStaticLayout" },
  /* row 19 */   {     (MR_String) "SiteNum" },
  /* row 20 */   {     (MR_String) "TopCSD" },
  /* row 21 */   {     (MR_String) "V_" },
  /* row 22 */   {     (MR_String) "HeadVar__" },
  /* row 23 */   {     (MR_String) "TypeClassInfo_for_" },
  /* row 24 */   {     (MR_String) "TypeInfo_" },
  /* row 25 */   {     (MR_String) "TypeCtorInfo_" },
  /* row 26 */   {     (MR_String) "STATE_VARIABLE_" },
  /* row 27 */   {     (MR_String) "DCG_" },
  /* row 28 */   {     (MR_String) "" },
  /* row 29 */   {     (MR_String) "ActivationPtr" },
  /* row 30 */   {     (MR_String) "MethodNum" },
  /* row 31 */   {     (MR_String) "MiddleCSD" },
  /* row 32 */   {     (MR_String) "ProcStaticLayout" },
  /* row 33 */   {     (MR_String) "SiteNum" },
  /* row 34 */   {     (MR_String) "TopCSD" },
  /* row 35 */   {     (MR_String) "V_" },
  /* row 36 */   {     (MR_String) "HeadVar__" },
  /* row 37 */   {     (MR_String) "TypeClassInfo_for_" },
  /* row 38 */   {     (MR_String) "TypeInfo_" },
  /* row 39 */   {     (MR_String) "TypeCtorInfo_" },
  /* row 40 */   {     (MR_String) "STATE_VARIABLE_" },
  /* row 41 */   {     (MR_String) "DCG_" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
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

static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_value_ordered_flatten_par_conjs_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001)),
  (MR_String) "ll_backend.prog_rep",
  (MR_String) "flatten_par_conjs",
  {     ll_backend__prog_rep__ll_backend__prog_rep__enum_name_ordered_flatten_par_conjs_0 },
  {     ll_backend__prog_rep__ll_backend__prog_rep__enum_value_ordered_flatten_par_conjs_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_flatten_par_conjs_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
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
  (MR_PseudoTypeInfo) (&ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_num_rep_0),
  (MR_PseudoTypeInfo) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_flatten_par_conjs_0)
};

static const MR_ConstString ll_backend__prog_rep__ll_backend__prog_rep__field_names_prog_rep_info_0_0[6] = {
  (MR_String) "pri_module_info",
  (MR_String) "pri_filename",
  (MR_String) "pri_vartypes",
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

static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0[1] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0
};

static const MR_DuPtagLayout ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_name_ordered_prog_rep_info_0[1] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0
};

static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_prog_rep_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001)),
  (MR_String) "ll_backend.prog_rep",
  (MR_String) "prog_rep_info",
  {     ll_backend__prog_rep__ll_backend__prog_rep__du_name_ordered_prog_rep_info_0 },
  {     ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_prog_rep_info_0
};

const MR_TypeCtorInfo_Struct ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_var_num_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__prog_rep____Unify____var_num_map_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep____Compare____var_num_map_0_0_10001)),
  (MR_String) "ll_backend.prog_rep",
  (MR_String) "var_num_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__317__1_2_p_0(
  MR_Word IncludeVarTypes_12,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded = (IncludeVarTypes_12 == HeadVar__2_35);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__453__1_2_p_0(
  MR_Word ConjType_13,
  MR_Word HeadVar__2_170)
{
  {
    MR_bool succeeded = (ConjType_13 == HeadVar__2_170);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__524__2_2_f_0(
  MR_Word HeadVar__1_264,
  MR_Word HeadVar__2_249)
{
  {
    MR_Word HeadVar__3_250;

    HeadVar__3_250 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_264, HeadVar__2_249);
    return HeadVar__3_250;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__524__1_2_f_0(
  MR_Word HeadVar__1_161,
  MR_Word HeadVar__2_223)
{
  {
    MR_Word HeadVar__3_224;

    HeadVar__3_224 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_161, HeadVar__2_223);
    return HeadVar__3_224;
  }
}

static MR_Integer MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__594__1_3_f_0(
  MR_Word HeadVar__1_146,
  MR_Word HeadVar__2_147,
  MR_Word HeadVar__3_236)
{
  {
    MR_Integer HeadVar__4_237;
    MR_Box conv0_HeadVar__4_237;

    conv0_HeadVar__4_237 = mercury__std_util__compose_3_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), HeadVar__1_146, HeadVar__2_147, ((MR_Box) (HeadVar__3_236)));
    HeadVar__4_237 = ((MR_Integer) (conv0_HeadVar__4_237));
    return HeadVar__4_237;
  }
}

void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0(
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
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
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

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
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
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
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
}

MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0(
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
      MR_Word TypeCtorInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          TypeCtorInfo_18_18 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_18_18, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
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
}

void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0(
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
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_head_var_func_4_f_0(
  MR_Word Info_6,
  MR_Word InitialInstmap_7,
  MR_Word InstmapDelta_8,
  MR_Word Var_9)
{
  {
    MR_bool succeeded;
    MR_Word Bytes_10;
    MR_Word VarBytes_11;
    MR_Word ModuleInfo_12;
    MR_Word InitialInst_13;
    MR_Word FinalInst_15;
    MR_Integer Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;
    MR_Word Var_19;
    MR_Integer Var_20;
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3))));
    MR_Word Var_33;
    MR_Word VarNumRep_44;
    MR_Word InstRep_55;
    MR_Word InstRep_60;
    MR_Box conv0_Var_33;
    MR_Word FinalInstPrime_14;

    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), Var_32, ((MR_Box) (Var_9)), &conv0_Var_33);
    Var_33 = ((MR_Word) (conv0_Var_33));
    Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
    ModuleInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0))));
    VarNumRep_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);
    switch (VarNumRep_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          VarBytes_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), VarBytes_11, 0) = ((MR_Box) (Var_16));
          MR_hl_field(MR_mktag(1), VarBytes_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 1:
        mdbcomp__rtti_access__encode_short_det_2_p_0(Var_16, &VarBytes_11);
        break;
      case (MR_Integer) 2:
        mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_16, &VarBytes_11);
        break;
    }
    hlds__instmap__instmap_lookup_var_3_p_0(InitialInstmap_7, Var_9, &InitialInst_13);
    succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstmapDelta_8, Var_9, &FinalInstPrime_14);
    if (succeeded)
      FinalInst_15 = FinalInstPrime_14;
    else
      FinalInst_15 = InitialInst_13;
    if ((InitialInst_13 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) InitialInst_13)) == (MR_Integer) 1))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
      InstRep_55 = (MR_Integer) 0;
    else
    {
      succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_12, InitialInst_13);
      if (succeeded)
        InstRep_55 = (MR_Integer) 1;
      else
        InstRep_55 = (MR_Integer) 2;
    }
    mdbcomp__program_representation__inst_representation_2_p_0(InstRep_55, &Var_18);
    if ((FinalInst_15 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) FinalInst_15)) == (MR_Integer) 1))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
      InstRep_60 = (MR_Integer) 0;
    else
    {
      succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_12, FinalInst_15);
      if (succeeded)
        InstRep_60 = (MR_Integer) 1;
      else
        InstRep_60 = (MR_Integer) 2;
    }
    mdbcomp__program_representation__inst_representation_2_p_0(InstRep_60, &Var_20);
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    Bytes_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_11, Var_17);
    return Bytes_10;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(
  MR_Word Info_4,
  MR_Word MaybeVar_5)
{
  {
    MR_Word Bytes_6;

    if ((MaybeVar_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Bytes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__prog_rep_scalar_common_1[7]));
    else
    {
      MR_Integer Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeVar_5, (MR_Integer) 0))));
      MR_Word Var_11;
      MR_Word VarNumRep_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);

      switch (VarNumRep_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_7));
            MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 1:
          mdbcomp__rtti_access__encode_short_det_2_p_0(Var_7, &Var_11);
          break;
        case (MR_Integer) 2:
          mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_7, &Var_11);
          break;
      }
      {
        Bytes_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Bytes_6, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), Bytes_6, 1) = ((MR_Box) (Var_11));
      }
    }
    return Bytes_6;
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(
  MR_Word ConsIdArity_5,
  MR_Word * ConsIdBytes_6,
  MR_Word STATE_VARIABLE_StringTable_0_12,
  MR_Word * STATE_VARIABLE_StringTable_13)
{
  {
    MR_String ConsId_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), ConsIdArity_5, (MR_Integer) 0))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConsIdArity_5, (MR_Integer) 1))));
    MR_Word FunctorBytes_10;
    MR_Word ArityBytes_11;
    MR_Integer Index_21;

    ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ConsId_8, &Index_21, STATE_VARIABLE_StringTable_0_12, STATE_VARIABLE_StringTable_13);
    mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_21, &FunctorBytes_10);
    mdbcomp__rtti_access__encode_short_det_2_p_0(Arity_9, &ArityBytes_11);
    *ConsIdBytes_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FunctorBytes_10, ArityBytes_11);
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__lhs_final_is_ground_2_p_0(
  MR_Word Info_3,
  MR_Word UnifyMode_4)
{
  {
    MR_bool succeeded;
    MR_Word LHSFinalInst_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_4, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));

    succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(Var_9, LHSFinalInst_6);
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ConsIdBytes_6;
    MR_Word conv0_STATE_VARIABLE_StringTable_13;

    ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_ConsIdBytes_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_StringTable_13);
    *wrapper_arg_2 = ((MR_Box) (conv1_ConsIdBytes_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StringTable_13));
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0(
  MR_Word Info_6,
  MR_Word Case_7,
  MR_Word * Bytes_8,
  MR_Word STATE_VARIABLE_StringTable_0_16,
  MR_Word * STATE_VARIABLE_StringTable_17)
{
  {
    MR_Word MainConsId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 0))));
    MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 1))));
    MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 2))));
    MR_Word GoalBytes_13;
    MR_Word MainConsIdBytes_14;
    MR_Word OtherConsIdsByteLists_15;
    MR_Word STATE_VARIABLE_StringTable_18_18;
    MR_Word STATE_VARIABLE_StringTable_19_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_String ConsId_39;
    MR_Integer Arity_40;
    MR_Word FunctorBytes_41;
    MR_Word ArityBytes_42;
    MR_Integer Index_50;
    MR_Integer Var_54;
    MR_Box conv2_STATE_VARIABLE_StringTable_17;

    ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_6, Goal_12, &GoalBytes_13, STATE_VARIABLE_StringTable_0_16, &STATE_VARIABLE_StringTable_18_18);
    ConsId_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), MainConsId_10, (MR_Integer) 0))));
    Arity_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MainConsId_10, (MR_Integer) 1))));
    ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ConsId_39, &Index_50, STATE_VARIABLE_StringTable_18_18, &STATE_VARIABLE_StringTable_19_19);
    mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_50, &FunctorBytes_41);
    mdbcomp__rtti_access__encode_short_det_2_p_0(Arity_40, &ArityBytes_42);
    MainConsIdBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FunctorBytes_41, ArityBytes_42);
    mercury__list__map_foldl_5_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[8]), OtherConsIds_11, &OtherConsIdsByteLists_15, ((MR_Box) (STATE_VARIABLE_StringTable_19_19)), &conv2_STATE_VARIABLE_StringTable_17);
    *STATE_VARIABLE_StringTable_17 = ((MR_Word) (conv2_STATE_VARIABLE_StringTable_17));
    Var_54 = mercury__list__length_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0), OtherConsIds_11);
    mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_54, &Var_23);
    Var_25 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), OtherConsIdsByteLists_15);
    Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_25, GoalBytes_13);
    Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_23, Var_24);
    *Bytes_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MainConsIdBytes_14, Var_22);
  }
}

static void MR_CALL 
ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(
  MR_Word ConsId_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_String ConsIdName_4;
    MR_Integer Arity_5;
    MR_Word MaybeArity_6;

    ConsIdName_4 = ll_backend__prog_rep__cons_id_rep_1_f_0(ConsId_3);
    MaybeArity_6 = parse_tree__prog_util__cons_id_maybe_arity_1_f_0(ConsId_3);
    if ((MaybeArity_6 == (MR_Word) ((MR_Unsigned) 0U)))
      Arity_5 = (MR_Integer) 0;
    else
      Arity_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArity_6, (MR_Integer) 0))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsIdName_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_5));
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0(
  MR_Word Info_5,
  MR_Word Instmap_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Word FirstConsId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word OtherConsIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word FirstConsIdRep_10;
    MR_Word OtherConsIdsRep_11;
    MR_Word GoalRep_12;
    MR_String ConsIdName_19;
    MR_Integer Arity_20;
    MR_Word MaybeArity_21;

    ll_backend__prog_rep__goal_to_goal_rep_4_p_0(Info_5, Instmap_6, Goal_9, &GoalRep_12);
    ConsIdName_19 = ll_backend__prog_rep__cons_id_rep_1_f_0(FirstConsId_7);
    MaybeArity_21 = parse_tree__prog_util__cons_id_maybe_arity_1_f_0(FirstConsId_7);
    if ((MaybeArity_21 == (MR_Word) ((MR_Unsigned) 0U)))
      Arity_20 = (MR_Integer) 0;
    else
      Arity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeArity_21, (MR_Integer) 0))));
    {
      FirstConsIdRep_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FirstConsIdRep_10, 0) = ((MR_Box) (ConsIdName_19));
      MR_hl_field(MR_mktag(0), FirstConsIdRep_10, 1) = ((MR_Box) (Arity_20));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[7]), OtherConsIds_8, &OtherConsIdsRep_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstConsIdRep_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIdsRep_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GoalRep_12));
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(
  MR_Word VarNumRep_13,
  MR_Word VarTypes_14,
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
  {
    MR_Integer VarNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_String VarName_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Type_22;
    MR_Word VarBytes_23;
    MR_Word VarNameBytes_24;
    MR_Word TypeBytes_25;
    MR_Word STATE_VARIABLE_StringTable_37_37;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Integer Index_49;
    MR_Integer Index_59;

    *STATE_VARIABLE_NumVars_27 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumVars_0_26 + (MR_Unsigned) 1);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_14, Var_15, &Type_22);
    switch (VarNumRep_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          VarBytes_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), VarBytes_23, 0) = ((MR_Box) (VarNum_16));
          MR_hl_field(MR_mktag(1), VarBytes_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 1:
        mdbcomp__rtti_access__encode_short_det_2_p_0(VarNum_16, &VarBytes_23);
        break;
      case (MR_Integer) 2:
        mdbcomp__rtti_access__encode_int32_det_2_p_0(VarNum_16, &VarBytes_23);
        break;
    }
    ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(VarName_17, &Index_49, STATE_VARIABLE_StringTable_0_30, &STATE_VARIABLE_StringTable_37_37);
    mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_49, &VarNameBytes_24);
    ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(Type_22, &Index_59, STATE_VARIABLE_StringTable_37_37, STATE_VARIABLE_StringTable_31, STATE_VARIABLE_TypeTable_0_32, STATE_VARIABLE_TypeTable_33);
    mdbcomp__rtti_access__encode_num_det_2_p_0(Index_59, &TypeBytes_25);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeBytes_25, STATE_VARIABLE_VarNameTableBytes_0_28);
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNameBytes_24, Var_42);
    *STATE_VARIABLE_VarNameTableBytes_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_23, Var_41);
  }
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
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4, 1);
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30);
    if ((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(env_ptr);
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4) == 0)
      {
        {
          MR_Integer slot_5 = (MR_Integer) 0;

          do
          {
            (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30 = ((&ll_backend__prog_rep_vector_common_10[35 + slot_5]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
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
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s env;

    {
      MR_Integer VarNum_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      (env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
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
        MR_Integer Index_36;

        *STATE_VARIABLE_NumVars_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumVars_0_17 + (MR_Unsigned) 1);
        mdbcomp__rtti_access__encode_int32_det_2_p_0(VarNum_10, &VarBytes_15);
        ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &Index_36, STATE_VARIABLE_StringTable_0_21, STATE_VARIABLE_StringTable_22);
        mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_36, &VarNameBytes_16);
        Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNameBytes_16, STATE_VARIABLE_VarNameTableBytes_0_19);
        *STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_15, Var_27);
      }
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
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4, 1);
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30);
    if ((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(env_ptr);
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4) == 0)
      {
        {
          MR_Integer slot_5 = (MR_Integer) 0;

          do
          {
            (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30 = ((&ll_backend__prog_rep_vector_common_10[21 + slot_5]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
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
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s env;

    {
      MR_Integer VarNum_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      (env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
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
        MR_Integer Index_36;

        *STATE_VARIABLE_NumVars_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumVars_0_17 + (MR_Unsigned) 1);
        mdbcomp__rtti_access__encode_short_det_2_p_0(VarNum_10, &VarBytes_15);
        ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &Index_36, STATE_VARIABLE_StringTable_0_21, STATE_VARIABLE_StringTable_22);
        mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_36, &VarNameBytes_16);
        Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNameBytes_16, STATE_VARIABLE_VarNameTableBytes_0_19);
        *STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_15, Var_27);
      }
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
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4, 1);
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_31);
    if ((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(env_ptr);
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4) == 0)
      {
        {
          MR_Integer slot_5 = (MR_Integer) 0;

          do
          {
            (env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_31 = ((&ll_backend__prog_rep_vector_common_10[7 + slot_5]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
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
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s env;

    {
      MR_Integer VarNum_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      (env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
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
        MR_Integer Index_37;

        *STATE_VARIABLE_NumVars_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumVars_0_17 + (MR_Unsigned) 1);
        {
          VarBytes_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), VarBytes_15, 0) = ((MR_Box) (VarNum_10));
          MR_hl_field(MR_mktag(1), VarBytes_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &Index_37, STATE_VARIABLE_StringTable_0_21, STATE_VARIABLE_StringTable_22);
        mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_37, &VarNameBytes_16);
        Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarNameBytes_16, STATE_VARIABLE_VarNameTableBytes_0_19);
        *STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_15, Var_28);
      }
    }
  }
}

static MR_Integer MR_CALL 
ll_backend__prog_rep__max_var_num_3_f_0(
  MR_Word HeadVar__1_5,
  MR_Word HeadVar__2_2,
  MR_Integer VarNum2_8)
{
  {
    MR_Integer Max_9;

    Max_9 = ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(HeadVar__2_2, VarNum2_8);
    return Max_9;
  }
}

static MR_Integer MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(
  MR_Word HeadVar__2_2,
  MR_Integer VarNum2_8)
{
  {
    MR_Integer Max_9;
    MR_Integer VarNum1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    Max_9 = mercury__int__max_2_f_0(VarNum1_6, VarNum2_8);
    return Max_9;
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_oisu_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_Word * BytesCord_6)
{
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
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_8, &Procs_9);
    succeeded = (Procs_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Procs_9, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Procs_9, (MR_Integer) 1))));
      succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word ProcLabel_12;

      ProcLabel_12 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_4, PredId_5, ProcId_10);
      if (((MR_tag((MR_Word) ProcLabel_12)) == (MR_Integer) 0))
      {
        MR_Word DefModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_12, (MR_Integer) 0))));
        MR_Word PredOrFunc_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcLabel_12, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word DeclModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_12, (MR_Integer) 2))));
        MR_String PredName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_12, (MR_Integer) 3))));
        MR_Integer Arity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_12, (MR_Integer) 4))));
        MR_Integer ModeNum_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_12, (MR_Integer) 5))));
        MR_Integer KindByte_27;
        MR_Word DeclModuleNameBytes_28;
        MR_Word DefModuleNameBytes_29;
        MR_Word PredNameBytes_30;
        MR_Word ArityBytes_31;
        MR_Word ModeNumBytes_32;
        MR_String Var_55;
        MR_String Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;

        switch (PredOrFunc_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            KindByte_27 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            KindByte_27 = (MR_Integer) 0;
            break;
        }
        Var_55 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DeclModuleName_23);
        mdbcomp__rtti_access__encode_len_string_2_p_0(Var_55, &DeclModuleNameBytes_28);
        Var_56 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DefModuleName_21);
        mdbcomp__rtti_access__encode_len_string_2_p_0(Var_56, &DefModuleNameBytes_29);
        mdbcomp__rtti_access__encode_len_string_2_p_0(PredName_24, &PredNameBytes_30);
        mdbcomp__rtti_access__encode_num_det_2_p_0(Arity_25, &ArityBytes_31);
        mdbcomp__rtti_access__encode_num_det_2_p_0(ModeNum_26, &ModeNumBytes_32);
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (KindByte_27));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (DeclModuleNameBytes_28));
        }
        Var_57 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_58);
        Var_60 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), DefModuleNameBytes_29);
        Var_62 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PredNameBytes_30);
        Var_64 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArityBytes_31);
        Var_65 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ModeNumBytes_32);
        Var_63 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_64, Var_65);
        Var_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_62, Var_63);
        Var_59 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_60, Var_61);
        *BytesCord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_57, Var_59);
      }
      else
      {
        MR_Word SpecialPredId_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ProcLabel_12, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_Word TypeModuleName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcLabel_12, (MR_Integer) 2))));
        MR_String TypeName_35 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_12, (MR_Integer) 3))));
        MR_Integer TypeArity_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_12, (MR_Integer) 4))));
        MR_Word TypeCtor_37;
        MR_Word TypeNameBytes_38;
        MR_Word TypeModuleNameBytes_39;
        MR_Word TypeArityBytes_40;
        MR_Word Var_41;
        MR_String Var_42;
        MR_String Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word DefModuleName_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcLabel_12, (MR_Integer) 0))));
        MR_String PredName_67;
        MR_Integer ModeNum_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_12, (MR_Integer) 5))));
        MR_Word DefModuleNameBytes_70;
        MR_Word PredNameBytes_71;
        MR_Word ModeNumBytes_72;

        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (TypeModuleName_34));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (TypeName_35));
        }
        {
          TypeCtor_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtor_37, 0) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(0), TypeCtor_37, 1) = ((MR_Box) (TypeArity_36));
        }
        PredName_67 = hlds__special_pred__special_pred_name_2_f_0(SpecialPredId_33, TypeCtor_37);
        mdbcomp__rtti_access__encode_len_string_2_p_0(TypeName_35, &TypeNameBytes_38);
        Var_42 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeModuleName_34);
        mdbcomp__rtti_access__encode_len_string_2_p_0(Var_42, &TypeModuleNameBytes_39);
        Var_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(DefModuleName_66);
        mdbcomp__rtti_access__encode_len_string_2_p_0(Var_43, &DefModuleNameBytes_70);
        mdbcomp__rtti_access__encode_len_string_2_p_0(PredName_67, &PredNameBytes_71);
        mdbcomp__rtti_access__encode_num_det_2_p_0(TypeArity_36, &TypeArityBytes_40);
        mdbcomp__rtti_access__encode_num_det_2_p_0(ModeNum_68, &ModeNumBytes_72);
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (TypeNameBytes_38));
        }
        Var_44 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_45);
        Var_47 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeModuleNameBytes_39);
        Var_49 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), DefModuleNameBytes_70);
        Var_51 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PredNameBytes_71);
        Var_53 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeArityBytes_40);
        Var_54 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ModeNumBytes_72);
        Var_52 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_53, Var_54);
        Var_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_51, Var_52);
        Var_48 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_49, Var_50);
        Var_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_47, Var_48);
        *BytesCord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_44, Var_46);
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.encode_oisu_proc\'/3", (MR_String) "OISU pred should have exactly one proc");
        return;
      }
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Bytes_10;

    conv0_Bytes_10 = ll_backend__prog_rep__encode_head_var_func_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Bytes_10));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0(
  MR_Word HeadVars_15,
  MR_Word Goal_16,
  MR_Word InstMap0_17,
  MR_Word VarTypes_18,
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
  {
    MR_Word GoalInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_16, (MR_Integer) 1))));
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
    MR_Word STATE_VARIABLE_StringTable_44_44;
    MR_Word STATE_VARIABLE_StringTable_47_47;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Integer Var_55;
    MR_Integer Var_56;
    MR_Integer Index_64;
    MR_Word GoalRep_73;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Integer Var_90;

    Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_28);
    mercury__term__context_file_2_p_0(Context_29, &FileName_30);
    ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0(IncludeVarNameTable_21, IncludeVarTypes_22, VarTypes_18, VarNumMap_19, &VarNumRep_31, &VarNameTableBytes_32, STATE_VARIABLE_StringTable_0_40, &STATE_VARIABLE_StringTable_44_44, STATE_VARIABLE_TypeTable_0_42, STATE_VARIABLE_TypeTable_43);
    {
      Info_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_33, 0) = ((MR_Box) (ModuleInfo_20));
      MR_hl_field(MR_mktag(0), Info_33, 1) = ((MR_Box) (FileName_30));
      MR_hl_field(MR_mktag(0), Info_33, 2) = ((MR_Box) (VarTypes_18));
      MR_hl_field(MR_mktag(0), Info_33, 3) = ((MR_Box) (VarNumMap_19));
      MR_hl_field(MR_mktag(0), Info_33, 4) = (MR_Box) (((((MR_Unsigned) (VarNumRep_31) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
    InstmapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_28);
    ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(FileName_30, &Index_64, STATE_VARIABLE_StringTable_44_44, &STATE_VARIABLE_StringTable_47_47);
    mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_64, &FileNameBytes_35);
    ll_backend__prog_rep__goal_to_goal_rep_4_p_0(Info_33, InstMap0_17, Goal_16, &GoalRep_73);
    ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_33, GoalRep_73, &GoalBytes_36, STATE_VARIABLE_StringTable_47_47, STATE_VARIABLE_StringTable_41);
    DetismByte_37 = hlds__code_model__represent_determinism_1_f_0(ProcDetism_23);
    Var_90 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), HeadVars_15);
    mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_90, &Var_79);
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (Info_33));
      MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (InstMap0_17));
      MR_hl_field(MR_mktag(0), Var_82, 5) = ((MR_Box) (InstmapDelta_34));
    }
    Var_81 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), Var_82, HeadVars_15);
    Var_80 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_81);
    Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_79, Var_80);
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (DetismByte_37));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
}

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_Bytes_8;
    MR_Word conv6_STATE_VARIABLE_StringTable_17;

    ll_backend__prog_rep__encode_case_rep_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv7_Bytes_8, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_StringTable_17);
    *wrapper_arg_2 = ((MR_Box) (conv7_Bytes_8));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_StringTable_17));
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Bytes_10;
    MR_Word conv3_STATE_VARIABLE_StringTable_72;

    ll_backend__prog_rep__encode_goal_rep_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Bytes_10, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_StringTable_72);
    *wrapper_arg_2 = ((MR_Box) (conv4_Bytes_10));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_StringTable_72));
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Bytes_10;
    MR_Word conv0_STATE_VARIABLE_StringTable_72;

    ll_backend__prog_rep__encode_goal_rep_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Bytes_10, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_StringTable_72);
    *wrapper_arg_2 = ((MR_Box) (conv1_Bytes_10));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_StringTable_72));
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0(
  MR_Word Info_6,
  MR_Word HeadVar__2_2,
  MR_Word * Bytes_10,
  MR_Word STATE_VARIABLE_StringTable_0_71,
  MR_Word * STATE_VARIABLE_StringTable_72)
{
  {
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Detism_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word ExprBytes_14;
    MR_Integer DetismByte_70;
    MR_Word Var_206;

    switch (MR_tag((MR_Word) GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word GoalReps_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalExpr_7, (MR_Integer) 0))));
          MR_Word ConjBytesList_13;
          MR_Word Var_197;
          MR_Word Var_199;
          MR_Integer Var_200;
          MR_Word Var_203;
          MR_Word Var_204;
          MR_Word Var_205;
          MR_Box conv2_STATE_VARIABLE_StringTable_72;

          {
            Var_197 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_197, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), Var_197, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_197, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_197, 3) = ((MR_Box) (Info_6));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[1]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), Var_197, GoalReps_12, &ConjBytesList_13, ((MR_Box) (STATE_VARIABLE_StringTable_0_71)), &conv2_STATE_VARIABLE_StringTable_72);
          *STATE_VARIABLE_StringTable_72 = ((MR_Word) (conv2_STATE_VARIABLE_StringTable_72));
          Var_200 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 0);
          {
            Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (Var_200));
            MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_204 = ll_backend__prog_rep__encode_length_func_1_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[1]), GoalReps_12);
          Var_205 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConjBytesList_13);
          Var_203 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_204, Var_205);
          ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_199, Var_203);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DisjBytesList_15;
          MR_Word Var_188;
          MR_Word Var_190;
          MR_Integer Var_191;
          MR_Word Var_194;
          MR_Word Var_195;
          MR_Word Var_196;
          MR_Word GoalReps_208 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 0))));
          MR_Box conv5_STATE_VARIABLE_StringTable_72;

          {
            Var_188 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_188, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), Var_188, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_188, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_188, 3) = ((MR_Box) (Info_6));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[1]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), Var_188, GoalReps_208, &DisjBytesList_15, ((MR_Box) (STATE_VARIABLE_StringTable_0_71)), &conv5_STATE_VARIABLE_StringTable_72);
          *STATE_VARIABLE_StringTable_72 = ((MR_Word) (conv5_STATE_VARIABLE_StringTable_72));
          Var_191 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 1);
          {
            Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (Var_191));
            MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_195 = ll_backend__prog_rep__encode_length_func_1_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[1]), GoalReps_208);
          Var_196 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), DisjBytesList_15);
          Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_195, Var_196);
          ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_190, Var_194);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer SwitchVar_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
          MR_Word CanFail_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word Cases_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
          MR_Word CasesBytesList_66;
          MR_Integer CanFailByte_67;
          MR_Word Var_81;
          MR_Word Var_83;
          MR_Integer Var_84;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Box conv8_STATE_VARIABLE_StringTable_72;

          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_9[1]));
            MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_3));
            MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (Info_6));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[2]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), Var_81, Cases_65, &CasesBytesList_66, ((MR_Box) (STATE_VARIABLE_StringTable_0_71)), &conv8_STATE_VARIABLE_StringTable_72);
          *STATE_VARIABLE_StringTable_72 = ((MR_Word) (conv8_STATE_VARIABLE_StringTable_72));
          mdbcomp__program_representation__can_fail_byte_2_p_0(CanFail_64, &CanFailByte_67);
          Var_84 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 2);
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (CanFailByte_67));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_91 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, SwitchVar_63);
          Var_93 = ll_backend__prog_rep__encode_length_func_1_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[2]), Cases_65);
          Var_94 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CasesBytesList_66);
          Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_93, Var_94);
          Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_91, Var_92);
          Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_88, Var_90);
          ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_83, Var_87);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word Then_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word Else_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word CondBytes_21;
              MR_Word ThenBytes_22;
              MR_Word ElseBytes_23;
              MR_Word STATE_VARIABLE_StringTable_174_174;
              MR_Word STATE_VARIABLE_StringTable_175_175;
              MR_Word Var_177;
              MR_Integer Var_178;
              MR_Word Var_181;
              MR_Word Var_182;

              ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_6, Cond_18, &CondBytes_21, STATE_VARIABLE_StringTable_0_71, &STATE_VARIABLE_StringTable_174_174);
              ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_6, Then_19, &ThenBytes_22, STATE_VARIABLE_StringTable_174_174, &STATE_VARIABLE_StringTable_175_175);
              ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_6, Else_20, &ElseBytes_23, STATE_VARIABLE_StringTable_175_175, STATE_VARIABLE_StringTable_72);
              Var_178 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 3);
              {
                Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (Var_178));
                MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ThenBytes_22, ElseBytes_23);
              Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CondBytes_21, Var_182);
              ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_177, Var_181);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SubGoal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word SubGoalBytes_17;
              MR_Word Var_184;
              MR_Integer Var_185;

              ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_6, SubGoal_16, &SubGoalBytes_17, STATE_VARIABLE_StringTable_0_71, STATE_VARIABLE_StringTable_72);
              Var_185 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 4);
              {
                Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Var_185));
                MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_184, SubGoalBytes_17);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word MaybeCut_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Integer MaybeCutByte_69;
              MR_Word Var_74;
              MR_Integer Var_75;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word SubGoal_217 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word SubGoalBytes_218;

              mdbcomp__program_representation__cut_byte_2_p_0(MaybeCut_68, &MaybeCutByte_69);
              ll_backend__prog_rep__encode_goal_rep_5_p_0(Info_6, SubGoal_217, &SubGoalBytes_218, STATE_VARIABLE_StringTable_0_71, STATE_VARIABLE_StringTable_72);
              Var_75 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 5);
              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
                MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MaybeCutByte_69));
                MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_79, SubGoalBytes_218);
              ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_74, Var_78);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String FileName_24 = ((MR_String) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Integer Line_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word BoundVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word AtomicGoalRep_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
              MR_Word FileNameBytes_28;
              MR_Word AtomicBytes_29;
              MR_Word STATE_VARIABLE_StringTable_95_95;
              MR_Word Var_96;
              MR_Word Var_97;
              MR_Word Var_98;

              ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(FileName_24, &FileNameBytes_28, STATE_VARIABLE_StringTable_0_71, &STATE_VARIABLE_StringTable_95_95);
              Var_97 = ll_backend__prog_rep__encode_lineno_func_1_f_0(Line_25);
              Var_98 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, BoundVars_26);
              Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_97, Var_98);
              AtomicBytes_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), FileNameBytes_28, Var_96);
              switch (MR_tag((MR_Word) AtomicGoalRep_27)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Integer Var_44;
                    MR_String ConsId_45;
                    MR_Integer AtomicTypeByte_47;
                    MR_Word ArgsBytes_48;
                    MR_Word ConsIdBytes_50;
                    MR_Word VarBytes_51;
                    MR_Word Var_161;
                    MR_Word Var_163;
                    MR_Word Var_164;
                    MR_Word Var_165;

                    switch (MR_tag((MR_Word) AtomicGoalRep_27)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word Args_46;

                          Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AtomicGoalRep_27, (MR_Integer) 0))));
                          ConsId_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), AtomicGoalRep_27, (MR_Integer) 1))));
                          Args_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalRep_27, (MR_Integer) 2))));
                          AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 6);
                          ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_46);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Args_249;

                          Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), AtomicGoalRep_27, (MR_Integer) 0))));
                          ConsId_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), AtomicGoalRep_27, (MR_Integer) 1))));
                          Args_249 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AtomicGoalRep_27, (MR_Integer) 2))));
                          AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 7);
                          ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_249);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word MaybeArgs_248;

                          Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), AtomicGoalRep_27, (MR_Integer) 0))));
                          ConsId_45 = ((MR_String) ((MR_hl_field(MR_mktag(2), AtomicGoalRep_27, (MR_Integer) 1))));
                          MaybeArgs_248 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicGoalRep_27, (MR_Integer) 2))));
                          AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 9);
                          ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(Info_6, MaybeArgs_248);
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word MaybeArgs_49;

                          Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 1))));
                          ConsId_45 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 2))));
                          MaybeArgs_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 3))));
                          AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 8);
                          ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(Info_6, MaybeArgs_49);
                        }
                        break;
                    }
                    ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ConsId_45, &ConsIdBytes_50, STATE_VARIABLE_StringTable_95_95, STATE_VARIABLE_StringTable_72);
                    VarBytes_51 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Var_44);
                    {
                      Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (AtomicTypeByte_47));
                      MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgsBytes_48, AtomicBytes_29);
                    Var_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsIdBytes_50, Var_165);
                    Var_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_51, Var_164);
                    ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_161, Var_163);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer Var_44;
                        MR_String ConsId_45;
                        MR_Integer AtomicTypeByte_47;
                        MR_Word ArgsBytes_48;
                        MR_Word ConsIdBytes_50;
                        MR_Word VarBytes_51;
                        MR_Word Var_161;
                        MR_Word Var_163;
                        MR_Word Var_164;
                        MR_Word Var_165;

                        switch (MR_tag((MR_Word) AtomicGoalRep_27)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word Args_46;

                              Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), AtomicGoalRep_27, (MR_Integer) 0))));
                              ConsId_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), AtomicGoalRep_27, (MR_Integer) 1))));
                              Args_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtomicGoalRep_27, (MR_Integer) 2))));
                              AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 6);
                              ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_46);
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word Args_249;

                              Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), AtomicGoalRep_27, (MR_Integer) 0))));
                              ConsId_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), AtomicGoalRep_27, (MR_Integer) 1))));
                              Args_249 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AtomicGoalRep_27, (MR_Integer) 2))));
                              AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 7);
                              ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_249);
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word MaybeArgs_248;

                              Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), AtomicGoalRep_27, (MR_Integer) 0))));
                              ConsId_45 = ((MR_String) ((MR_hl_field(MR_mktag(2), AtomicGoalRep_27, (MR_Integer) 1))));
                              MaybeArgs_248 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicGoalRep_27, (MR_Integer) 2))));
                              AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 9);
                              ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(Info_6, MaybeArgs_248);
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word MaybeArgs_49;

                              Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 1))));
                              ConsId_45 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 2))));
                              MaybeArgs_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 3))));
                              AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 8);
                              ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(Info_6, MaybeArgs_49);
                            }
                            break;
                        }
                        ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ConsId_45, &ConsIdBytes_50, STATE_VARIABLE_StringTable_95_95, STATE_VARIABLE_StringTable_72);
                        VarBytes_51 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Var_44);
                        {
                          Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (AtomicTypeByte_47));
                          MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgsBytes_48, AtomicBytes_29);
                        Var_164 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsIdBytes_50, Var_165);
                        Var_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarBytes_51, Var_164);
                        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_161, Var_163);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer Target_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 1))));
                        MR_Integer Source_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 2))));
                        MR_Word Var_166;
                        MR_Integer Var_167;
                        MR_Word Var_170;
                        MR_Word Var_171;
                        MR_Word Var_172;
                        MR_Word Var_173;

                        Var_167 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 10);
                        {
                          Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Var_167));
                          MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_171 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Target_30);
                        Var_173 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Source_31);
                        Var_172 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_173, AtomicBytes_29);
                        Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_171, Var_172);
                        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_166, Var_170);
                        *STATE_VARIABLE_StringTable_72 = STATE_VARIABLE_StringTable_95_95;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_114;
                        MR_Integer Var_115;
                        MR_Word Var_118;
                        MR_Word Var_119;
                        MR_Word Var_120;
                        MR_Word Var_121;
                        MR_Integer Target_213 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 1))));
                        MR_Integer Source_214 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 2))));

                        Var_115 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 11);
                        {
                          Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_115));
                          MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_119 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Target_213);
                        Var_121 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Source_214);
                        Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_121, AtomicBytes_29);
                        Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_119, Var_120);
                        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_114, Var_118);
                        *STATE_VARIABLE_StringTable_72 = STATE_VARIABLE_StringTable_95_95;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Integer Var1_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 1))));
                        MR_Integer Var2_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 2))));
                        MR_Word Var_148;
                        MR_Integer Var_149;
                        MR_Word Var_152;
                        MR_Word Var_153;
                        MR_Word Var_154;
                        MR_Word Var_155;

                        Var_149 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 12);
                        {
                          Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
                          MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_153 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Var1_52);
                        Var_155 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Var2_53);
                        Var_154 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_155, AtomicBytes_29);
                        Var_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_153, Var_154);
                        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_148, Var_152);
                        *STATE_VARIABLE_StringTable_72 = STATE_VARIABLE_StringTable_95_95;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_99;
                        MR_Integer Var_100;
                        MR_Word Var_103;
                        MR_Word Var_104;
                        MR_Word Args_216 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 1))));

                        Var_100 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 13);
                        {
                          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
                          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_104 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_216);
                        Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_104, AtomicBytes_29);
                        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_99, Var_103);
                        *STATE_VARIABLE_StringTable_72 = STATE_VARIABLE_StringTable_95_95;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer PredVar_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 1))));
                        MR_Word Var_140;
                        MR_Integer Var_141;
                        MR_Word Var_144;
                        MR_Word Var_145;
                        MR_Word Var_146;
                        MR_Word Var_147;
                        MR_Word Args_209 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 2))));

                        Var_141 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 14);
                        {
                          Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (Var_141));
                          MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_145 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, PredVar_54);
                        Var_147 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_209);
                        Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_147, AtomicBytes_29);
                        Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_145, Var_146);
                        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_140, Var_144);
                        *STATE_VARIABLE_StringTable_72 = STATE_VARIABLE_StringTable_95_95;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Integer MethodNum_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 2))));
                        MR_Word Var_130;
                        MR_Integer Var_131;
                        MR_Word Var_134;
                        MR_Word Var_135;
                        MR_Word Var_136;
                        MR_Word Var_137;
                        MR_Word Var_138;
                        MR_Word Var_139;
                        MR_Integer Var_210 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 1))));
                        MR_Word Args_211 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 3))));

                        Var_131 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 15);
                        {
                          Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
                          MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_135 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(Info_6, Var_210);
                        Var_137 = ll_backend__prog_rep__encode_method_num_func_1_f_0(MethodNum_55);
                        Var_139 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_211);
                        Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_139, AtomicBytes_29);
                        Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_137, Var_138);
                        Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_135, Var_136);
                        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_130, Var_134);
                        *STATE_VARIABLE_StringTable_72 = STATE_VARIABLE_StringTable_95_95;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_String ModuleName_250 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 1))));
                        MR_String PredName_251 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 2))));
                        MR_Word ModuleNameBytes_253;
                        MR_Word PredNameBytes_254;
                        MR_Word STATE_VARIABLE_StringTable_105_255;
                        MR_Word Var_256;
                        MR_Integer Var_257;
                        MR_Word Var_259;
                        MR_Word Var_260;
                        MR_Word Var_261;
                        MR_Word Var_262;
                        MR_Word Args_263 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 3))));

                        ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ModuleName_250, &ModuleNameBytes_253, STATE_VARIABLE_StringTable_95_95, &STATE_VARIABLE_StringTable_105_255);
                        ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(PredName_251, &PredNameBytes_254, STATE_VARIABLE_StringTable_105_255, STATE_VARIABLE_StringTable_72);
                        Var_257 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 16);
                        {
                          Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (Var_257));
                          MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_262 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_263);
                        Var_261 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_262, AtomicBytes_29);
                        Var_260 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PredNameBytes_254, Var_261);
                        Var_259 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ModuleNameBytes_253, Var_260);
                        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_256, Var_259);
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_String ModuleName_58 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 1))));
                        MR_String PredName_59 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 2))));
                        MR_Word ModuleNameBytes_61;
                        MR_Word PredNameBytes_62;
                        MR_Word STATE_VARIABLE_StringTable_105_105;
                        MR_Word Var_107;
                        MR_Integer Var_108;
                        MR_Word Var_110;
                        MR_Word Var_111;
                        MR_Word Var_112;
                        MR_Word Var_113;
                        MR_Word Args_215 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 3))));

                        ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ModuleName_58, &ModuleNameBytes_61, STATE_VARIABLE_StringTable_95_95, &STATE_VARIABLE_StringTable_105_105);
                        ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(PredName_59, &PredNameBytes_62, STATE_VARIABLE_StringTable_105_105, STATE_VARIABLE_StringTable_72);
                        Var_108 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 17);
                        {
                          Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
                          MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_113 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_215);
                        Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_113, AtomicBytes_29);
                        Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PredNameBytes_62, Var_112);
                        Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ModuleNameBytes_61, Var_111);
                        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_107, Var_110);
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_String EventName_56 = ((MR_String) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 1))));
                        MR_Word EventNameBytes_57;
                        MR_Word Var_123;
                        MR_Integer Var_124;
                        MR_Word Var_127;
                        MR_Word Var_128;
                        MR_Word Var_129;
                        MR_Word Args_212 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicGoalRep_27, (MR_Integer) 2))));

                        ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(EventName_56, &EventNameBytes_57, STATE_VARIABLE_StringTable_95_95, STATE_VARIABLE_StringTable_72);
                        Var_124 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 18);
                        {
                          Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
                          MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_129 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(Info_6, Args_212);
                        Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_129, AtomicBytes_29);
                        Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), EventNameBytes_57, Var_128);
                        ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_123, Var_127);
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
      Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (DetismByte_70));
      MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Bytes_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ExprBytes_14, Var_206);
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_method_num_func_1_f_0(
  MR_Integer VarNum_3)
{
  {
    MR_Word Bytes_4;

    mdbcomp__rtti_access__encode_short_det_2_p_0(VarNum_3, &Bytes_4);
    return Bytes_4;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_lineno_func_1_f_0(
  MR_Integer VarNum_3)
{
  {
    MR_Word Bytes_4;

    mdbcomp__rtti_access__encode_int32_det_2_p_0(VarNum_3, &Bytes_4);
    return Bytes_4;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_length_func_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word List_3)
{
  {
    MR_Word Bytes_4;
    MR_Integer Var_5;

    Var_5 = mercury__list__length_1_f_0(TypeInfo_for_T_6, List_3);
    mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_5, &Bytes_4);
    return Bytes_4;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Bytes_6;

    conv0_Bytes_6 = ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Bytes_6));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(
  MR_Word Info_4,
  MR_Word Vars_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_17;

    Var_17 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[5]), Vars_5);
    mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_17, &Var_6);
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (Info_4));
    }
    Var_8 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[5]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), Var_9, Vars_5);
    Var_7 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_8);
    HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_6, Var_7);
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_rep_func_2_f_0(
  MR_Word Info_4,
  MR_Integer Var_5)
{
  {
    MR_Word Bytes_6;
    MR_Word VarNumRep_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);

    switch (VarNumRep_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Bytes_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Bytes_6, 0) = ((MR_Box) (Var_5));
          MR_hl_field(MR_mktag(1), Bytes_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
}

static MR_Box MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Bytes_6;

    conv0_Bytes_6 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Bytes_6));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0(
  MR_Word Info_4,
  MR_Word Vars_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Integer Var_16;

    Var_16 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Vars_5);
    mdbcomp__rtti_access__encode_int32_det_2_p_0(Var_16, &Var_6);
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (ll_backend__prog_rep__encode_var_reps_func_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (Info_4));
    }
    Var_8 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), Var_9, Vars_5);
    Var_7 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_8);
    HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_6, Var_7);
    return HeadVar__3_3;
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(
  MR_String String_5,
  MR_Word * Bytes_6,
  MR_Word STATE_VARIABLE_StringTable_0_9,
  MR_Word * STATE_VARIABLE_StringTable_10)
{
  {
    MR_Integer Index_8;

    ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(String_5, &Index_8, STATE_VARIABLE_StringTable_0_9, STATE_VARIABLE_StringTable_10);
    mdbcomp__rtti_access__encode_int32_det_2_p_0(Index_8, Bytes_6);
  }
}

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_6(
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
  {
    MR_Box closure = closure_arg;
    MR_Integer conv23_STATE_VARIABLE_NumVars_27;
    MR_Word conv22_STATE_VARIABLE_VarNameTableBytes_29;
    MR_Word conv21_STATE_VARIABLE_StringTable_31;
    MR_Word conv20_STATE_VARIABLE_TypeTable_33;

    ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv23_STATE_VARIABLE_NumVars_27, ((MR_Word) (wrapper_arg_5)), &conv22_STATE_VARIABLE_VarNameTableBytes_29, ((MR_Word) (wrapper_arg_7)), &conv21_STATE_VARIABLE_StringTable_31, ((MR_Word) (wrapper_arg_9)), &conv20_STATE_VARIABLE_TypeTable_33);
    *wrapper_arg_4 = ((MR_Box) (conv23_STATE_VARIABLE_NumVars_27));
    *wrapper_arg_6 = ((MR_Box) (conv22_STATE_VARIABLE_VarNameTableBytes_29));
    *wrapper_arg_8 = ((MR_Box) (conv21_STATE_VARIABLE_StringTable_31));
    *wrapper_arg_10 = ((MR_Box) (conv20_STATE_VARIABLE_TypeTable_33));
  }
}

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_5(
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
}

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_4(
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
}

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_3(
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
}

static MR_bool MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__317__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Box wrapper_arg_4;
    MR_Box closure = closure_arg;
    MR_Integer conv0_Max_9;

    conv0_Max_9 = ll_backend__prog_rep__max_var_num_3_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    wrapper_arg_4 = ((MR_Box) (conv0_Max_9));
    return wrapper_arg_4;
  }
}

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0(
  MR_Word IncludeVarNameTable_11,
  MR_Word IncludeVarTypes_12,
  MR_Word VarTypes_13,
  MR_Word VarNumMap_14,
  MR_Word * VarNumRep_15,
  MR_Word * Bytes_16,
  MR_Word STATE_VARIABLE_StringTable_0_24,
  MR_Word * STATE_VARIABLE_StringTable_25,
  MR_Word STATE_VARIABLE_TypeTable_0_26,
  MR_Word * STATE_VARIABLE_TypeTable_27)
{
  {
    MR_bool succeeded;
    MR_Integer MaxVarNum_19;
    MR_Integer FlagByte_20;
    MR_Box conv1_MaxVarNum_19;

    conv1_MaxVarNum_19 = mercury__map__foldl_3_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[3]), VarNumMap_14, ((MR_Box) ((MR_Integer) 0)));
    MaxVarNum_19 = ((MR_Integer) (conv1_MaxVarNum_19));
    succeeded = (MaxVarNum_19 <= (MR_Integer) 127);
    if (succeeded)
      *VarNumRep_15 = (MR_Integer) 0;
    else
    {
      succeeded = (MaxVarNum_19 <= (MR_Integer) 32767);
      if (succeeded)
        *VarNumRep_15 = (MR_Integer) 1;
      else
        *VarNumRep_15 = (MR_Integer) 2;
    }
    mdbcomp__program_representation__var_flag_byte_4_p_0(*VarNumRep_15, IncludeVarNameTable_11, IncludeVarTypes_12, &FlagByte_20);
    switch (IncludeVarNameTable_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_32;

          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[3]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_2));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (IncludeVarTypes_12));
            MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_32, (MR_String) "predicate \140ll_backend.prog_rep.represent_var_table_as_bytecode\'/10", (MR_String) "IncludeVarTypes but not IncludeVarNameTable");
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Bytes_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FlagByte_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_StringTable_25 = STATE_VARIABLE_StringTable_0_24;
          *STATE_VARIABLE_TypeTable_27 = STATE_VARIABLE_TypeTable_0_26;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer NumVars_21;
          MR_Word VarNameTableEntriesBytes_22;
          MR_Word NumVarsBytes_23;
          MR_Word Var_54;
          MR_Word Var_56;

          switch (IncludeVarTypes_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                switch (*VarNumRep_15) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Box conv7_NumVars_21;
                      MR_Box conv6_VarNameTableEntriesBytes_22;
                      MR_Box conv5_STATE_VARIABLE_StringTable_25;

                      mercury__map__foldl3_8_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[4]), VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &conv7_NumVars_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_VarNameTableEntriesBytes_22, ((MR_Box) (STATE_VARIABLE_StringTable_0_24)), &conv5_STATE_VARIABLE_StringTable_25);
                      NumVars_21 = ((MR_Integer) (conv7_NumVars_21));
                      VarNameTableEntriesBytes_22 = ((MR_Word) (conv6_VarNameTableEntriesBytes_22));
                      *STATE_VARIABLE_StringTable_25 = ((MR_Word) (conv5_STATE_VARIABLE_StringTable_25));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box conv13_NumVars_21;
                      MR_Box conv12_VarNameTableEntriesBytes_22;
                      MR_Box conv11_STATE_VARIABLE_StringTable_25;

                      mercury__map__foldl3_8_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[5]), VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &conv13_NumVars_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv12_VarNameTableEntriesBytes_22, ((MR_Box) (STATE_VARIABLE_StringTable_0_24)), &conv11_STATE_VARIABLE_StringTable_25);
                      NumVars_21 = ((MR_Integer) (conv13_NumVars_21));
                      VarNameTableEntriesBytes_22 = ((MR_Word) (conv12_VarNameTableEntriesBytes_22));
                      *STATE_VARIABLE_StringTable_25 = ((MR_Word) (conv11_STATE_VARIABLE_StringTable_25));
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Box conv19_NumVars_21;
                      MR_Box conv18_VarNameTableEntriesBytes_22;
                      MR_Box conv17_STATE_VARIABLE_StringTable_25;

                      mercury__map__foldl3_8_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[6]), VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &conv19_NumVars_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv18_VarNameTableEntriesBytes_22, ((MR_Box) (STATE_VARIABLE_StringTable_0_24)), &conv17_STATE_VARIABLE_StringTable_25);
                      NumVars_21 = ((MR_Integer) (conv19_NumVars_21));
                      VarNameTableEntriesBytes_22 = ((MR_Word) (conv18_VarNameTableEntriesBytes_22));
                      *STATE_VARIABLE_StringTable_25 = ((MR_Word) (conv17_STATE_VARIABLE_StringTable_25));
                    }
                    break;
                }
                *STATE_VARIABLE_TypeTable_27 = STATE_VARIABLE_TypeTable_0_26;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_37;
                MR_Box conv27_NumVars_21;
                MR_Box conv26_VarNameTableEntriesBytes_22;
                MR_Box conv25_STATE_VARIABLE_StringTable_25;
                MR_Box conv24_STATE_VARIABLE_TypeTable_27;

                {
                  Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_6));
                  MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (*VarNumRep_15));
                  MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (VarTypes_13));
                }
                mercury__map__foldl4_10_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[6]), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0), Var_37, VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &conv27_NumVars_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv26_VarNameTableEntriesBytes_22, ((MR_Box) (STATE_VARIABLE_StringTable_0_24)), &conv25_STATE_VARIABLE_StringTable_25, ((MR_Box) (STATE_VARIABLE_TypeTable_0_26)), &conv24_STATE_VARIABLE_TypeTable_27);
                NumVars_21 = ((MR_Integer) (conv27_NumVars_21));
                VarNameTableEntriesBytes_22 = ((MR_Word) (conv26_VarNameTableEntriesBytes_22));
                *STATE_VARIABLE_StringTable_25 = ((MR_Word) (conv25_STATE_VARIABLE_StringTable_25));
                *STATE_VARIABLE_TypeTable_27 = ((MR_Word) (conv24_STATE_VARIABLE_TypeTable_27));
              }
              break;
          }
          mdbcomp__rtti_access__encode_num_det_2_p_0(NumVars_21, &NumVarsBytes_23);
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (FlagByte_20));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), NumVarsBytes_23, VarNameTableEntriesBytes_22);
          *Bytes_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_54, Var_56);
        }
        break;
    }
  }
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
    MR_Word Conj_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Conjs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ConjRep_11;
    MR_Word ConjReps_12;
    MR_Word GoalInfo_13;
    MR_Word InstmapDelta_14;
    MR_Word Instmap1_15;

    ll_backend__prog_rep__goal_to_goal_rep_4_p_0(Info_1, Instmap0_2, Conj_9, &ConjRep_11);
    GoalInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conj_9, (MR_Integer) 1))));
    InstmapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_13);
    hlds__instmap__apply_instmap_delta_3_p_0(InstmapDelta_14, Instmap0_2, &Instmap1_15);
    ll_backend__prog_rep__conj_to_conj_rep_4_p_0(Info_1, Instmap1_15, Conjs_10, &ConjReps_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConjRep_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConjReps_12));
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__4_4;

    ll_backend__prog_rep__case_to_case_rep_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_GoalRep_9;

    ll_backend__prog_rep__goal_to_goal_rep_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_GoalRep_9);
    *wrapper_arg_2 = ((MR_Box) (conv5_GoalRep_9));
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__453__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_250;

    conv4_HeadVar__3_250 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__524__2_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_250));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__prog_rep__lhs_final_is_ground_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_224;

    conv3_HeadVar__3_224 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__524__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_224));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv2_HeadVar__4_237;

    conv2_HeadVar__4_237 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__594__1_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_237));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_Num_6;

    conv0_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Num_6));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0(
  MR_Word Info_5,
  MR_Word Instmap0_6,
  MR_Word HeadVar__3_3,
  MR_Word * GoalRep_9)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
            GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExprRep_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), GoalExprRep_12, 1) = ((MR_Box) (SubGoalRep_19));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_String FileName_66;
          MR_Integer LineNo_67;
          MR_Word BoundVars_68;
          MR_Word BoundVarsRep_69;
          MR_Word AtomicGoalRep_77;
          MR_Word Var_144;

          ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(GoalInfo_8, Instmap0_6, Info_5, &FileName_66, &LineNo_67, &BoundVars_68);
          {
            Var_144 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
            MR_hl_field(MR_mktag(0), Var_144, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_144, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_144, 3) = ((MR_Box) (Info_5));
          }
          BoundVarsRep_69 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_144, BoundVars_68);
          switch (MR_tag((MR_Word) GoalExpr_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Unification_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 3))));

                switch (MR_tag((MR_Word) Unification_73)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ConsId_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_73, (MR_Integer) 1))));
                      MR_Word Args_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_73, (MR_Integer) 2))));
                      MR_Word ArgModes_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_73, (MR_Integer) 3))));
                      MR_String ConsIdRep_86;
                      MR_Word ArgsRep_87;
                      MR_Word MaybeArgs_88;
                      MR_Word MaybeArgsRep_89;
                      MR_Word Var_160;
                      MR_Word Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_73, (MR_Integer) 0))));
                      MR_Integer VarRep_176;
                      MR_Word Var_162;

                      VarRep_176 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var_175);
                      ConsIdRep_86 = ll_backend__prog_rep__cons_id_rep_1_f_0(ConsId_78);
                      ArgsRep_87 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_144, Args_79);
                      ll_backend__prog_rep__filter_input_args_4_p_0(Info_5, ArgModes_80, Args_79, &MaybeArgs_88);
                      {
                        Var_160 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_160, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[3]));
                        MR_hl_field(MR_mktag(0), Var_160, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4));
                        MR_hl_field(MR_mktag(0), Var_160, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_160, 3) = ((MR_Box) (Var_144));
                      }
                      MaybeArgsRep_89 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[4]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[5]), Var_160, MaybeArgs_88);
                      {
                        Var_162 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[1]));
                        MR_hl_field(MR_mktag(0), Var_162, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5));
                        MR_hl_field(MR_mktag(0), Var_162, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_162, 3) = ((MR_Box) (Info_5));
                      }
                      succeeded = mercury__list__all_true_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Var_162, ArgModes_80);
                      if (succeeded)
                        {
                          AtomicGoalRep_77 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), AtomicGoalRep_77, 0) = ((MR_Box) (VarRep_176));
                          MR_hl_field(MR_mktag(0), AtomicGoalRep_77, 1) = ((MR_Box) (ConsIdRep_86));
                          MR_hl_field(MR_mktag(0), AtomicGoalRep_77, 2) = ((MR_Box) (ArgsRep_87));
                        }
                      else
                        {
                          AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (VarRep_176));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (ConsIdRep_86));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 3) = ((MR_Box) (MaybeArgsRep_89));
                        }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ConsId_255 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_73, (MR_Integer) 1))));
                      MR_Word Args_256 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_73, (MR_Integer) 2))));
                      MR_Word ArgModes_257 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_73, (MR_Integer) 3))));
                      MR_String ConsIdRep_258;
                      MR_Word ArgsRep_259;
                      MR_Word MaybeArgs_260;
                      MR_Word MaybeArgsRep_261;
                      MR_Word Var_263;
                      MR_Word Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_73, (MR_Integer) 0))));
                      MR_Integer VarRep_266;

                      VarRep_266 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var_265);
                      ConsIdRep_258 = ll_backend__prog_rep__cons_id_rep_1_f_0(ConsId_255);
                      ArgsRep_259 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_144, Args_256);
                      ll_backend__prog_rep__filter_input_args_4_p_0(Info_5, ArgModes_257, Args_256, &MaybeArgs_260);
                      {
                        Var_263 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_263, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[3]));
                        MR_hl_field(MR_mktag(0), Var_263, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6));
                        MR_hl_field(MR_mktag(0), Var_263, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_263, 3) = ((MR_Box) (Var_144));
                      }
                      MaybeArgsRep_261 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[4]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[5]), Var_263, MaybeArgs_260);
                      succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), ((MR_Box) (Var_265)), BoundVars_68);
                      if (succeeded)
                        {
                          AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), AtomicGoalRep_77, 0) = ((MR_Box) (VarRep_266));
                          MR_hl_field(MR_mktag(2), AtomicGoalRep_77, 1) = ((MR_Box) (ConsIdRep_258));
                          MR_hl_field(MR_mktag(2), AtomicGoalRep_77, 2) = ((MR_Box) (MaybeArgsRep_261));
                        }
                      else
                        {
                          AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), AtomicGoalRep_77, 0) = ((MR_Box) (VarRep_266));
                          MR_hl_field(MR_mktag(1), AtomicGoalRep_77, 1) = ((MR_Box) (ConsIdRep_258));
                          MR_hl_field(MR_mktag(1), AtomicGoalRep_77, 2) = ((MR_Box) (ArgsRep_259));
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Target_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_73, (MR_Integer) 0))));
                      MR_Word Source_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_73, (MR_Integer) 1))));
                      MR_Integer Var_163;
                      MR_Integer Var_164;

                      Var_163 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Target_75);
                      Var_164 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Source_76);
                      {
                        AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (Var_163));
                        MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (Var_164));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_73, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word Var1_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_73, (MR_Integer) 1))));
                          MR_Word Var2_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_73, (MR_Integer) 2))));
                          MR_Integer Var_157;
                          MR_Integer Var_158;

                          Var_157 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var1_103);
                          Var_158 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var2_104);
                          {
                            AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (Var_157));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (Var_158));
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
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word PredId_124 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
                MR_Word Builtin_126 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3))) & (MR_Integer) 1);
                MR_Word PredInfo_129;
                MR_Word ModuleSymName_130;
                MR_String ModuleName_131;
                MR_String PredName_132;
                MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
                MR_Word Args_189 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
                MR_Word ArgsRep_190;

                hlds__hlds_module__module_info_pred_info_3_p_0(Var_148, PredId_124, &PredInfo_129);
                ModuleSymName_130 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_129);
                ModuleName_131 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleSymName_130);
                PredName_132 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_129);
                ArgsRep_190 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_144, Args_189);
                switch (Builtin_126) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                      MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (ModuleName_131));
                      MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (PredName_132));
                      MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 3) = ((MR_Box) (ArgsRep_190));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (ModuleName_131));
                      MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (PredName_132));
                      MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 3) = ((MR_Box) (ArgsRep_190));
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GenericCall_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                    MR_Word Args_187 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                    MR_Word ArgsRep_188;

                    ArgsRep_188 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_144, Args_187);
                    switch (MR_tag((MR_Word) GenericCall_108)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word PredVar_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCall_108, (MR_Integer) 0))));
                          MR_Integer PredVarRep_116;

                          PredVarRep_116 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, PredVar_112);
                          {
                            AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (PredVarRep_116));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (ArgsRep_188));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer Num_117 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), GenericCall_108, (MR_Integer) 1))));
                          MR_Word Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCall_108, (MR_Integer) 0))));
                          MR_Integer VarRep_182;

                          VarRep_182 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var_181);
                          {
                            AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (VarRep_182));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (Num_117));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 3) = ((MR_Box) (ArgsRep_188));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String EventName_120 = ((MR_String) ((MR_hl_field(MR_mktag(2), GenericCall_108, (MR_Integer) 0))));

                          {
                            AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (EventName_120));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (ArgsRep_188));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Integer InputArgRep_122;
                          MR_Integer OutputArgRep_123;
                          MR_Word Var_151;
                          MR_Word Var_152;

                          succeeded = (ArgsRep_188 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            InputArgRep_122 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArgsRep_188, (MR_Integer) 0))));
                            Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgsRep_188, (MR_Integer) 1))));
                            succeeded = (Var_151 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              OutputArgRep_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 0))));
                              Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 1))));
                              succeeded = (Var_152 == (MR_Word) ((MR_Unsigned) 0U));
                            }
                          }
                          if (succeeded)
                            {
                              AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                              MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (OutputArgRep_123));
                              MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (InputArgRep_122));
                            }
                          else
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "cast arity != 2");
                              return;
                            }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ArgVarsRep_139;
                    MR_Word Var_145;
                    MR_Word Args_191 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));

                    {
                      Var_145 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_145, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), Var_145, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_145, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_145, 3) = ((MR_Box) (Var_144));
                      MR_hl_field(MR_mktag(0), Var_145, 4) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_2[2]));
                    }
                    ArgVarsRep_139 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_145, Args_191);
                    {
                      AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (ArgVarsRep_139));
                    }
                  }
                  break;
              }
              break;
          }
          {
            GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExprRep_12, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), GoalExprRep_12, 1) = ((MR_Box) (FileName_66));
            MR_hl_field(MR_mktag(3), GoalExprRep_12, 2) = ((MR_Box) (LineNo_67));
            MR_hl_field(MR_mktag(3), GoalExprRep_12, 3) = ((MR_Box) (BoundVarsRep_69));
            MR_hl_field(MR_mktag(3), GoalExprRep_12, 4) = ((MR_Box) (AtomicGoalRep_77));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_String FileName_66;
              MR_Integer LineNo_67;
              MR_Word BoundVars_68;
              MR_Word BoundVarsRep_69;
              MR_Word AtomicGoalRep_77;
              MR_Word Var_144;

              ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(GoalInfo_8, Instmap0_6, Info_5, &FileName_66, &LineNo_67, &BoundVars_68);
              {
                Var_144 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_144, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_144, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_144, 3) = ((MR_Box) (Info_5));
              }
              BoundVarsRep_69 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_144, BoundVars_68);
              switch (MR_tag((MR_Word) GoalExpr_7)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Unification_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 3))));

                    switch (MR_tag((MR_Word) Unification_73)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ConsId_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_73, (MR_Integer) 1))));
                          MR_Word Args_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_73, (MR_Integer) 2))));
                          MR_Word ArgModes_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_73, (MR_Integer) 3))));
                          MR_String ConsIdRep_86;
                          MR_Word ArgsRep_87;
                          MR_Word MaybeArgs_88;
                          MR_Word MaybeArgsRep_89;
                          MR_Word Var_160;
                          MR_Word Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_73, (MR_Integer) 0))));
                          MR_Integer VarRep_176;
                          MR_Word Var_162;

                          VarRep_176 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var_175);
                          ConsIdRep_86 = ll_backend__prog_rep__cons_id_rep_1_f_0(ConsId_78);
                          ArgsRep_87 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_144, Args_79);
                          ll_backend__prog_rep__filter_input_args_4_p_0(Info_5, ArgModes_80, Args_79, &MaybeArgs_88);
                          {
                            Var_160 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_160, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[3]));
                            MR_hl_field(MR_mktag(0), Var_160, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4));
                            MR_hl_field(MR_mktag(0), Var_160, 2) = ((MR_Box) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(0), Var_160, 3) = ((MR_Box) (Var_144));
                          }
                          MaybeArgsRep_89 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[4]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[5]), Var_160, MaybeArgs_88);
                          {
                            Var_162 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[1]));
                            MR_hl_field(MR_mktag(0), Var_162, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5));
                            MR_hl_field(MR_mktag(0), Var_162, 2) = ((MR_Box) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(0), Var_162, 3) = ((MR_Box) (Info_5));
                          }
                          succeeded = mercury__list__all_true_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Var_162, ArgModes_80);
                          if (succeeded)
                            {
                              AtomicGoalRep_77 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), AtomicGoalRep_77, 0) = ((MR_Box) (VarRep_176));
                              MR_hl_field(MR_mktag(0), AtomicGoalRep_77, 1) = ((MR_Box) (ConsIdRep_86));
                              MR_hl_field(MR_mktag(0), AtomicGoalRep_77, 2) = ((MR_Box) (ArgsRep_87));
                            }
                          else
                            {
                              AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (VarRep_176));
                              MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (ConsIdRep_86));
                              MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 3) = ((MR_Box) (MaybeArgsRep_89));
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ConsId_255 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_73, (MR_Integer) 1))));
                          MR_Word Args_256 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_73, (MR_Integer) 2))));
                          MR_Word ArgModes_257 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_73, (MR_Integer) 3))));
                          MR_String ConsIdRep_258;
                          MR_Word ArgsRep_259;
                          MR_Word MaybeArgs_260;
                          MR_Word MaybeArgsRep_261;
                          MR_Word Var_263;
                          MR_Word Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_73, (MR_Integer) 0))));
                          MR_Integer VarRep_266;

                          VarRep_266 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var_265);
                          ConsIdRep_258 = ll_backend__prog_rep__cons_id_rep_1_f_0(ConsId_255);
                          ArgsRep_259 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_144, Args_256);
                          ll_backend__prog_rep__filter_input_args_4_p_0(Info_5, ArgModes_257, Args_256, &MaybeArgs_260);
                          {
                            Var_263 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_263, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[3]));
                            MR_hl_field(MR_mktag(0), Var_263, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6));
                            MR_hl_field(MR_mktag(0), Var_263, 2) = ((MR_Box) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(0), Var_263, 3) = ((MR_Box) (Var_144));
                          }
                          MaybeArgsRep_261 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[4]), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[5]), Var_263, MaybeArgs_260);
                          succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), ((MR_Box) (Var_265)), BoundVars_68);
                          if (succeeded)
                            {
                              AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), AtomicGoalRep_77, 0) = ((MR_Box) (VarRep_266));
                              MR_hl_field(MR_mktag(2), AtomicGoalRep_77, 1) = ((MR_Box) (ConsIdRep_258));
                              MR_hl_field(MR_mktag(2), AtomicGoalRep_77, 2) = ((MR_Box) (MaybeArgsRep_261));
                            }
                          else
                            {
                              AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), AtomicGoalRep_77, 0) = ((MR_Box) (VarRep_266));
                              MR_hl_field(MR_mktag(1), AtomicGoalRep_77, 1) = ((MR_Box) (ConsIdRep_258));
                              MR_hl_field(MR_mktag(1), AtomicGoalRep_77, 2) = ((MR_Box) (ArgsRep_259));
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word Target_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_73, (MR_Integer) 0))));
                          MR_Word Source_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_73, (MR_Integer) 1))));
                          MR_Integer Var_163;
                          MR_Integer Var_164;

                          Var_163 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Target_75);
                          Var_164 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Source_76);
                          {
                            AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (Var_163));
                            MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (Var_164));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_73, (MR_Integer) 0))))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word Var1_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_73, (MR_Integer) 1))));
                              MR_Word Var2_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_73, (MR_Integer) 2))));
                              MR_Integer Var_157;
                              MR_Integer Var_158;

                              Var_157 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var1_103);
                              Var_158 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var2_104);
                              {
                                AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (Var_157));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (Var_158));
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
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word PredId_124 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
                    MR_Word Builtin_126 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3))) & (MR_Integer) 1);
                    MR_Word PredInfo_129;
                    MR_Word ModuleSymName_130;
                    MR_String ModuleName_131;
                    MR_String PredName_132;
                    MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
                    MR_Word Args_189 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2))));
                    MR_Word ArgsRep_190;

                    hlds__hlds_module__module_info_pred_info_3_p_0(Var_148, PredId_124, &PredInfo_129);
                    ModuleSymName_130 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_129);
                    ModuleName_131 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleSymName_130);
                    PredName_132 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_129);
                    ArgsRep_190 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_144, Args_189);
                    switch (Builtin_126) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (ModuleName_131));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (PredName_132));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 3) = ((MR_Box) (ArgsRep_190));
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (ModuleName_131));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (PredName_132));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 3) = ((MR_Box) (ArgsRep_190));
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word GenericCall_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                        MR_Word Args_187 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                        MR_Word ArgsRep_188;

                        ArgsRep_188 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_144, Args_187);
                        switch (MR_tag((MR_Word) GenericCall_108)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word PredVar_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCall_108, (MR_Integer) 0))));
                              MR_Integer PredVarRep_116;

                              PredVarRep_116 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, PredVar_112);
                              {
                                AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (PredVarRep_116));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (ArgsRep_188));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Integer Num_117 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), GenericCall_108, (MR_Integer) 1))));
                              MR_Word Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCall_108, (MR_Integer) 0))));
                              MR_Integer VarRep_182;

                              VarRep_182 = ll_backend__prog_rep__var_to_var_rep_2_f_0(Info_5, Var_181);
                              {
                                AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (VarRep_182));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (Num_117));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 3) = ((MR_Box) (ArgsRep_188));
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_String EventName_120 = ((MR_String) ((MR_hl_field(MR_mktag(2), GenericCall_108, (MR_Integer) 0))));

                              {
                                AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (EventName_120));
                                MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (ArgsRep_188));
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Integer InputArgRep_122;
                              MR_Integer OutputArgRep_123;
                              MR_Word Var_151;
                              MR_Word Var_152;

                              succeeded = (ArgsRep_188 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                InputArgRep_122 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ArgsRep_188, (MR_Integer) 0))));
                                Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgsRep_188, (MR_Integer) 1))));
                                succeeded = (Var_151 != (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  OutputArgRep_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 0))));
                                  Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_151, (MR_Integer) 1))));
                                  succeeded = (Var_152 == (MR_Word) ((MR_Unsigned) 0U));
                                }
                              }
                              if (succeeded)
                                {
                                  AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                                  MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (OutputArgRep_123));
                                  MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 2) = ((MR_Box) (InputArgRep_122));
                                }
                              else
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "cast arity != 2");
                                  return;
                                }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgVarsRep_139;
                        MR_Word Var_145;
                        MR_Word Args_191 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));

                        {
                          Var_145 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_145, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[0]));
                          MR_hl_field(MR_mktag(0), Var_145, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3));
                          MR_hl_field(MR_mktag(0), Var_145, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), Var_145, 3) = ((MR_Box) (Var_144));
                          MR_hl_field(MR_mktag(0), Var_145, 4) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_2[2]));
                        }
                        ArgVarsRep_139 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_145, Args_191);
                        {
                          AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), AtomicGoalRep_77, 1) = ((MR_Box) (ArgVarsRep_139));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExprRep_12, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExprRep_12, 1) = ((MR_Box) (FileName_66));
                MR_hl_field(MR_mktag(3), GoalExprRep_12, 2) = ((MR_Box) (LineNo_67));
                MR_hl_field(MR_mktag(3), GoalExprRep_12, 3) = ((MR_Box) (BoundVarsRep_69));
                MR_hl_field(MR_mktag(3), GoalExprRep_12, 4) = ((MR_Box) (AtomicGoalRep_77));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word FlattenParConjs_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))) & (MR_Integer) 1);
              MR_Word Goals_16;
              MR_Word GoalReps_17;

              switch (FlattenParConjs_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_167;

                    Goals_16 = Goals0_14;
                    {
                      Var_167 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[2]));
                      MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7));
                      MR_hl_field(MR_mktag(0), Var_167, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_167, 3) = ((MR_Box) (ConjType_13));
                      MR_hl_field(MR_mktag(0), Var_167, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_167, (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "non-plain conjunction and declarative debugging");
                  }
                  break;
                case (MR_Integer) 0:
                  hlds__goal_util__flatten_conj_2_p_0(Goals0_14, &Goals_16);
                  break;
              }
              ll_backend__prog_rep__conj_to_conj_rep_4_p_0(Info_5, Instmap0_6, Goals_16, &GoalReps_17);
              {
                GoalExprRep_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), GoalExprRep_12, 0) = ((MR_Box) (GoalReps_17));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_166;
              MR_Word Goals_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word GoalReps_172;

              {
                Var_166 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_166, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[1]));
                MR_hl_field(MR_mktag(0), Var_166, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8));
                MR_hl_field(MR_mktag(0), Var_166, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_166, 3) = ((MR_Box) (Info_5));
                MR_hl_field(MR_mktag(0), Var_166, 4) = ((MR_Box) (Instmap0_6));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[1]), Var_166, Goals_171, &GoalReps_172);
              {
                GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), GoalExprRep_12, 0) = ((MR_Box) (GoalReps_172));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word CanFail_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word CasesRep_34;
              MR_Word CanFailRep_35;
              MR_Integer VarRep_36;
              MR_Word Var_165;

              {
                Var_165 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_165, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[2]));
                MR_hl_field(MR_mktag(0), Var_165, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9));
                MR_hl_field(MR_mktag(0), Var_165, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_165, 3) = ((MR_Box) (Info_5));
                MR_hl_field(MR_mktag(0), Var_165, 4) = ((MR_Box) (Instmap0_6));
              }
              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[2]), Var_165, Cases_33, &CasesRep_34);
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
                GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), GoalExprRep_12, 0) = ((MR_Box) (VarRep_36));
                MR_hl_field(MR_mktag(2), GoalExprRep_12, 1) = (MR_Box) ((MR_Unsigned) (CanFailRep_35));
                MR_hl_field(MR_mktag(2), GoalExprRep_12, 2) = ((MR_Box) (CasesRep_34));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoalInfo_39;
              MR_Word OuterDetism_40;
              MR_Word InnerDetism_41;
              MR_Word MaybeCut_42;
              MR_Word SubGoal_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word SubGoalRep_174;

              SubGoalInfo_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_173, (MR_Integer) 1))));
              ll_backend__prog_rep__goal_to_goal_rep_4_p_0(Info_5, Instmap0_6, SubGoal_173, &SubGoalRep_174);
              OuterDetism_40 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_8);
              InnerDetism_41 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_39);
              succeeded = (InnerDetism_41 == OuterDetism_40);
              if (succeeded)
                MaybeCut_42 = (MR_Integer) 1;
              else
                MaybeCut_42 = (MR_Integer) 0;
              {
                GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExprRep_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExprRep_12, 1) = ((MR_Box) (SubGoalRep_174));
                MR_hl_field(MR_mktag(3), GoalExprRep_12, 2) = (MR_Box) ((MR_Unsigned) (MaybeCut_42));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word Then_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word Else_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
              MR_Word CondGoalInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_21, (MR_Integer) 1))));
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
                GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExprRep_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GoalExprRep_12, 1) = ((MR_Box) (CondRep_28));
                MR_hl_field(MR_mktag(3), GoalExprRep_12, 2) = ((MR_Box) (ThenRep_29));
                MR_hl_field(MR_mktag(3), GoalExprRep_12, 3) = ((MR_Box) (ElseRep_30));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExprRep_12));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (DetismRep_11));
      MR_hl_field(MR_mktag(0), base, 2) = NULL;
    }
  }
}

static MR_Integer MR_CALL 
ll_backend__prog_rep__var_to_var_rep_2_f_0(
  MR_Word Info_4,
  MR_Word Var_5)
{
  {
    MR_Integer Num_6;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3))));
    MR_Word Var_9;
    MR_Box conv0_Var_9;

    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), (MR_Word) (&ll_backend__prog_rep_scalar_common_2[0]), Var_8, ((MR_Box) (Var_5)), &conv0_Var_9);
    Var_9 = ((MR_Word) (conv0_Var_9));
    Num_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    return Num_6;
  }
}

static MR_String MR_CALL 
ll_backend__prog_rep__cons_id_rep_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "\044typeclass_info_cell_constructor";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "\044type_info_cell_constructor";
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_String) "\044tabling_info_const";
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_String) "\044table_io_entry_desc";
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "\044deep_profiling_proc_layout";
            break;
          case (MR_Integer) 2:
            {
              MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              if (((MR_tag((MR_Word) SymName_3)) == (MR_Integer) 1))
                HeadVar__2_2 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_3, (MR_Integer) 1))));
              else
                HeadVar__2_2 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_3, (MR_Integer) 0))));
            }
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_String) "{}";
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_String) "\044closure_cons";
            break;
          case (MR_Integer) 5:
            {
              MR_Integer Int_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              HeadVar__2_2 = mercury__string__int_to_string_1_f_0(Int_7);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned UInt_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              HeadVar__2_2 = mercury__string__uint_to_string_1_f_0(UInt_8);
            }
            break;
          case (MR_Integer) 7:
            {
              int8_t Int8_9 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = mercury__string__int8_to_string_1_f_0(Int8_9);
            }
            break;
          case (MR_Integer) 8:
            {
              uint8_t UInt8_10 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = mercury__string__uint8_to_string_1_f_0(UInt8_10);
            }
            break;
          case (MR_Integer) 9:
            {
              int16_t Int16_11 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = mercury__string__int16_to_string_1_f_0(Int16_11);
            }
            break;
          case (MR_Integer) 10:
            {
              uint16_t UInt16_12 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = mercury__string__uint16_to_string_1_f_0(UInt16_12);
            }
            break;
          case (MR_Integer) 11:
            {
              int32_t Int32_13 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = mercury__string__int32_to_string_1_f_0(Int32_13);
            }
            break;
          case (MR_Integer) 12:
            {
              uint32_t UInt32_14 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = mercury__string__uint32_to_string_1_f_0(UInt32_14);
            }
            break;
          case (MR_Integer) 13:
            {
              int64_t Int64_15 = MR_unbox_int64((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = mercury__string__int64_to_string_1_f_0(Int64_15);
            }
            break;
          case (MR_Integer) 14:
            {
              uint64_t UInt64_16 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = mercury__string__uint64_to_string_1_f_0(UInt64_16);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Float Float_17 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = mercury__string__float_to_string_1_f_0(Float_17);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Char Char_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = mercury__string__char_to_string_1_f_0(Char_18);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_String String_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String Var_21;

              Var_21 = mercury__string__f_43_43_2_f_0(String_19, (MR_String) "\"");
              HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_21);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_String Name_23 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));

              HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\044", Name_23);
            }
            break;
          case (MR_Integer) 19:
            HeadVar__2_2 = (MR_String) "\044type_ctor_info_const";
            break;
          case (MR_Integer) 20:
            HeadVar__2_2 = (MR_String) "\044base_typeclass_info_const";
            break;
          case (MR_Integer) 21:
            HeadVar__2_2 = (MR_String) "\044type_info_const";
            break;
          case (MR_Integer) 22:
            HeadVar__2_2 = (MR_String) "\044typeclass_info_const";
            break;
          case (MR_Integer) 23:
            HeadVar__2_2 = (MR_String) "\044ground_term_const";
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word Context_13;
    MR_String FileName0_14;
    MR_Word InstmapDelta_15;
    MR_Word ChangedVarsSet_16;
    MR_Word ChangedVars_17;
    MR_Word ModuleInfo_18;
    MR_Word Var_19;
    MR_String Var_33;

    Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_7);
    mercury__term__context_file_2_p_0(Context_13, &FileName0_14);
    Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))));
    succeeded = (strcmp(FileName0_14, Var_33) == 0);
    if (succeeded)
      *FileName_10 = (MR_String) "";
    else
      *FileName_10 = FileName0_14;
    mercury__term__context_line_2_p_0(Context_13, LineNo_11);
    InstmapDelta_15 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_7);
    hlds__instmap__instmap_delta_changed_vars_2_p_0(InstmapDelta_15, &ChangedVarsSet_16);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVarsSet_16, &ChangedVars_17);
    ModuleInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0))));
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_18));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (Instmap0_8));
    }
    mercury__list__negated_filter_3_p_0((MR_Word) (&ll_backend__prog_rep_scalar_common_1[3]), Var_19, ChangedVars_17, BoundVars_12);
  }
}

static void MR_CALL 
ll_backend__prog_rep__filter_input_args_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
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
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep.filter_input_args\'/4", (MR_String) "mismatched lists");
          return;
        }
      else
      {
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word MaybeVar_23;
        MR_Word MaybeVars_24;
        MR_Word RHSInitInst_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 2))));
        MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 0))));

        succeeded = check_hlds__mode_util__init_inst_is_input_2_p_0(Var_33, RHSInitInst_31);
        if (succeeded)
          {
            MaybeVar_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeVar_23, 0) = ((MR_Box) (Var_21));
          }
        else
          MaybeVar_23 = (MR_Word) ((MR_Unsigned) 0U);
        ll_backend__prog_rep__filter_input_args_4_p_0(Info_1, Var_25, Vars_22, &MaybeVars_24);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeVar_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeVars_24));
        }
      }
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_BytesCord_6;

    ll_backend__prog_rep__encode_oisu_proc_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_BytesCord_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_BytesCord_6));
  }
}

void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Integer) 0;
      *HeadVar__4_4 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    }
    else
    {
      MR_Word Pair_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Pairs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
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
      TypeCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pair_7, (MR_Integer) 0))));
      Preds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Pair_7, (MR_Integer) 1))));
      TypeCtorSymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_14, (MR_Integer) 0))));
      if (((MR_tag((MR_Word) TypeCtorSymName_16)) == (MR_Integer) 1))
      {
        TypeCtorModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_16, (MR_Integer) 0))));
        TypeCtorName_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_16, (MR_Integer) 1))));
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
        CreatorPreds_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Preds_15, (MR_Integer) 0))));
        MutatorPreds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Preds_15, (MR_Integer) 1))));
        DestructorPreds_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Preds_15, (MR_Integer) 2))));
        mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CreatorPreds_22, &NumCreatorPreds_25);
        mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), MutatorPreds_23, &NumMutatorPreds_26);
        mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), DestructorPreds_24, &NumDestructorPreds_27);
        mdbcomp__rtti_access__encode_num_det_2_p_0(NumCreatorPreds_25, &NumCreatorPredsBytes_28);
        mdbcomp__rtti_access__encode_num_det_2_p_0(NumMutatorPreds_26, &NumMutatorPredsBytes_29);
        mdbcomp__rtti_access__encode_num_det_2_p_0(NumDestructorPreds_27, &NumDestructorPredsBytes_30);
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (HeadVar__1_1));
        }
        mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[0]), Var_37, CreatorPreds_22, &CreatorPredBytes_31);
        mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[0]), Var_37, MutatorPreds_23, &MutatorPredBytes_32);
        mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&ll_backend__prog_rep_scalar_common_1[0]), Var_37, DestructorPreds_24, &DestructorPredBytes_33);
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
}

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__prog_rep____Unify____flatten_par_conjs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__prog_rep____Compare____flatten_par_conjs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__prog_rep____Unify____prog_rep_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__prog_rep____Compare____prog_rep_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__prog_rep____Unify____var_num_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__prog_rep____Compare____var_num_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
