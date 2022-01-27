/*
** Automatically generated from `prog_rep.m'
** by the Mercury compiler,
** version rotd-2017-01-21
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


/* :- module ll_backend.prog_rep. */
/* :- implementation. */

/*
INIT mercury__ll_backend__prog_rep__init
ENDINIT
*/

#include "ll_backend.prog_rep.mih"


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
#include "backend_libs.proc_label.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "ll_backend.prog_rep_tables.mih"
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
#include "std_util.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



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

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

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

static const MR_DuFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0[1];

static const MR_DuPtagLayout ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_name_ordered_prog_rep_info_0[1];

static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_prog_rep_info_0[1];

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001(
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001(
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001(
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001(
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0_10001(
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0_10001(
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
  void * ll_backend__prog_rep__env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * ll_backend__prog_rep__env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * ll_backend__prog_rep__env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
  void * ll_backend__prog_rep__env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * ll_backend__prog_rep__env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * ll_backend__prog_rep__env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
  void * ll_backend__prog_rep__env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * ll_backend__prog_rep__env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * ll_backend__prog_rep__env_ptr_arg);

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

static MR_Integer MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__VarNum2_8);

static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__317__1_2_p_0(
  MR_Word ll_backend__prog_rep__IncludeVarTypes_12,
  MR_Word ll_backend__prog_rep__HeadVar__2_36);

static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__453__1_2_p_0(
  MR_Word ll_backend__prog_rep__ConjType_13,
  MR_Word ll_backend__prog_rep__HeadVar__2_177);

static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__524__2_2_f_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_271,
  MR_Word ll_backend__prog_rep__HeadVar__2_256);

static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__524__1_2_f_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_167,
  MR_Word ll_backend__prog_rep__HeadVar__2_230);

static MR_Integer MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__597__1_3_f_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_147,
  MR_Word ll_backend__prog_rep__HeadVar__2_148,
  MR_Word ll_backend__prog_rep__HeadVar__3_243);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_method_num_func_1_f_0(
  MR_Integer ll_backend__prog_rep__VarNum_3);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_lineno_func_1_f_0(
  MR_Integer ll_backend__prog_rep__VarNum_3);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_length_func_1_f_0(
  MR_Word ll_backend__prog_rep__TypeInfo_for_T_6,
  MR_Word ll_backend__prog_rep__List_3);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_head_var_func_4_f_0(
  MR_Word ll_backend__prog_rep__Info_6,
  MR_Word ll_backend__prog_rep__InitialInstmap_7,
  MR_Word ll_backend__prog_rep__InstmapDelta_8,
  MR_Word ll_backend__prog_rep__Var_9);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(
  MR_Word ll_backend__prog_rep__Info_4,
  MR_Word ll_backend__prog_rep__MaybeVar_5);

static MR_Box MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(
  MR_Word ll_backend__prog_rep__Info_4,
  MR_Word ll_backend__prog_rep__Vars_5);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_rep_func_2_f_0(
  MR_Word ll_backend__prog_rep__Info_4,
  MR_Integer ll_backend__prog_rep__Var_5);

static MR_Integer MR_CALL 
ll_backend__prog_rep__var_to_var_rep_2_f_0(
  MR_Word ll_backend__prog_rep__Info_4,
  MR_Word ll_backend__prog_rep__Var_5);

static MR_Box MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0(
  MR_Word ll_backend__prog_rep__Info_4,
  MR_Word ll_backend__prog_rep__Vars_5);

static void MR_CALL 
ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(
  MR_String ll_backend__prog_rep__String_5,
  MR_Word * ll_backend__prog_rep__Bytes_6,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_9,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_10);

static MR_String MR_CALL 
ll_backend__prog_rep__cons_id_rep_1_f_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_1);

static void MR_CALL 
ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(
  MR_Word ll_backend__prog_rep__ConsIdArity_5,
  MR_Word * ll_backend__prog_rep__ConsIdBytes_6,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_12,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_13);

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

static void MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(
  MR_Word ll_backend__prog_rep__GoalInfo_7,
  MR_Word ll_backend__prog_rep__Instmap0_8,
  MR_Word ll_backend__prog_rep__Info_9,
  MR_String * ll_backend__prog_rep__FileName_10,
  MR_Integer * ll_backend__prog_rep__LineNo_11,
  MR_Word * ll_backend__prog_rep__BoundVars_12);

static void MR_CALL 
ll_backend__prog_rep__filter_input_args_4_p_0(
  MR_Word ll_backend__prog_rep__Info_1,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
  MR_Word * ll_backend__prog_rep__HeadVar__4_4);

static MR_bool MR_CALL 
ll_backend__prog_rep__lhs_final_is_ground_2_p_0(
  MR_Word ll_backend__prog_rep__Info_3,
  MR_Word ll_backend__prog_rep__UnifyMode_4);

static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4);

static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0(
  MR_Word ll_backend__prog_rep__Info_6,
  MR_Word ll_backend__prog_rep__Case_7,
  MR_Word * ll_backend__prog_rep__Bytes_8,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_16,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_17);

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_3(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4);

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_2(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4);

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4);

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0(
  MR_Word ll_backend__prog_rep__Info_6,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Word * ll_backend__prog_rep__Bytes_10,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);

static void MR_CALL 
ll_backend__prog_rep__detism_to_detism_rep_2_p_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
  MR_Word * ll_backend__prog_rep__HeadVar__2_2);

static void MR_CALL 
ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(
  MR_Word ll_backend__prog_rep__ConsId_3,
  MR_Word * ll_backend__prog_rep__HeadVar__2_2);

static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0(
  MR_Word ll_backend__prog_rep__Info_5,
  MR_Word ll_backend__prog_rep__Instmap_6,
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
  MR_Word * ll_backend__prog_rep__HeadVar__4_4);

static void MR_CALL 
ll_backend__prog_rep__conj_to_conj_rep_4_p_0(
  MR_Word ll_backend__prog_rep__Info_1,
  MR_Word ll_backend__prog_rep__Instmap0_2,
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
  MR_Word * ll_backend__prog_rep__HeadVar__4_4);

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(
  MR_Word ll_backend__prog_rep__VarNumRep_13,
  MR_Word ll_backend__prog_rep__VarTypes_14,
  MR_Word ll_backend__prog_rep__Var_15,
  MR_Word ll_backend__prog_rep__HeadVar__4_4,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_26,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_27,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_28,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_29,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_30,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_31,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_32,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_33);

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_4_byte_8_p_0(
  MR_Word ll_backend__prog_rep___ProgVar_9,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_2_byte_8_p_0(
  MR_Word ll_backend__prog_rep___ProgVar_9,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_1_byte_8_p_0(
  MR_Word ll_backend__prog_rep___ProgVar_9,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

static MR_Integer MR_CALL 
ll_backend__prog_rep__max_var_num_3_f_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_5,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__VarNum2_8);

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_6(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
  MR_Box * ll_backend__prog_rep__wrapper_arg_8,
  MR_Box ll_backend__prog_rep__wrapper_arg_9,
  MR_Box * ll_backend__prog_rep__wrapper_arg_10);

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_5(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
  MR_Box * ll_backend__prog_rep__wrapper_arg_8);

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_4(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
  MR_Box * ll_backend__prog_rep__wrapper_arg_8);

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_3(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
  MR_Box * ll_backend__prog_rep__wrapper_arg_8);

static MR_bool MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_2(
  MR_Box ll_backend__prog_rep__closure_arg);

static MR_Box MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3);

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0(
  MR_Word ll_backend__prog_rep__IncludeVarNameTable_11,
  MR_Word ll_backend__prog_rep__IncludeVarTypes_12,
  MR_Word ll_backend__prog_rep__VarTypes_13,
  MR_Word ll_backend__prog_rep__VarNumMap_14,
  MR_Word * ll_backend__prog_rep__VarNumRep_15,
  MR_Word * ll_backend__prog_rep__Bytes_16,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_25,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27);

static void MR_CALL 
ll_backend__prog_rep__encode_oisu_proc_3_p_0(
  MR_Word ll_backend__prog_rep__ModuleInfo_4,
  MR_Word ll_backend__prog_rep__PredId_5,
  MR_Word * ll_backend__prog_rep__BytesCord_6);

static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7(
  MR_Box ll_backend__prog_rep__closure_arg);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

static void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2);


static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_1[8][2];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_2[10][3];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_3[6][6];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_4[3][8];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_5[5][5];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_6[5][7];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_7[1][11];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_8[1][15];


/* sealed */ struct ll_backend__prog_rep__vector_common_type_9_0_s {
  const MR_Word ll_backend__prog_rep__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct ll_backend__prog_rep__vector_common_type_9_0_s ll_backend__prog_rep_vector_common_9[8];

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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_2[10][3] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_1[3])),
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[0])),
    ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[3])),
    ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[0])),
    ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[0])),
    ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[0])),
    ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[4])),
    ((MR_Box) (ll_backend__prog_rep__case_to_case_rep_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[4])),
    ((MR_Box) (ll_backend__prog_rep__encode_case_rep_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_3[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&ll_backend__prog_rep__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_4[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_5[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_maybe_include_var_types_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_maybe_include_var_types_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_6[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep____vpti_func_2__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
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


static /* final */ const struct ll_backend__prog_rep__vector_common_type_9_0_s ll_backend__prog_rep_vector_common_9[8] = {
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


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0,
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0 = {
  (MR_String) "flatten_par_conjs",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1 = {
  (MR_String) "expect_no_par_conjs",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001)),
  (MR_String) "ll_backend.prog_rep",
  (MR_String) "flatten_par_conjs",
  {     ll_backend__prog_rep__ll_backend__prog_rep__enum_name_ordered_flatten_par_conjs_0 },
  {     ll_backend__prog_rep__ll_backend__prog_rep__enum_value_ordered_flatten_par_conjs_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_flatten_par_conjs_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__prog_rep__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo ll_backend__prog_rep__ll_backend__prog_rep__field_types_prog_rep_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_num_rep_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_flatten_par_conjs_0
};

static const MR_ConstString ll_backend__prog_rep__ll_backend__prog_rep__field_names_prog_rep_info_0_0[6] = {
  (MR_String) "pri_filename",
  (MR_String) "pri_vartypes",
  (MR_String) "pri_var_num_map",
  (MR_String) "pri_var_num_rep",
  (MR_String) "pri_module_info",
  (MR_String) "pri_flatten_par_conjs"
};

static const MR_DuFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0 = {
  (MR_String) "prog_rep_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__prog_rep__ll_backend__prog_rep__field_types_prog_rep_info_0_0,
  ll_backend__prog_rep__ll_backend__prog_rep__field_names_prog_rep_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0[1] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0
};

static const MR_DuPtagLayout ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001)),
  (MR_String) "ll_backend.prog_rep",
  (MR_String) "prog_rep_info",
  {     ll_backend__prog_rep__ll_backend__prog_rep__du_name_ordered_prog_rep_info_0 },
  {     ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_prog_rep_info_0
};

const MR_TypeCtorInfo_Struct ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_var_num_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__prog_rep____Unify____var_num_map_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep____Compare____var_num_map_0_0_10001)),
  (MR_String) "ll_backend.prog_rep",
  (MR_String) "var_num_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001(
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;

    {
      ll_backend__prog_rep__succeeded = ll_backend__prog_rep____Unify____flatten_par_conjs_0_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2));
    }
    return ll_backend__prog_rep__succeeded;
  }
}

static void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001(
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3)
{
  {
    MR_Word ll_backend__prog_rep__conv0_HeadVar__1_1;

    {
      ll_backend__prog_rep____Compare____flatten_par_conjs_0_0(&ll_backend__prog_rep__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep__wrapper_arg_3));
    }
    *ll_backend__prog_rep__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001(
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;

    {
      ll_backend__prog_rep__succeeded = ll_backend__prog_rep____Unify____prog_rep_info_0_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2));
    }
    return ll_backend__prog_rep__succeeded;
  }
}

static void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001(
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3)
{
  {
    MR_Word ll_backend__prog_rep__conv0_HeadVar__1_1;

    {
      ll_backend__prog_rep____Compare____prog_rep_info_0_0(&ll_backend__prog_rep__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep__wrapper_arg_3));
    }
    *ll_backend__prog_rep__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0_10001(
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;

    {
      ll_backend__prog_rep__succeeded = ll_backend__prog_rep____Unify____var_num_map_0_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2));
    }
    return ll_backend__prog_rep__succeeded;
  }
}

static void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0_10001(
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3)
{
  {
    MR_Word ll_backend__prog_rep__conv0_HeadVar__1_1;

    {
      ll_backend__prog_rep____Compare____var_num_map_0_0(&ll_backend__prog_rep__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep__wrapper_arg_3));
    }
    *ll_backend__prog_rep__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
  void * ll_backend__prog_rep__env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

    MR_builtin_longjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4, 1);
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * ll_backend__prog_rep__env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

    {
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30);
    }
    if ((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(ll_backend__prog_rep__env_ptr);
      }
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * ll_backend__prog_rep__env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

    if (MR_builtin_setjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4) == 0)
      {
        {
          MR_Integer ll_backend__prog_rep__slot_5 = (MR_Integer) 0;

          do
            {
              (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30 = ((&ll_backend__prog_rep_vector_common_10[35 + ll_backend__prog_rep__slot_5]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
              {
                ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(ll_backend__prog_rep__env_ptr);
              }
              ll_backend__prog_rep__slot_5 = (ll_backend__prog_rep__slot_5 + (MR_Integer) 1);
            }
          while ((ll_backend__prog_rep__slot_5 < (MR_Integer) 7));
        }
        (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s ll_backend__prog_rep__env;

    {
      MR_Integer ll_backend__prog_rep__VarNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));

      (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
      {
        MR_Integer ll_backend__prog_rep__lo_0;
        MR_Integer ll_backend__prog_rep__hi_1;
        MR_Integer ll_backend__prog_rep__mid_2;
        MR_Integer ll_backend__prog_rep__result_3;

        /* binary string simple lookup switch */
        ll_backend__prog_rep__lo_0 = (MR_Integer) 0;
        ll_backend__prog_rep__hi_1 = (MR_Integer) 6;
        do
          {
            ll_backend__prog_rep__mid_2 = (((ll_backend__prog_rep__lo_0 + ll_backend__prog_rep__hi_1)) / (MR_Integer) 2);
            ll_backend__prog_rep__result_3 = MR_strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, ((&ll_backend__prog_rep_vector_common_10[28 + ll_backend__prog_rep__mid_2]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0);
            if ((ll_backend__prog_rep__result_3 == (MR_Integer) 0))
              {
                (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
                /* jump out of search loop */
                goto label_0;
              }
            else
            if ((ll_backend__prog_rep__result_3 < (MR_Integer) 0))
              ll_backend__prog_rep__hi_1 = (ll_backend__prog_rep__mid_2 - (MR_Integer) 1);
            else
              ll_backend__prog_rep__lo_0 = (ll_backend__prog_rep__mid_2 + (MR_Integer) 1);
          }
        while ((ll_backend__prog_rep__lo_0 <= ll_backend__prog_rep__hi_1));
        (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      label_0:;
      }
      if (!((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
        {
          {
            ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(&ll_backend__prog_rep__env);
          }
        }
      if ((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_22 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21;
          *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19;
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17;
        }
      else
        {
          MR_Word ll_backend__prog_rep__TypeCtorInfo_28_28;
          MR_Word ll_backend__prog_rep__VarBytes_15;
          MR_Word ll_backend__prog_rep__VarNameBytes_16;
          MR_Word ll_backend__prog_rep__V_27_27;
          MR_Integer ll_backend__prog_rep__Index_36;

          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = (ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17 + (MR_Integer) 1);
          {
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__VarNum_10, &ll_backend__prog_rep__VarBytes_15);
          }
          {
            ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &ll_backend__prog_rep__Index_36, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
          }
          {
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_36, &ll_backend__prog_rep__VarNameBytes_16);
          }
          ll_backend__prog_rep__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          {
            ll_backend__prog_rep__V_27_27 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_28_28, ll_backend__prog_rep__VarNameBytes_16, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19);
          }
          {
            *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_28_28, ll_backend__prog_rep__VarBytes_15, ll_backend__prog_rep__V_27_27);
          }
        }
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
  void * ll_backend__prog_rep__env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

    MR_builtin_longjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4, 1);
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * ll_backend__prog_rep__env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

    {
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30);
    }
    if ((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(ll_backend__prog_rep__env_ptr);
      }
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * ll_backend__prog_rep__env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

    if (MR_builtin_setjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4) == 0)
      {
        {
          MR_Integer ll_backend__prog_rep__slot_5 = (MR_Integer) 0;

          do
            {
              (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30 = ((&ll_backend__prog_rep_vector_common_10[21 + ll_backend__prog_rep__slot_5]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
              {
                ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(ll_backend__prog_rep__env_ptr);
              }
              ll_backend__prog_rep__slot_5 = (ll_backend__prog_rep__slot_5 + (MR_Integer) 1);
            }
          while ((ll_backend__prog_rep__slot_5 < (MR_Integer) 7));
        }
        (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s ll_backend__prog_rep__env;

    {
      MR_Integer ll_backend__prog_rep__VarNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));

      (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
      {
        MR_Integer ll_backend__prog_rep__lo_0;
        MR_Integer ll_backend__prog_rep__hi_1;
        MR_Integer ll_backend__prog_rep__mid_2;
        MR_Integer ll_backend__prog_rep__result_3;

        /* binary string simple lookup switch */
        ll_backend__prog_rep__lo_0 = (MR_Integer) 0;
        ll_backend__prog_rep__hi_1 = (MR_Integer) 6;
        do
          {
            ll_backend__prog_rep__mid_2 = (((ll_backend__prog_rep__lo_0 + ll_backend__prog_rep__hi_1)) / (MR_Integer) 2);
            ll_backend__prog_rep__result_3 = MR_strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, ((&ll_backend__prog_rep_vector_common_10[14 + ll_backend__prog_rep__mid_2]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0);
            if ((ll_backend__prog_rep__result_3 == (MR_Integer) 0))
              {
                (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
                /* jump out of search loop */
                goto label_0;
              }
            else
            if ((ll_backend__prog_rep__result_3 < (MR_Integer) 0))
              ll_backend__prog_rep__hi_1 = (ll_backend__prog_rep__mid_2 - (MR_Integer) 1);
            else
              ll_backend__prog_rep__lo_0 = (ll_backend__prog_rep__mid_2 + (MR_Integer) 1);
          }
        while ((ll_backend__prog_rep__lo_0 <= ll_backend__prog_rep__hi_1));
        (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      label_0:;
      }
      if (!((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
        {
          {
            ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(&ll_backend__prog_rep__env);
          }
        }
      if ((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_22 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21;
          *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19;
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17;
        }
      else
        {
          MR_Word ll_backend__prog_rep__TypeCtorInfo_28_28;
          MR_Word ll_backend__prog_rep__VarBytes_15;
          MR_Word ll_backend__prog_rep__VarNameBytes_16;
          MR_Word ll_backend__prog_rep__V_27_27;
          MR_Integer ll_backend__prog_rep__Index_36;

          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = (ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17 + (MR_Integer) 1);
          {
            mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__VarNum_10, &ll_backend__prog_rep__VarBytes_15);
          }
          {
            ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &ll_backend__prog_rep__Index_36, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
          }
          {
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_36, &ll_backend__prog_rep__VarNameBytes_16);
          }
          ll_backend__prog_rep__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          {
            ll_backend__prog_rep__V_27_27 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_28_28, ll_backend__prog_rep__VarNameBytes_16, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19);
          }
          {
            *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_28_28, ll_backend__prog_rep__VarBytes_15, ll_backend__prog_rep__V_27_27);
          }
        }
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
  void * ll_backend__prog_rep__env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

    MR_builtin_longjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4, 1);
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
  void * ll_backend__prog_rep__env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

    {
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_31);
    }
    if ((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(ll_backend__prog_rep__env_ptr);
      }
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
  void * ll_backend__prog_rep__env_ptr_arg)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

    if (MR_builtin_setjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4) == 0)
      {
        {
          MR_Integer ll_backend__prog_rep__slot_5 = (MR_Integer) 0;

          do
            {
              (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_31 = ((&ll_backend__prog_rep_vector_common_10[7 + ll_backend__prog_rep__slot_5]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
              {
                ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(ll_backend__prog_rep__env_ptr);
              }
              ll_backend__prog_rep__slot_5 = (ll_backend__prog_rep__slot_5 + (MR_Integer) 1);
            }
          while ((ll_backend__prog_rep__slot_5 < (MR_Integer) 7));
        }
        (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
{
  {
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s ll_backend__prog_rep__env;

    {
      MR_Integer ll_backend__prog_rep__VarNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));

      (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
      {
        MR_Integer ll_backend__prog_rep__lo_0;
        MR_Integer ll_backend__prog_rep__hi_1;
        MR_Integer ll_backend__prog_rep__mid_2;
        MR_Integer ll_backend__prog_rep__result_3;

        /* binary string simple lookup switch */
        ll_backend__prog_rep__lo_0 = (MR_Integer) 0;
        ll_backend__prog_rep__hi_1 = (MR_Integer) 6;
        do
          {
            ll_backend__prog_rep__mid_2 = (((ll_backend__prog_rep__lo_0 + ll_backend__prog_rep__hi_1)) / (MR_Integer) 2);
            ll_backend__prog_rep__result_3 = MR_strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, ((&ll_backend__prog_rep_vector_common_10[0 + ll_backend__prog_rep__mid_2]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0);
            if ((ll_backend__prog_rep__result_3 == (MR_Integer) 0))
              {
                (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
                /* jump out of search loop */
                goto label_0;
              }
            else
            if ((ll_backend__prog_rep__result_3 < (MR_Integer) 0))
              ll_backend__prog_rep__hi_1 = (ll_backend__prog_rep__mid_2 - (MR_Integer) 1);
            else
              ll_backend__prog_rep__lo_0 = (ll_backend__prog_rep__mid_2 + (MR_Integer) 1);
          }
        while ((ll_backend__prog_rep__lo_0 <= ll_backend__prog_rep__hi_1));
        (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      label_0:;
      }
      if (!((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
        {
          {
            ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(&ll_backend__prog_rep__env);
          }
        }
      if ((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_22 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21;
          *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19;
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17;
        }
      else
        {
          MR_Word ll_backend__prog_rep__TypeCtorInfo_29_29;
          MR_Word ll_backend__prog_rep__VarBytes_15;
          MR_Word ll_backend__prog_rep__VarNameBytes_16;
          MR_Word ll_backend__prog_rep__V_28_28;
          MR_Integer ll_backend__prog_rep__Index_37;

          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = (ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17 + (MR_Integer) 1);
          {
            ll_backend__prog_rep__VarBytes_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_15, 0) = ((MR_Box) (ll_backend__prog_rep__VarNum_10));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &ll_backend__prog_rep__Index_37, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
          }
          {
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_37, &ll_backend__prog_rep__VarNameBytes_16);
          }
          ll_backend__prog_rep__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          {
            ll_backend__prog_rep__V_28_28 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_29_29, ll_backend__prog_rep__VarNameBytes_16, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19);
          }
          {
            *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_29_29, ll_backend__prog_rep__VarBytes_15, ll_backend__prog_rep__V_28_28);
          }
        }
    }
  }
}

static MR_Integer MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__VarNum2_8)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Integer ll_backend__prog_rep__Max_9;
    MR_Integer ll_backend__prog_rep__VarNum1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
    MR_String ll_backend__prog_rep__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));

    {
      ll_backend__prog_rep__Max_9 = mercury__int__max_2_f_0(ll_backend__prog_rep__VarNum1_6, ll_backend__prog_rep__VarNum2_8);
    }
    return ll_backend__prog_rep__Max_9;
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__317__1_2_p_0(
  MR_Word ll_backend__prog_rep__IncludeVarTypes_12,
  MR_Word ll_backend__prog_rep__HeadVar__2_36)
{
  {
    MR_bool ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__IncludeVarTypes_12 == ll_backend__prog_rep__HeadVar__2_36);

    return ll_backend__prog_rep__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__453__1_2_p_0(
  MR_Word ll_backend__prog_rep__ConjType_13,
  MR_Word ll_backend__prog_rep__HeadVar__2_177)
{
  {
    MR_bool ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__ConjType_13 == ll_backend__prog_rep__HeadVar__2_177);

    return ll_backend__prog_rep__succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__524__2_2_f_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_271,
  MR_Word ll_backend__prog_rep__HeadVar__2_256)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__HeadVar__3_257;

    {
      ll_backend__prog_rep__HeadVar__3_257 = mercury__maybe__map_maybe_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__HeadVar__1_271, ll_backend__prog_rep__HeadVar__2_256);
    }
    return ll_backend__prog_rep__HeadVar__3_257;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__524__1_2_f_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_167,
  MR_Word ll_backend__prog_rep__HeadVar__2_230)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__HeadVar__3_231;

    {
      ll_backend__prog_rep__HeadVar__3_231 = mercury__maybe__map_maybe_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__HeadVar__1_167, ll_backend__prog_rep__HeadVar__2_230);
    }
    return ll_backend__prog_rep__HeadVar__3_231;
  }
}

static MR_Integer MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__597__1_3_f_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_147,
  MR_Word ll_backend__prog_rep__HeadVar__2_148,
  MR_Word ll_backend__prog_rep__HeadVar__3_243)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Integer ll_backend__prog_rep__HeadVar__4_244;
    MR_Box ll_backend__prog_rep__conv0_HeadVar__4_244;

    {
      ll_backend__prog_rep__conv0_HeadVar__4_244 = mercury__std_util__compose_3_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ll_backend__prog_rep__HeadVar__1_147, ll_backend__prog_rep__HeadVar__2_148, ((MR_Box) (ll_backend__prog_rep__HeadVar__3_243)));
    }
    ll_backend__prog_rep__HeadVar__4_244 = ((MR_Integer) ll_backend__prog_rep__conv0_HeadVar__4_244);
    return ll_backend__prog_rep__HeadVar__4_244;
  }
}

void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0(
  MR_Word * ll_backend__prog_rep__HeadVar__1_1,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Word ll_backend__prog_rep__HeadVar__3_3)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__Cast_HeadVar1_4 = ll_backend__prog_rep__HeadVar__2_2;
    MR_Word ll_backend__prog_rep__Cast_HeadVar2_5 = ll_backend__prog_rep__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_2[2], ll_backend__prog_rep__HeadVar__1_1, ((MR_Box) (ll_backend__prog_rep__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__prog_rep__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
  MR_Word ll_backend__prog_rep__HeadVar__2_2)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__Cast_HeadVar1_3 = ll_backend__prog_rep__HeadVar__1_1;
    MR_Word ll_backend__prog_rep__Cast_HeadVar2_4 = ll_backend__prog_rep__HeadVar__2_2;

    {
      ll_backend__prog_rep__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_2[2], ((MR_Box) (ll_backend__prog_rep__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__prog_rep__Cast_HeadVar2_4)));
    }
    return ll_backend__prog_rep__succeeded;
  }
}

void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0(
  MR_Word * ll_backend__prog_rep__HeadVar__1_1,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Word ll_backend__prog_rep__HeadVar__3_3)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Integer ll_backend__prog_rep__CastX_21 = (MR_Integer) ll_backend__prog_rep__HeadVar__2_2;
    MR_Integer ll_backend__prog_rep__CastY_22 = (MR_Integer) ll_backend__prog_rep__HeadVar__3_3;

    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__CastX_21 == ll_backend__prog_rep__CastY_22);
    if (ll_backend__prog_rep__succeeded)
      *ll_backend__prog_rep__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String ll_backend__prog_rep__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__prog_rep__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__prog_rep__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__prog_rep__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__prog_rep__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 5)));
        MR_String ll_backend__prog_rep__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word ll_backend__prog_rep__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ll_backend__prog_rep__V_16_16;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__prog_rep__V_16_16, ll_backend__prog_rep__V_4_4, ll_backend__prog_rep__V_10_10);
        }
        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_16_16 == (MR_Integer) 0);
        ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
        if (ll_backend__prog_rep__succeeded)
          *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_16_16;
        else
          {
            MR_Word ll_backend__prog_rep__V_17_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_2[1], &ll_backend__prog_rep__V_17_17, ((MR_Box) (ll_backend__prog_rep__V_5_5)), ((MR_Box) (ll_backend__prog_rep__V_11_11)));
            }
            ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_17_17 == (MR_Integer) 0);
            ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
            if (ll_backend__prog_rep__succeeded)
              *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_17_17;
            else
              {
                MR_Word ll_backend__prog_rep__V_18_18;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_2[2], &ll_backend__prog_rep__V_18_18, ((MR_Box) (ll_backend__prog_rep__V_6_6)), ((MR_Box) (ll_backend__prog_rep__V_12_12)));
                }
                ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_18_18 == (MR_Integer) 0);
                ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
                if (ll_backend__prog_rep__succeeded)
                  *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_18_18;
                else
                  {
                    MR_Word ll_backend__prog_rep__V_19_19;
                    MR_Integer ll_backend__prog_rep__V_29_29 = (MR_Integer) ll_backend__prog_rep__V_7_7;
                    MR_Integer ll_backend__prog_rep__V_30_30 = (MR_Integer) ll_backend__prog_rep__V_13_13;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__prog_rep__V_19_19, ll_backend__prog_rep__V_29_29, ll_backend__prog_rep__V_30_30);
                    }
                    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_19_19 == (MR_Integer) 0);
                    ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
                    if (ll_backend__prog_rep__succeeded)
                      *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_19_19;
                    else
                      {
                        MR_Word ll_backend__prog_rep__V_20_20;

                        {
                          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__prog_rep__V_20_20, ll_backend__prog_rep__V_8_8, ll_backend__prog_rep__V_14_14);
                        }
                        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_20_20 == (MR_Integer) 0);
                        ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
                        if (ll_backend__prog_rep__succeeded)
                          *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_20_20;
                        else
                          {
                            MR_Integer ll_backend__prog_rep__V_31_31 = (MR_Integer) ll_backend__prog_rep__V_9_9;
                            MR_Integer ll_backend__prog_rep__V_32_32 = (MR_Integer) ll_backend__prog_rep__V_15_15;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__prog_rep__HeadVar__1_1, ll_backend__prog_rep__V_31_31, ll_backend__prog_rep__V_32_32);
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
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
  MR_Word ll_backend__prog_rep__HeadVar__2_2)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Integer ll_backend__prog_rep__CastX_15 = (MR_Integer) ll_backend__prog_rep__HeadVar__1_1;
    MR_Integer ll_backend__prog_rep__CastY_16 = (MR_Integer) ll_backend__prog_rep__HeadVar__2_2;

    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__CastX_15 == ll_backend__prog_rep__CastY_16);
    if (ll_backend__prog_rep__succeeded)
      ll_backend__prog_rep__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__prog_rep__TypeInfo_17_17;
        MR_Word ll_backend__prog_rep__TypeInfo_18_18;
        MR_String ll_backend__prog_rep__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__prog_rep__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__prog_rep__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__prog_rep__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word ll_backend__prog_rep__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 5)));
        MR_String ll_backend__prog_rep__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 5)));

        ll_backend__prog_rep__succeeded = (strcmp(ll_backend__prog_rep__V_3_3, ll_backend__prog_rep__V_9_9) == 0);
        if (ll_backend__prog_rep__succeeded)
          {
            ll_backend__prog_rep__TypeInfo_17_17 = (MR_Word) &ll_backend__prog_rep_scalar_common_2[1];
            {
              ll_backend__prog_rep__succeeded = mercury__builtin__unify_2_p_0(ll_backend__prog_rep__TypeInfo_17_17, ((MR_Box) (ll_backend__prog_rep__V_4_4)), ((MR_Box) (ll_backend__prog_rep__V_10_10)));
            }
            if (ll_backend__prog_rep__succeeded)
              {
                ll_backend__prog_rep__TypeInfo_18_18 = (MR_Word) &ll_backend__prog_rep_scalar_common_2[2];
                {
                  ll_backend__prog_rep__succeeded = mercury__builtin__unify_2_p_0(ll_backend__prog_rep__TypeInfo_18_18, ((MR_Box) (ll_backend__prog_rep__V_5_5)), ((MR_Box) (ll_backend__prog_rep__V_11_11)));
                }
                if (ll_backend__prog_rep__succeeded)
                  {
                    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_6_6 == ll_backend__prog_rep__V_12_12);
                    if (ll_backend__prog_rep__succeeded)
                      {
                        {
                          ll_backend__prog_rep__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__prog_rep__V_7_7, ll_backend__prog_rep__V_13_13);
                        }
                        if (ll_backend__prog_rep__succeeded)
                          ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_8_8 == ll_backend__prog_rep__V_14_14);
                      }
                  }
              }
          }
      }
    return ll_backend__prog_rep__succeeded;
  }
}

