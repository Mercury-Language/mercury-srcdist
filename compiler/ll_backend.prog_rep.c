/*
** Automatically generated from `prog_rep.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "backend_libs.proc_label.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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



#line 362 "prog_rep.m"
struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
#line 367 "prog_rep.m"
  MR_bool ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 367 "prog_rep.m"
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11;
#line 413 "prog_rep.m"
  jmp_buf ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4;
#line 413 "prog_rep.m"
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30;
#line 362 "prog_rep.m"
};

#line 347 "prog_rep.m"
struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
#line 352 "prog_rep.m"
  MR_bool ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 352 "prog_rep.m"
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11;
#line 413 "prog_rep.m"
  jmp_buf ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4;
#line 413 "prog_rep.m"
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30;
#line 347 "prog_rep.m"
};

#line 332 "prog_rep.m"
struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
#line 337 "prog_rep.m"
  MR_bool ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 337 "prog_rep.m"
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11;
#line 413 "prog_rep.m"
  jmp_buf ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4;
#line 413 "prog_rep.m"
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_31;
#line 332 "prog_rep.m"
};


#line 188 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0;

#line 191 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 194 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 197 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 200 "ll_backend.prog_rep.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

#line 203 "ll_backend.prog_rep.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 206 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 209 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 212 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0;

#line 215 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0;

#line 218 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 221 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 224 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0;

#line 227 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1;

#line 230 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_value_ordered_flatten_par_conjs_0[2];

#line 233 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_name_ordered_flatten_par_conjs_0[2];

#line 236 "ll_backend.prog_rep.c"
static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_flatten_par_conjs_0[2];

#line 239 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 242 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

#line 245 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

#line 248 "ll_backend.prog_rep.c"
static const MR_PseudoTypeInfo ll_backend__prog_rep__ll_backend__prog_rep__field_types_prog_rep_info_0_0[6];

#line 251 "ll_backend.prog_rep.c"
static const MR_ConstString ll_backend__prog_rep__ll_backend__prog_rep__field_names_prog_rep_info_0_0[6];

#line 254 "ll_backend.prog_rep.c"
static const MR_DuFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0;

#line 257 "ll_backend.prog_rep.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0[1];

#line 260 "ll_backend.prog_rep.c"
static const MR_DuPtagLayout ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0[1];

#line 263 "ll_backend.prog_rep.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_name_ordered_prog_rep_info_0[1];

#line 266 "ll_backend.prog_rep.c"
static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_prog_rep_info_0[1];

#line 269 "ll_backend.prog_rep.c"
static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001(
#line 272 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 274 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2);

#line 277 "ll_backend.prog_rep.c"
static void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001(
#line 280 "ll_backend.prog_rep.c"
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
#line 282 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 284 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_3);

#line 287 "ll_backend.prog_rep.c"
static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001(
#line 290 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 292 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2);

#line 295 "ll_backend.prog_rep.c"
static void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001(
#line 298 "ll_backend.prog_rep.c"
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
#line 300 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 302 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_3);

#line 305 "ll_backend.prog_rep.c"
static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0_10001(
#line 308 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 310 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2);

#line 313 "ll_backend.prog_rep.c"
static void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0_10001(
#line 316 "ll_backend.prog_rep.c"
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
#line 318 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 320 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_3);

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 362 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 362 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 362 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 362 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 362 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 347 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 347 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 347 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 347 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 347 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 332 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 332 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 332 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 332 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 332 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

#line 317 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(
#line 317 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 317 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum2_8);

#line 312 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__312__1_2_p_0(
#line 312 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarTypes_12,
#line 312 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_36);

#line 448 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__448__1_2_p_0(
#line 448 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ConjType_13,
#line 448 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_177);

#line 519 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__519__2_2_f_0(
#line 519 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_271,
#line 519 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_256);

#line 519 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__519__1_2_f_0(
#line 519 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_167,
#line 519 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_230);

#line 592 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__592__1_3_f_0(
#line 592 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_147,
#line 592 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_148,
#line 592 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_243);

#line 1016 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_method_num_func_1_f_0(
#line 1016 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum_3);

#line 1011 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_lineno_func_1_f_0(
#line 1011 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum_3);

#line 1006 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_length_func_1_f_0(
#line 1006 "prog_rep.m"
  MR_Word ll_backend__prog_rep__TypeInfo_for_T_6,
#line 1006 "prog_rep.m"
  MR_Word ll_backend__prog_rep__List_3);

#line 971 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_head_var_func_4_f_0(
#line 971 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_6,
#line 971 "prog_rep.m"
  MR_Word ll_backend__prog_rep__InitialInstmap_7,
#line 971 "prog_rep.m"
  MR_Word ll_backend__prog_rep__InstmapDelta_8,
#line 971 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Var_9);

#line 950 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(
#line 950 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 950 "prog_rep.m"
  MR_Word ll_backend__prog_rep__MaybeVar_5);

#line 948 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1(
#line 948 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 948 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 943 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(
#line 943 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 943 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Vars_5);

#line 928 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_rep_func_2_f_0(
#line 928 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 928 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__Var_5);

#line 923 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__var_to_var_rep_2_f_0(
#line 923 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 923 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Var_5);

#line 921 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0_1(
#line 921 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 921 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 917 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0(
#line 917 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 917 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Vars_5);

#line 902 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(
#line 902 "prog_rep.m"
  MR_String ll_backend__prog_rep__String_5,
#line 902 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_6,
#line 902 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_9,
#line 902 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_10);

#line 860 "prog_rep.m"
static MR_String MR_CALL 
ll_backend__prog_rep__cons_id_rep_1_f_0(
#line 860 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1);

#line 851 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(
#line 851 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ConsIdArity_5,
#line 851 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__ConsIdBytes_6,
#line 851 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_12,
#line 851 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_13);

#line 848 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0_1(
#line 848 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 848 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 831 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(
#line 831 "prog_rep.m"
  MR_Word ll_backend__prog_rep__GoalInfo_7,
#line 831 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap0_8,
#line 831 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_9,
#line 831 "prog_rep.m"
  MR_String * ll_backend__prog_rep__FileName_10,
#line 831 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__LineNo_11,
#line 831 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__BoundVars_12);

#line 812 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__filter_input_args_4_p_0(
#line 812 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_1,
#line 812 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 812 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 812 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4);

#line 802 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__lhs_final_is_ground_2_p_0(
#line 802 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_3,
#line 802 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2);

#line 797 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0_1(
#line 797 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 797 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 797 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 797 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 797 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4);

#line 790 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0(
#line 790 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_6,
#line 790 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Case_7,
#line 790 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_8,
#line 790 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_16,
#line 790 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_17);

#line 773 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_3(
#line 773 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 773 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 773 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 773 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 773 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4);

#line 658 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_2(
#line 658 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 658 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 658 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 658 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 658 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4);

#line 652 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_1(
#line 652 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 652 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 652 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 652 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 652 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4);

#line 646 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0(
#line 646 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_6,
#line 646 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 646 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_10,
#line 646 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71,
#line 646 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);

#line 635 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__detism_to_detism_rep_2_p_0(
#line 635 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
#line 635 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__2_2);

#line 623 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(
#line 623 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ConsId_3,
#line 623 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__2_2);

#line 621 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0_1(
#line 621 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 621 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 621 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2);

#line 614 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0(
#line 614 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_5,
#line 614 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap_6,
#line 614 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 614 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4);

#line 603 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__conj_to_conj_rep_4_p_0(
#line 603 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_1,
#line 603 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap0_2,
#line 603 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 603 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4);

#line 377 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarNumRep_13,
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarTypes_14,
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Var_15,
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__4_4,
#line 377 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_26,
#line 377 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_27,
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_28,
#line 377 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_29,
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_30,
#line 377 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_31,
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_32,
#line 377 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_33);

#line 362 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_4_byte_8_p_0(
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep___ProgVar_9,
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 362 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 362 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 362 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 362 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

#line 347 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_2_byte_8_p_0(
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep___ProgVar_9,
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 347 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 347 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 347 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 347 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

#line 332 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_1_byte_8_p_0(
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep___ProgVar_9,
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 332 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 332 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 332 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 332 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

#line 317 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__max_var_num_3_f_0(
#line 317 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_5,
#line 317 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 317 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum2_8);

#line 304 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_6(
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 304 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 304 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 304 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8,
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_9,
#line 304 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_10);

#line 299 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_5(
#line 299 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 299 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 299 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 299 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 299 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 299 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 299 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 299 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 299 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8);

#line 295 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_4(
#line 295 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 295 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 295 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 295 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 295 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 295 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 295 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 295 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 295 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8);

#line 291 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_3(
#line 291 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 291 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 291 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 291 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 291 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 291 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 291 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 291 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 291 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8);

#line 312 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_2(
#line 312 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg);

#line 273 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_1(
#line 273 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 273 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 273 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 273 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3);

#line 265 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0(
#line 265 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarNameTable_11,
#line 265 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarTypes_12,
#line 265 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarTypes_13,
#line 265 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarNumMap_14,
#line 265 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__VarNumRep_15,
#line 265 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_16,
#line 265 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24,
#line 265 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_25,
#line 265 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26,
#line 265 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27);

#line 158 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_oisu_proc_3_p_0(
#line 158 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ModuleInfo_4,
#line 158 "prog_rep.m"
  MR_Word ll_backend__prog_rep__PredId_5,
#line 158 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__BytesCord_6);

#line 473 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9(
#line 473 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 473 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 473 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2);

#line 456 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8(
#line 456 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 456 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 456 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2);

#line 448 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7(
#line 448 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg);

#line 519 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6(
#line 519 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 519 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 523 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5(
#line 523 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 523 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 519 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4(
#line 519 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 519 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 592 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3(
#line 592 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 592 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 592 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2(
#line 592 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 592 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 503 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1(
#line 503 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 503 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 969 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1(
#line 969 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 969 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 136 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1(
#line 136 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 136 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 136 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2);


static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_1[8][2];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_2[10][3];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_3[6][6];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_4[3][8];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_5[5][5];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_6[5][7];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_7[1][11];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_8[1][15];


#line 637 "prog_rep.m"
/* sealed */ struct ll_backend__prog_rep__vector_common_type_9_0_s {
#line 637 "prog_rep.m"
  const MR_Word ll_backend__prog_rep__vector_common_type_9_0__vct_9_f_0;
#line 637 "prog_rep.m"
};

static /* final */ const struct ll_backend__prog_rep__vector_common_type_9_0_s ll_backend__prog_rep_vector_common_9[8];

#line 406 "prog_rep.m"
/* sealed */ struct ll_backend__prog_rep__vector_common_type_10_0_s {
#line 406 "prog_rep.m"
  const MR_String ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
#line 406 "prog_rep.m"
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0))
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



#line 1548 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1556 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1564 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1572 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1580 "ll_backend.prog_rep.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1590 "ll_backend.prog_rep.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0,
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1600 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1608 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1616 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 1624 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 1632 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1641 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1650 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0 = {
  (MR_String) "flatten_par_conjs",
  (MR_Integer) 0
};

#line 1656 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1 = {
  (MR_String) "expect_no_par_conjs",
  (MR_Integer) 1
};

#line 1662 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_value_ordered_flatten_par_conjs_0[2] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0,
  &ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1
};

#line 1668 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_name_ordered_flatten_par_conjs_0[2] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1,
  &ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0
};

#line 1674 "ll_backend.prog_rep.c"
static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_flatten_par_conjs_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1680 "ll_backend.prog_rep.c"
const MR_TypeCtorInfo_Struct ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_flatten_par_conjs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1697 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1706 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1715 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__prog_rep__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0
  }
};

#line 1724 "ll_backend.prog_rep.c"
static const MR_PseudoTypeInfo ll_backend__prog_rep__ll_backend__prog_rep__field_types_prog_rep_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_num_rep_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_flatten_par_conjs_0
};

#line 1734 "ll_backend.prog_rep.c"
static const MR_ConstString ll_backend__prog_rep__ll_backend__prog_rep__field_names_prog_rep_info_0_0[6] = {
  (MR_String) "pri_filename",
  (MR_String) "pri_vartypes",
  (MR_String) "pri_var_num_map",
  (MR_String) "pri_var_num_rep",
  (MR_String) "pri_module_info",
  (MR_String) "pri_flatten_par_conjs"
};

#line 1744 "ll_backend.prog_rep.c"
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
  NULL
};

#line 1759 "ll_backend.prog_rep.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0[1] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0
};

#line 1764 "ll_backend.prog_rep.c"
static const MR_DuPtagLayout ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0
  }
};

#line 1773 "ll_backend.prog_rep.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_name_ordered_prog_rep_info_0[1] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0
};

#line 1778 "ll_backend.prog_rep.c"
static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_prog_rep_info_0[1] = {
  (MR_Integer) 0
};

#line 1783 "ll_backend.prog_rep.c"
const MR_TypeCtorInfo_Struct ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1800 "ll_backend.prog_rep.c"
const MR_TypeCtorInfo_Struct ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_var_num_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1817 "ll_backend.prog_rep.c"
static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001(
#line 1820 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 1822 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2)
#line 1824 "ll_backend.prog_rep.c"
{
#line 1826 "ll_backend.prog_rep.c"
  {
#line 1828 "ll_backend.prog_rep.c"
    MR_bool ll_backend__prog_rep__succeeded;

#line 1831 "ll_backend.prog_rep.c"
    {
#line 1833 "ll_backend.prog_rep.c"
      ll_backend__prog_rep__succeeded = ll_backend__prog_rep____Unify____flatten_par_conjs_0_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2));
    }
#line 1836 "ll_backend.prog_rep.c"
    return ll_backend__prog_rep__succeeded;
#line 1838 "ll_backend.prog_rep.c"
  }
#line 1840 "ll_backend.prog_rep.c"
}

#line 1843 "ll_backend.prog_rep.c"
static void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001(
#line 1846 "ll_backend.prog_rep.c"
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
#line 1848 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 1850 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_3)
#line 1852 "ll_backend.prog_rep.c"
{
#line 1854 "ll_backend.prog_rep.c"
  {
#line 1856 "ll_backend.prog_rep.c"
    MR_Word ll_backend__prog_rep__conv0_HeadVar__1_1;

#line 1859 "ll_backend.prog_rep.c"
    {
#line 1861 "ll_backend.prog_rep.c"
      ll_backend__prog_rep____Compare____flatten_par_conjs_0_0(&ll_backend__prog_rep__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep__wrapper_arg_3));
    }
#line 1864 "ll_backend.prog_rep.c"
    *ll_backend__prog_rep__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep__conv0_HeadVar__1_1));
#line 1866 "ll_backend.prog_rep.c"
  }
#line 1868 "ll_backend.prog_rep.c"
}

#line 1871 "ll_backend.prog_rep.c"
static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001(
#line 1874 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 1876 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2)
#line 1878 "ll_backend.prog_rep.c"
{
#line 1880 "ll_backend.prog_rep.c"
  {
#line 1882 "ll_backend.prog_rep.c"
    MR_bool ll_backend__prog_rep__succeeded;

#line 1885 "ll_backend.prog_rep.c"
    {
#line 1887 "ll_backend.prog_rep.c"
      ll_backend__prog_rep__succeeded = ll_backend__prog_rep____Unify____prog_rep_info_0_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2));
    }
#line 1890 "ll_backend.prog_rep.c"
    return ll_backend__prog_rep__succeeded;
#line 1892 "ll_backend.prog_rep.c"
  }
#line 1894 "ll_backend.prog_rep.c"
}

#line 1897 "ll_backend.prog_rep.c"
static void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001(
#line 1900 "ll_backend.prog_rep.c"
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
#line 1902 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 1904 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_3)
#line 1906 "ll_backend.prog_rep.c"
{
#line 1908 "ll_backend.prog_rep.c"
  {
#line 1910 "ll_backend.prog_rep.c"
    MR_Word ll_backend__prog_rep__conv0_HeadVar__1_1;

#line 1913 "ll_backend.prog_rep.c"
    {
#line 1915 "ll_backend.prog_rep.c"
      ll_backend__prog_rep____Compare____prog_rep_info_0_0(&ll_backend__prog_rep__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep__wrapper_arg_3));
    }
#line 1918 "ll_backend.prog_rep.c"
    *ll_backend__prog_rep__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep__conv0_HeadVar__1_1));
#line 1920 "ll_backend.prog_rep.c"
  }
#line 1922 "ll_backend.prog_rep.c"
}

#line 1925 "ll_backend.prog_rep.c"
static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0_10001(
#line 1928 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 1930 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2)
#line 1932 "ll_backend.prog_rep.c"
{
#line 1934 "ll_backend.prog_rep.c"
  {
#line 1936 "ll_backend.prog_rep.c"
    MR_bool ll_backend__prog_rep__succeeded;

#line 1939 "ll_backend.prog_rep.c"
    {
#line 1941 "ll_backend.prog_rep.c"
      ll_backend__prog_rep__succeeded = ll_backend__prog_rep____Unify____var_num_map_0_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2));
    }
#line 1944 "ll_backend.prog_rep.c"
    return ll_backend__prog_rep__succeeded;
#line 1946 "ll_backend.prog_rep.c"
  }
#line 1948 "ll_backend.prog_rep.c"
}

#line 1951 "ll_backend.prog_rep.c"
static void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0_10001(
#line 1954 "ll_backend.prog_rep.c"
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
#line 1956 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 1958 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_3)
#line 1960 "ll_backend.prog_rep.c"
{
#line 1962 "ll_backend.prog_rep.c"
  {
#line 1964 "ll_backend.prog_rep.c"
    MR_Word ll_backend__prog_rep__conv0_HeadVar__1_1;

#line 1967 "ll_backend.prog_rep.c"
    {
#line 1969 "ll_backend.prog_rep.c"
      ll_backend__prog_rep____Compare____var_num_map_0_0(&ll_backend__prog_rep__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep__wrapper_arg_3));
    }
#line 1972 "ll_backend.prog_rep.c"
    *ll_backend__prog_rep__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep__conv0_HeadVar__1_1));
#line 1974 "ll_backend.prog_rep.c"
  }
#line 1976 "ll_backend.prog_rep.c"
}

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 413 "prog_rep.m"
{
#line 413 "prog_rep.m"
  {
#line 413 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 413 "prog_rep.m"
    MR_builtin_longjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4, 1);
#line 413 "prog_rep.m"
  }
#line 413 "prog_rep.m"
}

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 413 "prog_rep.m"
{
#line 413 "prog_rep.m"
  {
#line 413 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 422 "prog_rep.m"
    {
#line 422 "prog_rep.m"
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30);
    }
#line 422 "prog_rep.m"
    if ((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 422 "prog_rep.m"
      {
#line 422 "prog_rep.m"
        ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(ll_backend__prog_rep__env_ptr);
#line 422 "prog_rep.m"
        return;
      }
#line 413 "prog_rep.m"
  }
#line 413 "prog_rep.m"
}

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 413 "prog_rep.m"
{
#line 413 "prog_rep.m"
  {
#line 413 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 413 "prog_rep.m"
    if (MR_builtin_setjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4) == 0)
#line 413 "prog_rep.m"
      {
#line 415 "prog_rep.m"
        {
#line 415 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__slot_5 = (MR_Integer) 0;

#line 415 "prog_rep.m"
          do
#line 415 "prog_rep.m"
            {
#line 415 "prog_rep.m"
              (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30 = ((&ll_backend__prog_rep_vector_common_10[35 + ll_backend__prog_rep__slot_5]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
#line 415 "prog_rep.m"
              {
#line 415 "prog_rep.m"
                ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(ll_backend__prog_rep__env_ptr);
              }
#line 415 "prog_rep.m"
              ll_backend__prog_rep__slot_5 = (ll_backend__prog_rep__slot_5 + (MR_Integer) 1);
#line 415 "prog_rep.m"
            }
#line 415 "prog_rep.m"
          while ((ll_backend__prog_rep__slot_5 < (MR_Integer) 7));
#line 415 "prog_rep.m"
        }
#line 413 "prog_rep.m"
        (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 413 "prog_rep.m"
      }
#line 413 "prog_rep.m"
    else
#line 413 "prog_rep.m"
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 413 "prog_rep.m"
  }
#line 413 "prog_rep.m"
}

#line 362 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 362 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 362 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 362 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 362 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
#line 362 "prog_rep.m"
{
#line 362 "prog_rep.m"
  {
#line 362 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s ll_backend__prog_rep__env;

#line 367 "prog_rep.m"
    {
#line 367 "prog_rep.m"
      MR_Integer ll_backend__prog_rep__VarNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));

#line 366 "prog_rep.m"
      (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 406 "prog_rep.m"
      {
#line 406 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__lo_0;
#line 406 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__hi_1;
#line 406 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__mid_2;
#line 406 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__result_3;

#line 406 "prog_rep.m"
        /* binary string simple lookup switch */
#line 406 "prog_rep.m"
        ll_backend__prog_rep__lo_0 = (MR_Integer) 0;
#line 406 "prog_rep.m"
        ll_backend__prog_rep__hi_1 = (MR_Integer) 6;
#line 406 "prog_rep.m"
        do
#line 406 "prog_rep.m"
          {
#line 406 "prog_rep.m"
            ll_backend__prog_rep__mid_2 = (((ll_backend__prog_rep__lo_0 + ll_backend__prog_rep__hi_1)) / (MR_Integer) 2);
#line 406 "prog_rep.m"
            ll_backend__prog_rep__result_3 = MR_strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, ((&ll_backend__prog_rep_vector_common_10[28 + ll_backend__prog_rep__mid_2]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0);
#line 406 "prog_rep.m"
            if ((ll_backend__prog_rep__result_3 == (MR_Integer) 0))
#line 406 "prog_rep.m"
              {
#line 406 "prog_rep.m"
                (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 406 "prog_rep.m"
                /* jump out of search loop */
#line 406 "prog_rep.m"
                goto label_0;
#line 406 "prog_rep.m"
              }
#line 406 "prog_rep.m"
            else
#line 406 "prog_rep.m"
            if ((ll_backend__prog_rep__result_3 < (MR_Integer) 0))
#line 406 "prog_rep.m"
              ll_backend__prog_rep__hi_1 = (ll_backend__prog_rep__mid_2 - (MR_Integer) 1);
#line 406 "prog_rep.m"
            else
#line 406 "prog_rep.m"
              ll_backend__prog_rep__lo_0 = (ll_backend__prog_rep__mid_2 + (MR_Integer) 1);
#line 406 "prog_rep.m"
          }
#line 406 "prog_rep.m"
        while ((ll_backend__prog_rep__lo_0 <= ll_backend__prog_rep__hi_1));
#line 406 "prog_rep.m"
        (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 406 "prog_rep.m"
      label_0:;
#line 406 "prog_rep.m"
      }
#line 406 "prog_rep.m"
      if (!((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
#line 413 "prog_rep.m"
        {
#line 413 "prog_rep.m"
          {
#line 413 "prog_rep.m"
            ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(&ll_backend__prog_rep__env);
          }
#line 413 "prog_rep.m"
        }
#line 370 "prog_rep.m"
      if ((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 369 "prog_rep.m"
        {
#line 369 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_22 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21;
#line 369 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19;
#line 369 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17;
#line 369 "prog_rep.m"
        }
#line 370 "prog_rep.m"
      else
#line 371 "prog_rep.m"
        {
#line 371 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeCtorInfo_28_28;
#line 371 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarBytes_15;
#line 371 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarNameBytes_16;
#line 371 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_27_27;
#line 371 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__Index_36;

#line 371 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = (ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17 + (MR_Integer) 1);
#line 372 "prog_rep.m"
          {
#line 372 "prog_rep.m"
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__VarNum_10, &ll_backend__prog_rep__VarBytes_15);
          }
#line 906 "prog_rep.m"
          {
#line 906 "prog_rep.m"
            ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &ll_backend__prog_rep__Index_36, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
          }
#line 907 "prog_rep.m"
          {
#line 907 "prog_rep.m"
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_36, &ll_backend__prog_rep__VarNameBytes_16);
          }
#line 2225 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 374 "prog_rep.m"
          {
#line 374 "prog_rep.m"
            ll_backend__prog_rep__V_27_27 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_28_28, ll_backend__prog_rep__VarNameBytes_16, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19);
          }
#line 374 "prog_rep.m"
          {
#line 374 "prog_rep.m"
            *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_28_28, ll_backend__prog_rep__VarBytes_15, ll_backend__prog_rep__V_27_27);
          }
#line 371 "prog_rep.m"
        }
#line 367 "prog_rep.m"
    }
#line 362 "prog_rep.m"
  }
#line 362 "prog_rep.m"
}

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 413 "prog_rep.m"
{
#line 413 "prog_rep.m"
  {
#line 413 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 413 "prog_rep.m"
    MR_builtin_longjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4, 1);
#line 413 "prog_rep.m"
  }
#line 413 "prog_rep.m"
}

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 413 "prog_rep.m"
{
#line 413 "prog_rep.m"
  {
#line 413 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 422 "prog_rep.m"
    {
#line 422 "prog_rep.m"
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30);
    }
#line 422 "prog_rep.m"
    if ((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 422 "prog_rep.m"
      {
#line 422 "prog_rep.m"
        ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(ll_backend__prog_rep__env_ptr);
#line 422 "prog_rep.m"
        return;
      }
#line 413 "prog_rep.m"
  }
#line 413 "prog_rep.m"
}

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 413 "prog_rep.m"
{
#line 413 "prog_rep.m"
  {
#line 413 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 413 "prog_rep.m"
    if (MR_builtin_setjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4) == 0)
#line 413 "prog_rep.m"
      {
#line 415 "prog_rep.m"
        {
#line 415 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__slot_5 = (MR_Integer) 0;

#line 415 "prog_rep.m"
          do
#line 415 "prog_rep.m"
            {
#line 415 "prog_rep.m"
              (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30 = ((&ll_backend__prog_rep_vector_common_10[21 + ll_backend__prog_rep__slot_5]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
#line 415 "prog_rep.m"
              {
#line 415 "prog_rep.m"
                ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(ll_backend__prog_rep__env_ptr);
              }
#line 415 "prog_rep.m"
              ll_backend__prog_rep__slot_5 = (ll_backend__prog_rep__slot_5 + (MR_Integer) 1);
#line 415 "prog_rep.m"
            }
#line 415 "prog_rep.m"
          while ((ll_backend__prog_rep__slot_5 < (MR_Integer) 7));
#line 415 "prog_rep.m"
        }
#line 413 "prog_rep.m"
        (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 413 "prog_rep.m"
      }
#line 413 "prog_rep.m"
    else
#line 413 "prog_rep.m"
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 413 "prog_rep.m"
  }
#line 413 "prog_rep.m"
}

#line 347 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 347 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 347 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 347 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 347 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
#line 347 "prog_rep.m"
{
#line 347 "prog_rep.m"
  {
#line 347 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s ll_backend__prog_rep__env;

#line 352 "prog_rep.m"
    {
#line 352 "prog_rep.m"
      MR_Integer ll_backend__prog_rep__VarNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));

#line 351 "prog_rep.m"
      (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 406 "prog_rep.m"
      {
#line 406 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__lo_0;
#line 406 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__hi_1;
#line 406 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__mid_2;
#line 406 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__result_3;

#line 406 "prog_rep.m"
        /* binary string simple lookup switch */
#line 406 "prog_rep.m"
        ll_backend__prog_rep__lo_0 = (MR_Integer) 0;
#line 406 "prog_rep.m"
        ll_backend__prog_rep__hi_1 = (MR_Integer) 6;
#line 406 "prog_rep.m"
        do
#line 406 "prog_rep.m"
          {
#line 406 "prog_rep.m"
            ll_backend__prog_rep__mid_2 = (((ll_backend__prog_rep__lo_0 + ll_backend__prog_rep__hi_1)) / (MR_Integer) 2);
#line 406 "prog_rep.m"
            ll_backend__prog_rep__result_3 = MR_strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, ((&ll_backend__prog_rep_vector_common_10[14 + ll_backend__prog_rep__mid_2]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0);
#line 406 "prog_rep.m"
            if ((ll_backend__prog_rep__result_3 == (MR_Integer) 0))
#line 406 "prog_rep.m"
              {
#line 406 "prog_rep.m"
                (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 406 "prog_rep.m"
                /* jump out of search loop */
#line 406 "prog_rep.m"
                goto label_0;
#line 406 "prog_rep.m"
              }
#line 406 "prog_rep.m"
            else
#line 406 "prog_rep.m"
            if ((ll_backend__prog_rep__result_3 < (MR_Integer) 0))
#line 406 "prog_rep.m"
              ll_backend__prog_rep__hi_1 = (ll_backend__prog_rep__mid_2 - (MR_Integer) 1);
#line 406 "prog_rep.m"
            else
#line 406 "prog_rep.m"
              ll_backend__prog_rep__lo_0 = (ll_backend__prog_rep__mid_2 + (MR_Integer) 1);
#line 406 "prog_rep.m"
          }
#line 406 "prog_rep.m"
        while ((ll_backend__prog_rep__lo_0 <= ll_backend__prog_rep__hi_1));
#line 406 "prog_rep.m"
        (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 406 "prog_rep.m"
      label_0:;
#line 406 "prog_rep.m"
      }
#line 406 "prog_rep.m"
      if (!((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
#line 413 "prog_rep.m"
        {
#line 413 "prog_rep.m"
          {
#line 413 "prog_rep.m"
            ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(&ll_backend__prog_rep__env);
          }
#line 413 "prog_rep.m"
        }
#line 355 "prog_rep.m"
      if ((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 354 "prog_rep.m"
        {
#line 354 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_22 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21;
#line 354 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19;
#line 354 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17;
#line 354 "prog_rep.m"
        }
#line 355 "prog_rep.m"
      else
#line 356 "prog_rep.m"
        {
#line 356 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeCtorInfo_28_28;
#line 356 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarBytes_15;
#line 356 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarNameBytes_16;
#line 356 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_27_27;
#line 356 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__Index_36;

#line 356 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = (ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17 + (MR_Integer) 1);
#line 357 "prog_rep.m"
          {
#line 357 "prog_rep.m"
            mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__VarNum_10, &ll_backend__prog_rep__VarBytes_15);
          }
#line 906 "prog_rep.m"
          {
#line 906 "prog_rep.m"
            ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &ll_backend__prog_rep__Index_36, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
          }
#line 907 "prog_rep.m"
          {
#line 907 "prog_rep.m"
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_36, &ll_backend__prog_rep__VarNameBytes_16);
          }
#line 2492 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 359 "prog_rep.m"
          {
#line 359 "prog_rep.m"
            ll_backend__prog_rep__V_27_27 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_28_28, ll_backend__prog_rep__VarNameBytes_16, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19);
          }
#line 359 "prog_rep.m"
          {
#line 359 "prog_rep.m"
            *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_28_28, ll_backend__prog_rep__VarBytes_15, ll_backend__prog_rep__V_27_27);
          }
#line 356 "prog_rep.m"
        }
#line 352 "prog_rep.m"
    }
#line 347 "prog_rep.m"
  }
#line 347 "prog_rep.m"
}

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 413 "prog_rep.m"
{
#line 413 "prog_rep.m"
  {
#line 413 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 413 "prog_rep.m"
    MR_builtin_longjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4, 1);
#line 413 "prog_rep.m"
  }
#line 413 "prog_rep.m"
}

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 413 "prog_rep.m"
{
#line 413 "prog_rep.m"
  {
#line 413 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 422 "prog_rep.m"
    {
#line 422 "prog_rep.m"
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_31);
    }
#line 422 "prog_rep.m"
    if ((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 422 "prog_rep.m"
      {
#line 422 "prog_rep.m"
        ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(ll_backend__prog_rep__env_ptr);
#line 422 "prog_rep.m"
        return;
      }
#line 413 "prog_rep.m"
  }
#line 413 "prog_rep.m"
}

#line 413 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
#line 413 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 413 "prog_rep.m"
{
#line 413 "prog_rep.m"
  {
#line 413 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 413 "prog_rep.m"
    if (MR_builtin_setjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_4) == 0)
#line 413 "prog_rep.m"
      {
#line 415 "prog_rep.m"
        {
#line 415 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__slot_5 = (MR_Integer) 0;

#line 415 "prog_rep.m"
          do
#line 415 "prog_rep.m"
            {
#line 415 "prog_rep.m"
              (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_31 = ((&ll_backend__prog_rep_vector_common_10[7 + ll_backend__prog_rep__slot_5]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0;
#line 415 "prog_rep.m"
              {
#line 415 "prog_rep.m"
                ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(ll_backend__prog_rep__env_ptr);
              }
#line 415 "prog_rep.m"
              ll_backend__prog_rep__slot_5 = (ll_backend__prog_rep__slot_5 + (MR_Integer) 1);
#line 415 "prog_rep.m"
            }
#line 415 "prog_rep.m"
          while ((ll_backend__prog_rep__slot_5 < (MR_Integer) 7));
#line 415 "prog_rep.m"
        }
#line 413 "prog_rep.m"
        (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 413 "prog_rep.m"
      }
#line 413 "prog_rep.m"
    else
#line 413 "prog_rep.m"
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 413 "prog_rep.m"
  }
#line 413 "prog_rep.m"
}

#line 332 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 332 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 332 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 332 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 332 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
#line 332 "prog_rep.m"
{
#line 332 "prog_rep.m"
  {
#line 332 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s ll_backend__prog_rep__env;

#line 337 "prog_rep.m"
    {
#line 337 "prog_rep.m"
      MR_Integer ll_backend__prog_rep__VarNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));

#line 336 "prog_rep.m"
      (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 406 "prog_rep.m"
      {
#line 406 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__lo_0;
#line 406 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__hi_1;
#line 406 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__mid_2;
#line 406 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__result_3;

#line 406 "prog_rep.m"
        /* binary string simple lookup switch */
#line 406 "prog_rep.m"
        ll_backend__prog_rep__lo_0 = (MR_Integer) 0;
#line 406 "prog_rep.m"
        ll_backend__prog_rep__hi_1 = (MR_Integer) 6;
#line 406 "prog_rep.m"
        do
#line 406 "prog_rep.m"
          {
#line 406 "prog_rep.m"
            ll_backend__prog_rep__mid_2 = (((ll_backend__prog_rep__lo_0 + ll_backend__prog_rep__hi_1)) / (MR_Integer) 2);
#line 406 "prog_rep.m"
            ll_backend__prog_rep__result_3 = MR_strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, ((&ll_backend__prog_rep_vector_common_10[0 + ll_backend__prog_rep__mid_2]))->ll_backend__prog_rep__vector_common_type_10_0__vct_10_f_0);
#line 406 "prog_rep.m"
            if ((ll_backend__prog_rep__result_3 == (MR_Integer) 0))
#line 406 "prog_rep.m"
              {
#line 406 "prog_rep.m"
                (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 406 "prog_rep.m"
                /* jump out of search loop */
#line 406 "prog_rep.m"
                goto label_0;
#line 406 "prog_rep.m"
              }
#line 406 "prog_rep.m"
            else
#line 406 "prog_rep.m"
            if ((ll_backend__prog_rep__result_3 < (MR_Integer) 0))
#line 406 "prog_rep.m"
              ll_backend__prog_rep__hi_1 = (ll_backend__prog_rep__mid_2 - (MR_Integer) 1);
#line 406 "prog_rep.m"
            else
#line 406 "prog_rep.m"
              ll_backend__prog_rep__lo_0 = (ll_backend__prog_rep__mid_2 + (MR_Integer) 1);
#line 406 "prog_rep.m"
          }
#line 406 "prog_rep.m"
        while ((ll_backend__prog_rep__lo_0 <= ll_backend__prog_rep__hi_1));
#line 406 "prog_rep.m"
        (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 406 "prog_rep.m"
      label_0:;
#line 406 "prog_rep.m"
      }
#line 406 "prog_rep.m"
      if (!((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
#line 413 "prog_rep.m"
        {
#line 413 "prog_rep.m"
          {
#line 413 "prog_rep.m"
            ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(&ll_backend__prog_rep__env);
          }
#line 413 "prog_rep.m"
        }
#line 340 "prog_rep.m"
      if ((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 339 "prog_rep.m"
        {
#line 339 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_22 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21;
#line 339 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19;
#line 339 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17;
#line 339 "prog_rep.m"
        }
#line 340 "prog_rep.m"
      else
#line 341 "prog_rep.m"
        {
#line 341 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeCtorInfo_29_29;
#line 341 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarBytes_15;
#line 341 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarNameBytes_16;
#line 341 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_28_28;
#line 341 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__Index_37;

#line 341 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = (ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17 + (MR_Integer) 1);
#line 342 "prog_rep.m"
          {
#line 342 "prog_rep.m"
            ll_backend__prog_rep__VarBytes_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_15, 0) = ((MR_Box) (ll_backend__prog_rep__VarNum_10));
#line 342 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "prog_rep.m"
          }
#line 906 "prog_rep.m"
          {
#line 906 "prog_rep.m"
            ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &ll_backend__prog_rep__Index_37, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
          }
#line 907 "prog_rep.m"
          {
#line 907 "prog_rep.m"
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_37, &ll_backend__prog_rep__VarNameBytes_16);
          }
#line 2764 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 344 "prog_rep.m"
          {
#line 344 "prog_rep.m"
            ll_backend__prog_rep__V_28_28 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_29_29, ll_backend__prog_rep__VarNameBytes_16, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19);
          }
#line 344 "prog_rep.m"
          {
#line 344 "prog_rep.m"
            *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_29_29, ll_backend__prog_rep__VarBytes_15, ll_backend__prog_rep__V_28_28);
          }
#line 341 "prog_rep.m"
        }
#line 337 "prog_rep.m"
    }
#line 332 "prog_rep.m"
  }
#line 332 "prog_rep.m"
}

#line 317 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(
#line 317 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 317 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum2_8)
#line 317 "prog_rep.m"
{
#line 319 "prog_rep.m"
  {
#line 319 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 319 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Max_9;
#line 319 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__VarNum1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
#line 319 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));

#line 320 "prog_rep.m"
    {
#line 320 "prog_rep.m"
      return ll_backend__prog_rep__Max_9 = mercury__int__max_2_f_0(ll_backend__prog_rep__VarNum1_6, ll_backend__prog_rep__VarNum2_8);
    }
#line 319 "prog_rep.m"
    return ll_backend__prog_rep__Max_9;
#line 319 "prog_rep.m"
  }
#line 317 "prog_rep.m"
}

#line 312 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__312__1_2_p_0(
#line 312 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarTypes_12,
#line 312 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_36)
#line 312 "prog_rep.m"
{
#line 312 "prog_rep.m"
  {
#line 312 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__IncludeVarTypes_12 == ll_backend__prog_rep__HeadVar__2_36);

#line 312 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 312 "prog_rep.m"
  }
#line 312 "prog_rep.m"
}

#line 448 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__448__1_2_p_0(
#line 448 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ConjType_13,
#line 448 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_177)
#line 448 "prog_rep.m"
{
#line 448 "prog_rep.m"
  {
#line 448 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__ConjType_13 == ll_backend__prog_rep__HeadVar__2_177);

#line 448 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 448 "prog_rep.m"
  }
#line 448 "prog_rep.m"
}

#line 519 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__519__2_2_f_0(
#line 519 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_271,
#line 519 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_256)
#line 519 "prog_rep.m"
{
#line 519 "prog_rep.m"
  {
#line 519 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 519 "prog_rep.m"
    MR_Word ll_backend__prog_rep__HeadVar__3_257;

#line 519 "prog_rep.m"
    {
#line 519 "prog_rep.m"
      ll_backend__prog_rep__HeadVar__3_257 = mercury__maybe__map_maybe_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__HeadVar__1_271, ll_backend__prog_rep__HeadVar__2_256);
    }
#line 519 "prog_rep.m"
    return ll_backend__prog_rep__HeadVar__3_257;
#line 519 "prog_rep.m"
  }
#line 519 "prog_rep.m"
}

#line 519 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__519__1_2_f_0(
#line 519 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_167,
#line 519 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_230)
#line 519 "prog_rep.m"
{
#line 519 "prog_rep.m"
  {
#line 519 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 519 "prog_rep.m"
    MR_Word ll_backend__prog_rep__HeadVar__3_231;

#line 519 "prog_rep.m"
    {
#line 519 "prog_rep.m"
      ll_backend__prog_rep__HeadVar__3_231 = mercury__maybe__map_maybe_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__HeadVar__1_167, ll_backend__prog_rep__HeadVar__2_230);
    }
#line 519 "prog_rep.m"
    return ll_backend__prog_rep__HeadVar__3_231;
#line 519 "prog_rep.m"
  }
#line 519 "prog_rep.m"
}

#line 592 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__592__1_3_f_0(
#line 592 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_147,
#line 592 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_148,
#line 592 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_243)
#line 592 "prog_rep.m"
{
#line 592 "prog_rep.m"
  {
#line 592 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 592 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__HeadVar__4_244;
#line 592 "prog_rep.m"
    MR_Box ll_backend__prog_rep__conv0_HeadVar__4_244;

#line 592 "prog_rep.m"
    {
#line 592 "prog_rep.m"
      ll_backend__prog_rep__conv0_HeadVar__4_244 = mercury__std_util__compose_3_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ll_backend__prog_rep__HeadVar__1_147, ll_backend__prog_rep__HeadVar__2_148, ((MR_Box) (ll_backend__prog_rep__HeadVar__3_243)));
    }
#line 592 "prog_rep.m"
    ll_backend__prog_rep__HeadVar__4_244 = ((MR_Integer) ll_backend__prog_rep__conv0_HeadVar__4_244);
#line 592 "prog_rep.m"
    return ll_backend__prog_rep__HeadVar__4_244;
#line 592 "prog_rep.m"
  }
#line 592 "prog_rep.m"
}

#line 49 "prog_rep.m"
void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0(
#line 49 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__1_1,
#line 49 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 49 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3)
#line 49 "prog_rep.m"
{
#line 49 "prog_rep.m"
  {
#line 49 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 49 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Cast_HeadVar1_4 = ll_backend__prog_rep__HeadVar__2_2;
#line 49 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Cast_HeadVar2_5 = ll_backend__prog_rep__HeadVar__3_3;

#line 49 "prog_rep.m"
    {
#line 49 "prog_rep.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_2[2], ll_backend__prog_rep__HeadVar__1_1, ((MR_Box) (ll_backend__prog_rep__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__prog_rep__Cast_HeadVar2_5)));
#line 49 "prog_rep.m"
      return;
    }
#line 49 "prog_rep.m"
  }
#line 49 "prog_rep.m"
}

#line 49 "prog_rep.m"
MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0(
#line 49 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
#line 49 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2)
#line 49 "prog_rep.m"
{
#line 49 "prog_rep.m"
  {
#line 49 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 49 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Cast_HeadVar1_3 = ll_backend__prog_rep__HeadVar__1_1;
#line 49 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Cast_HeadVar2_4 = ll_backend__prog_rep__HeadVar__2_2;

#line 49 "prog_rep.m"
    {
#line 49 "prog_rep.m"
      return ll_backend__prog_rep__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_2[2], ((MR_Box) (ll_backend__prog_rep__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__prog_rep__Cast_HeadVar2_4)));
    }
#line 49 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 49 "prog_rep.m"
  }
#line 49 "prog_rep.m"
}

#line 67 "prog_rep.m"
void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0(
#line 67 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__1_1,
#line 67 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 67 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3)
#line 67 "prog_rep.m"
{
#line 67 "prog_rep.m"
  {
#line 67 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 67 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__CastX_21 = (MR_Integer) ll_backend__prog_rep__HeadVar__2_2;
#line 67 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__CastY_22 = (MR_Integer) ll_backend__prog_rep__HeadVar__3_3;

#line 67 "prog_rep.m"
    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__CastX_21 == ll_backend__prog_rep__CastY_22);
#line 67 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 3035 "ll_backend.prog_rep.c"
      *ll_backend__prog_rep__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "prog_rep.m"
    else
#line 67 "prog_rep.m"
      {
#line 67 "prog_rep.m"
        MR_String ll_backend__prog_rep__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 2)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 3)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 4)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 5)));
#line 67 "prog_rep.m"
        MR_String ll_backend__prog_rep__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 2)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 3)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 4)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 5)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_16_16;

#line 67 "prog_rep.m"
        {
#line 67 "prog_rep.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__prog_rep__V_16_16, ll_backend__prog_rep__V_4_4, ll_backend__prog_rep__V_10_10);
        }
#line 3073 "ll_backend.prog_rep.c"
        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_16_16 == (MR_Integer) 0);
#line 67 "prog_rep.m"
        ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
#line 67 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 67 "prog_rep.m"
          *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_16_16;
#line 67 "prog_rep.m"
        else
#line 67 "prog_rep.m"
          {
#line 67 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_17_17;

#line 67 "prog_rep.m"
            {
#line 67 "prog_rep.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_2[1], &ll_backend__prog_rep__V_17_17, ((MR_Box) (ll_backend__prog_rep__V_5_5)), ((MR_Box) (ll_backend__prog_rep__V_11_11)));
            }
#line 3093 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_17_17 == (MR_Integer) 0);
#line 67 "prog_rep.m"
            ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
#line 67 "prog_rep.m"
            if (ll_backend__prog_rep__succeeded)
#line 67 "prog_rep.m"
              *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_17_17;
#line 67 "prog_rep.m"
            else
#line 67 "prog_rep.m"
              {
#line 67 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_18_18;

#line 67 "prog_rep.m"
                {
#line 67 "prog_rep.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_2[2], &ll_backend__prog_rep__V_18_18, ((MR_Box) (ll_backend__prog_rep__V_6_6)), ((MR_Box) (ll_backend__prog_rep__V_12_12)));
                }
#line 3113 "ll_backend.prog_rep.c"
                ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_18_18 == (MR_Integer) 0);
#line 67 "prog_rep.m"
                ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
#line 67 "prog_rep.m"
                if (ll_backend__prog_rep__succeeded)
#line 67 "prog_rep.m"
                  *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_18_18;
#line 67 "prog_rep.m"
                else
#line 67 "prog_rep.m"
                  {
#line 67 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_19_19;
#line 67 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__V_29_29 = (MR_Integer) ll_backend__prog_rep__V_7_7;
#line 67 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__V_30_30 = (MR_Integer) ll_backend__prog_rep__V_13_13;

#line 67 "prog_rep.m"
                    {
#line 67 "prog_rep.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__prog_rep__V_19_19, ll_backend__prog_rep__V_29_29, ll_backend__prog_rep__V_30_30);
                    }
#line 3137 "ll_backend.prog_rep.c"
                    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_19_19 == (MR_Integer) 0);
#line 67 "prog_rep.m"
                    ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
#line 67 "prog_rep.m"
                    if (ll_backend__prog_rep__succeeded)
#line 67 "prog_rep.m"
                      *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_19_19;
#line 67 "prog_rep.m"
                    else
#line 67 "prog_rep.m"
                      {
#line 67 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_20_20;

#line 67 "prog_rep.m"
                        {
#line 67 "prog_rep.m"
                          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__prog_rep__V_20_20, ll_backend__prog_rep__V_8_8, ll_backend__prog_rep__V_14_14);
                        }
#line 3157 "ll_backend.prog_rep.c"
                        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_20_20 == (MR_Integer) 0);
#line 67 "prog_rep.m"
                        ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
#line 67 "prog_rep.m"
                        if (ll_backend__prog_rep__succeeded)
#line 67 "prog_rep.m"
                          *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_20_20;
#line 67 "prog_rep.m"
                        else
#line 67 "prog_rep.m"
                          {
#line 67 "prog_rep.m"
                            MR_Integer ll_backend__prog_rep__V_31_31 = (MR_Integer) ll_backend__prog_rep__V_9_9;
#line 67 "prog_rep.m"
                            MR_Integer ll_backend__prog_rep__V_32_32 = (MR_Integer) ll_backend__prog_rep__V_15_15;

#line 67 "prog_rep.m"
                            {
#line 67 "prog_rep.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__prog_rep__HeadVar__1_1, ll_backend__prog_rep__V_31_31, ll_backend__prog_rep__V_32_32);
#line 67 "prog_rep.m"
                              return;
                            }
#line 67 "prog_rep.m"
                          }
#line 67 "prog_rep.m"
                      }
#line 67 "prog_rep.m"
                  }
#line 67 "prog_rep.m"
              }
#line 67 "prog_rep.m"
          }
#line 67 "prog_rep.m"
      }
#line 67 "prog_rep.m"
  }
#line 67 "prog_rep.m"
}