void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0(
  MR_Word * ll_backend__prog_rep__HeadVar__1_1,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Word ll_backend__prog_rep__HeadVar__3_3)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Integer ll_backend__prog_rep__Cast_HeadVar1_4 = (MR_Integer) ll_backend__prog_rep__HeadVar__2_2;
    MR_Integer ll_backend__prog_rep__Cast_HeadVar2_5 = (MR_Integer) ll_backend__prog_rep__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__prog_rep__HeadVar__1_1, ll_backend__prog_rep__Cast_HeadVar1_4, ll_backend__prog_rep__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0(
  MR_Word ll_backend__prog_rep__HeadVar__2_1,
  MR_Word ll_backend__prog_rep__HeadVar__2_2)
{
  {
    MR_bool ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__HeadVar__2_1 == ll_backend__prog_rep__HeadVar__2_2);

    return ll_backend__prog_rep__succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_method_num_func_1_f_0(
  MR_Integer ll_backend__prog_rep__VarNum_3)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__Bytes_4;

    {
      mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__VarNum_3, &ll_backend__prog_rep__Bytes_4);
    }
    return ll_backend__prog_rep__Bytes_4;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_lineno_func_1_f_0(
  MR_Integer ll_backend__prog_rep__VarNum_3)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__Bytes_4;

    {
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__VarNum_3, &ll_backend__prog_rep__Bytes_4);
    }
    return ll_backend__prog_rep__Bytes_4;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_length_func_1_f_0(
  MR_Word ll_backend__prog_rep__TypeInfo_for_T_6,
  MR_Word ll_backend__prog_rep__List_3)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__Bytes_4;
    MR_Integer ll_backend__prog_rep__V_5_5;

    {
      ll_backend__prog_rep__V_5_5 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeInfo_for_T_6, ll_backend__prog_rep__List_3);
    }
    {
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_5_5, &ll_backend__prog_rep__Bytes_4);
    }
    return ll_backend__prog_rep__Bytes_4;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_head_var_func_4_f_0(
  MR_Word ll_backend__prog_rep__Info_6,
  MR_Word ll_backend__prog_rep__InitialInstmap_7,
  MR_Word ll_backend__prog_rep__InstmapDelta_8,
  MR_Word ll_backend__prog_rep__Var_9)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__Bytes_10;
    MR_Word ll_backend__prog_rep__VarBytes_11;
    MR_Word ll_backend__prog_rep__ModuleInfo_12;
    MR_Word ll_backend__prog_rep__InitialInst_13;
    MR_Word ll_backend__prog_rep__FinalInst_15;
    MR_Integer ll_backend__prog_rep__V_16_16;
    MR_Word ll_backend__prog_rep__V_17_17;
    MR_Integer ll_backend__prog_rep__V_18_18;
    MR_Word ll_backend__prog_rep__V_19_19;
    MR_Integer ll_backend__prog_rep__V_20_20;
    MR_Word ll_backend__prog_rep__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 2)));
    MR_Word ll_backend__prog_rep__V_33_33;
    MR_Word ll_backend__prog_rep__VarNumRep_44;
    MR_Word ll_backend__prog_rep__InstRep_55;
    MR_Word ll_backend__prog_rep__InstRep_60;
    MR_String ll_backend__prog_rep__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 0)));
    MR_Word ll_backend__prog_rep__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 3)));
    MR_Word ll_backend__prog_rep__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 4)));
    MR_Word ll_backend__prog_rep__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 5)));
    MR_Box ll_backend__prog_rep__conv0_V_33_33;
    MR_String ll_backend__prog_rep__V_31_31;
    MR_String ll_backend__prog_rep__V_46_46;
    MR_Word ll_backend__prog_rep__V_47_47;
    MR_Word ll_backend__prog_rep__V_48_48;
    MR_Word ll_backend__prog_rep__V_50_50;
    MR_Word ll_backend__prog_rep__FinalInstPrime_14;

    {
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &ll_backend__prog_rep_scalar_common_2[0], ll_backend__prog_rep__V_32_32, ((MR_Box) (ll_backend__prog_rep__Var_9)), &ll_backend__prog_rep__conv0_V_33_33);
    }
    ll_backend__prog_rep__V_33_33 = ((MR_Word) ll_backend__prog_rep__conv0_V_33_33);
    ll_backend__prog_rep__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_33_33, (MR_Integer) 0)));
    ll_backend__prog_rep__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_33_33, (MR_Integer) 1)));
    ll_backend__prog_rep__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 0)));
    ll_backend__prog_rep__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 1)));
    ll_backend__prog_rep__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 2)));
    ll_backend__prog_rep__VarNumRep_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 3)));
    ll_backend__prog_rep__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 4)));
    ll_backend__prog_rep__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 5)));
    switch (ll_backend__prog_rep__VarNumRep_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__prog_rep__VarBytes_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_11, 0) = ((MR_Box) (ll_backend__prog_rep__V_16_16));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__V_16_16, &ll_backend__prog_rep__VarBytes_11);
        }
        break;
      case (MR_Integer) 2:
        {
          mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_16_16, &ll_backend__prog_rep__VarBytes_11);
        }
        break;
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__prog_rep__InitialInstmap_7, ll_backend__prog_rep__Var_9, &ll_backend__prog_rep__InitialInst_13);
    }
    {
      ll_backend__prog_rep__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(ll_backend__prog_rep__InstmapDelta_8, ll_backend__prog_rep__Var_9, &ll_backend__prog_rep__FinalInstPrime_14);
    }
    if (ll_backend__prog_rep__succeeded)
      ll_backend__prog_rep__FinalInst_15 = ll_backend__prog_rep__FinalInstPrime_14;
    else
      ll_backend__prog_rep__FinalInst_15 = ll_backend__prog_rep__InitialInst_13;
    if ((ll_backend__prog_rep__InitialInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__prog_rep__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) ll_backend__prog_rep__InitialInst_13)) == (MR_mktag((MR_Integer) 1))))
      ll_backend__prog_rep__succeeded = MR_TRUE;
    else
      ll_backend__prog_rep__succeeded = MR_FALSE;
    if (ll_backend__prog_rep__succeeded)
      ll_backend__prog_rep__InstRep_55 = (MR_Integer) 0;
    else
      {
        {
          ll_backend__prog_rep__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ll_backend__prog_rep__ModuleInfo_12, ll_backend__prog_rep__InitialInst_13);
        }
        if (ll_backend__prog_rep__succeeded)
          ll_backend__prog_rep__InstRep_55 = (MR_Integer) 1;
        else
          ll_backend__prog_rep__InstRep_55 = (MR_Integer) 2;
      }
    {
      mdbcomp__program_representation__inst_representation_2_p_0(ll_backend__prog_rep__InstRep_55, &ll_backend__prog_rep__V_18_18);
    }
    if ((ll_backend__prog_rep__FinalInst_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__prog_rep__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) ll_backend__prog_rep__FinalInst_15)) == (MR_mktag((MR_Integer) 1))))
      ll_backend__prog_rep__succeeded = MR_TRUE;
    else
      ll_backend__prog_rep__succeeded = MR_FALSE;
    if (ll_backend__prog_rep__succeeded)
      ll_backend__prog_rep__InstRep_60 = (MR_Integer) 0;
    else
      {
        {
          ll_backend__prog_rep__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ll_backend__prog_rep__ModuleInfo_12, ll_backend__prog_rep__FinalInst_15);
        }
        if (ll_backend__prog_rep__succeeded)
          ll_backend__prog_rep__InstRep_60 = (MR_Integer) 1;
        else
          ll_backend__prog_rep__InstRep_60 = (MR_Integer) 2;
      }
    {
      mdbcomp__program_representation__inst_representation_2_p_0(ll_backend__prog_rep__InstRep_60, &ll_backend__prog_rep__V_20_20);
    }
    {
      ll_backend__prog_rep__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_19_19, 0) = ((MR_Box) (ll_backend__prog_rep__V_20_20));
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__prog_rep__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_17_17, 0) = ((MR_Box) (ll_backend__prog_rep__V_18_18));
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_17_17, 1) = ((MR_Box) (ll_backend__prog_rep__V_19_19));
    }
    {
      ll_backend__prog_rep__Bytes_10 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__VarBytes_11, ll_backend__prog_rep__V_17_17);
    }
    return ll_backend__prog_rep__Bytes_10;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(
  MR_Word ll_backend__prog_rep__Info_4,
  MR_Word ll_backend__prog_rep__MaybeVar_5)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__Bytes_6;

    if ((ll_backend__prog_rep__MaybeVar_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__prog_rep__Bytes_6 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__prog_rep_scalar_common_1[7]);
      }
    else
      {
        MR_Integer ll_backend__prog_rep__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__MaybeVar_5, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep__V_11_11;
        MR_Word ll_backend__prog_rep__VarNumRep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 3)));
        MR_String ll_backend__prog_rep__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 1)));
        MR_Word ll_backend__prog_rep__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 2)));
        MR_Word ll_backend__prog_rep__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 4)));
        MR_Word ll_backend__prog_rep__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 5)));

        switch (ll_backend__prog_rep__VarNumRep_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                ll_backend__prog_rep__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_11_11, 0) = ((MR_Box) (ll_backend__prog_rep__Var_7));
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__Var_7, &ll_backend__prog_rep__V_11_11);
            }
            break;
          case (MR_Integer) 2:
            {
              mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Var_7, &ll_backend__prog_rep__V_11_11);
            }
            break;
        }
        {
          ll_backend__prog_rep__Bytes_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Bytes_6, 0) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Bytes_6, 1) = ((MR_Box) (ll_backend__prog_rep__V_11_11));
        }
      }
    return ll_backend__prog_rep__Bytes_6;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
{
  {
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv0_Bytes_6;

    {
      ll_backend__prog_rep__conv0_Bytes_6 = ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_Bytes_6));
    return ll_backend__prog_rep__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(
  MR_Word ll_backend__prog_rep__Info_4,
  MR_Word ll_backend__prog_rep__Vars_5)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__HeadVar__3_3;
    MR_Word ll_backend__prog_rep__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word ll_backend__prog_rep__TypeInfo_11_11 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[5];
    MR_Word ll_backend__prog_rep__V_6_6;
    MR_Word ll_backend__prog_rep__V_7_7;
    MR_Word ll_backend__prog_rep__V_8_8;
    MR_Word ll_backend__prog_rep__V_9_9;
    MR_Integer ll_backend__prog_rep__V_17_17;

    {
      ll_backend__prog_rep__V_17_17 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeInfo_11_11, ll_backend__prog_rep__Vars_5);
    }
    {
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_17_17, &ll_backend__prog_rep__V_6_6);
    }
    {
      ll_backend__prog_rep__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 1) = ((MR_Box) (ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 3) = ((MR_Box) (ll_backend__prog_rep__Info_4));
    }
    {
      ll_backend__prog_rep__V_8_8 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_11_11, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], ll_backend__prog_rep__V_9_9, ll_backend__prog_rep__Vars_5);
    }
    {
      ll_backend__prog_rep__V_7_7 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__V_8_8);
    }
    {
      ll_backend__prog_rep__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__V_6_6, ll_backend__prog_rep__V_7_7);
    }
    return ll_backend__prog_rep__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_rep_func_2_f_0(
  MR_Word ll_backend__prog_rep__Info_4,
  MR_Integer ll_backend__prog_rep__Var_5)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__Bytes_6;
    MR_Word ll_backend__prog_rep__VarNumRep_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 3)));
    MR_String ll_backend__prog_rep__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 0)));
    MR_Word ll_backend__prog_rep__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 2)));
    MR_Word ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 4)));
    MR_Word ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 5)));

    switch (ll_backend__prog_rep__VarNumRep_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__prog_rep__Bytes_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Bytes_6, 0) = ((MR_Box) (ll_backend__prog_rep__Var_5));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Bytes_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__Var_5, &ll_backend__prog_rep__Bytes_6);
        }
        break;
      case (MR_Integer) 2:
        {
          mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Var_5, &ll_backend__prog_rep__Bytes_6);
        }
        break;
    }
    return ll_backend__prog_rep__Bytes_6;
  }
}

static MR_Integer MR_CALL 
ll_backend__prog_rep__var_to_var_rep_2_f_0(
  MR_Word ll_backend__prog_rep__Info_4,
  MR_Word ll_backend__prog_rep__Var_5)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Integer ll_backend__prog_rep__Num_6;
    MR_Word ll_backend__prog_rep__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 2)));
    MR_Word ll_backend__prog_rep__V_9_9;
    MR_String ll_backend__prog_rep__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 0)));
    MR_Word ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 3)));
    MR_Word ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 4)));
    MR_Word ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 5)));
    MR_Box ll_backend__prog_rep__conv0_V_9_9;
    MR_String ll_backend__prog_rep__V_7_7;

    {
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &ll_backend__prog_rep_scalar_common_2[0], ll_backend__prog_rep__V_8_8, ((MR_Box) (ll_backend__prog_rep__Var_5)), &ll_backend__prog_rep__conv0_V_9_9);
    }
    ll_backend__prog_rep__V_9_9 = ((MR_Word) ll_backend__prog_rep__conv0_V_9_9);
    ll_backend__prog_rep__Num_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, (MR_Integer) 0)));
    ll_backend__prog_rep__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, (MR_Integer) 1)));
    return ll_backend__prog_rep__Num_6;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
{
  {
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv0_Bytes_6;

    {
      ll_backend__prog_rep__conv0_Bytes_6 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_1));
    }
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_Bytes_6));
    return ll_backend__prog_rep__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0(
  MR_Word ll_backend__prog_rep__Info_4,
  MR_Word ll_backend__prog_rep__Vars_5)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__HeadVar__3_3;
    MR_Word ll_backend__prog_rep__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word ll_backend__prog_rep__V_6_6;
    MR_Word ll_backend__prog_rep__V_7_7;
    MR_Word ll_backend__prog_rep__V_8_8;
    MR_Word ll_backend__prog_rep__V_9_9;
    MR_Integer ll_backend__prog_rep__V_16_16;

    {
      ll_backend__prog_rep__V_16_16 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__Vars_5);
    }
    {
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_16_16, &ll_backend__prog_rep__V_6_6);
    }
    {
      ll_backend__prog_rep__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 1) = ((MR_Box) (ll_backend__prog_rep__encode_var_reps_func_2_f_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 3) = ((MR_Box) (ll_backend__prog_rep__Info_4));
    }
    {
      ll_backend__prog_rep__V_8_8 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], ll_backend__prog_rep__V_9_9, ll_backend__prog_rep__Vars_5);
    }
    {
      ll_backend__prog_rep__V_7_7 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__V_8_8);
    }
    {
      ll_backend__prog_rep__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__V_6_6, ll_backend__prog_rep__V_7_7);
    }
    return ll_backend__prog_rep__HeadVar__3_3;
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(
  MR_String ll_backend__prog_rep__String_5,
  MR_Word * ll_backend__prog_rep__Bytes_6,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_9,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_10)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Integer ll_backend__prog_rep__Index_8;

    {
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__String_5, &ll_backend__prog_rep__Index_8, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_9, ll_backend__prog_rep__STATE_VARIABLE_StringTable_10);
    }
    {
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_8, ll_backend__prog_rep__Bytes_6);
    }
  }
}

static MR_String MR_CALL 
ll_backend__prog_rep__cons_id_rep_1_f_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_1)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_String ll_backend__prog_rep__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044typeclass_info_cell_constructor";
        break;
      case (MR_Integer) 1:
        ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044type_info_cell_constructor";
        break;
      case (MR_Integer) 2:
        ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044tabling_info_const";
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044table_io_entry_desc";
            break;
          case (MR_Integer) 1:
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044deep_profiling_proc_layout";
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__prog_rep__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ll_backend__prog_rep__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__prog_rep__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 3)));

              if (((MR_tag((MR_Word) ll_backend__prog_rep__SymName_3)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word ll_backend__prog_rep__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__SymName_3, (MR_Integer) 0)));

                  ll_backend__prog_rep__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__SymName_3, (MR_Integer) 1)));
                }
              else
                ll_backend__prog_rep__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__SymName_3, (MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 3:
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "{}";
            break;
          case (MR_Integer) 4:
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044closure_cons";
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ll_backend__prog_rep__Int_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__prog_rep__HeadVar__2_2 = mercury__string__int_to_string_1_f_0(ll_backend__prog_rep__Int_7);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned ll_backend__prog_rep__UInt_8 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__prog_rep__HeadVar__2_2 = mercury__string__uint_to_string_1_f_0(ll_backend__prog_rep__UInt_8);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Float ll_backend__prog_rep__Float_9 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__prog_rep__HeadVar__2_2 = mercury__string__float_to_string_1_f_0(ll_backend__prog_rep__Float_9);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Char ll_backend__prog_rep__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__prog_rep__HeadVar__2_2 = mercury__string__char_to_string_1_f_0(ll_backend__prog_rep__Char_10);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String ll_backend__prog_rep__String_11 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));
              MR_String ll_backend__prog_rep__V_13_13;

              {
                ll_backend__prog_rep__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__prog_rep__String_11, (MR_String) "\"");
              }
              {
                ll_backend__prog_rep__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__prog_rep__V_13_13);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String ll_backend__prog_rep__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__prog_rep__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__prog_rep__Name_15);
              }
            }
            break;
          case (MR_Integer) 11:
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044type_ctor_info_const";
            break;
          case (MR_Integer) 12:
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044base_typeclass_info_const";
            break;
          case (MR_Integer) 13:
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044type_info_const";
            break;
          case (MR_Integer) 14:
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044typeclass_info_const";
            break;
          case (MR_Integer) 15:
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044ground_term_const";
            break;
        }
        break;
    }
    return ll_backend__prog_rep__HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(
  MR_Word ll_backend__prog_rep__ConsIdArity_5,
  MR_Word * ll_backend__prog_rep__ConsIdBytes_6,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_12,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_13)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_String ll_backend__prog_rep__ConsId_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ConsIdArity_5, (MR_Integer) 0)));
    MR_Integer ll_backend__prog_rep__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ConsIdArity_5, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep__FunctorBytes_10;
    MR_Word ll_backend__prog_rep__ArityBytes_11;
    MR_Integer ll_backend__prog_rep__Index_21;

    {
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__ConsId_8, &ll_backend__prog_rep__Index_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_12, ll_backend__prog_rep__STATE_VARIABLE_StringTable_13);
    }
    {
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_21, &ll_backend__prog_rep__FunctorBytes_10);
    }
    {
      mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__Arity_9, &ll_backend__prog_rep__ArityBytes_11);
    }
    {
      *ll_backend__prog_rep__ConsIdBytes_6 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__FunctorBytes_10, ll_backend__prog_rep__ArityBytes_11);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;

    {
      ll_backend__prog_rep__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
    return ll_backend__prog_rep__succeeded;
  }
}