#line 67 "prog_rep.m"
MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0(
#line 67 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
#line 67 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2)
#line 67 "prog_rep.m"
{
#line 67 "prog_rep.m"
  {
#line 67 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 67 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__CastX_15 = (MR_Integer) ll_backend__prog_rep__HeadVar__1_1;
#line 67 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__CastY_16 = (MR_Integer) ll_backend__prog_rep__HeadVar__2_2;

#line 67 "prog_rep.m"
    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__CastX_15 == ll_backend__prog_rep__CastY_16);
#line 67 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 67 "prog_rep.m"
      ll_backend__prog_rep__succeeded = MR_TRUE;
#line 67 "prog_rep.m"
    else
#line 67 "prog_rep.m"
      {
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TypeInfo_17_17;
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TypeInfo_18_18;
#line 67 "prog_rep.m"
        MR_String ll_backend__prog_rep__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 2)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 3)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 4)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 5)));
#line 67 "prog_rep.m"
        MR_String ll_backend__prog_rep__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 2)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 3)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 4)));
#line 67 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 5)));

#line 3255 "ll_backend.prog_rep.c"
        ll_backend__prog_rep__succeeded = (strcmp(ll_backend__prog_rep__V_3_3, ll_backend__prog_rep__V_9_9) == 0);
#line 67 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 67 "prog_rep.m"
          {
#line 3261 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeInfo_17_17 = (MR_Word) &ll_backend__prog_rep_scalar_common_2[1];
#line 3263 "ll_backend.prog_rep.c"
            {
#line 3265 "ll_backend.prog_rep.c"
              ll_backend__prog_rep__succeeded = mercury__builtin__unify_2_p_0(ll_backend__prog_rep__TypeInfo_17_17, ((MR_Box) (ll_backend__prog_rep__V_4_4)), ((MR_Box) (ll_backend__prog_rep__V_10_10)));
            }
#line 67 "prog_rep.m"
            if (ll_backend__prog_rep__succeeded)
#line 67 "prog_rep.m"
              {
#line 3272 "ll_backend.prog_rep.c"
                ll_backend__prog_rep__TypeInfo_18_18 = (MR_Word) &ll_backend__prog_rep_scalar_common_2[2];
#line 3274 "ll_backend.prog_rep.c"
                {
#line 3276 "ll_backend.prog_rep.c"
                  ll_backend__prog_rep__succeeded = mercury__builtin__unify_2_p_0(ll_backend__prog_rep__TypeInfo_18_18, ((MR_Box) (ll_backend__prog_rep__V_5_5)), ((MR_Box) (ll_backend__prog_rep__V_11_11)));
                }
#line 67 "prog_rep.m"
                if (ll_backend__prog_rep__succeeded)
#line 67 "prog_rep.m"
                  {
#line 3283 "ll_backend.prog_rep.c"
                    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_6_6 == ll_backend__prog_rep__V_12_12);
#line 67 "prog_rep.m"
                    if (ll_backend__prog_rep__succeeded)
#line 67 "prog_rep.m"
                      {
#line 3289 "ll_backend.prog_rep.c"
                        {
#line 3291 "ll_backend.prog_rep.c"
                          ll_backend__prog_rep__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__prog_rep__V_7_7, ll_backend__prog_rep__V_13_13);
                        }
#line 67 "prog_rep.m"
                        if (ll_backend__prog_rep__succeeded)
#line 3296 "ll_backend.prog_rep.c"
                          ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_8_8 == ll_backend__prog_rep__V_14_14);
#line 67 "prog_rep.m"
                      }
#line 67 "prog_rep.m"
                  }
#line 67 "prog_rep.m"
              }
#line 67 "prog_rep.m"
          }
#line 67 "prog_rep.m"
      }
#line 67 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 67 "prog_rep.m"
  }
#line 67 "prog_rep.m"
}

#line 77 "prog_rep.m"
void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0(
#line 77 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__1_1,
#line 77 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 77 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3)
#line 77 "prog_rep.m"
{
#line 77 "prog_rep.m"
  {
#line 77 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 77 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Cast_HeadVar1_4 = (MR_Integer) ll_backend__prog_rep__HeadVar__2_2;
#line 77 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Cast_HeadVar2_5 = (MR_Integer) ll_backend__prog_rep__HeadVar__3_3;

#line 77 "prog_rep.m"
    {
#line 77 "prog_rep.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__prog_rep__HeadVar__1_1, ll_backend__prog_rep__Cast_HeadVar1_4, ll_backend__prog_rep__Cast_HeadVar2_5);
#line 77 "prog_rep.m"
      return;
    }
#line 77 "prog_rep.m"
  }
#line 77 "prog_rep.m"
}

#line 77 "prog_rep.m"
MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0(
#line 77 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_1,
#line 77 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2)
#line 77 "prog_rep.m"
{
#line 3356 "ll_backend.prog_rep.c"
  {
#line 3358 "ll_backend.prog_rep.c"
    MR_bool ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__HeadVar__2_1 == ll_backend__prog_rep__HeadVar__2_2);

#line 3361 "ll_backend.prog_rep.c"
    return ll_backend__prog_rep__succeeded;
#line 3363 "ll_backend.prog_rep.c"
  }
#line 77 "prog_rep.m"
}

#line 1016 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_method_num_func_1_f_0(
#line 1016 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum_3)
#line 1016 "prog_rep.m"
{
#line 1019 "prog_rep.m"
  {
#line 1019 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 1019 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Bytes_4;

#line 1019 "prog_rep.m"
    {
#line 1019 "prog_rep.m"
      mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__VarNum_3, &ll_backend__prog_rep__Bytes_4);
    }
#line 1019 "prog_rep.m"
    return ll_backend__prog_rep__Bytes_4;
#line 1019 "prog_rep.m"
  }
#line 1016 "prog_rep.m"
}

#line 1011 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_lineno_func_1_f_0(
#line 1011 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum_3)
#line 1011 "prog_rep.m"
{
#line 1014 "prog_rep.m"
  {
#line 1014 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 1014 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Bytes_4;

#line 1014 "prog_rep.m"
    {
#line 1014 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__VarNum_3, &ll_backend__prog_rep__Bytes_4);
    }
#line 1014 "prog_rep.m"
    return ll_backend__prog_rep__Bytes_4;
#line 1014 "prog_rep.m"
  }
#line 1011 "prog_rep.m"
}

#line 1006 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_length_func_1_f_0(
#line 1006 "prog_rep.m"
  MR_Word ll_backend__prog_rep__TypeInfo_for_T_6,
#line 1006 "prog_rep.m"
  MR_Word ll_backend__prog_rep__List_3)
#line 1006 "prog_rep.m"
{
#line 1008 "prog_rep.m"
  {
#line 1008 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 1008 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Bytes_4;
#line 1008 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_5_5;

#line 1009 "prog_rep.m"
    {
#line 1009 "prog_rep.m"
      ll_backend__prog_rep__V_5_5 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeInfo_for_T_6, ll_backend__prog_rep__List_3);
    }
#line 1009 "prog_rep.m"
    {
#line 1009 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_5_5, &ll_backend__prog_rep__Bytes_4);
    }
#line 1008 "prog_rep.m"
    return ll_backend__prog_rep__Bytes_4;
#line 1008 "prog_rep.m"
  }
#line 1006 "prog_rep.m"
}

#line 971 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_head_var_func_4_f_0(
#line 971 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_6,
#line 971 "prog_rep.m"
  MR_Word ll_backend__prog_rep__InitialInstmap_7,
#line 971 "prog_rep.m"
  MR_Word ll_backend__prog_rep__InstmapDelta_8,
#line 971 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Var_9)
#line 971 "prog_rep.m"
{
#line 974 "prog_rep.m"
  {
#line 974 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 974 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Bytes_10;
#line 974 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarBytes_11;
#line 974 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ModuleInfo_12;
#line 974 "prog_rep.m"
    MR_Word ll_backend__prog_rep__InitialInst_13;
#line 974 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FinalInst_15;
#line 974 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_16_16;
#line 974 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_17_17;
#line 974 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_18_18;
#line 974 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_19_19;
#line 974 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_20_20;
#line 974 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 2)));
#line 974 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_33_33;
#line 974 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarNumRep_44;
#line 974 "prog_rep.m"
    MR_Word ll_backend__prog_rep__InstRep_55;
#line 974 "prog_rep.m"
    MR_Word ll_backend__prog_rep__InstRep_60;
#line 926 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 0)));
#line 926 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 1)));
#line 926 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 3)));
#line 926 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 4)));
#line 926 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 5)));
#line 926 "prog_rep.m"
    MR_Box ll_backend__prog_rep__conv0_V_33_33;
#line 926 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_31_31;
#line 931 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_46_46;
#line 931 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_47_47;
#line 931 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_48_48;
#line 931 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_50_50;
#line 980 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FinalInstPrime_14;

#line 926 "prog_rep.m"
    {
#line 926 "prog_rep.m"
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &ll_backend__prog_rep_scalar_common_2[0], ll_backend__prog_rep__V_32_32, ((MR_Box) (ll_backend__prog_rep__Var_9)), &ll_backend__prog_rep__conv0_V_33_33);
    }
#line 926 "prog_rep.m"
    ll_backend__prog_rep__V_33_33 = ((MR_Word) ll_backend__prog_rep__conv0_V_33_33);
#line 926 "prog_rep.m"
    ll_backend__prog_rep__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_33_33, (MR_Integer) 0)));
#line 926 "prog_rep.m"
    ll_backend__prog_rep__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_33_33, (MR_Integer) 1)));
#line 931 "prog_rep.m"
    ll_backend__prog_rep__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 0)));
#line 931 "prog_rep.m"
    ll_backend__prog_rep__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 1)));
#line 931 "prog_rep.m"
    ll_backend__prog_rep__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 2)));
#line 931 "prog_rep.m"
    ll_backend__prog_rep__VarNumRep_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 3)));
#line 931 "prog_rep.m"
    ll_backend__prog_rep__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 4)));
#line 931 "prog_rep.m"
    ll_backend__prog_rep__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 5)));
#line 935 "prog_rep.m"
#line 935 "prog_rep.m"
    switch (ll_backend__prog_rep__VarNumRep_44) {
#line 935 "prog_rep.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 935 "prog_rep.m"
      case (MR_Integer) 0:
#line 933 "prog_rep.m"
        {
#line 934 "prog_rep.m"
          {
#line 934 "prog_rep.m"
            ll_backend__prog_rep__VarBytes_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_11, 0) = ((MR_Box) (ll_backend__prog_rep__V_16_16));
#line 934 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "prog_rep.m"
          }
#line 933 "prog_rep.m"
        }
#line 935 "prog_rep.m"
        break;
#line 935 "prog_rep.m"
      case (MR_Integer) 1:
#line 937 "prog_rep.m"
        {
#line 937 "prog_rep.m"
          mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__V_16_16, &ll_backend__prog_rep__VarBytes_11);
        }
#line 935 "prog_rep.m"
        break;
#line 935 "prog_rep.m"
      case (MR_Integer) 2:
#line 940 "prog_rep.m"
        {
#line 940 "prog_rep.m"
          mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_16_16, &ll_backend__prog_rep__VarBytes_11);
        }
#line 935 "prog_rep.m"
        break;
#line 935 "prog_rep.m"
    }
#line 977 "prog_rep.m"
    {
#line 977 "prog_rep.m"
      hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__prog_rep__InitialInstmap_7, ll_backend__prog_rep__Var_9, &ll_backend__prog_rep__InitialInst_13);
    }
#line 978 "prog_rep.m"
    {
#line 978 "prog_rep.m"
      ll_backend__prog_rep__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(ll_backend__prog_rep__InstmapDelta_8, ll_backend__prog_rep__Var_9, &ll_backend__prog_rep__FinalInstPrime_14);
    }
#line 980 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 979 "prog_rep.m"
      ll_backend__prog_rep__FinalInst_15 = ll_backend__prog_rep__FinalInstPrime_14;
#line 980 "prog_rep.m"
    else
#line 983 "prog_rep.m"
      ll_backend__prog_rep__FinalInst_15 = ll_backend__prog_rep__InitialInst_13;
#line 993 "prog_rep.m"
    if ((ll_backend__prog_rep__InitialInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 992 "prog_rep.m"
      ll_backend__prog_rep__succeeded = MR_TRUE;
#line 993 "prog_rep.m"
    else
#line 993 "prog_rep.m"
    if (((MR_tag((MR_Word) ll_backend__prog_rep__InitialInst_13)) == (MR_mktag((MR_Integer) 1))))
#line 993 "prog_rep.m"
      ll_backend__prog_rep__succeeded = MR_TRUE;
#line 993 "prog_rep.m"
    else
#line 993 "prog_rep.m"
      ll_backend__prog_rep__succeeded = MR_FALSE;
#line 997 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 996 "prog_rep.m"
      ll_backend__prog_rep__InstRep_55 = (MR_Integer) 0;
#line 997 "prog_rep.m"
    else
#line 1001 "prog_rep.m"
      {
#line 998 "prog_rep.m"
        {
#line 998 "prog_rep.m"
          ll_backend__prog_rep__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(ll_backend__prog_rep__ModuleInfo_12, ll_backend__prog_rep__InitialInst_13);
        }
#line 1001 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 1000 "prog_rep.m"
          ll_backend__prog_rep__InstRep_55 = (MR_Integer) 1;
#line 1001 "prog_rep.m"
        else
#line 1002 "prog_rep.m"
          ll_backend__prog_rep__InstRep_55 = (MR_Integer) 2;
#line 1001 "prog_rep.m"
      }
#line 1004 "prog_rep.m"
    {
#line 1004 "prog_rep.m"
      mdbcomp__program_representation__inst_representation_2_p_0(ll_backend__prog_rep__InstRep_55, &ll_backend__prog_rep__V_18_18);
    }
#line 993 "prog_rep.m"
    if ((ll_backend__prog_rep__FinalInst_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 992 "prog_rep.m"
      ll_backend__prog_rep__succeeded = MR_TRUE;
#line 993 "prog_rep.m"
    else
#line 993 "prog_rep.m"
    if (((MR_tag((MR_Word) ll_backend__prog_rep__FinalInst_15)) == (MR_mktag((MR_Integer) 1))))
#line 993 "prog_rep.m"
      ll_backend__prog_rep__succeeded = MR_TRUE;
#line 993 "prog_rep.m"
    else
#line 993 "prog_rep.m"
      ll_backend__prog_rep__succeeded = MR_FALSE;
#line 997 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 996 "prog_rep.m"
      ll_backend__prog_rep__InstRep_60 = (MR_Integer) 0;
#line 997 "prog_rep.m"
    else
#line 1001 "prog_rep.m"
      {
#line 998 "prog_rep.m"
        {
#line 998 "prog_rep.m"
          ll_backend__prog_rep__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(ll_backend__prog_rep__ModuleInfo_12, ll_backend__prog_rep__FinalInst_15);
        }
#line 1001 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 1000 "prog_rep.m"
          ll_backend__prog_rep__InstRep_60 = (MR_Integer) 1;
#line 1001 "prog_rep.m"
        else
#line 1002 "prog_rep.m"
          ll_backend__prog_rep__InstRep_60 = (MR_Integer) 2;
#line 1001 "prog_rep.m"
      }
#line 1004 "prog_rep.m"
    {
#line 1004 "prog_rep.m"
      mdbcomp__program_representation__inst_representation_2_p_0(ll_backend__prog_rep__InstRep_60, &ll_backend__prog_rep__V_20_20);
    }
#line 986 "prog_rep.m"
    {
#line 986 "prog_rep.m"
      ll_backend__prog_rep__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_19_19, 0) = ((MR_Box) (ll_backend__prog_rep__V_20_20));
#line 986 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 986 "prog_rep.m"
    }
#line 985 "prog_rep.m"
    {
#line 985 "prog_rep.m"
      ll_backend__prog_rep__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_17_17, 0) = ((MR_Box) (ll_backend__prog_rep__V_18_18));
#line 985 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_17_17, 1) = ((MR_Box) (ll_backend__prog_rep__V_19_19));
#line 985 "prog_rep.m"
    }
#line 985 "prog_rep.m"
    {
#line 985 "prog_rep.m"
      ll_backend__prog_rep__Bytes_10 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__VarBytes_11, ll_backend__prog_rep__V_17_17);
    }
#line 974 "prog_rep.m"
    return ll_backend__prog_rep__Bytes_10;
#line 974 "prog_rep.m"
  }
#line 971 "prog_rep.m"
}

#line 950 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(
#line 950 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 950 "prog_rep.m"
  MR_Word ll_backend__prog_rep__MaybeVar_5)
#line 950 "prog_rep.m"
{
#line 956 "prog_rep.m"
  {
#line 956 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 956 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Bytes_6;

#line 956 "prog_rep.m"
    if ((ll_backend__prog_rep__MaybeVar_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "prog_rep.m"
      {
#line 960 "prog_rep.m"
        ll_backend__prog_rep__Bytes_6 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__prog_rep_scalar_common_1[7]);
#line 959 "prog_rep.m"
      }
#line 956 "prog_rep.m"
    else
#line 956 "prog_rep.m"
      {
#line 956 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__MaybeVar_5, (MR_Integer) 0)));
#line 956 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_11_11;
#line 956 "prog_rep.m"
        MR_Word ll_backend__prog_rep__VarNumRep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 3)));
#line 931 "prog_rep.m"
        MR_String ll_backend__prog_rep__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 0)));
#line 931 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 1)));
#line 931 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 2)));
#line 931 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 4)));
#line 931 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 5)));

#line 935 "prog_rep.m"
#line 935 "prog_rep.m"
        switch (ll_backend__prog_rep__VarNumRep_15) {
#line 935 "prog_rep.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 935 "prog_rep.m"
          case (MR_Integer) 0:
#line 933 "prog_rep.m"
            {
#line 934 "prog_rep.m"
              {
#line 934 "prog_rep.m"
                ll_backend__prog_rep__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_11_11, 0) = ((MR_Box) (ll_backend__prog_rep__Var_7));
#line 934 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "prog_rep.m"
              }
#line 933 "prog_rep.m"
            }
#line 935 "prog_rep.m"
            break;
#line 935 "prog_rep.m"
          case (MR_Integer) 1:
#line 937 "prog_rep.m"
            {
#line 937 "prog_rep.m"
              mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__Var_7, &ll_backend__prog_rep__V_11_11);
            }
#line 935 "prog_rep.m"
            break;
#line 935 "prog_rep.m"
          case (MR_Integer) 2:
#line 940 "prog_rep.m"
            {
#line 940 "prog_rep.m"
              mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Var_7, &ll_backend__prog_rep__V_11_11);
            }
#line 935 "prog_rep.m"
            break;
#line 935 "prog_rep.m"
        }
#line 957 "prog_rep.m"
        {
#line 957 "prog_rep.m"
          ll_backend__prog_rep__Bytes_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Bytes_6, 0) = ((MR_Box) ((MR_Integer) 1));
#line 957 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Bytes_6, 1) = ((MR_Box) (ll_backend__prog_rep__V_11_11));
#line 957 "prog_rep.m"
        }
#line 956 "prog_rep.m"
      }
#line 956 "prog_rep.m"
    return ll_backend__prog_rep__Bytes_6;
#line 956 "prog_rep.m"
  }
#line 950 "prog_rep.m"
}

#line 948 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1(
#line 948 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 948 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 948 "prog_rep.m"
{
#line 948 "prog_rep.m"
  {
#line 948 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 948 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 948 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_Bytes_6;

#line 948 "prog_rep.m"
    {
#line 948 "prog_rep.m"
      ll_backend__prog_rep__conv0_Bytes_6 = ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 948 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_Bytes_6));
#line 948 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 948 "prog_rep.m"
  }
#line 948 "prog_rep.m"
}

#line 943 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(
#line 943 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 943 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Vars_5)
#line 943 "prog_rep.m"
{
#line 946 "prog_rep.m"
  {
#line 946 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 946 "prog_rep.m"
    MR_Word ll_backend__prog_rep__HeadVar__3_3;
#line 946 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 946 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeInfo_11_11 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[5];
#line 946 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_6_6;
#line 946 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_7_7;
#line 946 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_8_8;
#line 946 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_9_9;
#line 946 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_17_17;

#line 1009 "prog_rep.m"
    {
#line 1009 "prog_rep.m"
      ll_backend__prog_rep__V_17_17 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeInfo_11_11, ll_backend__prog_rep__Vars_5);
    }
#line 1009 "prog_rep.m"
    {
#line 1009 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_17_17, &ll_backend__prog_rep__V_6_6);
    }
#line 948 "prog_rep.m"
    {
#line 948 "prog_rep.m"
      ll_backend__prog_rep__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 948 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[5]));
#line 948 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 1) = ((MR_Box) (ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1));
#line 948 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 948 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 3) = ((MR_Box) (ll_backend__prog_rep__Info_4));
#line 948 "prog_rep.m"
    }
#line 948 "prog_rep.m"
    {
#line 948 "prog_rep.m"
      ll_backend__prog_rep__V_8_8 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_11_11, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], ll_backend__prog_rep__V_9_9, ll_backend__prog_rep__Vars_5);
    }
#line 948 "prog_rep.m"
    {
#line 948 "prog_rep.m"
      ll_backend__prog_rep__V_7_7 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__V_8_8);
    }
#line 947 "prog_rep.m"
    {
#line 947 "prog_rep.m"
      ll_backend__prog_rep__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__V_6_6, ll_backend__prog_rep__V_7_7);
    }
#line 946 "prog_rep.m"
    return ll_backend__prog_rep__HeadVar__3_3;
#line 946 "prog_rep.m"
  }
#line 943 "prog_rep.m"
}

#line 928 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_rep_func_2_f_0(
#line 928 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 928 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__Var_5)
#line 928 "prog_rep.m"
{
#line 930 "prog_rep.m"
  {
#line 930 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 930 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Bytes_6;
#line 930 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarNumRep_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 3)));
#line 931 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 0)));
#line 931 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 1)));
#line 931 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 2)));
#line 931 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 4)));
#line 931 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 5)));

#line 935 "prog_rep.m"
#line 935 "prog_rep.m"
    switch (ll_backend__prog_rep__VarNumRep_7) {
#line 935 "prog_rep.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 935 "prog_rep.m"
      case (MR_Integer) 0:
#line 933 "prog_rep.m"
        {
#line 934 "prog_rep.m"
          {
#line 934 "prog_rep.m"
            ll_backend__prog_rep__Bytes_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Bytes_6, 0) = ((MR_Box) (ll_backend__prog_rep__Var_5));
#line 934 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Bytes_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "prog_rep.m"
          }
#line 933 "prog_rep.m"
        }
#line 935 "prog_rep.m"
        break;
#line 935 "prog_rep.m"
      case (MR_Integer) 1:
#line 937 "prog_rep.m"
        {
#line 937 "prog_rep.m"
          mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__Var_5, &ll_backend__prog_rep__Bytes_6);
        }
#line 935 "prog_rep.m"
        break;
#line 935 "prog_rep.m"
      case (MR_Integer) 2:
#line 940 "prog_rep.m"
        {
#line 940 "prog_rep.m"
          mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Var_5, &ll_backend__prog_rep__Bytes_6);
        }
#line 935 "prog_rep.m"
        break;
#line 935 "prog_rep.m"
    }
#line 930 "prog_rep.m"
    return ll_backend__prog_rep__Bytes_6;
#line 930 "prog_rep.m"
  }
#line 928 "prog_rep.m"
}

#line 923 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__var_to_var_rep_2_f_0(
#line 923 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 923 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Var_5)
#line 923 "prog_rep.m"
{
#line 925 "prog_rep.m"
  {
#line 925 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 925 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Num_6;
#line 925 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 2)));
#line 925 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_9_9;
#line 926 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 0)));
#line 926 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 1)));
#line 926 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 3)));
#line 926 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 4)));
#line 926 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 5)));
#line 926 "prog_rep.m"
    MR_Box ll_backend__prog_rep__conv0_V_9_9;
#line 926 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_7_7;

#line 926 "prog_rep.m"
    {
#line 926 "prog_rep.m"
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &ll_backend__prog_rep_scalar_common_2[0], ll_backend__prog_rep__V_8_8, ((MR_Box) (ll_backend__prog_rep__Var_5)), &ll_backend__prog_rep__conv0_V_9_9);
    }
#line 926 "prog_rep.m"
    ll_backend__prog_rep__V_9_9 = ((MR_Word) ll_backend__prog_rep__conv0_V_9_9);
#line 926 "prog_rep.m"
    ll_backend__prog_rep__Num_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, (MR_Integer) 0)));
#line 926 "prog_rep.m"
    ll_backend__prog_rep__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, (MR_Integer) 1)));
#line 925 "prog_rep.m"
    return ll_backend__prog_rep__Num_6;
#line 925 "prog_rep.m"
  }
#line 923 "prog_rep.m"
}

#line 921 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0_1(
#line 921 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 921 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 921 "prog_rep.m"
{
#line 921 "prog_rep.m"
  {
#line 921 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 921 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 921 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_Bytes_6;

#line 921 "prog_rep.m"
    {
#line 921 "prog_rep.m"
      ll_backend__prog_rep__conv0_Bytes_6 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 921 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_Bytes_6));
#line 921 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 921 "prog_rep.m"
  }
#line 921 "prog_rep.m"
}

#line 917 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0(
#line 917 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 917 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Vars_5)
#line 917 "prog_rep.m"
{
#line 919 "prog_rep.m"
  {
#line 919 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 919 "prog_rep.m"
    MR_Word ll_backend__prog_rep__HeadVar__3_3;
#line 919 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 919 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_6_6;
#line 919 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_7_7;
#line 919 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_8_8;
#line 919 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_9_9;
#line 919 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_16_16;

#line 1009 "prog_rep.m"
    {
#line 1009 "prog_rep.m"
      ll_backend__prog_rep__V_16_16 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__Vars_5);
    }
#line 1009 "prog_rep.m"
    {
#line 1009 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_16_16, &ll_backend__prog_rep__V_6_6);
    }
#line 921 "prog_rep.m"
    {
#line 921 "prog_rep.m"
      ll_backend__prog_rep__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 921 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[4]));
#line 921 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 1) = ((MR_Box) (ll_backend__prog_rep__encode_var_reps_func_2_f_0_1));
#line 921 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 921 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 3) = ((MR_Box) (ll_backend__prog_rep__Info_4));
#line 921 "prog_rep.m"
    }
#line 921 "prog_rep.m"
    {
#line 921 "prog_rep.m"
      ll_backend__prog_rep__V_8_8 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], ll_backend__prog_rep__V_9_9, ll_backend__prog_rep__Vars_5);
    }
#line 921 "prog_rep.m"
    {
#line 921 "prog_rep.m"
      ll_backend__prog_rep__V_7_7 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__V_8_8);
    }
#line 920 "prog_rep.m"
    {
#line 920 "prog_rep.m"
      ll_backend__prog_rep__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__V_6_6, ll_backend__prog_rep__V_7_7);
    }
#line 919 "prog_rep.m"
    return ll_backend__prog_rep__HeadVar__3_3;
#line 919 "prog_rep.m"
  }
#line 917 "prog_rep.m"
}

#line 902 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(
#line 902 "prog_rep.m"
  MR_String ll_backend__prog_rep__String_5,
#line 902 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_6,
#line 902 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_9,
#line 902 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_10)
#line 902 "prog_rep.m"
{
#line 905 "prog_rep.m"
  {
#line 905 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 905 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Index_8;

#line 906 "prog_rep.m"
    {
#line 906 "prog_rep.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__String_5, &ll_backend__prog_rep__Index_8, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_9, ll_backend__prog_rep__STATE_VARIABLE_StringTable_10);
    }
#line 907 "prog_rep.m"
    {
#line 907 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_8, ll_backend__prog_rep__Bytes_6);
#line 907 "prog_rep.m"
      return;
    }
#line 905 "prog_rep.m"
  }
#line 902 "prog_rep.m"
}

#line 860 "prog_rep.m"
static MR_String MR_CALL 
ll_backend__prog_rep__cons_id_rep_1_f_0(
#line 860 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1)
#line 860 "prog_rep.m"
{
#line 862 "prog_rep.m"
  {
#line 862 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 862 "prog_rep.m"
    MR_String ll_backend__prog_rep__HeadVar__2_2;

#line 862 "prog_rep.m"
#line 862 "prog_rep.m"
    switch (MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) {
#line 862 "prog_rep.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 862 "prog_rep.m"
      case (MR_Integer) 0:
#line 876 "prog_rep.m"
        ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044typeclass_info_cell_constructor";
#line 862 "prog_rep.m"
        break;
#line 862 "prog_rep.m"
      case (MR_Integer) 1:
#line 874 "prog_rep.m"
        ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044type_info_cell_constructor";
#line 862 "prog_rep.m"
        break;
#line 862 "prog_rep.m"
      case (MR_Integer) 2:
#line 880 "prog_rep.m"
        ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044tabling_info_const";
#line 862 "prog_rep.m"
        break;
#line 862 "prog_rep.m"
      case (MR_Integer) 3:
#line 862 "prog_rep.m"
#line 862 "prog_rep.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) {
#line 862 "prog_rep.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 862 "prog_rep.m"
          case (MR_Integer) 0:
#line 881 "prog_rep.m"
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044table_io_entry_desc";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 1:
#line 882 "prog_rep.m"
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044deep_profiling_proc_layout";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 2:
#line 862 "prog_rep.m"
            {
#line 862 "prog_rep.m"
              MR_Word ll_backend__prog_rep__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));
#line 862 "prog_rep.m"
              MR_Integer ll_backend__prog_rep__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 2)));
#line 862 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 3)));

#line 886 "prog_rep.m"
              if (((MR_tag((MR_Word) ll_backend__prog_rep__SymName_3)) == (MR_mktag((MR_Integer) 1))))
#line 887 "prog_rep.m"
                {
#line 887 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__SymName_3, (MR_Integer) 0)));

#line 887 "prog_rep.m"
                  ll_backend__prog_rep__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__SymName_3, (MR_Integer) 1)));
#line 887 "prog_rep.m"
                }
#line 886 "prog_rep.m"
              else
#line 886 "prog_rep.m"
                ll_backend__prog_rep__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__SymName_3, (MR_Integer) 0)));
#line 862 "prog_rep.m"
            }
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 3:
#line 864 "prog_rep.m"
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "{}";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 4:
#line 870 "prog_rep.m"
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044closure_cons";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 5:
#line 865 "prog_rep.m"
            {
#line 865 "prog_rep.m"
              MR_Integer ll_backend__prog_rep__Int_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

#line 865 "prog_rep.m"
              {
#line 865 "prog_rep.m"
                return ll_backend__prog_rep__HeadVar__2_2 = mercury__string__int_to_string_1_f_0(ll_backend__prog_rep__Int_7);
              }
#line 865 "prog_rep.m"
            }
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 6:
#line 866 "prog_rep.m"
            {
#line 866 "prog_rep.m"
              MR_Float ll_backend__prog_rep__Float_8 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

#line 866 "prog_rep.m"
              {
#line 866 "prog_rep.m"
                return ll_backend__prog_rep__HeadVar__2_2 = mercury__string__float_to_string_1_f_0(ll_backend__prog_rep__Float_8);
              }
#line 866 "prog_rep.m"
            }
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 7:
#line 867 "prog_rep.m"
            {
#line 867 "prog_rep.m"
              MR_Char ll_backend__prog_rep__Char_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

#line 867 "prog_rep.m"
              {
#line 867 "prog_rep.m"
                return ll_backend__prog_rep__HeadVar__2_2 = mercury__string__char_to_string_1_f_0(ll_backend__prog_rep__Char_9);
              }
#line 867 "prog_rep.m"
            }
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 8:
#line 868 "prog_rep.m"
            {
#line 868 "prog_rep.m"
              MR_String ll_backend__prog_rep__String_10 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));
#line 868 "prog_rep.m"
              MR_String ll_backend__prog_rep__V_12_12;

#line 868 "prog_rep.m"
              {
#line 868 "prog_rep.m"
                ll_backend__prog_rep__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__prog_rep__String_10, (MR_String) "\"");
              }
#line 868 "prog_rep.m"
              {
#line 868 "prog_rep.m"
                return ll_backend__prog_rep__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__prog_rep__V_12_12);
              }
#line 868 "prog_rep.m"
            }
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 9:
#line 869 "prog_rep.m"
            {
#line 869 "prog_rep.m"
              MR_String ll_backend__prog_rep__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

#line 869 "prog_rep.m"
              {
#line 869 "prog_rep.m"
                return ll_backend__prog_rep__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__prog_rep__Name_14);
              }
#line 869 "prog_rep.m"
            }
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 10:
#line 871 "prog_rep.m"
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044type_ctor_info_const";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 11:
#line 873 "prog_rep.m"
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044base_typeclass_info_const";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 12:
#line 877 "prog_rep.m"
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044type_info_const";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 13:
#line 878 "prog_rep.m"
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044typeclass_info_const";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 14:
#line 879 "prog_rep.m"
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044ground_term_const";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
        }
#line 862 "prog_rep.m"
        break;
#line 862 "prog_rep.m"
    }
#line 862 "prog_rep.m"
    return ll_backend__prog_rep__HeadVar__2_2;
#line 862 "prog_rep.m"
  }
#line 860 "prog_rep.m"
}

#line 851 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(
#line 851 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ConsIdArity_5,
#line 851 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__ConsIdBytes_6,
#line 851 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_12,
#line 851 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_13)
#line 851 "prog_rep.m"
{
#line 854 "prog_rep.m"
  {
#line 854 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 854 "prog_rep.m"
    MR_String ll_backend__prog_rep__ConsId_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ConsIdArity_5, (MR_Integer) 0)));
#line 854 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ConsIdArity_5, (MR_Integer) 1)));
#line 854 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FunctorBytes_10;
#line 854 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ArityBytes_11;
#line 854 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Index_21;

#line 906 "prog_rep.m"
    {
#line 906 "prog_rep.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__ConsId_8, &ll_backend__prog_rep__Index_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_12, ll_backend__prog_rep__STATE_VARIABLE_StringTable_13);
    }
#line 907 "prog_rep.m"
    {
#line 907 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_21, &ll_backend__prog_rep__FunctorBytes_10);
    }
#line 857 "prog_rep.m"
    {
#line 857 "prog_rep.m"
      mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__Arity_9, &ll_backend__prog_rep__ArityBytes_11);
    }
#line 858 "prog_rep.m"
    {
#line 858 "prog_rep.m"
      *ll_backend__prog_rep__ConsIdBytes_6 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__FunctorBytes_10, ll_backend__prog_rep__ArityBytes_11);
    }
#line 854 "prog_rep.m"
  }
#line 851 "prog_rep.m"
}

#line 848 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0_1(
#line 848 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 848 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 848 "prog_rep.m"
{
#line 848 "prog_rep.m"
  {
#line 848 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 848 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;

#line 848 "prog_rep.m"
    {
#line 848 "prog_rep.m"
      return ll_backend__prog_rep__succeeded = hlds__instmap__var_is_ground_in_instmap_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 848 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 848 "prog_rep.m"
  }
#line 848 "prog_rep.m"
}

#line 831 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(
#line 831 "prog_rep.m"
  MR_Word ll_backend__prog_rep__GoalInfo_7,
#line 831 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap0_8,
#line 831 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_9,
#line 831 "prog_rep.m"
  MR_String * ll_backend__prog_rep__FileName_10,
#line 831 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__LineNo_11,
#line 831 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__BoundVars_12)
#line 831 "prog_rep.m"
{
#line 835 "prog_rep.m"
  {
#line 835 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 835 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Context_13;
#line 835 "prog_rep.m"
    MR_String ll_backend__prog_rep__FileName0_14;
#line 835 "prog_rep.m"
    MR_Word ll_backend__prog_rep__InstmapDelta_15;
#line 835 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ChangedVarsSet_16;
#line 835 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ChangedVars_17;
#line 835 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ModuleInfo_18;
#line 835 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_19_19;
#line 838 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_33_33;
#line 838 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_20_20;
#line 838 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_21_21;
#line 838 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_22_22;
#line 838 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_23_23;
#line 838 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_24_24;
#line 847 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_25_25;
#line 847 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_26_26;
#line 847 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_27_27;
#line 847 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_28_28;
#line 847 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_29_29;

#line 836 "prog_rep.m"
    {
#line 836 "prog_rep.m"
      ll_backend__prog_rep__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__prog_rep__GoalInfo_7);
    }
#line 837 "prog_rep.m"
    {
#line 837 "prog_rep.m"
      mercury__term__context_file_2_p_0(ll_backend__prog_rep__Context_13, &ll_backend__prog_rep__FileName0_14);
    }
#line 838 "prog_rep.m"
    ll_backend__prog_rep__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 0)));
#line 838 "prog_rep.m"
    ll_backend__prog_rep__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 1)));
#line 838 "prog_rep.m"
    ll_backend__prog_rep__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 2)));
#line 838 "prog_rep.m"
    ll_backend__prog_rep__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 3)));
#line 838 "prog_rep.m"
    ll_backend__prog_rep__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 4)));
#line 838 "prog_rep.m"
    ll_backend__prog_rep__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 5)));
#line 838 "prog_rep.m"
    ll_backend__prog_rep__succeeded = (strcmp(ll_backend__prog_rep__FileName0_14, ll_backend__prog_rep__V_33_33) == 0);
#line 840 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 839 "prog_rep.m"
      *ll_backend__prog_rep__FileName_10 = (MR_String) "";
#line 840 "prog_rep.m"
    else
#line 841 "prog_rep.m"
      *ll_backend__prog_rep__FileName_10 = ll_backend__prog_rep__FileName0_14;
#line 843 "prog_rep.m"
    {
#line 843 "prog_rep.m"
      mercury__term__context_line_2_p_0(ll_backend__prog_rep__Context_13, ll_backend__prog_rep__LineNo_11);
    }
#line 844 "prog_rep.m"
    {
#line 844 "prog_rep.m"
      ll_backend__prog_rep__InstmapDelta_15 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__prog_rep__GoalInfo_7);
    }
#line 845 "prog_rep.m"
    {
#line 845 "prog_rep.m"
      hlds__instmap__instmap_delta_changed_vars_2_p_0(ll_backend__prog_rep__InstmapDelta_15, &ll_backend__prog_rep__ChangedVarsSet_16);
    }
#line 846 "prog_rep.m"
    {
#line 846 "prog_rep.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__prog_rep__ChangedVarsSet_16, &ll_backend__prog_rep__ChangedVars_17);
    }
#line 847 "prog_rep.m"
    ll_backend__prog_rep__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 0)));
#line 847 "prog_rep.m"
    ll_backend__prog_rep__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 1)));
#line 847 "prog_rep.m"
    ll_backend__prog_rep__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 2)));
#line 847 "prog_rep.m"
    ll_backend__prog_rep__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 3)));
#line 847 "prog_rep.m"
    ll_backend__prog_rep__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 4)));
#line 847 "prog_rep.m"
    ll_backend__prog_rep__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 5)));
#line 848 "prog_rep.m"
    {
#line 848 "prog_rep.m"
      ll_backend__prog_rep__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 848 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_19_19, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[3]));
#line 848 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_19_19, 1) = ((MR_Box) (ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0_1));
#line 848 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 848 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_19_19, 3) = ((MR_Box) (ll_backend__prog_rep__ModuleInfo_18));
#line 848 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_19_19, 4) = ((MR_Box) (ll_backend__prog_rep__Instmap0_8));
#line 848 "prog_rep.m"
    }
#line 848 "prog_rep.m"
    {
#line 848 "prog_rep.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], ll_backend__prog_rep__V_19_19, ll_backend__prog_rep__ChangedVars_17, ll_backend__prog_rep__BoundVars_12);
#line 848 "prog_rep.m"
      return;
    }
#line 835 "prog_rep.m"
  }
#line 831 "prog_rep.m"
}

#line 812 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__filter_input_args_4_p_0(
#line 812 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_1,
#line 812 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 812 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 812 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4)
#line 812 "prog_rep.m"
{
#line 815 "prog_rep.m"
  {
#line 815 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 815 "prog_rep.m"
    if ((ll_backend__prog_rep__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 815 "prog_rep.m"
      if ((ll_backend__prog_rep__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 815 "prog_rep.m"
        *ll_backend__prog_rep__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 815 "prog_rep.m"
      else
#line 824 "prog_rep.m"
        {
#line 825 "prog_rep.m"
          {
#line 825 "prog_rep.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.filter_input_args\'/4", (MR_String) "mismatched lists");
#line 825 "prog_rep.m"
            return;
          }
#line 824 "prog_rep.m"
        }
#line 815 "prog_rep.m"
    else
#line 815 "prog_rep.m"
      {
#line 815 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 815 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));

#line 815 "prog_rep.m"
        if ((ll_backend__prog_rep__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "prog_rep.m"
          {
#line 827 "prog_rep.m"
            {
#line 827 "prog_rep.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.filter_input_args\'/4", (MR_String) "mismatched lists");
#line 827 "prog_rep.m"
              return;
            }
#line 826 "prog_rep.m"
          }
#line 815 "prog_rep.m"
        else
#line 817 "prog_rep.m"
          {
#line 817 "prog_rep.m"
            MR_Word ll_backend__prog_rep__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
#line 817 "prog_rep.m"
            MR_Word ll_backend__prog_rep__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
#line 817 "prog_rep.m"
            MR_Word ll_backend__prog_rep__MaybeVar_11;
#line 817 "prog_rep.m"
            MR_Word ll_backend__prog_rep__MaybeVars_12;
#line 809 "prog_rep.m"
            MR_Word ll_backend__prog_rep__RHSInitialInst_31;
#line 809 "prog_rep.m"
            MR_Word ll_backend__prog_rep__RHSFinalInst_33;
#line 809 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_28_28, (MR_Integer) 0)));
#line 809 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_28_28, (MR_Integer) 1)));
#line 809 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_36_36;
#line 809 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_37_37;
#line 809 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_34_34, (MR_Integer) 0)));
#line 809 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_32_32;
#line 810 "prog_rep.m"
            MR_String ll_backend__prog_rep__V_38_38;
#line 810 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_39_39;
#line 810 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_40_40;
#line 810 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_41_41;
#line 810 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_42_42;

#line 809 "prog_rep.m"
            ll_backend__prog_rep__RHSInitialInst_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_34_34, (MR_Integer) 1)));
#line 809 "prog_rep.m"
            ll_backend__prog_rep__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_35_35, (MR_Integer) 0)));
#line 809 "prog_rep.m"
            ll_backend__prog_rep__RHSFinalInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_35_35, (MR_Integer) 1)));
#line 810 "prog_rep.m"
            ll_backend__prog_rep__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 0)));
#line 810 "prog_rep.m"
            ll_backend__prog_rep__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 1)));
#line 810 "prog_rep.m"
            ll_backend__prog_rep__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 2)));
#line 810 "prog_rep.m"
            ll_backend__prog_rep__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 3)));
#line 810 "prog_rep.m"
            ll_backend__prog_rep__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 4)));
#line 810 "prog_rep.m"
            ll_backend__prog_rep__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 5)));
#line 810 "prog_rep.m"
            {
#line 810 "prog_rep.m"
              ll_backend__prog_rep__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 810 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_37_37, 0) = ((MR_Box) (ll_backend__prog_rep__RHSInitialInst_31));
#line 810 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_37_37, 1) = ((MR_Box) (ll_backend__prog_rep__RHSFinalInst_33));
#line 810 "prog_rep.m"
            }
#line 810 "prog_rep.m"
            {
#line 810 "prog_rep.m"
              ll_backend__prog_rep__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(ll_backend__prog_rep__V_36_36, ll_backend__prog_rep__V_37_37);
            }
#line 820 "prog_rep.m"
            if (ll_backend__prog_rep__succeeded)
#line 819 "prog_rep.m"
              {
#line 819 "prog_rep.m"
                ll_backend__prog_rep__MaybeVar_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 819 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__MaybeVar_11, 0) = ((MR_Box) (ll_backend__prog_rep__Var_9));
#line 819 "prog_rep.m"
              }
#line 820 "prog_rep.m"
            else
#line 821 "prog_rep.m"
              ll_backend__prog_rep__MaybeVar_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 823 "prog_rep.m"
            {
#line 823 "prog_rep.m"
              ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_1, ll_backend__prog_rep__V_27_27, ll_backend__prog_rep__Vars_10, &ll_backend__prog_rep__MaybeVars_12);
            }
#line 817 "prog_rep.m"
            {
#line 817 "prog_rep.m"
              MR_Word base;
#line 817 "prog_rep.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "prog_rep.m"
              *ll_backend__prog_rep__HeadVar__4_4 = base;
#line 817 "prog_rep.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep__MaybeVar_11));
#line 817 "prog_rep.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__prog_rep__MaybeVars_12));
#line 817 "prog_rep.m"
            }
#line 817 "prog_rep.m"
          }
#line 815 "prog_rep.m"
      }
#line 815 "prog_rep.m"
  }
#line 812 "prog_rep.m"
}

#line 802 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__lhs_final_is_ground_2_p_0(
#line 802 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_3,
#line 802 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2)
#line 802 "prog_rep.m"
{
#line 804 "prog_rep.m"
  {
#line 804 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 804 "prog_rep.m"
    MR_Word ll_backend__prog_rep__LHSFinalInst_6;
#line 804 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 804 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_10_10;
#line 804 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
#line 804 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_7_7;
#line 805 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_11_11;
#line 805 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_12_12;
#line 805 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_13_13;
#line 805 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_14_14;
#line 805 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_15_15;

#line 804 "prog_rep.m"
    ll_backend__prog_rep__LHSFinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, (MR_Integer) 0)));
#line 804 "prog_rep.m"
    ll_backend__prog_rep__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, (MR_Integer) 1)));
#line 805 "prog_rep.m"
    ll_backend__prog_rep__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 0)));
#line 805 "prog_rep.m"
    ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 1)));
#line 805 "prog_rep.m"
    ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 2)));
#line 805 "prog_rep.m"
    ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 3)));
#line 805 "prog_rep.m"
    ll_backend__prog_rep__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 4)));
#line 805 "prog_rep.m"
    ll_backend__prog_rep__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 5)));
#line 805 "prog_rep.m"
    {
#line 805 "prog_rep.m"
      return ll_backend__prog_rep__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(ll_backend__prog_rep__V_10_10, ll_backend__prog_rep__LHSFinalInst_6);
    }
#line 804 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 804 "prog_rep.m"
  }
#line 802 "prog_rep.m"
}

#line 797 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0_1(
#line 797 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 797 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 797 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 797 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 797 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4)
#line 797 "prog_rep.m"
{
#line 797 "prog_rep.m"
  {
#line 797 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 797 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv1_ConsIdBytes_6;
#line 797 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_13;

#line 797 "prog_rep.m"
    {
#line 797 "prog_rep.m"
      ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv1_ConsIdBytes_6, ((MR_Word) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_13);
    }
#line 797 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv1_ConsIdBytes_6));
#line 797 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_13));
#line 797 "prog_rep.m"
  }
#line 797 "prog_rep.m"
}

#line 790 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0(
#line 790 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_6,
#line 790 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Case_7,
#line 790 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_8,
#line 790 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_16,
#line 790 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_17)
#line 790 "prog_rep.m"
{
#line 793 "prog_rep.m"
  {
#line 793 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_30_30;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_33_33;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Case_7, (MR_Integer) 0)));
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Case_7, (MR_Integer) 1)));
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Case_7, (MR_Integer) 2)));
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalBytes_13;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__MainConsIdBytes_14;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__OtherConsIdsByteLists_15;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_18_18;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_19_19;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_22_22;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_23_23;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_24_24;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_25_25;
#line 793 "prog_rep.m"
    MR_String ll_backend__prog_rep__ConsId_39;
#line 793 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Arity_40;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FunctorBytes_41;
#line 793 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ArityBytes_42;
#line 793 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Index_50;
#line 793 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_54_54;
#line 797 "prog_rep.m"
    MR_Box ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_17;

#line 795 "prog_rep.m"
    {
#line 795 "prog_rep.m"
      ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Goal_12, &ll_backend__prog_rep__GoalBytes_13, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_16, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_18_18);
    }
#line 855 "prog_rep.m"
    ll_backend__prog_rep__ConsId_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__MainConsId_10, (MR_Integer) 0)));
#line 855 "prog_rep.m"
    ll_backend__prog_rep__Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__MainConsId_10, (MR_Integer) 1)));
#line 906 "prog_rep.m"
    {
#line 906 "prog_rep.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__ConsId_39, &ll_backend__prog_rep__Index_50, ll_backend__prog_rep__STATE_VARIABLE_StringTable_18_18, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_19_19);
    }
#line 907 "prog_rep.m"
    {
#line 907 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_50, &ll_backend__prog_rep__FunctorBytes_41);
    }
#line 857 "prog_rep.m"
    {
#line 857 "prog_rep.m"
      mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__Arity_40, &ll_backend__prog_rep__ArityBytes_42);
    }
#line 858 "prog_rep.m"
    {
#line 858 "prog_rep.m"
      ll_backend__prog_rep__MainConsIdBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__FunctorBytes_41, ll_backend__prog_rep__ArityBytes_42);
    }
#line 5038 "ll_backend.prog_rep.c"
    ll_backend__prog_rep__TypeCtorInfo_30_30 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0;
#line 797 "prog_rep.m"
    {
#line 797 "prog_rep.m"
      mercury__list__map_foldl_5_p_0(ll_backend__prog_rep__TypeCtorInfo_30_30, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[9], ll_backend__prog_rep__OtherConsIds_11, &ll_backend__prog_rep__OtherConsIdsByteLists_15, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_19_19)), &ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_17);
    }
#line 797 "prog_rep.m"
    *ll_backend__prog_rep__STATE_VARIABLE_StringTable_17 = ((MR_Word) ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_17);
#line 5047 "ll_backend.prog_rep.c"
    ll_backend__prog_rep__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1009 "prog_rep.m"
    {
#line 1009 "prog_rep.m"
      ll_backend__prog_rep__V_54_54 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeCtorInfo_30_30, ll_backend__prog_rep__OtherConsIds_11);
    }
#line 1009 "prog_rep.m"
    {
#line 1009 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_54_54, &ll_backend__prog_rep__V_23_23);
    }
#line 800 "prog_rep.m"
    {
#line 800 "prog_rep.m"
      ll_backend__prog_rep__V_25_25 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_33_33, ll_backend__prog_rep__OtherConsIdsByteLists_15);
    }
#line 800 "prog_rep.m"
    {
#line 800 "prog_rep.m"
      ll_backend__prog_rep__V_24_24 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_33_33, ll_backend__prog_rep__V_25_25, ll_backend__prog_rep__GoalBytes_13);
    }
#line 799 "prog_rep.m"
    {
#line 799 "prog_rep.m"
      ll_backend__prog_rep__V_22_22 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_33_33, ll_backend__prog_rep__V_23_23, ll_backend__prog_rep__V_24_24);
    }
#line 799 "prog_rep.m"
    {
#line 799 "prog_rep.m"
      *ll_backend__prog_rep__Bytes_8 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_33_33, ll_backend__prog_rep__MainConsIdBytes_14, ll_backend__prog_rep__V_22_22);
    }
#line 793 "prog_rep.m"
  }
#line 790 "prog_rep.m"
}

#line 773 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_3(
#line 773 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 773 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 773 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 773 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 773 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4)
#line 773 "prog_rep.m"
{
#line 773 "prog_rep.m"
  {
#line 773 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 773 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv7_Bytes_8;
#line 773 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv6_STATE_VARIABLE_StringTable_17;

#line 773 "prog_rep.m"
    {
#line 773 "prog_rep.m"
      ll_backend__prog_rep__encode_case_rep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv7_Bytes_8, ((MR_Word) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv6_STATE_VARIABLE_StringTable_17);
    }
#line 773 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv7_Bytes_8));
#line 773 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv6_STATE_VARIABLE_StringTable_17));
#line 773 "prog_rep.m"
  }
#line 773 "prog_rep.m"
}

#line 658 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_2(
#line 658 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 658 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 658 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 658 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 658 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4)
#line 658 "prog_rep.m"
{
#line 658 "prog_rep.m"
  {
#line 658 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 658 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv4_Bytes_10;
#line 658 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv3_STATE_VARIABLE_StringTable_72;

#line 658 "prog_rep.m"
    {
#line 658 "prog_rep.m"
      ll_backend__prog_rep__encode_goal_rep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv4_Bytes_10, ((MR_Word) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv3_STATE_VARIABLE_StringTable_72);
    }
#line 658 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv4_Bytes_10));
#line 658 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv3_STATE_VARIABLE_StringTable_72));
#line 658 "prog_rep.m"
  }
#line 658 "prog_rep.m"
}

#line 652 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_1(
#line 652 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 652 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 652 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 652 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 652 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4)
#line 652 "prog_rep.m"
{
#line 652 "prog_rep.m"
  {
#line 652 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 652 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv1_Bytes_10;
#line 652 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_72;

#line 652 "prog_rep.m"
    {
#line 652 "prog_rep.m"
      ll_backend__prog_rep__encode_goal_rep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv1_Bytes_10, ((MR_Word) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_72);
    }
#line 652 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv1_Bytes_10));
#line 652 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_72));
#line 652 "prog_rep.m"
  }
#line 652 "prog_rep.m"
}

#line 646 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0(
#line 646 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_6,
#line 646 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 646 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_10,
#line 646 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71,
#line 646 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_72)
#line 646 "prog_rep.m"
{
#line 649 "prog_rep.m"
  {
#line 649 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 649 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
#line 649 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Detism_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 649 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ExprBytes_14;
#line 649 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__DetismByte_70;
#line 649 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_206_206;

#line 656 "prog_rep.m"
#line 656 "prog_rep.m"
    switch (MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) {
#line 656 "prog_rep.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 656 "prog_rep.m"
      case (MR_Integer) 0:
#line 651 "prog_rep.m"
        {
#line 651 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeInfo_223_223;
#line 651 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeCtorInfo_226_226;
#line 651 "prog_rep.m"
          MR_Word ll_backend__prog_rep__GoalReps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
#line 651 "prog_rep.m"
          MR_Word ll_backend__prog_rep__ConjBytesList_13;
#line 651 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_197_197;
#line 651 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_199_199;
#line 651 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__V_200_200;
#line 651 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_203_203;
#line 651 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_204_204;
#line 651 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_205_205;
#line 652 "prog_rep.m"
          MR_Box ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_72;

#line 652 "prog_rep.m"
          {
#line 652 "prog_rep.m"
            ll_backend__prog_rep__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 652 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_197_197, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_4[1]));
#line 652 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_197_197, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_1));
#line 652 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_197_197, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 652 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_197_197, 3) = ((MR_Box) (ll_backend__prog_rep__Info_6));
#line 652 "prog_rep.m"
          }
#line 5274 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeInfo_223_223 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[1];
#line 652 "prog_rep.m"
          {
#line 652 "prog_rep.m"
            mercury__list__map_foldl_5_p_0(ll_backend__prog_rep__TypeInfo_223_223, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, ll_backend__prog_rep__V_197_197, ll_backend__prog_rep__GoalReps_12, &ll_backend__prog_rep__ConjBytesList_13, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71)), &ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_72);
          }
#line 652 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ((MR_Word) ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_72);
#line 5283 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeCtorInfo_226_226 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 654 "prog_rep.m"
          {
#line 654 "prog_rep.m"
            ll_backend__prog_rep__V_200_200 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 0);
          }
#line 654 "prog_rep.m"
          {
#line 654 "prog_rep.m"
            ll_backend__prog_rep__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_199_199, 0) = ((MR_Box) (ll_backend__prog_rep__V_200_200));
#line 654 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_199_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 654 "prog_rep.m"
          }
#line 655 "prog_rep.m"
          {
#line 655 "prog_rep.m"
            ll_backend__prog_rep__V_204_204 = ll_backend__prog_rep__encode_length_func_1_f_0(ll_backend__prog_rep__TypeInfo_223_223, ll_backend__prog_rep__GoalReps_12);
          }
#line 655 "prog_rep.m"
          {
#line 655 "prog_rep.m"
            ll_backend__prog_rep__V_205_205 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_226_226, ll_backend__prog_rep__ConjBytesList_13);
          }
#line 655 "prog_rep.m"
          {
#line 655 "prog_rep.m"
            ll_backend__prog_rep__V_203_203 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_226_226, ll_backend__prog_rep__V_204_204, ll_backend__prog_rep__V_205_205);
          }
#line 654 "prog_rep.m"
          {
#line 654 "prog_rep.m"
            ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_226_226, ll_backend__prog_rep__V_199_199, ll_backend__prog_rep__V_203_203);
          }
#line 651 "prog_rep.m"
        }
#line 656 "prog_rep.m"
        break;
#line 656 "prog_rep.m"
      case (MR_Integer) 1:
#line 657 "prog_rep.m"
        {
#line 657 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeInfo_231_231;
#line 657 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeCtorInfo_234_234;
#line 657 "prog_rep.m"
          MR_Word ll_backend__prog_rep__DisjBytesList_15;
#line 657 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_188_188;
#line 657 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_190_190;
#line 657 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__V_191_191;
#line 657 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_194_194;
#line 657 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_195_195;
#line 657 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_196_196;
#line 657 "prog_rep.m"
          MR_Word ll_backend__prog_rep__GoalReps_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
#line 658 "prog_rep.m"
          MR_Box ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_72;

#line 658 "prog_rep.m"
          {
#line 658 "prog_rep.m"
            ll_backend__prog_rep__V_188_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 658 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_188_188, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_4[1]));
#line 658 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_188_188, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_2));
#line 658 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_188_188, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 658 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_188_188, 3) = ((MR_Box) (ll_backend__prog_rep__Info_6));
#line 658 "prog_rep.m"
          }
#line 5365 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeInfo_231_231 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[1];
#line 658 "prog_rep.m"
          {
#line 658 "prog_rep.m"
            mercury__list__map_foldl_5_p_0(ll_backend__prog_rep__TypeInfo_231_231, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, ll_backend__prog_rep__V_188_188, ll_backend__prog_rep__GoalReps_208, &ll_backend__prog_rep__DisjBytesList_15, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71)), &ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_72);
          }