static void MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(
  MR_Word ll_backend__prog_rep__GoalInfo_7,
  MR_Word ll_backend__prog_rep__Instmap0_8,
  MR_Word ll_backend__prog_rep__Info_9,
  MR_String * ll_backend__prog_rep__FileName_10,
  MR_Integer * ll_backend__prog_rep__LineNo_11,
  MR_Word * ll_backend__prog_rep__BoundVars_12)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__Context_13;
    MR_String ll_backend__prog_rep__FileName0_14;
    MR_Word ll_backend__prog_rep__InstmapDelta_15;
    MR_Word ll_backend__prog_rep__ChangedVarsSet_16;
    MR_Word ll_backend__prog_rep__ChangedVars_17;
    MR_Word ll_backend__prog_rep__ModuleInfo_18;
    MR_Word ll_backend__prog_rep__V_19_19;
    MR_String ll_backend__prog_rep__V_33_33;
    MR_Word ll_backend__prog_rep__V_20_20;
    MR_Word ll_backend__prog_rep__V_21_21;
    MR_Word ll_backend__prog_rep__V_22_22;
    MR_Word ll_backend__prog_rep__V_23_23;
    MR_Word ll_backend__prog_rep__V_24_24;
    MR_String ll_backend__prog_rep__V_25_25;
    MR_Word ll_backend__prog_rep__V_26_26;
    MR_Word ll_backend__prog_rep__V_27_27;
    MR_Word ll_backend__prog_rep__V_28_28;
    MR_Word ll_backend__prog_rep__V_29_29;

    {
      ll_backend__prog_rep__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__prog_rep__GoalInfo_7);
    }
    {
      mercury__term__context_file_2_p_0(ll_backend__prog_rep__Context_13, &ll_backend__prog_rep__FileName0_14);
    }
    ll_backend__prog_rep__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 0)));
    ll_backend__prog_rep__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 1)));
    ll_backend__prog_rep__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 2)));
    ll_backend__prog_rep__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 3)));
    ll_backend__prog_rep__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 4)));
    ll_backend__prog_rep__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 5)));
    ll_backend__prog_rep__succeeded = (strcmp(ll_backend__prog_rep__FileName0_14, ll_backend__prog_rep__V_33_33) == 0);
    if (ll_backend__prog_rep__succeeded)
      *ll_backend__prog_rep__FileName_10 = (MR_String) "";
    else
      *ll_backend__prog_rep__FileName_10 = ll_backend__prog_rep__FileName0_14;
    {
      mercury__term__context_line_2_p_0(ll_backend__prog_rep__Context_13, ll_backend__prog_rep__LineNo_11);
    }
    {
      ll_backend__prog_rep__InstmapDelta_15 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__prog_rep__GoalInfo_7);
    }
    {
      hlds__instmap__instmap_delta_changed_vars_2_p_0(ll_backend__prog_rep__InstmapDelta_15, &ll_backend__prog_rep__ChangedVarsSet_16);
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__prog_rep__ChangedVarsSet_16, &ll_backend__prog_rep__ChangedVars_17);
    }
    ll_backend__prog_rep__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 0)));
    ll_backend__prog_rep__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 1)));
    ll_backend__prog_rep__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 2)));
    ll_backend__prog_rep__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 3)));
    ll_backend__prog_rep__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 4)));
    ll_backend__prog_rep__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 5)));
    {
      ll_backend__prog_rep__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_19_19, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_19_19, 1) = ((MR_Box) (ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_19_19, 3) = ((MR_Box) (ll_backend__prog_rep__ModuleInfo_18));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_19_19, 4) = ((MR_Box) (ll_backend__prog_rep__Instmap0_8));
    }
    {
      mercury__list__negated_filter_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], ll_backend__prog_rep__V_19_19, ll_backend__prog_rep__ChangedVars_17, ll_backend__prog_rep__BoundVars_12);
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__filter_input_args_4_p_0(
  MR_Word ll_backend__prog_rep__Info_1,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
  MR_Word * ll_backend__prog_rep__HeadVar__4_4)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;

    if ((ll_backend__prog_rep__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__prog_rep__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__prog_rep__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.filter_input_args\'/4", (MR_String) "mismatched lists");
            return;
          }
        }
    else
      {
        MR_Word ll_backend__prog_rep__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__prog_rep__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));

        if ((ll_backend__prog_rep__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.filter_input_args\'/4", (MR_String) "mismatched lists");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__prog_rep__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ll_backend__prog_rep__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word ll_backend__prog_rep__MaybeVar_25;
            MR_Word ll_backend__prog_rep__MaybeVars_26;
            MR_Word ll_backend__prog_rep__RHSFromToInsts_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_28_28, (MR_Integer) 1)));
            MR_Word ll_backend__prog_rep__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 4)));
            MR_Word ll_backend__prog_rep__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_28_28, (MR_Integer) 0)));
            MR_String ll_backend__prog_rep__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 0)));
            MR_Word ll_backend__prog_rep__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 1)));
            MR_Word ll_backend__prog_rep__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 2)));
            MR_Word ll_backend__prog_rep__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 3)));
            MR_Word ll_backend__prog_rep__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 5)));

            {
              ll_backend__prog_rep__succeeded = check_hlds__mode_util__from_to_insts_is_input_2_p_0(ll_backend__prog_rep__V_33_33, ll_backend__prog_rep__RHSFromToInsts_32);
            }
            if (ll_backend__prog_rep__succeeded)
              {
                ll_backend__prog_rep__MaybeVar_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__MaybeVar_25, 0) = ((MR_Box) (ll_backend__prog_rep__Var_23));
              }
            else
              ll_backend__prog_rep__MaybeVar_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_1, ll_backend__prog_rep__V_27_27, ll_backend__prog_rep__Vars_24, &ll_backend__prog_rep__MaybeVars_26);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__prog_rep__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep__MaybeVar_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__prog_rep__MaybeVars_26));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__lhs_final_is_ground_2_p_0(
  MR_Word ll_backend__prog_rep__Info_3,
  MR_Word ll_backend__prog_rep__UnifyMode_4)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__LHSFinalInst_6;
    MR_Word ll_backend__prog_rep__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__UnifyMode_4, (MR_Integer) 0)));
    MR_Word ll_backend__prog_rep__V_9_9;
    MR_Word ll_backend__prog_rep__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__UnifyMode_4, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_8_8, (MR_Integer) 0)));
    MR_String ll_backend__prog_rep__V_10_10;
    MR_Word ll_backend__prog_rep__V_11_11;
    MR_Word ll_backend__prog_rep__V_12_12;
    MR_Word ll_backend__prog_rep__V_13_13;
    MR_Word ll_backend__prog_rep__V_14_14;

    ll_backend__prog_rep__LHSFinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_8_8, (MR_Integer) 1)));
    ll_backend__prog_rep__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 0)));
    ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 1)));
    ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 2)));
    ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 3)));
    ll_backend__prog_rep__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 4)));
    ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 5)));
    {
      ll_backend__prog_rep__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ll_backend__prog_rep__V_9_9, ll_backend__prog_rep__LHSFinalInst_6);
    }
    return ll_backend__prog_rep__succeeded;
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4)
{
  {
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv1_ConsIdBytes_6;
    MR_Word ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_13;

    {
      ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv1_ConsIdBytes_6, ((MR_Word) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_13);
    }
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv1_ConsIdBytes_6));
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_13));
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0(
  MR_Word ll_backend__prog_rep__Info_6,
  MR_Word ll_backend__prog_rep__Case_7,
  MR_Word * ll_backend__prog_rep__Bytes_8,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_16,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_17)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__TypeCtorInfo_30_30;
    MR_Word ll_backend__prog_rep__TypeCtorInfo_33_33;
    MR_Word ll_backend__prog_rep__MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Case_7, (MR_Integer) 0)));
    MR_Word ll_backend__prog_rep__OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Case_7, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Case_7, (MR_Integer) 2)));
    MR_Word ll_backend__prog_rep__GoalBytes_13;
    MR_Word ll_backend__prog_rep__MainConsIdBytes_14;
    MR_Word ll_backend__prog_rep__OtherConsIdsByteLists_15;
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_18_18;
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_19_19;
    MR_Word ll_backend__prog_rep__V_22_22;
    MR_Word ll_backend__prog_rep__V_23_23;
    MR_Word ll_backend__prog_rep__V_24_24;
    MR_Word ll_backend__prog_rep__V_25_25;
    MR_String ll_backend__prog_rep__ConsId_39;
    MR_Integer ll_backend__prog_rep__Arity_40;
    MR_Word ll_backend__prog_rep__FunctorBytes_41;
    MR_Word ll_backend__prog_rep__ArityBytes_42;
    MR_Integer ll_backend__prog_rep__Index_50;
    MR_Integer ll_backend__prog_rep__V_54_54;
    MR_Box ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_17;

    {
      ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Goal_12, &ll_backend__prog_rep__GoalBytes_13, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_16, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_18_18);
    }
    ll_backend__prog_rep__ConsId_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__MainConsId_10, (MR_Integer) 0)));
    ll_backend__prog_rep__Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__MainConsId_10, (MR_Integer) 1)));
    {
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__ConsId_39, &ll_backend__prog_rep__Index_50, ll_backend__prog_rep__STATE_VARIABLE_StringTable_18_18, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_19_19);
    }
    {
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_50, &ll_backend__prog_rep__FunctorBytes_41);
    }
    {
      mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__Arity_40, &ll_backend__prog_rep__ArityBytes_42);
    }
    {
      ll_backend__prog_rep__MainConsIdBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__FunctorBytes_41, ll_backend__prog_rep__ArityBytes_42);
    }
    ll_backend__prog_rep__TypeCtorInfo_30_30 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0;
    {
      mercury__list__map_foldl_5_p_0(ll_backend__prog_rep__TypeCtorInfo_30_30, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[9], ll_backend__prog_rep__OtherConsIds_11, &ll_backend__prog_rep__OtherConsIdsByteLists_15, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_19_19)), &ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_17);
    }
    *ll_backend__prog_rep__STATE_VARIABLE_StringTable_17 = ((MR_Word) ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_17);
    ll_backend__prog_rep__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      ll_backend__prog_rep__V_54_54 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeCtorInfo_30_30, ll_backend__prog_rep__OtherConsIds_11);
    }
    {
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_54_54, &ll_backend__prog_rep__V_23_23);
    }
    {
      ll_backend__prog_rep__V_25_25 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_33_33, ll_backend__prog_rep__OtherConsIdsByteLists_15);
    }
    {
      ll_backend__prog_rep__V_24_24 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_33_33, ll_backend__prog_rep__V_25_25, ll_backend__prog_rep__GoalBytes_13);
    }
    {
      ll_backend__prog_rep__V_22_22 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_33_33, ll_backend__prog_rep__V_23_23, ll_backend__prog_rep__V_24_24);
    }
    {
      *ll_backend__prog_rep__Bytes_8 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_33_33, ll_backend__prog_rep__MainConsIdBytes_14, ll_backend__prog_rep__V_22_22);
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_3(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4)
{
  {
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv7_Bytes_8;
    MR_Word ll_backend__prog_rep__conv6_STATE_VARIABLE_StringTable_17;

    {
      ll_backend__prog_rep__encode_case_rep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv7_Bytes_8, ((MR_Word) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv6_STATE_VARIABLE_StringTable_17);
    }
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv7_Bytes_8));
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv6_STATE_VARIABLE_StringTable_17));
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_2(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4)
{
  {
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv4_Bytes_10;
    MR_Word ll_backend__prog_rep__conv3_STATE_VARIABLE_StringTable_72;

    {
      ll_backend__prog_rep__encode_goal_rep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv4_Bytes_10, ((MR_Word) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv3_STATE_VARIABLE_StringTable_72);
    }
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv4_Bytes_10));
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv3_STATE_VARIABLE_StringTable_72));
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4)
{
  {
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv1_Bytes_10;
    MR_Word ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_72;

    {
      ll_backend__prog_rep__encode_goal_rep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv1_Bytes_10, ((MR_Word) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_72);
    }
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv1_Bytes_10));
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_72));
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0(
  MR_Word ll_backend__prog_rep__Info_6,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Word * ll_backend__prog_rep__Bytes_10,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_72)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ll_backend__prog_rep__Detism_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep__ExprBytes_14;
    MR_Integer ll_backend__prog_rep__DetismByte_70;
    MR_Word ll_backend__prog_rep__V_206_206;

    switch (MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__prog_rep__TypeInfo_223_223;
          MR_Word ll_backend__prog_rep__TypeCtorInfo_226_226;
          MR_Word ll_backend__prog_rep__GoalReps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
          MR_Word ll_backend__prog_rep__ConjBytesList_13;
          MR_Word ll_backend__prog_rep__V_197_197;
          MR_Word ll_backend__prog_rep__V_199_199;
          MR_Integer ll_backend__prog_rep__V_200_200;
          MR_Word ll_backend__prog_rep__V_203_203;
          MR_Word ll_backend__prog_rep__V_204_204;
          MR_Word ll_backend__prog_rep__V_205_205;
          MR_Box ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_72;

          {
            ll_backend__prog_rep__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_197_197, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_197_197, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_1));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_197_197, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_197_197, 3) = ((MR_Box) (ll_backend__prog_rep__Info_6));
          }
          ll_backend__prog_rep__TypeInfo_223_223 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[1];
          {
            mercury__list__map_foldl_5_p_0(ll_backend__prog_rep__TypeInfo_223_223, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, ll_backend__prog_rep__V_197_197, ll_backend__prog_rep__GoalReps_12, &ll_backend__prog_rep__ConjBytesList_13, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71)), &ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_72);
          }
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ((MR_Word) ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_72);
          ll_backend__prog_rep__TypeCtorInfo_226_226 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          {
            ll_backend__prog_rep__V_200_200 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 0);
          }
          {
            ll_backend__prog_rep__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_199_199, 0) = ((MR_Box) (ll_backend__prog_rep__V_200_200));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_199_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__prog_rep__V_204_204 = ll_backend__prog_rep__encode_length_func_1_f_0(ll_backend__prog_rep__TypeInfo_223_223, ll_backend__prog_rep__GoalReps_12);
          }
          {
            ll_backend__prog_rep__V_205_205 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_226_226, ll_backend__prog_rep__ConjBytesList_13);
          }
          {
            ll_backend__prog_rep__V_203_203 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_226_226, ll_backend__prog_rep__V_204_204, ll_backend__prog_rep__V_205_205);
          }
          {
            ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_226_226, ll_backend__prog_rep__V_199_199, ll_backend__prog_rep__V_203_203);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__prog_rep__TypeInfo_231_231;
          MR_Word ll_backend__prog_rep__TypeCtorInfo_234_234;
          MR_Word ll_backend__prog_rep__DisjBytesList_15;
          MR_Word ll_backend__prog_rep__V_188_188;
          MR_Word ll_backend__prog_rep__V_190_190;
          MR_Integer ll_backend__prog_rep__V_191_191;
          MR_Word ll_backend__prog_rep__V_194_194;
          MR_Word ll_backend__prog_rep__V_195_195;
          MR_Word ll_backend__prog_rep__V_196_196;
          MR_Word ll_backend__prog_rep__GoalReps_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
          MR_Box ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_72;

          {
            ll_backend__prog_rep__V_188_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_188_188, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_188_188, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_2));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_188_188, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_188_188, 3) = ((MR_Box) (ll_backend__prog_rep__Info_6));
          }
          ll_backend__prog_rep__TypeInfo_231_231 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[1];
          {
            mercury__list__map_foldl_5_p_0(ll_backend__prog_rep__TypeInfo_231_231, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, ll_backend__prog_rep__V_188_188, ll_backend__prog_rep__GoalReps_208, &ll_backend__prog_rep__DisjBytesList_15, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71)), &ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_72);
          }
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ((MR_Word) ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_72);
          ll_backend__prog_rep__TypeCtorInfo_234_234 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          {
            ll_backend__prog_rep__V_191_191 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 1);
          }
          {
            ll_backend__prog_rep__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_190_190, 0) = ((MR_Box) (ll_backend__prog_rep__V_191_191));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__prog_rep__V_195_195 = ll_backend__prog_rep__encode_length_func_1_f_0(ll_backend__prog_rep__TypeInfo_231_231, ll_backend__prog_rep__GoalReps_208);
          }
          {
            ll_backend__prog_rep__V_196_196 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_234_234, ll_backend__prog_rep__DisjBytesList_15);
          }
          {
            ll_backend__prog_rep__V_194_194 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_234_234, ll_backend__prog_rep__V_195_195, ll_backend__prog_rep__V_196_196);
          }
          {
            ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_234_234, ll_backend__prog_rep__V_190_190, ll_backend__prog_rep__V_194_194);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__prog_rep__TypeInfo_242_242;
          MR_Word ll_backend__prog_rep__TypeCtorInfo_245_245;
          MR_Integer ll_backend__prog_rep__SwitchVar_63 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
          MR_Word ll_backend__prog_rep__CanFail_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
          MR_Word ll_backend__prog_rep__Cases_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
          MR_Word ll_backend__prog_rep__CasesBytesList_66;
          MR_Integer ll_backend__prog_rep__CanFailByte_67;
          MR_Word ll_backend__prog_rep__V_81_81;
          MR_Word ll_backend__prog_rep__V_83_83;
          MR_Integer ll_backend__prog_rep__V_84_84;
          MR_Word ll_backend__prog_rep__V_87_87;
          MR_Word ll_backend__prog_rep__V_88_88;
          MR_Word ll_backend__prog_rep__V_90_90;
          MR_Word ll_backend__prog_rep__V_91_91;
          MR_Word ll_backend__prog_rep__V_92_92;
          MR_Word ll_backend__prog_rep__V_93_93;
          MR_Word ll_backend__prog_rep__V_94_94;
          MR_Box ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_72;

          {
            ll_backend__prog_rep__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_81_81, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_81_81, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_3));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_81_81, 3) = ((MR_Box) (ll_backend__prog_rep__Info_6));
          }
          ll_backend__prog_rep__TypeInfo_242_242 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[2];
          {
            mercury__list__map_foldl_5_p_0(ll_backend__prog_rep__TypeInfo_242_242, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, ll_backend__prog_rep__V_81_81, ll_backend__prog_rep__Cases_65, &ll_backend__prog_rep__CasesBytesList_66, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71)), &ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_72);
          }
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ((MR_Word) ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_72);
          {
            mdbcomp__program_representation__can_fail_byte_2_p_0(ll_backend__prog_rep__CanFail_64, &ll_backend__prog_rep__CanFailByte_67);
          }
          ll_backend__prog_rep__TypeCtorInfo_245_245 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          {
            ll_backend__prog_rep__V_84_84 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 2);
          }
          {
            ll_backend__prog_rep__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_83_83, 0) = ((MR_Box) (ll_backend__prog_rep__V_84_84));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__prog_rep__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_88_88, 0) = ((MR_Box) (ll_backend__prog_rep__CanFailByte_67));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__prog_rep__V_91_91 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__SwitchVar_63);
          }
          {
            ll_backend__prog_rep__V_93_93 = ll_backend__prog_rep__encode_length_func_1_f_0(ll_backend__prog_rep__TypeInfo_242_242, ll_backend__prog_rep__Cases_65);
          }
          {
            ll_backend__prog_rep__V_94_94 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__CasesBytesList_66);
          }
          {
            ll_backend__prog_rep__V_92_92 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__V_93_93, ll_backend__prog_rep__V_94_94);
          }
          {
            ll_backend__prog_rep__V_90_90 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__V_91_91, ll_backend__prog_rep__V_92_92);
          }
          {
            ll_backend__prog_rep__V_87_87 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__V_88_88, ll_backend__prog_rep__V_90_90);
          }
          {
            ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__V_83_83, ll_backend__prog_rep__V_87_87);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__prog_rep__TypeCtorInfo_236_236;
              MR_Word ll_backend__prog_rep__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
              MR_Word ll_backend__prog_rep__Then_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
              MR_Word ll_backend__prog_rep__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
              MR_Word ll_backend__prog_rep__CondBytes_21;
              MR_Word ll_backend__prog_rep__ThenBytes_22;
              MR_Word ll_backend__prog_rep__ElseBytes_23;
              MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_174_174;
              MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_175_175;
              MR_Word ll_backend__prog_rep__V_177_177;
              MR_Integer ll_backend__prog_rep__V_178_178;
              MR_Word ll_backend__prog_rep__V_181_181;
              MR_Word ll_backend__prog_rep__V_182_182;

              {
                ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Cond_18, &ll_backend__prog_rep__CondBytes_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_174_174);
              }
              {
                ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Then_19, &ll_backend__prog_rep__ThenBytes_22, ll_backend__prog_rep__STATE_VARIABLE_StringTable_174_174, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_175_175);
              }
              {
                ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Else_20, &ll_backend__prog_rep__ElseBytes_23, ll_backend__prog_rep__STATE_VARIABLE_StringTable_175_175, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
              }
              ll_backend__prog_rep__TypeCtorInfo_236_236 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              {
                ll_backend__prog_rep__V_178_178 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 3);
              }
              {
                ll_backend__prog_rep__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_177_177, 0) = ((MR_Box) (ll_backend__prog_rep__V_178_178));
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__prog_rep__V_182_182 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_236_236, ll_backend__prog_rep__ThenBytes_22, ll_backend__prog_rep__ElseBytes_23);
              }
              {
                ll_backend__prog_rep__V_181_181 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_236_236, ll_backend__prog_rep__CondBytes_21, ll_backend__prog_rep__V_182_182);
              }
              {
                ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_236_236, ll_backend__prog_rep__V_177_177, ll_backend__prog_rep__V_181_181);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__prog_rep__SubGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
              MR_Word ll_backend__prog_rep__SubGoalBytes_17;
              MR_Word ll_backend__prog_rep__V_184_184;
              MR_Integer ll_backend__prog_rep__V_185_185;

              {
                ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__SubGoal_16, &ll_backend__prog_rep__SubGoalBytes_17, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
              }
              {
                ll_backend__prog_rep__V_185_185 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 4);
              }
              {
                ll_backend__prog_rep__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_184_184, 0) = ((MR_Box) (ll_backend__prog_rep__V_185_185));
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__V_184_184, ll_backend__prog_rep__SubGoalBytes_17);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__prog_rep__TypeCtorInfo_246_246;
              MR_Word ll_backend__prog_rep__MaybeCut_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
              MR_Integer ll_backend__prog_rep__MaybeCutByte_69;
              MR_Word ll_backend__prog_rep__V_74_74;
              MR_Integer ll_backend__prog_rep__V_75_75;
              MR_Word ll_backend__prog_rep__V_78_78;
              MR_Word ll_backend__prog_rep__V_79_79;
              MR_Word ll_backend__prog_rep__SubGoal_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
              MR_Word ll_backend__prog_rep__SubGoalBytes_218;

              {
                mdbcomp__program_representation__cut_byte_2_p_0(ll_backend__prog_rep__MaybeCut_68, &ll_backend__prog_rep__MaybeCutByte_69);
              }
              {
                ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__SubGoal_217, &ll_backend__prog_rep__SubGoalBytes_218, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
              }
              ll_backend__prog_rep__TypeCtorInfo_246_246 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              {
                ll_backend__prog_rep__V_75_75 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 5);
              }
              {
                ll_backend__prog_rep__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_74_74, 0) = ((MR_Box) (ll_backend__prog_rep__V_75_75));
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__prog_rep__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_79_79, 0) = ((MR_Box) (ll_backend__prog_rep__MaybeCutByte_69));
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__prog_rep__V_78_78 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_246_246, ll_backend__prog_rep__V_79_79, ll_backend__prog_rep__SubGoalBytes_218);
              }
              {
                ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_246_246, ll_backend__prog_rep__V_74_74, ll_backend__prog_rep__V_78_78);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__prog_rep__TypeCtorInfo_237_237;
              MR_String ll_backend__prog_rep__FileName_24 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
              MR_Integer ll_backend__prog_rep__Line_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
              MR_Word ll_backend__prog_rep__BoundVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
              MR_Word ll_backend__prog_rep__AtomicGoalRep_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
              MR_Word ll_backend__prog_rep__FileNameBytes_28;
              MR_Word ll_backend__prog_rep__AtomicBytes_29;
              MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
              MR_Word ll_backend__prog_rep__V_96_96;
              MR_Word ll_backend__prog_rep__V_97_97;
              MR_Word ll_backend__prog_rep__V_98_98;

              {
                ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__FileName_24, &ll_backend__prog_rep__FileNameBytes_28, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95);
              }
              ll_backend__prog_rep__TypeCtorInfo_237_237 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              {
                ll_backend__prog_rep__V_97_97 = ll_backend__prog_rep__encode_lineno_func_1_f_0(ll_backend__prog_rep__Line_25);
              }
              {
                ll_backend__prog_rep__V_98_98 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__BoundVars_26);
              }
              {
                ll_backend__prog_rep__V_96_96 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_97_97, ll_backend__prog_rep__V_98_98);
              }
              {
                ll_backend__prog_rep__AtomicBytes_29 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__FileNameBytes_28, ll_backend__prog_rep__V_96_96);
              }
              switch (MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Integer ll_backend__prog_rep__Var_44;
                    MR_String ll_backend__prog_rep__ConsId_45;
                    MR_Integer ll_backend__prog_rep__AtomicTypeByte_47;
                    MR_Word ll_backend__prog_rep__ArgsBytes_48;
                    MR_Word ll_backend__prog_rep__ConsIdBytes_50;
                    MR_Word ll_backend__prog_rep__VarBytes_51;
                    MR_Word ll_backend__prog_rep__V_161_161;
                    MR_Word ll_backend__prog_rep__V_163_163;
                    MR_Word ll_backend__prog_rep__V_164_164;
                    MR_Word ll_backend__prog_rep__V_165_165;

                    switch (MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ll_backend__prog_rep__Args_46;

                          ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
                          ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                          ll_backend__prog_rep__Args_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                          {
                            ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 6);
                          }
                          {
                            ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_46);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ll_backend__prog_rep__Args_249;

                          ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
                          ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                          ll_backend__prog_rep__Args_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                          {
                            ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 7);
                          }
                          {
                            ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_249);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ll_backend__prog_rep__MaybeArgs_248;

                          ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
                          ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                          ll_backend__prog_rep__MaybeArgs_248 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                          {
                            ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 9);
                          }
                          {
                            ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__MaybeArgs_248);
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ll_backend__prog_rep__MaybeArgs_49;

                          ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                          ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                          ll_backend__prog_rep__MaybeArgs_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));
                          {
                            ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 8);
                          }
                          {
                            ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__MaybeArgs_49);
                          }
                        }
                        break;
                    }
                    {
                      ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__ConsId_45, &ll_backend__prog_rep__ConsIdBytes_50, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                    }
                    {
                      ll_backend__prog_rep__VarBytes_51 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var_44);
                    }
                    {
                      ll_backend__prog_rep__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_161_161, 0) = ((MR_Box) (ll_backend__prog_rep__AtomicTypeByte_47));
                      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ll_backend__prog_rep__V_165_165 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ArgsBytes_48, ll_backend__prog_rep__AtomicBytes_29);
                    }
                    {
                      ll_backend__prog_rep__V_164_164 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ConsIdBytes_50, ll_backend__prog_rep__V_165_165);
                    }
                    {
                      ll_backend__prog_rep__V_163_163 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__VarBytes_51, ll_backend__prog_rep__V_164_164);
                    }
                    {
                      ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_161_161, ll_backend__prog_rep__V_163_163);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ll_backend__prog_rep__Var_44;
                        MR_String ll_backend__prog_rep__ConsId_45;
                        MR_Integer ll_backend__prog_rep__AtomicTypeByte_47;
                        MR_Word ll_backend__prog_rep__ArgsBytes_48;
                        MR_Word ll_backend__prog_rep__ConsIdBytes_50;
                        MR_Word ll_backend__prog_rep__VarBytes_51;
                        MR_Word ll_backend__prog_rep__V_161_161;
                        MR_Word ll_backend__prog_rep__V_163_163;
                        MR_Word ll_backend__prog_rep__V_164_164;
                        MR_Word ll_backend__prog_rep__V_165_165;

                        switch (MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ll_backend__prog_rep__Args_46;

                              ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
                              ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                              ll_backend__prog_rep__Args_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                              {
                                ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 6);
                              }
                              {
                                ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_46);
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word ll_backend__prog_rep__Args_249;

                              ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
                              ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                              ll_backend__prog_rep__Args_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                              {
                                ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 7);
                              }
                              {
                                ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_249);
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word ll_backend__prog_rep__MaybeArgs_248;

                              ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
                              ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                              ll_backend__prog_rep__MaybeArgs_248 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                              {
                                ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 9);
                              }
                              {
                                ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__MaybeArgs_248);
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word ll_backend__prog_rep__MaybeArgs_49;

                              ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                              ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                              ll_backend__prog_rep__MaybeArgs_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));
                              {
                                ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 8);
                              }
                              {
                                ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__MaybeArgs_49);
                              }
                            }
                            break;
                        }
                        {
                          ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__ConsId_45, &ll_backend__prog_rep__ConsIdBytes_50, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                        }
                        {
                          ll_backend__prog_rep__VarBytes_51 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var_44);
                        }
                        {
                          ll_backend__prog_rep__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_161_161, 0) = ((MR_Box) (ll_backend__prog_rep__AtomicTypeByte_47));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ll_backend__prog_rep__V_165_165 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ArgsBytes_48, ll_backend__prog_rep__AtomicBytes_29);
                        }
                        {
                          ll_backend__prog_rep__V_164_164 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ConsIdBytes_50, ll_backend__prog_rep__V_165_165);
                        }
                        {
                          ll_backend__prog_rep__V_163_163 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__VarBytes_51, ll_backend__prog_rep__V_164_164);
                        }
                        {
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_161_161, ll_backend__prog_rep__V_163_163);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer ll_backend__prog_rep__Target_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                        MR_Integer ll_backend__prog_rep__Source_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                        MR_Word ll_backend__prog_rep__V_166_166;
                        MR_Integer ll_backend__prog_rep__V_167_167;
                        MR_Word ll_backend__prog_rep__V_170_170;
                        MR_Word ll_backend__prog_rep__V_171_171;
                        MR_Word ll_backend__prog_rep__V_172_172;
                        MR_Word ll_backend__prog_rep__V_173_173;

                        {
                          ll_backend__prog_rep__V_167_167 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 10);
                        }
                        {
                          ll_backend__prog_rep__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_166_166, 0) = ((MR_Box) (ll_backend__prog_rep__V_167_167));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_166_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ll_backend__prog_rep__V_171_171 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Target_30);
                        }
                        {
                          ll_backend__prog_rep__V_173_173 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Source_31);
                        }
                        {
                          ll_backend__prog_rep__V_172_172 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_173_173, ll_backend__prog_rep__AtomicBytes_29);
                        }
                        {
                          ll_backend__prog_rep__V_170_170 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_171_171, ll_backend__prog_rep__V_172_172);
                        }
                        {
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_166_166, ll_backend__prog_rep__V_170_170);
                        }
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ll_backend__prog_rep__V_114_114;
                        MR_Integer ll_backend__prog_rep__V_115_115;
                        MR_Word ll_backend__prog_rep__V_118_118;
                        MR_Word ll_backend__prog_rep__V_119_119;
                        MR_Word ll_backend__prog_rep__V_120_120;
                        MR_Word ll_backend__prog_rep__V_121_121;
                        MR_Integer ll_backend__prog_rep__Target_213 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                        MR_Integer ll_backend__prog_rep__Source_214 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));

                        {
                          ll_backend__prog_rep__V_115_115 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 11);
                        }
                        {
                          ll_backend__prog_rep__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_114_114, 0) = ((MR_Box) (ll_backend__prog_rep__V_115_115));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ll_backend__prog_rep__V_119_119 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Target_213);
                        }
                        {
                          ll_backend__prog_rep__V_121_121 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Source_214);
                        }
                        {
                          ll_backend__prog_rep__V_120_120 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_121_121, ll_backend__prog_rep__AtomicBytes_29);
                        }
                        {
                          ll_backend__prog_rep__V_118_118 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_119_119, ll_backend__prog_rep__V_120_120);
                        }
                        {
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_114_114, ll_backend__prog_rep__V_118_118);
                        }
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Integer ll_backend__prog_rep__Var1_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                        MR_Integer ll_backend__prog_rep__Var2_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                        MR_Word ll_backend__prog_rep__V_148_148;
                        MR_Integer ll_backend__prog_rep__V_149_149;
                        MR_Word ll_backend__prog_rep__V_152_152;
                        MR_Word ll_backend__prog_rep__V_153_153;
                        MR_Word ll_backend__prog_rep__V_154_154;
                        MR_Word ll_backend__prog_rep__V_155_155;

                        {
                          ll_backend__prog_rep__V_149_149 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 12);
                        }
                        {
                          ll_backend__prog_rep__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_148_148, 0) = ((MR_Box) (ll_backend__prog_rep__V_149_149));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ll_backend__prog_rep__V_153_153 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var1_52);
                        }
                        {
                          ll_backend__prog_rep__V_155_155 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var2_53);
                        }
                        {
                          ll_backend__prog_rep__V_154_154 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_155_155, ll_backend__prog_rep__AtomicBytes_29);
                        }
                        {
                          ll_backend__prog_rep__V_152_152 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_153_153, ll_backend__prog_rep__V_154_154);
                        }
                        {
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_148_148, ll_backend__prog_rep__V_152_152);
                        }
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ll_backend__prog_rep__V_99_99;
                        MR_Integer ll_backend__prog_rep__V_100_100;
                        MR_Word ll_backend__prog_rep__V_103_103;
                        MR_Word ll_backend__prog_rep__V_104_104;
                        MR_Word ll_backend__prog_rep__Args_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));

                        {
                          ll_backend__prog_rep__V_100_100 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 13);
                        }
                        {
                          ll_backend__prog_rep__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_99_99, 0) = ((MR_Box) (ll_backend__prog_rep__V_100_100));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ll_backend__prog_rep__V_104_104 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_216);
                        }
                        {
                          ll_backend__prog_rep__V_103_103 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_104_104, ll_backend__prog_rep__AtomicBytes_29);
                        }
                        {
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_99_99, ll_backend__prog_rep__V_103_103);
                        }
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Integer ll_backend__prog_rep__PredVar_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                        MR_Word ll_backend__prog_rep__V_140_140;
                        MR_Integer ll_backend__prog_rep__V_141_141;
                        MR_Word ll_backend__prog_rep__V_144_144;
                        MR_Word ll_backend__prog_rep__V_145_145;
                        MR_Word ll_backend__prog_rep__V_146_146;
                        MR_Word ll_backend__prog_rep__V_147_147;
                        MR_Word ll_backend__prog_rep__Args_209 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));

                        {
                          ll_backend__prog_rep__V_141_141 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 14);
                        }
                        {
                          ll_backend__prog_rep__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_140_140, 0) = ((MR_Box) (ll_backend__prog_rep__V_141_141));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ll_backend__prog_rep__V_145_145 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__PredVar_54);
                        }
                        {
                          ll_backend__prog_rep__V_147_147 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_209);
                        }
                        {
                          ll_backend__prog_rep__V_146_146 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_147_147, ll_backend__prog_rep__AtomicBytes_29);
                        }
                        {
                          ll_backend__prog_rep__V_144_144 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__V_146_146);
                        }
                        {
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_140_140, ll_backend__prog_rep__V_144_144);
                        }
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Integer ll_backend__prog_rep__MethodNum_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                        MR_Word ll_backend__prog_rep__V_130_130;
                        MR_Integer ll_backend__prog_rep__V_131_131;
                        MR_Word ll_backend__prog_rep__V_134_134;
                        MR_Word ll_backend__prog_rep__V_135_135;
                        MR_Word ll_backend__prog_rep__V_136_136;
                        MR_Word ll_backend__prog_rep__V_137_137;
                        MR_Word ll_backend__prog_rep__V_138_138;
                        MR_Word ll_backend__prog_rep__V_139_139;
                        MR_Integer ll_backend__prog_rep__Var_210 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                        MR_Word ll_backend__prog_rep__Args_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));

                        {
                          ll_backend__prog_rep__V_131_131 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 15);
                        }
                        {
                          ll_backend__prog_rep__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_130_130, 0) = ((MR_Box) (ll_backend__prog_rep__V_131_131));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ll_backend__prog_rep__V_135_135 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var_210);
                        }
                        {
                          ll_backend__prog_rep__V_137_137 = ll_backend__prog_rep__encode_method_num_func_1_f_0(ll_backend__prog_rep__MethodNum_55);
                        }
                        {
                          ll_backend__prog_rep__V_139_139 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_211);
                        }
                        {
                          ll_backend__prog_rep__V_138_138 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_139_139, ll_backend__prog_rep__AtomicBytes_29);
                        }
                        {
                          ll_backend__prog_rep__V_136_136 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_137_137, ll_backend__prog_rep__V_138_138);
                        }
                        {
                          ll_backend__prog_rep__V_134_134 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_135_135, ll_backend__prog_rep__V_136_136);
                        }
                        {
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_130_130, ll_backend__prog_rep__V_134_134);
                        }
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_String ll_backend__prog_rep__ModuleName_250 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                        MR_String ll_backend__prog_rep__PredName_251 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                        MR_Word ll_backend__prog_rep__ModuleNameBytes_253;
                        MR_Word ll_backend__prog_rep__PredNameBytes_254;
                        MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_255;
                        MR_Word ll_backend__prog_rep__V_256_256;
                        MR_Integer ll_backend__prog_rep__V_257_257;
                        MR_Word ll_backend__prog_rep__V_259_259;
                        MR_Word ll_backend__prog_rep__V_260_260;
                        MR_Word ll_backend__prog_rep__V_261_261;
                        MR_Word ll_backend__prog_rep__V_262_262;
                        MR_Word ll_backend__prog_rep__Args_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));

                        {
                          ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__ModuleName_250, &ll_backend__prog_rep__ModuleNameBytes_253, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_255);
                        }
                        {
                          ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__PredName_251, &ll_backend__prog_rep__PredNameBytes_254, ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_255, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                        }
                        {
                          ll_backend__prog_rep__V_257_257 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 16);
                        }
                        {
                          ll_backend__prog_rep__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_256_256, 0) = ((MR_Box) (ll_backend__prog_rep__V_257_257));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_256_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ll_backend__prog_rep__V_262_262 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_263);
                        }
                        {
                          ll_backend__prog_rep__V_261_261 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_262_262, ll_backend__prog_rep__AtomicBytes_29);
                        }
                        {
                          ll_backend__prog_rep__V_260_260 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__PredNameBytes_254, ll_backend__prog_rep__V_261_261);
                        }
                        {
                          ll_backend__prog_rep__V_259_259 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ModuleNameBytes_253, ll_backend__prog_rep__V_260_260);
                        }
                        {
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_256_256, ll_backend__prog_rep__V_259_259);
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_String ll_backend__prog_rep__ModuleName_58 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                        MR_String ll_backend__prog_rep__PredName_59 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
                        MR_Word ll_backend__prog_rep__ModuleNameBytes_61;
                        MR_Word ll_backend__prog_rep__PredNameBytes_62;
                        MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_105;
                        MR_Word ll_backend__prog_rep__V_107_107;
                        MR_Integer ll_backend__prog_rep__V_108_108;
                        MR_Word ll_backend__prog_rep__V_110_110;
                        MR_Word ll_backend__prog_rep__V_111_111;
                        MR_Word ll_backend__prog_rep__V_112_112;
                        MR_Word ll_backend__prog_rep__V_113_113;
                        MR_Word ll_backend__prog_rep__Args_215 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));

                        {
                          ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__ModuleName_58, &ll_backend__prog_rep__ModuleNameBytes_61, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_105);
                        }
                        {
                          ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__PredName_59, &ll_backend__prog_rep__PredNameBytes_62, ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_105, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                        }
                        {
                          ll_backend__prog_rep__V_108_108 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 17);
                        }
                        {
                          ll_backend__prog_rep__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_107_107, 0) = ((MR_Box) (ll_backend__prog_rep__V_108_108));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ll_backend__prog_rep__V_113_113 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_215);
                        }
                        {
                          ll_backend__prog_rep__V_112_112 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_113_113, ll_backend__prog_rep__AtomicBytes_29);
                        }
                        {
                          ll_backend__prog_rep__V_111_111 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__PredNameBytes_62, ll_backend__prog_rep__V_112_112);
                        }
                        {
                          ll_backend__prog_rep__V_110_110 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ModuleNameBytes_61, ll_backend__prog_rep__V_111_111);
                        }
                        {
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_107_107, ll_backend__prog_rep__V_110_110);
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_String ll_backend__prog_rep__EventName_56 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
                        MR_Word ll_backend__prog_rep__EventNameBytes_57;
                        MR_Word ll_backend__prog_rep__V_123_123;
                        MR_Integer ll_backend__prog_rep__V_124_124;
                        MR_Word ll_backend__prog_rep__V_127_127;
                        MR_Word ll_backend__prog_rep__V_128_128;
                        MR_Word ll_backend__prog_rep__V_129_129;
                        MR_Word ll_backend__prog_rep__Args_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));

                        {
                          ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__EventName_56, &ll_backend__prog_rep__EventNameBytes_57, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                        }
                        {
                          ll_backend__prog_rep__V_124_124 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 18);
                        }
                        {
                          ll_backend__prog_rep__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_123_123, 0) = ((MR_Box) (ll_backend__prog_rep__V_124_124));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ll_backend__prog_rep__V_129_129 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_212);
                        }
                        {
                          ll_backend__prog_rep__V_128_128 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_129_129, ll_backend__prog_rep__AtomicBytes_29);
                        }
                        {
                          ll_backend__prog_rep__V_127_127 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__EventNameBytes_57, ll_backend__prog_rep__V_128_128);
                        }
                        {
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_123_123, ll_backend__prog_rep__V_127_127);
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
    {
      mdbcomp__program_representation__determinism_representation_2_p_0(ll_backend__prog_rep__Detism_8, &ll_backend__prog_rep__DetismByte_70);
    }
    {
      ll_backend__prog_rep__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_206_206, 0) = ((MR_Box) (ll_backend__prog_rep__DetismByte_70));
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      *ll_backend__prog_rep__Bytes_10 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__ExprBytes_14, ll_backend__prog_rep__V_206_206);
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__detism_to_detism_rep_2_p_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
  MR_Word * ll_backend__prog_rep__HeadVar__2_2)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;

    *ll_backend__prog_rep__HeadVar__2_2 = ((&ll_backend__prog_rep_vector_common_9[0 + ll_backend__prog_rep__HeadVar__1_1]))->ll_backend__prog_rep__vector_common_type_9_0__vct_9_f_0;
  }
}