#line 658 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ((MR_Word) ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_72);
#line 5374 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeCtorInfo_234_234 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 660 "prog_rep.m"
          {
#line 660 "prog_rep.m"
            ll_backend__prog_rep__V_191_191 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 1);
          }
#line 660 "prog_rep.m"
          {
#line 660 "prog_rep.m"
            ll_backend__prog_rep__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_190_190, 0) = ((MR_Box) (ll_backend__prog_rep__V_191_191));
#line 660 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "prog_rep.m"
          }
#line 661 "prog_rep.m"
          {
#line 661 "prog_rep.m"
            ll_backend__prog_rep__V_195_195 = ll_backend__prog_rep__encode_length_func_1_f_0(ll_backend__prog_rep__TypeInfo_231_231, ll_backend__prog_rep__GoalReps_208);
          }
#line 661 "prog_rep.m"
          {
#line 661 "prog_rep.m"
            ll_backend__prog_rep__V_196_196 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_234_234, ll_backend__prog_rep__DisjBytesList_15);
          }
#line 661 "prog_rep.m"
          {
#line 661 "prog_rep.m"
            ll_backend__prog_rep__V_194_194 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_234_234, ll_backend__prog_rep__V_195_195, ll_backend__prog_rep__V_196_196);
          }
#line 660 "prog_rep.m"
          {
#line 660 "prog_rep.m"
            ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_234_234, ll_backend__prog_rep__V_190_190, ll_backend__prog_rep__V_194_194);
          }
#line 657 "prog_rep.m"
        }
#line 656 "prog_rep.m"
        break;
#line 656 "prog_rep.m"
      case (MR_Integer) 2:
#line 772 "prog_rep.m"
        {
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeInfo_242_242;
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeCtorInfo_245_245;
#line 772 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__SwitchVar_63 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__CanFail_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__Cases_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__CasesBytesList_66;
#line 772 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__CanFailByte_67;
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_81_81;
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_83_83;
#line 772 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__V_84_84;
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_87_87;
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_88_88;
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_90_90;
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_91_91;
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_92_92;
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_93_93;
#line 772 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_94_94;
#line 773 "prog_rep.m"
          MR_Box ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_72;

#line 773 "prog_rep.m"
          {
#line 773 "prog_rep.m"
            ll_backend__prog_rep__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 773 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_81_81, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_4[2]));
#line 773 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_81_81, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_3));
#line 773 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 773 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_81_81, 3) = ((MR_Box) (ll_backend__prog_rep__Info_6));
#line 773 "prog_rep.m"
          }
#line 5470 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeInfo_242_242 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[2];
#line 773 "prog_rep.m"
          {
#line 773 "prog_rep.m"
            mercury__list__map_foldl_5_p_0(ll_backend__prog_rep__TypeInfo_242_242, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, ll_backend__prog_rep__V_81_81, ll_backend__prog_rep__Cases_65, &ll_backend__prog_rep__CasesBytesList_66, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71)), &ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_72);
          }
#line 773 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ((MR_Word) ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_72);
#line 775 "prog_rep.m"
          {
#line 775 "prog_rep.m"
            mdbcomp__program_representation__can_fail_byte_2_p_0(ll_backend__prog_rep__CanFail_64, &ll_backend__prog_rep__CanFailByte_67);
          }
#line 5484 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeCtorInfo_245_245 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 776 "prog_rep.m"
          {
#line 776 "prog_rep.m"
            ll_backend__prog_rep__V_84_84 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 2);
          }
#line 776 "prog_rep.m"
          {
#line 776 "prog_rep.m"
            ll_backend__prog_rep__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_83_83, 0) = ((MR_Box) (ll_backend__prog_rep__V_84_84));
#line 776 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "prog_rep.m"
          }
#line 777 "prog_rep.m"
          {
#line 777 "prog_rep.m"
            ll_backend__prog_rep__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_88_88, 0) = ((MR_Box) (ll_backend__prog_rep__CanFailByte_67));
#line 777 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 777 "prog_rep.m"
          }
#line 778 "prog_rep.m"
          {
#line 778 "prog_rep.m"
            ll_backend__prog_rep__V_91_91 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__SwitchVar_63);
          }
#line 779 "prog_rep.m"
          {
#line 779 "prog_rep.m"
            ll_backend__prog_rep__V_93_93 = ll_backend__prog_rep__encode_length_func_1_f_0(ll_backend__prog_rep__TypeInfo_242_242, ll_backend__prog_rep__Cases_65);
          }
#line 779 "prog_rep.m"
          {
#line 779 "prog_rep.m"
            ll_backend__prog_rep__V_94_94 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__CasesBytesList_66);
          }
#line 779 "prog_rep.m"
          {
#line 779 "prog_rep.m"
            ll_backend__prog_rep__V_92_92 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__V_93_93, ll_backend__prog_rep__V_94_94);
          }
#line 778 "prog_rep.m"
          {
#line 778 "prog_rep.m"
            ll_backend__prog_rep__V_90_90 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__V_91_91, ll_backend__prog_rep__V_92_92);
          }
#line 777 "prog_rep.m"
          {
#line 777 "prog_rep.m"
            ll_backend__prog_rep__V_87_87 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__V_88_88, ll_backend__prog_rep__V_90_90);
          }
#line 776 "prog_rep.m"
          {
#line 776 "prog_rep.m"
            ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__V_83_83, ll_backend__prog_rep__V_87_87);
          }
#line 772 "prog_rep.m"
        }
#line 656 "prog_rep.m"
        break;
#line 656 "prog_rep.m"
      case (MR_Integer) 3:
#line 656 "prog_rep.m"
#line 656 "prog_rep.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) {
#line 656 "prog_rep.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 656 "prog_rep.m"
          case (MR_Integer) 0:
#line 667 "prog_rep.m"
            {
#line 667 "prog_rep.m"
              MR_Word ll_backend__prog_rep__TypeCtorInfo_236_236;
#line 667 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 667 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Then_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 667 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 667 "prog_rep.m"
              MR_Word ll_backend__prog_rep__CondBytes_21;
#line 667 "prog_rep.m"
              MR_Word ll_backend__prog_rep__ThenBytes_22;
#line 667 "prog_rep.m"
              MR_Word ll_backend__prog_rep__ElseBytes_23;
#line 667 "prog_rep.m"
              MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_174_174;
#line 667 "prog_rep.m"
              MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_175_175;
#line 667 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_177_177;
#line 667 "prog_rep.m"
              MR_Integer ll_backend__prog_rep__V_178_178;
#line 667 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_181_181;
#line 667 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_182_182;

#line 668 "prog_rep.m"
              {
#line 668 "prog_rep.m"
                ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Cond_18, &ll_backend__prog_rep__CondBytes_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_174_174);
              }
#line 669 "prog_rep.m"
              {
#line 669 "prog_rep.m"
                ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Then_19, &ll_backend__prog_rep__ThenBytes_22, ll_backend__prog_rep__STATE_VARIABLE_StringTable_174_174, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_175_175);
              }
#line 670 "prog_rep.m"
              {
#line 670 "prog_rep.m"
                ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Else_20, &ll_backend__prog_rep__ElseBytes_23, ll_backend__prog_rep__STATE_VARIABLE_StringTable_175_175, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
              }
#line 5603 "ll_backend.prog_rep.c"
              ll_backend__prog_rep__TypeCtorInfo_236_236 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 671 "prog_rep.m"
              {
#line 671 "prog_rep.m"
                ll_backend__prog_rep__V_178_178 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 3);
              }
#line 671 "prog_rep.m"
              {
#line 671 "prog_rep.m"
                ll_backend__prog_rep__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_177_177, 0) = ((MR_Box) (ll_backend__prog_rep__V_178_178));
#line 671 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "prog_rep.m"
              }
#line 672 "prog_rep.m"
              {
#line 672 "prog_rep.m"
                ll_backend__prog_rep__V_182_182 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_236_236, ll_backend__prog_rep__ThenBytes_22, ll_backend__prog_rep__ElseBytes_23);
              }
#line 672 "prog_rep.m"
              {
#line 672 "prog_rep.m"
                ll_backend__prog_rep__V_181_181 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_236_236, ll_backend__prog_rep__CondBytes_21, ll_backend__prog_rep__V_182_182);
              }
#line 671 "prog_rep.m"
              {
#line 671 "prog_rep.m"
                ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_236_236, ll_backend__prog_rep__V_177_177, ll_backend__prog_rep__V_181_181);
              }
#line 667 "prog_rep.m"
            }
#line 656 "prog_rep.m"
            break;
#line 656 "prog_rep.m"
          case (MR_Integer) 1:
#line 663 "prog_rep.m"
            {
#line 663 "prog_rep.m"
              MR_Word ll_backend__prog_rep__SubGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 663 "prog_rep.m"
              MR_Word ll_backend__prog_rep__SubGoalBytes_17;
#line 663 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_184_184;
#line 663 "prog_rep.m"
              MR_Integer ll_backend__prog_rep__V_185_185;

#line 664 "prog_rep.m"
              {
#line 664 "prog_rep.m"
                ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__SubGoal_16, &ll_backend__prog_rep__SubGoalBytes_17, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
              }
#line 665 "prog_rep.m"
              {
#line 665 "prog_rep.m"
                ll_backend__prog_rep__V_185_185 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 4);
              }
#line 665 "prog_rep.m"
              {
#line 665 "prog_rep.m"
                ll_backend__prog_rep__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_184_184, 0) = ((MR_Box) (ll_backend__prog_rep__V_185_185));
#line 665 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "prog_rep.m"
              }
#line 665 "prog_rep.m"
              {
#line 665 "prog_rep.m"
                ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__V_184_184, ll_backend__prog_rep__SubGoalBytes_17);
              }
#line 663 "prog_rep.m"
            }
#line 656 "prog_rep.m"
            break;
#line 656 "prog_rep.m"
          case (MR_Integer) 2:
#line 781 "prog_rep.m"
            {
#line 781 "prog_rep.m"
              MR_Word ll_backend__prog_rep__TypeCtorInfo_246_246;
#line 781 "prog_rep.m"
              MR_Word ll_backend__prog_rep__MaybeCut_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 781 "prog_rep.m"
              MR_Integer ll_backend__prog_rep__MaybeCutByte_69;
#line 781 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_74_74;
#line 781 "prog_rep.m"
              MR_Integer ll_backend__prog_rep__V_75_75;
#line 781 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_78_78;
#line 781 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_79_79;
#line 781 "prog_rep.m"
              MR_Word ll_backend__prog_rep__SubGoal_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 781 "prog_rep.m"
              MR_Word ll_backend__prog_rep__SubGoalBytes_218;

#line 782 "prog_rep.m"
              {
#line 782 "prog_rep.m"
                mdbcomp__program_representation__cut_byte_2_p_0(ll_backend__prog_rep__MaybeCut_68, &ll_backend__prog_rep__MaybeCutByte_69);
              }
#line 783 "prog_rep.m"
              {
#line 783 "prog_rep.m"
                ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__SubGoal_217, &ll_backend__prog_rep__SubGoalBytes_218, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
              }
#line 5714 "ll_backend.prog_rep.c"
              ll_backend__prog_rep__TypeCtorInfo_246_246 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 784 "prog_rep.m"
              {
#line 784 "prog_rep.m"
                ll_backend__prog_rep__V_75_75 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 5);
              }
#line 784 "prog_rep.m"
              {
#line 784 "prog_rep.m"
                ll_backend__prog_rep__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_74_74, 0) = ((MR_Box) (ll_backend__prog_rep__V_75_75));
#line 784 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 784 "prog_rep.m"
              }
#line 784 "prog_rep.m"
              {
#line 784 "prog_rep.m"
                ll_backend__prog_rep__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_79_79, 0) = ((MR_Box) (ll_backend__prog_rep__MaybeCutByte_69));
#line 784 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 784 "prog_rep.m"
              }
#line 784 "prog_rep.m"
              {
#line 784 "prog_rep.m"
                ll_backend__prog_rep__V_78_78 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_246_246, ll_backend__prog_rep__V_79_79, ll_backend__prog_rep__SubGoalBytes_218);
              }
#line 784 "prog_rep.m"
              {
#line 784 "prog_rep.m"
                ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_246_246, ll_backend__prog_rep__V_74_74, ll_backend__prog_rep__V_78_78);
              }
#line 781 "prog_rep.m"
            }
#line 656 "prog_rep.m"
            break;
#line 656 "prog_rep.m"
          case (MR_Integer) 3:
#line 674 "prog_rep.m"
            {
#line 674 "prog_rep.m"
              MR_Word ll_backend__prog_rep__TypeCtorInfo_237_237;
#line 674 "prog_rep.m"
              MR_String ll_backend__prog_rep__FileName_24 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 674 "prog_rep.m"
              MR_Integer ll_backend__prog_rep__Line_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 674 "prog_rep.m"
              MR_Word ll_backend__prog_rep__BoundVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 674 "prog_rep.m"
              MR_Word ll_backend__prog_rep__AtomicGoalRep_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 674 "prog_rep.m"
              MR_Word ll_backend__prog_rep__FileNameBytes_28;
#line 674 "prog_rep.m"
              MR_Word ll_backend__prog_rep__AtomicBytes_29;
#line 674 "prog_rep.m"
              MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 674 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_96_96;
#line 674 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_97_97;
#line 674 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_98_98;

#line 675 "prog_rep.m"
              {
#line 675 "prog_rep.m"
                ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__FileName_24, &ll_backend__prog_rep__FileNameBytes_28, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95);
              }
#line 5787 "ll_backend.prog_rep.c"
              ll_backend__prog_rep__TypeCtorInfo_237_237 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 676 "prog_rep.m"
              {
#line 676 "prog_rep.m"
                ll_backend__prog_rep__V_97_97 = ll_backend__prog_rep__encode_lineno_func_1_f_0(ll_backend__prog_rep__Line_25);
              }
#line 677 "prog_rep.m"
              {
#line 677 "prog_rep.m"
                ll_backend__prog_rep__V_98_98 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__BoundVars_26);
              }
#line 676 "prog_rep.m"
              {
#line 676 "prog_rep.m"
                ll_backend__prog_rep__V_96_96 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_97_97, ll_backend__prog_rep__V_98_98);
              }
#line 676 "prog_rep.m"
              {
#line 676 "prog_rep.m"
                ll_backend__prog_rep__AtomicBytes_29 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__FileNameBytes_28, ll_backend__prog_rep__V_96_96);
              }
#line 684 "prog_rep.m"
#line 684 "prog_rep.m"
              switch (MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) {
#line 684 "prog_rep.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 684 "prog_rep.m"
                case (MR_Integer) 0:
#line 684 "prog_rep.m"
                case (MR_Integer) 1:
#line 684 "prog_rep.m"
                case (MR_Integer) 2:
#line 689 "prog_rep.m"
                  {
#line 689 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__Var_44;
#line 689 "prog_rep.m"
                    MR_String ll_backend__prog_rep__ConsId_45;
#line 689 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__AtomicTypeByte_47;
#line 689 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__ArgsBytes_48;
#line 689 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__ConsIdBytes_50;
#line 689 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__VarBytes_51;
#line 689 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_161_161;
#line 689 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_163_163;
#line 689 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_164_164;
#line 689 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_165_165;

#line 699 "prog_rep.m"
#line 699 "prog_rep.m"
                    switch (MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) {
#line 699 "prog_rep.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 699 "prog_rep.m"
                      case (MR_Integer) 0:
#line 697 "prog_rep.m"
                        {
#line 697 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Args_46;

#line 692 "prog_rep.m"
                          ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
#line 692 "prog_rep.m"
                          ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 692 "prog_rep.m"
                          ll_backend__prog_rep__Args_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 693 "prog_rep.m"
                          {
#line 693 "prog_rep.m"
                            ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 6);
                          }
#line 698 "prog_rep.m"
                          {
#line 698 "prog_rep.m"
                            ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_46);
                          }
#line 697 "prog_rep.m"
                        }
#line 699 "prog_rep.m"
                        break;
#line 699 "prog_rep.m"
                      case (MR_Integer) 1:
#line 697 "prog_rep.m"
                        {
#line 697 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Args_249;

#line 695 "prog_rep.m"
                          ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
#line 695 "prog_rep.m"
                          ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 695 "prog_rep.m"
                          ll_backend__prog_rep__Args_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 696 "prog_rep.m"
                          {
#line 696 "prog_rep.m"
                            ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 7);
                          }
#line 698 "prog_rep.m"
                          {
#line 698 "prog_rep.m"
                            ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_249);
                          }
#line 697 "prog_rep.m"
                        }
#line 699 "prog_rep.m"
                        break;
#line 699 "prog_rep.m"
                      case (MR_Integer) 2:
#line 709 "prog_rep.m"
                        {
#line 709 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__MaybeArgs_248;

#line 701 "prog_rep.m"
                          ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
#line 701 "prog_rep.m"
                          ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 701 "prog_rep.m"
                          ll_backend__prog_rep__MaybeArgs_248 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 704 "prog_rep.m"
                          {
#line 704 "prog_rep.m"
                            ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 9);
                          }
#line 710 "prog_rep.m"
                          {
#line 710 "prog_rep.m"
                            ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__MaybeArgs_248);
                          }
#line 709 "prog_rep.m"
                        }
#line 699 "prog_rep.m"
                        break;
#line 699 "prog_rep.m"
                      case (MR_Integer) 3:
#line 709 "prog_rep.m"
                        {
#line 709 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__MaybeArgs_49;

#line 706 "prog_rep.m"
                          ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 706 "prog_rep.m"
                          ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 706 "prog_rep.m"
                          ll_backend__prog_rep__MaybeArgs_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));
#line 708 "prog_rep.m"
                          {
#line 708 "prog_rep.m"
                            ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 8);
                          }
#line 710 "prog_rep.m"
                          {
#line 710 "prog_rep.m"
                            ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__MaybeArgs_49);
                          }
#line 709 "prog_rep.m"
                        }
#line 699 "prog_rep.m"
                        break;
#line 699 "prog_rep.m"
                    }
#line 712 "prog_rep.m"
                    {
#line 712 "prog_rep.m"
                      ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__ConsId_45, &ll_backend__prog_rep__ConsIdBytes_50, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                    }
#line 713 "prog_rep.m"
                    {
#line 713 "prog_rep.m"
                      ll_backend__prog_rep__VarBytes_51 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var_44);
                    }
#line 714 "prog_rep.m"
                    {
#line 714 "prog_rep.m"
                      ll_backend__prog_rep__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "prog_rep.m"
                      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_161_161, 0) = ((MR_Box) (ll_backend__prog_rep__AtomicTypeByte_47));
#line 714 "prog_rep.m"
                      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "prog_rep.m"
                    }
#line 715 "prog_rep.m"
                    {
#line 715 "prog_rep.m"
                      ll_backend__prog_rep__V_165_165 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ArgsBytes_48, ll_backend__prog_rep__AtomicBytes_29);
                    }
#line 714 "prog_rep.m"
                    {
#line 714 "prog_rep.m"
                      ll_backend__prog_rep__V_164_164 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ConsIdBytes_50, ll_backend__prog_rep__V_165_165);
                    }
#line 714 "prog_rep.m"
                    {
#line 714 "prog_rep.m"
                      ll_backend__prog_rep__V_163_163 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__VarBytes_51, ll_backend__prog_rep__V_164_164);
                    }
#line 714 "prog_rep.m"
                    {
#line 714 "prog_rep.m"
                      ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_161_161, ll_backend__prog_rep__V_163_163);
                    }
#line 689 "prog_rep.m"
                  }
#line 684 "prog_rep.m"
                  break;
#line 684 "prog_rep.m"
                case (MR_Integer) 3:
#line 684 "prog_rep.m"
#line 684 "prog_rep.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)))) {
#line 684 "prog_rep.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 684 "prog_rep.m"
                    case (MR_Integer) 0:
#line 689 "prog_rep.m"
                      {
#line 689 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__Var_44;
#line 689 "prog_rep.m"
                        MR_String ll_backend__prog_rep__ConsId_45;
#line 689 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__AtomicTypeByte_47;
#line 689 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__ArgsBytes_48;
#line 689 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__ConsIdBytes_50;
#line 689 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__VarBytes_51;
#line 689 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_161_161;
#line 689 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_163_163;
#line 689 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_164_164;
#line 689 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_165_165;

#line 699 "prog_rep.m"
#line 699 "prog_rep.m"
                        switch (MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) {
#line 699 "prog_rep.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 699 "prog_rep.m"
                          case (MR_Integer) 0:
#line 697 "prog_rep.m"
                            {
#line 697 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__Args_46;

#line 692 "prog_rep.m"
                              ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
#line 692 "prog_rep.m"
                              ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 692 "prog_rep.m"
                              ll_backend__prog_rep__Args_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 693 "prog_rep.m"
                              {
#line 693 "prog_rep.m"
                                ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 6);
                              }
#line 698 "prog_rep.m"
                              {
#line 698 "prog_rep.m"
                                ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_46);
                              }
#line 697 "prog_rep.m"
                            }
#line 699 "prog_rep.m"
                            break;
#line 699 "prog_rep.m"
                          case (MR_Integer) 1:
#line 697 "prog_rep.m"
                            {
#line 697 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__Args_249;

#line 695 "prog_rep.m"
                              ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
#line 695 "prog_rep.m"
                              ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 695 "prog_rep.m"
                              ll_backend__prog_rep__Args_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 696 "prog_rep.m"
                              {
#line 696 "prog_rep.m"
                                ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 7);
                              }
#line 698 "prog_rep.m"
                              {
#line 698 "prog_rep.m"
                                ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_249);
                              }
#line 697 "prog_rep.m"
                            }
#line 699 "prog_rep.m"
                            break;
#line 699 "prog_rep.m"
                          case (MR_Integer) 2:
#line 709 "prog_rep.m"
                            {
#line 709 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__MaybeArgs_248;

#line 701 "prog_rep.m"
                              ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
#line 701 "prog_rep.m"
                              ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 701 "prog_rep.m"
                              ll_backend__prog_rep__MaybeArgs_248 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 704 "prog_rep.m"
                              {
#line 704 "prog_rep.m"
                                ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 9);
                              }
#line 710 "prog_rep.m"
                              {
#line 710 "prog_rep.m"
                                ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__MaybeArgs_248);
                              }
#line 709 "prog_rep.m"
                            }
#line 699 "prog_rep.m"
                            break;
#line 699 "prog_rep.m"
                          case (MR_Integer) 3:
#line 709 "prog_rep.m"
                            {
#line 709 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__MaybeArgs_49;

#line 706 "prog_rep.m"
                              ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 706 "prog_rep.m"
                              ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 706 "prog_rep.m"
                              ll_backend__prog_rep__MaybeArgs_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));
#line 708 "prog_rep.m"
                              {
#line 708 "prog_rep.m"
                                ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 8);
                              }
#line 710 "prog_rep.m"
                              {
#line 710 "prog_rep.m"
                                ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__MaybeArgs_49);
                              }
#line 709 "prog_rep.m"
                            }
#line 699 "prog_rep.m"
                            break;
#line 699 "prog_rep.m"
                        }
#line 712 "prog_rep.m"
                        {
#line 712 "prog_rep.m"
                          ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__ConsId_45, &ll_backend__prog_rep__ConsIdBytes_50, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                        }
#line 713 "prog_rep.m"
                        {
#line 713 "prog_rep.m"
                          ll_backend__prog_rep__VarBytes_51 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var_44);
                        }
#line 714 "prog_rep.m"
                        {
#line 714 "prog_rep.m"
                          ll_backend__prog_rep__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_161_161, 0) = ((MR_Box) (ll_backend__prog_rep__AtomicTypeByte_47));
#line 714 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "prog_rep.m"
                        }
#line 715 "prog_rep.m"
                        {
#line 715 "prog_rep.m"
                          ll_backend__prog_rep__V_165_165 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ArgsBytes_48, ll_backend__prog_rep__AtomicBytes_29);
                        }
#line 714 "prog_rep.m"
                        {
#line 714 "prog_rep.m"
                          ll_backend__prog_rep__V_164_164 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ConsIdBytes_50, ll_backend__prog_rep__V_165_165);
                        }
#line 714 "prog_rep.m"
                        {
#line 714 "prog_rep.m"
                          ll_backend__prog_rep__V_163_163 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__VarBytes_51, ll_backend__prog_rep__V_164_164);
                        }
#line 714 "prog_rep.m"
                        {
#line 714 "prog_rep.m"
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_161_161, ll_backend__prog_rep__V_163_163);
                        }
#line 689 "prog_rep.m"
                      }
#line 684 "prog_rep.m"
                      break;
#line 684 "prog_rep.m"
                    case (MR_Integer) 1:
#line 679 "prog_rep.m"
                      {
#line 679 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__Target_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 679 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__Source_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 679 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_166_166;
#line 679 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__V_167_167;
#line 679 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_170_170;
#line 679 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_171_171;
#line 679 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_172_172;
#line 679 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_173_173;

#line 680 "prog_rep.m"
                        {
#line 680 "prog_rep.m"
                          ll_backend__prog_rep__V_167_167 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 10);
                        }
#line 680 "prog_rep.m"
                        {
#line 680 "prog_rep.m"
                          ll_backend__prog_rep__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_166_166, 0) = ((MR_Box) (ll_backend__prog_rep__V_167_167));
#line 680 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_166_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 680 "prog_rep.m"
                        }
#line 681 "prog_rep.m"
                        {
#line 681 "prog_rep.m"
                          ll_backend__prog_rep__V_171_171 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Target_30);
                        }
#line 682 "prog_rep.m"
                        {
#line 682 "prog_rep.m"
                          ll_backend__prog_rep__V_173_173 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Source_31);
                        }
#line 682 "prog_rep.m"
                        {
#line 682 "prog_rep.m"
                          ll_backend__prog_rep__V_172_172 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_173_173, ll_backend__prog_rep__AtomicBytes_29);
                        }
#line 681 "prog_rep.m"
                        {
#line 681 "prog_rep.m"
                          ll_backend__prog_rep__V_170_170 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_171_171, ll_backend__prog_rep__V_172_172);
                        }
#line 680 "prog_rep.m"
                        {
#line 680 "prog_rep.m"
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_166_166, ll_backend__prog_rep__V_170_170);
                        }
#line 679 "prog_rep.m"
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 679 "prog_rep.m"
                      }
#line 684 "prog_rep.m"
                      break;
#line 684 "prog_rep.m"
                    case (MR_Integer) 2:
#line 744 "prog_rep.m"
                      {
#line 744 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_114_114;
#line 744 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__V_115_115;
#line 744 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_118_118;
#line 744 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_119_119;
#line 744 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_120_120;
#line 744 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_121_121;
#line 744 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__Target_213 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 744 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__Source_214 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));

#line 745 "prog_rep.m"
                        {
#line 745 "prog_rep.m"
                          ll_backend__prog_rep__V_115_115 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 11);
                        }
#line 745 "prog_rep.m"
                        {
#line 745 "prog_rep.m"
                          ll_backend__prog_rep__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_114_114, 0) = ((MR_Box) (ll_backend__prog_rep__V_115_115));
#line 745 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 745 "prog_rep.m"
                        }
#line 746 "prog_rep.m"
                        {
#line 746 "prog_rep.m"
                          ll_backend__prog_rep__V_119_119 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Target_213);
                        }
#line 747 "prog_rep.m"
                        {
#line 747 "prog_rep.m"
                          ll_backend__prog_rep__V_121_121 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Source_214);
                        }
#line 747 "prog_rep.m"
                        {
#line 747 "prog_rep.m"
                          ll_backend__prog_rep__V_120_120 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_121_121, ll_backend__prog_rep__AtomicBytes_29);
                        }
#line 746 "prog_rep.m"
                        {
#line 746 "prog_rep.m"
                          ll_backend__prog_rep__V_118_118 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_119_119, ll_backend__prog_rep__V_120_120);
                        }
#line 745 "prog_rep.m"
                        {
#line 745 "prog_rep.m"
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_114_114, ll_backend__prog_rep__V_118_118);
                        }
#line 744 "prog_rep.m"
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 744 "prog_rep.m"
                      }
#line 684 "prog_rep.m"
                      break;
#line 684 "prog_rep.m"
                    case (MR_Integer) 3:
#line 717 "prog_rep.m"
                      {
#line 717 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__Var1_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 717 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__Var2_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 717 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_148_148;
#line 717 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__V_149_149;
#line 717 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_152_152;
#line 717 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_153_153;
#line 717 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_154_154;
#line 717 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_155_155;

#line 718 "prog_rep.m"
                        {
#line 718 "prog_rep.m"
                          ll_backend__prog_rep__V_149_149 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 12);
                        }
#line 718 "prog_rep.m"
                        {
#line 718 "prog_rep.m"
                          ll_backend__prog_rep__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_148_148, 0) = ((MR_Box) (ll_backend__prog_rep__V_149_149));
#line 718 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "prog_rep.m"
                        }
#line 719 "prog_rep.m"
                        {
#line 719 "prog_rep.m"
                          ll_backend__prog_rep__V_153_153 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var1_52);
                        }
#line 720 "prog_rep.m"
                        {
#line 720 "prog_rep.m"
                          ll_backend__prog_rep__V_155_155 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var2_53);
                        }
#line 720 "prog_rep.m"
                        {
#line 720 "prog_rep.m"
                          ll_backend__prog_rep__V_154_154 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_155_155, ll_backend__prog_rep__AtomicBytes_29);
                        }
#line 719 "prog_rep.m"
                        {
#line 719 "prog_rep.m"
                          ll_backend__prog_rep__V_152_152 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_153_153, ll_backend__prog_rep__V_154_154);
                        }
#line 718 "prog_rep.m"
                        {
#line 718 "prog_rep.m"
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_148_148, ll_backend__prog_rep__V_152_152);
                        }
#line 717 "prog_rep.m"
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 717 "prog_rep.m"
                      }
#line 684 "prog_rep.m"
                      break;
#line 684 "prog_rep.m"
                    case (MR_Integer) 4:
#line 767 "prog_rep.m"
                      {
#line 767 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_99_99;
#line 767 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__V_100_100;
#line 767 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_103_103;
#line 767 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_104_104;
#line 767 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__Args_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));

#line 768 "prog_rep.m"
                        {
#line 768 "prog_rep.m"
                          ll_backend__prog_rep__V_100_100 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 13);
                        }
#line 768 "prog_rep.m"
                        {
#line 768 "prog_rep.m"
                          ll_backend__prog_rep__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_99_99, 0) = ((MR_Box) (ll_backend__prog_rep__V_100_100));
#line 768 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "prog_rep.m"
                        }
#line 769 "prog_rep.m"
                        {
#line 769 "prog_rep.m"
                          ll_backend__prog_rep__V_104_104 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_216);
                        }
#line 769 "prog_rep.m"
                        {
#line 769 "prog_rep.m"
                          ll_backend__prog_rep__V_103_103 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_104_104, ll_backend__prog_rep__AtomicBytes_29);
                        }
#line 768 "prog_rep.m"
                        {
#line 768 "prog_rep.m"
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_99_99, ll_backend__prog_rep__V_103_103);
                        }
#line 767 "prog_rep.m"
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 767 "prog_rep.m"
                      }
#line 684 "prog_rep.m"
                      break;
#line 684 "prog_rep.m"
                    case (MR_Integer) 5:
#line 723 "prog_rep.m"
                      {
#line 723 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__PredVar_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 723 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_140_140;
#line 723 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__V_141_141;
#line 723 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_144_144;
#line 723 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_145_145;
#line 723 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_146_146;
#line 723 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_147_147;
#line 723 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__Args_209 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));

#line 724 "prog_rep.m"
                        {
#line 724 "prog_rep.m"
                          ll_backend__prog_rep__V_141_141 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 14);
                        }
#line 724 "prog_rep.m"
                        {
#line 724 "prog_rep.m"
                          ll_backend__prog_rep__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_140_140, 0) = ((MR_Box) (ll_backend__prog_rep__V_141_141));
#line 724 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 724 "prog_rep.m"
                        }
#line 725 "prog_rep.m"
                        {
#line 725 "prog_rep.m"
                          ll_backend__prog_rep__V_145_145 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__PredVar_54);
                        }
#line 726 "prog_rep.m"
                        {
#line 726 "prog_rep.m"
                          ll_backend__prog_rep__V_147_147 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_209);
                        }
#line 726 "prog_rep.m"
                        {
#line 726 "prog_rep.m"
                          ll_backend__prog_rep__V_146_146 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_147_147, ll_backend__prog_rep__AtomicBytes_29);
                        }
#line 725 "prog_rep.m"
                        {
#line 725 "prog_rep.m"
                          ll_backend__prog_rep__V_144_144 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__V_146_146);
                        }
#line 724 "prog_rep.m"
                        {
#line 724 "prog_rep.m"
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_140_140, ll_backend__prog_rep__V_144_144);
                        }
#line 723 "prog_rep.m"
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 723 "prog_rep.m"
                      }
#line 684 "prog_rep.m"
                      break;
#line 684 "prog_rep.m"
                    case (MR_Integer) 6:
#line 729 "prog_rep.m"
                      {
#line 729 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__MethodNum_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 729 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_130_130;
#line 729 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__V_131_131;
#line 729 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_134_134;
#line 729 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_135_135;
#line 729 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_136_136;
#line 729 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_137_137;
#line 729 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_138_138;
#line 729 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_139_139;
#line 729 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__Var_210 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 729 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__Args_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));

#line 730 "prog_rep.m"
                        {
#line 730 "prog_rep.m"
                          ll_backend__prog_rep__V_131_131 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 15);
                        }
#line 730 "prog_rep.m"
                        {
#line 730 "prog_rep.m"
                          ll_backend__prog_rep__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_130_130, 0) = ((MR_Box) (ll_backend__prog_rep__V_131_131));
#line 730 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "prog_rep.m"
                        }
#line 731 "prog_rep.m"
                        {
#line 731 "prog_rep.m"
                          ll_backend__prog_rep__V_135_135 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var_210);
                        }
#line 732 "prog_rep.m"
                        {
#line 732 "prog_rep.m"
                          ll_backend__prog_rep__V_137_137 = ll_backend__prog_rep__encode_method_num_func_1_f_0(ll_backend__prog_rep__MethodNum_55);
                        }
#line 733 "prog_rep.m"
                        {
#line 733 "prog_rep.m"
                          ll_backend__prog_rep__V_139_139 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_211);
                        }
#line 733 "prog_rep.m"
                        {
#line 733 "prog_rep.m"
                          ll_backend__prog_rep__V_138_138 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_139_139, ll_backend__prog_rep__AtomicBytes_29);
                        }
#line 732 "prog_rep.m"
                        {
#line 732 "prog_rep.m"
                          ll_backend__prog_rep__V_136_136 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_137_137, ll_backend__prog_rep__V_138_138);
                        }
#line 731 "prog_rep.m"
                        {
#line 731 "prog_rep.m"
                          ll_backend__prog_rep__V_134_134 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_135_135, ll_backend__prog_rep__V_136_136);
                        }
#line 730 "prog_rep.m"
                        {
#line 730 "prog_rep.m"
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_130_130, ll_backend__prog_rep__V_134_134);
                        }
#line 729 "prog_rep.m"
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 729 "prog_rep.m"
                      }
#line 684 "prog_rep.m"
                      break;
#line 684 "prog_rep.m"
                    case (MR_Integer) 7:
#line 756 "prog_rep.m"
                      {
#line 756 "prog_rep.m"
                        MR_String ll_backend__prog_rep__ModuleName_250 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 756 "prog_rep.m"
                        MR_String ll_backend__prog_rep__PredName_251 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__ModuleNameBytes_253;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__PredNameBytes_254;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_255;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_256_256;
#line 756 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__V_257_257;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_259_259;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_260_260;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_261_261;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_262_262;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__Args_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));

#line 757 "prog_rep.m"
                        {
#line 757 "prog_rep.m"
                          ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__ModuleName_250, &ll_backend__prog_rep__ModuleNameBytes_253, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_255);
                        }
#line 759 "prog_rep.m"
                        {
#line 759 "prog_rep.m"
                          ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__PredName_251, &ll_backend__prog_rep__PredNameBytes_254, ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_255, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                        }
#line 761 "prog_rep.m"
                        {
#line 761 "prog_rep.m"
                          ll_backend__prog_rep__V_257_257 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 16);
                        }
#line 761 "prog_rep.m"
                        {
#line 761 "prog_rep.m"
                          ll_backend__prog_rep__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_256_256, 0) = ((MR_Box) (ll_backend__prog_rep__V_257_257));
#line 761 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_256_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "prog_rep.m"
                        }
#line 764 "prog_rep.m"
                        {
#line 764 "prog_rep.m"
                          ll_backend__prog_rep__V_262_262 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_263);
                        }
#line 764 "prog_rep.m"
                        {
#line 764 "prog_rep.m"
                          ll_backend__prog_rep__V_261_261 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_262_262, ll_backend__prog_rep__AtomicBytes_29);
                        }
#line 763 "prog_rep.m"
                        {
#line 763 "prog_rep.m"
                          ll_backend__prog_rep__V_260_260 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__PredNameBytes_254, ll_backend__prog_rep__V_261_261);
                        }
#line 762 "prog_rep.m"
                        {
#line 762 "prog_rep.m"
                          ll_backend__prog_rep__V_259_259 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ModuleNameBytes_253, ll_backend__prog_rep__V_260_260);
                        }
#line 761 "prog_rep.m"
                        {
#line 761 "prog_rep.m"
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_256_256, ll_backend__prog_rep__V_259_259);
                        }
#line 756 "prog_rep.m"
                      }
#line 684 "prog_rep.m"
                      break;
#line 684 "prog_rep.m"
                    case (MR_Integer) 8:
#line 756 "prog_rep.m"
                      {
#line 756 "prog_rep.m"
                        MR_String ll_backend__prog_rep__ModuleName_58 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 756 "prog_rep.m"
                        MR_String ll_backend__prog_rep__PredName_59 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__ModuleNameBytes_61;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__PredNameBytes_62;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_105;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_107_107;
#line 756 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__V_108_108;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_110_110;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_111_111;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_112_112;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_113_113;
#line 756 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__Args_215 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));

#line 757 "prog_rep.m"
                        {
#line 757 "prog_rep.m"
                          ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__ModuleName_58, &ll_backend__prog_rep__ModuleNameBytes_61, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_105);
                        }
#line 759 "prog_rep.m"
                        {
#line 759 "prog_rep.m"
                          ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__PredName_59, &ll_backend__prog_rep__PredNameBytes_62, ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_105, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                        }
#line 761 "prog_rep.m"
                        {
#line 761 "prog_rep.m"
                          ll_backend__prog_rep__V_108_108 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 17);
                        }
#line 761 "prog_rep.m"
                        {
#line 761 "prog_rep.m"
                          ll_backend__prog_rep__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_107_107, 0) = ((MR_Box) (ll_backend__prog_rep__V_108_108));
#line 761 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "prog_rep.m"
                        }
#line 764 "prog_rep.m"
                        {
#line 764 "prog_rep.m"
                          ll_backend__prog_rep__V_113_113 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_215);
                        }
#line 764 "prog_rep.m"
                        {
#line 764 "prog_rep.m"
                          ll_backend__prog_rep__V_112_112 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_113_113, ll_backend__prog_rep__AtomicBytes_29);
                        }
#line 763 "prog_rep.m"
                        {
#line 763 "prog_rep.m"
                          ll_backend__prog_rep__V_111_111 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__PredNameBytes_62, ll_backend__prog_rep__V_112_112);
                        }
#line 762 "prog_rep.m"
                        {
#line 762 "prog_rep.m"
                          ll_backend__prog_rep__V_110_110 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ModuleNameBytes_61, ll_backend__prog_rep__V_111_111);
                        }
#line 761 "prog_rep.m"
                        {
#line 761 "prog_rep.m"
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_107_107, ll_backend__prog_rep__V_110_110);
                        }
#line 756 "prog_rep.m"
                      }
#line 684 "prog_rep.m"
                      break;
#line 684 "prog_rep.m"
                    case (MR_Integer) 9:
#line 736 "prog_rep.m"
                      {
#line 736 "prog_rep.m"
                        MR_String ll_backend__prog_rep__EventName_56 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 736 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__EventNameBytes_57;
#line 736 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_123_123;
#line 736 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__V_124_124;
#line 736 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_127_127;
#line 736 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_128_128;
#line 736 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_129_129;
#line 736 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__Args_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));

#line 737 "prog_rep.m"
                        {
#line 737 "prog_rep.m"
                          ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__EventName_56, &ll_backend__prog_rep__EventNameBytes_57, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                        }
#line 739 "prog_rep.m"
                        {
#line 739 "prog_rep.m"
                          ll_backend__prog_rep__V_124_124 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 18);
                        }
#line 739 "prog_rep.m"
                        {
#line 739 "prog_rep.m"
                          ll_backend__prog_rep__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_123_123, 0) = ((MR_Box) (ll_backend__prog_rep__V_124_124));
#line 739 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 739 "prog_rep.m"
                        }
#line 741 "prog_rep.m"
                        {
#line 741 "prog_rep.m"
                          ll_backend__prog_rep__V_129_129 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_212);
                        }
#line 741 "prog_rep.m"
                        {
#line 741 "prog_rep.m"
                          ll_backend__prog_rep__V_128_128 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_129_129, ll_backend__prog_rep__AtomicBytes_29);
                        }
#line 740 "prog_rep.m"
                        {
#line 740 "prog_rep.m"
                          ll_backend__prog_rep__V_127_127 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__EventNameBytes_57, ll_backend__prog_rep__V_128_128);
                        }
#line 739 "prog_rep.m"
                        {
#line 739 "prog_rep.m"
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_123_123, ll_backend__prog_rep__V_127_127);
                        }
#line 736 "prog_rep.m"
                      }
#line 684 "prog_rep.m"
                      break;
#line 684 "prog_rep.m"
                  }
#line 684 "prog_rep.m"
                  break;
#line 684 "prog_rep.m"
              }
#line 674 "prog_rep.m"
            }
#line 656 "prog_rep.m"
            break;
#line 656 "prog_rep.m"
        }
#line 656 "prog_rep.m"
        break;
#line 656 "prog_rep.m"
    }
#line 787 "prog_rep.m"
    {
#line 787 "prog_rep.m"
      mdbcomp__program_representation__determinism_representation_2_p_0(ll_backend__prog_rep__Detism_8, &ll_backend__prog_rep__DetismByte_70);
    }
#line 788 "prog_rep.m"
    {
#line 788 "prog_rep.m"
      ll_backend__prog_rep__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_206_206, 0) = ((MR_Box) (ll_backend__prog_rep__DetismByte_70));
#line 788 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 788 "prog_rep.m"
    }
#line 788 "prog_rep.m"
    {
#line 788 "prog_rep.m"
      *ll_backend__prog_rep__Bytes_10 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__ExprBytes_14, ll_backend__prog_rep__V_206_206);
    }
#line 649 "prog_rep.m"
  }
#line 646 "prog_rep.m"
}

#line 635 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__detism_to_detism_rep_2_p_0(
#line 635 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
#line 635 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__2_2)
#line 635 "prog_rep.m"
{
#line 637 "prog_rep.m"
  {
#line 637 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 637 "prog_rep.m"
    *ll_backend__prog_rep__HeadVar__2_2 = ((&ll_backend__prog_rep_vector_common_9[0 + ll_backend__prog_rep__HeadVar__1_1]))->ll_backend__prog_rep__vector_common_type_9_0__vct_9_f_0;
#line 637 "prog_rep.m"
  }
#line 635 "prog_rep.m"
}

#line 623 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(
#line 623 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ConsId_3,
#line 623 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__2_2)
#line 623 "prog_rep.m"
{
#line 625 "prog_rep.m"
  {
#line 625 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 625 "prog_rep.m"
    MR_String ll_backend__prog_rep__ConsIdName_4;
#line 625 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Arity_5;
#line 625 "prog_rep.m"
    MR_Word ll_backend__prog_rep__MaybeArity_6;

#line 862 "prog_rep.m"
#line 862 "prog_rep.m"
    switch (MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) {
#line 862 "prog_rep.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 862 "prog_rep.m"
      case (MR_Integer) 0:
#line 876 "prog_rep.m"
        ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044typeclass_info_cell_constructor";
#line 862 "prog_rep.m"
        break;
#line 862 "prog_rep.m"
      case (MR_Integer) 1:
#line 874 "prog_rep.m"
        ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044type_info_cell_constructor";
#line 862 "prog_rep.m"
        break;
#line 862 "prog_rep.m"
      case (MR_Integer) 2:
#line 880 "prog_rep.m"
        ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044tabling_info_const";
#line 862 "prog_rep.m"
        break;
#line 862 "prog_rep.m"
      case (MR_Integer) 3:
#line 862 "prog_rep.m"
#line 862 "prog_rep.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) {
#line 862 "prog_rep.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 862 "prog_rep.m"
          case (MR_Integer) 0:
#line 881 "prog_rep.m"
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044table_io_entry_desc";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 1:
#line 882 "prog_rep.m"
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044deep_profiling_proc_layout";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 2:
#line 862 "prog_rep.m"
            {
#line 862 "prog_rep.m"
              MR_Word ll_backend__prog_rep__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));
#line 862 "prog_rep.m"
              MR_Integer ll_backend__prog_rep__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 2)));
#line 862 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 3)));

#line 886 "prog_rep.m"
              if (((MR_tag((MR_Word) ll_backend__prog_rep__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 887 "prog_rep.m"
                {
#line 887 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__SymName_7, (MR_Integer) 0)));

#line 887 "prog_rep.m"
                  ll_backend__prog_rep__ConsIdName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__SymName_7, (MR_Integer) 1)));
#line 887 "prog_rep.m"
                }
#line 886 "prog_rep.m"
              else
#line 886 "prog_rep.m"
                ll_backend__prog_rep__ConsIdName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__SymName_7, (MR_Integer) 0)));
#line 862 "prog_rep.m"
            }
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 3:
#line 864 "prog_rep.m"
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "{}";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 4:
#line 870 "prog_rep.m"
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044closure_cons";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 5:
#line 865 "prog_rep.m"
            {
#line 865 "prog_rep.m"
              MR_Integer ll_backend__prog_rep__Int_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

#line 865 "prog_rep.m"
              {
#line 865 "prog_rep.m"
                ll_backend__prog_rep__ConsIdName_4 = mercury__string__int_to_string_1_f_0(ll_backend__prog_rep__Int_11);
              }
#line 865 "prog_rep.m"
            }
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 6:
#line 866 "prog_rep.m"
            {
#line 866 "prog_rep.m"
              MR_Float ll_backend__prog_rep__Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

#line 866 "prog_rep.m"
              {
#line 866 "prog_rep.m"
                ll_backend__prog_rep__ConsIdName_4 = mercury__string__float_to_string_1_f_0(ll_backend__prog_rep__Float_12);
              }
#line 866 "prog_rep.m"
            }
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 7:
#line 867 "prog_rep.m"
            {
#line 867 "prog_rep.m"
              MR_Char ll_backend__prog_rep__Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

#line 867 "prog_rep.m"
              {
#line 867 "prog_rep.m"
                ll_backend__prog_rep__ConsIdName_4 = mercury__string__char_to_string_1_f_0(ll_backend__prog_rep__Char_13);
              }
#line 867 "prog_rep.m"
            }
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 8:
#line 868 "prog_rep.m"
            {
#line 868 "prog_rep.m"
              MR_String ll_backend__prog_rep__String_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));
#line 868 "prog_rep.m"
              MR_String ll_backend__prog_rep__V_16_16;

#line 868 "prog_rep.m"
              {
#line 868 "prog_rep.m"
                ll_backend__prog_rep__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__prog_rep__String_14, (MR_String) "\"");
              }
#line 868 "prog_rep.m"
              {
#line 868 "prog_rep.m"
                ll_backend__prog_rep__ConsIdName_4 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__prog_rep__V_16_16);
              }
#line 868 "prog_rep.m"
            }
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 9:
#line 869 "prog_rep.m"
            {
#line 869 "prog_rep.m"
              MR_String ll_backend__prog_rep__Name_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

#line 869 "prog_rep.m"
              {
#line 869 "prog_rep.m"
                ll_backend__prog_rep__ConsIdName_4 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__prog_rep__Name_18);
              }
#line 869 "prog_rep.m"
            }
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 10:
#line 871 "prog_rep.m"
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044type_ctor_info_const";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 11:
#line 873 "prog_rep.m"
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044base_typeclass_info_const";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 12:
#line 877 "prog_rep.m"
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044type_info_const";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 13:
#line 878 "prog_rep.m"
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044typeclass_info_const";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
          case (MR_Integer) 14:
#line 879 "prog_rep.m"
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044ground_term_const";
#line 862 "prog_rep.m"
            break;
#line 862 "prog_rep.m"
        }
#line 862 "prog_rep.m"
        break;
#line 862 "prog_rep.m"
    }
#line 627 "prog_rep.m"
    {
#line 627 "prog_rep.m"
      ll_backend__prog_rep__MaybeArity_6 = parse_tree__prog_util__cons_id_maybe_arity_1_f_0(ll_backend__prog_rep__ConsId_3);
    }
#line 630 "prog_rep.m"
    if ((ll_backend__prog_rep__MaybeArity_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 632 "prog_rep.m"
      ll_backend__prog_rep__Arity_5 = (MR_Integer) 0;
#line 630 "prog_rep.m"
    else
#line 629 "prog_rep.m"
      ll_backend__prog_rep__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__MaybeArity_6, (MR_Integer) 0)));
#line 625 "prog_rep.m"
    {
#line 625 "prog_rep.m"
      MR_Word base;
#line 625 "prog_rep.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 625 "prog_rep.m"
      *ll_backend__prog_rep__HeadVar__2_2 = base;
#line 625 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep__ConsIdName_4));
#line 625 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep__Arity_5));
#line 625 "prog_rep.m"
    }
#line 625 "prog_rep.m"
  }
#line 623 "prog_rep.m"
}

#line 621 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0_1(
#line 621 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 621 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 621 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2)
#line 621 "prog_rep.m"
{
#line 621 "prog_rep.m"
  {
#line 621 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 621 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_HeadVar__2_2;

#line 621 "prog_rep.m"
    {
#line 621 "prog_rep.m"
      ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv0_HeadVar__2_2);
    }
#line 621 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_HeadVar__2_2));
#line 621 "prog_rep.m"
  }
#line 621 "prog_rep.m"
}

#line 614 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0(
#line 614 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_5,
#line 614 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap_6,
#line 614 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 614 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4)
#line 614 "prog_rep.m"
{
#line 618 "prog_rep.m"
  {
#line 618 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 618 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FirstConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
#line 618 "prog_rep.m"
    MR_Word ll_backend__prog_rep__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
#line 618 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 2)));
#line 618 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FirstConsIdRep_10;
#line 618 "prog_rep.m"
    MR_Word ll_backend__prog_rep__OtherConsIdsRep_11;
#line 618 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalRep_12;

#line 619 "prog_rep.m"
    {
#line 619 "prog_rep.m"
      ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap_6, ll_backend__prog_rep__Goal_9, &ll_backend__prog_rep__GoalRep_12);
    }
#line 620 "prog_rep.m"
    {
#line 620 "prog_rep.m"
      ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(ll_backend__prog_rep__FirstConsId_7, &ll_backend__prog_rep__FirstConsIdRep_10);
    }
#line 621 "prog_rep.m"
    {
#line 621 "prog_rep.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[8], ll_backend__prog_rep__OtherConsIds_8, &ll_backend__prog_rep__OtherConsIdsRep_11);
    }
#line 618 "prog_rep.m"
    {
#line 618 "prog_rep.m"
      MR_Word base;
#line 618 "prog_rep.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 618 "prog_rep.m"
      *ll_backend__prog_rep__HeadVar__4_4 = base;
#line 618 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep__FirstConsIdRep_10));
#line 618 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep__OtherConsIdsRep_11));
#line 618 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__prog_rep__GoalRep_12));
#line 618 "prog_rep.m"
    }
#line 618 "prog_rep.m"
  }
#line 614 "prog_rep.m"
}

#line 603 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__conj_to_conj_rep_4_p_0(
#line 603 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_1,
#line 603 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap0_2,
#line 603 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 603 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4)
#line 603 "prog_rep.m"
{
#line 606 "prog_rep.m"
  {
#line 606 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 606 "prog_rep.m"
    if ((ll_backend__prog_rep__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 606 "prog_rep.m"
      *ll_backend__prog_rep__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "prog_rep.m"
    else
#line 607 "prog_rep.m"
      {
#line 607 "prog_rep.m"
        MR_Word ll_backend__prog_rep__Conj_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
#line 607 "prog_rep.m"
        MR_Word ll_backend__prog_rep__Conjs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
#line 607 "prog_rep.m"
        MR_Word ll_backend__prog_rep__ConjRep_11;
#line 607 "prog_rep.m"
        MR_Word ll_backend__prog_rep__ConjReps_12;
#line 607 "prog_rep.m"
        MR_Word ll_backend__prog_rep__GoalInfo_13;
#line 607 "prog_rep.m"
        MR_Word ll_backend__prog_rep__InstmapDelta_14;
#line 607 "prog_rep.m"
        MR_Word ll_backend__prog_rep__Instmap1_15;
#line 609 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_16_16;

#line 608 "prog_rep.m"
        {
#line 608 "prog_rep.m"
          ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_1, ll_backend__prog_rep__Instmap0_2, ll_backend__prog_rep__Conj_9, &ll_backend__prog_rep__ConjRep_11);
        }
#line 609 "prog_rep.m"
        ll_backend__prog_rep__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Conj_9, (MR_Integer) 0)));
#line 609 "prog_rep.m"
        ll_backend__prog_rep__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Conj_9, (MR_Integer) 1)));
#line 610 "prog_rep.m"
        {
#line 610 "prog_rep.m"
          ll_backend__prog_rep__InstmapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__prog_rep__GoalInfo_13);
        }
#line 611 "prog_rep.m"
        {
#line 611 "prog_rep.m"
          hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__prog_rep__Instmap0_2, ll_backend__prog_rep__InstmapDelta_14, &ll_backend__prog_rep__Instmap1_15);
        }
#line 612 "prog_rep.m"
        {
#line 612 "prog_rep.m"
          ll_backend__prog_rep__conj_to_conj_rep_4_p_0(ll_backend__prog_rep__Info_1, ll_backend__prog_rep__Instmap1_15, ll_backend__prog_rep__Conjs_10, &ll_backend__prog_rep__ConjReps_12);
        }
#line 607 "prog_rep.m"
        {
#line 607 "prog_rep.m"
          MR_Word base;
#line 607 "prog_rep.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 607 "prog_rep.m"
          *ll_backend__prog_rep__HeadVar__4_4 = base;
#line 607 "prog_rep.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep__ConjRep_11));
#line 607 "prog_rep.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__prog_rep__ConjReps_12));
#line 607 "prog_rep.m"
        }
#line 607 "prog_rep.m"
      }
#line 606 "prog_rep.m"
  }
#line 603 "prog_rep.m"
}

#line 377 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarNumRep_13,
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarTypes_14,
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Var_15,
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__4_4,
#line 377 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_26,
#line 377 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_27,
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_28,
#line 377 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_29,
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_30,
#line 377 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_31,
#line 377 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_32,
#line 377 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_33)
#line 377 "prog_rep.m"
{
#line 384 "prog_rep.m"
  {
#line 384 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 384 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_43_43;
#line 384 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__VarNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__4_4, (MR_Integer) 0)));
#line 384 "prog_rep.m"
    MR_String ll_backend__prog_rep__VarName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__4_4, (MR_Integer) 1)));
#line 384 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Type_22;
#line 384 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarBytes_23;
#line 384 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarNameBytes_24;
#line 384 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeBytes_25;
#line 384 "prog_rep.m"
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_37_37;
#line 384 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_41_41;
#line 384 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_42_42;
#line 384 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Index_49;
#line 384 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Index_59;

#line 385 "prog_rep.m"
    *ll_backend__prog_rep__STATE_VARIABLE_NumVars_27 = (ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_26 + (MR_Integer) 1);
#line 386 "prog_rep.m"
    {
#line 386 "prog_rep.m"
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__prog_rep__VarTypes_14, ll_backend__prog_rep__Var_15, &ll_backend__prog_rep__Type_22);
    }
#line 390 "prog_rep.m"
#line 390 "prog_rep.m"
    switch (ll_backend__prog_rep__VarNumRep_13) {
#line 390 "prog_rep.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 390 "prog_rep.m"
      case (MR_Integer) 0:
#line 388 "prog_rep.m"
        {
#line 389 "prog_rep.m"
          {
#line 389 "prog_rep.m"
            ll_backend__prog_rep__VarBytes_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_23, 0) = ((MR_Box) (ll_backend__prog_rep__VarNum_16));
#line 389 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "prog_rep.m"
          }
#line 388 "prog_rep.m"
        }
#line 390 "prog_rep.m"
        break;
#line 390 "prog_rep.m"
      case (MR_Integer) 1:
#line 392 "prog_rep.m"
        {
#line 392 "prog_rep.m"
          mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__VarNum_16, &ll_backend__prog_rep__VarBytes_23);
        }
#line 390 "prog_rep.m"
        break;
#line 390 "prog_rep.m"
      case (MR_Integer) 2:
#line 395 "prog_rep.m"
        {
#line 395 "prog_rep.m"
          mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__VarNum_16, &ll_backend__prog_rep__VarBytes_23);
        }
#line 390 "prog_rep.m"
        break;
#line 390 "prog_rep.m"
    }
#line 906 "prog_rep.m"
    {
#line 906 "prog_rep.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__VarName_17, &ll_backend__prog_rep__Index_49, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_30, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_37_37);
    }
#line 907 "prog_rep.m"
    {
#line 907 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_49, &ll_backend__prog_rep__VarNameBytes_24);
    }
#line 914 "prog_rep.m"
    {
#line 914 "prog_rep.m"
      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(ll_backend__prog_rep__Type_22, &ll_backend__prog_rep__Index_59, ll_backend__prog_rep__STATE_VARIABLE_StringTable_37_37, ll_backend__prog_rep__STATE_VARIABLE_StringTable_31, ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_32, ll_backend__prog_rep__STATE_VARIABLE_TypeTable_33);
    }
#line 915 "prog_rep.m"
    {
#line 915 "prog_rep.m"
      mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__Index_59, &ll_backend__prog_rep__TypeBytes_25);
    }
#line 7459 "ll_backend.prog_rep.c"
    ll_backend__prog_rep__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 400 "prog_rep.m"
    {
#line 400 "prog_rep.m"
      ll_backend__prog_rep__V_42_42 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_43_43, ll_backend__prog_rep__TypeBytes_25, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_28);
    }
#line 399 "prog_rep.m"
    {
#line 399 "prog_rep.m"
      ll_backend__prog_rep__V_41_41 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_43_43, ll_backend__prog_rep__VarNameBytes_24, ll_backend__prog_rep__V_42_42);
    }
#line 399 "prog_rep.m"
    {
#line 399 "prog_rep.m"
      *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_29 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_43_43, ll_backend__prog_rep__VarBytes_23, ll_backend__prog_rep__V_41_41);
    }
#line 384 "prog_rep.m"
  }
#line 377 "prog_rep.m"
}

#line 362 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_4_byte_8_p_0(
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep___ProgVar_9,
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 362 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 362 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 362 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 362 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 362 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
#line 362 "prog_rep.m"
{
#line 367 "prog_rep.m"
  {
#line 367 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 367 "prog_rep.m"
    {
#line 367 "prog_rep.m"
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(ll_backend__prog_rep__HeadVar__2_2, ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17, ll_backend__prog_rep__STATE_VARIABLE_NumVars_18, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
#line 367 "prog_rep.m"
      return;
    }
#line 367 "prog_rep.m"
  }
#line 362 "prog_rep.m"
}

#line 347 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_2_byte_8_p_0(
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep___ProgVar_9,
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 347 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 347 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 347 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 347 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 347 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
#line 347 "prog_rep.m"
{
#line 352 "prog_rep.m"
  {
#line 352 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 352 "prog_rep.m"
    {
#line 352 "prog_rep.m"
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(ll_backend__prog_rep__HeadVar__2_2, ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17, ll_backend__prog_rep__STATE_VARIABLE_NumVars_18, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
#line 352 "prog_rep.m"
      return;
    }
#line 352 "prog_rep.m"
  }
#line 347 "prog_rep.m"
}

#line 332 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_1_byte_8_p_0(
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep___ProgVar_9,
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 332 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 332 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 332 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 332 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 332 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
#line 332 "prog_rep.m"
{
#line 337 "prog_rep.m"
  {
#line 337 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 337 "prog_rep.m"
    {
#line 337 "prog_rep.m"
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(ll_backend__prog_rep__HeadVar__2_2, ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17, ll_backend__prog_rep__STATE_VARIABLE_NumVars_18, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
#line 337 "prog_rep.m"
      return;
    }
#line 337 "prog_rep.m"
  }
#line 332 "prog_rep.m"
}

#line 317 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__max_var_num_3_f_0(
#line 317 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_5,
#line 317 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 317 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum2_8)
#line 317 "prog_rep.m"
{
#line 319 "prog_rep.m"
  {
#line 319 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 319 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Max_9;

#line 319 "prog_rep.m"
    {
#line 319 "prog_rep.m"
      return ll_backend__prog_rep__Max_9 = ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(ll_backend__prog_rep__HeadVar__2_2, ll_backend__prog_rep__VarNum2_8);
    }
#line 319 "prog_rep.m"
    return ll_backend__prog_rep__Max_9;
#line 319 "prog_rep.m"
  }
#line 317 "prog_rep.m"
}

#line 304 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_6(
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 304 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 304 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 304 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8,
#line 304 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_9,
#line 304 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_10)
#line 304 "prog_rep.m"
{
#line 304 "prog_rep.m"
  {
#line 304 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 304 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv23_STATE_VARIABLE_NumVars_27;
#line 304 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv22_STATE_VARIABLE_VarNameTableBytes_29;
#line 304 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv21_STATE_VARIABLE_StringTable_31;
#line 304 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv20_STATE_VARIABLE_TypeTable_33;

#line 304 "prog_rep.m"
    {
#line 304 "prog_rep.m"
      ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv23_STATE_VARIABLE_NumVars_27, ((MR_Word) ll_backend__prog_rep__wrapper_arg_5), &ll_backend__prog_rep__conv22_STATE_VARIABLE_VarNameTableBytes_29, ((MR_Word) ll_backend__prog_rep__wrapper_arg_7), &ll_backend__prog_rep__conv21_STATE_VARIABLE_StringTable_31, ((MR_Word) ll_backend__prog_rep__wrapper_arg_9), &ll_backend__prog_rep__conv20_STATE_VARIABLE_TypeTable_33);
    }
#line 304 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv23_STATE_VARIABLE_NumVars_27));
#line 304 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep__conv22_STATE_VARIABLE_VarNameTableBytes_29));
#line 304 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_8 = ((MR_Box) (ll_backend__prog_rep__conv21_STATE_VARIABLE_StringTable_31));
#line 304 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_10 = ((MR_Box) (ll_backend__prog_rep__conv20_STATE_VARIABLE_TypeTable_33));
#line 304 "prog_rep.m"
  }
#line 304 "prog_rep.m"
}

#line 299 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_5(
#line 299 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 299 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 299 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 299 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 299 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 299 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 299 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 299 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 299 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8)
#line 299 "prog_rep.m"
{
#line 299 "prog_rep.m"
  {
#line 299 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 299 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv16_STATE_VARIABLE_NumVars_18;
#line 299 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv15_STATE_VARIABLE_VarNameTableBytes_20;
#line 299 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv14_STATE_VARIABLE_StringTable_22;

#line 299 "prog_rep.m"
    {
#line 299 "prog_rep.m"
      ll_backend__prog_rep__encode_var_name_table_entry_4_byte_8_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv16_STATE_VARIABLE_NumVars_18, ((MR_Word) ll_backend__prog_rep__wrapper_arg_5), &ll_backend__prog_rep__conv15_STATE_VARIABLE_VarNameTableBytes_20, ((MR_Word) ll_backend__prog_rep__wrapper_arg_7), &ll_backend__prog_rep__conv14_STATE_VARIABLE_StringTable_22);
    }
#line 299 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv16_STATE_VARIABLE_NumVars_18));
#line 299 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep__conv15_STATE_VARIABLE_VarNameTableBytes_20));
#line 299 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_8 = ((MR_Box) (ll_backend__prog_rep__conv14_STATE_VARIABLE_StringTable_22));
#line 299 "prog_rep.m"
  }
#line 299 "prog_rep.m"
}

#line 295 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_4(
#line 295 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 295 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 295 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 295 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 295 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 295 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 295 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 295 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 295 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8)
#line 295 "prog_rep.m"
{
#line 295 "prog_rep.m"
  {
#line 295 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 295 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv10_STATE_VARIABLE_NumVars_18;
#line 295 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv9_STATE_VARIABLE_VarNameTableBytes_20;
#line 295 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_22;

#line 295 "prog_rep.m"
    {
#line 295 "prog_rep.m"
      ll_backend__prog_rep__encode_var_name_table_entry_2_byte_8_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv10_STATE_VARIABLE_NumVars_18, ((MR_Word) ll_backend__prog_rep__wrapper_arg_5), &ll_backend__prog_rep__conv9_STATE_VARIABLE_VarNameTableBytes_20, ((MR_Word) ll_backend__prog_rep__wrapper_arg_7), &ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_22);
    }
#line 295 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv10_STATE_VARIABLE_NumVars_18));
#line 295 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep__conv9_STATE_VARIABLE_VarNameTableBytes_20));
#line 295 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_8 = ((MR_Box) (ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_22));
#line 295 "prog_rep.m"
  }
#line 295 "prog_rep.m"
}

#line 291 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_3(
#line 291 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 291 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 291 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 291 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 291 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 291 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 291 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 291 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 291 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8)
#line 291 "prog_rep.m"
{
#line 291 "prog_rep.m"
  {
#line 291 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 291 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv4_STATE_VARIABLE_NumVars_18;
#line 291 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv3_STATE_VARIABLE_VarNameTableBytes_20;
#line 291 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_22;

#line 291 "prog_rep.m"
    {
#line 291 "prog_rep.m"
      ll_backend__prog_rep__encode_var_name_table_entry_1_byte_8_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv4_STATE_VARIABLE_NumVars_18, ((MR_Word) ll_backend__prog_rep__wrapper_arg_5), &ll_backend__prog_rep__conv3_STATE_VARIABLE_VarNameTableBytes_20, ((MR_Word) ll_backend__prog_rep__wrapper_arg_7), &ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_22);
    }
#line 291 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv4_STATE_VARIABLE_NumVars_18));
#line 291 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep__conv3_STATE_VARIABLE_VarNameTableBytes_20));
#line 291 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_8 = ((MR_Box) (ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_22));
#line 291 "prog_rep.m"
  }
#line 291 "prog_rep.m"
}

#line 312 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_2(
#line 312 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg)
#line 312 "prog_rep.m"
{
#line 312 "prog_rep.m"
  {
#line 312 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 312 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;

#line 312 "prog_rep.m"
    {
#line 312 "prog_rep.m"
      return ll_backend__prog_rep__succeeded = ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__312__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))));
    }
#line 312 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 312 "prog_rep.m"
  }
#line 312 "prog_rep.m"
}

#line 273 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_1(
#line 273 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 273 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 273 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 273 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3)
#line 273 "prog_rep.m"
{
#line 273 "prog_rep.m"
  {
#line 273 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_4;
#line 273 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 273 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv0_Max_9;

#line 273 "prog_rep.m"
    {
#line 273 "prog_rep.m"
      ll_backend__prog_rep__conv0_Max_9 = ll_backend__prog_rep__max_var_num_3_f_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3));
    }
#line 273 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv0_Max_9));
#line 273 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_4;
#line 273 "prog_rep.m"
  }
#line 273 "prog_rep.m"
}

#line 265 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0(
#line 265 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarNameTable_11,
#line 265 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarTypes_12,
#line 265 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarTypes_13,
#line 265 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarNumMap_14,
#line 265 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__VarNumRep_15,
#line 265 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_16,
#line 265 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24,
#line 265 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_25,
#line 265 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26,
#line 265 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27)
#line 265 "prog_rep.m"
{
#line 272 "prog_rep.m"
  {
#line 272 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 272 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeInfo_58_58 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[3];
#line 272 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeInfo_59_59 = (MR_Word) &ll_backend__prog_rep_scalar_common_2[0];
#line 272 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 272 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__MaxVarNum_19;
#line 272 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__FlagByte_20;
#line 273 "prog_rep.m"
    MR_Box ll_backend__prog_rep__conv1_MaxVarNum_19;

#line 273 "prog_rep.m"
    {
#line 273 "prog_rep.m"
      ll_backend__prog_rep__conv1_MaxVarNum_19 = mercury__map__foldl_3_f_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_2[4], ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)));
    }
#line 273 "prog_rep.m"
    ll_backend__prog_rep__MaxVarNum_19 = ((MR_Integer) ll_backend__prog_rep__conv1_MaxVarNum_19);
#line 274 "prog_rep.m"
    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__MaxVarNum_19 <= (MR_Integer) 127);
#line 276 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 275 "prog_rep.m"
      *ll_backend__prog_rep__VarNumRep_15 = (MR_Integer) 0;
#line 276 "prog_rep.m"
    else
#line 278 "prog_rep.m"
      {
#line 276 "prog_rep.m"
        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__MaxVarNum_19 <= (MR_Integer) 32767);
#line 278 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 277 "prog_rep.m"
          *ll_backend__prog_rep__VarNumRep_15 = (MR_Integer) 1;
#line 278 "prog_rep.m"
        else
#line 279 "prog_rep.m"
          *ll_backend__prog_rep__VarNumRep_15 = (MR_Integer) 2;
#line 278 "prog_rep.m"
      }
#line 281 "prog_rep.m"
    {
#line 281 "prog_rep.m"
      mdbcomp__program_representation__var_flag_byte_4_p_0(*ll_backend__prog_rep__VarNumRep_15, ll_backend__prog_rep__IncludeVarNameTable_11, ll_backend__prog_rep__IncludeVarTypes_12, &ll_backend__prog_rep__FlagByte_20);
    }
#line 310 "prog_rep.m"
#line 310 "prog_rep.m"
    switch (ll_backend__prog_rep__IncludeVarNameTable_11) {
#line 310 "prog_rep.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 310 "prog_rep.m"
      case (MR_Integer) 0:
#line 311 "prog_rep.m"
        {
#line 311 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_32_32;

#line 312 "prog_rep.m"
          {
#line 312 "prog_rep.m"
            ll_backend__prog_rep__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 312 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[3]));
#line 312 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 1) = ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_2));
#line 312 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 312 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 3) = ((MR_Box) (ll_backend__prog_rep__IncludeVarTypes_12));
#line 312 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 4) = ((MR_Box) ((MR_Integer) 0));
#line 312 "prog_rep.m"
          }