static void MR_CALL 
ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(
  MR_Word ll_backend__prog_rep__ConsId_3,
  MR_Word * ll_backend__prog_rep__HeadVar__2_2)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_String ll_backend__prog_rep__ConsIdName_4;
    MR_Integer ll_backend__prog_rep__Arity_5;
    MR_Word ll_backend__prog_rep__MaybeArity_6;

    switch (MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044typeclass_info_cell_constructor";
        break;
      case (MR_Integer) 1:
        ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044type_info_cell_constructor";
        break;
      case (MR_Integer) 2:
        ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044tabling_info_const";
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044table_io_entry_desc";
            break;
          case (MR_Integer) 1:
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044deep_profiling_proc_layout";
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__prog_rep__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));
              MR_Integer ll_backend__prog_rep__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 2)));
              MR_Word ll_backend__prog_rep__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 3)));

              if (((MR_tag((MR_Word) ll_backend__prog_rep__SymName_7)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word ll_backend__prog_rep__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__SymName_7, (MR_Integer) 0)));

                  ll_backend__prog_rep__ConsIdName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__SymName_7, (MR_Integer) 1)));
                }
              else
                ll_backend__prog_rep__ConsIdName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__SymName_7, (MR_Integer) 0)));
            }
            break;
          case (MR_Integer) 3:
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "{}";
            break;
          case (MR_Integer) 4:
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044closure_cons";
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ll_backend__prog_rep__Int_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

              {
                ll_backend__prog_rep__ConsIdName_4 = mercury__string__int_to_string_1_f_0(ll_backend__prog_rep__Int_11);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Unsigned ll_backend__prog_rep__UInt_12 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

              {
                ll_backend__prog_rep__ConsIdName_4 = mercury__string__uint_to_string_1_f_0(ll_backend__prog_rep__UInt_12);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Float ll_backend__prog_rep__Float_13 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

              {
                ll_backend__prog_rep__ConsIdName_4 = mercury__string__float_to_string_1_f_0(ll_backend__prog_rep__Float_13);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Char ll_backend__prog_rep__Char_14 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

              {
                ll_backend__prog_rep__ConsIdName_4 = mercury__string__char_to_string_1_f_0(ll_backend__prog_rep__Char_14);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String ll_backend__prog_rep__String_15 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));
              MR_String ll_backend__prog_rep__V_17_17;

              {
                ll_backend__prog_rep__V_17_17 = mercury__string__f_43_43_2_f_0(ll_backend__prog_rep__String_15, (MR_String) "\"");
              }
              {
                ll_backend__prog_rep__ConsIdName_4 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__prog_rep__V_17_17);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String ll_backend__prog_rep__Name_19 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

              {
                ll_backend__prog_rep__ConsIdName_4 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__prog_rep__Name_19);
              }
            }
            break;
          case (MR_Integer) 11:
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044type_ctor_info_const";
            break;
          case (MR_Integer) 12:
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044base_typeclass_info_const";
            break;
          case (MR_Integer) 13:
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044type_info_const";
            break;
          case (MR_Integer) 14:
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044typeclass_info_const";
            break;
          case (MR_Integer) 15:
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044ground_term_const";
            break;
        }
        break;
    }
    {
      ll_backend__prog_rep__MaybeArity_6 = parse_tree__prog_util__cons_id_maybe_arity_1_f_0(ll_backend__prog_rep__ConsId_3);
    }
    if ((ll_backend__prog_rep__MaybeArity_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__prog_rep__Arity_5 = (MR_Integer) 0;
    else
      ll_backend__prog_rep__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__MaybeArity_6, (MR_Integer) 0)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__prog_rep__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep__ConsIdName_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep__Arity_5));
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2)
{
  {
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv0_HeadVar__2_2;

    {
      ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv0_HeadVar__2_2);
    }
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0(
  MR_Word ll_backend__prog_rep__Info_5,
  MR_Word ll_backend__prog_rep__Instmap_6,
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
  MR_Word * ll_backend__prog_rep__HeadVar__4_4)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__FirstConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ll_backend__prog_rep__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 2)));
    MR_Word ll_backend__prog_rep__FirstConsIdRep_10;
    MR_Word ll_backend__prog_rep__OtherConsIdsRep_11;
    MR_Word ll_backend__prog_rep__GoalRep_12;

    {
      ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap_6, ll_backend__prog_rep__Goal_9, &ll_backend__prog_rep__GoalRep_12);
    }
    {
      ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(ll_backend__prog_rep__FirstConsId_7, &ll_backend__prog_rep__FirstConsIdRep_10);
    }
    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[8], ll_backend__prog_rep__OtherConsIds_8, &ll_backend__prog_rep__OtherConsIdsRep_11);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__prog_rep__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep__FirstConsIdRep_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep__OtherConsIdsRep_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__prog_rep__GoalRep_12));
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__conj_to_conj_rep_4_p_0(
  MR_Word ll_backend__prog_rep__Info_1,
  MR_Word ll_backend__prog_rep__Instmap0_2,
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
  MR_Word * ll_backend__prog_rep__HeadVar__4_4)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;

    if ((ll_backend__prog_rep__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__prog_rep__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__prog_rep__Conj_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep__Conjs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__prog_rep__ConjRep_11;
        MR_Word ll_backend__prog_rep__ConjReps_12;
        MR_Word ll_backend__prog_rep__GoalInfo_13;
        MR_Word ll_backend__prog_rep__InstmapDelta_14;
        MR_Word ll_backend__prog_rep__Instmap1_15;
        MR_Word ll_backend__prog_rep__V_16_16;

        {
          ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_1, ll_backend__prog_rep__Instmap0_2, ll_backend__prog_rep__Conj_9, &ll_backend__prog_rep__ConjRep_11);
        }
        ll_backend__prog_rep__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Conj_9, (MR_Integer) 0)));
        ll_backend__prog_rep__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Conj_9, (MR_Integer) 1)));
        {
          ll_backend__prog_rep__InstmapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__prog_rep__GoalInfo_13);
        }
        {
          hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__prog_rep__Instmap0_2, ll_backend__prog_rep__InstmapDelta_14, &ll_backend__prog_rep__Instmap1_15);
        }
        {
          ll_backend__prog_rep__conj_to_conj_rep_4_p_0(ll_backend__prog_rep__Info_1, ll_backend__prog_rep__Instmap1_15, ll_backend__prog_rep__Conjs_10, &ll_backend__prog_rep__ConjReps_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__prog_rep__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep__ConjRep_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__prog_rep__ConjReps_12));
        }
      }
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(
  MR_Word ll_backend__prog_rep__VarNumRep_13,
  MR_Word ll_backend__prog_rep__VarTypes_14,
  MR_Word ll_backend__prog_rep__Var_15,
  MR_Word ll_backend__prog_rep__HeadVar__4_4,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_26,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_27,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_28,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_29,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_30,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_31,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_32,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_33)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__TypeCtorInfo_43_43;
    MR_Integer ll_backend__prog_rep__VarNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__4_4, (MR_Integer) 0)));
    MR_String ll_backend__prog_rep__VarName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__4_4, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep__Type_22;
    MR_Word ll_backend__prog_rep__VarBytes_23;
    MR_Word ll_backend__prog_rep__VarNameBytes_24;
    MR_Word ll_backend__prog_rep__TypeBytes_25;
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_37_37;
    MR_Word ll_backend__prog_rep__V_41_41;
    MR_Word ll_backend__prog_rep__V_42_42;
    MR_Integer ll_backend__prog_rep__Index_49;
    MR_Integer ll_backend__prog_rep__Index_59;

    *ll_backend__prog_rep__STATE_VARIABLE_NumVars_27 = (ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_26 + (MR_Integer) 1);
    {
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__prog_rep__VarTypes_14, ll_backend__prog_rep__Var_15, &ll_backend__prog_rep__Type_22);
    }
    switch (ll_backend__prog_rep__VarNumRep_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__prog_rep__VarBytes_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_23, 0) = ((MR_Box) (ll_backend__prog_rep__VarNum_16));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__VarNum_16, &ll_backend__prog_rep__VarBytes_23);
        }
        break;
      case (MR_Integer) 2:
        {
          mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__VarNum_16, &ll_backend__prog_rep__VarBytes_23);
        }
        break;
    }
    {
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__VarName_17, &ll_backend__prog_rep__Index_49, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_30, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_37_37);
    }
    {
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_49, &ll_backend__prog_rep__VarNameBytes_24);
    }
    {
      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(ll_backend__prog_rep__Type_22, &ll_backend__prog_rep__Index_59, ll_backend__prog_rep__STATE_VARIABLE_StringTable_37_37, ll_backend__prog_rep__STATE_VARIABLE_StringTable_31, ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_32, ll_backend__prog_rep__STATE_VARIABLE_TypeTable_33);
    }
    {
      mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__Index_59, &ll_backend__prog_rep__TypeBytes_25);
    }
    ll_backend__prog_rep__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      ll_backend__prog_rep__V_42_42 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_43_43, ll_backend__prog_rep__TypeBytes_25, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_28);
    }
    {
      ll_backend__prog_rep__V_41_41 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_43_43, ll_backend__prog_rep__VarNameBytes_24, ll_backend__prog_rep__V_42_42);
    }
    {
      *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_29 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_43_43, ll_backend__prog_rep__VarBytes_23, ll_backend__prog_rep__V_41_41);
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_4_byte_8_p_0(
  MR_Word ll_backend__prog_rep___ProgVar_9,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;

    {
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(ll_backend__prog_rep__HeadVar__2_2, ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17, ll_backend__prog_rep__STATE_VARIABLE_NumVars_18, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_2_byte_8_p_0(
  MR_Word ll_backend__prog_rep___ProgVar_9,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;

    {
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(ll_backend__prog_rep__HeadVar__2_2, ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17, ll_backend__prog_rep__STATE_VARIABLE_NumVars_18, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_1_byte_8_p_0(
  MR_Word ll_backend__prog_rep___ProgVar_9,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;

    {
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(ll_backend__prog_rep__HeadVar__2_2, ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17, ll_backend__prog_rep__STATE_VARIABLE_NumVars_18, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
    }
  }
}

static MR_Integer MR_CALL 
ll_backend__prog_rep__max_var_num_3_f_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_5,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer ll_backend__prog_rep__VarNum2_8)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Integer ll_backend__prog_rep__Max_9;

    {
      ll_backend__prog_rep__Max_9 = ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(ll_backend__prog_rep__HeadVar__2_2, ll_backend__prog_rep__VarNum2_8);
    }
    return ll_backend__prog_rep__Max_9;
  }
}

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_6(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
  MR_Box * ll_backend__prog_rep__wrapper_arg_8,
  MR_Box ll_backend__prog_rep__wrapper_arg_9,
  MR_Box * ll_backend__prog_rep__wrapper_arg_10)
{
  {
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Integer ll_backend__prog_rep__conv23_STATE_VARIABLE_NumVars_27;
    MR_Word ll_backend__prog_rep__conv22_STATE_VARIABLE_VarNameTableBytes_29;
    MR_Word ll_backend__prog_rep__conv21_STATE_VARIABLE_StringTable_31;
    MR_Word ll_backend__prog_rep__conv20_STATE_VARIABLE_TypeTable_33;

    {
      ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv23_STATE_VARIABLE_NumVars_27, ((MR_Word) ll_backend__prog_rep__wrapper_arg_5), &ll_backend__prog_rep__conv22_STATE_VARIABLE_VarNameTableBytes_29, ((MR_Word) ll_backend__prog_rep__wrapper_arg_7), &ll_backend__prog_rep__conv21_STATE_VARIABLE_StringTable_31, ((MR_Word) ll_backend__prog_rep__wrapper_arg_9), &ll_backend__prog_rep__conv20_STATE_VARIABLE_TypeTable_33);
    }
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv23_STATE_VARIABLE_NumVars_27));
    *ll_backend__prog_rep__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep__conv22_STATE_VARIABLE_VarNameTableBytes_29));
    *ll_backend__prog_rep__wrapper_arg_8 = ((MR_Box) (ll_backend__prog_rep__conv21_STATE_VARIABLE_StringTable_31));
    *ll_backend__prog_rep__wrapper_arg_10 = ((MR_Box) (ll_backend__prog_rep__conv20_STATE_VARIABLE_TypeTable_33));
  }
}

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_5(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
  MR_Box * ll_backend__prog_rep__wrapper_arg_8)
{
  {
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Integer ll_backend__prog_rep__conv16_STATE_VARIABLE_NumVars_18;
    MR_Word ll_backend__prog_rep__conv15_STATE_VARIABLE_VarNameTableBytes_20;
    MR_Word ll_backend__prog_rep__conv14_STATE_VARIABLE_StringTable_22;

    {
      ll_backend__prog_rep__encode_var_name_table_entry_4_byte_8_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv16_STATE_VARIABLE_NumVars_18, ((MR_Word) ll_backend__prog_rep__wrapper_arg_5), &ll_backend__prog_rep__conv15_STATE_VARIABLE_VarNameTableBytes_20, ((MR_Word) ll_backend__prog_rep__wrapper_arg_7), &ll_backend__prog_rep__conv14_STATE_VARIABLE_StringTable_22);
    }
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv16_STATE_VARIABLE_NumVars_18));
    *ll_backend__prog_rep__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep__conv15_STATE_VARIABLE_VarNameTableBytes_20));
    *ll_backend__prog_rep__wrapper_arg_8 = ((MR_Box) (ll_backend__prog_rep__conv14_STATE_VARIABLE_StringTable_22));
  }
}

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_4(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
  MR_Box * ll_backend__prog_rep__wrapper_arg_8)
{
  {
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Integer ll_backend__prog_rep__conv10_STATE_VARIABLE_NumVars_18;
    MR_Word ll_backend__prog_rep__conv9_STATE_VARIABLE_VarNameTableBytes_20;
    MR_Word ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_22;

    {
      ll_backend__prog_rep__encode_var_name_table_entry_2_byte_8_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv10_STATE_VARIABLE_NumVars_18, ((MR_Word) ll_backend__prog_rep__wrapper_arg_5), &ll_backend__prog_rep__conv9_STATE_VARIABLE_VarNameTableBytes_20, ((MR_Word) ll_backend__prog_rep__wrapper_arg_7), &ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_22);
    }
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv10_STATE_VARIABLE_NumVars_18));
    *ll_backend__prog_rep__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep__conv9_STATE_VARIABLE_VarNameTableBytes_20));
    *ll_backend__prog_rep__wrapper_arg_8 = ((MR_Box) (ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_22));
  }
}

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_3(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
  MR_Box * ll_backend__prog_rep__wrapper_arg_8)
{
  {
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Integer ll_backend__prog_rep__conv4_STATE_VARIABLE_NumVars_18;
    MR_Word ll_backend__prog_rep__conv3_STATE_VARIABLE_VarNameTableBytes_20;
    MR_Word ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_22;

    {
      ll_backend__prog_rep__encode_var_name_table_entry_1_byte_8_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv4_STATE_VARIABLE_NumVars_18, ((MR_Word) ll_backend__prog_rep__wrapper_arg_5), &ll_backend__prog_rep__conv3_STATE_VARIABLE_VarNameTableBytes_20, ((MR_Word) ll_backend__prog_rep__wrapper_arg_7), &ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_22);
    }
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv4_STATE_VARIABLE_NumVars_18));
    *ll_backend__prog_rep__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep__conv3_STATE_VARIABLE_VarNameTableBytes_20));
    *ll_backend__prog_rep__wrapper_arg_8 = ((MR_Box) (ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_22));
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_2(
  MR_Box ll_backend__prog_rep__closure_arg)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;

    {
      ll_backend__prog_rep__succeeded = ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__317__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))));
    }
    return ll_backend__prog_rep__succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
  MR_Box ll_backend__prog_rep__wrapper_arg_3)
{
  {
    MR_Box ll_backend__prog_rep__wrapper_arg_4;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Integer ll_backend__prog_rep__conv0_Max_9;

    {
      ll_backend__prog_rep__conv0_Max_9 = ll_backend__prog_rep__max_var_num_3_f_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3));
    }
    ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv0_Max_9));
    return ll_backend__prog_rep__wrapper_arg_4;
  }
}