#line 312 "prog_rep.m"
          {
#line 312 "prog_rep.m"
            mercury__require__expect_4_p_0(ll_backend__prog_rep__V_32_32, (MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.represent_var_table_as_bytecode\'/10", (MR_String) "IncludeVarTypes but not IncludeVarNameTable");
          }
#line 314 "prog_rep.m"
          {
#line 314 "prog_rep.m"
            MR_Word base;
#line 314 "prog_rep.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "prog_rep.m"
            *ll_backend__prog_rep__Bytes_16 = base;
#line 314 "prog_rep.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep__FlagByte_20));
#line 314 "prog_rep.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "prog_rep.m"
          }
#line 311 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24;
#line 311 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27 = ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26;
#line 311 "prog_rep.m"
        }
#line 310 "prog_rep.m"
        break;
#line 310 "prog_rep.m"
      case (MR_Integer) 1:
#line 283 "prog_rep.m"
        {
#line 283 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__NumVars_21;
#line 283 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarNameTableEntriesBytes_22;
#line 283 "prog_rep.m"
          MR_Word ll_backend__prog_rep__NumVarsBytes_23;
#line 283 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_55_55;
#line 283 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_57_57;

#line 302 "prog_rep.m"
#line 302 "prog_rep.m"
          switch (ll_backend__prog_rep__IncludeVarTypes_12) {
#line 302 "prog_rep.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 302 "prog_rep.m"
            case (MR_Integer) 0:
#line 285 "prog_rep.m"
              {
#line 293 "prog_rep.m"
#line 293 "prog_rep.m"
                switch (*ll_backend__prog_rep__VarNumRep_15) {
#line 293 "prog_rep.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 293 "prog_rep.m"
                  case (MR_Integer) 0:
#line 290 "prog_rep.m"
                    {
#line 291 "prog_rep.m"
                      MR_Box ll_backend__prog_rep__conv7_NumVars_21;
#line 291 "prog_rep.m"
                      MR_Box ll_backend__prog_rep__conv6_VarNameTableEntriesBytes_22;
#line 291 "prog_rep.m"
                      MR_Box ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_25;

#line 291 "prog_rep.m"
                      {
#line 291 "prog_rep.m"
                        mercury__map__foldl3_8_p_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[5], ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__prog_rep__conv7_NumVars_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__prog_rep__conv6_VarNameTableEntriesBytes_22, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24)), &ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_25);
                      }
#line 291 "prog_rep.m"
                      ll_backend__prog_rep__NumVars_21 = ((MR_Integer) ll_backend__prog_rep__conv7_NumVars_21);
#line 291 "prog_rep.m"
                      ll_backend__prog_rep__VarNameTableEntriesBytes_22 = ((MR_Word) ll_backend__prog_rep__conv6_VarNameTableEntriesBytes_22);
#line 291 "prog_rep.m"
                      *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ((MR_Word) ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_25);
#line 290 "prog_rep.m"
                    }
#line 293 "prog_rep.m"
                    break;
#line 293 "prog_rep.m"
                  case (MR_Integer) 1:
#line 294 "prog_rep.m"
                    {
#line 295 "prog_rep.m"
                      MR_Box ll_backend__prog_rep__conv13_NumVars_21;
#line 295 "prog_rep.m"
                      MR_Box ll_backend__prog_rep__conv12_VarNameTableEntriesBytes_22;
#line 295 "prog_rep.m"
                      MR_Box ll_backend__prog_rep__conv11_STATE_VARIABLE_StringTable_25;

#line 295 "prog_rep.m"
                      {
#line 295 "prog_rep.m"
                        mercury__map__foldl3_8_p_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[6], ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__prog_rep__conv13_NumVars_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__prog_rep__conv12_VarNameTableEntriesBytes_22, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24)), &ll_backend__prog_rep__conv11_STATE_VARIABLE_StringTable_25);
                      }
#line 295 "prog_rep.m"
                      ll_backend__prog_rep__NumVars_21 = ((MR_Integer) ll_backend__prog_rep__conv13_NumVars_21);
#line 295 "prog_rep.m"
                      ll_backend__prog_rep__VarNameTableEntriesBytes_22 = ((MR_Word) ll_backend__prog_rep__conv12_VarNameTableEntriesBytes_22);
#line 295 "prog_rep.m"
                      *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ((MR_Word) ll_backend__prog_rep__conv11_STATE_VARIABLE_StringTable_25);
#line 294 "prog_rep.m"
                    }
#line 293 "prog_rep.m"
                    break;
#line 293 "prog_rep.m"
                  case (MR_Integer) 2:
#line 298 "prog_rep.m"
                    {
#line 299 "prog_rep.m"
                      MR_Box ll_backend__prog_rep__conv19_NumVars_21;
#line 299 "prog_rep.m"
                      MR_Box ll_backend__prog_rep__conv18_VarNameTableEntriesBytes_22;
#line 299 "prog_rep.m"
                      MR_Box ll_backend__prog_rep__conv17_STATE_VARIABLE_StringTable_25;

#line 299 "prog_rep.m"
                      {
#line 299 "prog_rep.m"
                        mercury__map__foldl3_8_p_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[7], ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__prog_rep__conv19_NumVars_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__prog_rep__conv18_VarNameTableEntriesBytes_22, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24)), &ll_backend__prog_rep__conv17_STATE_VARIABLE_StringTable_25);
                      }
#line 299 "prog_rep.m"
                      ll_backend__prog_rep__NumVars_21 = ((MR_Integer) ll_backend__prog_rep__conv19_NumVars_21);
#line 299 "prog_rep.m"
                      ll_backend__prog_rep__VarNameTableEntriesBytes_22 = ((MR_Word) ll_backend__prog_rep__conv18_VarNameTableEntriesBytes_22);
#line 299 "prog_rep.m"
                      *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ((MR_Word) ll_backend__prog_rep__conv17_STATE_VARIABLE_StringTable_25);
#line 298 "prog_rep.m"
                    }
#line 293 "prog_rep.m"
                    break;
#line 293 "prog_rep.m"
                }
#line 285 "prog_rep.m"
                *ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27 = ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26;
#line 285 "prog_rep.m"
              }
#line 302 "prog_rep.m"
              break;
#line 302 "prog_rep.m"
            case (MR_Integer) 1:
#line 303 "prog_rep.m"
              {
#line 303 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_38_38;
#line 304 "prog_rep.m"
                MR_Box ll_backend__prog_rep__conv27_NumVars_21;
#line 304 "prog_rep.m"
                MR_Box ll_backend__prog_rep__conv26_VarNameTableEntriesBytes_22;
#line 304 "prog_rep.m"
                MR_Box ll_backend__prog_rep__conv25_STATE_VARIABLE_StringTable_25;
#line 304 "prog_rep.m"
                MR_Box ll_backend__prog_rep__conv24_STATE_VARIABLE_TypeTable_27;

#line 304 "prog_rep.m"
                {
#line 304 "prog_rep.m"
                  ll_backend__prog_rep__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 304 "prog_rep.m"
                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_8[0]));
#line 304 "prog_rep.m"
                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 1) = ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_6));
#line 304 "prog_rep.m"
                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 304 "prog_rep.m"
                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 3) = ((MR_Box) (*ll_backend__prog_rep__VarNumRep_15));
#line 304 "prog_rep.m"
                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 4) = ((MR_Box) (ll_backend__prog_rep__VarTypes_13));
#line 304 "prog_rep.m"
                }
#line 304 "prog_rep.m"
                {
#line 304 "prog_rep.m"
                  mercury__map__foldl4_10_p_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, ll_backend__prog_rep__V_38_38, ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__prog_rep__conv27_NumVars_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__prog_rep__conv26_VarNameTableEntriesBytes_22, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24)), &ll_backend__prog_rep__conv25_STATE_VARIABLE_StringTable_25, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26)), &ll_backend__prog_rep__conv24_STATE_VARIABLE_TypeTable_27);
                }
#line 304 "prog_rep.m"
                ll_backend__prog_rep__NumVars_21 = ((MR_Integer) ll_backend__prog_rep__conv27_NumVars_21);
#line 304 "prog_rep.m"
                ll_backend__prog_rep__VarNameTableEntriesBytes_22 = ((MR_Word) ll_backend__prog_rep__conv26_VarNameTableEntriesBytes_22);
#line 304 "prog_rep.m"
                *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ((MR_Word) ll_backend__prog_rep__conv25_STATE_VARIABLE_StringTable_25);
#line 304 "prog_rep.m"
                *ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27 = ((MR_Word) ll_backend__prog_rep__conv24_STATE_VARIABLE_TypeTable_27);
#line 303 "prog_rep.m"
              }
#line 302 "prog_rep.m"
              break;
#line 302 "prog_rep.m"
          }
#line 308 "prog_rep.m"
          {
#line 308 "prog_rep.m"
            mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__NumVars_21, &ll_backend__prog_rep__NumVarsBytes_23);
          }
#line 309 "prog_rep.m"
          {
#line 309 "prog_rep.m"
            ll_backend__prog_rep__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_55_55, 0) = ((MR_Box) (ll_backend__prog_rep__FlagByte_20));
#line 309 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "prog_rep.m"
          }
#line 309 "prog_rep.m"
          {
#line 309 "prog_rep.m"
            ll_backend__prog_rep__V_57_57 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_60_60, ll_backend__prog_rep__NumVarsBytes_23, ll_backend__prog_rep__VarNameTableEntriesBytes_22);
          }
#line 309 "prog_rep.m"
          {
#line 309 "prog_rep.m"
            *ll_backend__prog_rep__Bytes_16 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_60_60, ll_backend__prog_rep__V_55_55, ll_backend__prog_rep__V_57_57);
          }
#line 283 "prog_rep.m"
        }
#line 310 "prog_rep.m"
        break;
#line 310 "prog_rep.m"
    }
#line 272 "prog_rep.m"
  }
#line 265 "prog_rep.m"
}

#line 158 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_oisu_proc_3_p_0(
#line 158 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ModuleInfo_4,
#line 158 "prog_rep.m"
  MR_Word ll_backend__prog_rep__PredId_5,
#line 158 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__BytesCord_6)
#line 158 "prog_rep.m"
{
#line 160 "prog_rep.m"
  {
#line 160 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 160 "prog_rep.m"
    MR_Word ll_backend__prog_rep__PredInfo_7;
#line 160 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ProcTable_8;
#line 160 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Procs_9;
#line 167 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__ProcId_10;
#line 164 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_13_13;
#line 164 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_14_14;
#line 164 "prog_rep.m"
    MR_Word ll_backend__prog_rep___ProcInfo_11;

#line 161 "prog_rep.m"
    {
#line 161 "prog_rep.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__prog_rep__ModuleInfo_4, ll_backend__prog_rep__PredId_5, &ll_backend__prog_rep__PredInfo_7);
    }
#line 162 "prog_rep.m"
    {
#line 162 "prog_rep.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__prog_rep__PredInfo_7, &ll_backend__prog_rep__ProcTable_8);
    }
#line 163 "prog_rep.m"
    {
#line 163 "prog_rep.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__prog_rep__ProcTable_8, &ll_backend__prog_rep__Procs_9);
    }
#line 164 "prog_rep.m"
    ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__Procs_9)) == (MR_mktag((MR_Integer) 1)));
#line 164 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 164 "prog_rep.m"
      {
#line 164 "prog_rep.m"
        ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Procs_9, (MR_Integer) 0)));
#line 164 "prog_rep.m"
        ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Procs_9, (MR_Integer) 1)));
#line 164 "prog_rep.m"
        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 164 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 164 "prog_rep.m"
          {
#line 164 "prog_rep.m"
            ll_backend__prog_rep__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_13_13, (MR_Integer) 0)));
#line 164 "prog_rep.m"
            ll_backend__prog_rep___ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_13_13, (MR_Integer) 1)));
#line 164 "prog_rep.m"
            ll_backend__prog_rep__succeeded = MR_TRUE;
#line 164 "prog_rep.m"
          }
#line 164 "prog_rep.m"
      }
#line 167 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 165 "prog_rep.m"
      {
#line 165 "prog_rep.m"
        MR_Word ll_backend__prog_rep__ProcLabel_12;

#line 165 "prog_rep.m"
        {
#line 165 "prog_rep.m"
          ll_backend__prog_rep__ProcLabel_12 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__prog_rep__ModuleInfo_4, ll_backend__prog_rep__PredId_5, ll_backend__prog_rep__ProcId_10);
        }
#line 176 "prog_rep.m"
        if (((MR_tag((MR_Word) ll_backend__prog_rep__ProcLabel_12)) == (MR_mktag((MR_Integer) 0))))
#line 176 "prog_rep.m"
          {
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtorInfo_57_74;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DefModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 0)));
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 1)));
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DeclModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 2)));
#line 176 "prog_rep.m"
            MR_String ll_backend__prog_rep__PredName_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 3)));
#line 176 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 4)));
#line 176 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__ModeNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 5)));
#line 176 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__KindByte_28;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DeclModuleNameBytes_29;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DefModuleNameBytes_30;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__PredNameBytes_31;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__ArityBytes_32;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__ModeNumBytes_33;
#line 176 "prog_rep.m"
            MR_String ll_backend__prog_rep__V_56_56;
#line 176 "prog_rep.m"
            MR_String ll_backend__prog_rep__V_57_57;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_58_58;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_59_59;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_60_60;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_61_61;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_62_62;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_63_63;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_64_64;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_65_65;
#line 176 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_66_66;

#line 180 "prog_rep.m"
#line 180 "prog_rep.m"
            switch (ll_backend__prog_rep__PredOrFunc_23) {
#line 180 "prog_rep.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 180 "prog_rep.m"
              case (MR_Integer) 1:
#line 227 "prog_rep.m"
                ll_backend__prog_rep__KindByte_28 = (MR_Integer) 1;
#line 180 "prog_rep.m"
                break;
#line 180 "prog_rep.m"
              case (MR_Integer) 0:
#line 226 "prog_rep.m"
                ll_backend__prog_rep__KindByte_28 = (MR_Integer) 0;
#line 180 "prog_rep.m"
                break;
#line 180 "prog_rep.m"
            }
#line 184 "prog_rep.m"
            {
#line 184 "prog_rep.m"
              ll_backend__prog_rep__V_56_56 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep__DeclModuleName_24);
            }
#line 184 "prog_rep.m"
            {
#line 184 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__V_56_56, &ll_backend__prog_rep__DeclModuleNameBytes_29);
            }
#line 186 "prog_rep.m"
            {
#line 186 "prog_rep.m"
              ll_backend__prog_rep__V_57_57 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep__DefModuleName_22);
            }
#line 186 "prog_rep.m"
            {
#line 186 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__V_57_57, &ll_backend__prog_rep__DefModuleNameBytes_30);
            }
#line 188 "prog_rep.m"
            {
#line 188 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__PredName_25, &ll_backend__prog_rep__PredNameBytes_31);
            }
#line 189 "prog_rep.m"
            {
#line 189 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__Arity_26, &ll_backend__prog_rep__ArityBytes_32);
            }
#line 190 "prog_rep.m"
            {
#line 190 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__ModeNum_27, &ll_backend__prog_rep__ModeNumBytes_33);
            }
#line 8417 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeCtorInfo_57_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 191 "prog_rep.m"
            {
#line 191 "prog_rep.m"
              ll_backend__prog_rep__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_59_59, 0) = ((MR_Box) (ll_backend__prog_rep__KindByte_28));
#line 191 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_59_59, 1) = ((MR_Box) (ll_backend__prog_rep__DeclModuleNameBytes_29));
#line 191 "prog_rep.m"
            }
#line 191 "prog_rep.m"
            {
#line 191 "prog_rep.m"
              ll_backend__prog_rep__V_58_58 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_59_59);
            }
#line 192 "prog_rep.m"
            {
#line 192 "prog_rep.m"
              ll_backend__prog_rep__V_61_61 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__DefModuleNameBytes_30);
            }
#line 193 "prog_rep.m"
            {
#line 193 "prog_rep.m"
              ll_backend__prog_rep__V_63_63 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__PredNameBytes_31);
            }
#line 194 "prog_rep.m"
            {
#line 194 "prog_rep.m"
              ll_backend__prog_rep__V_65_65 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__ArityBytes_32);
            }
#line 195 "prog_rep.m"
            {
#line 195 "prog_rep.m"
              ll_backend__prog_rep__V_66_66 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__ModeNumBytes_33);
            }
#line 195 "prog_rep.m"
            {
#line 195 "prog_rep.m"
              ll_backend__prog_rep__V_64_64 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_65_65, ll_backend__prog_rep__V_66_66);
            }
#line 194 "prog_rep.m"
            {
#line 194 "prog_rep.m"
              ll_backend__prog_rep__V_62_62 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_63_63, ll_backend__prog_rep__V_64_64);
            }
#line 193 "prog_rep.m"
            {
#line 193 "prog_rep.m"
              ll_backend__prog_rep__V_60_60 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_61_61, ll_backend__prog_rep__V_62_62);
            }
#line 192 "prog_rep.m"
            {
#line 192 "prog_rep.m"
              *ll_backend__prog_rep__BytesCord_6 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_58_58, ll_backend__prog_rep__V_60_60);
            }
#line 176 "prog_rep.m"
          }
#line 176 "prog_rep.m"
        else
#line 198 "prog_rep.m"
          {
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtorInfo_58_75;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__SpecialPredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 1)));
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 2)));
#line 198 "prog_rep.m"
            MR_String ll_backend__prog_rep__TypeName_36 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 3)));
#line 198 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__TypeArity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 4)));
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtor_38;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeNameBytes_39;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeModuleNameBytes_40;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeArityBytes_41;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_42_42;
#line 198 "prog_rep.m"
            MR_String ll_backend__prog_rep__V_43_43;
#line 198 "prog_rep.m"
            MR_String ll_backend__prog_rep__V_44_44;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_45_45;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_46_46;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_47_47;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_48_48;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_49_49;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_50_50;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_51_51;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_52_52;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_53_53;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_54_54;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_55_55;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DefModuleName_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 0)));
#line 198 "prog_rep.m"
            MR_String ll_backend__prog_rep__PredName_68;
#line 198 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__ModeNum_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 5)));
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DefModuleNameBytes_71;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__PredNameBytes_72;
#line 198 "prog_rep.m"
            MR_Word ll_backend__prog_rep__ModeNumBytes_73;

#line 199 "prog_rep.m"
            {
#line 199 "prog_rep.m"
              ll_backend__prog_rep__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_42_42, 0) = ((MR_Box) (ll_backend__prog_rep__TypeModuleName_35));
#line 199 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_42_42, 1) = ((MR_Box) (ll_backend__prog_rep__TypeName_36));
#line 199 "prog_rep.m"
            }
#line 199 "prog_rep.m"
            {
#line 199 "prog_rep.m"
              ll_backend__prog_rep__TypeCtor_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__TypeCtor_38, 0) = ((MR_Box) (ll_backend__prog_rep__V_42_42));
#line 199 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__TypeCtor_38, 1) = ((MR_Box) (ll_backend__prog_rep__TypeArity_37));
#line 199 "prog_rep.m"
            }
#line 200 "prog_rep.m"
            {
#line 200 "prog_rep.m"
              ll_backend__prog_rep__PredName_68 = hlds__special_pred__special_pred_name_2_f_0(ll_backend__prog_rep__SpecialPredId_34, ll_backend__prog_rep__TypeCtor_38);
            }
#line 203 "prog_rep.m"
            {
#line 203 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__TypeName_36, &ll_backend__prog_rep__TypeNameBytes_39);
            }
#line 204 "prog_rep.m"
            {
#line 204 "prog_rep.m"
              ll_backend__prog_rep__V_43_43 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep__TypeModuleName_35);
            }
#line 204 "prog_rep.m"
            {
#line 204 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__V_43_43, &ll_backend__prog_rep__TypeModuleNameBytes_40);
            }
#line 206 "prog_rep.m"
            {
#line 206 "prog_rep.m"
              ll_backend__prog_rep__V_44_44 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep__DefModuleName_67);
            }
#line 206 "prog_rep.m"
            {
#line 206 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__V_44_44, &ll_backend__prog_rep__DefModuleNameBytes_71);
            }
#line 208 "prog_rep.m"
            {
#line 208 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__PredName_68, &ll_backend__prog_rep__PredNameBytes_72);
            }
#line 209 "prog_rep.m"
            {
#line 209 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__TypeArity_37, &ll_backend__prog_rep__TypeArityBytes_41);
            }
#line 210 "prog_rep.m"
            {
#line 210 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__ModeNum_69, &ll_backend__prog_rep__ModeNumBytes_73);
            }
#line 8604 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeCtorInfo_58_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 211 "prog_rep.m"
            {
#line 211 "prog_rep.m"
              ll_backend__prog_rep__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_46_46, 0) = ((MR_Box) ((MR_Integer) 2));
#line 211 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_46_46, 1) = ((MR_Box) (ll_backend__prog_rep__TypeNameBytes_39));
#line 211 "prog_rep.m"
            }
#line 211 "prog_rep.m"
            {
#line 211 "prog_rep.m"
              ll_backend__prog_rep__V_45_45 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_46_46);
            }
#line 212 "prog_rep.m"
            {
#line 212 "prog_rep.m"
              ll_backend__prog_rep__V_48_48 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__TypeModuleNameBytes_40);
            }
#line 213 "prog_rep.m"
            {
#line 213 "prog_rep.m"
              ll_backend__prog_rep__V_50_50 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__DefModuleNameBytes_71);
            }
#line 214 "prog_rep.m"
            {
#line 214 "prog_rep.m"
              ll_backend__prog_rep__V_52_52 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__PredNameBytes_72);
            }
#line 215 "prog_rep.m"
            {
#line 215 "prog_rep.m"
              ll_backend__prog_rep__V_54_54 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__TypeArityBytes_41);
            }
#line 216 "prog_rep.m"
            {
#line 216 "prog_rep.m"
              ll_backend__prog_rep__V_55_55 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__ModeNumBytes_73);
            }
#line 216 "prog_rep.m"
            {
#line 216 "prog_rep.m"
              ll_backend__prog_rep__V_53_53 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_54_54, ll_backend__prog_rep__V_55_55);
            }
#line 215 "prog_rep.m"
            {
#line 215 "prog_rep.m"
              ll_backend__prog_rep__V_51_51 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_52_52, ll_backend__prog_rep__V_53_53);
            }
#line 214 "prog_rep.m"
            {
#line 214 "prog_rep.m"
              ll_backend__prog_rep__V_49_49 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_50_50, ll_backend__prog_rep__V_51_51);
            }
#line 213 "prog_rep.m"
            {
#line 213 "prog_rep.m"
              ll_backend__prog_rep__V_47_47 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_48_48, ll_backend__prog_rep__V_49_49);
            }
#line 212 "prog_rep.m"
            {
#line 212 "prog_rep.m"
              *ll_backend__prog_rep__BytesCord_6 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_45_45, ll_backend__prog_rep__V_47_47);
            }
#line 198 "prog_rep.m"
          }
#line 165 "prog_rep.m"
      }
#line 167 "prog_rep.m"
    else
#line 168 "prog_rep.m"
      {
#line 168 "prog_rep.m"
        {
#line 168 "prog_rep.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.encode_oisu_proc\'/3", (MR_String) "OISU pred should have exactly one proc");
#line 168 "prog_rep.m"
          return;
        }
#line 168 "prog_rep.m"
      }
#line 160 "prog_rep.m"
  }
#line 158 "prog_rep.m"
}

#line 473 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9(
#line 473 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 473 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 473 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2)
#line 473 "prog_rep.m"
{
#line 473 "prog_rep.m"
  {
#line 473 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 473 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv6_HeadVar__4_4;

#line 473 "prog_rep.m"
    {
#line 473 "prog_rep.m"
      ll_backend__prog_rep__case_to_case_rep_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv6_HeadVar__4_4);
    }
#line 473 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv6_HeadVar__4_4));
#line 473 "prog_rep.m"
  }
#line 473 "prog_rep.m"
}

#line 456 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8(
#line 456 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 456 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 456 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2)
#line 456 "prog_rep.m"
{
#line 456 "prog_rep.m"
  {
#line 456 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 456 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv5_GoalRep_9;

#line 456 "prog_rep.m"
    {
#line 456 "prog_rep.m"
      ll_backend__prog_rep__goal_to_goal_rep_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv5_GoalRep_9);
    }
#line 456 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv5_GoalRep_9));
#line 456 "prog_rep.m"
  }
#line 456 "prog_rep.m"
}

#line 448 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7(
#line 448 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg)
#line 448 "prog_rep.m"
{
#line 448 "prog_rep.m"
  {
#line 448 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 448 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;

#line 448 "prog_rep.m"
    {
#line 448 "prog_rep.m"
      return ll_backend__prog_rep__succeeded = ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__448__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))));
    }
#line 448 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 448 "prog_rep.m"
  }
#line 448 "prog_rep.m"
}

#line 519 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6(
#line 519 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 519 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 519 "prog_rep.m"
{
#line 519 "prog_rep.m"
  {
#line 519 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 519 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 519 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv4_HeadVar__3_257;

#line 519 "prog_rep.m"
    {
#line 519 "prog_rep.m"
      ll_backend__prog_rep__conv4_HeadVar__3_257 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__519__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 519 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv4_HeadVar__3_257));
#line 519 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 519 "prog_rep.m"
  }
#line 519 "prog_rep.m"
}

#line 523 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5(
#line 523 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 523 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 523 "prog_rep.m"
{
#line 523 "prog_rep.m"
  {
#line 523 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 523 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;

#line 523 "prog_rep.m"
    {
#line 523 "prog_rep.m"
      return ll_backend__prog_rep__succeeded = ll_backend__prog_rep__lhs_final_is_ground_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 523 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 523 "prog_rep.m"
  }
#line 523 "prog_rep.m"
}

#line 519 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4(
#line 519 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 519 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 519 "prog_rep.m"
{
#line 519 "prog_rep.m"
  {
#line 519 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 519 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 519 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv3_HeadVar__3_231;

#line 519 "prog_rep.m"
    {
#line 519 "prog_rep.m"
      ll_backend__prog_rep__conv3_HeadVar__3_231 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__519__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 519 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv3_HeadVar__3_231));
#line 519 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 519 "prog_rep.m"
  }
#line 519 "prog_rep.m"
}

#line 592 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3(
#line 592 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 592 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 592 "prog_rep.m"
{
#line 592 "prog_rep.m"
  {
#line 592 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 592 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 592 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv2_HeadVar__4_244;

#line 592 "prog_rep.m"
    {
#line 592 "prog_rep.m"
      ll_backend__prog_rep__conv2_HeadVar__4_244 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__592__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 592 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv2_HeadVar__4_244));
#line 592 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 592 "prog_rep.m"
  }
#line 592 "prog_rep.m"
}

#line 592 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2(
#line 592 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 592 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 592 "prog_rep.m"
{
#line 592 "prog_rep.m"
  {
#line 592 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 592 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 592 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv1_HeadVar__2_2;

#line 592 "prog_rep.m"
    {
#line 592 "prog_rep.m"
      ll_backend__prog_rep__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 592 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv1_HeadVar__2_2));
#line 592 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 592 "prog_rep.m"
  }
#line 592 "prog_rep.m"
}

#line 503 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1(
#line 503 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 503 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 503 "prog_rep.m"
{
#line 503 "prog_rep.m"
  {
#line 503 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 503 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 503 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv0_Num_6;

#line 503 "prog_rep.m"
    {
#line 503 "prog_rep.m"
      ll_backend__prog_rep__conv0_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 503 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_Num_6));
#line 503 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 503 "prog_rep.m"
  }
#line 503 "prog_rep.m"
}

#line 81 "prog_rep.m"
void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0(
#line 81 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_5,
#line 81 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap0_6,
#line 81 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 81 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__GoalRep_9)
#line 81 "prog_rep.m"
{
#line 433 "prog_rep.m"
  {
#line 433 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 433 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
#line 433 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
#line 433 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Detism_10;
#line 433 "prog_rep.m"
    MR_Word ll_backend__prog_rep__DetismRep_11;
#line 433 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalExprRep_12;

#line 434 "prog_rep.m"
    {
#line 434 "prog_rep.m"
      ll_backend__prog_rep__Detism_10 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__prog_rep__GoalInfo_8);
    }
#line 435 "prog_rep.m"
    {
#line 435 "prog_rep.m"
      ll_backend__prog_rep__detism_to_detism_rep_2_p_0(ll_backend__prog_rep__Detism_10, &ll_backend__prog_rep__DetismRep_11);
    }
#line 436 "prog_rep.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 453 "prog_rep.m"
#line 453 "prog_rep.m"
    switch (MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) {
#line 453 "prog_rep.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 453 "prog_rep.m"
      case (MR_Integer) 0:
#line 459 "prog_rep.m"
        {
#line 459 "prog_rep.m"
          MR_Word ll_backend__prog_rep__SubGoal_18 = (MR_Word) MR_body(((MR_Word) ll_backend__prog_rep__GoalExpr_7), (MR_Integer) 0);
#line 459 "prog_rep.m"
          MR_Word ll_backend__prog_rep__SubGoalRep_19;

#line 460 "prog_rep.m"
          {
#line 460 "prog_rep.m"
            ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__SubGoal_18, &ll_backend__prog_rep__SubGoalRep_19);
          }
#line 461 "prog_rep.m"
          {
#line 461 "prog_rep.m"
            ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "prog_rep.m"
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 461 "prog_rep.m"
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__SubGoalRep_19));
#line 461 "prog_rep.m"
          }
#line 459 "prog_rep.m"
        }
#line 453 "prog_rep.m"
        break;
#line 453 "prog_rep.m"
      case (MR_Integer) 1:
#line 453 "prog_rep.m"
      case (MR_Integer) 2:
#line 500 "prog_rep.m"
        {
#line 500 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeInfo_222_222;
#line 500 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeCtorInfo_223_223;
#line 500 "prog_rep.m"
          MR_String ll_backend__prog_rep__FileName_66;
#line 500 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__LineNo_67;
#line 500 "prog_rep.m"
          MR_Word ll_backend__prog_rep__BoundVars_68;
#line 500 "prog_rep.m"
          MR_Word ll_backend__prog_rep__BoundVarsRep_69;
#line 500 "prog_rep.m"
          MR_Word ll_backend__prog_rep__AtomicGoalRep_77;
#line 500 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_145_145;

#line 501 "prog_rep.m"
          {
#line 501 "prog_rep.m"
            ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(ll_backend__prog_rep__GoalInfo_8, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Info_5, &ll_backend__prog_rep__FileName_66, &ll_backend__prog_rep__LineNo_67, &ll_backend__prog_rep__BoundVars_68);
          }
#line 9068 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeInfo_222_222 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[3];
#line 9070 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeCtorInfo_223_223 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 503 "prog_rep.m"
          {
#line 503 "prog_rep.m"
            ll_backend__prog_rep__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 503 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
#line 503 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1));
#line 503 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 503 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 503 "prog_rep.m"
          }
#line 503 "prog_rep.m"
          {
#line 503 "prog_rep.m"
            ll_backend__prog_rep__BoundVarsRep_69 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__BoundVars_68);
          }
#line 550 "prog_rep.m"
#line 550 "prog_rep.m"
          switch (MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) {
#line 550 "prog_rep.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 550 "prog_rep.m"
            case (MR_Integer) 1:
#line 505 "prog_rep.m"
              {
#line 505 "prog_rep.m"
                MR_Word ll_backend__prog_rep__Uni_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 505 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
#line 505 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 505 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 505 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));

#line 511 "prog_rep.m"
#line 511 "prog_rep.m"
                switch (MR_tag((MR_Word) ll_backend__prog_rep__Uni_73)) {
#line 511 "prog_rep.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 511 "prog_rep.m"
                  case (MR_Integer) 0:
#line 514 "prog_rep.m"
                    {
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__ConsId_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 1)));
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__Args_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 2)));
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__ArgModes_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 3)));
#line 514 "prog_rep.m"
                      MR_String ll_backend__prog_rep__ConsIdRep_86;
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__ArgsRep_87;
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__MaybeArgs_88;
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__MaybeArgsRep_89;
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__V_166_166;
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 0)));
#line 514 "prog_rep.m"
                      MR_Integer ll_backend__prog_rep__VarRep_183;
#line 512 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 4)));
#line 512 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 5)));
#line 512 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 6)));
#line 523 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__V_168_168;

#line 515 "prog_rep.m"
                      {
#line 515 "prog_rep.m"
                        ll_backend__prog_rep__VarRep_183 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_182);
                      }
#line 516 "prog_rep.m"
                      {
#line 516 "prog_rep.m"
                        ll_backend__prog_rep__ConsIdRep_86 = ll_backend__prog_rep__cons_id_rep_1_f_0(ll_backend__prog_rep__ConsId_78);
                      }
#line 517 "prog_rep.m"
                      {
#line 517 "prog_rep.m"
                        ll_backend__prog_rep__ArgsRep_87 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_79);
                      }
#line 518 "prog_rep.m"
                      {
#line 518 "prog_rep.m"
                        ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__ArgModes_80, ll_backend__prog_rep__Args_79, &ll_backend__prog_rep__MaybeArgs_88);
                      }
#line 519 "prog_rep.m"
                      {
#line 519 "prog_rep.m"
                        ll_backend__prog_rep__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 519 "prog_rep.m"
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
#line 519 "prog_rep.m"
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4));
#line 519 "prog_rep.m"
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 519 "prog_rep.m"
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 3) = ((MR_Box) (ll_backend__prog_rep__V_145_145));
#line 519 "prog_rep.m"
                      }
#line 519 "prog_rep.m"
                      {
#line 519 "prog_rep.m"
                        ll_backend__prog_rep__MaybeArgsRep_89 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[4], (MR_Word) &ll_backend__prog_rep_scalar_common_1[5], ll_backend__prog_rep__V_166_166, ll_backend__prog_rep__MaybeArgs_88);
                      }
#line 523 "prog_rep.m"
                      {
#line 523 "prog_rep.m"
                        ll_backend__prog_rep__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 523 "prog_rep.m"
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[1]));
#line 523 "prog_rep.m"
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5));
#line 523 "prog_rep.m"
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 523 "prog_rep.m"
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 523 "prog_rep.m"
                      }
#line 523 "prog_rep.m"
                      {
#line 523 "prog_rep.m"
                        ll_backend__prog_rep__succeeded = mercury__list__all_true_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, ll_backend__prog_rep__V_168_168, ll_backend__prog_rep__ArgModes_80);
                      }
#line 527 "prog_rep.m"
                      if (ll_backend__prog_rep__succeeded)
#line 525 "prog_rep.m"
                        {
#line 525 "prog_rep.m"
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 525 "prog_rep.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_183));
#line 525 "prog_rep.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_86));
#line 525 "prog_rep.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_87));
#line 525 "prog_rep.m"
                        }
#line 527 "prog_rep.m"
                      else
#line 528 "prog_rep.m"
                        {
#line 528 "prog_rep.m"
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 528 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 528 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__VarRep_183));
#line 528 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_86));
#line 528 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__MaybeArgsRep_89));
#line 528 "prog_rep.m"
                        }
#line 514 "prog_rep.m"
                    }
#line 511 "prog_rep.m"
                    break;
#line 511 "prog_rep.m"
                  case (MR_Integer) 1:
#line 514 "prog_rep.m"
                    {
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__ConsId_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_73, (MR_Integer) 1)));
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__Args_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_73, (MR_Integer) 2)));
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__ArgModes_264 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_73, (MR_Integer) 3)));
#line 514 "prog_rep.m"
                      MR_String ll_backend__prog_rep__ConsIdRep_265;
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__ArgsRep_266;
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__MaybeArgs_267;
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__MaybeArgsRep_268;
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__V_270_270;
#line 514 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_73, (MR_Integer) 0)));
#line 514 "prog_rep.m"
                      MR_Integer ll_backend__prog_rep__VarRep_273;