static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0(
  MR_Word ll_backend__prog_rep__IncludeVarNameTable_11,
  MR_Word ll_backend__prog_rep__IncludeVarTypes_12,
  MR_Word ll_backend__prog_rep__VarTypes_13,
  MR_Word ll_backend__prog_rep__VarNumMap_14,
  MR_Word * ll_backend__prog_rep__VarNumRep_15,
  MR_Word * ll_backend__prog_rep__Bytes_16,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_25,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__TypeInfo_58_58 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[3];
    MR_Word ll_backend__prog_rep__TypeInfo_59_59 = (MR_Word) &ll_backend__prog_rep_scalar_common_2[0];
    MR_Word ll_backend__prog_rep__TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer ll_backend__prog_rep__MaxVarNum_19;
    MR_Integer ll_backend__prog_rep__FlagByte_20;
    MR_Box ll_backend__prog_rep__conv1_MaxVarNum_19;

    {
      ll_backend__prog_rep__conv1_MaxVarNum_19 = mercury__map__foldl_3_f_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_2[4], ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)));
    }
    ll_backend__prog_rep__MaxVarNum_19 = ((MR_Integer) ll_backend__prog_rep__conv1_MaxVarNum_19);
    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__MaxVarNum_19 <= (MR_Integer) 127);
    if (ll_backend__prog_rep__succeeded)
      *ll_backend__prog_rep__VarNumRep_15 = (MR_Integer) 0;
    else
      {
        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__MaxVarNum_19 <= (MR_Integer) 32767);
        if (ll_backend__prog_rep__succeeded)
          *ll_backend__prog_rep__VarNumRep_15 = (MR_Integer) 1;
        else
          *ll_backend__prog_rep__VarNumRep_15 = (MR_Integer) 2;
      }
    {
      mdbcomp__program_representation__var_flag_byte_4_p_0(*ll_backend__prog_rep__VarNumRep_15, ll_backend__prog_rep__IncludeVarNameTable_11, ll_backend__prog_rep__IncludeVarTypes_12, &ll_backend__prog_rep__FlagByte_20);
    }
    switch (ll_backend__prog_rep__IncludeVarNameTable_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__prog_rep__V_32_32;

          {
            ll_backend__prog_rep__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[3]));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 1) = ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_2));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 3) = ((MR_Box) (ll_backend__prog_rep__IncludeVarTypes_12));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            mercury__require__expect_4_p_0(ll_backend__prog_rep__V_32_32, (MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.represent_var_table_as_bytecode\'/10", (MR_String) "IncludeVarTypes but not IncludeVarNameTable");
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__prog_rep__Bytes_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep__FlagByte_20));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24;
          *ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27 = ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__prog_rep__NumVars_21;
          MR_Word ll_backend__prog_rep__VarNameTableEntriesBytes_22;
          MR_Word ll_backend__prog_rep__NumVarsBytes_23;
          MR_Word ll_backend__prog_rep__V_55_55;
          MR_Word ll_backend__prog_rep__V_57_57;

          switch (ll_backend__prog_rep__IncludeVarTypes_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                switch (*ll_backend__prog_rep__VarNumRep_15) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Box ll_backend__prog_rep__conv7_NumVars_21;
                      MR_Box ll_backend__prog_rep__conv6_VarNameTableEntriesBytes_22;
                      MR_Box ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_25;

                      {
                        mercury__map__foldl3_8_p_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[5], ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__prog_rep__conv7_NumVars_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__prog_rep__conv6_VarNameTableEntriesBytes_22, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24)), &ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_25);
                      }
                      ll_backend__prog_rep__NumVars_21 = ((MR_Integer) ll_backend__prog_rep__conv7_NumVars_21);
                      ll_backend__prog_rep__VarNameTableEntriesBytes_22 = ((MR_Word) ll_backend__prog_rep__conv6_VarNameTableEntriesBytes_22);
                      *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ((MR_Word) ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_25);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box ll_backend__prog_rep__conv13_NumVars_21;
                      MR_Box ll_backend__prog_rep__conv12_VarNameTableEntriesBytes_22;
                      MR_Box ll_backend__prog_rep__conv11_STATE_VARIABLE_StringTable_25;

                      {
                        mercury__map__foldl3_8_p_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[6], ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__prog_rep__conv13_NumVars_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__prog_rep__conv12_VarNameTableEntriesBytes_22, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24)), &ll_backend__prog_rep__conv11_STATE_VARIABLE_StringTable_25);
                      }
                      ll_backend__prog_rep__NumVars_21 = ((MR_Integer) ll_backend__prog_rep__conv13_NumVars_21);
                      ll_backend__prog_rep__VarNameTableEntriesBytes_22 = ((MR_Word) ll_backend__prog_rep__conv12_VarNameTableEntriesBytes_22);
                      *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ((MR_Word) ll_backend__prog_rep__conv11_STATE_VARIABLE_StringTable_25);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Box ll_backend__prog_rep__conv19_NumVars_21;
                      MR_Box ll_backend__prog_rep__conv18_VarNameTableEntriesBytes_22;
                      MR_Box ll_backend__prog_rep__conv17_STATE_VARIABLE_StringTable_25;

                      {
                        mercury__map__foldl3_8_p_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[7], ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__prog_rep__conv19_NumVars_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__prog_rep__conv18_VarNameTableEntriesBytes_22, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24)), &ll_backend__prog_rep__conv17_STATE_VARIABLE_StringTable_25);
                      }
                      ll_backend__prog_rep__NumVars_21 = ((MR_Integer) ll_backend__prog_rep__conv19_NumVars_21);
                      ll_backend__prog_rep__VarNameTableEntriesBytes_22 = ((MR_Word) ll_backend__prog_rep__conv18_VarNameTableEntriesBytes_22);
                      *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ((MR_Word) ll_backend__prog_rep__conv17_STATE_VARIABLE_StringTable_25);
                    }
                    break;
                }
                *ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27 = ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__prog_rep__V_38_38;
                MR_Box ll_backend__prog_rep__conv27_NumVars_21;
                MR_Box ll_backend__prog_rep__conv26_VarNameTableEntriesBytes_22;
                MR_Box ll_backend__prog_rep__conv25_STATE_VARIABLE_StringTable_25;
                MR_Box ll_backend__prog_rep__conv24_STATE_VARIABLE_TypeTable_27;

                {
                  ll_backend__prog_rep__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 1) = ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_6));
                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 3) = ((MR_Box) (*ll_backend__prog_rep__VarNumRep_15));
                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 4) = ((MR_Box) (ll_backend__prog_rep__VarTypes_13));
                }
                {
                  mercury__map__foldl4_10_p_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, ll_backend__prog_rep__V_38_38, ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__prog_rep__conv27_NumVars_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__prog_rep__conv26_VarNameTableEntriesBytes_22, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24)), &ll_backend__prog_rep__conv25_STATE_VARIABLE_StringTable_25, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26)), &ll_backend__prog_rep__conv24_STATE_VARIABLE_TypeTable_27);
                }
                ll_backend__prog_rep__NumVars_21 = ((MR_Integer) ll_backend__prog_rep__conv27_NumVars_21);
                ll_backend__prog_rep__VarNameTableEntriesBytes_22 = ((MR_Word) ll_backend__prog_rep__conv26_VarNameTableEntriesBytes_22);
                *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ((MR_Word) ll_backend__prog_rep__conv25_STATE_VARIABLE_StringTable_25);
                *ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27 = ((MR_Word) ll_backend__prog_rep__conv24_STATE_VARIABLE_TypeTable_27);
              }
              break;
          }
          {
            mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__NumVars_21, &ll_backend__prog_rep__NumVarsBytes_23);
          }
          {
            ll_backend__prog_rep__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_55_55, 0) = ((MR_Box) (ll_backend__prog_rep__FlagByte_20));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__prog_rep__V_57_57 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_60_60, ll_backend__prog_rep__NumVarsBytes_23, ll_backend__prog_rep__VarNameTableEntriesBytes_22);
          }
          {
            *ll_backend__prog_rep__Bytes_16 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_60_60, ll_backend__prog_rep__V_55_55, ll_backend__prog_rep__V_57_57);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_oisu_proc_3_p_0(
  MR_Word ll_backend__prog_rep__ModuleInfo_4,
  MR_Word ll_backend__prog_rep__PredId_5,
  MR_Word * ll_backend__prog_rep__BytesCord_6)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__PredInfo_7;
    MR_Word ll_backend__prog_rep__ProcTable_8;
    MR_Word ll_backend__prog_rep__Procs_9;
    MR_Integer ll_backend__prog_rep__ProcId_10;
    MR_Word ll_backend__prog_rep__V_13_13;
    MR_Word ll_backend__prog_rep__V_14_14;
    MR_Word ll_backend__prog_rep___ProcInfo_11;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__prog_rep__ModuleInfo_4, ll_backend__prog_rep__PredId_5, &ll_backend__prog_rep__PredInfo_7);
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__prog_rep__PredInfo_7, &ll_backend__prog_rep__ProcTable_8);
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__prog_rep__ProcTable_8, &ll_backend__prog_rep__Procs_9);
    }
    ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__Procs_9)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__prog_rep__succeeded)
      {
        ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Procs_9, (MR_Integer) 0)));
        ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Procs_9, (MR_Integer) 1)));
        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ll_backend__prog_rep__succeeded)
          {
            ll_backend__prog_rep__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_13_13, (MR_Integer) 0)));
            ll_backend__prog_rep___ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_13_13, (MR_Integer) 1)));
            ll_backend__prog_rep__succeeded = MR_TRUE;
          }
      }
    if (ll_backend__prog_rep__succeeded)
      {
        MR_Word ll_backend__prog_rep__ProcLabel_12;

        {
          ll_backend__prog_rep__ProcLabel_12 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__prog_rep__ModuleInfo_4, ll_backend__prog_rep__PredId_5, ll_backend__prog_rep__ProcId_10);
        }
        if (((MR_tag((MR_Word) ll_backend__prog_rep__ProcLabel_12)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word ll_backend__prog_rep__TypeCtorInfo_57_74;
            MR_Word ll_backend__prog_rep__DefModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 0)));
            MR_Word ll_backend__prog_rep__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 1)));
            MR_Word ll_backend__prog_rep__DeclModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 2)));
            MR_String ll_backend__prog_rep__PredName_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 3)));
            MR_Integer ll_backend__prog_rep__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 4)));
            MR_Integer ll_backend__prog_rep__ModeNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 5)));
            MR_Integer ll_backend__prog_rep__KindByte_28;
            MR_Word ll_backend__prog_rep__DeclModuleNameBytes_29;
            MR_Word ll_backend__prog_rep__DefModuleNameBytes_30;
            MR_Word ll_backend__prog_rep__PredNameBytes_31;
            MR_Word ll_backend__prog_rep__ArityBytes_32;
            MR_Word ll_backend__prog_rep__ModeNumBytes_33;
            MR_String ll_backend__prog_rep__V_56_56;
            MR_String ll_backend__prog_rep__V_57_57;
            MR_Word ll_backend__prog_rep__V_58_58;
            MR_Word ll_backend__prog_rep__V_59_59;
            MR_Word ll_backend__prog_rep__V_60_60;
            MR_Word ll_backend__prog_rep__V_61_61;
            MR_Word ll_backend__prog_rep__V_62_62;
            MR_Word ll_backend__prog_rep__V_63_63;
            MR_Word ll_backend__prog_rep__V_64_64;
            MR_Word ll_backend__prog_rep__V_65_65;
            MR_Word ll_backend__prog_rep__V_66_66;

            switch (ll_backend__prog_rep__PredOrFunc_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ll_backend__prog_rep__KindByte_28 = (MR_Integer) 1;
                break;
              case (MR_Integer) 0:
                ll_backend__prog_rep__KindByte_28 = (MR_Integer) 0;
                break;
            }
            {
              ll_backend__prog_rep__V_56_56 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep__DeclModuleName_24);
            }
            {
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__V_56_56, &ll_backend__prog_rep__DeclModuleNameBytes_29);
            }
            {
              ll_backend__prog_rep__V_57_57 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep__DefModuleName_22);
            }
            {
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__V_57_57, &ll_backend__prog_rep__DefModuleNameBytes_30);
            }
            {
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__PredName_25, &ll_backend__prog_rep__PredNameBytes_31);
            }
            {
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__Arity_26, &ll_backend__prog_rep__ArityBytes_32);
            }
            {
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__ModeNum_27, &ll_backend__prog_rep__ModeNumBytes_33);
            }
            ll_backend__prog_rep__TypeCtorInfo_57_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              ll_backend__prog_rep__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_59_59, 0) = ((MR_Box) (ll_backend__prog_rep__KindByte_28));
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_59_59, 1) = ((MR_Box) (ll_backend__prog_rep__DeclModuleNameBytes_29));
            }
            {
              ll_backend__prog_rep__V_58_58 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_59_59);
            }
            {
              ll_backend__prog_rep__V_61_61 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__DefModuleNameBytes_30);
            }
            {
              ll_backend__prog_rep__V_63_63 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__PredNameBytes_31);
            }
            {
              ll_backend__prog_rep__V_65_65 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__ArityBytes_32);
            }
            {
              ll_backend__prog_rep__V_66_66 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__ModeNumBytes_33);
            }
            {
              ll_backend__prog_rep__V_64_64 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_65_65, ll_backend__prog_rep__V_66_66);
            }
            {
              ll_backend__prog_rep__V_62_62 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_63_63, ll_backend__prog_rep__V_64_64);
            }
            {
              ll_backend__prog_rep__V_60_60 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_61_61, ll_backend__prog_rep__V_62_62);
            }
            {
              *ll_backend__prog_rep__BytesCord_6 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_58_58, ll_backend__prog_rep__V_60_60);
            }
          }
        else
          {
            MR_Word ll_backend__prog_rep__TypeCtorInfo_58_75;
            MR_Word ll_backend__prog_rep__SpecialPredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 1)));
            MR_Word ll_backend__prog_rep__TypeModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 2)));
            MR_String ll_backend__prog_rep__TypeName_36 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 3)));
            MR_Integer ll_backend__prog_rep__TypeArity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 4)));
            MR_Word ll_backend__prog_rep__TypeCtor_38;
            MR_Word ll_backend__prog_rep__TypeNameBytes_39;
            MR_Word ll_backend__prog_rep__TypeModuleNameBytes_40;
            MR_Word ll_backend__prog_rep__TypeArityBytes_41;
            MR_Word ll_backend__prog_rep__V_42_42;
            MR_String ll_backend__prog_rep__V_43_43;
            MR_String ll_backend__prog_rep__V_44_44;
            MR_Word ll_backend__prog_rep__V_45_45;
            MR_Word ll_backend__prog_rep__V_46_46;
            MR_Word ll_backend__prog_rep__V_47_47;
            MR_Word ll_backend__prog_rep__V_48_48;
            MR_Word ll_backend__prog_rep__V_49_49;
            MR_Word ll_backend__prog_rep__V_50_50;
            MR_Word ll_backend__prog_rep__V_51_51;
            MR_Word ll_backend__prog_rep__V_52_52;
            MR_Word ll_backend__prog_rep__V_53_53;
            MR_Word ll_backend__prog_rep__V_54_54;
            MR_Word ll_backend__prog_rep__V_55_55;
            MR_Word ll_backend__prog_rep__DefModuleName_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 0)));
            MR_String ll_backend__prog_rep__PredName_68;
            MR_Integer ll_backend__prog_rep__ModeNum_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 5)));
            MR_Word ll_backend__prog_rep__DefModuleNameBytes_71;
            MR_Word ll_backend__prog_rep__PredNameBytes_72;
            MR_Word ll_backend__prog_rep__ModeNumBytes_73;

            {
              ll_backend__prog_rep__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_42_42, 0) = ((MR_Box) (ll_backend__prog_rep__TypeModuleName_35));
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_42_42, 1) = ((MR_Box) (ll_backend__prog_rep__TypeName_36));
            }
            {
              ll_backend__prog_rep__TypeCtor_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__TypeCtor_38, 0) = ((MR_Box) (ll_backend__prog_rep__V_42_42));
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__TypeCtor_38, 1) = ((MR_Box) (ll_backend__prog_rep__TypeArity_37));
            }
            {
              ll_backend__prog_rep__PredName_68 = hlds__special_pred__special_pred_name_2_f_0(ll_backend__prog_rep__SpecialPredId_34, ll_backend__prog_rep__TypeCtor_38);
            }
            {
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__TypeName_36, &ll_backend__prog_rep__TypeNameBytes_39);
            }
            {
              ll_backend__prog_rep__V_43_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep__TypeModuleName_35);
            }
            {
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__V_43_43, &ll_backend__prog_rep__TypeModuleNameBytes_40);
            }
            {
              ll_backend__prog_rep__V_44_44 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep__DefModuleName_67);
            }
            {
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__V_44_44, &ll_backend__prog_rep__DefModuleNameBytes_71);
            }
            {
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__PredName_68, &ll_backend__prog_rep__PredNameBytes_72);
            }
            {
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__TypeArity_37, &ll_backend__prog_rep__TypeArityBytes_41);
            }
            {
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__ModeNum_69, &ll_backend__prog_rep__ModeNumBytes_73);
            }
            ll_backend__prog_rep__TypeCtorInfo_58_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              ll_backend__prog_rep__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_46_46, 0) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_46_46, 1) = ((MR_Box) (ll_backend__prog_rep__TypeNameBytes_39));
            }
            {
              ll_backend__prog_rep__V_45_45 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_46_46);
            }
            {
              ll_backend__prog_rep__V_48_48 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__TypeModuleNameBytes_40);
            }
            {
              ll_backend__prog_rep__V_50_50 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__DefModuleNameBytes_71);
            }
            {
              ll_backend__prog_rep__V_52_52 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__PredNameBytes_72);
            }
            {
              ll_backend__prog_rep__V_54_54 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__TypeArityBytes_41);
            }
            {
              ll_backend__prog_rep__V_55_55 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__ModeNumBytes_73);
            }
            {
              ll_backend__prog_rep__V_53_53 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_54_54, ll_backend__prog_rep__V_55_55);
            }
            {
              ll_backend__prog_rep__V_51_51 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_52_52, ll_backend__prog_rep__V_53_53);
            }
            {
              ll_backend__prog_rep__V_49_49 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_50_50, ll_backend__prog_rep__V_51_51);
            }
            {
              ll_backend__prog_rep__V_47_47 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_48_48, ll_backend__prog_rep__V_49_49);
            }
            {
              *ll_backend__prog_rep__BytesCord_6 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_45_45, ll_backend__prog_rep__V_47_47);
            }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.encode_oisu_proc\'/3", (MR_String) "OISU pred should have exactly one proc");
          return;
        }
      }
  }
}

static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2)
{
  {
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv6_HeadVar__4_4;

    {
      ll_backend__prog_rep__case_to_case_rep_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv6_HeadVar__4_4);
    }
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv6_HeadVar__4_4));
  }
}

static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2)
{
  {
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv5_GoalRep_9;

    {
      ll_backend__prog_rep__goal_to_goal_rep_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv5_GoalRep_9);
    }
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv5_GoalRep_9));
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7(
  MR_Box ll_backend__prog_rep__closure_arg)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;

    {
      ll_backend__prog_rep__succeeded = ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__453__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))));
    }
    return ll_backend__prog_rep__succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
{
  {
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv4_HeadVar__3_257;

    {
      ll_backend__prog_rep__conv4_HeadVar__3_257 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__524__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv4_HeadVar__3_257));
    return ll_backend__prog_rep__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;

    {
      ll_backend__prog_rep__succeeded = ll_backend__prog_rep__lhs_final_is_ground_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
    return ll_backend__prog_rep__succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
{
  {
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv3_HeadVar__3_231;

    {
      ll_backend__prog_rep__conv3_HeadVar__3_231 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__524__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv3_HeadVar__3_231));
    return ll_backend__prog_rep__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
{
  {
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Integer ll_backend__prog_rep__conv2_HeadVar__4_244;

    {
      ll_backend__prog_rep__conv2_HeadVar__4_244 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__597__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv2_HeadVar__4_244));
    return ll_backend__prog_rep__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
{
  {
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv1_HeadVar__2_2;

    {
      ll_backend__prog_rep__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv1_HeadVar__2_2));
    return ll_backend__prog_rep__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
{
  {
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Integer ll_backend__prog_rep__conv0_Num_6;

    {
      ll_backend__prog_rep__conv0_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_Num_6));
    return ll_backend__prog_rep__wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0(
  MR_Word ll_backend__prog_rep__Info_5,
  MR_Word ll_backend__prog_rep__Instmap0_6,
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
  MR_Word * ll_backend__prog_rep__GoalRep_9)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ll_backend__prog_rep__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep__Detism_10;
    MR_Word ll_backend__prog_rep__DetismRep_11;
    MR_Word ll_backend__prog_rep__GoalExprRep_12;

    {
      ll_backend__prog_rep__Detism_10 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__prog_rep__GoalInfo_8);
    }
    {
      ll_backend__prog_rep__detism_to_detism_rep_2_p_0(ll_backend__prog_rep__Detism_10, &ll_backend__prog_rep__DetismRep_11);
    }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    switch (MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__prog_rep__SubGoal_18 = (MR_Word) MR_body(((MR_Word) ll_backend__prog_rep__GoalExpr_7), (MR_Integer) 0);
          MR_Word ll_backend__prog_rep__SubGoalRep_19;

          {
            ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__SubGoal_18, &ll_backend__prog_rep__SubGoalRep_19);
          }
          {
            ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__SubGoalRep_19));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__prog_rep__TypeInfo_222_222;
          MR_Word ll_backend__prog_rep__TypeCtorInfo_223_223;
          MR_String ll_backend__prog_rep__FileName_66;
          MR_Integer ll_backend__prog_rep__LineNo_67;
          MR_Word ll_backend__prog_rep__BoundVars_68;
          MR_Word ll_backend__prog_rep__BoundVarsRep_69;
          MR_Word ll_backend__prog_rep__AtomicGoalRep_77;
          MR_Word ll_backend__prog_rep__V_145_145;

          {
            ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(ll_backend__prog_rep__GoalInfo_8, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Info_5, &ll_backend__prog_rep__FileName_66, &ll_backend__prog_rep__LineNo_67, &ll_backend__prog_rep__BoundVars_68);
          }
          ll_backend__prog_rep__TypeInfo_222_222 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[3];
          ll_backend__prog_rep__TypeCtorInfo_223_223 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          {
            ll_backend__prog_rep__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
          }
          {
            ll_backend__prog_rep__BoundVarsRep_69 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__BoundVars_68);
          }
          switch (MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__prog_rep__Unification_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
                MR_Word ll_backend__prog_rep__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
                MR_Word ll_backend__prog_rep__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
                MR_Word ll_backend__prog_rep__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
                MR_Word ll_backend__prog_rep__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));

                switch (MR_tag((MR_Word) ll_backend__prog_rep__Unification_73)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ll_backend__prog_rep__ConsId_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 1)));
                      MR_Word ll_backend__prog_rep__Args_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 2)));
                      MR_Word ll_backend__prog_rep__ArgModes_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 3)));
                      MR_String ll_backend__prog_rep__ConsIdRep_86;
                      MR_Word ll_backend__prog_rep__ArgsRep_87;
                      MR_Word ll_backend__prog_rep__MaybeArgs_88;
                      MR_Word ll_backend__prog_rep__MaybeArgsRep_89;
                      MR_Word ll_backend__prog_rep__V_166_166;
                      MR_Word ll_backend__prog_rep__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 0)));
                      MR_Integer ll_backend__prog_rep__VarRep_183;
                      MR_Word ll_backend__prog_rep__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 4)));
                      MR_Word ll_backend__prog_rep__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 5)));
                      MR_Word ll_backend__prog_rep__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 6)));
                      MR_Word ll_backend__prog_rep__V_168_168;

                      {
                        ll_backend__prog_rep__VarRep_183 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_182);
                      }
                      {
                        ll_backend__prog_rep__ConsIdRep_86 = ll_backend__prog_rep__cons_id_rep_1_f_0(ll_backend__prog_rep__ConsId_78);
                      }
                      {
                        ll_backend__prog_rep__ArgsRep_87 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_79);
                      }
                      {
                        ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__ArgModes_80, ll_backend__prog_rep__Args_79, &ll_backend__prog_rep__MaybeArgs_88);
                      }
                      {
                        ll_backend__prog_rep__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4));
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 3) = ((MR_Box) (ll_backend__prog_rep__V_145_145));
                      }
                      {
                        ll_backend__prog_rep__MaybeArgsRep_89 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[4], (MR_Word) &ll_backend__prog_rep_scalar_common_1[5], ll_backend__prog_rep__V_166_166, ll_backend__prog_rep__MaybeArgs_88);
                      }
                      {
                        ll_backend__prog_rep__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[1]));
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5));
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
                      }
                      {
                        ll_backend__prog_rep__succeeded = mercury__list__all_true_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, ll_backend__prog_rep__V_168_168, ll_backend__prog_rep__ArgModes_80);
                      }
                      if (ll_backend__prog_rep__succeeded)
                        {
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_183));
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_86));
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_87));
                        }
                      else
                        {
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__VarRep_183));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_86));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__MaybeArgsRep_89));
                        }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__prog_rep__ConsId_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Unification_73, (MR_Integer) 1)));
                      MR_Word ll_backend__prog_rep__Args_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Unification_73, (MR_Integer) 2)));
                      MR_Word ll_backend__prog_rep__ArgModes_264 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Unification_73, (MR_Integer) 3)));
                      MR_String ll_backend__prog_rep__ConsIdRep_265;
                      MR_Word ll_backend__prog_rep__ArgsRep_266;
                      MR_Word ll_backend__prog_rep__MaybeArgs_267;
                      MR_Word ll_backend__prog_rep__MaybeArgsRep_268;
                      MR_Word ll_backend__prog_rep__V_270_270;
                      MR_Word ll_backend__prog_rep__Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Unification_73, (MR_Integer) 0)));
                      MR_Integer ll_backend__prog_rep__VarRep_273;
                      MR_Word ll_backend__prog_rep__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Unification_73, (MR_Integer) 4)));
                      MR_Word ll_backend__prog_rep__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Unification_73, (MR_Integer) 5)));

                      {
                        ll_backend__prog_rep__VarRep_273 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_272);
                      }
                      {
                        ll_backend__prog_rep__ConsIdRep_265 = ll_backend__prog_rep__cons_id_rep_1_f_0(ll_backend__prog_rep__ConsId_262);
                      }
                      {
                        ll_backend__prog_rep__ArgsRep_266 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_263);
                      }
                      {
                        ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__ArgModes_264, ll_backend__prog_rep__Args_263, &ll_backend__prog_rep__MaybeArgs_267);
                      }
                      {
                        ll_backend__prog_rep__V_270_270 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6));
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 3) = ((MR_Box) (ll_backend__prog_rep__V_145_145));
                      }
                      {
                        ll_backend__prog_rep__MaybeArgsRep_268 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[4], (MR_Word) &ll_backend__prog_rep_scalar_common_1[5], ll_backend__prog_rep__V_270_270, ll_backend__prog_rep__MaybeArgs_267);
                      }
                      {
                        ll_backend__prog_rep__succeeded = mercury__list__member_2_p_0(ll_backend__prog_rep__TypeInfo_222_222, ((MR_Box) (ll_backend__prog_rep__Var_272)), ll_backend__prog_rep__BoundVars_68);
                      }
                      if (ll_backend__prog_rep__succeeded)
                        {
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_273));
                          MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_265));
                          MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__MaybeArgsRep_268));
                        }
                      else
                        {
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_273));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_265));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_266));
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ll_backend__prog_rep__Target_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__Unification_73, (MR_Integer) 0)));
                      MR_Word ll_backend__prog_rep__Source_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__Unification_73, (MR_Integer) 1)));
                      MR_Integer ll_backend__prog_rep__V_169_169;
                      MR_Integer ll_backend__prog_rep__V_170_170;

                      {
                        ll_backend__prog_rep__V_169_169 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Target_75);
                      }
                      {
                        ll_backend__prog_rep__V_170_170 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Source_76);
                      }
                      {
                        ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__V_169_169));
                        MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__V_170_170));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Unification_73, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ll_backend__prog_rep__Var1_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Unification_73, (MR_Integer) 1)));
                          MR_Word ll_backend__prog_rep__Var2_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Unification_73, (MR_Integer) 2)));
                          MR_Integer ll_backend__prog_rep__V_163_163;
                          MR_Integer ll_backend__prog_rep__V_164_164;

                          {
                            ll_backend__prog_rep__V_163_163 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var1_103);
                          }
                          {
                            ll_backend__prog_rep__V_164_164 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var2_104);
                          }
                          {
                            ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__V_163_163));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__V_164_164));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "complicated_unify");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ll_backend__prog_rep__PredId_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
                MR_Word ll_backend__prog_rep__Builtin_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
                MR_Word ll_backend__prog_rep__PredInfo_129;
                MR_Word ll_backend__prog_rep__ModuleSymName_130;
                MR_String ll_backend__prog_rep__ModuleName_131;
                MR_String ll_backend__prog_rep__PredName_132;
                MR_Word ll_backend__prog_rep__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 4)));
                MR_Word ll_backend__prog_rep__Args_196 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
                MR_Word ll_backend__prog_rep__ArgsRep_197;
                MR_Integer ll_backend__prog_rep__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
                MR_Word ll_backend__prog_rep__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
                MR_Word ll_backend__prog_rep__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));
                MR_String ll_backend__prog_rep__V_208_208 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 0)));
                MR_Word ll_backend__prog_rep__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 1)));
                MR_Word ll_backend__prog_rep__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 2)));
                MR_Word ll_backend__prog_rep__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 3)));
                MR_Word ll_backend__prog_rep__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 5)));

                {
                  hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__prog_rep__V_149_149, ll_backend__prog_rep__PredId_124, &ll_backend__prog_rep__PredInfo_129);
                }
                {
                  ll_backend__prog_rep__ModuleSymName_130 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__prog_rep__PredInfo_129);
                }
                {
                  ll_backend__prog_rep__ModuleName_131 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep__ModuleSymName_130);
                }
                {
                  ll_backend__prog_rep__PredName_132 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__prog_rep__PredInfo_129);
                }
                {
                  ll_backend__prog_rep__ArgsRep_197 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_196);
                }
                switch (ll_backend__prog_rep__Builtin_126) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ModuleName_131));
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__PredName_132));
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_197));
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ModuleName_131));
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__PredName_132));
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_197));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "out_of_line_builtin");
                        return;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__prog_rep__GenericCall_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word ll_backend__prog_rep__Args_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word ll_backend__prog_rep__ArgsRep_195;
                    MR_Word ll_backend__prog_rep__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word ll_backend__prog_rep__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
                    MR_Word ll_backend__prog_rep__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));

                    {
                      ll_backend__prog_rep__ArgsRep_195 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_194);
                    }
                    switch (MR_tag((MR_Word) ll_backend__prog_rep__GenericCall_108)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ll_backend__prog_rep__PredVar_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 0)));
                          MR_Integer ll_backend__prog_rep__PredVarRep_116;
                          MR_Word ll_backend__prog_rep__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 1)));
                          MR_Word ll_backend__prog_rep__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 2)));
                          MR_Integer ll_backend__prog_rep__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 3)));

                          {
                            ll_backend__prog_rep__PredVarRep_116 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__PredVar_112);
                          }
                          {
                            ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__PredVarRep_116));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer ll_backend__prog_rep__Num_117 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 1)));
                          MR_Word ll_backend__prog_rep__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 0)));
                          MR_Integer ll_backend__prog_rep__VarRep_189;
                          MR_Word ll_backend__prog_rep__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 2)));
                          MR_Word ll_backend__prog_rep__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 3)));

                          {
                            ll_backend__prog_rep__VarRep_189 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_188);
                          }
                          {
                            ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__VarRep_189));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__Num_117));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String ll_backend__prog_rep__EventName_120 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 0)));

                          {
                            ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__EventName_120));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Integer ll_backend__prog_rep__InputArgRep_122;
                          MR_Integer ll_backend__prog_rep__OutputArgRep_123;
                          MR_Word ll_backend__prog_rep__V_155_155;
                          MR_Word ll_backend__prog_rep__V_156_156;

                          ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__ArgsRep_195)) == (MR_mktag((MR_Integer) 1)));
                          if (ll_backend__prog_rep__succeeded)
                            {
                              ll_backend__prog_rep__InputArgRep_122 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ArgsRep_195, (MR_Integer) 0)));
                              ll_backend__prog_rep__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ArgsRep_195, (MR_Integer) 1)));
                              ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__V_155_155)) == (MR_mktag((MR_Integer) 1)));
                              if (ll_backend__prog_rep__succeeded)
                                {
                                  ll_backend__prog_rep__OutputArgRep_123 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_155_155, (MR_Integer) 0)));
                                  ll_backend__prog_rep__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_155_155, (MR_Integer) 1)));
                                  ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_156_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                }
                            }
                          if (ll_backend__prog_rep__succeeded)
                            {
                              ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__OutputArgRep_123));
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__InputArgRep_122));
                            }
                          else
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "cast arity != 2");
                                return;
                              }
                            }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__prog_rep__ArgVarsRep_139;
                    MR_Word ll_backend__prog_rep__V_146_146;
                    MR_Word ll_backend__prog_rep__Args_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
                    MR_Word ll_backend__prog_rep__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word ll_backend__prog_rep___PredId_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
                    MR_Integer ll_backend__prog_rep__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word ll_backend__prog_rep__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));
                    MR_Word ll_backend__prog_rep__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 6)));
                    MR_Word ll_backend__prog_rep__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 7)));

                    {
                      ll_backend__prog_rep__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[0]));
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3));
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 3) = ((MR_Box) (ll_backend__prog_rep__V_145_145));
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 4) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_2[3]));
                    }
                    {
                      ll_backend__prog_rep__ArgVarsRep_139 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_146_146, ll_backend__prog_rep__Args_198);
                    }
                    {
                      ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ArgVarsRep_139));
                    }
                  }
                  break;
              }
              break;
          }
          {
            ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__FileName_66));
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__LineNo_67));
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 3) = ((MR_Box) (ll_backend__prog_rep__BoundVarsRep_69));
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 4) = ((MR_Box) (ll_backend__prog_rep__AtomicGoalRep_77));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__prog_rep__TypeInfo_222_222;
              MR_Word ll_backend__prog_rep__TypeCtorInfo_223_223;
              MR_String ll_backend__prog_rep__FileName_66;
              MR_Integer ll_backend__prog_rep__LineNo_67;
              MR_Word ll_backend__prog_rep__BoundVars_68;
              MR_Word ll_backend__prog_rep__BoundVarsRep_69;
              MR_Word ll_backend__prog_rep__AtomicGoalRep_77;
              MR_Word ll_backend__prog_rep__V_145_145;

              {
                ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(ll_backend__prog_rep__GoalInfo_8, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Info_5, &ll_backend__prog_rep__FileName_66, &ll_backend__prog_rep__LineNo_67, &ll_backend__prog_rep__BoundVars_68);
              }
              ll_backend__prog_rep__TypeInfo_222_222 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[3];
              ll_backend__prog_rep__TypeCtorInfo_223_223 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              {
                ll_backend__prog_rep__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1));
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
              }
              {
                ll_backend__prog_rep__BoundVarsRep_69 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__BoundVars_68);
              }
              switch (MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__prog_rep__Unification_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word ll_backend__prog_rep__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
                    MR_Word ll_backend__prog_rep__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word ll_backend__prog_rep__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word ll_backend__prog_rep__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));

                    switch (MR_tag((MR_Word) ll_backend__prog_rep__Unification_73)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ll_backend__prog_rep__ConsId_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 1)));
                          MR_Word ll_backend__prog_rep__Args_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 2)));
                          MR_Word ll_backend__prog_rep__ArgModes_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 3)));
                          MR_String ll_backend__prog_rep__ConsIdRep_86;
                          MR_Word ll_backend__prog_rep__ArgsRep_87;
                          MR_Word ll_backend__prog_rep__MaybeArgs_88;
                          MR_Word ll_backend__prog_rep__MaybeArgsRep_89;
                          MR_Word ll_backend__prog_rep__V_166_166;
                          MR_Word ll_backend__prog_rep__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 0)));
                          MR_Integer ll_backend__prog_rep__VarRep_183;
                          MR_Word ll_backend__prog_rep__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 4)));
                          MR_Word ll_backend__prog_rep__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 5)));
                          MR_Word ll_backend__prog_rep__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Unification_73, (MR_Integer) 6)));
                          MR_Word ll_backend__prog_rep__V_168_168;

                          {
                            ll_backend__prog_rep__VarRep_183 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_182);
                          }
                          {
                            ll_backend__prog_rep__ConsIdRep_86 = ll_backend__prog_rep__cons_id_rep_1_f_0(ll_backend__prog_rep__ConsId_78);
                          }
                          {
                            ll_backend__prog_rep__ArgsRep_87 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_79);
                          }
                          {
                            ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__ArgModes_80, ll_backend__prog_rep__Args_79, &ll_backend__prog_rep__MaybeArgs_88);
                          }
                          {
                            ll_backend__prog_rep__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4));
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 3) = ((MR_Box) (ll_backend__prog_rep__V_145_145));
                          }
                          {
                            ll_backend__prog_rep__MaybeArgsRep_89 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[4], (MR_Word) &ll_backend__prog_rep_scalar_common_1[5], ll_backend__prog_rep__V_166_166, ll_backend__prog_rep__MaybeArgs_88);
                          }
                          {
                            ll_backend__prog_rep__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[1]));
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5));
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
                          }
                          {
                            ll_backend__prog_rep__succeeded = mercury__list__all_true_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, ll_backend__prog_rep__V_168_168, ll_backend__prog_rep__ArgModes_80);
                          }
                          if (ll_backend__prog_rep__succeeded)
                            {
                              ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_183));
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_86));
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_87));
                            }
                          else
                            {
                              ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__VarRep_183));
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_86));
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__MaybeArgsRep_89));
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ll_backend__prog_rep__ConsId_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Unification_73, (MR_Integer) 1)));
                          MR_Word ll_backend__prog_rep__Args_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Unification_73, (MR_Integer) 2)));
                          MR_Word ll_backend__prog_rep__ArgModes_264 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Unification_73, (MR_Integer) 3)));
                          MR_String ll_backend__prog_rep__ConsIdRep_265;
                          MR_Word ll_backend__prog_rep__ArgsRep_266;
                          MR_Word ll_backend__prog_rep__MaybeArgs_267;
                          MR_Word ll_backend__prog_rep__MaybeArgsRep_268;
                          MR_Word ll_backend__prog_rep__V_270_270;
                          MR_Word ll_backend__prog_rep__Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Unification_73, (MR_Integer) 0)));
                          MR_Integer ll_backend__prog_rep__VarRep_273;
                          MR_Word ll_backend__prog_rep__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Unification_73, (MR_Integer) 4)));
                          MR_Word ll_backend__prog_rep__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Unification_73, (MR_Integer) 5)));

                          {
                            ll_backend__prog_rep__VarRep_273 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_272);
                          }
                          {
                            ll_backend__prog_rep__ConsIdRep_265 = ll_backend__prog_rep__cons_id_rep_1_f_0(ll_backend__prog_rep__ConsId_262);
                          }
                          {
                            ll_backend__prog_rep__ArgsRep_266 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_263);
                          }
                          {
                            ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__ArgModes_264, ll_backend__prog_rep__Args_263, &ll_backend__prog_rep__MaybeArgs_267);
                          }
                          {
                            ll_backend__prog_rep__V_270_270 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6));
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 3) = ((MR_Box) (ll_backend__prog_rep__V_145_145));
                          }
                          {
                            ll_backend__prog_rep__MaybeArgsRep_268 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[4], (MR_Word) &ll_backend__prog_rep_scalar_common_1[5], ll_backend__prog_rep__V_270_270, ll_backend__prog_rep__MaybeArgs_267);
                          }
                          {
                            ll_backend__prog_rep__succeeded = mercury__list__member_2_p_0(ll_backend__prog_rep__TypeInfo_222_222, ((MR_Box) (ll_backend__prog_rep__Var_272)), ll_backend__prog_rep__BoundVars_68);
                          }
                          if (ll_backend__prog_rep__succeeded)
                            {
                              ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_273));
                              MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_265));
                              MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__MaybeArgsRep_268));
                            }
                          else
                            {
                              ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_273));
                              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_265));
                              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_266));
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ll_backend__prog_rep__Target_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__Unification_73, (MR_Integer) 0)));
                          MR_Word ll_backend__prog_rep__Source_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__Unification_73, (MR_Integer) 1)));
                          MR_Integer ll_backend__prog_rep__V_169_169;
                          MR_Integer ll_backend__prog_rep__V_170_170;

                          {
                            ll_backend__prog_rep__V_169_169 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Target_75);
                          }
                          {
                            ll_backend__prog_rep__V_170_170 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Source_76);
                          }
                          {
                            ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__V_169_169));
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__V_170_170));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Unification_73, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ll_backend__prog_rep__Var1_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Unification_73, (MR_Integer) 1)));
                              MR_Word ll_backend__prog_rep__Var2_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Unification_73, (MR_Integer) 2)));
                              MR_Integer ll_backend__prog_rep__V_163_163;
                              MR_Integer ll_backend__prog_rep__V_164_164;

                              {
                                ll_backend__prog_rep__V_163_163 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var1_103);
                              }
                              {
                                ll_backend__prog_rep__V_164_164 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var2_104);
                              }
                              {
                                ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__V_163_163));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__V_164_164));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "complicated_unify");
                                return;
                              }
                            }
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__prog_rep__PredId_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
                    MR_Word ll_backend__prog_rep__Builtin_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word ll_backend__prog_rep__PredInfo_129;
                    MR_Word ll_backend__prog_rep__ModuleSymName_130;
                    MR_String ll_backend__prog_rep__ModuleName_131;
                    MR_String ll_backend__prog_rep__PredName_132;
                    MR_Word ll_backend__prog_rep__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 4)));
                    MR_Word ll_backend__prog_rep__Args_196 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word ll_backend__prog_rep__ArgsRep_197;
                    MR_Integer ll_backend__prog_rep__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word ll_backend__prog_rep__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
                    MR_Word ll_backend__prog_rep__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));
                    MR_String ll_backend__prog_rep__V_208_208 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 0)));
                    MR_Word ll_backend__prog_rep__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 1)));
                    MR_Word ll_backend__prog_rep__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 2)));
                    MR_Word ll_backend__prog_rep__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 3)));
                    MR_Word ll_backend__prog_rep__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 5)));

                    {
                      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__prog_rep__V_149_149, ll_backend__prog_rep__PredId_124, &ll_backend__prog_rep__PredInfo_129);
                    }
                    {
                      ll_backend__prog_rep__ModuleSymName_130 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__prog_rep__PredInfo_129);
                    }
                    {
                      ll_backend__prog_rep__ModuleName_131 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep__ModuleSymName_130);
                    }
                    {
                      ll_backend__prog_rep__PredName_132 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__prog_rep__PredInfo_129);
                    }
                    {
                      ll_backend__prog_rep__ArgsRep_197 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_196);
                    }
                    switch (ll_backend__prog_rep__Builtin_126) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ModuleName_131));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__PredName_132));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_197));
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ModuleName_131));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__PredName_132));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_197));
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "out_of_line_builtin");
                            return;
                          }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ll_backend__prog_rep__GenericCall_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
                        MR_Word ll_backend__prog_rep__Args_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
                        MR_Word ll_backend__prog_rep__ArgsRep_195;
                        MR_Word ll_backend__prog_rep__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
                        MR_Word ll_backend__prog_rep__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
                        MR_Word ll_backend__prog_rep__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));

                        {
                          ll_backend__prog_rep__ArgsRep_195 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_194);
                        }
                        switch (MR_tag((MR_Word) ll_backend__prog_rep__GenericCall_108)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word ll_backend__prog_rep__PredVar_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 0)));
                              MR_Integer ll_backend__prog_rep__PredVarRep_116;
                              MR_Word ll_backend__prog_rep__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 1)));
                              MR_Word ll_backend__prog_rep__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 2)));
                              MR_Integer ll_backend__prog_rep__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 3)));

                              {
                                ll_backend__prog_rep__PredVarRep_116 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__PredVar_112);
                              }
                              {
                                ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__PredVarRep_116));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Integer ll_backend__prog_rep__Num_117 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 1)));
                              MR_Word ll_backend__prog_rep__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 0)));
                              MR_Integer ll_backend__prog_rep__VarRep_189;
                              MR_Word ll_backend__prog_rep__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 2)));
                              MR_Word ll_backend__prog_rep__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 3)));

                              {
                                ll_backend__prog_rep__VarRep_189 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_188);
                              }
                              {
                                ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__VarRep_189));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__Num_117));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_String ll_backend__prog_rep__EventName_120 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 0)));

                              {
                                ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__EventName_120));
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Integer ll_backend__prog_rep__InputArgRep_122;
                              MR_Integer ll_backend__prog_rep__OutputArgRep_123;
                              MR_Word ll_backend__prog_rep__V_155_155;
                              MR_Word ll_backend__prog_rep__V_156_156;

                              ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__ArgsRep_195)) == (MR_mktag((MR_Integer) 1)));
                              if (ll_backend__prog_rep__succeeded)
                                {
                                  ll_backend__prog_rep__InputArgRep_122 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ArgsRep_195, (MR_Integer) 0)));
                                  ll_backend__prog_rep__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ArgsRep_195, (MR_Integer) 1)));
                                  ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__V_155_155)) == (MR_mktag((MR_Integer) 1)));
                                  if (ll_backend__prog_rep__succeeded)
                                    {
                                      ll_backend__prog_rep__OutputArgRep_123 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_155_155, (MR_Integer) 0)));
                                      ll_backend__prog_rep__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_155_155, (MR_Integer) 1)));
                                      ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_156_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    }
                                }
                              if (ll_backend__prog_rep__succeeded)
                                {
                                  ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                  MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__OutputArgRep_123));
                                  MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__InputArgRep_122));
                                }
                              else
                                {
                                  {
                                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "cast arity != 2");
                                    return;
                                  }
                                }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__prog_rep__ArgVarsRep_139;
                        MR_Word ll_backend__prog_rep__V_146_146;
                        MR_Word ll_backend__prog_rep__Args_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
                        MR_Word ll_backend__prog_rep__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
                        MR_Word ll_backend__prog_rep___PredId_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
                        MR_Integer ll_backend__prog_rep__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
                        MR_Word ll_backend__prog_rep__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));
                        MR_Word ll_backend__prog_rep__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 6)));
                        MR_Word ll_backend__prog_rep__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 7)));

                        {
                          ll_backend__prog_rep__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[0]));
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3));
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 3) = ((MR_Box) (ll_backend__prog_rep__V_145_145));
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 4) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_2[3]));
                        }
                        {
                          ll_backend__prog_rep__ArgVarsRep_139 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_146_146, ll_backend__prog_rep__Args_198);
                        }
                        {
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ArgVarsRep_139));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__FileName_66));
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__LineNo_67));
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 3) = ((MR_Box) (ll_backend__prog_rep__BoundVarsRep_69));
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 4) = ((MR_Box) (ll_backend__prog_rep__AtomicGoalRep_77));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__prog_rep__ConjType_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
              MR_Word ll_backend__prog_rep__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
              MR_Word ll_backend__prog_rep__FlattenParConjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 5)));
              MR_Word ll_backend__prog_rep__Goals_16;
              MR_Word ll_backend__prog_rep__GoalReps_17;
              MR_String ll_backend__prog_rep__V_203_203 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 0)));
              MR_Word ll_backend__prog_rep__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 1)));
              MR_Word ll_backend__prog_rep__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 2)));
              MR_Word ll_backend__prog_rep__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 3)));
              MR_Word ll_backend__prog_rep__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 4)));

              switch (ll_backend__prog_rep__FlattenParConjs_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__prog_rep__V_173_173;

                    ll_backend__prog_rep__Goals_16 = ll_backend__prog_rep__Goals0_14;
                    {
                      ll_backend__prog_rep__V_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[2]));
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7));
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 3) = ((MR_Box) (ll_backend__prog_rep__ConjType_13));
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    {
                      mercury__require__expect_4_p_0(ll_backend__prog_rep__V_173_173, (MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "non-plain conjunction and declarative debugging");
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    hlds__goal_util__flatten_conj_2_p_0(ll_backend__prog_rep__Goals0_14, &ll_backend__prog_rep__Goals_16);
                  }
                  break;
              }
              {
                ll_backend__prog_rep__conj_to_conj_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Goals_16, &ll_backend__prog_rep__GoalReps_17);
              }
              {
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (ll_backend__prog_rep__GoalReps_17));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__prog_rep__V_172_172;
              MR_Word ll_backend__prog_rep__Goals_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
              MR_Word ll_backend__prog_rep__GoalReps_179;

              {
                ll_backend__prog_rep__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[1]));
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8));
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 4) = ((MR_Box) (ll_backend__prog_rep__Instmap0_6));
              }
              {
                mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &ll_backend__prog_rep_scalar_common_1[1], ll_backend__prog_rep__V_172_172, ll_backend__prog_rep__Goals_178, &ll_backend__prog_rep__GoalReps_179);
              }
              {
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (ll_backend__prog_rep__GoalReps_179));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__prog_rep__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
              MR_Word ll_backend__prog_rep__CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
              MR_Word ll_backend__prog_rep__Cases_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
              MR_Word ll_backend__prog_rep__CasesRep_34;
              MR_Word ll_backend__prog_rep__CanFailRep_35;
              MR_Integer ll_backend__prog_rep__VarRep_36;
              MR_Word ll_backend__prog_rep__V_171_171;

              {
                ll_backend__prog_rep__V_171_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[2]));
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9));
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 4) = ((MR_Box) (ll_backend__prog_rep__Instmap0_6));
              }
              {
                mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &ll_backend__prog_rep_scalar_common_1[2], ll_backend__prog_rep__V_171_171, ll_backend__prog_rep__Cases_33, &ll_backend__prog_rep__CasesRep_34);
              }
              switch (ll_backend__prog_rep__CanFail_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__prog_rep__CanFailRep_35 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  ll_backend__prog_rep__CanFailRep_35 = (MR_Integer) 1;
                  break;
              }
              {
                ll_backend__prog_rep__VarRep_36 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_31);
              }
              {
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_36));
                MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__CanFailRep_35));
                MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__CasesRep_34));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__prog_rep__SubGoalInfo_39;
              MR_Word ll_backend__prog_rep__OuterDetism_40;
              MR_Word ll_backend__prog_rep__InnerDetism_41;
              MR_Word ll_backend__prog_rep__MaybeCut_42;
              MR_Word ll_backend__prog_rep__SubGoal_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
              MR_Word ll_backend__prog_rep__SubGoalRep_181;
              MR_Word ll_backend__prog_rep__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
              MR_Word ll_backend__prog_rep__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__SubGoal_180, (MR_Integer) 0)));

              ll_backend__prog_rep__SubGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__SubGoal_180, (MR_Integer) 1)));
              {
                ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__SubGoal_180, &ll_backend__prog_rep__SubGoalRep_181);
              }
              {
                ll_backend__prog_rep__OuterDetism_40 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__prog_rep__GoalInfo_8);
              }
              {
                ll_backend__prog_rep__InnerDetism_41 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__prog_rep__SubGoalInfo_39);
              }
              ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__InnerDetism_41 == ll_backend__prog_rep__OuterDetism_40);
              if (ll_backend__prog_rep__succeeded)
                ll_backend__prog_rep__MaybeCut_42 = (MR_Integer) 1;
              else
                ll_backend__prog_rep__MaybeCut_42 = (MR_Integer) 0;
              {
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__SubGoalRep_181));
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__MaybeCut_42));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__prog_rep__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
              MR_Word ll_backend__prog_rep__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
              MR_Word ll_backend__prog_rep__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
              MR_Word ll_backend__prog_rep__CondGoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Cond_21, (MR_Integer) 1)));
              MR_Word ll_backend__prog_rep__InstmapDelta_26;
              MR_Word ll_backend__prog_rep__InstmapAfterCond_27;
              MR_Word ll_backend__prog_rep__CondRep_28;
              MR_Word ll_backend__prog_rep__ThenRep_29;
              MR_Word ll_backend__prog_rep__ElseRep_30;
              MR_Word ll_backend__prog_rep__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
              MR_Word ll_backend__prog_rep__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Cond_21, (MR_Integer) 0)));

              {
                ll_backend__prog_rep__InstmapDelta_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__prog_rep__CondGoalInfo_25);
              }
              {
                hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__InstmapDelta_26, &ll_backend__prog_rep__InstmapAfterCond_27);
              }
              {
                ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Cond_21, &ll_backend__prog_rep__CondRep_28);
              }
              {
                ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__InstmapAfterCond_27, ll_backend__prog_rep__Then_22, &ll_backend__prog_rep__ThenRep_29);
              }
              {
                ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Else_23, &ll_backend__prog_rep__ElseRep_30);
              }
              {
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__CondRep_28));
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__ThenRep_29));
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 3) = ((MR_Box) (ll_backend__prog_rep__ElseRep_30));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "unexpected shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__prog_rep__GoalRep_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep__GoalExprRep_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep__DetismRep_11));
      MR_hl_field(MR_mktag(0), base, 2) = NULL;
    }
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
{
  {
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv0_Bytes_10;

    {
      ll_backend__prog_rep__conv0_Bytes_10 = ll_backend__prog_rep__encode_head_var_func_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_Bytes_10));
    return ll_backend__prog_rep__wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0(
  MR_Word ll_backend__prog_rep__HeadVars_15,
  MR_Word ll_backend__prog_rep__Goal_16,
  MR_Word ll_backend__prog_rep__InstMap0_17,
  MR_Word ll_backend__prog_rep__VarTypes_18,
  MR_Word ll_backend__prog_rep__VarNumMap_19,
  MR_Word ll_backend__prog_rep__ModuleInfo_20,
  MR_Word ll_backend__prog_rep__IncludeVarNameTable_21,
  MR_Word ll_backend__prog_rep__IncludeVarTypes_22,
  MR_Word ll_backend__prog_rep__ProcDetism_23,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_40,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_41,
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_42,
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_43,
  MR_Word * ll_backend__prog_rep__ProcRepBytes_26)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;
    MR_Word ll_backend__prog_rep__TypeCtorInfo_58_58;
    MR_Word ll_backend__prog_rep__TypeCtorInfo_14_83;
    MR_Word ll_backend__prog_rep__TypeInfo_15_84;
    MR_Word ll_backend__prog_rep__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Goal_16, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep__Context_29;
    MR_String ll_backend__prog_rep__FileName_30;
    MR_Word ll_backend__prog_rep__VarNumRep_31;
    MR_Word ll_backend__prog_rep__VarNameTableBytes_32;
    MR_Word ll_backend__prog_rep__Info_33;
    MR_Word ll_backend__prog_rep__InstmapDelta_34;
    MR_Word ll_backend__prog_rep__FileNameBytes_35;
    MR_Word ll_backend__prog_rep__GoalBytes_36;
    MR_Integer ll_backend__prog_rep__DetismByte_37;
    MR_Word ll_backend__prog_rep__ProcRepBytes0_38;
    MR_Word ll_backend__prog_rep__LimitBytes_39;
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_44_44;
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_47_47;
    MR_Word ll_backend__prog_rep__V_49_49;
    MR_Word ll_backend__prog_rep__V_50_50;
    MR_Word ll_backend__prog_rep__V_51_51;
    MR_Word ll_backend__prog_rep__V_52_52;
    MR_Word ll_backend__prog_rep__V_53_53;
    MR_Integer ll_backend__prog_rep__V_55_55;
    MR_Integer ll_backend__prog_rep__V_56_56;
    MR_Integer ll_backend__prog_rep__Index_64;
    MR_Word ll_backend__prog_rep__GoalRep_73;
    MR_Word ll_backend__prog_rep__V_79_79;
    MR_Word ll_backend__prog_rep__V_80_80;
    MR_Word ll_backend__prog_rep__V_81_81;
    MR_Word ll_backend__prog_rep__V_82_82;
    MR_Integer ll_backend__prog_rep__V_90_90;
    MR_Word ll_backend__prog_rep__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Goal_16, (MR_Integer) 0)));

    {
      ll_backend__prog_rep__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__prog_rep__GoalInfo_28);
    }
    {
      mercury__term__context_file_2_p_0(ll_backend__prog_rep__Context_29, &ll_backend__prog_rep__FileName_30);
    }
    {
      ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0(ll_backend__prog_rep__IncludeVarNameTable_21, ll_backend__prog_rep__IncludeVarTypes_22, ll_backend__prog_rep__VarTypes_18, ll_backend__prog_rep__VarNumMap_19, &ll_backend__prog_rep__VarNumRep_31, &ll_backend__prog_rep__VarNameTableBytes_32, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_40, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_44_44, ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_42, ll_backend__prog_rep__STATE_VARIABLE_TypeTable_43);
    }
    {
      ll_backend__prog_rep__Info_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 0) = ((MR_Box) (ll_backend__prog_rep__FileName_30));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 1) = ((MR_Box) (ll_backend__prog_rep__VarTypes_18));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 2) = ((MR_Box) (ll_backend__prog_rep__VarNumMap_19));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 3) = ((MR_Box) (ll_backend__prog_rep__VarNumRep_31));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 4) = ((MR_Box) (ll_backend__prog_rep__ModuleInfo_20));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 5) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      ll_backend__prog_rep__InstmapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__prog_rep__GoalInfo_28);
    }
    {
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__FileName_30, &ll_backend__prog_rep__Index_64, ll_backend__prog_rep__STATE_VARIABLE_StringTable_44_44, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_47_47);
    }
    {
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_64, &ll_backend__prog_rep__FileNameBytes_35);
    }
    {
      ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_33, ll_backend__prog_rep__InstMap0_17, ll_backend__prog_rep__Goal_16, &ll_backend__prog_rep__GoalRep_73);
    }
    {
      ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_33, ll_backend__prog_rep__GoalRep_73, &ll_backend__prog_rep__GoalBytes_36, ll_backend__prog_rep__STATE_VARIABLE_StringTable_47_47, ll_backend__prog_rep__STATE_VARIABLE_StringTable_41);
    }
    {
      ll_backend__prog_rep__DetismByte_37 = hlds__code_model__represent_determinism_1_f_0(ll_backend__prog_rep__ProcDetism_23);
    }
    ll_backend__prog_rep__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    ll_backend__prog_rep__TypeCtorInfo_14_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    ll_backend__prog_rep__TypeInfo_15_84 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[3];
    {
      ll_backend__prog_rep__V_90_90 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeInfo_15_84, ll_backend__prog_rep__HeadVars_15);
    }
    {
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_90_90, &ll_backend__prog_rep__V_79_79);
    }
    {
      ll_backend__prog_rep__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 1) = ((MR_Box) (ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 3) = ((MR_Box) (ll_backend__prog_rep__Info_33));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 4) = ((MR_Box) (ll_backend__prog_rep__InstMap0_17));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 5) = ((MR_Box) (ll_backend__prog_rep__InstmapDelta_34));
    }
    {
      ll_backend__prog_rep__V_81_81 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_15_84, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], ll_backend__prog_rep__V_82_82, ll_backend__prog_rep__HeadVars_15);
    }
    {
      ll_backend__prog_rep__V_80_80 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_14_83, ll_backend__prog_rep__V_81_81);
    }
    {
      ll_backend__prog_rep__V_51_51 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_14_83, ll_backend__prog_rep__V_79_79, ll_backend__prog_rep__V_80_80);
    }
    {
      ll_backend__prog_rep__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_53_53, 0) = ((MR_Box) (ll_backend__prog_rep__DetismByte_37));
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__prog_rep__V_52_52 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__GoalBytes_36, ll_backend__prog_rep__V_53_53);
    }
    {
      ll_backend__prog_rep__V_50_50 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__V_51_51, ll_backend__prog_rep__V_52_52);
    }
    {
      ll_backend__prog_rep__V_49_49 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__VarNameTableBytes_32, ll_backend__prog_rep__V_50_50);
    }
    {
      ll_backend__prog_rep__ProcRepBytes0_38 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__FileNameBytes_35, ll_backend__prog_rep__V_49_49);
    }
    {
      ll_backend__prog_rep__V_56_56 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__ProcRepBytes0_38);
    }
    ll_backend__prog_rep__V_55_55 = (ll_backend__prog_rep__V_56_56 + (MR_Integer) 4);
    {
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_55_55, &ll_backend__prog_rep__LimitBytes_39);
    }
    {
      *ll_backend__prog_rep__ProcRepBytes_26 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__LimitBytes_39, ll_backend__prog_rep__ProcRepBytes0_38);
    }
  }
}