#line 513 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_73, (MR_Integer) 4)));
#line 513 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_73, (MR_Integer) 5)));

#line 515 "prog_rep.m"
                      {
#line 515 "prog_rep.m"
                        ll_backend__prog_rep__VarRep_273 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_272);
                      }
#line 516 "prog_rep.m"
                      {
#line 516 "prog_rep.m"
                        ll_backend__prog_rep__ConsIdRep_265 = ll_backend__prog_rep__cons_id_rep_1_f_0(ll_backend__prog_rep__ConsId_262);
                      }
#line 517 "prog_rep.m"
                      {
#line 517 "prog_rep.m"
                        ll_backend__prog_rep__ArgsRep_266 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_263);
                      }
#line 518 "prog_rep.m"
                      {
#line 518 "prog_rep.m"
                        ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__ArgModes_264, ll_backend__prog_rep__Args_263, &ll_backend__prog_rep__MaybeArgs_267);
                      }
#line 519 "prog_rep.m"
                      {
#line 519 "prog_rep.m"
                        ll_backend__prog_rep__V_270_270 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 519 "prog_rep.m"
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
#line 519 "prog_rep.m"
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6));
#line 519 "prog_rep.m"
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 519 "prog_rep.m"
                        MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 3) = ((MR_Box) (ll_backend__prog_rep__V_145_145));
#line 519 "prog_rep.m"
                      }
#line 519 "prog_rep.m"
                      {
#line 519 "prog_rep.m"
                        ll_backend__prog_rep__MaybeArgsRep_268 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[4], (MR_Word) &ll_backend__prog_rep_scalar_common_1[5], ll_backend__prog_rep__V_270_270, ll_backend__prog_rep__MaybeArgs_267);
                      }
#line 533 "prog_rep.m"
                      {
#line 533 "prog_rep.m"
                        ll_backend__prog_rep__succeeded = mercury__list__member_2_p_0(ll_backend__prog_rep__TypeInfo_222_222, ((MR_Box) (ll_backend__prog_rep__Var_272)), ll_backend__prog_rep__BoundVars_68);
                      }
#line 536 "prog_rep.m"
                      if (ll_backend__prog_rep__succeeded)
#line 534 "prog_rep.m"
                        {
#line 534 "prog_rep.m"
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 534 "prog_rep.m"
                          MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_273));
#line 534 "prog_rep.m"
                          MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_265));
#line 534 "prog_rep.m"
                          MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__MaybeArgsRep_268));
#line 534 "prog_rep.m"
                        }
#line 536 "prog_rep.m"
                      else
#line 537 "prog_rep.m"
                        {
#line 537 "prog_rep.m"
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 537 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_273));
#line 537 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_265));
#line 537 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_266));
#line 537 "prog_rep.m"
                        }
#line 514 "prog_rep.m"
                    }
#line 511 "prog_rep.m"
                    break;
#line 511 "prog_rep.m"
                  case (MR_Integer) 2:
#line 507 "prog_rep.m"
                    {
#line 507 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__Target_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__Uni_73, (MR_Integer) 0)));
#line 507 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__Source_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__Uni_73, (MR_Integer) 1)));
#line 507 "prog_rep.m"
                      MR_Integer ll_backend__prog_rep__V_169_169;
#line 507 "prog_rep.m"
                      MR_Integer ll_backend__prog_rep__V_170_170;

#line 509 "prog_rep.m"
                      {
#line 509 "prog_rep.m"
                        ll_backend__prog_rep__V_169_169 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Target_75);
                      }
#line 510 "prog_rep.m"
                      {
#line 510 "prog_rep.m"
                        ll_backend__prog_rep__V_170_170 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Source_76);
                      }
#line 508 "prog_rep.m"
                      {
#line 508 "prog_rep.m"
                        ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 508 "prog_rep.m"
                        MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 508 "prog_rep.m"
                        MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__V_169_169));
#line 508 "prog_rep.m"
                        MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__V_170_170));
#line 508 "prog_rep.m"
                      }
#line 507 "prog_rep.m"
                    }
#line 511 "prog_rep.m"
                    break;
#line 511 "prog_rep.m"
                  case (MR_Integer) 3:
#line 511 "prog_rep.m"
#line 511 "prog_rep.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Uni_73, (MR_Integer) 0)))) {
#line 511 "prog_rep.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 511 "prog_rep.m"
                      case (MR_Integer) 0:
#line 542 "prog_rep.m"
                        {
#line 542 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Var1_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Uni_73, (MR_Integer) 1)));
#line 542 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Var2_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Uni_73, (MR_Integer) 2)));
#line 542 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__V_163_163;
#line 542 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__V_164_164;

#line 544 "prog_rep.m"
                          {
#line 544 "prog_rep.m"
                            ll_backend__prog_rep__V_163_163 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var1_103);
                          }
#line 545 "prog_rep.m"
                          {
#line 545 "prog_rep.m"
                            ll_backend__prog_rep__V_164_164 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var2_104);
                          }
#line 543 "prog_rep.m"
                          {
#line 543 "prog_rep.m"
                            ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 543 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__V_163_163));
#line 543 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__V_164_164));
#line 543 "prog_rep.m"
                          }
#line 542 "prog_rep.m"
                        }
#line 511 "prog_rep.m"
                        break;
#line 511 "prog_rep.m"
                      case (MR_Integer) 1:
#line 547 "prog_rep.m"
                        {
#line 548 "prog_rep.m"
                          {
#line 548 "prog_rep.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "complicated_unify");
#line 548 "prog_rep.m"
                            return;
                          }
#line 547 "prog_rep.m"
                        }
#line 511 "prog_rep.m"
                        break;
#line 511 "prog_rep.m"
                    }
#line 511 "prog_rep.m"
                    break;
#line 511 "prog_rep.m"
                }
#line 505 "prog_rep.m"
              }
#line 550 "prog_rep.m"
              break;
#line 550 "prog_rep.m"
            case (MR_Integer) 2:
#line 573 "prog_rep.m"
              {
#line 573 "prog_rep.m"
                MR_Word ll_backend__prog_rep__PredId_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
#line 573 "prog_rep.m"
                MR_Word ll_backend__prog_rep__Builtin_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 573 "prog_rep.m"
                MR_Word ll_backend__prog_rep__PredInfo_129;
#line 573 "prog_rep.m"
                MR_Word ll_backend__prog_rep__ModuleSymName_130;
#line 573 "prog_rep.m"
                MR_String ll_backend__prog_rep__ModuleName_131;
#line 573 "prog_rep.m"
                MR_String ll_backend__prog_rep__PredName_132;
#line 573 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 4)));
#line 573 "prog_rep.m"
                MR_Word ll_backend__prog_rep__Args_196 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 573 "prog_rep.m"
                MR_Word ll_backend__prog_rep__ArgsRep_197;
#line 573 "prog_rep.m"
                MR_Integer ll_backend__prog_rep__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 573 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 573 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));
#line 574 "prog_rep.m"
                MR_String ll_backend__prog_rep__V_208_208 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 0)));
#line 574 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 1)));
#line 574 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 2)));
#line 574 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 3)));
#line 574 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 5)));

#line 574 "prog_rep.m"
                {
#line 574 "prog_rep.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__prog_rep__V_149_149, ll_backend__prog_rep__PredId_124, &ll_backend__prog_rep__PredInfo_129);
                }
#line 575 "prog_rep.m"
                {
#line 575 "prog_rep.m"
                  ll_backend__prog_rep__ModuleSymName_130 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__prog_rep__PredInfo_129);
                }
#line 576 "prog_rep.m"
                {
#line 576 "prog_rep.m"
                  ll_backend__prog_rep__ModuleName_131 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep__ModuleSymName_130);
                }
#line 577 "prog_rep.m"
                {
#line 577 "prog_rep.m"
                  ll_backend__prog_rep__PredName_132 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__prog_rep__PredInfo_129);
                }
#line 578 "prog_rep.m"
                {
#line 578 "prog_rep.m"
                  ll_backend__prog_rep__ArgsRep_197 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_196);
                }
#line 582 "prog_rep.m"
#line 582 "prog_rep.m"
                switch (ll_backend__prog_rep__Builtin_126) {
#line 582 "prog_rep.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 582 "prog_rep.m"
                  case (MR_Integer) 0:
#line 584 "prog_rep.m"
                    {
#line 584 "prog_rep.m"
                      ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 584 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 584 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ModuleName_131));
#line 584 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__PredName_132));
#line 584 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_197));
#line 584 "prog_rep.m"
                    }
#line 582 "prog_rep.m"
                    break;
#line 582 "prog_rep.m"
                  case (MR_Integer) 2:
#line 581 "prog_rep.m"
                    {
#line 581 "prog_rep.m"
                      ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 581 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 581 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ModuleName_131));
#line 581 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__PredName_132));
#line 581 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_197));
#line 581 "prog_rep.m"
                    }
#line 582 "prog_rep.m"
                    break;
#line 582 "prog_rep.m"
                  case (MR_Integer) 1:
#line 586 "prog_rep.m"
                    {
#line 587 "prog_rep.m"
                      {
#line 587 "prog_rep.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "out_of_line_builtin");
#line 587 "prog_rep.m"
                        return;
                      }
#line 586 "prog_rep.m"
                    }
#line 582 "prog_rep.m"
                    break;
#line 582 "prog_rep.m"
                }
#line 573 "prog_rep.m"
              }
#line 550 "prog_rep.m"
              break;
#line 550 "prog_rep.m"
            case (MR_Integer) 3:
#line 550 "prog_rep.m"
#line 550 "prog_rep.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) {
#line 550 "prog_rep.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 550 "prog_rep.m"
                case (MR_Integer) 0:
#line 551 "prog_rep.m"
                  {
#line 551 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__GenericCall_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 551 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__Args_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 551 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__ArgsRep_195;
#line 551 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 551 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 551 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));

#line 552 "prog_rep.m"
                    {
#line 552 "prog_rep.m"
                      ll_backend__prog_rep__ArgsRep_195 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_194);
                    }
#line 557 "prog_rep.m"
#line 557 "prog_rep.m"
                    switch (MR_tag((MR_Word) ll_backend__prog_rep__GenericCall_108)) {
#line 557 "prog_rep.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 557 "prog_rep.m"
                      case (MR_Integer) 0:
#line 554 "prog_rep.m"
                        {
#line 554 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__PredVar_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 0)));
#line 554 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__PredVarRep_116;
#line 554 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 1)));
#line 554 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 2)));
#line 554 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 3)));

#line 555 "prog_rep.m"
                          {
#line 555 "prog_rep.m"
                            ll_backend__prog_rep__PredVarRep_116 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__PredVar_112);
                          }
#line 556 "prog_rep.m"
                          {
#line 556 "prog_rep.m"
                            ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 556 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 556 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__PredVarRep_116));
#line 556 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
#line 556 "prog_rep.m"
                          }
#line 554 "prog_rep.m"
                        }
#line 557 "prog_rep.m"
                        break;
#line 557 "prog_rep.m"
                      case (MR_Integer) 1:
#line 558 "prog_rep.m"
                        {
#line 558 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__Num_117 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 1)));
#line 558 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 0)));
#line 558 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__VarRep_189;
#line 558 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 2)));
#line 558 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 3)));

#line 559 "prog_rep.m"
                          {
#line 559 "prog_rep.m"
                            ll_backend__prog_rep__VarRep_189 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_188);
                          }
#line 560 "prog_rep.m"
                          {
#line 560 "prog_rep.m"
                            ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 560 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 560 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__VarRep_189));
#line 560 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__Num_117));
#line 560 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
#line 560 "prog_rep.m"
                          }
#line 558 "prog_rep.m"
                        }
#line 557 "prog_rep.m"
                        break;
#line 557 "prog_rep.m"
                      case (MR_Integer) 2:
#line 562 "prog_rep.m"
                        {
#line 562 "prog_rep.m"
                          MR_String ll_backend__prog_rep__EventName_120 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 0)));

#line 563 "prog_rep.m"
                          {
#line 563 "prog_rep.m"
                            ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 563 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 563 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__EventName_120));
#line 563 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
#line 563 "prog_rep.m"
                          }
#line 562 "prog_rep.m"
                        }
#line 557 "prog_rep.m"
                        break;
#line 557 "prog_rep.m"
                      case (MR_Integer) 3:
#line 568 "prog_rep.m"
                        {
#line 568 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__InputArgRep_122;
#line 568 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__OutputArgRep_123;
#line 566 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_155_155;
#line 566 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_156_156;

#line 566 "prog_rep.m"
                          ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__ArgsRep_195)) == (MR_mktag((MR_Integer) 1)));
#line 566 "prog_rep.m"
                          if (ll_backend__prog_rep__succeeded)
#line 566 "prog_rep.m"
                            {
#line 566 "prog_rep.m"
                              ll_backend__prog_rep__InputArgRep_122 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ArgsRep_195, (MR_Integer) 0)));
#line 566 "prog_rep.m"
                              ll_backend__prog_rep__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ArgsRep_195, (MR_Integer) 1)));
#line 566 "prog_rep.m"
                              ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__V_155_155)) == (MR_mktag((MR_Integer) 1)));
#line 566 "prog_rep.m"
                              if (ll_backend__prog_rep__succeeded)
#line 566 "prog_rep.m"
                                {
#line 566 "prog_rep.m"
                                  ll_backend__prog_rep__OutputArgRep_123 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_155_155, (MR_Integer) 0)));
#line 566 "prog_rep.m"
                                  ll_backend__prog_rep__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_155_155, (MR_Integer) 1)));
#line 566 "prog_rep.m"
                                  ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_156_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 566 "prog_rep.m"
                                }
#line 566 "prog_rep.m"
                            }
#line 568 "prog_rep.m"
                          if (ll_backend__prog_rep__succeeded)
#line 567 "prog_rep.m"
                            {
#line 567 "prog_rep.m"
                              ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 567 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 567 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__OutputArgRep_123));
#line 567 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__InputArgRep_122));
#line 567 "prog_rep.m"
                            }
#line 568 "prog_rep.m"
                          else
#line 569 "prog_rep.m"
                            {
#line 569 "prog_rep.m"
                              {
#line 569 "prog_rep.m"
                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "cast arity != 2");
#line 569 "prog_rep.m"
                                return;
                              }
#line 569 "prog_rep.m"
                            }
#line 568 "prog_rep.m"
                        }
#line 557 "prog_rep.m"
                        break;
#line 557 "prog_rep.m"
                    }
#line 551 "prog_rep.m"
                  }
#line 550 "prog_rep.m"
                  break;
#line 550 "prog_rep.m"
                case (MR_Integer) 1:
#line 590 "prog_rep.m"
                  {
#line 590 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__ArgVarsRep_139;
#line 590 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_146_146;
#line 590 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__Args_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 590 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 590 "prog_rep.m"
                    MR_Word ll_backend__prog_rep___PredId_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 590 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 590 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));
#line 590 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 6)));
#line 590 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 7)));

#line 592 "prog_rep.m"
                    {
#line 592 "prog_rep.m"
                      ll_backend__prog_rep__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 592 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[0]));
#line 592 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3));
#line 592 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 592 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 3) = ((MR_Box) (ll_backend__prog_rep__V_145_145));
#line 592 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 4) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_2[3]));
#line 592 "prog_rep.m"
                    }
#line 591 "prog_rep.m"
                    {
#line 591 "prog_rep.m"
                      ll_backend__prog_rep__ArgVarsRep_139 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_146_146, ll_backend__prog_rep__Args_198);
                    }
#line 593 "prog_rep.m"
                    {
#line 593 "prog_rep.m"
                      ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 593 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ArgVarsRep_139));
#line 593 "prog_rep.m"
                    }
#line 590 "prog_rep.m"
                  }
#line 550 "prog_rep.m"
                  break;
#line 550 "prog_rep.m"
              }
#line 550 "prog_rep.m"
              break;
#line 550 "prog_rep.m"
          }
#line 595 "prog_rep.m"
          {
#line 595 "prog_rep.m"
            ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_rep.m"
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 595 "prog_rep.m"
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__FileName_66));
#line 595 "prog_rep.m"
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__LineNo_67));
#line 595 "prog_rep.m"
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 3) = ((MR_Box) (ll_backend__prog_rep__BoundVarsRep_69));
#line 595 "prog_rep.m"
            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 4) = ((MR_Box) (ll_backend__prog_rep__AtomicGoalRep_77));
#line 595 "prog_rep.m"
          }
#line 500 "prog_rep.m"
        }
#line 453 "prog_rep.m"
        break;
#line 453 "prog_rep.m"
      case (MR_Integer) 3:
#line 453 "prog_rep.m"
#line 453 "prog_rep.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) {
#line 453 "prog_rep.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 453 "prog_rep.m"
          case (MR_Integer) 0:
#line 453 "prog_rep.m"
          case (MR_Integer) 1:
#line 500 "prog_rep.m"
            {
#line 500 "prog_rep.m"
              MR_Word ll_backend__prog_rep__TypeInfo_222_222;
#line 500 "prog_rep.m"
              MR_Word ll_backend__prog_rep__TypeCtorInfo_223_223;
#line 500 "prog_rep.m"
              MR_String ll_backend__prog_rep__FileName_66;
#line 500 "prog_rep.m"
              MR_Integer ll_backend__prog_rep__LineNo_67;
#line 500 "prog_rep.m"
              MR_Word ll_backend__prog_rep__BoundVars_68;
#line 500 "prog_rep.m"
              MR_Word ll_backend__prog_rep__BoundVarsRep_69;
#line 500 "prog_rep.m"
              MR_Word ll_backend__prog_rep__AtomicGoalRep_77;
#line 500 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_145_145;

#line 501 "prog_rep.m"
              {
#line 501 "prog_rep.m"
                ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(ll_backend__prog_rep__GoalInfo_8, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Info_5, &ll_backend__prog_rep__FileName_66, &ll_backend__prog_rep__LineNo_67, &ll_backend__prog_rep__BoundVars_68);
              }
#line 9908 "ll_backend.prog_rep.c"
              ll_backend__prog_rep__TypeInfo_222_222 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[3];
#line 9910 "ll_backend.prog_rep.c"
              ll_backend__prog_rep__TypeCtorInfo_223_223 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 503 "prog_rep.m"
              {
#line 503 "prog_rep.m"
                ll_backend__prog_rep__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 503 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
#line 503 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1));
#line 503 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 503 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 503 "prog_rep.m"
              }
#line 503 "prog_rep.m"
              {
#line 503 "prog_rep.m"
                ll_backend__prog_rep__BoundVarsRep_69 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__BoundVars_68);
              }
#line 550 "prog_rep.m"
#line 550 "prog_rep.m"
              switch (MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) {
#line 550 "prog_rep.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 550 "prog_rep.m"
                case (MR_Integer) 1:
#line 505 "prog_rep.m"
                  {
#line 505 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__Uni_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 505 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
#line 505 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 505 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 505 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));

#line 511 "prog_rep.m"
#line 511 "prog_rep.m"
                    switch (MR_tag((MR_Word) ll_backend__prog_rep__Uni_73)) {
#line 511 "prog_rep.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 511 "prog_rep.m"
                      case (MR_Integer) 0:
#line 514 "prog_rep.m"
                        {
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__ConsId_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 1)));
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Args_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 2)));
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__ArgModes_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 3)));
#line 514 "prog_rep.m"
                          MR_String ll_backend__prog_rep__ConsIdRep_86;
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__ArgsRep_87;
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__MaybeArgs_88;
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__MaybeArgsRep_89;
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_166_166;
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 0)));
#line 514 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__VarRep_183;
#line 512 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 4)));
#line 512 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 5)));
#line 512 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_73, (MR_Integer) 6)));
#line 523 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_168_168;

#line 515 "prog_rep.m"
                          {
#line 515 "prog_rep.m"
                            ll_backend__prog_rep__VarRep_183 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_182);
                          }
#line 516 "prog_rep.m"
                          {
#line 516 "prog_rep.m"
                            ll_backend__prog_rep__ConsIdRep_86 = ll_backend__prog_rep__cons_id_rep_1_f_0(ll_backend__prog_rep__ConsId_78);
                          }
#line 517 "prog_rep.m"
                          {
#line 517 "prog_rep.m"
                            ll_backend__prog_rep__ArgsRep_87 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_79);
                          }
#line 518 "prog_rep.m"
                          {
#line 518 "prog_rep.m"
                            ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__ArgModes_80, ll_backend__prog_rep__Args_79, &ll_backend__prog_rep__MaybeArgs_88);
                          }
#line 519 "prog_rep.m"
                          {
#line 519 "prog_rep.m"
                            ll_backend__prog_rep__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 519 "prog_rep.m"
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
#line 519 "prog_rep.m"
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4));
#line 519 "prog_rep.m"
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 519 "prog_rep.m"
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_166_166, 3) = ((MR_Box) (ll_backend__prog_rep__V_145_145));
#line 519 "prog_rep.m"
                          }
#line 519 "prog_rep.m"
                          {
#line 519 "prog_rep.m"
                            ll_backend__prog_rep__MaybeArgsRep_89 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[4], (MR_Word) &ll_backend__prog_rep_scalar_common_1[5], ll_backend__prog_rep__V_166_166, ll_backend__prog_rep__MaybeArgs_88);
                          }
#line 523 "prog_rep.m"
                          {
#line 523 "prog_rep.m"
                            ll_backend__prog_rep__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 523 "prog_rep.m"
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[1]));
#line 523 "prog_rep.m"
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5));
#line 523 "prog_rep.m"
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 523 "prog_rep.m"
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_168_168, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 523 "prog_rep.m"
                          }
#line 523 "prog_rep.m"
                          {
#line 523 "prog_rep.m"
                            ll_backend__prog_rep__succeeded = mercury__list__all_true_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, ll_backend__prog_rep__V_168_168, ll_backend__prog_rep__ArgModes_80);
                          }
#line 527 "prog_rep.m"
                          if (ll_backend__prog_rep__succeeded)
#line 525 "prog_rep.m"
                            {
#line 525 "prog_rep.m"
                              ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 525 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_183));
#line 525 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_86));
#line 525 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_87));
#line 525 "prog_rep.m"
                            }
#line 527 "prog_rep.m"
                          else
#line 528 "prog_rep.m"
                            {
#line 528 "prog_rep.m"
                              ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 528 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 528 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__VarRep_183));
#line 528 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_86));
#line 528 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__MaybeArgsRep_89));
#line 528 "prog_rep.m"
                            }
#line 514 "prog_rep.m"
                        }
#line 511 "prog_rep.m"
                        break;
#line 511 "prog_rep.m"
                      case (MR_Integer) 1:
#line 514 "prog_rep.m"
                        {
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__ConsId_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_73, (MR_Integer) 1)));
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Args_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_73, (MR_Integer) 2)));
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__ArgModes_264 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_73, (MR_Integer) 3)));
#line 514 "prog_rep.m"
                          MR_String ll_backend__prog_rep__ConsIdRep_265;
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__ArgsRep_266;
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__MaybeArgs_267;
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__MaybeArgsRep_268;
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_270_270;
#line 514 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_73, (MR_Integer) 0)));
#line 514 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__VarRep_273;
#line 513 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_73, (MR_Integer) 4)));
#line 513 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_73, (MR_Integer) 5)));

#line 515 "prog_rep.m"
                          {
#line 515 "prog_rep.m"
                            ll_backend__prog_rep__VarRep_273 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_272);
                          }
#line 516 "prog_rep.m"
                          {
#line 516 "prog_rep.m"
                            ll_backend__prog_rep__ConsIdRep_265 = ll_backend__prog_rep__cons_id_rep_1_f_0(ll_backend__prog_rep__ConsId_262);
                          }
#line 517 "prog_rep.m"
                          {
#line 517 "prog_rep.m"
                            ll_backend__prog_rep__ArgsRep_266 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_263);
                          }
#line 518 "prog_rep.m"
                          {
#line 518 "prog_rep.m"
                            ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__ArgModes_264, ll_backend__prog_rep__Args_263, &ll_backend__prog_rep__MaybeArgs_267);
                          }
#line 519 "prog_rep.m"
                          {
#line 519 "prog_rep.m"
                            ll_backend__prog_rep__V_270_270 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 519 "prog_rep.m"
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
#line 519 "prog_rep.m"
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6));
#line 519 "prog_rep.m"
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 519 "prog_rep.m"
                            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_270_270, 3) = ((MR_Box) (ll_backend__prog_rep__V_145_145));
#line 519 "prog_rep.m"
                          }
#line 519 "prog_rep.m"
                          {
#line 519 "prog_rep.m"
                            ll_backend__prog_rep__MaybeArgsRep_268 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[4], (MR_Word) &ll_backend__prog_rep_scalar_common_1[5], ll_backend__prog_rep__V_270_270, ll_backend__prog_rep__MaybeArgs_267);
                          }
#line 533 "prog_rep.m"
                          {
#line 533 "prog_rep.m"
                            ll_backend__prog_rep__succeeded = mercury__list__member_2_p_0(ll_backend__prog_rep__TypeInfo_222_222, ((MR_Box) (ll_backend__prog_rep__Var_272)), ll_backend__prog_rep__BoundVars_68);
                          }
#line 536 "prog_rep.m"
                          if (ll_backend__prog_rep__succeeded)
#line 534 "prog_rep.m"
                            {
#line 534 "prog_rep.m"
                              ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 534 "prog_rep.m"
                              MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_273));
#line 534 "prog_rep.m"
                              MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_265));
#line 534 "prog_rep.m"
                              MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__MaybeArgsRep_268));
#line 534 "prog_rep.m"
                            }
#line 536 "prog_rep.m"
                          else
#line 537 "prog_rep.m"
                            {
#line 537 "prog_rep.m"
                              ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 537 "prog_rep.m"
                              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_273));
#line 537 "prog_rep.m"
                              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_265));
#line 537 "prog_rep.m"
                              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_266));
#line 537 "prog_rep.m"
                            }
#line 514 "prog_rep.m"
                        }
#line 511 "prog_rep.m"
                        break;
#line 511 "prog_rep.m"
                      case (MR_Integer) 2:
#line 507 "prog_rep.m"
                        {
#line 507 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Target_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__Uni_73, (MR_Integer) 0)));
#line 507 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Source_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__Uni_73, (MR_Integer) 1)));
#line 507 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__V_169_169;
#line 507 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__V_170_170;

#line 509 "prog_rep.m"
                          {
#line 509 "prog_rep.m"
                            ll_backend__prog_rep__V_169_169 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Target_75);
                          }
#line 510 "prog_rep.m"
                          {
#line 510 "prog_rep.m"
                            ll_backend__prog_rep__V_170_170 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Source_76);
                          }
#line 508 "prog_rep.m"
                          {
#line 508 "prog_rep.m"
                            ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 508 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 508 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__V_169_169));
#line 508 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__V_170_170));
#line 508 "prog_rep.m"
                          }
#line 507 "prog_rep.m"
                        }
#line 511 "prog_rep.m"
                        break;
#line 511 "prog_rep.m"
                      case (MR_Integer) 3:
#line 511 "prog_rep.m"
#line 511 "prog_rep.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Uni_73, (MR_Integer) 0)))) {
#line 511 "prog_rep.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 511 "prog_rep.m"
                          case (MR_Integer) 0:
#line 542 "prog_rep.m"
                            {
#line 542 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__Var1_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Uni_73, (MR_Integer) 1)));
#line 542 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__Var2_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Uni_73, (MR_Integer) 2)));
#line 542 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__V_163_163;
#line 542 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__V_164_164;

#line 544 "prog_rep.m"
                              {
#line 544 "prog_rep.m"
                                ll_backend__prog_rep__V_163_163 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var1_103);
                              }
#line 545 "prog_rep.m"
                              {
#line 545 "prog_rep.m"
                                ll_backend__prog_rep__V_164_164 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var2_104);
                              }
#line 543 "prog_rep.m"
                              {
#line 543 "prog_rep.m"
                                ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 543 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__V_163_163));
#line 543 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__V_164_164));
#line 543 "prog_rep.m"
                              }
#line 542 "prog_rep.m"
                            }
#line 511 "prog_rep.m"
                            break;
#line 511 "prog_rep.m"
                          case (MR_Integer) 1:
#line 547 "prog_rep.m"
                            {
#line 548 "prog_rep.m"
                              {
#line 548 "prog_rep.m"
                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "complicated_unify");
#line 548 "prog_rep.m"
                                return;
                              }
#line 547 "prog_rep.m"
                            }
#line 511 "prog_rep.m"
                            break;
#line 511 "prog_rep.m"
                        }
#line 511 "prog_rep.m"
                        break;
#line 511 "prog_rep.m"
                    }
#line 505 "prog_rep.m"
                  }
#line 550 "prog_rep.m"
                  break;
#line 550 "prog_rep.m"
                case (MR_Integer) 2:
#line 573 "prog_rep.m"
                  {
#line 573 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__PredId_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
#line 573 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__Builtin_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 573 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__PredInfo_129;
#line 573 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__ModuleSymName_130;
#line 573 "prog_rep.m"
                    MR_String ll_backend__prog_rep__ModuleName_131;
#line 573 "prog_rep.m"
                    MR_String ll_backend__prog_rep__PredName_132;
#line 573 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 4)));
#line 573 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__Args_196 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 573 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__ArgsRep_197;
#line 573 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 573 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 573 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));
#line 574 "prog_rep.m"
                    MR_String ll_backend__prog_rep__V_208_208 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 0)));
#line 574 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 1)));
#line 574 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 2)));
#line 574 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 3)));
#line 574 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 5)));

#line 574 "prog_rep.m"
                    {
#line 574 "prog_rep.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__prog_rep__V_149_149, ll_backend__prog_rep__PredId_124, &ll_backend__prog_rep__PredInfo_129);
                    }
#line 575 "prog_rep.m"
                    {
#line 575 "prog_rep.m"
                      ll_backend__prog_rep__ModuleSymName_130 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__prog_rep__PredInfo_129);
                    }
#line 576 "prog_rep.m"
                    {
#line 576 "prog_rep.m"
                      ll_backend__prog_rep__ModuleName_131 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep__ModuleSymName_130);
                    }
#line 577 "prog_rep.m"
                    {
#line 577 "prog_rep.m"
                      ll_backend__prog_rep__PredName_132 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__prog_rep__PredInfo_129);
                    }
#line 578 "prog_rep.m"
                    {
#line 578 "prog_rep.m"
                      ll_backend__prog_rep__ArgsRep_197 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_196);
                    }
#line 582 "prog_rep.m"
#line 582 "prog_rep.m"
                    switch (ll_backend__prog_rep__Builtin_126) {
#line 582 "prog_rep.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 582 "prog_rep.m"
                      case (MR_Integer) 0:
#line 584 "prog_rep.m"
                        {
#line 584 "prog_rep.m"
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 584 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 584 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ModuleName_131));
#line 584 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__PredName_132));
#line 584 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_197));
#line 584 "prog_rep.m"
                        }
#line 582 "prog_rep.m"
                        break;
#line 582 "prog_rep.m"
                      case (MR_Integer) 2:
#line 581 "prog_rep.m"
                        {
#line 581 "prog_rep.m"
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 581 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 581 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ModuleName_131));
#line 581 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__PredName_132));
#line 581 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_197));
#line 581 "prog_rep.m"
                        }
#line 582 "prog_rep.m"
                        break;
#line 582 "prog_rep.m"
                      case (MR_Integer) 1:
#line 586 "prog_rep.m"
                        {
#line 587 "prog_rep.m"
                          {
#line 587 "prog_rep.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "out_of_line_builtin");
#line 587 "prog_rep.m"
                            return;
                          }
#line 586 "prog_rep.m"
                        }
#line 582 "prog_rep.m"
                        break;
#line 582 "prog_rep.m"
                    }
#line 573 "prog_rep.m"
                  }
#line 550 "prog_rep.m"
                  break;
#line 550 "prog_rep.m"
                case (MR_Integer) 3:
#line 550 "prog_rep.m"
#line 550 "prog_rep.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) {
#line 550 "prog_rep.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 550 "prog_rep.m"
                    case (MR_Integer) 0:
#line 551 "prog_rep.m"
                      {
#line 551 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__GenericCall_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 551 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__Args_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 551 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__ArgsRep_195;
#line 551 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 551 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 551 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));

#line 552 "prog_rep.m"
                        {
#line 552 "prog_rep.m"
                          ll_backend__prog_rep__ArgsRep_195 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_222, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_194);
                        }
#line 557 "prog_rep.m"
#line 557 "prog_rep.m"
                        switch (MR_tag((MR_Word) ll_backend__prog_rep__GenericCall_108)) {
#line 557 "prog_rep.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 557 "prog_rep.m"
                          case (MR_Integer) 0:
#line 554 "prog_rep.m"
                            {
#line 554 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__PredVar_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 0)));
#line 554 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__PredVarRep_116;
#line 554 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 1)));
#line 554 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 2)));
#line 554 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 3)));

#line 555 "prog_rep.m"
                              {
#line 555 "prog_rep.m"
                                ll_backend__prog_rep__PredVarRep_116 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__PredVar_112);
                              }
#line 556 "prog_rep.m"
                              {
#line 556 "prog_rep.m"
                                ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 556 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 556 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__PredVarRep_116));
#line 556 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
#line 556 "prog_rep.m"
                              }
#line 554 "prog_rep.m"
                            }
#line 557 "prog_rep.m"
                            break;
#line 557 "prog_rep.m"
                          case (MR_Integer) 1:
#line 558 "prog_rep.m"
                            {
#line 558 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__Num_117 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 1)));
#line 558 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 0)));
#line 558 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__VarRep_189;
#line 558 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 2)));
#line 558 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 3)));

#line 559 "prog_rep.m"
                              {
#line 559 "prog_rep.m"
                                ll_backend__prog_rep__VarRep_189 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_188);
                              }
#line 560 "prog_rep.m"
                              {
#line 560 "prog_rep.m"
                                ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 560 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 560 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__VarRep_189));
#line 560 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__Num_117));
#line 560 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
#line 560 "prog_rep.m"
                              }
#line 558 "prog_rep.m"
                            }
#line 557 "prog_rep.m"
                            break;
#line 557 "prog_rep.m"
                          case (MR_Integer) 2:
#line 562 "prog_rep.m"
                            {
#line 562 "prog_rep.m"
                              MR_String ll_backend__prog_rep__EventName_120 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GenericCall_108, (MR_Integer) 0)));

#line 563 "prog_rep.m"
                              {
#line 563 "prog_rep.m"
                                ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 563 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 563 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__EventName_120));
#line 563 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
#line 563 "prog_rep.m"
                              }
#line 562 "prog_rep.m"
                            }
#line 557 "prog_rep.m"
                            break;
#line 557 "prog_rep.m"
                          case (MR_Integer) 3:
#line 568 "prog_rep.m"
                            {
#line 568 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__InputArgRep_122;
#line 568 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__OutputArgRep_123;
#line 566 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__V_155_155;
#line 566 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__V_156_156;

#line 566 "prog_rep.m"
                              ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__ArgsRep_195)) == (MR_mktag((MR_Integer) 1)));
#line 566 "prog_rep.m"
                              if (ll_backend__prog_rep__succeeded)
#line 566 "prog_rep.m"
                                {
#line 566 "prog_rep.m"
                                  ll_backend__prog_rep__InputArgRep_122 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ArgsRep_195, (MR_Integer) 0)));
#line 566 "prog_rep.m"
                                  ll_backend__prog_rep__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ArgsRep_195, (MR_Integer) 1)));
#line 566 "prog_rep.m"
                                  ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__V_155_155)) == (MR_mktag((MR_Integer) 1)));
#line 566 "prog_rep.m"
                                  if (ll_backend__prog_rep__succeeded)