static void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1(
  MR_Box ll_backend__prog_rep__closure_arg,
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep__wrapper_arg_2)
{
  {
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
    MR_Word ll_backend__prog_rep__conv0_BytesCord_6;

    {
      ll_backend__prog_rep__encode_oisu_proc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv0_BytesCord_6);
    }
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_BytesCord_6));
  }
}

void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0(
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
  MR_Integer * ll_backend__prog_rep__HeadVar__3_3,
  MR_Word * ll_backend__prog_rep__HeadVar__4_4)
{
  {
    MR_bool ll_backend__prog_rep__succeeded;

    if ((ll_backend__prog_rep__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__prog_rep__HeadVar__3_3 = (MR_Integer) 0;
        {
          *ll_backend__prog_rep__HeadVar__4_4 = mercury__cord__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
      }
    else
      {
        MR_Word ll_backend__prog_rep__Pair_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep__Pairs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ll_backend__prog_rep__TailNumOISUTypes_11;
        MR_Word ll_backend__prog_rep__TailBytes_12;
        MR_Word ll_backend__prog_rep__ModuleName_13;
        MR_Word ll_backend__prog_rep__TypeCtor_14;
        MR_Word ll_backend__prog_rep__Preds_15;
        MR_Word ll_backend__prog_rep__TypeCtorSymName_16;
        MR_Word ll_backend__prog_rep__TypeCtorModuleName_18;
        MR_String ll_backend__prog_rep__TypeCtorName_19;
        MR_Integer ll_backend__prog_rep___TypeCtorArity_17;

        {
          ll_backend__prog_rep__encode_oisu_type_procs_4_p_0(ll_backend__prog_rep__HeadVar__1_1, ll_backend__prog_rep__Pairs_8, &ll_backend__prog_rep__TailNumOISUTypes_11, &ll_backend__prog_rep__TailBytes_12);
        }
        {
          hlds__hlds_module__module_info_get_name_2_p_0(ll_backend__prog_rep__HeadVar__1_1, &ll_backend__prog_rep__ModuleName_13);
        }
        ll_backend__prog_rep__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Pair_7, (MR_Integer) 0)));
        ll_backend__prog_rep__Preds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Pair_7, (MR_Integer) 1)));
        ll_backend__prog_rep__TypeCtorSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__TypeCtor_14, (MR_Integer) 0)));
        ll_backend__prog_rep___TypeCtorArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__TypeCtor_14, (MR_Integer) 1)));
        if (((MR_tag((MR_Word) ll_backend__prog_rep__TypeCtorSymName_16)) == (MR_mktag((MR_Integer) 1))))
          {
            ll_backend__prog_rep__TypeCtorModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__TypeCtorSymName_16, (MR_Integer) 0)));
            ll_backend__prog_rep__TypeCtorName_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__TypeCtorSymName_16, (MR_Integer) 1)));
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.encode_oisu_type_procs\'/4", (MR_String) "unqualified type_ctor name");
              return;
            }
          }
        {
          ll_backend__prog_rep__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__prog_rep__TypeCtorModuleName_18, ll_backend__prog_rep__ModuleName_13);
        }
        if (ll_backend__prog_rep__succeeded)
          {
            MR_Word ll_backend__prog_rep__TypeCtorInfo_55_55;
            MR_Word ll_backend__prog_rep__TypeInfo_58_58;
            MR_Word ll_backend__prog_rep__TypeCtorInfo_63_63;
            MR_Word ll_backend__prog_rep__TypeCtorNameBytes_21;
            MR_Word ll_backend__prog_rep__CreatorPreds_22;
            MR_Word ll_backend__prog_rep__MutatorPreds_23;
            MR_Word ll_backend__prog_rep__DestructorPreds_24;
            MR_Integer ll_backend__prog_rep__NumCreatorPreds_25;
            MR_Integer ll_backend__prog_rep__NumMutatorPreds_26;
            MR_Integer ll_backend__prog_rep__NumDestructorPreds_27;
            MR_Word ll_backend__prog_rep__NumCreatorPredsBytes_28;
            MR_Word ll_backend__prog_rep__NumMutatorPredsBytes_29;
            MR_Word ll_backend__prog_rep__NumDestructorPredsBytes_30;
            MR_Word ll_backend__prog_rep__CreatorPredBytes_31;
            MR_Word ll_backend__prog_rep__MutatorPredBytes_32;
            MR_Word ll_backend__prog_rep__DestructorPredBytes_33;
            MR_Word ll_backend__prog_rep__HeadBytes_34;
            MR_Word ll_backend__prog_rep__V_38_38;
            MR_Word ll_backend__prog_rep__V_41_41;
            MR_Word ll_backend__prog_rep__V_42_42;
            MR_Word ll_backend__prog_rep__V_43_43;
            MR_Word ll_backend__prog_rep__V_44_44;
            MR_Word ll_backend__prog_rep__V_45_45;
            MR_Word ll_backend__prog_rep__V_46_46;
            MR_Word ll_backend__prog_rep__V_47_47;
            MR_Word ll_backend__prog_rep__V_48_48;
            MR_Word ll_backend__prog_rep__V_49_49;
            MR_Word ll_backend__prog_rep__V_50_50;
            MR_Word ll_backend__prog_rep__V_51_51;
            MR_Word ll_backend__prog_rep__V_52_52;

            {
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__TypeCtorName_19, &ll_backend__prog_rep__TypeCtorNameBytes_21);
            }
            ll_backend__prog_rep__CreatorPreds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Preds_15, (MR_Integer) 0)));
            ll_backend__prog_rep__MutatorPreds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Preds_15, (MR_Integer) 1)));
            ll_backend__prog_rep__DestructorPreds_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Preds_15, (MR_Integer) 2)));
            ll_backend__prog_rep__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            {
              mercury__list__length_2_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__CreatorPreds_22, &ll_backend__prog_rep__NumCreatorPreds_25);
            }
            {
              mercury__list__length_2_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__MutatorPreds_23, &ll_backend__prog_rep__NumMutatorPreds_26);
            }
            {
              mercury__list__length_2_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__DestructorPreds_24, &ll_backend__prog_rep__NumDestructorPreds_27);
            }
            {
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__NumCreatorPreds_25, &ll_backend__prog_rep__NumCreatorPredsBytes_28);
            }
            {
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__NumMutatorPreds_26, &ll_backend__prog_rep__NumMutatorPredsBytes_29);
            }
            {
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__NumDestructorPreds_27, &ll_backend__prog_rep__NumDestructorPredsBytes_30);
            }
            {
              ll_backend__prog_rep__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 1) = ((MR_Box) (ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1));
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 3) = ((MR_Box) (ll_backend__prog_rep__HeadVar__1_1));
            }
            ll_backend__prog_rep__TypeInfo_58_58 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[0];
            {
              mercury__list__map_3_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__V_38_38, ll_backend__prog_rep__CreatorPreds_22, &ll_backend__prog_rep__CreatorPredBytes_31);
            }
            {
              mercury__list__map_3_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__V_38_38, ll_backend__prog_rep__MutatorPreds_23, &ll_backend__prog_rep__MutatorPredBytes_32);
            }
            {
              mercury__list__map_3_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__V_38_38, ll_backend__prog_rep__DestructorPreds_24, &ll_backend__prog_rep__DestructorPredBytes_33);
            }
            ll_backend__prog_rep__TypeCtorInfo_63_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              ll_backend__prog_rep__V_41_41 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__TypeCtorNameBytes_21);
            }
            {
              ll_backend__prog_rep__V_43_43 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__NumCreatorPredsBytes_28);
            }
            {
              ll_backend__prog_rep__V_45_45 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__CreatorPredBytes_31);
            }
            {
              ll_backend__prog_rep__V_47_47 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__NumMutatorPredsBytes_29);
            }
            {
              ll_backend__prog_rep__V_49_49 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__MutatorPredBytes_32);
            }
            {
              ll_backend__prog_rep__V_51_51 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__NumDestructorPredsBytes_30);
            }
            {
              ll_backend__prog_rep__V_52_52 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__DestructorPredBytes_33);
            }
            {
              ll_backend__prog_rep__V_50_50 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_51_51, ll_backend__prog_rep__V_52_52);
            }
            {
              ll_backend__prog_rep__V_48_48 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_49_49, ll_backend__prog_rep__V_50_50);
            }
            {
              ll_backend__prog_rep__V_46_46 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_47_47, ll_backend__prog_rep__V_48_48);
            }
            {
              ll_backend__prog_rep__V_44_44 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_45_45, ll_backend__prog_rep__V_46_46);
            }
            {
              ll_backend__prog_rep__V_42_42 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_43_43, ll_backend__prog_rep__V_44_44);
            }
            {
              ll_backend__prog_rep__HeadBytes_34 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_41_41, ll_backend__prog_rep__V_42_42);
            }
            *ll_backend__prog_rep__HeadVar__3_3 = ((MR_Integer) 1 + ll_backend__prog_rep__TailNumOISUTypes_11);
            {
              *ll_backend__prog_rep__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__HeadBytes_34, ll_backend__prog_rep__TailBytes_12);
            }
          }
        else
          {
            *ll_backend__prog_rep__HeadVar__3_3 = ll_backend__prog_rep__TailNumOISUTypes_11;
            *ll_backend__prog_rep__HeadVar__4_4 = ll_backend__prog_rep__TailBytes_12;
          }
      }
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

/* :- end_module ll_backend.prog_rep. */