#line 566 "prog_rep.m"
                                    {
#line 566 "prog_rep.m"
                                      ll_backend__prog_rep__OutputArgRep_123 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_155_155, (MR_Integer) 0)));
#line 566 "prog_rep.m"
                                      ll_backend__prog_rep__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_155_155, (MR_Integer) 1)));
#line 566 "prog_rep.m"
                                      ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_156_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 566 "prog_rep.m"
                                    }
#line 566 "prog_rep.m"
                                }
#line 568 "prog_rep.m"
                              if (ll_backend__prog_rep__succeeded)
#line 567 "prog_rep.m"
                                {
#line 567 "prog_rep.m"
                                  ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 567 "prog_rep.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 567 "prog_rep.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__OutputArgRep_123));
#line 567 "prog_rep.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 2) = ((MR_Box) (ll_backend__prog_rep__InputArgRep_122));
#line 567 "prog_rep.m"
                                }
#line 568 "prog_rep.m"
                              else
#line 569 "prog_rep.m"
                                {
#line 569 "prog_rep.m"
                                  {
#line 569 "prog_rep.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "cast arity != 2");
#line 569 "prog_rep.m"
                                    return;
                                  }
#line 569 "prog_rep.m"
                                }
#line 568 "prog_rep.m"
                            }
#line 557 "prog_rep.m"
                            break;
#line 557 "prog_rep.m"
                        }
#line 551 "prog_rep.m"
                      }
#line 550 "prog_rep.m"
                      break;
#line 550 "prog_rep.m"
                    case (MR_Integer) 1:
#line 590 "prog_rep.m"
                      {
#line 590 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__ArgVarsRep_139;
#line 590 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_146_146;
#line 590 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__Args_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 590 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 590 "prog_rep.m"
                        MR_Word ll_backend__prog_rep___PredId_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 590 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 590 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));
#line 590 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 6)));
#line 590 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 7)));

#line 592 "prog_rep.m"
                        {
#line 592 "prog_rep.m"
                          ll_backend__prog_rep__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 592 "prog_rep.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[0]));
#line 592 "prog_rep.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3));
#line 592 "prog_rep.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 592 "prog_rep.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 3) = ((MR_Box) (ll_backend__prog_rep__V_145_145));
#line 592 "prog_rep.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 4) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_2[3]));
#line 592 "prog_rep.m"
                        }
#line 591 "prog_rep.m"
                        {
#line 591 "prog_rep.m"
                          ll_backend__prog_rep__ArgVarsRep_139 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ll_backend__prog_rep__TypeCtorInfo_223_223, ll_backend__prog_rep__V_146_146, ll_backend__prog_rep__Args_198);
                        }
#line 593 "prog_rep.m"
                        {
#line 593 "prog_rep.m"
                          ll_backend__prog_rep__AtomicGoalRep_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 593 "prog_rep.m"
                          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_77, 1) = ((MR_Box) (ll_backend__prog_rep__ArgVarsRep_139));
#line 593 "prog_rep.m"
                        }
#line 590 "prog_rep.m"
                      }
#line 550 "prog_rep.m"
                      break;
#line 550 "prog_rep.m"
                  }
#line 550 "prog_rep.m"
                  break;
#line 550 "prog_rep.m"
              }
#line 595 "prog_rep.m"
              {
#line 595 "prog_rep.m"
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 595 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__FileName_66));
#line 595 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__LineNo_67));
#line 595 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 3) = ((MR_Box) (ll_backend__prog_rep__BoundVarsRep_69));
#line 595 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 4) = ((MR_Box) (ll_backend__prog_rep__AtomicGoalRep_77));
#line 595 "prog_rep.m"
              }
#line 500 "prog_rep.m"
            }
#line 453 "prog_rep.m"
            break;
#line 453 "prog_rep.m"
          case (MR_Integer) 2:
#line 438 "prog_rep.m"
            {
#line 438 "prog_rep.m"
              MR_Word ll_backend__prog_rep__ConjType_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 438 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 438 "prog_rep.m"
              MR_Word ll_backend__prog_rep__FlattenParConjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 5)));
#line 438 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Goals_16;
#line 438 "prog_rep.m"
              MR_Word ll_backend__prog_rep__GoalReps_17;
#line 439 "prog_rep.m"
              MR_String ll_backend__prog_rep__V_203_203 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 0)));
#line 439 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 1)));
#line 439 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 2)));
#line 439 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 3)));
#line 439 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 4)));

#line 445 "prog_rep.m"
#line 445 "prog_rep.m"
              switch (ll_backend__prog_rep__FlattenParConjs_15) {
#line 445 "prog_rep.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 445 "prog_rep.m"
                case (MR_Integer) 1:
#line 446 "prog_rep.m"
                  {
#line 446 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_173_173;

#line 447 "prog_rep.m"
                    ll_backend__prog_rep__Goals_16 = ll_backend__prog_rep__Goals0_14;
#line 448 "prog_rep.m"
                    {
#line 448 "prog_rep.m"
                      ll_backend__prog_rep__V_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 448 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[2]));
#line 448 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7));
#line 448 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 448 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 3) = ((MR_Box) (ll_backend__prog_rep__ConjType_13));
#line 448 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 4) = ((MR_Box) ((MR_Integer) 0));
#line 448 "prog_rep.m"
                    }
#line 448 "prog_rep.m"
                    {
#line 448 "prog_rep.m"
                      mercury__require__expect_4_p_0(ll_backend__prog_rep__V_173_173, (MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "non-plain conjunction and declarative debugging");
                    }
#line 446 "prog_rep.m"
                  }
#line 445 "prog_rep.m"
                  break;
#line 445 "prog_rep.m"
                case (MR_Integer) 0:
#line 444 "prog_rep.m"
                  {
#line 444 "prog_rep.m"
                    hlds__goal_util__flatten_conj_2_p_0(ll_backend__prog_rep__Goals0_14, &ll_backend__prog_rep__Goals_16);
                  }
#line 445 "prog_rep.m"
                  break;
#line 445 "prog_rep.m"
              }
#line 451 "prog_rep.m"
              {
#line 451 "prog_rep.m"
                ll_backend__prog_rep__conj_to_conj_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Goals_16, &ll_backend__prog_rep__GoalReps_17);
              }
#line 452 "prog_rep.m"
              {
#line 452 "prog_rep.m"
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 452 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (ll_backend__prog_rep__GoalReps_17));
#line 452 "prog_rep.m"
              }
#line 438 "prog_rep.m"
            }
#line 453 "prog_rep.m"
            break;
#line 453 "prog_rep.m"
          case (MR_Integer) 3:
#line 454 "prog_rep.m"
            {
#line 454 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_172_172;
#line 454 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Goals_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 454 "prog_rep.m"
              MR_Word ll_backend__prog_rep__GoalReps_179;

#line 456 "prog_rep.m"
              {
#line 456 "prog_rep.m"
                ll_backend__prog_rep__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 456 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[1]));
#line 456 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8));
#line 456 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 456 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 456 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 4) = ((MR_Box) (ll_backend__prog_rep__Instmap0_6));
#line 456 "prog_rep.m"
              }
#line 456 "prog_rep.m"
              {
#line 456 "prog_rep.m"
                mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &ll_backend__prog_rep_scalar_common_1[1], ll_backend__prog_rep__V_172_172, ll_backend__prog_rep__Goals_178, &ll_backend__prog_rep__GoalReps_179);
              }
#line 457 "prog_rep.m"
              {
#line 457 "prog_rep.m"
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 457 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (ll_backend__prog_rep__GoalReps_179));
#line 457 "prog_rep.m"
              }
#line 454 "prog_rep.m"
            }
#line 453 "prog_rep.m"
            break;
#line 453 "prog_rep.m"
          case (MR_Integer) 4:
#line 472 "prog_rep.m"
            {
#line 472 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 472 "prog_rep.m"
              MR_Word ll_backend__prog_rep__CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 472 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Cases_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 472 "prog_rep.m"
              MR_Word ll_backend__prog_rep__CasesRep_34;
#line 472 "prog_rep.m"
              MR_Word ll_backend__prog_rep__CanFailRep_35;
#line 472 "prog_rep.m"
              MR_Integer ll_backend__prog_rep__VarRep_36;
#line 472 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_171_171;

#line 473 "prog_rep.m"
              {
#line 473 "prog_rep.m"
                ll_backend__prog_rep__V_171_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 473 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[2]));
#line 473 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9));
#line 473 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 473 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 473 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 4) = ((MR_Box) (ll_backend__prog_rep__Instmap0_6));
#line 473 "prog_rep.m"
              }
#line 473 "prog_rep.m"
              {
#line 473 "prog_rep.m"
                mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &ll_backend__prog_rep_scalar_common_1[2], ll_backend__prog_rep__V_171_171, ll_backend__prog_rep__Cases_33, &ll_backend__prog_rep__CasesRep_34);
              }
#line 477 "prog_rep.m"
#line 477 "prog_rep.m"
              switch (ll_backend__prog_rep__CanFail_32) {
#line 477 "prog_rep.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 477 "prog_rep.m"
                case (MR_Integer) 0:
#line 476 "prog_rep.m"
                  ll_backend__prog_rep__CanFailRep_35 = (MR_Integer) 0;
#line 477 "prog_rep.m"
                  break;
#line 477 "prog_rep.m"
                case (MR_Integer) 1:
#line 479 "prog_rep.m"
                  ll_backend__prog_rep__CanFailRep_35 = (MR_Integer) 1;
#line 477 "prog_rep.m"
                  break;
#line 477 "prog_rep.m"
              }
#line 481 "prog_rep.m"
              {
#line 481 "prog_rep.m"
                ll_backend__prog_rep__VarRep_36 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_31);
              }
#line 482 "prog_rep.m"
              {
#line 482 "prog_rep.m"
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 482 "prog_rep.m"
                MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_36));
#line 482 "prog_rep.m"
                MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__CanFailRep_35));
#line 482 "prog_rep.m"
                MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__CasesRep_34));
#line 482 "prog_rep.m"
              }
#line 472 "prog_rep.m"
            }
#line 453 "prog_rep.m"
            break;
#line 453 "prog_rep.m"
          case (MR_Integer) 5:
#line 484 "prog_rep.m"
            {
#line 484 "prog_rep.m"
              MR_Word ll_backend__prog_rep__SubGoalInfo_39;
#line 484 "prog_rep.m"
              MR_Word ll_backend__prog_rep__OuterDetism_40;
#line 484 "prog_rep.m"
              MR_Word ll_backend__prog_rep__InnerDetism_41;
#line 484 "prog_rep.m"
              MR_Word ll_backend__prog_rep__MaybeCut_42;
#line 484 "prog_rep.m"
              MR_Word ll_backend__prog_rep__SubGoal_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 484 "prog_rep.m"
              MR_Word ll_backend__prog_rep__SubGoalRep_181;
#line 484 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 485 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__SubGoal_180, (MR_Integer) 0)));

#line 485 "prog_rep.m"
              ll_backend__prog_rep__SubGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__SubGoal_180, (MR_Integer) 1)));
#line 486 "prog_rep.m"
              {
#line 486 "prog_rep.m"
                ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__SubGoal_180, &ll_backend__prog_rep__SubGoalRep_181);
              }
#line 487 "prog_rep.m"
              {
#line 487 "prog_rep.m"
                ll_backend__prog_rep__OuterDetism_40 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__prog_rep__GoalInfo_8);
              }
#line 488 "prog_rep.m"
              {
#line 488 "prog_rep.m"
                ll_backend__prog_rep__InnerDetism_41 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__prog_rep__SubGoalInfo_39);
              }
#line 489 "prog_rep.m"
              ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__InnerDetism_41 == ll_backend__prog_rep__OuterDetism_40);
#line 491 "prog_rep.m"
              if (ll_backend__prog_rep__succeeded)
#line 490 "prog_rep.m"
                ll_backend__prog_rep__MaybeCut_42 = (MR_Integer) 1;
#line 491 "prog_rep.m"
              else
#line 492 "prog_rep.m"
                ll_backend__prog_rep__MaybeCut_42 = (MR_Integer) 0;
#line 494 "prog_rep.m"
              {
#line 494 "prog_rep.m"
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 494 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 494 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__SubGoalRep_181));
#line 494 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__MaybeCut_42));
#line 494 "prog_rep.m"
              }
#line 484 "prog_rep.m"
            }
#line 453 "prog_rep.m"
            break;
#line 453 "prog_rep.m"
          case (MR_Integer) 6:
#line 463 "prog_rep.m"
            {
#line 463 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 463 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 463 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 463 "prog_rep.m"
              MR_Word ll_backend__prog_rep__CondGoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Cond_21, (MR_Integer) 1)));
#line 463 "prog_rep.m"
              MR_Word ll_backend__prog_rep__InstmapDelta_26;
#line 463 "prog_rep.m"
              MR_Word ll_backend__prog_rep__InstmapAfterCond_27;
#line 463 "prog_rep.m"
              MR_Word ll_backend__prog_rep__CondRep_28;
#line 463 "prog_rep.m"
              MR_Word ll_backend__prog_rep__ThenRep_29;
#line 463 "prog_rep.m"
              MR_Word ll_backend__prog_rep__ElseRep_30;
#line 463 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 464 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Cond_21, (MR_Integer) 0)));

#line 465 "prog_rep.m"
              {
#line 465 "prog_rep.m"
                ll_backend__prog_rep__InstmapDelta_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__prog_rep__CondGoalInfo_25);
              }
#line 466 "prog_rep.m"
              {
#line 466 "prog_rep.m"
                hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__InstmapDelta_26, &ll_backend__prog_rep__InstmapAfterCond_27);
              }
#line 467 "prog_rep.m"
              {
#line 467 "prog_rep.m"
                ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Cond_21, &ll_backend__prog_rep__CondRep_28);
              }
#line 468 "prog_rep.m"
              {
#line 468 "prog_rep.m"
                ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__InstmapAfterCond_27, ll_backend__prog_rep__Then_22, &ll_backend__prog_rep__ThenRep_29);
              }
#line 469 "prog_rep.m"
              {
#line 469 "prog_rep.m"
                ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Else_23, &ll_backend__prog_rep__ElseRep_30);
              }
#line 470 "prog_rep.m"
              {
#line 470 "prog_rep.m"
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 470 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 470 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__CondRep_28));
#line 470 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__ThenRep_29));
#line 470 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 3) = ((MR_Box) (ll_backend__prog_rep__ElseRep_30));
#line 470 "prog_rep.m"
              }
#line 463 "prog_rep.m"
            }
#line 453 "prog_rep.m"
            break;
#line 453 "prog_rep.m"
          case (MR_Integer) 7:
#line 598 "prog_rep.m"
            {
#line 600 "prog_rep.m"
              {
#line 600 "prog_rep.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "unexpected shorthand");
#line 600 "prog_rep.m"
                return;
              }
#line 598 "prog_rep.m"
            }
#line 453 "prog_rep.m"
            break;
#line 453 "prog_rep.m"
        }
#line 453 "prog_rep.m"
        break;
#line 453 "prog_rep.m"
    }
#line 436 "prog_rep.m"
    {
#line 436 "prog_rep.m"
      MR_Word base;
#line 436 "prog_rep.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 436 "prog_rep.m"
      *ll_backend__prog_rep__GoalRep_9 = base;
#line 436 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep__GoalExprRep_12));
#line 436 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep__DetismRep_11));
#line 436 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 2) = NULL;
#line 436 "prog_rep.m"
    }
#line 433 "prog_rep.m"
  }
#line 81 "prog_rep.m"
}

#line 969 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1(
#line 969 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 969 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 969 "prog_rep.m"
{
#line 969 "prog_rep.m"
  {
#line 969 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 969 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 969 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_Bytes_10;

#line 969 "prog_rep.m"
    {
#line 969 "prog_rep.m"
      ll_backend__prog_rep__conv0_Bytes_10 = ll_backend__prog_rep__encode_head_var_func_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 969 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_Bytes_10));
#line 969 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 969 "prog_rep.m"
  }
#line 969 "prog_rep.m"
}

#line 59 "prog_rep.m"
void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0(
#line 59 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVars_15,
#line 59 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Goal_16,
#line 59 "prog_rep.m"
  MR_Word ll_backend__prog_rep__InstMap0_17,
#line 59 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarTypes_18,
#line 59 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarNumMap_19,
#line 59 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ModuleInfo_20,
#line 59 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarNameTable_21,
#line 59 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarTypes_22,
#line 59 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ProcDetism_23,
#line 59 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_40,
#line 59 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_41,
#line 59 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_42,
#line 59 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_43,
#line 59 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__ProcRepBytes_26)
#line 59 "prog_rep.m"
{
#line 234 "prog_rep.m"
  {
#line 234 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_58_58;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_14_83;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeInfo_15_84;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Goal_16, (MR_Integer) 1)));
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Context_29;
#line 234 "prog_rep.m"
    MR_String ll_backend__prog_rep__FileName_30;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarNumRep_31;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarNameTableBytes_32;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Info_33;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__InstmapDelta_34;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FileNameBytes_35;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalBytes_36;
#line 234 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__DetismByte_37;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ProcRepBytes0_38;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__LimitBytes_39;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_44_44;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_47_47;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_49_49;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_50_50;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_51_51;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_52_52;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_53_53;
#line 234 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_55_55;
#line 234 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_56_56;
#line 234 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Index_64;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalRep_73;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_79_79;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_80_80;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_81_81;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_82_82;
#line 234 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_90_90;
#line 235 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Goal_16, (MR_Integer) 0)));

#line 236 "prog_rep.m"
    {
#line 236 "prog_rep.m"
      ll_backend__prog_rep__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__prog_rep__GoalInfo_28);
    }
#line 237 "prog_rep.m"
    {
#line 237 "prog_rep.m"
      mercury__term__context_file_2_p_0(ll_backend__prog_rep__Context_29, &ll_backend__prog_rep__FileName_30);
    }
#line 238 "prog_rep.m"
    {
#line 238 "prog_rep.m"
      ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0(ll_backend__prog_rep__IncludeVarNameTable_21, ll_backend__prog_rep__IncludeVarTypes_22, ll_backend__prog_rep__VarTypes_18, ll_backend__prog_rep__VarNumMap_19, &ll_backend__prog_rep__VarNumRep_31, &ll_backend__prog_rep__VarNameTableBytes_32, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_40, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_44_44, ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_42, ll_backend__prog_rep__STATE_VARIABLE_TypeTable_43);
    }
#line 241 "prog_rep.m"
    {
#line 241 "prog_rep.m"
      ll_backend__prog_rep__Info_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 241 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 0) = ((MR_Box) (ll_backend__prog_rep__FileName_30));
#line 241 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 1) = ((MR_Box) (ll_backend__prog_rep__VarTypes_18));
#line 241 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 2) = ((MR_Box) (ll_backend__prog_rep__VarNumMap_19));
#line 241 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 3) = ((MR_Box) (ll_backend__prog_rep__VarNumRep_31));
#line 241 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 4) = ((MR_Box) (ll_backend__prog_rep__ModuleInfo_20));
#line 241 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 5) = ((MR_Box) ((MR_Integer) 1));
#line 241 "prog_rep.m"
    }
#line 243 "prog_rep.m"
    {
#line 243 "prog_rep.m"
      ll_backend__prog_rep__InstmapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__prog_rep__GoalInfo_28);
    }
#line 906 "prog_rep.m"
    {
#line 906 "prog_rep.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__FileName_30, &ll_backend__prog_rep__Index_64, ll_backend__prog_rep__STATE_VARIABLE_StringTable_44_44, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_47_47);
    }
#line 907 "prog_rep.m"
    {
#line 907 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_64, &ll_backend__prog_rep__FileNameBytes_35);
    }
#line 430 "prog_rep.m"
    {
#line 430 "prog_rep.m"
      ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_33, ll_backend__prog_rep__InstMap0_17, ll_backend__prog_rep__Goal_16, &ll_backend__prog_rep__GoalRep_73);
    }
#line 431 "prog_rep.m"
    {
#line 431 "prog_rep.m"
      ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_33, ll_backend__prog_rep__GoalRep_73, &ll_backend__prog_rep__GoalBytes_36, ll_backend__prog_rep__STATE_VARIABLE_StringTable_47_47, ll_backend__prog_rep__STATE_VARIABLE_StringTable_41);
    }
#line 247 "prog_rep.m"
    {
#line 247 "prog_rep.m"
      ll_backend__prog_rep__DetismByte_37 = hlds__code_model__represent_determinism_1_f_0(ll_backend__prog_rep__ProcDetism_23);
    }
#line 11302 "ll_backend.prog_rep.c"
    ll_backend__prog_rep__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 11304 "ll_backend.prog_rep.c"
    ll_backend__prog_rep__TypeCtorInfo_14_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 11306 "ll_backend.prog_rep.c"
    ll_backend__prog_rep__TypeInfo_15_84 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[3];
#line 1009 "prog_rep.m"
    {
#line 1009 "prog_rep.m"
      ll_backend__prog_rep__V_90_90 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeInfo_15_84, ll_backend__prog_rep__HeadVars_15);
    }
#line 1009 "prog_rep.m"
    {
#line 1009 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_90_90, &ll_backend__prog_rep__V_79_79);
    }
#line 969 "prog_rep.m"
    {
#line 969 "prog_rep.m"
      ll_backend__prog_rep__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 969 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_4[0]));
#line 969 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 1) = ((MR_Box) (ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1));
#line 969 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 969 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 3) = ((MR_Box) (ll_backend__prog_rep__Info_33));
#line 969 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 4) = ((MR_Box) (ll_backend__prog_rep__InstMap0_17));
#line 969 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 5) = ((MR_Box) (ll_backend__prog_rep__InstmapDelta_34));
#line 969 "prog_rep.m"
    }
#line 968 "prog_rep.m"
    {
#line 968 "prog_rep.m"
      ll_backend__prog_rep__V_81_81 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_15_84, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], ll_backend__prog_rep__V_82_82, ll_backend__prog_rep__HeadVars_15);
    }
#line 968 "prog_rep.m"
    {
#line 968 "prog_rep.m"
      ll_backend__prog_rep__V_80_80 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_14_83, ll_backend__prog_rep__V_81_81);
    }
#line 967 "prog_rep.m"
    {
#line 967 "prog_rep.m"
      ll_backend__prog_rep__V_51_51 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_14_83, ll_backend__prog_rep__V_79_79, ll_backend__prog_rep__V_80_80);
    }
#line 250 "prog_rep.m"
    {
#line 250 "prog_rep.m"
      ll_backend__prog_rep__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_53_53, 0) = ((MR_Box) (ll_backend__prog_rep__DetismByte_37));
#line 250 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "prog_rep.m"
    }
#line 250 "prog_rep.m"
    {
#line 250 "prog_rep.m"
      ll_backend__prog_rep__V_52_52 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__GoalBytes_36, ll_backend__prog_rep__V_53_53);
    }
#line 249 "prog_rep.m"
    {
#line 249 "prog_rep.m"
      ll_backend__prog_rep__V_50_50 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__V_51_51, ll_backend__prog_rep__V_52_52);
    }
#line 248 "prog_rep.m"
    {
#line 248 "prog_rep.m"
      ll_backend__prog_rep__V_49_49 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__VarNameTableBytes_32, ll_backend__prog_rep__V_50_50);
    }
#line 248 "prog_rep.m"
    {
#line 248 "prog_rep.m"
      ll_backend__prog_rep__ProcRepBytes0_38 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__FileNameBytes_35, ll_backend__prog_rep__V_49_49);
    }
#line 251 "prog_rep.m"
    {
#line 251 "prog_rep.m"
      ll_backend__prog_rep__V_56_56 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__ProcRepBytes0_38);
    }
#line 251 "prog_rep.m"
    ll_backend__prog_rep__V_55_55 = (ll_backend__prog_rep__V_56_56 + (MR_Integer) 4);
#line 251 "prog_rep.m"
    {
#line 251 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_55_55, &ll_backend__prog_rep__LimitBytes_39);
    }
#line 252 "prog_rep.m"
    {
#line 252 "prog_rep.m"
      *ll_backend__prog_rep__ProcRepBytes_26 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__LimitBytes_39, ll_backend__prog_rep__ProcRepBytes0_38);
    }
#line 234 "prog_rep.m"
  }
#line 59 "prog_rep.m"
}

#line 136 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1(
#line 136 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 136 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 136 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2)
#line 136 "prog_rep.m"
{
#line 136 "prog_rep.m"
  {
#line 136 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 136 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_BytesCord_6;

#line 136 "prog_rep.m"
    {
#line 136 "prog_rep.m"
      ll_backend__prog_rep__encode_oisu_proc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv0_BytesCord_6);
    }
#line 136 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_BytesCord_6));
#line 136 "prog_rep.m"
  }
#line 136 "prog_rep.m"
}

#line 54 "prog_rep.m"
void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0(
#line 54 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
#line 54 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 54 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__HeadVar__3_3,
#line 54 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4)
#line 54 "prog_rep.m"
{
#line 114 "prog_rep.m"
  {
#line 114 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 114 "prog_rep.m"
    if ((ll_backend__prog_rep__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 114 "prog_rep.m"
      {
#line 114 "prog_rep.m"
        *ll_backend__prog_rep__HeadVar__3_3 = (MR_Integer) 0;
#line 114 "prog_rep.m"
        {
#line 114 "prog_rep.m"
          *ll_backend__prog_rep__HeadVar__4_4 = mercury__cord__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
#line 114 "prog_rep.m"
      }
#line 114 "prog_rep.m"
    else
#line 115 "prog_rep.m"
      {
#line 115 "prog_rep.m"
        MR_Word ll_backend__prog_rep__Pair_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
#line 115 "prog_rep.m"
        MR_Word ll_backend__prog_rep__Pairs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 115 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__TailNumOISUTypes_11;
#line 115 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TailBytes_12;
#line 115 "prog_rep.m"
        MR_Word ll_backend__prog_rep__ModuleName_13;
#line 115 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TypeCtor_14;
#line 115 "prog_rep.m"
        MR_Word ll_backend__prog_rep__Preds_15;
#line 115 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TypeCtorSymName_16;
#line 115 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TypeCtorModuleName_18;
#line 115 "prog_rep.m"
        MR_String ll_backend__prog_rep__TypeCtorName_19;
#line 119 "prog_rep.m"
        MR_Integer ll_backend__prog_rep___TypeCtorArity_17;

#line 116 "prog_rep.m"
        {
#line 116 "prog_rep.m"
          ll_backend__prog_rep__encode_oisu_type_procs_4_p_0(ll_backend__prog_rep__HeadVar__1_1, ll_backend__prog_rep__Pairs_8, &ll_backend__prog_rep__TailNumOISUTypes_11, &ll_backend__prog_rep__TailBytes_12);
        }
#line 117 "prog_rep.m"
        {
#line 117 "prog_rep.m"
          hlds__hlds_module__module_info_get_name_2_p_0(ll_backend__prog_rep__HeadVar__1_1, &ll_backend__prog_rep__ModuleName_13);
        }
#line 118 "prog_rep.m"
        ll_backend__prog_rep__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Pair_7, (MR_Integer) 0)));
#line 118 "prog_rep.m"
        ll_backend__prog_rep__Preds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Pair_7, (MR_Integer) 1)));
#line 119 "prog_rep.m"
        ll_backend__prog_rep__TypeCtorSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__TypeCtor_14, (MR_Integer) 0)));
#line 119 "prog_rep.m"
        ll_backend__prog_rep___TypeCtorArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__TypeCtor_14, (MR_Integer) 1)));
#line 122 "prog_rep.m"
        if (((MR_tag((MR_Word) ll_backend__prog_rep__TypeCtorSymName_16)) == (MR_mktag((MR_Integer) 1))))
#line 121 "prog_rep.m"
          {
#line 121 "prog_rep.m"
            ll_backend__prog_rep__TypeCtorModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__TypeCtorSymName_16, (MR_Integer) 0)));
#line 121 "prog_rep.m"
            ll_backend__prog_rep__TypeCtorName_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__TypeCtorSymName_16, (MR_Integer) 1)));
#line 121 "prog_rep.m"
          }
#line 122 "prog_rep.m"
        else
#line 123 "prog_rep.m"
          {
#line 124 "prog_rep.m"
            {
#line 124 "prog_rep.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.encode_oisu_type_procs\'/4", (MR_String) "unqualified type_ctor name");
#line 124 "prog_rep.m"
              return;
            }
#line 123 "prog_rep.m"
          }
#line 126 "prog_rep.m"
        {
#line 126 "prog_rep.m"
          ll_backend__prog_rep__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__prog_rep__TypeCtorModuleName_18, ll_backend__prog_rep__ModuleName_13);
        }
#line 153 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 127 "prog_rep.m"
          {
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtorInfo_55_55;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeInfo_58_58;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtorInfo_63_63;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtorNameBytes_21;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__CreatorPreds_22;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__MutatorPreds_23;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DestructorPreds_24;
#line 127 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__NumCreatorPreds_25;
#line 127 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__NumMutatorPreds_26;
#line 127 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__NumDestructorPreds_27;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__NumCreatorPredsBytes_28;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__NumMutatorPredsBytes_29;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__NumDestructorPredsBytes_30;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__CreatorPredBytes_31;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__MutatorPredBytes_32;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DestructorPredBytes_33;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__HeadBytes_34;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_38_38;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_41_41;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_42_42;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_43_43;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_44_44;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_45_45;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_46_46;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_47_47;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_48_48;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_49_49;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_50_50;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_51_51;
#line 127 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_52_52;

#line 127 "prog_rep.m"
            {
#line 127 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__TypeCtorName_19, &ll_backend__prog_rep__TypeCtorNameBytes_21);
            }
#line 128 "prog_rep.m"
            ll_backend__prog_rep__CreatorPreds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Preds_15, (MR_Integer) 0)));
#line 128 "prog_rep.m"
            ll_backend__prog_rep__MutatorPreds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Preds_15, (MR_Integer) 1)));
#line 128 "prog_rep.m"
            ll_backend__prog_rep__DestructorPreds_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Preds_15, (MR_Integer) 2)));
#line 11613 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 130 "prog_rep.m"
            {
#line 130 "prog_rep.m"
              mercury__list__length_2_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__CreatorPreds_22, &ll_backend__prog_rep__NumCreatorPreds_25);
            }
#line 131 "prog_rep.m"
            {
#line 131 "prog_rep.m"
              mercury__list__length_2_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__MutatorPreds_23, &ll_backend__prog_rep__NumMutatorPreds_26);
            }
#line 132 "prog_rep.m"
            {
#line 132 "prog_rep.m"
              mercury__list__length_2_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__DestructorPreds_24, &ll_backend__prog_rep__NumDestructorPreds_27);
            }
#line 133 "prog_rep.m"
            {
#line 133 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__NumCreatorPreds_25, &ll_backend__prog_rep__NumCreatorPredsBytes_28);
            }
#line 134 "prog_rep.m"
            {
#line 134 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__NumMutatorPreds_26, &ll_backend__prog_rep__NumMutatorPredsBytes_29);
            }
#line 135 "prog_rep.m"
            {
#line 135 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__NumDestructorPreds_27, &ll_backend__prog_rep__NumDestructorPredsBytes_30);
            }
#line 136 "prog_rep.m"
            {
#line 136 "prog_rep.m"
              ll_backend__prog_rep__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 136 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[0]));
#line 136 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 1) = ((MR_Box) (ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1));
#line 136 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 136 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 3) = ((MR_Box) (ll_backend__prog_rep__HeadVar__1_1));
#line 136 "prog_rep.m"
            }
#line 11659 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeInfo_58_58 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[0];
#line 136 "prog_rep.m"
            {
#line 136 "prog_rep.m"
              mercury__list__map_3_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__V_38_38, ll_backend__prog_rep__CreatorPreds_22, &ll_backend__prog_rep__CreatorPredBytes_31);
            }
#line 138 "prog_rep.m"
            {
#line 138 "prog_rep.m"
              mercury__list__map_3_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__V_38_38, ll_backend__prog_rep__MutatorPreds_23, &ll_backend__prog_rep__MutatorPredBytes_32);
            }
#line 140 "prog_rep.m"
            {
#line 140 "prog_rep.m"
              mercury__list__map_3_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__V_38_38, ll_backend__prog_rep__DestructorPreds_24, &ll_backend__prog_rep__DestructorPredBytes_33);
            }
#line 11676 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeCtorInfo_63_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 143 "prog_rep.m"
            {
#line 143 "prog_rep.m"
              ll_backend__prog_rep__V_41_41 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__TypeCtorNameBytes_21);
            }
#line 144 "prog_rep.m"
            {
#line 144 "prog_rep.m"
              ll_backend__prog_rep__V_43_43 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__NumCreatorPredsBytes_28);
            }
#line 145 "prog_rep.m"
            {
#line 145 "prog_rep.m"
              ll_backend__prog_rep__V_45_45 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__CreatorPredBytes_31);
            }
#line 146 "prog_rep.m"
            {
#line 146 "prog_rep.m"
              ll_backend__prog_rep__V_47_47 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__NumMutatorPredsBytes_29);
            }
#line 147 "prog_rep.m"
            {
#line 147 "prog_rep.m"
              ll_backend__prog_rep__V_49_49 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__MutatorPredBytes_32);
            }
#line 148 "prog_rep.m"
            {
#line 148 "prog_rep.m"
              ll_backend__prog_rep__V_51_51 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__NumDestructorPredsBytes_30);
            }
#line 149 "prog_rep.m"
            {
#line 149 "prog_rep.m"
              ll_backend__prog_rep__V_52_52 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__DestructorPredBytes_33);
            }
#line 149 "prog_rep.m"
            {
#line 149 "prog_rep.m"
              ll_backend__prog_rep__V_50_50 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_51_51, ll_backend__prog_rep__V_52_52);
            }
#line 148 "prog_rep.m"
            {
#line 148 "prog_rep.m"
              ll_backend__prog_rep__V_48_48 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_49_49, ll_backend__prog_rep__V_50_50);
            }
#line 147 "prog_rep.m"
            {
#line 147 "prog_rep.m"
              ll_backend__prog_rep__V_46_46 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_47_47, ll_backend__prog_rep__V_48_48);
            }
#line 146 "prog_rep.m"
            {
#line 146 "prog_rep.m"
              ll_backend__prog_rep__V_44_44 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_45_45, ll_backend__prog_rep__V_46_46);
            }
#line 145 "prog_rep.m"
            {
#line 145 "prog_rep.m"
              ll_backend__prog_rep__V_42_42 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_43_43, ll_backend__prog_rep__V_44_44);
            }
#line 144 "prog_rep.m"
            {
#line 144 "prog_rep.m"
              ll_backend__prog_rep__HeadBytes_34 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_41_41, ll_backend__prog_rep__V_42_42);
            }
#line 151 "prog_rep.m"
            *ll_backend__prog_rep__HeadVar__3_3 = ((MR_Integer) 1 + ll_backend__prog_rep__TailNumOISUTypes_11);
#line 152 "prog_rep.m"
            {
#line 152 "prog_rep.m"
              *ll_backend__prog_rep__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__HeadBytes_34, ll_backend__prog_rep__TailBytes_12);
            }
#line 127 "prog_rep.m"
          }
#line 153 "prog_rep.m"
        else
#line 154 "prog_rep.m"
          {
#line 154 "prog_rep.m"
            *ll_backend__prog_rep__HeadVar__3_3 = ll_backend__prog_rep__TailNumOISUTypes_11;
#line 155 "prog_rep.m"
            *ll_backend__prog_rep__HeadVar__4_4 = ll_backend__prog_rep__TailBytes_12;
#line 154 "prog_rep.m"
          }
#line 115 "prog_rep.m"
      }
#line 114 "prog_rep.m"
  }
#line 54 "prog_rep.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.prog_rep. */
