/*
** Automatically generated from `prog_rep.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin13.1.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 361 "prog_rep.m"
struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
#line 366 "prog_rep.m"
  MR_bool ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 366 "prog_rep.m"
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11;
#line 412 "prog_rep.m"
  jmp_buf ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 412 "prog_rep.m"
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30;
#line 361 "prog_rep.m"
};

#line 346 "prog_rep.m"
struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
#line 351 "prog_rep.m"
  MR_bool ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 351 "prog_rep.m"
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11;
#line 412 "prog_rep.m"
  jmp_buf ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 412 "prog_rep.m"
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30;
#line 346 "prog_rep.m"
};

#line 331 "prog_rep.m"
struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
#line 336 "prog_rep.m"
  MR_bool ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 336 "prog_rep.m"
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11;
#line 412 "prog_rep.m"
  jmp_buf ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 412 "prog_rep.m"
  MR_String ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_31;
#line 331 "prog_rep.m"
};


#line 180 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0;

#line 183 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 186 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 189 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0;

#line 192 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0;

#line 195 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 198 "ll_backend.prog_rep.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

#line 201 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 207 "ll_backend.prog_rep.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 210 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 213 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 216 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0;

#line 219 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1;

#line 222 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_value_ordered_flatten_par_conjs_0[2];

#line 225 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_name_ordered_flatten_par_conjs_0[2];

#line 228 "ll_backend.prog_rep.c"
static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_flatten_par_conjs_0[2];

#line 231 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 234 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

#line 237 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

#line 240 "ll_backend.prog_rep.c"
static const MR_PseudoTypeInfo ll_backend__prog_rep__ll_backend__prog_rep__field_types_prog_rep_info_0_0[6];

#line 243 "ll_backend.prog_rep.c"
static const MR_ConstString ll_backend__prog_rep__ll_backend__prog_rep__field_names_prog_rep_info_0_0[6];

#line 246 "ll_backend.prog_rep.c"
static const MR_DuFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0;

#line 249 "ll_backend.prog_rep.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0[1];

#line 252 "ll_backend.prog_rep.c"
static const MR_DuPtagLayout ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0[1];

#line 255 "ll_backend.prog_rep.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_name_ordered_prog_rep_info_0[1];

#line 258 "ll_backend.prog_rep.c"
static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_prog_rep_info_0[1];

#line 261 "ll_backend.prog_rep.c"
static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001(
#line 264 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 266 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2);

#line 269 "ll_backend.prog_rep.c"
static void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001(
#line 272 "ll_backend.prog_rep.c"
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
#line 274 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 276 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_3);

#line 279 "ll_backend.prog_rep.c"
static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001(
#line 282 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 284 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2);

#line 287 "ll_backend.prog_rep.c"
static void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001(
#line 290 "ll_backend.prog_rep.c"
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
#line 292 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 294 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_3);

#line 297 "ll_backend.prog_rep.c"
static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0_10001(
#line 300 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 302 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2);

#line 305 "ll_backend.prog_rep.c"
static void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0_10001(
#line 308 "ll_backend.prog_rep.c"
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
#line 310 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 312 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_3);

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 361 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 361 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 361 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 361 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 361 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 346 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 346 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 346 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 346 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 346 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg);

#line 331 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 331 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 331 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 331 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 331 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

#line 316 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(
#line 316 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 316 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum2_8);

#line 311 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__311__1_2_p_0(
#line 311 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarTypes_12,
#line 311 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_36);

#line 447 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__447__1_2_p_0(
#line 447 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ConjType_13,
#line 447 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_177);

#line 515 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__515__2_2_f_0(
#line 515 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_278,
#line 515 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_263);

#line 515 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__515__1_2_f_0(
#line 515 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_166,
#line 515 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_228);

#line 585 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__585__1_3_f_0(
#line 585 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_146,
#line 585 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_147,
#line 585 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_246);

#line 1018 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_method_num_func_1_f_0(
#line 1018 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum_3);

#line 1013 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_lineno_func_1_f_0(
#line 1013 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum_3);

#line 1008 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_length_func_1_f_0(
#line 1008 "prog_rep.m"
  MR_Word ll_backend__prog_rep__TypeInfo_for_T_6,
#line 1008 "prog_rep.m"
  MR_Word ll_backend__prog_rep__List_3);

#line 973 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_head_var_func_4_f_0(
#line 973 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_6,
#line 973 "prog_rep.m"
  MR_Word ll_backend__prog_rep__InitialInstmap_7,
#line 973 "prog_rep.m"
  MR_Word ll_backend__prog_rep__InstmapDelta_8,
#line 973 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Var_9);

#line 952 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(
#line 952 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 952 "prog_rep.m"
  MR_Word ll_backend__prog_rep__MaybeVar_5);

#line 950 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1(
#line 950 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 950 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 945 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(
#line 945 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 945 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Vars_5);

#line 930 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_rep_func_2_f_0(
#line 930 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 930 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__Var_5);

#line 925 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__var_to_var_rep_2_f_0(
#line 925 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 925 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Var_5);

#line 923 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0_1(
#line 923 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 923 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 919 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0(
#line 919 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 919 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Vars_5);

#line 904 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(
#line 904 "prog_rep.m"
  MR_String ll_backend__prog_rep__String_5,
#line 904 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_6,
#line 904 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_9,
#line 904 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_10);

#line 862 "prog_rep.m"
static MR_String MR_CALL 
ll_backend__prog_rep__cons_id_rep_1_f_0(
#line 862 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1);

#line 847 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(
#line 847 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ConsIdArity_5,
#line 847 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__ConsIdBytes_6,
#line 847 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_12,
#line 847 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_13);

#line 828 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(
#line 828 "prog_rep.m"
  MR_Word ll_backend__prog_rep__GoalInfo_7,
#line 828 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap0_8,
#line 828 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_9,
#line 828 "prog_rep.m"
  MR_String * ll_backend__prog_rep__FileName_10,
#line 828 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__LineNo_11,
#line 828 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__BoundVars_12);

#line 809 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__filter_input_args_4_p_0(
#line 809 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_1,
#line 809 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 809 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 809 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4);

#line 799 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__lhs_final_is_ground_2_p_0(
#line 799 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_3,
#line 799 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2);

#line 794 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0_1(
#line 794 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 794 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 794 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 794 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 794 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4);

#line 787 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0(
#line 787 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_6,
#line 787 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Case_7,
#line 787 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_8,
#line 787 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_16,
#line 787 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_17);

#line 770 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_3(
#line 770 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 770 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 770 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 770 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 770 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4);

#line 655 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_2(
#line 655 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 655 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 655 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 655 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 655 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4);

#line 649 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_1(
#line 649 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 649 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 649 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 649 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 649 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4);

#line 643 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0(
#line 643 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_6,
#line 643 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 643 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_10,
#line 643 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71,
#line 643 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);

#line 632 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__detism_to_detism_rep_2_p_0(
#line 632 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
#line 632 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__2_2);

#line 620 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(
#line 620 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ConsId_3,
#line 620 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__2_2);

#line 618 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0_1(
#line 618 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 618 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 618 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2);

#line 611 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0(
#line 611 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_5,
#line 611 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap_6,
#line 611 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 611 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4);

#line 600 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__conj_to_conj_rep_4_p_0(
#line 600 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_1,
#line 600 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap0_2,
#line 600 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 600 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4);

#line 376 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarNumRep_13,
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarTypes_14,
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Var_15,
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__4_4,
#line 376 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_26,
#line 376 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_27,
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_28,
#line 376 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_29,
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_30,
#line 376 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_31,
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_32,
#line 376 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_33);

#line 361 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_4_byte_8_p_0(
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep___ProgVar_9,
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 361 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 361 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 361 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 361 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

#line 346 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_2_byte_8_p_0(
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep___ProgVar_9,
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 346 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 346 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 346 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 346 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

#line 331 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_1_byte_8_p_0(
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep___ProgVar_9,
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 331 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 331 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 331 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 331 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);

#line 316 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__max_var_num_3_f_0(
#line 316 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_5,
#line 316 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 316 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum2_8);

#line 303 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_6(
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 303 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 303 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 303 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8,
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_9,
#line 303 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_10);

#line 298 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_5(
#line 298 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 298 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 298 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 298 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 298 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 298 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 298 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 298 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 298 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8);

#line 294 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_4(
#line 294 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 294 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 294 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 294 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 294 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 294 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 294 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 294 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 294 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8);

#line 290 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_3(
#line 290 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 290 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 290 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 290 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 290 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 290 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 290 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 290 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 290 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8);

#line 311 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_2(
#line 311 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg);

#line 272 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_1(
#line 272 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 272 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 272 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 272 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3);

#line 264 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0(
#line 264 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarNameTable_11,
#line 264 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarTypes_12,
#line 264 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarTypes_13,
#line 264 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarNumMap_14,
#line 264 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__VarNumRep_15,
#line 264 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_16,
#line 264 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24,
#line 264 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_25,
#line 264 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26,
#line 264 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27);

#line 157 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_oisu_proc_3_p_0(
#line 157 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ModuleInfo_4,
#line 157 "prog_rep.m"
  MR_Word ll_backend__prog_rep__PredId_5,
#line 157 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__BytesCord_6);

#line 591 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_14(
#line 591 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 591 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 546 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_13(
#line 546 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 546 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 585 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_12(
#line 585 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 585 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 586 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_11(
#line 586 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 586 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 586 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_10(
#line 586 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 586 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 515 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9(
#line 515 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 515 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 513 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8(
#line 513 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 513 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 518 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7(
#line 518 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 518 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 515 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6(
#line 515 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 515 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 513 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5(
#line 513 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 513 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 572 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4(
#line 572 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 572 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 472 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3(
#line 472 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 472 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 472 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2);

#line 455 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2(
#line 455 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 455 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 455 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2);

#line 447 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1(
#line 447 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg);

#line 970 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1(
#line 970 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 970 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1);

#line 135 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1(
#line 135 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 135 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 135 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2);


static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_1[8][2];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_2[9][3];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_3[5][6];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_4[3][8];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_5[5][5];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_6[5][7];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_7[1][11];

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_8[1][15];


#line 414 "prog_rep.m"
/* sealed */ struct ll_backend__prog_rep__vector_common_type_9_0_s {
#line 414 "prog_rep.m"
  const MR_String ll_backend__prog_rep__vector_common_type_9_0__vct_9_f_0;
#line 414 "prog_rep.m"
};

static /* final */ const struct ll_backend__prog_rep__vector_common_type_9_0_s ll_backend__prog_rep_vector_common_9[21];



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
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[2])),
    ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[3])),
    ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[0])),
    ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[0])),
    ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_7[0])),
    ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[4])),
    ((MR_Box) (ll_backend__prog_rep__case_to_case_rep_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[4])),
    ((MR_Box) (ll_backend__prog_rep__encode_case_rep_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_scalar_common_3[5][6] = {
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
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 4 */
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0))
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep____vpti_func_2__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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


static /* final */ const struct ll_backend__prog_rep__vector_common_type_9_0_s ll_backend__prog_rep_vector_common_9[21] = {
  /* row 0 */
  {
    (MR_String) "V_"
  },
  /* row 1 */
  {
    (MR_String) "HeadVar__"
  },
  /* row 2 */
  {
    (MR_String) "TypeClassInfo_for_"
  },
  /* row 3 */
  {
    (MR_String) "TypeInfo_"
  },
  /* row 4 */
  {
    (MR_String) "TypeCtorInfo_"
  },
  /* row 5 */
  {
    (MR_String) "STATE_VARIABLE_"
  },
  /* row 6 */
  {
    (MR_String) "DCG_"
  },
  /* row 7 */
  {
    (MR_String) "V_"
  },
  /* row 8 */
  {
    (MR_String) "HeadVar__"
  },
  /* row 9 */
  {
    (MR_String) "TypeClassInfo_for_"
  },
  /* row 10 */
  {
    (MR_String) "TypeInfo_"
  },
  /* row 11 */
  {
    (MR_String) "TypeCtorInfo_"
  },
  /* row 12 */
  {
    (MR_String) "STATE_VARIABLE_"
  },
  /* row 13 */
  {
    (MR_String) "DCG_"
  },
  /* row 14 */
  {
    (MR_String) "V_"
  },
  /* row 15 */
  {
    (MR_String) "HeadVar__"
  },
  /* row 16 */
  {
    (MR_String) "TypeClassInfo_for_"
  },
  /* row 17 */
  {
    (MR_String) "TypeInfo_"
  },
  /* row 18 */
  {
    (MR_String) "TypeCtorInfo_"
  },
  /* row 19 */
  {
    (MR_String) "STATE_VARIABLE_"
  },
  /* row 20 */
  {
    (MR_String) "DCG_"
  },
};


#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"



#line 1588 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1596 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1604 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1612 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_goal_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 1620 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__mdbcomp__program_representation__pti_case_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 1628 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1636 "ll_backend.prog_rep.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1646 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1654 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1662 "ll_backend.prog_rep.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__prog_rep____vpti_func_2__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0,
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1672 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1681 "ll_backend.prog_rep.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__prog_rep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1690 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0 = {
  (MR_String) "flatten_par_conjs",
  (MR_Integer) 0
};

#line 1696 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDesc ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1 = {
  (MR_String) "expect_no_par_conjs",
  (MR_Integer) 1
};

#line 1702 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_value_ordered_flatten_par_conjs_0[2] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0,
  &ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1
};

#line 1708 "ll_backend.prog_rep.c"
static const MR_EnumFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__enum_name_ordered_flatten_par_conjs_0[2] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_1,
  &ll_backend__prog_rep__ll_backend__prog_rep__enum_functor_desc_flatten_par_conjs_0_0
};

#line 1714 "ll_backend.prog_rep.c"
static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_flatten_par_conjs_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1720 "ll_backend.prog_rep.c"
const MR_TypeCtorInfo_Struct ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_flatten_par_conjs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001)),
  (MR_String) "ll_backend.prog_rep",
  (MR_String) "flatten_par_conjs",
  {
    ll_backend__prog_rep__ll_backend__prog_rep__enum_name_ordered_flatten_par_conjs_0
  },
  {
    ll_backend__prog_rep__ll_backend__prog_rep__enum_value_ordered_flatten_par_conjs_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_flatten_par_conjs_0
};

#line 1741 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1750 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1759 "ll_backend.prog_rep.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__prog_rep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__prog_rep__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0
  }
};

#line 1768 "ll_backend.prog_rep.c"
static const MR_PseudoTypeInfo ll_backend__prog_rep__ll_backend__prog_rep__field_types_prog_rep_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_num_rep_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_flatten_par_conjs_0
};

#line 1778 "ll_backend.prog_rep.c"
static const MR_ConstString ll_backend__prog_rep__ll_backend__prog_rep__field_names_prog_rep_info_0_0[6] = {
  (MR_String) "pri_filename",
  (MR_String) "pri_vartypes",
  (MR_String) "pri_var_num_map",
  (MR_String) "pri_var_num_rep",
  (MR_String) "pri_module_info",
  (MR_String) "pri_flatten_par_conjs"
};

#line 1788 "ll_backend.prog_rep.c"
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

#line 1803 "ll_backend.prog_rep.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0[1] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0
};

#line 1808 "ll_backend.prog_rep.c"
static const MR_DuPtagLayout ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__prog_rep__ll_backend__prog_rep__du_stag_ordered_prog_rep_info_0_0
  }
};

#line 1817 "ll_backend.prog_rep.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep__ll_backend__prog_rep__du_name_ordered_prog_rep_info_0[1] = {
  &ll_backend__prog_rep__ll_backend__prog_rep__du_functor_desc_prog_rep_info_0_0
};

#line 1822 "ll_backend.prog_rep.c"
static const MR_Integer ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_prog_rep_info_0[1] = {
  (MR_Integer) 0
};

#line 1827 "ll_backend.prog_rep.c"
const MR_TypeCtorInfo_Struct ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_prog_rep_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001)),
  (MR_String) "ll_backend.prog_rep",
  (MR_String) "prog_rep_info",
  {
    ll_backend__prog_rep__ll_backend__prog_rep__du_name_ordered_prog_rep_info_0
  },
  {
    ll_backend__prog_rep__ll_backend__prog_rep__du_ptag_ordered_prog_rep_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__prog_rep__ll_backend__prog_rep__functor_number_map_prog_rep_info_0
};

#line 1848 "ll_backend.prog_rep.c"
const MR_TypeCtorInfo_Struct ll_backend__prog_rep__ll_backend__prog_rep__type_ctor_info_var_num_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__prog_rep____Unify____var_num_map_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep____Compare____var_num_map_0_0_10001)),
  (MR_String) "ll_backend.prog_rep",
  (MR_String) "var_num_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__prog_rep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1869 "ll_backend.prog_rep.c"
static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0_10001(
#line 1872 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 1874 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2)
#line 1876 "ll_backend.prog_rep.c"
{
#line 1878 "ll_backend.prog_rep.c"
  {
#line 1880 "ll_backend.prog_rep.c"
    MR_bool ll_backend__prog_rep__succeeded;

#line 1883 "ll_backend.prog_rep.c"
    {
#line 1885 "ll_backend.prog_rep.c"
      ll_backend__prog_rep__succeeded = ll_backend__prog_rep____Unify____flatten_par_conjs_0_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2));
    }
#line 1888 "ll_backend.prog_rep.c"
    return ll_backend__prog_rep__succeeded;
#line 1890 "ll_backend.prog_rep.c"
  }
#line 1892 "ll_backend.prog_rep.c"
}

#line 1895 "ll_backend.prog_rep.c"
static void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0_10001(
#line 1898 "ll_backend.prog_rep.c"
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
#line 1900 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 1902 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_3)
#line 1904 "ll_backend.prog_rep.c"
{
#line 1906 "ll_backend.prog_rep.c"
  {
#line 1908 "ll_backend.prog_rep.c"
    MR_Word ll_backend__prog_rep__conv0_HeadVar__1_1;

#line 1911 "ll_backend.prog_rep.c"
    {
#line 1913 "ll_backend.prog_rep.c"
      ll_backend__prog_rep____Compare____flatten_par_conjs_0_0(&ll_backend__prog_rep__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep__wrapper_arg_3));
    }
#line 1916 "ll_backend.prog_rep.c"
    *ll_backend__prog_rep__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep__conv0_HeadVar__1_1));
#line 1918 "ll_backend.prog_rep.c"
  }
#line 1920 "ll_backend.prog_rep.c"
}

#line 1923 "ll_backend.prog_rep.c"
static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0_10001(
#line 1926 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 1928 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2)
#line 1930 "ll_backend.prog_rep.c"
{
#line 1932 "ll_backend.prog_rep.c"
  {
#line 1934 "ll_backend.prog_rep.c"
    MR_bool ll_backend__prog_rep__succeeded;

#line 1937 "ll_backend.prog_rep.c"
    {
#line 1939 "ll_backend.prog_rep.c"
      ll_backend__prog_rep__succeeded = ll_backend__prog_rep____Unify____prog_rep_info_0_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2));
    }
#line 1942 "ll_backend.prog_rep.c"
    return ll_backend__prog_rep__succeeded;
#line 1944 "ll_backend.prog_rep.c"
  }
#line 1946 "ll_backend.prog_rep.c"
}

#line 1949 "ll_backend.prog_rep.c"
static void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0_10001(
#line 1952 "ll_backend.prog_rep.c"
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
#line 1954 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 1956 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_3)
#line 1958 "ll_backend.prog_rep.c"
{
#line 1960 "ll_backend.prog_rep.c"
  {
#line 1962 "ll_backend.prog_rep.c"
    MR_Word ll_backend__prog_rep__conv0_HeadVar__1_1;

#line 1965 "ll_backend.prog_rep.c"
    {
#line 1967 "ll_backend.prog_rep.c"
      ll_backend__prog_rep____Compare____prog_rep_info_0_0(&ll_backend__prog_rep__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep__wrapper_arg_3));
    }
#line 1970 "ll_backend.prog_rep.c"
    *ll_backend__prog_rep__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep__conv0_HeadVar__1_1));
#line 1972 "ll_backend.prog_rep.c"
  }
#line 1974 "ll_backend.prog_rep.c"
}

#line 1977 "ll_backend.prog_rep.c"
static MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0_10001(
#line 1980 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 1982 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2)
#line 1984 "ll_backend.prog_rep.c"
{
#line 1986 "ll_backend.prog_rep.c"
  {
#line 1988 "ll_backend.prog_rep.c"
    MR_bool ll_backend__prog_rep__succeeded;

#line 1991 "ll_backend.prog_rep.c"
    {
#line 1993 "ll_backend.prog_rep.c"
      ll_backend__prog_rep__succeeded = ll_backend__prog_rep____Unify____var_num_map_0_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2));
    }
#line 1996 "ll_backend.prog_rep.c"
    return ll_backend__prog_rep__succeeded;
#line 1998 "ll_backend.prog_rep.c"
  }
#line 2000 "ll_backend.prog_rep.c"
}

#line 2003 "ll_backend.prog_rep.c"
static void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0_10001(
#line 2006 "ll_backend.prog_rep.c"
  MR_Box * ll_backend__prog_rep__wrapper_arg_1,
#line 2008 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 2010 "ll_backend.prog_rep.c"
  MR_Box ll_backend__prog_rep__wrapper_arg_3)
#line 2012 "ll_backend.prog_rep.c"
{
#line 2014 "ll_backend.prog_rep.c"
  {
#line 2016 "ll_backend.prog_rep.c"
    MR_Word ll_backend__prog_rep__conv0_HeadVar__1_1;

#line 2019 "ll_backend.prog_rep.c"
    {
#line 2021 "ll_backend.prog_rep.c"
      ll_backend__prog_rep____Compare____var_num_map_0_0(&ll_backend__prog_rep__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep__wrapper_arg_3));
    }
#line 2024 "ll_backend.prog_rep.c"
    *ll_backend__prog_rep__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep__conv0_HeadVar__1_1));
#line 2026 "ll_backend.prog_rep.c"
  }
#line 2028 "ll_backend.prog_rep.c"
}

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 412 "prog_rep.m"
{
#line 412 "prog_rep.m"
  {
#line 412 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 412 "prog_rep.m"
    MR_builtin_longjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 412 "prog_rep.m"
  }
#line 412 "prog_rep.m"
}

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 412 "prog_rep.m"
{
#line 412 "prog_rep.m"
  {
#line 412 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 421 "prog_rep.m"
    {
#line 421 "prog_rep.m"
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30);
    }
#line 421 "prog_rep.m"
    if ((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 421 "prog_rep.m"
      {
#line 421 "prog_rep.m"
        ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(ll_backend__prog_rep__env_ptr);
#line 421 "prog_rep.m"
        return;
      }
#line 412 "prog_rep.m"
  }
#line 412 "prog_rep.m"
}

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 412 "prog_rep.m"
{
#line 412 "prog_rep.m"
  {
#line 412 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 412 "prog_rep.m"
    if (MR_builtin_setjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 412 "prog_rep.m"
      {
#line 414 "prog_rep.m"
        {
#line 414 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__slot_1 = (MR_Integer) 0;

#line 414 "prog_rep.m"
          do
#line 414 "prog_rep.m"
            {
#line 414 "prog_rep.m"
              (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30 = ((&ll_backend__prog_rep_vector_common_9[14 + ll_backend__prog_rep__slot_1]))->ll_backend__prog_rep__vector_common_type_9_0__vct_9_f_0;
#line 414 "prog_rep.m"
              {
#line 414 "prog_rep.m"
                ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(ll_backend__prog_rep__env_ptr);
              }
#line 414 "prog_rep.m"
              ll_backend__prog_rep__slot_1 = (ll_backend__prog_rep__slot_1 + (MR_Integer) 1);
#line 414 "prog_rep.m"
            }
#line 414 "prog_rep.m"
          while ((ll_backend__prog_rep__slot_1 < (MR_Integer) 7));
#line 414 "prog_rep.m"
        }
#line 412 "prog_rep.m"
        (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 412 "prog_rep.m"
      }
#line 412 "prog_rep.m"
    else
#line 412 "prog_rep.m"
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 412 "prog_rep.m"
  }
#line 412 "prog_rep.m"
}

#line 361 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 361 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 361 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 361 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 361 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
#line 361 "prog_rep.m"
{
#line 361 "prog_rep.m"
  {
#line 361 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s ll_backend__prog_rep__env;

#line 366 "prog_rep.m"
    {
#line 366 "prog_rep.m"
      MR_Integer ll_backend__prog_rep__VarNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));

#line 366 "prog_rep.m"
      (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 405 "prog_rep.m"
      if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "") == 0))
#line 405 "prog_rep.m"
        (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
      else
#line 405 "prog_rep.m"
        if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "TopCSD") == 0))
#line 407 "prog_rep.m"
          (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
        else
#line 405 "prog_rep.m"
          if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "SiteNum") == 0))
#line 410 "prog_rep.m"
            (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
          else
#line 405 "prog_rep.m"
            if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "MethodNum") == 0))
#line 411 "prog_rep.m"
              (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
            else
#line 405 "prog_rep.m"
              if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "MiddleCSD") == 0))
#line 408 "prog_rep.m"
                (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
              else
#line 405 "prog_rep.m"
                if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "ActivationPtr") == 0))
#line 409 "prog_rep.m"
                  (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
                else
#line 405 "prog_rep.m"
                  if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "ProcStaticLayout") == 0))
#line 406 "prog_rep.m"
                    (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
                  else
#line 405 "prog_rep.m"
                    (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 405 "prog_rep.m"
      if (!((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
#line 412 "prog_rep.m"
        {
#line 412 "prog_rep.m"
          {
#line 412 "prog_rep.m"
            ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(&ll_backend__prog_rep__env);
          }
#line 412 "prog_rep.m"
        }
#line 369 "prog_rep.m"
      if ((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 368 "prog_rep.m"
        {
#line 368 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_22 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21;
#line 368 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19;
#line 368 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17;
#line 368 "prog_rep.m"
        }
#line 369 "prog_rep.m"
      else
#line 370 "prog_rep.m"
        {
#line 370 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeCtorInfo_28_28;
#line 370 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarBytes_15;
#line 370 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarNameBytes_16;
#line 370 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_27_27;
#line 370 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__Index_36;

#line 370 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = (ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17 + (MR_Integer) 1);
#line 371 "prog_rep.m"
          {
#line 371 "prog_rep.m"
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__VarNum_10, &ll_backend__prog_rep__VarBytes_15);
          }
#line 908 "prog_rep.m"
          {
#line 908 "prog_rep.m"
            ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &ll_backend__prog_rep__Index_36, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
          }
#line 909 "prog_rep.m"
          {
#line 909 "prog_rep.m"
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_36, &ll_backend__prog_rep__VarNameBytes_16);
          }
#line 2264 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 373 "prog_rep.m"
          {
#line 373 "prog_rep.m"
            ll_backend__prog_rep__V_27_27 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_28_28, ll_backend__prog_rep__VarNameBytes_16, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19);
          }
#line 373 "prog_rep.m"
          {
#line 373 "prog_rep.m"
            *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_28_28, ll_backend__prog_rep__VarBytes_15, ll_backend__prog_rep__V_27_27);
          }
#line 370 "prog_rep.m"
        }
#line 366 "prog_rep.m"
    }
#line 361 "prog_rep.m"
  }
#line 361 "prog_rep.m"
}

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 412 "prog_rep.m"
{
#line 412 "prog_rep.m"
  {
#line 412 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 412 "prog_rep.m"
    MR_builtin_longjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 412 "prog_rep.m"
  }
#line 412 "prog_rep.m"
}

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 412 "prog_rep.m"
{
#line 412 "prog_rep.m"
  {
#line 412 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 421 "prog_rep.m"
    {
#line 421 "prog_rep.m"
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30);
    }
#line 421 "prog_rep.m"
    if ((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 421 "prog_rep.m"
      {
#line 421 "prog_rep.m"
        ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(ll_backend__prog_rep__env_ptr);
#line 421 "prog_rep.m"
        return;
      }
#line 412 "prog_rep.m"
  }
#line 412 "prog_rep.m"
}

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 412 "prog_rep.m"
{
#line 412 "prog_rep.m"
  {
#line 412 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 412 "prog_rep.m"
    if (MR_builtin_setjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 412 "prog_rep.m"
      {
#line 414 "prog_rep.m"
        {
#line 414 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__slot_1 = (MR_Integer) 0;

#line 414 "prog_rep.m"
          do
#line 414 "prog_rep.m"
            {
#line 414 "prog_rep.m"
              (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_30 = ((&ll_backend__prog_rep_vector_common_9[7 + ll_backend__prog_rep__slot_1]))->ll_backend__prog_rep__vector_common_type_9_0__vct_9_f_0;
#line 414 "prog_rep.m"
              {
#line 414 "prog_rep.m"
                ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(ll_backend__prog_rep__env_ptr);
              }
#line 414 "prog_rep.m"
              ll_backend__prog_rep__slot_1 = (ll_backend__prog_rep__slot_1 + (MR_Integer) 1);
#line 414 "prog_rep.m"
            }
#line 414 "prog_rep.m"
          while ((ll_backend__prog_rep__slot_1 < (MR_Integer) 7));
#line 414 "prog_rep.m"
        }
#line 412 "prog_rep.m"
        (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 412 "prog_rep.m"
      }
#line 412 "prog_rep.m"
    else
#line 412 "prog_rep.m"
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 412 "prog_rep.m"
  }
#line 412 "prog_rep.m"
}

#line 346 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 346 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 346 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 346 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 346 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
#line 346 "prog_rep.m"
{
#line 346 "prog_rep.m"
  {
#line 346 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s ll_backend__prog_rep__env;

#line 351 "prog_rep.m"
    {
#line 351 "prog_rep.m"
      MR_Integer ll_backend__prog_rep__VarNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));

#line 351 "prog_rep.m"
      (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 405 "prog_rep.m"
      if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "") == 0))
#line 405 "prog_rep.m"
        (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
      else
#line 405 "prog_rep.m"
        if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "TopCSD") == 0))
#line 407 "prog_rep.m"
          (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
        else
#line 405 "prog_rep.m"
          if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "SiteNum") == 0))
#line 410 "prog_rep.m"
            (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
          else
#line 405 "prog_rep.m"
            if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "MethodNum") == 0))
#line 411 "prog_rep.m"
              (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
            else
#line 405 "prog_rep.m"
              if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "MiddleCSD") == 0))
#line 408 "prog_rep.m"
                (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
              else
#line 405 "prog_rep.m"
                if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "ActivationPtr") == 0))
#line 409 "prog_rep.m"
                  (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
                else
#line 405 "prog_rep.m"
                  if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "ProcStaticLayout") == 0))
#line 406 "prog_rep.m"
                    (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
                  else
#line 405 "prog_rep.m"
                    (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 405 "prog_rep.m"
      if (!((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
#line 412 "prog_rep.m"
        {
#line 412 "prog_rep.m"
          {
#line 412 "prog_rep.m"
            ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(&ll_backend__prog_rep__env);
          }
#line 412 "prog_rep.m"
        }
#line 354 "prog_rep.m"
      if ((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 353 "prog_rep.m"
        {
#line 353 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_22 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21;
#line 353 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19;
#line 353 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17;
#line 353 "prog_rep.m"
        }
#line 354 "prog_rep.m"
      else
#line 355 "prog_rep.m"
        {
#line 355 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeCtorInfo_28_28;
#line 355 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarBytes_15;
#line 355 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarNameBytes_16;
#line 355 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_27_27;
#line 355 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__Index_36;

#line 355 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = (ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17 + (MR_Integer) 1);
#line 356 "prog_rep.m"
          {
#line 356 "prog_rep.m"
            mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__VarNum_10, &ll_backend__prog_rep__VarBytes_15);
          }
#line 908 "prog_rep.m"
          {
#line 908 "prog_rep.m"
            ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &ll_backend__prog_rep__Index_36, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
          }
#line 909 "prog_rep.m"
          {
#line 909 "prog_rep.m"
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_36, &ll_backend__prog_rep__VarNameBytes_16);
          }
#line 2518 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 358 "prog_rep.m"
          {
#line 358 "prog_rep.m"
            ll_backend__prog_rep__V_27_27 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_28_28, ll_backend__prog_rep__VarNameBytes_16, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19);
          }
#line 358 "prog_rep.m"
          {
#line 358 "prog_rep.m"
            *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_28_28, ll_backend__prog_rep__VarBytes_15, ll_backend__prog_rep__V_27_27);
          }
#line 355 "prog_rep.m"
        }
#line 351 "prog_rep.m"
    }
#line 346 "prog_rep.m"
  }
#line 346 "prog_rep.m"
}

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 412 "prog_rep.m"
{
#line 412 "prog_rep.m"
  {
#line 412 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 412 "prog_rep.m"
    MR_builtin_longjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 412 "prog_rep.m"
  }
#line 412 "prog_rep.m"
}

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 412 "prog_rep.m"
{
#line 412 "prog_rep.m"
  {
#line 412 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 421 "prog_rep.m"
    {
#line 421 "prog_rep.m"
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_31);
    }
#line 421 "prog_rep.m"
    if ((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 421 "prog_rep.m"
      {
#line 421 "prog_rep.m"
        ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_1(ll_backend__prog_rep__env_ptr);
#line 421 "prog_rep.m"
        return;
      }
#line 412 "prog_rep.m"
  }
#line 412 "prog_rep.m"
}

#line 412 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(
#line 412 "prog_rep.m"
  void * ll_backend__prog_rep__env_ptr_arg)
#line 412 "prog_rep.m"
{
#line 412 "prog_rep.m"
  {
#line 412 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * ll_backend__prog_rep__env_ptr = (struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) ll_backend__prog_rep__env_ptr_arg;

#line 412 "prog_rep.m"
    if (MR_builtin_setjmp((ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 412 "prog_rep.m"
      {
#line 414 "prog_rep.m"
        {
#line 414 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__slot_1 = (MR_Integer) 0;

#line 414 "prog_rep.m"
          do
#line 414 "prog_rep.m"
            {
#line 414 "prog_rep.m"
              (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Prefix_31 = ((&ll_backend__prog_rep_vector_common_9[0 + ll_backend__prog_rep__slot_1]))->ll_backend__prog_rep__vector_common_type_9_0__vct_9_f_0;
#line 414 "prog_rep.m"
              {
#line 414 "prog_rep.m"
                ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_2(ll_backend__prog_rep__env_ptr);
              }
#line 414 "prog_rep.m"
              ll_backend__prog_rep__slot_1 = (ll_backend__prog_rep__slot_1 + (MR_Integer) 1);
#line 414 "prog_rep.m"
            }
#line 414 "prog_rep.m"
          while ((ll_backend__prog_rep__slot_1 < (MR_Integer) 7));
#line 414 "prog_rep.m"
        }
#line 412 "prog_rep.m"
        (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 412 "prog_rep.m"
      }
#line 412 "prog_rep.m"
    else
#line 412 "prog_rep.m"
      (ll_backend__prog_rep__env_ptr)->ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 412 "prog_rep.m"
  }
#line 412 "prog_rep.m"
}

#line 331 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 331 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 331 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 331 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 331 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
#line 331 "prog_rep.m"
{
#line 331 "prog_rep.m"
  {
#line 331 "prog_rep.m"
    struct ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s ll_backend__prog_rep__env;

#line 336 "prog_rep.m"
    {
#line 336 "prog_rep.m"
      MR_Integer ll_backend__prog_rep__VarNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));

#line 336 "prog_rep.m"
      (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 405 "prog_rep.m"
      if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "") == 0))
#line 405 "prog_rep.m"
        (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
      else
#line 405 "prog_rep.m"
        if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "TopCSD") == 0))
#line 407 "prog_rep.m"
          (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
        else
#line 405 "prog_rep.m"
          if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "SiteNum") == 0))
#line 410 "prog_rep.m"
            (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
          else
#line 405 "prog_rep.m"
            if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "MethodNum") == 0))
#line 411 "prog_rep.m"
              (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
            else
#line 405 "prog_rep.m"
              if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "MiddleCSD") == 0))
#line 408 "prog_rep.m"
                (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
              else
#line 405 "prog_rep.m"
                if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "ActivationPtr") == 0))
#line 409 "prog_rep.m"
                  (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
                else
#line 405 "prog_rep.m"
                  if ((strcmp((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, (MR_String) "ProcStaticLayout") == 0))
#line 406 "prog_rep.m"
                    (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 405 "prog_rep.m"
                  else
#line 405 "prog_rep.m"
                    (ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 405 "prog_rep.m"
      if (!((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
#line 412 "prog_rep.m"
        {
#line 412 "prog_rep.m"
          {
#line 412 "prog_rep.m"
            ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0_3(&ll_backend__prog_rep__env);
          }
#line 412 "prog_rep.m"
        }
#line 339 "prog_rep.m"
      if ((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 338 "prog_rep.m"
        {
#line 338 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_22 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21;
#line 338 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19;
#line 338 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17;
#line 338 "prog_rep.m"
        }
#line 339 "prog_rep.m"
      else
#line 340 "prog_rep.m"
        {
#line 340 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeCtorInfo_29_29;
#line 340 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarBytes_15;
#line 340 "prog_rep.m"
          MR_Word ll_backend__prog_rep__VarNameBytes_16;
#line 340 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_28_28;
#line 340 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__Index_37;

#line 340 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_NumVars_18 = (ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17 + (MR_Integer) 1);
#line 341 "prog_rep.m"
          {
#line 341 "prog_rep.m"
            ll_backend__prog_rep__VarBytes_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_15, 0) = ((MR_Box) (ll_backend__prog_rep__VarNum_10));
#line 341 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 341 "prog_rep.m"
          }
#line 908 "prog_rep.m"
          {
#line 908 "prog_rep.m"
            ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((ll_backend__prog_rep__env).ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarName_11, &ll_backend__prog_rep__Index_37, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
          }
#line 909 "prog_rep.m"
          {
#line 909 "prog_rep.m"
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_37, &ll_backend__prog_rep__VarNameBytes_16);
          }
#line 2777 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 343 "prog_rep.m"
          {
#line 343 "prog_rep.m"
            ll_backend__prog_rep__V_28_28 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_29_29, ll_backend__prog_rep__VarNameBytes_16, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19);
          }
#line 343 "prog_rep.m"
          {
#line 343 "prog_rep.m"
            *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_29_29, ll_backend__prog_rep__VarBytes_15, ll_backend__prog_rep__V_28_28);
          }
#line 340 "prog_rep.m"
        }
#line 336 "prog_rep.m"
    }
#line 331 "prog_rep.m"
  }
#line 331 "prog_rep.m"
}

#line 316 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(
#line 316 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 316 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum2_8)
#line 316 "prog_rep.m"
{
#line 318 "prog_rep.m"
  {
#line 318 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 318 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Max_9;
#line 318 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__VarNum1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
#line 318 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));

#line 319 "prog_rep.m"
    {
#line 319 "prog_rep.m"
      return ll_backend__prog_rep__Max_9 = mercury__int__max_2_f_0(ll_backend__prog_rep__VarNum1_6, ll_backend__prog_rep__VarNum2_8);
    }
#line 318 "prog_rep.m"
    return ll_backend__prog_rep__Max_9;
#line 318 "prog_rep.m"
  }
#line 316 "prog_rep.m"
}

#line 311 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__311__1_2_p_0(
#line 311 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarTypes_12,
#line 311 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_36)
#line 311 "prog_rep.m"
{
#line 311 "prog_rep.m"
  {
#line 311 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__IncludeVarTypes_12 == ll_backend__prog_rep__HeadVar__2_36);

#line 311 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 311 "prog_rep.m"
  }
#line 311 "prog_rep.m"
}

#line 447 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__447__1_2_p_0(
#line 447 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ConjType_13,
#line 447 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_177)
#line 447 "prog_rep.m"
{
#line 447 "prog_rep.m"
  {
#line 447 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__ConjType_13 == ll_backend__prog_rep__HeadVar__2_177);

#line 447 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 447 "prog_rep.m"
  }
#line 447 "prog_rep.m"
}

#line 515 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__515__2_2_f_0(
#line 515 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_278,
#line 515 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_263)
#line 515 "prog_rep.m"
{
#line 515 "prog_rep.m"
  {
#line 515 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 515 "prog_rep.m"
    MR_Word ll_backend__prog_rep__HeadVar__3_264;

#line 515 "prog_rep.m"
    {
#line 515 "prog_rep.m"
      ll_backend__prog_rep__HeadVar__3_264 = mercury__maybe__map_maybe_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__HeadVar__1_278, ll_backend__prog_rep__HeadVar__2_263);
    }
#line 515 "prog_rep.m"
    return ll_backend__prog_rep__HeadVar__3_264;
#line 515 "prog_rep.m"
  }
#line 515 "prog_rep.m"
}

#line 515 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__515__1_2_f_0(
#line 515 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_166,
#line 515 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_228)
#line 515 "prog_rep.m"
{
#line 515 "prog_rep.m"
  {
#line 515 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 515 "prog_rep.m"
    MR_Word ll_backend__prog_rep__HeadVar__3_229;

#line 515 "prog_rep.m"
    {
#line 515 "prog_rep.m"
      ll_backend__prog_rep__HeadVar__3_229 = mercury__maybe__map_maybe_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__HeadVar__1_166, ll_backend__prog_rep__HeadVar__2_228);
    }
#line 515 "prog_rep.m"
    return ll_backend__prog_rep__HeadVar__3_229;
#line 515 "prog_rep.m"
  }
#line 515 "prog_rep.m"
}

#line 585 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__585__1_3_f_0(
#line 585 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_146,
#line 585 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_147,
#line 585 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_246)
#line 585 "prog_rep.m"
{
#line 585 "prog_rep.m"
  {
#line 585 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 585 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__HeadVar__4_247;
#line 585 "prog_rep.m"
    MR_Box ll_backend__prog_rep__conv0_HeadVar__4_247;

#line 585 "prog_rep.m"
    {
#line 585 "prog_rep.m"
      ll_backend__prog_rep__conv0_HeadVar__4_247 = mercury__std_util__compose_3_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ll_backend__prog_rep__HeadVar__1_146, ll_backend__prog_rep__HeadVar__2_147, ((MR_Box) (ll_backend__prog_rep__HeadVar__3_246)));
    }
#line 585 "prog_rep.m"
    ll_backend__prog_rep__HeadVar__4_247 = ((MR_Integer) ll_backend__prog_rep__conv0_HeadVar__4_247);
#line 585 "prog_rep.m"
    return ll_backend__prog_rep__HeadVar__4_247;
#line 585 "prog_rep.m"
  }
#line 585 "prog_rep.m"
}

#line 48 "prog_rep.m"
void MR_CALL 
ll_backend__prog_rep____Compare____var_num_map_0_0(
#line 48 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__1_1,
#line 48 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 48 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3)
#line 48 "prog_rep.m"
{
#line 48 "prog_rep.m"
  {
#line 48 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 48 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Cast_HeadVar1_4 = ll_backend__prog_rep__HeadVar__2_2;
#line 48 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Cast_HeadVar2_5 = ll_backend__prog_rep__HeadVar__3_3;

#line 48 "prog_rep.m"
    {
#line 48 "prog_rep.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_2[1], ll_backend__prog_rep__HeadVar__1_1, ((MR_Box) (ll_backend__prog_rep__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__prog_rep__Cast_HeadVar2_5)));
#line 48 "prog_rep.m"
      return;
    }
#line 48 "prog_rep.m"
  }
#line 48 "prog_rep.m"
}

#line 48 "prog_rep.m"
MR_bool MR_CALL 
ll_backend__prog_rep____Unify____var_num_map_0_0(
#line 48 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
#line 48 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2)
#line 48 "prog_rep.m"
{
#line 48 "prog_rep.m"
  {
#line 48 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 48 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Cast_HeadVar1_3 = ll_backend__prog_rep__HeadVar__1_1;
#line 48 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Cast_HeadVar2_4 = ll_backend__prog_rep__HeadVar__2_2;

#line 48 "prog_rep.m"
    {
#line 48 "prog_rep.m"
      return ll_backend__prog_rep__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_2[1], ((MR_Box) (ll_backend__prog_rep__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__prog_rep__Cast_HeadVar2_4)));
    }
#line 48 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 48 "prog_rep.m"
  }
#line 48 "prog_rep.m"
}

#line 66 "prog_rep.m"
void MR_CALL 
ll_backend__prog_rep____Compare____prog_rep_info_0_0(
#line 66 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__1_1,
#line 66 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 66 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3)
#line 66 "prog_rep.m"
{
#line 66 "prog_rep.m"
  {
#line 66 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 66 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__CastX_21 = (MR_Integer) ll_backend__prog_rep__HeadVar__2_2;
#line 66 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__CastY_22 = (MR_Integer) ll_backend__prog_rep__HeadVar__3_3;

#line 66 "prog_rep.m"
    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__CastX_21 == ll_backend__prog_rep__CastY_22);
#line 66 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 3048 "ll_backend.prog_rep.c"
      *ll_backend__prog_rep__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "prog_rep.m"
    else
#line 66 "prog_rep.m"
      {
#line 66 "prog_rep.m"
        MR_String ll_backend__prog_rep__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 2)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 3)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 4)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 5)));
#line 66 "prog_rep.m"
        MR_String ll_backend__prog_rep__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 2)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 3)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 4)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 5)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_16_16;

#line 66 "prog_rep.m"
        {
#line 66 "prog_rep.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__prog_rep__V_16_16, ll_backend__prog_rep__V_4_4, ll_backend__prog_rep__V_10_10);
        }
#line 3086 "ll_backend.prog_rep.c"
        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_16_16 == (MR_Integer) 0);
#line 66 "prog_rep.m"
        ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
#line 66 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 66 "prog_rep.m"
          *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_16_16;
#line 66 "prog_rep.m"
        else
#line 66 "prog_rep.m"
          {
#line 66 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_17_17;

#line 66 "prog_rep.m"
            {
#line 66 "prog_rep.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &ll_backend__prog_rep__V_17_17, ((MR_Box) (ll_backend__prog_rep__V_5_5)), ((MR_Box) (ll_backend__prog_rep__V_11_11)));
            }
#line 3106 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_17_17 == (MR_Integer) 0);
#line 66 "prog_rep.m"
            ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
#line 66 "prog_rep.m"
            if (ll_backend__prog_rep__succeeded)
#line 66 "prog_rep.m"
              *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_17_17;
#line 66 "prog_rep.m"
            else
#line 66 "prog_rep.m"
              {
#line 66 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_18_18;

#line 66 "prog_rep.m"
                {
#line 66 "prog_rep.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_2[1], &ll_backend__prog_rep__V_18_18, ((MR_Box) (ll_backend__prog_rep__V_6_6)), ((MR_Box) (ll_backend__prog_rep__V_12_12)));
                }
#line 3126 "ll_backend.prog_rep.c"
                ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_18_18 == (MR_Integer) 0);
#line 66 "prog_rep.m"
                ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
#line 66 "prog_rep.m"
                if (ll_backend__prog_rep__succeeded)
#line 66 "prog_rep.m"
                  *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_18_18;
#line 66 "prog_rep.m"
                else
#line 66 "prog_rep.m"
                  {
#line 66 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_19_19;
#line 66 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__V_29_29 = (MR_Integer) ll_backend__prog_rep__V_7_7;
#line 66 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__V_30_30 = (MR_Integer) ll_backend__prog_rep__V_13_13;

#line 66 "prog_rep.m"
                    {
#line 66 "prog_rep.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__prog_rep__V_19_19, ll_backend__prog_rep__V_29_29, ll_backend__prog_rep__V_30_30);
                    }
#line 3150 "ll_backend.prog_rep.c"
                    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_19_19 == (MR_Integer) 0);
#line 66 "prog_rep.m"
                    ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
#line 66 "prog_rep.m"
                    if (ll_backend__prog_rep__succeeded)
#line 66 "prog_rep.m"
                      *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_19_19;
#line 66 "prog_rep.m"
                    else
#line 66 "prog_rep.m"
                      {
#line 66 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_20_20;

#line 66 "prog_rep.m"
                        {
#line 66 "prog_rep.m"
                          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__prog_rep__V_20_20, ll_backend__prog_rep__V_8_8, ll_backend__prog_rep__V_14_14);
                        }
#line 3170 "ll_backend.prog_rep.c"
                        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_20_20 == (MR_Integer) 0);
#line 66 "prog_rep.m"
                        ll_backend__prog_rep__succeeded = !(ll_backend__prog_rep__succeeded);
#line 66 "prog_rep.m"
                        if (ll_backend__prog_rep__succeeded)
#line 66 "prog_rep.m"
                          *ll_backend__prog_rep__HeadVar__1_1 = ll_backend__prog_rep__V_20_20;
#line 66 "prog_rep.m"
                        else
#line 66 "prog_rep.m"
                          {
#line 66 "prog_rep.m"
                            MR_Integer ll_backend__prog_rep__V_31_31 = (MR_Integer) ll_backend__prog_rep__V_9_9;
#line 66 "prog_rep.m"
                            MR_Integer ll_backend__prog_rep__V_32_32 = (MR_Integer) ll_backend__prog_rep__V_15_15;

#line 66 "prog_rep.m"
                            {
#line 66 "prog_rep.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__prog_rep__HeadVar__1_1, ll_backend__prog_rep__V_31_31, ll_backend__prog_rep__V_32_32);
#line 66 "prog_rep.m"
                              return;
                            }
#line 66 "prog_rep.m"
                          }
#line 66 "prog_rep.m"
                      }
#line 66 "prog_rep.m"
                  }
#line 66 "prog_rep.m"
              }
#line 66 "prog_rep.m"
          }
#line 66 "prog_rep.m"
      }
#line 66 "prog_rep.m"
  }
#line 66 "prog_rep.m"
}

#line 66 "prog_rep.m"
MR_bool MR_CALL 
ll_backend__prog_rep____Unify____prog_rep_info_0_0(
#line 66 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
#line 66 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2)
#line 66 "prog_rep.m"
{
#line 66 "prog_rep.m"
  {
#line 66 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 66 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__CastX_15 = (MR_Integer) ll_backend__prog_rep__HeadVar__1_1;
#line 66 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__CastY_16 = (MR_Integer) ll_backend__prog_rep__HeadVar__2_2;

#line 66 "prog_rep.m"
    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__CastX_15 == ll_backend__prog_rep__CastY_16);
#line 66 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 66 "prog_rep.m"
      ll_backend__prog_rep__succeeded = MR_TRUE;
#line 66 "prog_rep.m"
    else
#line 66 "prog_rep.m"
      {
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TypeCtorInfo_17_17;
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TypeInfo_18_18;
#line 66 "prog_rep.m"
        MR_String ll_backend__prog_rep__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 2)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 3)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 4)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 5)));
#line 66 "prog_rep.m"
        MR_String ll_backend__prog_rep__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 2)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 3)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 4)));
#line 66 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 5)));

#line 3268 "ll_backend.prog_rep.c"
        ll_backend__prog_rep__succeeded = (strcmp(ll_backend__prog_rep__V_3_3, ll_backend__prog_rep__V_9_9) == 0);
#line 66 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 66 "prog_rep.m"
          {
#line 3274 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 3276 "ll_backend.prog_rep.c"
            {
#line 3278 "ll_backend.prog_rep.c"
              ll_backend__prog_rep__succeeded = mercury__builtin__unify_2_p_0(ll_backend__prog_rep__TypeCtorInfo_17_17, ((MR_Box) (ll_backend__prog_rep__V_4_4)), ((MR_Box) (ll_backend__prog_rep__V_10_10)));
            }
#line 66 "prog_rep.m"
            if (ll_backend__prog_rep__succeeded)
#line 66 "prog_rep.m"
              {
#line 3285 "ll_backend.prog_rep.c"
                ll_backend__prog_rep__TypeInfo_18_18 = (MR_Word) &ll_backend__prog_rep_scalar_common_2[1];
#line 3287 "ll_backend.prog_rep.c"
                {
#line 3289 "ll_backend.prog_rep.c"
                  ll_backend__prog_rep__succeeded = mercury__builtin__unify_2_p_0(ll_backend__prog_rep__TypeInfo_18_18, ((MR_Box) (ll_backend__prog_rep__V_5_5)), ((MR_Box) (ll_backend__prog_rep__V_11_11)));
                }
#line 66 "prog_rep.m"
                if (ll_backend__prog_rep__succeeded)
#line 66 "prog_rep.m"
                  {
#line 3296 "ll_backend.prog_rep.c"
                    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_6_6 == ll_backend__prog_rep__V_12_12);
#line 66 "prog_rep.m"
                    if (ll_backend__prog_rep__succeeded)
#line 66 "prog_rep.m"
                      {
#line 3302 "ll_backend.prog_rep.c"
                        {
#line 3304 "ll_backend.prog_rep.c"
                          ll_backend__prog_rep__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__prog_rep__V_7_7, ll_backend__prog_rep__V_13_13);
                        }
#line 66 "prog_rep.m"
                        if (ll_backend__prog_rep__succeeded)
#line 3309 "ll_backend.prog_rep.c"
                          ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_8_8 == ll_backend__prog_rep__V_14_14);
#line 66 "prog_rep.m"
                      }
#line 66 "prog_rep.m"
                  }
#line 66 "prog_rep.m"
              }
#line 66 "prog_rep.m"
          }
#line 66 "prog_rep.m"
      }
#line 66 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 66 "prog_rep.m"
  }
#line 66 "prog_rep.m"
}

#line 76 "prog_rep.m"
void MR_CALL 
ll_backend__prog_rep____Compare____flatten_par_conjs_0_0(
#line 76 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__1_1,
#line 76 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 76 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3)
#line 76 "prog_rep.m"
{
#line 76 "prog_rep.m"
  {
#line 76 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 76 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Cast_HeadVar1_4 = (MR_Integer) ll_backend__prog_rep__HeadVar__2_2;
#line 76 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Cast_HeadVar2_5 = (MR_Integer) ll_backend__prog_rep__HeadVar__3_3;

#line 76 "prog_rep.m"
    {
#line 76 "prog_rep.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__prog_rep__HeadVar__1_1, ll_backend__prog_rep__Cast_HeadVar1_4, ll_backend__prog_rep__Cast_HeadVar2_5);
#line 76 "prog_rep.m"
      return;
    }
#line 76 "prog_rep.m"
  }
#line 76 "prog_rep.m"
}

#line 76 "prog_rep.m"
MR_bool MR_CALL 
ll_backend__prog_rep____Unify____flatten_par_conjs_0_0(
#line 76 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_1,
#line 76 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2)
#line 76 "prog_rep.m"
{
#line 3369 "ll_backend.prog_rep.c"
  {
#line 3371 "ll_backend.prog_rep.c"
    MR_bool ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__HeadVar__2_1 == ll_backend__prog_rep__HeadVar__2_2);

#line 3374 "ll_backend.prog_rep.c"
    return ll_backend__prog_rep__succeeded;
#line 3376 "ll_backend.prog_rep.c"
  }
#line 76 "prog_rep.m"
}

#line 1018 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_method_num_func_1_f_0(
#line 1018 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum_3)
#line 1018 "prog_rep.m"
{
#line 1021 "prog_rep.m"
  {
#line 1021 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 1021 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Bytes_4;

#line 1021 "prog_rep.m"
    {
#line 1021 "prog_rep.m"
      mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__VarNum_3, &ll_backend__prog_rep__Bytes_4);
    }
#line 1021 "prog_rep.m"
    return ll_backend__prog_rep__Bytes_4;
#line 1021 "prog_rep.m"
  }
#line 1018 "prog_rep.m"
}

#line 1013 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_lineno_func_1_f_0(
#line 1013 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum_3)
#line 1013 "prog_rep.m"
{
#line 1016 "prog_rep.m"
  {
#line 1016 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 1016 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Bytes_4;

#line 1016 "prog_rep.m"
    {
#line 1016 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__VarNum_3, &ll_backend__prog_rep__Bytes_4);
    }
#line 1016 "prog_rep.m"
    return ll_backend__prog_rep__Bytes_4;
#line 1016 "prog_rep.m"
  }
#line 1013 "prog_rep.m"
}

#line 1008 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_length_func_1_f_0(
#line 1008 "prog_rep.m"
  MR_Word ll_backend__prog_rep__TypeInfo_for_T_6,
#line 1008 "prog_rep.m"
  MR_Word ll_backend__prog_rep__List_3)
#line 1008 "prog_rep.m"
{
#line 1010 "prog_rep.m"
  {
#line 1010 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 1010 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Bytes_4;
#line 1010 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_5_5;

#line 1011 "prog_rep.m"
    {
#line 1011 "prog_rep.m"
      ll_backend__prog_rep__V_5_5 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeInfo_for_T_6, ll_backend__prog_rep__List_3);
    }
#line 1011 "prog_rep.m"
    {
#line 1011 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_5_5, &ll_backend__prog_rep__Bytes_4);
    }
#line 1010 "prog_rep.m"
    return ll_backend__prog_rep__Bytes_4;
#line 1010 "prog_rep.m"
  }
#line 1008 "prog_rep.m"
}

#line 973 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_head_var_func_4_f_0(
#line 973 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_6,
#line 973 "prog_rep.m"
  MR_Word ll_backend__prog_rep__InitialInstmap_7,
#line 973 "prog_rep.m"
  MR_Word ll_backend__prog_rep__InstmapDelta_8,
#line 973 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Var_9)
#line 973 "prog_rep.m"
{
#line 976 "prog_rep.m"
  {
#line 976 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 976 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Bytes_10;
#line 976 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarBytes_11;
#line 976 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ModuleInfo_12;
#line 976 "prog_rep.m"
    MR_Word ll_backend__prog_rep__InitialInst_13;
#line 976 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FinalInst_15;
#line 976 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_16_16;
#line 976 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_17_17;
#line 976 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_18_18;
#line 976 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_19_19;
#line 976 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_20_20;
#line 976 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 2)));
#line 976 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_33_33;
#line 976 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarNumRep_44;
#line 976 "prog_rep.m"
    MR_Word ll_backend__prog_rep__InstRep_55;
#line 976 "prog_rep.m"
    MR_Word ll_backend__prog_rep__InstRep_60;
#line 928 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 0)));
#line 928 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 1)));
#line 928 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 3)));
#line 928 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 4)));
#line 928 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 5)));
#line 928 "prog_rep.m"
    MR_Box ll_backend__prog_rep__conv0_V_33_33;
#line 928 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_31_31;
#line 933 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_46_46;
#line 933 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_47_47;
#line 933 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_48_48;
#line 933 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_50_50;
#line 982 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FinalInstPrime_14;

#line 928 "prog_rep.m"
    {
#line 928 "prog_rep.m"
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &ll_backend__prog_rep_scalar_common_2[0], ll_backend__prog_rep__V_32_32, ((MR_Box) (ll_backend__prog_rep__Var_9)), &ll_backend__prog_rep__conv0_V_33_33);
    }
#line 928 "prog_rep.m"
    ll_backend__prog_rep__V_33_33 = ((MR_Word) ll_backend__prog_rep__conv0_V_33_33);
#line 928 "prog_rep.m"
    ll_backend__prog_rep__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_33_33, (MR_Integer) 0)));
#line 928 "prog_rep.m"
    ll_backend__prog_rep__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_33_33, (MR_Integer) 1)));
#line 933 "prog_rep.m"
    ll_backend__prog_rep__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 0)));
#line 933 "prog_rep.m"
    ll_backend__prog_rep__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 1)));
#line 933 "prog_rep.m"
    ll_backend__prog_rep__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 2)));
#line 933 "prog_rep.m"
    ll_backend__prog_rep__VarNumRep_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 3)));
#line 933 "prog_rep.m"
    ll_backend__prog_rep__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 4)));
#line 933 "prog_rep.m"
    ll_backend__prog_rep__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_6, (MR_Integer) 5)));
#line 937 "prog_rep.m"
    if ((ll_backend__prog_rep__VarNumRep_44 == (MR_Integer) 0))
#line 935 "prog_rep.m"
      {
#line 936 "prog_rep.m"
        {
#line 936 "prog_rep.m"
          ll_backend__prog_rep__VarBytes_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_11, 0) = ((MR_Box) (ll_backend__prog_rep__V_16_16));
#line 936 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "prog_rep.m"
        }
#line 935 "prog_rep.m"
      }
#line 937 "prog_rep.m"
    else
#line 937 "prog_rep.m"
      if ((ll_backend__prog_rep__VarNumRep_44 == (MR_Integer) 1))
#line 939 "prog_rep.m"
        {
#line 939 "prog_rep.m"
          mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__V_16_16, &ll_backend__prog_rep__VarBytes_11);
        }
#line 937 "prog_rep.m"
      else
#line 942 "prog_rep.m"
        {
#line 942 "prog_rep.m"
          mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_16_16, &ll_backend__prog_rep__VarBytes_11);
        }
#line 979 "prog_rep.m"
    {
#line 979 "prog_rep.m"
      hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__prog_rep__InitialInstmap_7, ll_backend__prog_rep__Var_9, &ll_backend__prog_rep__InitialInst_13);
    }
#line 980 "prog_rep.m"
    {
#line 980 "prog_rep.m"
      ll_backend__prog_rep__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(ll_backend__prog_rep__InstmapDelta_8, ll_backend__prog_rep__Var_9, &ll_backend__prog_rep__FinalInstPrime_14);
    }
#line 982 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 981 "prog_rep.m"
      ll_backend__prog_rep__FinalInst_15 = ll_backend__prog_rep__FinalInstPrime_14;
#line 982 "prog_rep.m"
    else
#line 985 "prog_rep.m"
      ll_backend__prog_rep__FinalInst_15 = ll_backend__prog_rep__InitialInst_13;
#line 995 "prog_rep.m"
    if ((ll_backend__prog_rep__InitialInst_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 994 "prog_rep.m"
      ll_backend__prog_rep__succeeded = MR_TRUE;
#line 995 "prog_rep.m"
    else
#line 995 "prog_rep.m"
      if (((MR_tag((MR_Word) ll_backend__prog_rep__InitialInst_13)) == (MR_mktag((MR_Integer) 1))))
#line 995 "prog_rep.m"
        ll_backend__prog_rep__succeeded = MR_TRUE;
#line 995 "prog_rep.m"
      else
#line 995 "prog_rep.m"
        ll_backend__prog_rep__succeeded = MR_FALSE;
#line 999 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 998 "prog_rep.m"
      ll_backend__prog_rep__InstRep_55 = (MR_Integer) 0;
#line 999 "prog_rep.m"
    else
#line 1003 "prog_rep.m"
      {
#line 1000 "prog_rep.m"
        {
#line 1000 "prog_rep.m"
          ll_backend__prog_rep__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(ll_backend__prog_rep__ModuleInfo_12, ll_backend__prog_rep__InitialInst_13);
        }
#line 1003 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 1002 "prog_rep.m"
          ll_backend__prog_rep__InstRep_55 = (MR_Integer) 1;
#line 1003 "prog_rep.m"
        else
#line 1004 "prog_rep.m"
          ll_backend__prog_rep__InstRep_55 = (MR_Integer) 2;
#line 1003 "prog_rep.m"
      }
#line 1006 "prog_rep.m"
    {
#line 1006 "prog_rep.m"
      mdbcomp__program_representation__inst_representation_2_p_0(ll_backend__prog_rep__InstRep_55, &ll_backend__prog_rep__V_18_18);
    }
#line 995 "prog_rep.m"
    if ((ll_backend__prog_rep__FinalInst_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 994 "prog_rep.m"
      ll_backend__prog_rep__succeeded = MR_TRUE;
#line 995 "prog_rep.m"
    else
#line 995 "prog_rep.m"
      if (((MR_tag((MR_Word) ll_backend__prog_rep__FinalInst_15)) == (MR_mktag((MR_Integer) 1))))
#line 995 "prog_rep.m"
        ll_backend__prog_rep__succeeded = MR_TRUE;
#line 995 "prog_rep.m"
      else
#line 995 "prog_rep.m"
        ll_backend__prog_rep__succeeded = MR_FALSE;
#line 999 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 998 "prog_rep.m"
      ll_backend__prog_rep__InstRep_60 = (MR_Integer) 0;
#line 999 "prog_rep.m"
    else
#line 1003 "prog_rep.m"
      {
#line 1000 "prog_rep.m"
        {
#line 1000 "prog_rep.m"
          ll_backend__prog_rep__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(ll_backend__prog_rep__ModuleInfo_12, ll_backend__prog_rep__FinalInst_15);
        }
#line 1003 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 1002 "prog_rep.m"
          ll_backend__prog_rep__InstRep_60 = (MR_Integer) 1;
#line 1003 "prog_rep.m"
        else
#line 1004 "prog_rep.m"
          ll_backend__prog_rep__InstRep_60 = (MR_Integer) 2;
#line 1003 "prog_rep.m"
      }
#line 1006 "prog_rep.m"
    {
#line 1006 "prog_rep.m"
      mdbcomp__program_representation__inst_representation_2_p_0(ll_backend__prog_rep__InstRep_60, &ll_backend__prog_rep__V_20_20);
    }
#line 987 "prog_rep.m"
    {
#line 987 "prog_rep.m"
      ll_backend__prog_rep__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_19_19, 0) = ((MR_Box) (ll_backend__prog_rep__V_20_20));
#line 987 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 987 "prog_rep.m"
    }
#line 987 "prog_rep.m"
    {
#line 987 "prog_rep.m"
      ll_backend__prog_rep__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_17_17, 0) = ((MR_Box) (ll_backend__prog_rep__V_18_18));
#line 987 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_17_17, 1) = ((MR_Box) (ll_backend__prog_rep__V_19_19));
#line 987 "prog_rep.m"
    }
#line 987 "prog_rep.m"
    {
#line 987 "prog_rep.m"
      ll_backend__prog_rep__Bytes_10 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__VarBytes_11, ll_backend__prog_rep__V_17_17);
    }
#line 976 "prog_rep.m"
    return ll_backend__prog_rep__Bytes_10;
#line 976 "prog_rep.m"
  }
#line 973 "prog_rep.m"
}

#line 952 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(
#line 952 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 952 "prog_rep.m"
  MR_Word ll_backend__prog_rep__MaybeVar_5)
#line 952 "prog_rep.m"
{
#line 958 "prog_rep.m"
  {
#line 958 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 958 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Bytes_6;

#line 958 "prog_rep.m"
    if ((ll_backend__prog_rep__MaybeVar_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 961 "prog_rep.m"
      {
#line 962 "prog_rep.m"
        ll_backend__prog_rep__Bytes_6 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__prog_rep_scalar_common_1[7]);
#line 961 "prog_rep.m"
      }
#line 958 "prog_rep.m"
    else
#line 958 "prog_rep.m"
      {
#line 958 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__MaybeVar_5, (MR_Integer) 0)));
#line 958 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_11_11;
#line 958 "prog_rep.m"
        MR_Word ll_backend__prog_rep__VarNumRep_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 3)));
#line 933 "prog_rep.m"
        MR_String ll_backend__prog_rep__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 0)));
#line 933 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 1)));
#line 933 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 2)));
#line 933 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 4)));
#line 933 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 5)));

#line 937 "prog_rep.m"
        if ((ll_backend__prog_rep__VarNumRep_15 == (MR_Integer) 0))
#line 935 "prog_rep.m"
          {
#line 936 "prog_rep.m"
            {
#line 936 "prog_rep.m"
              ll_backend__prog_rep__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_11_11, 0) = ((MR_Box) (ll_backend__prog_rep__Var_7));
#line 936 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "prog_rep.m"
            }
#line 935 "prog_rep.m"
          }
#line 937 "prog_rep.m"
        else
#line 937 "prog_rep.m"
          if ((ll_backend__prog_rep__VarNumRep_15 == (MR_Integer) 1))
#line 939 "prog_rep.m"
            {
#line 939 "prog_rep.m"
              mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__Var_7, &ll_backend__prog_rep__V_11_11);
            }
#line 937 "prog_rep.m"
          else
#line 942 "prog_rep.m"
            {
#line 942 "prog_rep.m"
              mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Var_7, &ll_backend__prog_rep__V_11_11);
            }
#line 959 "prog_rep.m"
        {
#line 959 "prog_rep.m"
          ll_backend__prog_rep__Bytes_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Bytes_6, 0) = ((MR_Box) ((MR_Integer) 1));
#line 959 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Bytes_6, 1) = ((MR_Box) (ll_backend__prog_rep__V_11_11));
#line 959 "prog_rep.m"
        }
#line 958 "prog_rep.m"
      }
#line 958 "prog_rep.m"
    return ll_backend__prog_rep__Bytes_6;
#line 958 "prog_rep.m"
  }
#line 952 "prog_rep.m"
}

#line 950 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1(
#line 950 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 950 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 950 "prog_rep.m"
{
#line 950 "prog_rep.m"
  {
#line 950 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 950 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 950 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_Bytes_6;

#line 950 "prog_rep.m"
    {
#line 950 "prog_rep.m"
      ll_backend__prog_rep__conv0_Bytes_6 = ll_backend__prog_rep__encode_maybe_var_rep_func_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 950 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_Bytes_6));
#line 950 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 950 "prog_rep.m"
  }
#line 950 "prog_rep.m"
}

#line 945 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(
#line 945 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 945 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Vars_5)
#line 945 "prog_rep.m"
{
#line 948 "prog_rep.m"
  {
#line 948 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 948 "prog_rep.m"
    MR_Word ll_backend__prog_rep__HeadVar__3_3;
#line 948 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 948 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeInfo_11_11 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[5];
#line 948 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_6_6;
#line 948 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_7_7;
#line 948 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_8_8;
#line 948 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_9_9;
#line 948 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_17_17;

#line 1011 "prog_rep.m"
    {
#line 1011 "prog_rep.m"
      ll_backend__prog_rep__V_17_17 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeInfo_11_11, ll_backend__prog_rep__Vars_5);
    }
#line 1011 "prog_rep.m"
    {
#line 1011 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_17_17, &ll_backend__prog_rep__V_6_6);
    }
#line 950 "prog_rep.m"
    {
#line 950 "prog_rep.m"
      ll_backend__prog_rep__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 950 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[4]));
#line 950 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 1) = ((MR_Box) (ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0_1));
#line 950 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 950 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 3) = ((MR_Box) (ll_backend__prog_rep__Info_4));
#line 950 "prog_rep.m"
    }
#line 950 "prog_rep.m"
    {
#line 950 "prog_rep.m"
      ll_backend__prog_rep__V_8_8 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_11_11, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], ll_backend__prog_rep__V_9_9, ll_backend__prog_rep__Vars_5);
    }
#line 949 "prog_rep.m"
    {
#line 949 "prog_rep.m"
      ll_backend__prog_rep__V_7_7 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__V_8_8);
    }
#line 948 "prog_rep.m"
    {
#line 948 "prog_rep.m"
      ll_backend__prog_rep__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__V_6_6, ll_backend__prog_rep__V_7_7);
    }
#line 948 "prog_rep.m"
    return ll_backend__prog_rep__HeadVar__3_3;
#line 948 "prog_rep.m"
  }
#line 945 "prog_rep.m"
}

#line 930 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_rep_func_2_f_0(
#line 930 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 930 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__Var_5)
#line 930 "prog_rep.m"
{
#line 932 "prog_rep.m"
  {
#line 932 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 932 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Bytes_6;
#line 932 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarNumRep_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 3)));
#line 933 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 0)));
#line 933 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 1)));
#line 933 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 2)));
#line 933 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 4)));
#line 933 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 5)));

#line 937 "prog_rep.m"
    if ((ll_backend__prog_rep__VarNumRep_7 == (MR_Integer) 0))
#line 935 "prog_rep.m"
      {
#line 936 "prog_rep.m"
        {
#line 936 "prog_rep.m"
          ll_backend__prog_rep__Bytes_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Bytes_6, 0) = ((MR_Box) (ll_backend__prog_rep__Var_5));
#line 936 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Bytes_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "prog_rep.m"
        }
#line 935 "prog_rep.m"
      }
#line 937 "prog_rep.m"
    else
#line 937 "prog_rep.m"
      if ((ll_backend__prog_rep__VarNumRep_7 == (MR_Integer) 1))
#line 939 "prog_rep.m"
        {
#line 939 "prog_rep.m"
          mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__Var_5, &ll_backend__prog_rep__Bytes_6);
        }
#line 937 "prog_rep.m"
      else
#line 942 "prog_rep.m"
        {
#line 942 "prog_rep.m"
          mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Var_5, &ll_backend__prog_rep__Bytes_6);
        }
#line 932 "prog_rep.m"
    return ll_backend__prog_rep__Bytes_6;
#line 932 "prog_rep.m"
  }
#line 930 "prog_rep.m"
}

#line 925 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__var_to_var_rep_2_f_0(
#line 925 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 925 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Var_5)
#line 925 "prog_rep.m"
{
#line 927 "prog_rep.m"
  {
#line 927 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 927 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Num_6;
#line 927 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 2)));
#line 927 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_9_9;
#line 928 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 0)));
#line 928 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 1)));
#line 928 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 3)));
#line 928 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 4)));
#line 928 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_4, (MR_Integer) 5)));
#line 928 "prog_rep.m"
    MR_Box ll_backend__prog_rep__conv0_V_9_9;
#line 928 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_7_7;

#line 928 "prog_rep.m"
    {
#line 928 "prog_rep.m"
      mercury__map__lookup_3_p_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &ll_backend__prog_rep_scalar_common_2[0], ll_backend__prog_rep__V_8_8, ((MR_Box) (ll_backend__prog_rep__Var_5)), &ll_backend__prog_rep__conv0_V_9_9);
    }
#line 928 "prog_rep.m"
    ll_backend__prog_rep__V_9_9 = ((MR_Word) ll_backend__prog_rep__conv0_V_9_9);
#line 928 "prog_rep.m"
    ll_backend__prog_rep__Num_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, (MR_Integer) 0)));
#line 928 "prog_rep.m"
    ll_backend__prog_rep__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, (MR_Integer) 1)));
#line 927 "prog_rep.m"
    return ll_backend__prog_rep__Num_6;
#line 927 "prog_rep.m"
  }
#line 925 "prog_rep.m"
}

#line 923 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0_1(
#line 923 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 923 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 923 "prog_rep.m"
{
#line 923 "prog_rep.m"
  {
#line 923 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 923 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 923 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_Bytes_6;

#line 923 "prog_rep.m"
    {
#line 923 "prog_rep.m"
      ll_backend__prog_rep__conv0_Bytes_6 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 923 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_Bytes_6));
#line 923 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 923 "prog_rep.m"
  }
#line 923 "prog_rep.m"
}

#line 919 "prog_rep.m"
static MR_Word MR_CALL 
ll_backend__prog_rep__encode_var_reps_func_2_f_0(
#line 919 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_4,
#line 919 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Vars_5)
#line 919 "prog_rep.m"
{
#line 921 "prog_rep.m"
  {
#line 921 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 921 "prog_rep.m"
    MR_Word ll_backend__prog_rep__HeadVar__3_3;
#line 921 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 921 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_6_6;
#line 921 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_7_7;
#line 921 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_8_8;
#line 921 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_9_9;
#line 921 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_16_16;

#line 1011 "prog_rep.m"
    {
#line 1011 "prog_rep.m"
      ll_backend__prog_rep__V_16_16 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__Vars_5);
    }
#line 1011 "prog_rep.m"
    {
#line 1011 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_16_16, &ll_backend__prog_rep__V_6_6);
    }
#line 923 "prog_rep.m"
    {
#line 923 "prog_rep.m"
      ll_backend__prog_rep__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 923 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[3]));
#line 923 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 1) = ((MR_Box) (ll_backend__prog_rep__encode_var_reps_func_2_f_0_1));
#line 923 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 923 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, 3) = ((MR_Box) (ll_backend__prog_rep__Info_4));
#line 923 "prog_rep.m"
    }
#line 923 "prog_rep.m"
    {
#line 923 "prog_rep.m"
      ll_backend__prog_rep__V_8_8 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], ll_backend__prog_rep__V_9_9, ll_backend__prog_rep__Vars_5);
    }
#line 922 "prog_rep.m"
    {
#line 922 "prog_rep.m"
      ll_backend__prog_rep__V_7_7 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__V_8_8);
    }
#line 921 "prog_rep.m"
    {
#line 921 "prog_rep.m"
      ll_backend__prog_rep__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_10_10, ll_backend__prog_rep__V_6_6, ll_backend__prog_rep__V_7_7);
    }
#line 921 "prog_rep.m"
    return ll_backend__prog_rep__HeadVar__3_3;
#line 921 "prog_rep.m"
  }
#line 919 "prog_rep.m"
}

#line 904 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(
#line 904 "prog_rep.m"
  MR_String ll_backend__prog_rep__String_5,
#line 904 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_6,
#line 904 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_9,
#line 904 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_10)
#line 904 "prog_rep.m"
{
#line 907 "prog_rep.m"
  {
#line 907 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 907 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Index_8;

#line 908 "prog_rep.m"
    {
#line 908 "prog_rep.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__String_5, &ll_backend__prog_rep__Index_8, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_9, ll_backend__prog_rep__STATE_VARIABLE_StringTable_10);
    }
#line 909 "prog_rep.m"
    {
#line 909 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_8, ll_backend__prog_rep__Bytes_6);
#line 909 "prog_rep.m"
      return;
    }
#line 907 "prog_rep.m"
  }
#line 904 "prog_rep.m"
}

#line 862 "prog_rep.m"
static MR_String MR_CALL 
ll_backend__prog_rep__cons_id_rep_1_f_0(
#line 862 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1)
#line 862 "prog_rep.m"
{
#line 864 "prog_rep.m"
  {
#line 864 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 864 "prog_rep.m"
    MR_String ll_backend__prog_rep__HeadVar__2_2;

#line 864 "prog_rep.m"
    if ((ll_backend__prog_rep__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 877 "prog_rep.m"
      ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044typeclass_info_cell_constructor";
#line 864 "prog_rep.m"
    else
#line 864 "prog_rep.m"
      if (((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 882 "prog_rep.m"
        ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044tabling_info_const";
#line 864 "prog_rep.m"
      else
#line 864 "prog_rep.m"
        if (((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 876 "prog_rep.m"
          ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044type_info_cell_constructor";
#line 864 "prog_rep.m"
        else
#line 864 "prog_rep.m"
          if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 874 "prog_rep.m"
            ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044base_typeclass_info_const";
#line 864 "prog_rep.m"
          else
#line 864 "prog_rep.m"
            if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 869 "prog_rep.m"
              {
#line 869 "prog_rep.m"
                MR_Char ll_backend__prog_rep__Char_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

#line 869 "prog_rep.m"
                {
#line 869 "prog_rep.m"
                  return ll_backend__prog_rep__HeadVar__2_2 = mercury__string__char_to_string_1_f_0(ll_backend__prog_rep__Char_9);
                }
#line 869 "prog_rep.m"
              }
#line 864 "prog_rep.m"
            else
#line 864 "prog_rep.m"
              if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 872 "prog_rep.m"
                ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044closure_cons";
#line 864 "prog_rep.m"
              else
#line 864 "prog_rep.m"
                if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 864 "prog_rep.m"
                  {
#line 864 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));
#line 864 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 2)));
#line 864 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 3)));

#line 888 "prog_rep.m"
                    if (((MR_tag((MR_Word) ll_backend__prog_rep__SymName_3)) == (MR_mktag((MR_Integer) 1))))
#line 889 "prog_rep.m"
                      {
#line 889 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__SymName_3, (MR_Integer) 0)));

#line 889 "prog_rep.m"
                        ll_backend__prog_rep__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__SymName_3, (MR_Integer) 1)));
#line 889 "prog_rep.m"
                      }
#line 888 "prog_rep.m"
                    else
#line 888 "prog_rep.m"
                      ll_backend__prog_rep__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__SymName_3, (MR_Integer) 0)));
#line 864 "prog_rep.m"
                  }
#line 864 "prog_rep.m"
                else
#line 864 "prog_rep.m"
                  if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 884 "prog_rep.m"
                    ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044deep_profiling_proc_layout";
#line 864 "prog_rep.m"
                  else
#line 864 "prog_rep.m"
                    if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 868 "prog_rep.m"
                      {
#line 868 "prog_rep.m"
                        MR_Float ll_backend__prog_rep__Float_8 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

#line 868 "prog_rep.m"
                        {
#line 868 "prog_rep.m"
                          return ll_backend__prog_rep__HeadVar__2_2 = mercury__string__float_to_string_1_f_0(ll_backend__prog_rep__Float_8);
                        }
#line 868 "prog_rep.m"
                      }
#line 864 "prog_rep.m"
                    else
#line 864 "prog_rep.m"
                      if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 881 "prog_rep.m"
                        ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044ground_term_const";
#line 864 "prog_rep.m"
                      else
#line 864 "prog_rep.m"
                        if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 871 "prog_rep.m"
                          {
#line 871 "prog_rep.m"
                            MR_String ll_backend__prog_rep__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

#line 871 "prog_rep.m"
                            {
#line 871 "prog_rep.m"
                              return ll_backend__prog_rep__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__prog_rep__Name_14);
                            }
#line 871 "prog_rep.m"
                          }
#line 864 "prog_rep.m"
                        else
#line 864 "prog_rep.m"
                          if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 867 "prog_rep.m"
                            {
#line 867 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__Int_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));

#line 867 "prog_rep.m"
                              {
#line 867 "prog_rep.m"
                                return ll_backend__prog_rep__HeadVar__2_2 = mercury__string__int_to_string_1_f_0(ll_backend__prog_rep__Int_7);
                              }
#line 867 "prog_rep.m"
                            }
#line 864 "prog_rep.m"
                          else
#line 864 "prog_rep.m"
                            if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 870 "prog_rep.m"
                              {
#line 870 "prog_rep.m"
                                MR_String ll_backend__prog_rep__String_10 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 1)));
#line 870 "prog_rep.m"
                                MR_String ll_backend__prog_rep__V_12_12;

#line 870 "prog_rep.m"
                                {
#line 870 "prog_rep.m"
                                  ll_backend__prog_rep__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__prog_rep__String_10, (MR_String) "\"");
                                }
#line 870 "prog_rep.m"
                                {
#line 870 "prog_rep.m"
                                  return ll_backend__prog_rep__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__prog_rep__V_12_12);
                                }
#line 870 "prog_rep.m"
                              }
#line 864 "prog_rep.m"
                            else
#line 864 "prog_rep.m"
                              if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 883 "prog_rep.m"
                                ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044table_io_decl";
#line 864 "prog_rep.m"
                              else
#line 864 "prog_rep.m"
                                if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 866 "prog_rep.m"
                                  ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "{}";
#line 864 "prog_rep.m"
                                else
#line 864 "prog_rep.m"
                                  if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 873 "prog_rep.m"
                                    ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044type_ctor_info_const";
#line 864 "prog_rep.m"
                                  else
#line 864 "prog_rep.m"
                                    if (((((MR_tag((MR_Word) ll_backend__prog_rep__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 879 "prog_rep.m"
                                      ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044type_info_const";
#line 864 "prog_rep.m"
                                    else
#line 880 "prog_rep.m"
                                      ll_backend__prog_rep__HeadVar__2_2 = (MR_String) "\044typeclass_info_const";
#line 864 "prog_rep.m"
    return ll_backend__prog_rep__HeadVar__2_2;
#line 864 "prog_rep.m"
  }
#line 862 "prog_rep.m"
}

#line 847 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(
#line 847 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ConsIdArity_5,
#line 847 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__ConsIdBytes_6,
#line 847 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_12,
#line 847 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_13)
#line 847 "prog_rep.m"
{
#line 850 "prog_rep.m"
  {
#line 850 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 850 "prog_rep.m"
    MR_String ll_backend__prog_rep__ConsId_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ConsIdArity_5, (MR_Integer) 0)));
#line 850 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ConsIdArity_5, (MR_Integer) 1)));
#line 850 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FunctorBytes_10;
#line 850 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ArityBytes_11;
#line 850 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Index_21;

#line 908 "prog_rep.m"
    {
#line 908 "prog_rep.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__ConsId_8, &ll_backend__prog_rep__Index_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_12, ll_backend__prog_rep__STATE_VARIABLE_StringTable_13);
    }
#line 909 "prog_rep.m"
    {
#line 909 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_21, &ll_backend__prog_rep__FunctorBytes_10);
    }
#line 853 "prog_rep.m"
    {
#line 853 "prog_rep.m"
      mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__Arity_9, &ll_backend__prog_rep__ArityBytes_11);
    }
#line 854 "prog_rep.m"
    {
#line 854 "prog_rep.m"
      *ll_backend__prog_rep__ConsIdBytes_6 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__FunctorBytes_10, ll_backend__prog_rep__ArityBytes_11);
    }
#line 850 "prog_rep.m"
  }
#line 847 "prog_rep.m"
}

#line 828 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(
#line 828 "prog_rep.m"
  MR_Word ll_backend__prog_rep__GoalInfo_7,
#line 828 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap0_8,
#line 828 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_9,
#line 828 "prog_rep.m"
  MR_String * ll_backend__prog_rep__FileName_10,
#line 828 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__LineNo_11,
#line 828 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__BoundVars_12)
#line 828 "prog_rep.m"
{
#line 832 "prog_rep.m"
  {
#line 832 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 832 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Context_13;
#line 832 "prog_rep.m"
    MR_String ll_backend__prog_rep__FileName0_14;
#line 832 "prog_rep.m"
    MR_Word ll_backend__prog_rep__InstmapDelta_15;
#line 832 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Instmap_16;
#line 832 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ChangedVars_17;
#line 832 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_18_18;
#line 832 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_28_28;
#line 835 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_36_36;
#line 835 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_20_20;
#line 835 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_21_21;
#line 835 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_22_22;
#line 835 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_23_23;
#line 835 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_24_24;
#line 843 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_25_25;
#line 843 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_26_26;
#line 843 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_27_27;
#line 843 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_29_29;

#line 833 "prog_rep.m"
    {
#line 833 "prog_rep.m"
      ll_backend__prog_rep__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__prog_rep__GoalInfo_7);
    }
#line 834 "prog_rep.m"
    {
#line 834 "prog_rep.m"
      mercury__term__context_file_2_p_0(ll_backend__prog_rep__Context_13, &ll_backend__prog_rep__FileName0_14);
    }
#line 835 "prog_rep.m"
    ll_backend__prog_rep__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 0)));
#line 835 "prog_rep.m"
    ll_backend__prog_rep__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 1)));
#line 835 "prog_rep.m"
    ll_backend__prog_rep__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 2)));
#line 835 "prog_rep.m"
    ll_backend__prog_rep__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 3)));
#line 835 "prog_rep.m"
    ll_backend__prog_rep__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 4)));
#line 835 "prog_rep.m"
    ll_backend__prog_rep__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 5)));
#line 835 "prog_rep.m"
    ll_backend__prog_rep__succeeded = (strcmp(ll_backend__prog_rep__FileName0_14, ll_backend__prog_rep__V_36_36) == 0);
#line 837 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 836 "prog_rep.m"
      *ll_backend__prog_rep__FileName_10 = (MR_String) "";
#line 837 "prog_rep.m"
    else
#line 838 "prog_rep.m"
      *ll_backend__prog_rep__FileName_10 = ll_backend__prog_rep__FileName0_14;
#line 840 "prog_rep.m"
    {
#line 840 "prog_rep.m"
      mercury__term__context_line_2_p_0(ll_backend__prog_rep__Context_13, ll_backend__prog_rep__LineNo_11);
    }
#line 841 "prog_rep.m"
    {
#line 841 "prog_rep.m"
      ll_backend__prog_rep__InstmapDelta_15 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__prog_rep__GoalInfo_7);
    }
#line 842 "prog_rep.m"
    {
#line 842 "prog_rep.m"
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__prog_rep__Instmap0_8, ll_backend__prog_rep__InstmapDelta_15, &ll_backend__prog_rep__Instmap_16);
    }
#line 843 "prog_rep.m"
    ll_backend__prog_rep__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 0)));
#line 843 "prog_rep.m"
    ll_backend__prog_rep__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 1)));
#line 843 "prog_rep.m"
    ll_backend__prog_rep__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 2)));
#line 843 "prog_rep.m"
    ll_backend__prog_rep__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 3)));
#line 843 "prog_rep.m"
    ll_backend__prog_rep__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 4)));
#line 843 "prog_rep.m"
    ll_backend__prog_rep__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_9, (MR_Integer) 5)));
#line 843 "prog_rep.m"
    {
#line 843 "prog_rep.m"
      hlds__instmap__instmap_changed_vars_5_p_0(ll_backend__prog_rep__Instmap0_8, ll_backend__prog_rep__Instmap_16, ll_backend__prog_rep__V_18_18, ll_backend__prog_rep__V_28_28, &ll_backend__prog_rep__ChangedVars_17);
    }
#line 845 "prog_rep.m"
    {
#line 845 "prog_rep.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__prog_rep__ChangedVars_17, ll_backend__prog_rep__BoundVars_12);
#line 845 "prog_rep.m"
      return;
    }
#line 832 "prog_rep.m"
  }
#line 828 "prog_rep.m"
}

#line 809 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__filter_input_args_4_p_0(
#line 809 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_1,
#line 809 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 809 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 809 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4)
#line 809 "prog_rep.m"
{
#line 812 "prog_rep.m"
  {
#line 812 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 812 "prog_rep.m"
    if ((ll_backend__prog_rep__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 812 "prog_rep.m"
      if ((ll_backend__prog_rep__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 812 "prog_rep.m"
        *ll_backend__prog_rep__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 812 "prog_rep.m"
      else
#line 821 "prog_rep.m"
        {
#line 822 "prog_rep.m"
          {
#line 822 "prog_rep.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.filter_input_args\'/4", (MR_String) "mismatched lists");
#line 822 "prog_rep.m"
            return;
          }
#line 821 "prog_rep.m"
        }
#line 812 "prog_rep.m"
    else
#line 812 "prog_rep.m"
      {
#line 812 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 812 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));

#line 812 "prog_rep.m"
        if ((ll_backend__prog_rep__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 823 "prog_rep.m"
          {
#line 824 "prog_rep.m"
            {
#line 824 "prog_rep.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.filter_input_args\'/4", (MR_String) "mismatched lists");
#line 824 "prog_rep.m"
              return;
            }
#line 823 "prog_rep.m"
          }
#line 812 "prog_rep.m"
        else
#line 814 "prog_rep.m"
          {
#line 814 "prog_rep.m"
            MR_Word ll_backend__prog_rep__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
#line 814 "prog_rep.m"
            MR_Word ll_backend__prog_rep__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
#line 814 "prog_rep.m"
            MR_Word ll_backend__prog_rep__MaybeVar_11;
#line 814 "prog_rep.m"
            MR_Word ll_backend__prog_rep__MaybeVars_12;
#line 806 "prog_rep.m"
            MR_Word ll_backend__prog_rep__RHSInitialInst_31;
#line 806 "prog_rep.m"
            MR_Word ll_backend__prog_rep__RHSFinalInst_33;
#line 806 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_28_28, (MR_Integer) 0)));
#line 806 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_28_28, (MR_Integer) 1)));
#line 806 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_36_36;
#line 806 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_37_37;
#line 806 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_34_34, (MR_Integer) 0)));
#line 806 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_32_32;
#line 807 "prog_rep.m"
            MR_String ll_backend__prog_rep__V_38_38;
#line 807 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_39_39;
#line 807 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_40_40;
#line 807 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_41_41;
#line 807 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_42_42;

#line 806 "prog_rep.m"
            ll_backend__prog_rep__RHSInitialInst_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_34_34, (MR_Integer) 1)));
#line 806 "prog_rep.m"
            ll_backend__prog_rep__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_35_35, (MR_Integer) 0)));
#line 806 "prog_rep.m"
            ll_backend__prog_rep__RHSFinalInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_35_35, (MR_Integer) 1)));
#line 807 "prog_rep.m"
            ll_backend__prog_rep__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 0)));
#line 807 "prog_rep.m"
            ll_backend__prog_rep__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 1)));
#line 807 "prog_rep.m"
            ll_backend__prog_rep__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 2)));
#line 807 "prog_rep.m"
            ll_backend__prog_rep__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 3)));
#line 807 "prog_rep.m"
            ll_backend__prog_rep__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 4)));
#line 807 "prog_rep.m"
            ll_backend__prog_rep__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_1, (MR_Integer) 5)));
#line 807 "prog_rep.m"
            {
#line 807 "prog_rep.m"
              ll_backend__prog_rep__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 807 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_37_37, 0) = ((MR_Box) (ll_backend__prog_rep__RHSInitialInst_31));
#line 807 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_37_37, 1) = ((MR_Box) (ll_backend__prog_rep__RHSFinalInst_33));
#line 807 "prog_rep.m"
            }
#line 807 "prog_rep.m"
            {
#line 807 "prog_rep.m"
              ll_backend__prog_rep__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(ll_backend__prog_rep__V_36_36, ll_backend__prog_rep__V_37_37);
            }
#line 817 "prog_rep.m"
            if (ll_backend__prog_rep__succeeded)
#line 816 "prog_rep.m"
              {
#line 816 "prog_rep.m"
                ll_backend__prog_rep__MaybeVar_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 816 "prog_rep.m"
                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__MaybeVar_11, 0) = ((MR_Box) (ll_backend__prog_rep__Var_9));
#line 816 "prog_rep.m"
              }
#line 817 "prog_rep.m"
            else
#line 818 "prog_rep.m"
              ll_backend__prog_rep__MaybeVar_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "prog_rep.m"
            {
#line 820 "prog_rep.m"
              ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_1, ll_backend__prog_rep__V_27_27, ll_backend__prog_rep__Vars_10, &ll_backend__prog_rep__MaybeVars_12);
            }
#line 814 "prog_rep.m"
            {
#line 814 "prog_rep.m"
              MR_Word base;
#line 814 "prog_rep.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "prog_rep.m"
              *ll_backend__prog_rep__HeadVar__4_4 = base;
#line 814 "prog_rep.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep__MaybeVar_11));
#line 814 "prog_rep.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__prog_rep__MaybeVars_12));
#line 814 "prog_rep.m"
            }
#line 814 "prog_rep.m"
          }
#line 812 "prog_rep.m"
      }
#line 812 "prog_rep.m"
  }
#line 809 "prog_rep.m"
}

#line 799 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__lhs_final_is_ground_2_p_0(
#line 799 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_3,
#line 799 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2)
#line 799 "prog_rep.m"
{
#line 801 "prog_rep.m"
  {
#line 801 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 801 "prog_rep.m"
    MR_Word ll_backend__prog_rep__LHSFinalInst_6;
#line 801 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 801 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_10_10;
#line 801 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
#line 801 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_7_7;
#line 802 "prog_rep.m"
    MR_String ll_backend__prog_rep__V_11_11;
#line 802 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_12_12;
#line 802 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_13_13;
#line 802 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_14_14;
#line 802 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_15_15;

#line 801 "prog_rep.m"
    ll_backend__prog_rep__LHSFinalInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, (MR_Integer) 0)));
#line 801 "prog_rep.m"
    ll_backend__prog_rep__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_9_9, (MR_Integer) 1)));
#line 802 "prog_rep.m"
    ll_backend__prog_rep__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 0)));
#line 802 "prog_rep.m"
    ll_backend__prog_rep__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 1)));
#line 802 "prog_rep.m"
    ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 2)));
#line 802 "prog_rep.m"
    ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 3)));
#line 802 "prog_rep.m"
    ll_backend__prog_rep__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 4)));
#line 802 "prog_rep.m"
    ll_backend__prog_rep__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_3, (MR_Integer) 5)));
#line 802 "prog_rep.m"
    {
#line 802 "prog_rep.m"
      return ll_backend__prog_rep__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(ll_backend__prog_rep__V_10_10, ll_backend__prog_rep__LHSFinalInst_6);
    }
#line 801 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 801 "prog_rep.m"
  }
#line 799 "prog_rep.m"
}

#line 794 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0_1(
#line 794 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 794 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 794 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 794 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 794 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4)
#line 794 "prog_rep.m"
{
#line 794 "prog_rep.m"
  {
#line 794 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 794 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv1_ConsIdBytes_6;
#line 794 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_13;

#line 794 "prog_rep.m"
    {
#line 794 "prog_rep.m"
      ll_backend__prog_rep__encode_cons_id_and_arity_rep_4_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv1_ConsIdBytes_6, ((MR_Word) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_13);
    }
#line 794 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv1_ConsIdBytes_6));
#line 794 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_13));
#line 794 "prog_rep.m"
  }
#line 794 "prog_rep.m"
}

#line 787 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_case_rep_5_p_0(
#line 787 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_6,
#line 787 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Case_7,
#line 787 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_8,
#line 787 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_16,
#line 787 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_17)
#line 787 "prog_rep.m"
{
#line 790 "prog_rep.m"
  {
#line 790 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_30_30;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_33_33;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Case_7, (MR_Integer) 0)));
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Case_7, (MR_Integer) 1)));
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Case_7, (MR_Integer) 2)));
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalBytes_13;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__MainConsIdBytes_14;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__OtherConsIdsByteLists_15;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_18_18;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_19_19;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_22_22;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_23_23;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_24_24;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_25_25;
#line 790 "prog_rep.m"
    MR_String ll_backend__prog_rep__ConsId_39;
#line 790 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Arity_40;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FunctorBytes_41;
#line 790 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ArityBytes_42;
#line 790 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Index_50;
#line 790 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_54_54;
#line 794 "prog_rep.m"
    MR_Box ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_17;

#line 792 "prog_rep.m"
    {
#line 792 "prog_rep.m"
      ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Goal_12, &ll_backend__prog_rep__GoalBytes_13, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_16, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_18_18);
    }
#line 851 "prog_rep.m"
    ll_backend__prog_rep__ConsId_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__MainConsId_10, (MR_Integer) 0)));
#line 851 "prog_rep.m"
    ll_backend__prog_rep__Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__MainConsId_10, (MR_Integer) 1)));
#line 908 "prog_rep.m"
    {
#line 908 "prog_rep.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__ConsId_39, &ll_backend__prog_rep__Index_50, ll_backend__prog_rep__STATE_VARIABLE_StringTable_18_18, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_19_19);
    }
#line 909 "prog_rep.m"
    {
#line 909 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_50, &ll_backend__prog_rep__FunctorBytes_41);
    }
#line 853 "prog_rep.m"
    {
#line 853 "prog_rep.m"
      mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__Arity_40, &ll_backend__prog_rep__ArityBytes_42);
    }
#line 854 "prog_rep.m"
    {
#line 854 "prog_rep.m"
      ll_backend__prog_rep__MainConsIdBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__FunctorBytes_41, ll_backend__prog_rep__ArityBytes_42);
    }
#line 4950 "ll_backend.prog_rep.c"
    ll_backend__prog_rep__TypeCtorInfo_30_30 = (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0;
#line 794 "prog_rep.m"
    {
#line 794 "prog_rep.m"
      mercury__list__map_foldl_5_p_0(ll_backend__prog_rep__TypeCtorInfo_30_30, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[8], ll_backend__prog_rep__OtherConsIds_11, &ll_backend__prog_rep__OtherConsIdsByteLists_15, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_19_19)), &ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_17);
    }
#line 794 "prog_rep.m"
    *ll_backend__prog_rep__STATE_VARIABLE_StringTable_17 = ((MR_Word) ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_17);
#line 4959 "ll_backend.prog_rep.c"
    ll_backend__prog_rep__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1011 "prog_rep.m"
    {
#line 1011 "prog_rep.m"
      ll_backend__prog_rep__V_54_54 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeCtorInfo_30_30, ll_backend__prog_rep__OtherConsIds_11);
    }
#line 1011 "prog_rep.m"
    {
#line 1011 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_54_54, &ll_backend__prog_rep__V_23_23);
    }
#line 797 "prog_rep.m"
    {
#line 797 "prog_rep.m"
      ll_backend__prog_rep__V_25_25 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_33_33, ll_backend__prog_rep__OtherConsIdsByteLists_15);
    }
#line 796 "prog_rep.m"
    {
#line 796 "prog_rep.m"
      ll_backend__prog_rep__V_24_24 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_33_33, ll_backend__prog_rep__V_25_25, ll_backend__prog_rep__GoalBytes_13);
    }
#line 796 "prog_rep.m"
    {
#line 796 "prog_rep.m"
      ll_backend__prog_rep__V_22_22 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_33_33, ll_backend__prog_rep__V_23_23, ll_backend__prog_rep__V_24_24);
    }
#line 796 "prog_rep.m"
    {
#line 796 "prog_rep.m"
      *ll_backend__prog_rep__Bytes_8 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_33_33, ll_backend__prog_rep__MainConsIdBytes_14, ll_backend__prog_rep__V_22_22);
    }
#line 790 "prog_rep.m"
  }
#line 787 "prog_rep.m"
}

#line 770 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_3(
#line 770 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 770 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 770 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 770 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 770 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4)
#line 770 "prog_rep.m"
{
#line 770 "prog_rep.m"
  {
#line 770 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 770 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv7_Bytes_8;
#line 770 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv6_STATE_VARIABLE_StringTable_17;

#line 770 "prog_rep.m"
    {
#line 770 "prog_rep.m"
      ll_backend__prog_rep__encode_case_rep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv7_Bytes_8, ((MR_Word) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv6_STATE_VARIABLE_StringTable_17);
    }
#line 770 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv7_Bytes_8));
#line 770 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv6_STATE_VARIABLE_StringTable_17));
#line 770 "prog_rep.m"
  }
#line 770 "prog_rep.m"
}

#line 655 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_2(
#line 655 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 655 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 655 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 655 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 655 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4)
#line 655 "prog_rep.m"
{
#line 655 "prog_rep.m"
  {
#line 655 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 655 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv4_Bytes_10;
#line 655 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv3_STATE_VARIABLE_StringTable_72;

#line 655 "prog_rep.m"
    {
#line 655 "prog_rep.m"
      ll_backend__prog_rep__encode_goal_rep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv4_Bytes_10, ((MR_Word) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv3_STATE_VARIABLE_StringTable_72);
    }
#line 655 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv4_Bytes_10));
#line 655 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv3_STATE_VARIABLE_StringTable_72));
#line 655 "prog_rep.m"
  }
#line 655 "prog_rep.m"
}

#line 649 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0_1(
#line 649 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 649 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 649 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2,
#line 649 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 649 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4)
#line 649 "prog_rep.m"
{
#line 649 "prog_rep.m"
  {
#line 649 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 649 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv1_Bytes_10;
#line 649 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_72;

#line 649 "prog_rep.m"
    {
#line 649 "prog_rep.m"
      ll_backend__prog_rep__encode_goal_rep_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv1_Bytes_10, ((MR_Word) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_72);
    }
#line 649 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv1_Bytes_10));
#line 649 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv0_STATE_VARIABLE_StringTable_72));
#line 649 "prog_rep.m"
  }
#line 649 "prog_rep.m"
}

#line 643 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_goal_rep_5_p_0(
#line 643 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_6,
#line 643 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 643 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_10,
#line 643 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71,
#line 643 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_72)
#line 643 "prog_rep.m"
{
#line 646 "prog_rep.m"
  {
#line 646 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 646 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
#line 646 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Detism_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 646 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ExprBytes_14;
#line 646 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__DetismByte_70;
#line 646 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_206_206;

#line 653 "prog_rep.m"
    if (((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 0))))
#line 648 "prog_rep.m"
      {
#line 648 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TypeInfo_223_223;
#line 648 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TypeCtorInfo_226_226;
#line 648 "prog_rep.m"
        MR_Word ll_backend__prog_rep__GoalReps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
#line 648 "prog_rep.m"
        MR_Word ll_backend__prog_rep__ConjBytesList_13;
#line 648 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_197_197;
#line 648 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_199_199;
#line 648 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__V_200_200;
#line 648 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_203_203;
#line 648 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_204_204;
#line 648 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_205_205;
#line 649 "prog_rep.m"
        MR_Box ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_72;

#line 649 "prog_rep.m"
        {
#line 649 "prog_rep.m"
          ll_backend__prog_rep__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 649 "prog_rep.m"
          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_197_197, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_4[1]));
#line 649 "prog_rep.m"
          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_197_197, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_1));
#line 649 "prog_rep.m"
          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_197_197, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 649 "prog_rep.m"
          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_197_197, 3) = ((MR_Box) (ll_backend__prog_rep__Info_6));
#line 649 "prog_rep.m"
        }
#line 5181 "ll_backend.prog_rep.c"
        ll_backend__prog_rep__TypeInfo_223_223 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[1];
#line 649 "prog_rep.m"
        {
#line 649 "prog_rep.m"
          mercury__list__map_foldl_5_p_0(ll_backend__prog_rep__TypeInfo_223_223, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, ll_backend__prog_rep__V_197_197, ll_backend__prog_rep__GoalReps_12, &ll_backend__prog_rep__ConjBytesList_13, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71)), &ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_72);
        }
#line 649 "prog_rep.m"
        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ((MR_Word) ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_72);
#line 5190 "ll_backend.prog_rep.c"
        ll_backend__prog_rep__TypeCtorInfo_226_226 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 651 "prog_rep.m"
        {
#line 651 "prog_rep.m"
          ll_backend__prog_rep__V_200_200 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 0);
        }
#line 651 "prog_rep.m"
        {
#line 651 "prog_rep.m"
          ll_backend__prog_rep__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_199_199, 0) = ((MR_Box) (ll_backend__prog_rep__V_200_200));
#line 651 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_199_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 651 "prog_rep.m"
        }
#line 652 "prog_rep.m"
        {
#line 652 "prog_rep.m"
          ll_backend__prog_rep__V_204_204 = ll_backend__prog_rep__encode_length_func_1_f_0(ll_backend__prog_rep__TypeInfo_223_223, ll_backend__prog_rep__GoalReps_12);
        }
#line 652 "prog_rep.m"
        {
#line 652 "prog_rep.m"
          ll_backend__prog_rep__V_205_205 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_226_226, ll_backend__prog_rep__ConjBytesList_13);
        }
#line 651 "prog_rep.m"
        {
#line 651 "prog_rep.m"
          ll_backend__prog_rep__V_203_203 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_226_226, ll_backend__prog_rep__V_204_204, ll_backend__prog_rep__V_205_205);
        }
#line 651 "prog_rep.m"
        {
#line 651 "prog_rep.m"
          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_226_226, ll_backend__prog_rep__V_199_199, ll_backend__prog_rep__V_203_203);
        }
#line 648 "prog_rep.m"
      }
#line 653 "prog_rep.m"
    else
#line 653 "prog_rep.m"
      if (((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 654 "prog_rep.m"
        {
#line 654 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeInfo_231_231;
#line 654 "prog_rep.m"
          MR_Word ll_backend__prog_rep__TypeCtorInfo_234_234;
#line 654 "prog_rep.m"
          MR_Word ll_backend__prog_rep__DisjBytesList_15;
#line 654 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_188_188;
#line 654 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_190_190;
#line 654 "prog_rep.m"
          MR_Integer ll_backend__prog_rep__V_191_191;
#line 654 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_194_194;
#line 654 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_195_195;
#line 654 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_196_196;
#line 654 "prog_rep.m"
          MR_Word ll_backend__prog_rep__GoalReps_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
#line 655 "prog_rep.m"
          MR_Box ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_72;

#line 655 "prog_rep.m"
          {
#line 655 "prog_rep.m"
            ll_backend__prog_rep__V_188_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 655 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_188_188, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_4[1]));
#line 655 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_188_188, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_2));
#line 655 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_188_188, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 655 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_188_188, 3) = ((MR_Box) (ll_backend__prog_rep__Info_6));
#line 655 "prog_rep.m"
          }
#line 5272 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeInfo_231_231 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[1];
#line 655 "prog_rep.m"
          {
#line 655 "prog_rep.m"
            mercury__list__map_foldl_5_p_0(ll_backend__prog_rep__TypeInfo_231_231, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, ll_backend__prog_rep__V_188_188, ll_backend__prog_rep__GoalReps_208, &ll_backend__prog_rep__DisjBytesList_15, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71)), &ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_72);
          }
#line 655 "prog_rep.m"
          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ((MR_Word) ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_72);
#line 5281 "ll_backend.prog_rep.c"
          ll_backend__prog_rep__TypeCtorInfo_234_234 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 657 "prog_rep.m"
          {
#line 657 "prog_rep.m"
            ll_backend__prog_rep__V_191_191 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 1);
          }
#line 657 "prog_rep.m"
          {
#line 657 "prog_rep.m"
            ll_backend__prog_rep__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_190_190, 0) = ((MR_Box) (ll_backend__prog_rep__V_191_191));
#line 657 "prog_rep.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "prog_rep.m"
          }
#line 658 "prog_rep.m"
          {
#line 658 "prog_rep.m"
            ll_backend__prog_rep__V_195_195 = ll_backend__prog_rep__encode_length_func_1_f_0(ll_backend__prog_rep__TypeInfo_231_231, ll_backend__prog_rep__GoalReps_208);
          }
#line 658 "prog_rep.m"
          {
#line 658 "prog_rep.m"
            ll_backend__prog_rep__V_196_196 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_234_234, ll_backend__prog_rep__DisjBytesList_15);
          }
#line 657 "prog_rep.m"
          {
#line 657 "prog_rep.m"
            ll_backend__prog_rep__V_194_194 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_234_234, ll_backend__prog_rep__V_195_195, ll_backend__prog_rep__V_196_196);
          }
#line 657 "prog_rep.m"
          {
#line 657 "prog_rep.m"
            ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_234_234, ll_backend__prog_rep__V_190_190, ll_backend__prog_rep__V_194_194);
          }
#line 654 "prog_rep.m"
        }
#line 653 "prog_rep.m"
      else
#line 653 "prog_rep.m"
        if (((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 769 "prog_rep.m"
          {
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeInfo_242_242;
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtorInfo_245_245;
#line 769 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__SwitchVar_63 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__CanFail_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__Cases_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__CasesBytesList_66;
#line 769 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__CanFailByte_67;
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_81_81;
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_83_83;
#line 769 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__V_84_84;
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_87_87;
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_88_88;
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_90_90;
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_91_91;
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_92_92;
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_93_93;
#line 769 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_94_94;
#line 770 "prog_rep.m"
            MR_Box ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_72;

#line 770 "prog_rep.m"
            {
#line 770 "prog_rep.m"
              ll_backend__prog_rep__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 770 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_81_81, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_4[2]));
#line 770 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_81_81, 1) = ((MR_Box) (ll_backend__prog_rep__encode_goal_rep_5_p_0_3));
#line 770 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 770 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_81_81, 3) = ((MR_Box) (ll_backend__prog_rep__Info_6));
#line 770 "prog_rep.m"
            }
#line 5377 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeInfo_242_242 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[2];
#line 770 "prog_rep.m"
            {
#line 770 "prog_rep.m"
              mercury__list__map_foldl_5_p_0(ll_backend__prog_rep__TypeInfo_242_242, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, ll_backend__prog_rep__V_81_81, ll_backend__prog_rep__Cases_65, &ll_backend__prog_rep__CasesBytesList_66, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71)), &ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_72);
            }
#line 770 "prog_rep.m"
            *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ((MR_Word) ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_72);
#line 772 "prog_rep.m"
            {
#line 772 "prog_rep.m"
              mdbcomp__program_representation__can_fail_byte_2_p_0(ll_backend__prog_rep__CanFail_64, &ll_backend__prog_rep__CanFailByte_67);
            }
#line 5391 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeCtorInfo_245_245 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 773 "prog_rep.m"
            {
#line 773 "prog_rep.m"
              ll_backend__prog_rep__V_84_84 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 2);
            }
#line 773 "prog_rep.m"
            {
#line 773 "prog_rep.m"
              ll_backend__prog_rep__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_83_83, 0) = ((MR_Box) (ll_backend__prog_rep__V_84_84));
#line 773 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "prog_rep.m"
            }
#line 774 "prog_rep.m"
            {
#line 774 "prog_rep.m"
              ll_backend__prog_rep__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_88_88, 0) = ((MR_Box) (ll_backend__prog_rep__CanFailByte_67));
#line 774 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "prog_rep.m"
            }
#line 775 "prog_rep.m"
            {
#line 775 "prog_rep.m"
              ll_backend__prog_rep__V_91_91 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__SwitchVar_63);
            }
#line 776 "prog_rep.m"
            {
#line 776 "prog_rep.m"
              ll_backend__prog_rep__V_93_93 = ll_backend__prog_rep__encode_length_func_1_f_0(ll_backend__prog_rep__TypeInfo_242_242, ll_backend__prog_rep__Cases_65);
            }
#line 776 "prog_rep.m"
            {
#line 776 "prog_rep.m"
              ll_backend__prog_rep__V_94_94 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__CasesBytesList_66);
            }
#line 775 "prog_rep.m"
            {
#line 775 "prog_rep.m"
              ll_backend__prog_rep__V_92_92 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__V_93_93, ll_backend__prog_rep__V_94_94);
            }
#line 774 "prog_rep.m"
            {
#line 774 "prog_rep.m"
              ll_backend__prog_rep__V_90_90 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__V_91_91, ll_backend__prog_rep__V_92_92);
            }
#line 773 "prog_rep.m"
            {
#line 773 "prog_rep.m"
              ll_backend__prog_rep__V_87_87 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__V_88_88, ll_backend__prog_rep__V_90_90);
            }
#line 773 "prog_rep.m"
            {
#line 773 "prog_rep.m"
              ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_245_245, ll_backend__prog_rep__V_83_83, ll_backend__prog_rep__V_87_87);
            }
#line 769 "prog_rep.m"
          }
#line 653 "prog_rep.m"
        else
#line 653 "prog_rep.m"
          if (((((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 671 "prog_rep.m"
            {
#line 671 "prog_rep.m"
              MR_Word ll_backend__prog_rep__TypeCtorInfo_237_237;
#line 671 "prog_rep.m"
              MR_String ll_backend__prog_rep__FileName_24 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 671 "prog_rep.m"
              MR_Integer ll_backend__prog_rep__Line_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 671 "prog_rep.m"
              MR_Word ll_backend__prog_rep__BoundVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 671 "prog_rep.m"
              MR_Word ll_backend__prog_rep__AtomicGoalRep_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 671 "prog_rep.m"
              MR_Word ll_backend__prog_rep__FileNameBytes_28;
#line 671 "prog_rep.m"
              MR_Word ll_backend__prog_rep__AtomicBytes_29;
#line 671 "prog_rep.m"
              MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 671 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_96_96;
#line 671 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_97_97;
#line 671 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_98_98;

#line 672 "prog_rep.m"
              {
#line 672 "prog_rep.m"
                ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__FileName_24, &ll_backend__prog_rep__FileNameBytes_28, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95);
              }
#line 5489 "ll_backend.prog_rep.c"
              ll_backend__prog_rep__TypeCtorInfo_237_237 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 673 "prog_rep.m"
              {
#line 673 "prog_rep.m"
                ll_backend__prog_rep__V_97_97 = ll_backend__prog_rep__encode_lineno_func_1_f_0(ll_backend__prog_rep__Line_25);
              }
#line 673 "prog_rep.m"
              {
#line 673 "prog_rep.m"
                ll_backend__prog_rep__V_98_98 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__BoundVars_26);
              }
#line 673 "prog_rep.m"
              {
#line 673 "prog_rep.m"
                ll_backend__prog_rep__V_96_96 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_97_97, ll_backend__prog_rep__V_98_98);
              }
#line 673 "prog_rep.m"
              {
#line 673 "prog_rep.m"
                ll_backend__prog_rep__AtomicBytes_29 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__FileNameBytes_28, ll_backend__prog_rep__V_96_96);
              }
#line 681 "prog_rep.m"
              if (((((MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 753 "prog_rep.m"
                {
#line 753 "prog_rep.m"
                  MR_String ll_backend__prog_rep__ModuleName_58 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 753 "prog_rep.m"
                  MR_String ll_backend__prog_rep__PredName_59 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 753 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__ModuleNameBytes_61;
#line 753 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__PredNameBytes_62;
#line 753 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_105;
#line 753 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__V_107_107;
#line 753 "prog_rep.m"
                  MR_Integer ll_backend__prog_rep__V_108_108;
#line 753 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__V_110_110;
#line 753 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__V_111_111;
#line 753 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__V_112_112;
#line 753 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__V_113_113;
#line 753 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__Args_215 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));

#line 754 "prog_rep.m"
                  {
#line 754 "prog_rep.m"
                    ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__ModuleName_58, &ll_backend__prog_rep__ModuleNameBytes_61, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_105);
                  }
#line 756 "prog_rep.m"
                  {
#line 756 "prog_rep.m"
                    ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__PredName_59, &ll_backend__prog_rep__PredNameBytes_62, ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_105, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                  }
#line 758 "prog_rep.m"
                  {
#line 758 "prog_rep.m"
                    ll_backend__prog_rep__V_108_108 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 17);
                  }
#line 758 "prog_rep.m"
                  {
#line 758 "prog_rep.m"
                    ll_backend__prog_rep__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "prog_rep.m"
                    MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_107_107, 0) = ((MR_Box) (ll_backend__prog_rep__V_108_108));
#line 758 "prog_rep.m"
                    MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "prog_rep.m"
                  }
#line 761 "prog_rep.m"
                  {
#line 761 "prog_rep.m"
                    ll_backend__prog_rep__V_113_113 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_215);
                  }
#line 760 "prog_rep.m"
                  {
#line 760 "prog_rep.m"
                    ll_backend__prog_rep__V_112_112 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_113_113, ll_backend__prog_rep__AtomicBytes_29);
                  }
#line 759 "prog_rep.m"
                  {
#line 759 "prog_rep.m"
                    ll_backend__prog_rep__V_111_111 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__PredNameBytes_62, ll_backend__prog_rep__V_112_112);
                  }
#line 758 "prog_rep.m"
                  {
#line 758 "prog_rep.m"
                    ll_backend__prog_rep__V_110_110 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ModuleNameBytes_61, ll_backend__prog_rep__V_111_111);
                  }
#line 758 "prog_rep.m"
                  {
#line 758 "prog_rep.m"
                    ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_107_107, ll_backend__prog_rep__V_110_110);
                  }
#line 753 "prog_rep.m"
                }
#line 681 "prog_rep.m"
              else
#line 681 "prog_rep.m"
                if (((((MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 741 "prog_rep.m"
                  {
#line 741 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_114_114;
#line 741 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__V_115_115;
#line 741 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_118_118;
#line 741 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_119_119;
#line 741 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_120_120;
#line 741 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_121_121;
#line 741 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__Target_213 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 741 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__Source_214 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));

#line 742 "prog_rep.m"
                    {
#line 742 "prog_rep.m"
                      ll_backend__prog_rep__V_115_115 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 11);
                    }
#line 742 "prog_rep.m"
                    {
#line 742 "prog_rep.m"
                      ll_backend__prog_rep__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "prog_rep.m"
                      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_114_114, 0) = ((MR_Box) (ll_backend__prog_rep__V_115_115));
#line 742 "prog_rep.m"
                      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "prog_rep.m"
                    }
#line 743 "prog_rep.m"
                    {
#line 743 "prog_rep.m"
                      ll_backend__prog_rep__V_119_119 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Target_213);
                    }
#line 744 "prog_rep.m"
                    {
#line 744 "prog_rep.m"
                      ll_backend__prog_rep__V_121_121 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Source_214);
                    }
#line 743 "prog_rep.m"
                    {
#line 743 "prog_rep.m"
                      ll_backend__prog_rep__V_120_120 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_121_121, ll_backend__prog_rep__AtomicBytes_29);
                    }
#line 742 "prog_rep.m"
                    {
#line 742 "prog_rep.m"
                      ll_backend__prog_rep__V_118_118 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_119_119, ll_backend__prog_rep__V_120_120);
                    }
#line 742 "prog_rep.m"
                    {
#line 742 "prog_rep.m"
                      ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_114_114, ll_backend__prog_rep__V_118_118);
                    }
#line 744 "prog_rep.m"
                    *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 741 "prog_rep.m"
                  }
#line 681 "prog_rep.m"
                else
#line 681 "prog_rep.m"
                  if (((((MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 733 "prog_rep.m"
                    {
#line 733 "prog_rep.m"
                      MR_String ll_backend__prog_rep__EventName_56 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 733 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__EventNameBytes_57;
#line 733 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__V_123_123;
#line 733 "prog_rep.m"
                      MR_Integer ll_backend__prog_rep__V_124_124;
#line 733 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__V_127_127;
#line 733 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__V_128_128;
#line 733 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__V_129_129;
#line 733 "prog_rep.m"
                      MR_Word ll_backend__prog_rep__Args_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));

#line 734 "prog_rep.m"
                      {
#line 734 "prog_rep.m"
                        ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__EventName_56, &ll_backend__prog_rep__EventNameBytes_57, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                      }
#line 736 "prog_rep.m"
                      {
#line 736 "prog_rep.m"
                        ll_backend__prog_rep__V_124_124 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 18);
                      }
#line 736 "prog_rep.m"
                      {
#line 736 "prog_rep.m"
                        ll_backend__prog_rep__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "prog_rep.m"
                        MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_123_123, 0) = ((MR_Box) (ll_backend__prog_rep__V_124_124));
#line 736 "prog_rep.m"
                        MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 736 "prog_rep.m"
                      }
#line 738 "prog_rep.m"
                      {
#line 738 "prog_rep.m"
                        ll_backend__prog_rep__V_129_129 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_212);
                      }
#line 737 "prog_rep.m"
                      {
#line 737 "prog_rep.m"
                        ll_backend__prog_rep__V_128_128 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_129_129, ll_backend__prog_rep__AtomicBytes_29);
                      }
#line 736 "prog_rep.m"
                      {
#line 736 "prog_rep.m"
                        ll_backend__prog_rep__V_127_127 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__EventNameBytes_57, ll_backend__prog_rep__V_128_128);
                      }
#line 736 "prog_rep.m"
                      {
#line 736 "prog_rep.m"
                        ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_123_123, ll_backend__prog_rep__V_127_127);
                      }
#line 733 "prog_rep.m"
                    }
#line 681 "prog_rep.m"
                  else
#line 681 "prog_rep.m"
                    if (((((MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 720 "prog_rep.m"
                      {
#line 720 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__PredVar_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 720 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_140_140;
#line 720 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__V_141_141;
#line 720 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_144_144;
#line 720 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_145_145;
#line 720 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_146_146;
#line 720 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_147_147;
#line 720 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__Args_209 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));

#line 721 "prog_rep.m"
                        {
#line 721 "prog_rep.m"
                          ll_backend__prog_rep__V_141_141 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 14);
                        }
#line 721 "prog_rep.m"
                        {
#line 721 "prog_rep.m"
                          ll_backend__prog_rep__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_140_140, 0) = ((MR_Box) (ll_backend__prog_rep__V_141_141));
#line 721 "prog_rep.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 721 "prog_rep.m"
                        }
#line 722 "prog_rep.m"
                        {
#line 722 "prog_rep.m"
                          ll_backend__prog_rep__V_145_145 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__PredVar_54);
                        }
#line 723 "prog_rep.m"
                        {
#line 723 "prog_rep.m"
                          ll_backend__prog_rep__V_147_147 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_209);
                        }
#line 722 "prog_rep.m"
                        {
#line 722 "prog_rep.m"
                          ll_backend__prog_rep__V_146_146 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_147_147, ll_backend__prog_rep__AtomicBytes_29);
                        }
#line 721 "prog_rep.m"
                        {
#line 721 "prog_rep.m"
                          ll_backend__prog_rep__V_144_144 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__V_146_146);
                        }
#line 721 "prog_rep.m"
                        {
#line 721 "prog_rep.m"
                          ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_140_140, ll_backend__prog_rep__V_144_144);
                        }
#line 723 "prog_rep.m"
                        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 720 "prog_rep.m"
                      }
#line 681 "prog_rep.m"
                    else
#line 681 "prog_rep.m"
                      if (((((MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 726 "prog_rep.m"
                        {
#line 726 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__MethodNum_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 726 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_130_130;
#line 726 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__V_131_131;
#line 726 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_134_134;
#line 726 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_135_135;
#line 726 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_136_136;
#line 726 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_137_137;
#line 726 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_138_138;
#line 726 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_139_139;
#line 726 "prog_rep.m"
                          MR_Integer ll_backend__prog_rep__Var_210 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 726 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Args_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));

#line 727 "prog_rep.m"
                          {
#line 727 "prog_rep.m"
                            ll_backend__prog_rep__V_131_131 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 15);
                          }
#line 727 "prog_rep.m"
                          {
#line 727 "prog_rep.m"
                            ll_backend__prog_rep__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "prog_rep.m"
                            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_130_130, 0) = ((MR_Box) (ll_backend__prog_rep__V_131_131));
#line 727 "prog_rep.m"
                            MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "prog_rep.m"
                          }
#line 728 "prog_rep.m"
                          {
#line 728 "prog_rep.m"
                            ll_backend__prog_rep__V_135_135 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var_210);
                          }
#line 729 "prog_rep.m"
                          {
#line 729 "prog_rep.m"
                            ll_backend__prog_rep__V_137_137 = ll_backend__prog_rep__encode_method_num_func_1_f_0(ll_backend__prog_rep__MethodNum_55);
                          }
#line 730 "prog_rep.m"
                          {
#line 730 "prog_rep.m"
                            ll_backend__prog_rep__V_139_139 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_211);
                          }
#line 729 "prog_rep.m"
                          {
#line 729 "prog_rep.m"
                            ll_backend__prog_rep__V_138_138 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_139_139, ll_backend__prog_rep__AtomicBytes_29);
                          }
#line 728 "prog_rep.m"
                          {
#line 728 "prog_rep.m"
                            ll_backend__prog_rep__V_136_136 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_137_137, ll_backend__prog_rep__V_138_138);
                          }
#line 727 "prog_rep.m"
                          {
#line 727 "prog_rep.m"
                            ll_backend__prog_rep__V_134_134 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_135_135, ll_backend__prog_rep__V_136_136);
                          }
#line 727 "prog_rep.m"
                          {
#line 727 "prog_rep.m"
                            ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_130_130, ll_backend__prog_rep__V_134_134);
                          }
#line 730 "prog_rep.m"
                          *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 726 "prog_rep.m"
                        }
#line 681 "prog_rep.m"
                      else
#line 681 "prog_rep.m"
                        if (((((MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 753 "prog_rep.m"
                          {
#line 753 "prog_rep.m"
                            MR_String ll_backend__prog_rep__ModuleName_250 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 753 "prog_rep.m"
                            MR_String ll_backend__prog_rep__PredName_251 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 753 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__ModuleNameBytes_253;
#line 753 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__PredNameBytes_254;
#line 753 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_255;
#line 753 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_256_256;
#line 753 "prog_rep.m"
                            MR_Integer ll_backend__prog_rep__V_257_257;
#line 753 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_259_259;
#line 753 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_260_260;
#line 753 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_261_261;
#line 753 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_262_262;
#line 753 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__Args_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));

#line 754 "prog_rep.m"
                            {
#line 754 "prog_rep.m"
                              ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__ModuleName_250, &ll_backend__prog_rep__ModuleNameBytes_253, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_255);
                            }
#line 756 "prog_rep.m"
                            {
#line 756 "prog_rep.m"
                              ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__PredName_251, &ll_backend__prog_rep__PredNameBytes_254, ll_backend__prog_rep__STATE_VARIABLE_StringTable_105_255, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                            }
#line 758 "prog_rep.m"
                            {
#line 758 "prog_rep.m"
                              ll_backend__prog_rep__V_257_257 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 16);
                            }
#line 758 "prog_rep.m"
                            {
#line 758 "prog_rep.m"
                              ll_backend__prog_rep__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "prog_rep.m"
                              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_256_256, 0) = ((MR_Box) (ll_backend__prog_rep__V_257_257));
#line 758 "prog_rep.m"
                              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_256_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "prog_rep.m"
                            }
#line 761 "prog_rep.m"
                            {
#line 761 "prog_rep.m"
                              ll_backend__prog_rep__V_262_262 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_263);
                            }
#line 760 "prog_rep.m"
                            {
#line 760 "prog_rep.m"
                              ll_backend__prog_rep__V_261_261 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_262_262, ll_backend__prog_rep__AtomicBytes_29);
                            }
#line 759 "prog_rep.m"
                            {
#line 759 "prog_rep.m"
                              ll_backend__prog_rep__V_260_260 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__PredNameBytes_254, ll_backend__prog_rep__V_261_261);
                            }
#line 758 "prog_rep.m"
                            {
#line 758 "prog_rep.m"
                              ll_backend__prog_rep__V_259_259 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ModuleNameBytes_253, ll_backend__prog_rep__V_260_260);
                            }
#line 758 "prog_rep.m"
                            {
#line 758 "prog_rep.m"
                              ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_256_256, ll_backend__prog_rep__V_259_259);
                            }
#line 753 "prog_rep.m"
                          }
#line 681 "prog_rep.m"
                        else
#line 681 "prog_rep.m"
                          if (((((MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 764 "prog_rep.m"
                            {
#line 764 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__V_99_99;
#line 764 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__V_100_100;
#line 764 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__V_103_103;
#line 764 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__V_104_104;
#line 764 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__Args_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));

#line 765 "prog_rep.m"
                              {
#line 765 "prog_rep.m"
                                ll_backend__prog_rep__V_100_100 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 13);
                              }
#line 765 "prog_rep.m"
                              {
#line 765 "prog_rep.m"
                                ll_backend__prog_rep__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "prog_rep.m"
                                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_99_99, 0) = ((MR_Box) (ll_backend__prog_rep__V_100_100));
#line 765 "prog_rep.m"
                                MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 765 "prog_rep.m"
                              }
#line 766 "prog_rep.m"
                              {
#line 766 "prog_rep.m"
                                ll_backend__prog_rep__V_104_104 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_216);
                              }
#line 765 "prog_rep.m"
                              {
#line 765 "prog_rep.m"
                                ll_backend__prog_rep__V_103_103 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_104_104, ll_backend__prog_rep__AtomicBytes_29);
                              }
#line 765 "prog_rep.m"
                              {
#line 765 "prog_rep.m"
                                ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_99_99, ll_backend__prog_rep__V_103_103);
                              }
#line 766 "prog_rep.m"
                              *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 764 "prog_rep.m"
                            }
#line 681 "prog_rep.m"
                          else
#line 681 "prog_rep.m"
                            if (((((MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 676 "prog_rep.m"
                              {
#line 676 "prog_rep.m"
                                MR_Integer ll_backend__prog_rep__Target_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 676 "prog_rep.m"
                                MR_Integer ll_backend__prog_rep__Source_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 676 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_166_166;
#line 676 "prog_rep.m"
                                MR_Integer ll_backend__prog_rep__V_167_167;
#line 676 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_170_170;
#line 676 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_171_171;
#line 676 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_172_172;
#line 676 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_173_173;

#line 677 "prog_rep.m"
                                {
#line 677 "prog_rep.m"
                                  ll_backend__prog_rep__V_167_167 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 10);
                                }
#line 677 "prog_rep.m"
                                {
#line 677 "prog_rep.m"
                                  ll_backend__prog_rep__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "prog_rep.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_166_166, 0) = ((MR_Box) (ll_backend__prog_rep__V_167_167));
#line 677 "prog_rep.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_166_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "prog_rep.m"
                                }
#line 678 "prog_rep.m"
                                {
#line 678 "prog_rep.m"
                                  ll_backend__prog_rep__V_171_171 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Target_30);
                                }
#line 679 "prog_rep.m"
                                {
#line 679 "prog_rep.m"
                                  ll_backend__prog_rep__V_173_173 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Source_31);
                                }
#line 678 "prog_rep.m"
                                {
#line 678 "prog_rep.m"
                                  ll_backend__prog_rep__V_172_172 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_173_173, ll_backend__prog_rep__AtomicBytes_29);
                                }
#line 677 "prog_rep.m"
                                {
#line 677 "prog_rep.m"
                                  ll_backend__prog_rep__V_170_170 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_171_171, ll_backend__prog_rep__V_172_172);
                                }
#line 677 "prog_rep.m"
                                {
#line 677 "prog_rep.m"
                                  ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_166_166, ll_backend__prog_rep__V_170_170);
                                }
#line 679 "prog_rep.m"
                                *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 676 "prog_rep.m"
                              }
#line 681 "prog_rep.m"
                            else
#line 681 "prog_rep.m"
                              if (((((MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 714 "prog_rep.m"
                                {
#line 714 "prog_rep.m"
                                  MR_Integer ll_backend__prog_rep__Var1_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 714 "prog_rep.m"
                                  MR_Integer ll_backend__prog_rep__Var2_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 714 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_148_148;
#line 714 "prog_rep.m"
                                  MR_Integer ll_backend__prog_rep__V_149_149;
#line 714 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_152_152;
#line 714 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_153_153;
#line 714 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_154_154;
#line 714 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_155_155;

#line 715 "prog_rep.m"
                                  {
#line 715 "prog_rep.m"
                                    ll_backend__prog_rep__V_149_149 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 12);
                                  }
#line 715 "prog_rep.m"
                                  {
#line 715 "prog_rep.m"
                                    ll_backend__prog_rep__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "prog_rep.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_148_148, 0) = ((MR_Box) (ll_backend__prog_rep__V_149_149));
#line 715 "prog_rep.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 715 "prog_rep.m"
                                  }
#line 716 "prog_rep.m"
                                  {
#line 716 "prog_rep.m"
                                    ll_backend__prog_rep__V_153_153 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var1_52);
                                  }
#line 717 "prog_rep.m"
                                  {
#line 717 "prog_rep.m"
                                    ll_backend__prog_rep__V_155_155 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var2_53);
                                  }
#line 716 "prog_rep.m"
                                  {
#line 716 "prog_rep.m"
                                    ll_backend__prog_rep__V_154_154 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_155_155, ll_backend__prog_rep__AtomicBytes_29);
                                  }
#line 715 "prog_rep.m"
                                  {
#line 715 "prog_rep.m"
                                    ll_backend__prog_rep__V_152_152 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_153_153, ll_backend__prog_rep__V_154_154);
                                  }
#line 715 "prog_rep.m"
                                  {
#line 715 "prog_rep.m"
                                    ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_148_148, ll_backend__prog_rep__V_152_152);
                                  }
#line 717 "prog_rep.m"
                                  *ll_backend__prog_rep__STATE_VARIABLE_StringTable_72 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95;
#line 714 "prog_rep.m"
                                }
#line 681 "prog_rep.m"
                              else
#line 686 "prog_rep.m"
                                {
#line 686 "prog_rep.m"
                                  MR_Integer ll_backend__prog_rep__Var_44;
#line 686 "prog_rep.m"
                                  MR_String ll_backend__prog_rep__ConsId_45;
#line 686 "prog_rep.m"
                                  MR_Integer ll_backend__prog_rep__AtomicTypeByte_47;
#line 686 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__ArgsBytes_48;
#line 686 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__ConsIdBytes_50;
#line 686 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__VarBytes_51;
#line 686 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_161_161;
#line 686 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_163_163;
#line 686 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_164_164;
#line 686 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_165_165;

#line 696 "prog_rep.m"
                                  if (((MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) == (MR_mktag((MR_Integer) 2))))
#line 706 "prog_rep.m"
                                    {
#line 706 "prog_rep.m"
                                      MR_Word ll_backend__prog_rep__MaybeArgs_248;

#line 698 "prog_rep.m"
                                      ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
#line 698 "prog_rep.m"
                                      ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 698 "prog_rep.m"
                                      ll_backend__prog_rep__MaybeArgs_248 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 700 "prog_rep.m"
                                      {
#line 700 "prog_rep.m"
                                        ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 9);
                                      }
#line 707 "prog_rep.m"
                                      {
#line 707 "prog_rep.m"
                                        ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__MaybeArgs_248);
                                      }
#line 706 "prog_rep.m"
                                    }
#line 696 "prog_rep.m"
                                  else
#line 696 "prog_rep.m"
                                    if (((MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) == (MR_mktag((MR_Integer) 0))))
#line 694 "prog_rep.m"
                                      {
#line 694 "prog_rep.m"
                                        MR_Word ll_backend__prog_rep__Args_46;

#line 689 "prog_rep.m"
                                        ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
#line 689 "prog_rep.m"
                                        ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 689 "prog_rep.m"
                                        ll_backend__prog_rep__Args_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 690 "prog_rep.m"
                                        {
#line 690 "prog_rep.m"
                                          ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 6);
                                        }
#line 695 "prog_rep.m"
                                        {
#line 695 "prog_rep.m"
                                          ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_46);
                                        }
#line 694 "prog_rep.m"
                                      }
#line 696 "prog_rep.m"
                                    else
#line 696 "prog_rep.m"
                                      if (((MR_tag((MR_Word) ll_backend__prog_rep__AtomicGoalRep_27)) == (MR_mktag((MR_Integer) 1))))
#line 694 "prog_rep.m"
                                        {
#line 694 "prog_rep.m"
                                          MR_Word ll_backend__prog_rep__Args_249;

#line 692 "prog_rep.m"
                                          ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 0)));
#line 692 "prog_rep.m"
                                          ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 692 "prog_rep.m"
                                          ll_backend__prog_rep__Args_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 693 "prog_rep.m"
                                          {
#line 693 "prog_rep.m"
                                            ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 7);
                                          }
#line 695 "prog_rep.m"
                                          {
#line 695 "prog_rep.m"
                                            ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Args_249);
                                          }
#line 694 "prog_rep.m"
                                        }
#line 696 "prog_rep.m"
                                      else
#line 706 "prog_rep.m"
                                        {
#line 706 "prog_rep.m"
                                          MR_Word ll_backend__prog_rep__MaybeArgs_49;

#line 703 "prog_rep.m"
                                          ll_backend__prog_rep__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 1)));
#line 703 "prog_rep.m"
                                          ll_backend__prog_rep__ConsId_45 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 2)));
#line 703 "prog_rep.m"
                                          ll_backend__prog_rep__MaybeArgs_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_27, (MR_Integer) 3)));
#line 705 "prog_rep.m"
                                          {
#line 705 "prog_rep.m"
                                            ll_backend__prog_rep__AtomicTypeByte_47 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 8);
                                          }
#line 707 "prog_rep.m"
                                          {
#line 707 "prog_rep.m"
                                            ll_backend__prog_rep__ArgsBytes_48 = ll_backend__prog_rep__encode_maybe_var_reps_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__MaybeArgs_49);
                                          }
#line 706 "prog_rep.m"
                                        }
#line 709 "prog_rep.m"
                                  {
#line 709 "prog_rep.m"
                                    ll_backend__prog_rep__encode_string_as_table_offset_4_p_0(ll_backend__prog_rep__ConsId_45, &ll_backend__prog_rep__ConsIdBytes_50, ll_backend__prog_rep__STATE_VARIABLE_StringTable_95_95, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                                  }
#line 710 "prog_rep.m"
                                  {
#line 710 "prog_rep.m"
                                    ll_backend__prog_rep__VarBytes_51 = ll_backend__prog_rep__encode_var_rep_func_2_f_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Var_44);
                                  }
#line 711 "prog_rep.m"
                                  {
#line 711 "prog_rep.m"
                                    ll_backend__prog_rep__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "prog_rep.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_161_161, 0) = ((MR_Box) (ll_backend__prog_rep__AtomicTypeByte_47));
#line 711 "prog_rep.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "prog_rep.m"
                                  }
#line 711 "prog_rep.m"
                                  {
#line 711 "prog_rep.m"
                                    ll_backend__prog_rep__V_165_165 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ArgsBytes_48, ll_backend__prog_rep__AtomicBytes_29);
                                  }
#line 711 "prog_rep.m"
                                  {
#line 711 "prog_rep.m"
                                    ll_backend__prog_rep__V_164_164 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__ConsIdBytes_50, ll_backend__prog_rep__V_165_165);
                                  }
#line 711 "prog_rep.m"
                                  {
#line 711 "prog_rep.m"
                                    ll_backend__prog_rep__V_163_163 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__VarBytes_51, ll_backend__prog_rep__V_164_164);
                                  }
#line 711 "prog_rep.m"
                                  {
#line 711 "prog_rep.m"
                                    ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_237_237, ll_backend__prog_rep__V_161_161, ll_backend__prog_rep__V_163_163);
                                  }
#line 686 "prog_rep.m"
                                }
#line 671 "prog_rep.m"
            }
#line 653 "prog_rep.m"
          else
#line 653 "prog_rep.m"
            if (((((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 664 "prog_rep.m"
              {
#line 664 "prog_rep.m"
                MR_Word ll_backend__prog_rep__TypeCtorInfo_236_236;
#line 664 "prog_rep.m"
                MR_Word ll_backend__prog_rep__Cond_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 664 "prog_rep.m"
                MR_Word ll_backend__prog_rep__Then_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 664 "prog_rep.m"
                MR_Word ll_backend__prog_rep__Else_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 664 "prog_rep.m"
                MR_Word ll_backend__prog_rep__CondBytes_21;
#line 664 "prog_rep.m"
                MR_Word ll_backend__prog_rep__ThenBytes_22;
#line 664 "prog_rep.m"
                MR_Word ll_backend__prog_rep__ElseBytes_23;
#line 664 "prog_rep.m"
                MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_174_174;
#line 664 "prog_rep.m"
                MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_175_175;
#line 664 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_177_177;
#line 664 "prog_rep.m"
                MR_Integer ll_backend__prog_rep__V_178_178;
#line 664 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_181_181;
#line 664 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_182_182;

#line 665 "prog_rep.m"
                {
#line 665 "prog_rep.m"
                  ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Cond_18, &ll_backend__prog_rep__CondBytes_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_174_174);
                }
#line 666 "prog_rep.m"
                {
#line 666 "prog_rep.m"
                  ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Then_19, &ll_backend__prog_rep__ThenBytes_22, ll_backend__prog_rep__STATE_VARIABLE_StringTable_174_174, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_175_175);
                }
#line 667 "prog_rep.m"
                {
#line 667 "prog_rep.m"
                  ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__Else_20, &ll_backend__prog_rep__ElseBytes_23, ll_backend__prog_rep__STATE_VARIABLE_StringTable_175_175, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                }
#line 6363 "ll_backend.prog_rep.c"
                ll_backend__prog_rep__TypeCtorInfo_236_236 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 668 "prog_rep.m"
                {
#line 668 "prog_rep.m"
                  ll_backend__prog_rep__V_178_178 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 3);
                }
#line 668 "prog_rep.m"
                {
#line 668 "prog_rep.m"
                  ll_backend__prog_rep__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "prog_rep.m"
                  MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_177_177, 0) = ((MR_Box) (ll_backend__prog_rep__V_178_178));
#line 668 "prog_rep.m"
                  MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "prog_rep.m"
                }
#line 669 "prog_rep.m"
                {
#line 669 "prog_rep.m"
                  ll_backend__prog_rep__V_182_182 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_236_236, ll_backend__prog_rep__ThenBytes_22, ll_backend__prog_rep__ElseBytes_23);
                }
#line 668 "prog_rep.m"
                {
#line 668 "prog_rep.m"
                  ll_backend__prog_rep__V_181_181 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_236_236, ll_backend__prog_rep__CondBytes_21, ll_backend__prog_rep__V_182_182);
                }
#line 668 "prog_rep.m"
                {
#line 668 "prog_rep.m"
                  ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_236_236, ll_backend__prog_rep__V_177_177, ll_backend__prog_rep__V_181_181);
                }
#line 664 "prog_rep.m"
              }
#line 653 "prog_rep.m"
            else
#line 653 "prog_rep.m"
              if (((((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 660 "prog_rep.m"
                {
#line 660 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__SubGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 660 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__SubGoalBytes_17;
#line 660 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__V_184_184;
#line 660 "prog_rep.m"
                  MR_Integer ll_backend__prog_rep__V_185_185;

#line 661 "prog_rep.m"
                  {
#line 661 "prog_rep.m"
                    ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__SubGoal_16, &ll_backend__prog_rep__SubGoalBytes_17, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                  }
#line 662 "prog_rep.m"
                  {
#line 662 "prog_rep.m"
                    ll_backend__prog_rep__V_185_185 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 4);
                  }
#line 662 "prog_rep.m"
                  {
#line 662 "prog_rep.m"
                    ll_backend__prog_rep__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "prog_rep.m"
                    MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_184_184, 0) = ((MR_Box) (ll_backend__prog_rep__V_185_185));
#line 662 "prog_rep.m"
                    MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 662 "prog_rep.m"
                  }
#line 662 "prog_rep.m"
                  {
#line 662 "prog_rep.m"
                    ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__V_184_184, ll_backend__prog_rep__SubGoalBytes_17);
                  }
#line 660 "prog_rep.m"
                }
#line 653 "prog_rep.m"
              else
#line 778 "prog_rep.m"
                {
#line 778 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__TypeCtorInfo_246_246;
#line 778 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__MaybeCut_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 778 "prog_rep.m"
                  MR_Integer ll_backend__prog_rep__MaybeCutByte_69;
#line 778 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__V_74_74;
#line 778 "prog_rep.m"
                  MR_Integer ll_backend__prog_rep__V_75_75;
#line 778 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__V_78_78;
#line 778 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__V_79_79;
#line 778 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__SubGoal_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 778 "prog_rep.m"
                  MR_Word ll_backend__prog_rep__SubGoalBytes_218;

#line 779 "prog_rep.m"
                  {
#line 779 "prog_rep.m"
                    mdbcomp__program_representation__cut_byte_2_p_0(ll_backend__prog_rep__MaybeCut_68, &ll_backend__prog_rep__MaybeCutByte_69);
                  }
#line 780 "prog_rep.m"
                  {
#line 780 "prog_rep.m"
                    ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_6, ll_backend__prog_rep__SubGoal_217, &ll_backend__prog_rep__SubGoalBytes_218, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_71, ll_backend__prog_rep__STATE_VARIABLE_StringTable_72);
                  }
#line 6472 "ll_backend.prog_rep.c"
                  ll_backend__prog_rep__TypeCtorInfo_246_246 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 781 "prog_rep.m"
                  {
#line 781 "prog_rep.m"
                    ll_backend__prog_rep__V_75_75 = mdbcomp__program_representation__goal_type_to_byte_1_f_0((MR_Integer) 5);
                  }
#line 781 "prog_rep.m"
                  {
#line 781 "prog_rep.m"
                    ll_backend__prog_rep__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "prog_rep.m"
                    MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_74_74, 0) = ((MR_Box) (ll_backend__prog_rep__V_75_75));
#line 781 "prog_rep.m"
                    MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 781 "prog_rep.m"
                  }
#line 781 "prog_rep.m"
                  {
#line 781 "prog_rep.m"
                    ll_backend__prog_rep__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "prog_rep.m"
                    MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_79_79, 0) = ((MR_Box) (ll_backend__prog_rep__MaybeCutByte_69));
#line 781 "prog_rep.m"
                    MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 781 "prog_rep.m"
                  }
#line 781 "prog_rep.m"
                  {
#line 781 "prog_rep.m"
                    ll_backend__prog_rep__V_78_78 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_246_246, ll_backend__prog_rep__V_79_79, ll_backend__prog_rep__SubGoalBytes_218);
                  }
#line 781 "prog_rep.m"
                  {
#line 781 "prog_rep.m"
                    ll_backend__prog_rep__ExprBytes_14 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_246_246, ll_backend__prog_rep__V_74_74, ll_backend__prog_rep__V_78_78);
                  }
#line 778 "prog_rep.m"
                }
#line 784 "prog_rep.m"
    {
#line 784 "prog_rep.m"
      mdbcomp__program_representation__determinism_representation_2_p_0(ll_backend__prog_rep__Detism_8, &ll_backend__prog_rep__DetismByte_70);
    }
#line 785 "prog_rep.m"
    {
#line 785 "prog_rep.m"
      ll_backend__prog_rep__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_206_206, 0) = ((MR_Box) (ll_backend__prog_rep__DetismByte_70));
#line 785 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "prog_rep.m"
    }
#line 785 "prog_rep.m"
    {
#line 785 "prog_rep.m"
      *ll_backend__prog_rep__Bytes_10 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__ExprBytes_14, ll_backend__prog_rep__V_206_206);
    }
#line 646 "prog_rep.m"
  }
#line 643 "prog_rep.m"
}

#line 632 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__detism_to_detism_rep_2_p_0(
#line 632 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
#line 632 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__2_2)
#line 632 "prog_rep.m"
{
#line 634 "prog_rep.m"
  {
#line 634 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 634 "prog_rep.m"
    if ((ll_backend__prog_rep__HeadVar__1_1 == (MR_Integer) 4))
#line 638 "prog_rep.m"
      *ll_backend__prog_rep__HeadVar__2_2 = (MR_Integer) 5;
#line 634 "prog_rep.m"
    else
#line 634 "prog_rep.m"
      if ((ll_backend__prog_rep__HeadVar__1_1 == (MR_Integer) 5))
#line 639 "prog_rep.m"
        *ll_backend__prog_rep__HeadVar__2_2 = (MR_Integer) 4;
#line 634 "prog_rep.m"
      else
#line 634 "prog_rep.m"
        if ((ll_backend__prog_rep__HeadVar__1_1 == (MR_Integer) 0))
#line 634 "prog_rep.m"
          *ll_backend__prog_rep__HeadVar__2_2 = (MR_Integer) 0;
#line 634 "prog_rep.m"
        else
#line 634 "prog_rep.m"
          if ((ll_backend__prog_rep__HeadVar__1_1 == (MR_Integer) 6))
#line 640 "prog_rep.m"
            *ll_backend__prog_rep__HeadVar__2_2 = (MR_Integer) 6;
#line 634 "prog_rep.m"
          else
#line 634 "prog_rep.m"
            if ((ll_backend__prog_rep__HeadVar__1_1 == (MR_Integer) 7))
#line 641 "prog_rep.m"
              *ll_backend__prog_rep__HeadVar__2_2 = (MR_Integer) 7;
#line 634 "prog_rep.m"
            else
#line 634 "prog_rep.m"
              if ((ll_backend__prog_rep__HeadVar__1_1 == (MR_Integer) 2))
#line 636 "prog_rep.m"
                *ll_backend__prog_rep__HeadVar__2_2 = (MR_Integer) 3;
#line 634 "prog_rep.m"
              else
#line 634 "prog_rep.m"
                if ((ll_backend__prog_rep__HeadVar__1_1 == (MR_Integer) 3))
#line 637 "prog_rep.m"
                  *ll_backend__prog_rep__HeadVar__2_2 = (MR_Integer) 2;
#line 634 "prog_rep.m"
                else
#line 635 "prog_rep.m"
                  *ll_backend__prog_rep__HeadVar__2_2 = (MR_Integer) 1;
#line 634 "prog_rep.m"
  }
#line 632 "prog_rep.m"
}

#line 620 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(
#line 620 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ConsId_3,
#line 620 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__2_2)
#line 620 "prog_rep.m"
{
#line 622 "prog_rep.m"
  {
#line 622 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 622 "prog_rep.m"
    MR_String ll_backend__prog_rep__ConsIdName_4;
#line 622 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Arity_5;
#line 622 "prog_rep.m"
    MR_Word ll_backend__prog_rep__MaybeArity_6;

#line 864 "prog_rep.m"
    if ((ll_backend__prog_rep__ConsId_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 877 "prog_rep.m"
      ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044typeclass_info_cell_constructor";
#line 864 "prog_rep.m"
    else
#line 864 "prog_rep.m"
      if (((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 2))))
#line 882 "prog_rep.m"
        ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044tabling_info_const";
#line 864 "prog_rep.m"
      else
#line 864 "prog_rep.m"
        if (((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 1))))
#line 876 "prog_rep.m"
          ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044type_info_cell_constructor";
#line 864 "prog_rep.m"
        else
#line 864 "prog_rep.m"
          if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 874 "prog_rep.m"
            ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044base_typeclass_info_const";
#line 864 "prog_rep.m"
          else
#line 864 "prog_rep.m"
            if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 869 "prog_rep.m"
              {
#line 869 "prog_rep.m"
                MR_Char ll_backend__prog_rep__Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

#line 869 "prog_rep.m"
                {
#line 869 "prog_rep.m"
                  ll_backend__prog_rep__ConsIdName_4 = mercury__string__char_to_string_1_f_0(ll_backend__prog_rep__Char_13);
                }
#line 869 "prog_rep.m"
              }
#line 864 "prog_rep.m"
            else
#line 864 "prog_rep.m"
              if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 872 "prog_rep.m"
                ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044closure_cons";
#line 864 "prog_rep.m"
              else
#line 864 "prog_rep.m"
                if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 864 "prog_rep.m"
                  {
#line 864 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));
#line 864 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 2)));
#line 864 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 3)));

#line 888 "prog_rep.m"
                    if (((MR_tag((MR_Word) ll_backend__prog_rep__SymName_7)) == (MR_mktag((MR_Integer) 1))))
#line 889 "prog_rep.m"
                      {
#line 889 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__SymName_7, (MR_Integer) 0)));

#line 889 "prog_rep.m"
                        ll_backend__prog_rep__ConsIdName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__SymName_7, (MR_Integer) 1)));
#line 889 "prog_rep.m"
                      }
#line 888 "prog_rep.m"
                    else
#line 888 "prog_rep.m"
                      ll_backend__prog_rep__ConsIdName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__SymName_7, (MR_Integer) 0)));
#line 864 "prog_rep.m"
                  }
#line 864 "prog_rep.m"
                else
#line 864 "prog_rep.m"
                  if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 884 "prog_rep.m"
                    ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044deep_profiling_proc_layout";
#line 864 "prog_rep.m"
                  else
#line 864 "prog_rep.m"
                    if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 868 "prog_rep.m"
                      {
#line 868 "prog_rep.m"
                        MR_Float ll_backend__prog_rep__Float_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

#line 868 "prog_rep.m"
                        {
#line 868 "prog_rep.m"
                          ll_backend__prog_rep__ConsIdName_4 = mercury__string__float_to_string_1_f_0(ll_backend__prog_rep__Float_12);
                        }
#line 868 "prog_rep.m"
                      }
#line 864 "prog_rep.m"
                    else
#line 864 "prog_rep.m"
                      if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 881 "prog_rep.m"
                        ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044ground_term_const";
#line 864 "prog_rep.m"
                      else
#line 864 "prog_rep.m"
                        if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 871 "prog_rep.m"
                          {
#line 871 "prog_rep.m"
                            MR_String ll_backend__prog_rep__Name_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

#line 871 "prog_rep.m"
                            {
#line 871 "prog_rep.m"
                              ll_backend__prog_rep__ConsIdName_4 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__prog_rep__Name_18);
                            }
#line 871 "prog_rep.m"
                          }
#line 864 "prog_rep.m"
                        else
#line 864 "prog_rep.m"
                          if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 867 "prog_rep.m"
                            {
#line 867 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__Int_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));

#line 867 "prog_rep.m"
                              {
#line 867 "prog_rep.m"
                                ll_backend__prog_rep__ConsIdName_4 = mercury__string__int_to_string_1_f_0(ll_backend__prog_rep__Int_11);
                              }
#line 867 "prog_rep.m"
                            }
#line 864 "prog_rep.m"
                          else
#line 864 "prog_rep.m"
                            if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 870 "prog_rep.m"
                              {
#line 870 "prog_rep.m"
                                MR_String ll_backend__prog_rep__String_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 1)));
#line 870 "prog_rep.m"
                                MR_String ll_backend__prog_rep__V_16_16;

#line 870 "prog_rep.m"
                                {
#line 870 "prog_rep.m"
                                  ll_backend__prog_rep__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__prog_rep__String_14, (MR_String) "\"");
                                }
#line 870 "prog_rep.m"
                                {
#line 870 "prog_rep.m"
                                  ll_backend__prog_rep__ConsIdName_4 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__prog_rep__V_16_16);
                                }
#line 870 "prog_rep.m"
                              }
#line 864 "prog_rep.m"
                            else
#line 864 "prog_rep.m"
                              if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 883 "prog_rep.m"
                                ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044table_io_decl";
#line 864 "prog_rep.m"
                              else
#line 864 "prog_rep.m"
                                if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 866 "prog_rep.m"
                                  ll_backend__prog_rep__ConsIdName_4 = (MR_String) "{}";
#line 864 "prog_rep.m"
                                else
#line 864 "prog_rep.m"
                                  if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 873 "prog_rep.m"
                                    ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044type_ctor_info_const";
#line 864 "prog_rep.m"
                                  else
#line 864 "prog_rep.m"
                                    if (((((MR_tag((MR_Word) ll_backend__prog_rep__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 879 "prog_rep.m"
                                      ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044type_info_const";
#line 864 "prog_rep.m"
                                    else
#line 880 "prog_rep.m"
                                      ll_backend__prog_rep__ConsIdName_4 = (MR_String) "\044typeclass_info_const";
#line 624 "prog_rep.m"
    {
#line 624 "prog_rep.m"
      ll_backend__prog_rep__MaybeArity_6 = parse_tree__prog_util__cons_id_maybe_arity_1_f_0(ll_backend__prog_rep__ConsId_3);
    }
#line 627 "prog_rep.m"
    if ((ll_backend__prog_rep__MaybeArity_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "prog_rep.m"
      ll_backend__prog_rep__Arity_5 = (MR_Integer) 0;
#line 627 "prog_rep.m"
    else
#line 626 "prog_rep.m"
      ll_backend__prog_rep__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__MaybeArity_6, (MR_Integer) 0)));
#line 622 "prog_rep.m"
    {
#line 622 "prog_rep.m"
      MR_Word base;
#line 622 "prog_rep.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 622 "prog_rep.m"
      *ll_backend__prog_rep__HeadVar__2_2 = base;
#line 622 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep__ConsIdName_4));
#line 622 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep__Arity_5));
#line 622 "prog_rep.m"
    }
#line 622 "prog_rep.m"
  }
#line 620 "prog_rep.m"
}

#line 618 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0_1(
#line 618 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 618 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 618 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2)
#line 618 "prog_rep.m"
{
#line 618 "prog_rep.m"
  {
#line 618 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 618 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_HeadVar__2_2;

#line 618 "prog_rep.m"
    {
#line 618 "prog_rep.m"
      ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv0_HeadVar__2_2);
    }
#line 618 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_HeadVar__2_2));
#line 618 "prog_rep.m"
  }
#line 618 "prog_rep.m"
}

#line 611 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__case_to_case_rep_4_p_0(
#line 611 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_5,
#line 611 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap_6,
#line 611 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 611 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4)
#line 611 "prog_rep.m"
{
#line 615 "prog_rep.m"
  {
#line 615 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 615 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FirstConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
#line 615 "prog_rep.m"
    MR_Word ll_backend__prog_rep__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
#line 615 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 2)));
#line 615 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FirstConsIdRep_10;
#line 615 "prog_rep.m"
    MR_Word ll_backend__prog_rep__OtherConsIdsRep_11;
#line 615 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalRep_12;

#line 616 "prog_rep.m"
    {
#line 616 "prog_rep.m"
      ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap_6, ll_backend__prog_rep__Goal_9, &ll_backend__prog_rep__GoalRep_12);
    }
#line 617 "prog_rep.m"
    {
#line 617 "prog_rep.m"
      ll_backend__prog_rep__cons_id_to_cons_id_rep_2_p_0(ll_backend__prog_rep__FirstConsId_7, &ll_backend__prog_rep__FirstConsIdRep_10);
    }
#line 618 "prog_rep.m"
    {
#line 618 "prog_rep.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cons_id_arity_rep_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[7], ll_backend__prog_rep__OtherConsIds_8, &ll_backend__prog_rep__OtherConsIdsRep_11);
    }
#line 615 "prog_rep.m"
    {
#line 615 "prog_rep.m"
      MR_Word base;
#line 615 "prog_rep.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 615 "prog_rep.m"
      *ll_backend__prog_rep__HeadVar__4_4 = base;
#line 615 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep__FirstConsIdRep_10));
#line 615 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep__OtherConsIdsRep_11));
#line 615 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__prog_rep__GoalRep_12));
#line 615 "prog_rep.m"
    }
#line 615 "prog_rep.m"
  }
#line 611 "prog_rep.m"
}

#line 600 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__conj_to_conj_rep_4_p_0(
#line 600 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_1,
#line 600 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap0_2,
#line 600 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 600 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4)
#line 600 "prog_rep.m"
{
#line 603 "prog_rep.m"
  {
#line 603 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 603 "prog_rep.m"
    if ((ll_backend__prog_rep__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "prog_rep.m"
      *ll_backend__prog_rep__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 603 "prog_rep.m"
    else
#line 604 "prog_rep.m"
      {
#line 604 "prog_rep.m"
        MR_Word ll_backend__prog_rep__Conj_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
#line 604 "prog_rep.m"
        MR_Word ll_backend__prog_rep__Conjs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
#line 604 "prog_rep.m"
        MR_Word ll_backend__prog_rep__ConjRep_11;
#line 604 "prog_rep.m"
        MR_Word ll_backend__prog_rep__ConjReps_12;
#line 604 "prog_rep.m"
        MR_Word ll_backend__prog_rep__GoalInfo_13;
#line 604 "prog_rep.m"
        MR_Word ll_backend__prog_rep__InstmapDelta_14;
#line 604 "prog_rep.m"
        MR_Word ll_backend__prog_rep__Instmap1_15;
#line 606 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_16_16;

#line 605 "prog_rep.m"
        {
#line 605 "prog_rep.m"
          ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_1, ll_backend__prog_rep__Instmap0_2, ll_backend__prog_rep__Conj_9, &ll_backend__prog_rep__ConjRep_11);
        }
#line 606 "prog_rep.m"
        ll_backend__prog_rep__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Conj_9, (MR_Integer) 0)));
#line 606 "prog_rep.m"
        ll_backend__prog_rep__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Conj_9, (MR_Integer) 1)));
#line 607 "prog_rep.m"
        {
#line 607 "prog_rep.m"
          ll_backend__prog_rep__InstmapDelta_14 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__prog_rep__GoalInfo_13);
        }
#line 608 "prog_rep.m"
        {
#line 608 "prog_rep.m"
          hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__prog_rep__Instmap0_2, ll_backend__prog_rep__InstmapDelta_14, &ll_backend__prog_rep__Instmap1_15);
        }
#line 609 "prog_rep.m"
        {
#line 609 "prog_rep.m"
          ll_backend__prog_rep__conj_to_conj_rep_4_p_0(ll_backend__prog_rep__Info_1, ll_backend__prog_rep__Instmap1_15, ll_backend__prog_rep__Conjs_10, &ll_backend__prog_rep__ConjReps_12);
        }
#line 604 "prog_rep.m"
        {
#line 604 "prog_rep.m"
          MR_Word base;
#line 604 "prog_rep.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "prog_rep.m"
          *ll_backend__prog_rep__HeadVar__4_4 = base;
#line 604 "prog_rep.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep__ConjRep_11));
#line 604 "prog_rep.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__prog_rep__ConjReps_12));
#line 604 "prog_rep.m"
        }
#line 604 "prog_rep.m"
      }
#line 603 "prog_rep.m"
  }
#line 600 "prog_rep.m"
}

#line 376 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarNumRep_13,
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarTypes_14,
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Var_15,
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__4_4,
#line 376 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_26,
#line 376 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_27,
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_28,
#line 376 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_29,
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_30,
#line 376 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_31,
#line 376 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_32,
#line 376 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_33)
#line 376 "prog_rep.m"
{
#line 383 "prog_rep.m"
  {
#line 383 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 383 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_43_43;
#line 383 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__VarNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__4_4, (MR_Integer) 0)));
#line 383 "prog_rep.m"
    MR_String ll_backend__prog_rep__VarName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__4_4, (MR_Integer) 1)));
#line 383 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Type_22;
#line 383 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarBytes_23;
#line 383 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarNameBytes_24;
#line 383 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeBytes_25;
#line 383 "prog_rep.m"
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_37_37;
#line 383 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_41_41;
#line 383 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_42_42;
#line 383 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Index_49;
#line 383 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Index_59;

#line 384 "prog_rep.m"
    *ll_backend__prog_rep__STATE_VARIABLE_NumVars_27 = (ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_26 + (MR_Integer) 1);
#line 385 "prog_rep.m"
    {
#line 385 "prog_rep.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__prog_rep__VarTypes_14, ll_backend__prog_rep__Var_15, &ll_backend__prog_rep__Type_22);
    }
#line 389 "prog_rep.m"
    if ((ll_backend__prog_rep__VarNumRep_13 == (MR_Integer) 0))
#line 387 "prog_rep.m"
      {
#line 388 "prog_rep.m"
        {
#line 388 "prog_rep.m"
          ll_backend__prog_rep__VarBytes_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_23, 0) = ((MR_Box) (ll_backend__prog_rep__VarNum_16));
#line 388 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__VarBytes_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "prog_rep.m"
        }
#line 387 "prog_rep.m"
      }
#line 389 "prog_rep.m"
    else
#line 389 "prog_rep.m"
      if ((ll_backend__prog_rep__VarNumRep_13 == (MR_Integer) 1))
#line 391 "prog_rep.m"
        {
#line 391 "prog_rep.m"
          mdbcomp__rtti_access__encode_short_det_2_p_0(ll_backend__prog_rep__VarNum_16, &ll_backend__prog_rep__VarBytes_23);
        }
#line 389 "prog_rep.m"
      else
#line 394 "prog_rep.m"
        {
#line 394 "prog_rep.m"
          mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__VarNum_16, &ll_backend__prog_rep__VarBytes_23);
        }
#line 908 "prog_rep.m"
    {
#line 908 "prog_rep.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__VarName_17, &ll_backend__prog_rep__Index_49, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_30, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_37_37);
    }
#line 909 "prog_rep.m"
    {
#line 909 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_49, &ll_backend__prog_rep__VarNameBytes_24);
    }
#line 916 "prog_rep.m"
    {
#line 916 "prog_rep.m"
      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(ll_backend__prog_rep__Type_22, &ll_backend__prog_rep__Index_59, ll_backend__prog_rep__STATE_VARIABLE_StringTable_37_37, ll_backend__prog_rep__STATE_VARIABLE_StringTable_31, ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_32, ll_backend__prog_rep__STATE_VARIABLE_TypeTable_33);
    }
#line 917 "prog_rep.m"
    {
#line 917 "prog_rep.m"
      mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__Index_59, &ll_backend__prog_rep__TypeBytes_25);
    }
#line 7137 "ll_backend.prog_rep.c"
    ll_backend__prog_rep__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 398 "prog_rep.m"
    {
#line 398 "prog_rep.m"
      ll_backend__prog_rep__V_42_42 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_43_43, ll_backend__prog_rep__TypeBytes_25, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_28);
    }
#line 398 "prog_rep.m"
    {
#line 398 "prog_rep.m"
      ll_backend__prog_rep__V_41_41 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_43_43, ll_backend__prog_rep__VarNameBytes_24, ll_backend__prog_rep__V_42_42);
    }
#line 398 "prog_rep.m"
    {
#line 398 "prog_rep.m"
      *ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_29 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_43_43, ll_backend__prog_rep__VarBytes_23, ll_backend__prog_rep__V_41_41);
    }
#line 383 "prog_rep.m"
  }
#line 376 "prog_rep.m"
}

#line 361 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_4_byte_8_p_0(
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep___ProgVar_9,
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 361 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 361 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 361 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 361 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 361 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
#line 361 "prog_rep.m"
{
#line 366 "prog_rep.m"
  {
#line 366 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 366 "prog_rep.m"
    {
#line 366 "prog_rep.m"
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_52_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(ll_backend__prog_rep__HeadVar__2_2, ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17, ll_backend__prog_rep__STATE_VARIABLE_NumVars_18, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
#line 366 "prog_rep.m"
      return;
    }
#line 366 "prog_rep.m"
  }
#line 361 "prog_rep.m"
}

#line 346 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_2_byte_8_p_0(
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep___ProgVar_9,
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 346 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 346 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 346 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 346 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 346 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
#line 346 "prog_rep.m"
{
#line 351 "prog_rep.m"
  {
#line 351 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 351 "prog_rep.m"
    {
#line 351 "prog_rep.m"
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_50_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(ll_backend__prog_rep__HeadVar__2_2, ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17, ll_backend__prog_rep__STATE_VARIABLE_NumVars_18, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
#line 351 "prog_rep.m"
      return;
    }
#line 351 "prog_rep.m"
  }
#line 346 "prog_rep.m"
}

#line 331 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_var_name_table_entry_1_byte_8_p_0(
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep___ProgVar_9,
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 331 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17,
#line 331 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__STATE_VARIABLE_NumVars_18,
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19,
#line 331 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20,
#line 331 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21,
#line 331 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_22)
#line 331 "prog_rep.m"
{
#line 336 "prog_rep.m"
  {
#line 336 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 336 "prog_rep.m"
    {
#line 336 "prog_rep.m"
      ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_110_99_111_100_101_95_118_97_114_95_110_97_109_101_95_116_97_98_108_101_95_101_110_116_114_121_95_49_95_98_121_116_101_95_95_91_49_93_95_48_8_p_0(ll_backend__prog_rep__HeadVar__2_2, ll_backend__prog_rep__STATE_VARIABLE_NumVars_0_17, ll_backend__prog_rep__STATE_VARIABLE_NumVars_18, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_0_19, ll_backend__prog_rep__STATE_VARIABLE_VarNameTableBytes_20, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_21, ll_backend__prog_rep__STATE_VARIABLE_StringTable_22);
#line 336 "prog_rep.m"
      return;
    }
#line 336 "prog_rep.m"
  }
#line 331 "prog_rep.m"
}

#line 316 "prog_rep.m"
static MR_Integer MR_CALL 
ll_backend__prog_rep__max_var_num_3_f_0(
#line 316 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_5,
#line 316 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 316 "prog_rep.m"
  MR_Integer ll_backend__prog_rep__VarNum2_8)
#line 316 "prog_rep.m"
{
#line 318 "prog_rep.m"
  {
#line 318 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 318 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Max_9;

#line 318 "prog_rep.m"
    {
#line 318 "prog_rep.m"
      return ll_backend__prog_rep__Max_9 = ll_backend__prog_rep__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_120_95_118_97_114_95_110_117_109_95_95_91_49_93_95_48_3_f_0(ll_backend__prog_rep__HeadVar__2_2, ll_backend__prog_rep__VarNum2_8);
    }
#line 318 "prog_rep.m"
    return ll_backend__prog_rep__Max_9;
#line 318 "prog_rep.m"
  }
#line 316 "prog_rep.m"
}

#line 303 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_6(
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 303 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 303 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 303 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8,
#line 303 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_9,
#line 303 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_10)
#line 303 "prog_rep.m"
{
#line 303 "prog_rep.m"
  {
#line 303 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 303 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv23_STATE_VARIABLE_NumVars_27;
#line 303 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv22_STATE_VARIABLE_VarNameTableBytes_29;
#line 303 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv21_STATE_VARIABLE_StringTable_31;
#line 303 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv20_STATE_VARIABLE_TypeTable_33;

#line 303 "prog_rep.m"
    {
#line 303 "prog_rep.m"
      ll_backend__prog_rep__encode_var_name_type_table_entry_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv23_STATE_VARIABLE_NumVars_27, ((MR_Word) ll_backend__prog_rep__wrapper_arg_5), &ll_backend__prog_rep__conv22_STATE_VARIABLE_VarNameTableBytes_29, ((MR_Word) ll_backend__prog_rep__wrapper_arg_7), &ll_backend__prog_rep__conv21_STATE_VARIABLE_StringTable_31, ((MR_Word) ll_backend__prog_rep__wrapper_arg_9), &ll_backend__prog_rep__conv20_STATE_VARIABLE_TypeTable_33);
    }
#line 303 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv23_STATE_VARIABLE_NumVars_27));
#line 303 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep__conv22_STATE_VARIABLE_VarNameTableBytes_29));
#line 303 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_8 = ((MR_Box) (ll_backend__prog_rep__conv21_STATE_VARIABLE_StringTable_31));
#line 303 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_10 = ((MR_Box) (ll_backend__prog_rep__conv20_STATE_VARIABLE_TypeTable_33));
#line 303 "prog_rep.m"
  }
#line 303 "prog_rep.m"
}

#line 298 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_5(
#line 298 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 298 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 298 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 298 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 298 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 298 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 298 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 298 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 298 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8)
#line 298 "prog_rep.m"
{
#line 298 "prog_rep.m"
  {
#line 298 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 298 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv16_STATE_VARIABLE_NumVars_18;
#line 298 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv15_STATE_VARIABLE_VarNameTableBytes_20;
#line 298 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv14_STATE_VARIABLE_StringTable_22;

#line 298 "prog_rep.m"
    {
#line 298 "prog_rep.m"
      ll_backend__prog_rep__encode_var_name_table_entry_4_byte_8_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv16_STATE_VARIABLE_NumVars_18, ((MR_Word) ll_backend__prog_rep__wrapper_arg_5), &ll_backend__prog_rep__conv15_STATE_VARIABLE_VarNameTableBytes_20, ((MR_Word) ll_backend__prog_rep__wrapper_arg_7), &ll_backend__prog_rep__conv14_STATE_VARIABLE_StringTable_22);
    }
#line 298 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv16_STATE_VARIABLE_NumVars_18));
#line 298 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep__conv15_STATE_VARIABLE_VarNameTableBytes_20));
#line 298 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_8 = ((MR_Box) (ll_backend__prog_rep__conv14_STATE_VARIABLE_StringTable_22));
#line 298 "prog_rep.m"
  }
#line 298 "prog_rep.m"
}

#line 294 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_4(
#line 294 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 294 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 294 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 294 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 294 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 294 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 294 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 294 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 294 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8)
#line 294 "prog_rep.m"
{
#line 294 "prog_rep.m"
  {
#line 294 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 294 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv10_STATE_VARIABLE_NumVars_18;
#line 294 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv9_STATE_VARIABLE_VarNameTableBytes_20;
#line 294 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_22;

#line 294 "prog_rep.m"
    {
#line 294 "prog_rep.m"
      ll_backend__prog_rep__encode_var_name_table_entry_2_byte_8_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv10_STATE_VARIABLE_NumVars_18, ((MR_Word) ll_backend__prog_rep__wrapper_arg_5), &ll_backend__prog_rep__conv9_STATE_VARIABLE_VarNameTableBytes_20, ((MR_Word) ll_backend__prog_rep__wrapper_arg_7), &ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_22);
    }
#line 294 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv10_STATE_VARIABLE_NumVars_18));
#line 294 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep__conv9_STATE_VARIABLE_VarNameTableBytes_20));
#line 294 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_8 = ((MR_Box) (ll_backend__prog_rep__conv8_STATE_VARIABLE_StringTable_22));
#line 294 "prog_rep.m"
  }
#line 294 "prog_rep.m"
}

#line 290 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_3(
#line 290 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 290 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 290 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 290 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3,
#line 290 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_4,
#line 290 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_5,
#line 290 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_6,
#line 290 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_7,
#line 290 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_8)
#line 290 "prog_rep.m"
{
#line 290 "prog_rep.m"
  {
#line 290 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 290 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv4_STATE_VARIABLE_NumVars_18;
#line 290 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv3_STATE_VARIABLE_VarNameTableBytes_20;
#line 290 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_22;

#line 290 "prog_rep.m"
    {
#line 290 "prog_rep.m"
      ll_backend__prog_rep__encode_var_name_table_entry_1_byte_8_p_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3), &ll_backend__prog_rep__conv4_STATE_VARIABLE_NumVars_18, ((MR_Word) ll_backend__prog_rep__wrapper_arg_5), &ll_backend__prog_rep__conv3_STATE_VARIABLE_VarNameTableBytes_20, ((MR_Word) ll_backend__prog_rep__wrapper_arg_7), &ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_22);
    }
#line 290 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv4_STATE_VARIABLE_NumVars_18));
#line 290 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep__conv3_STATE_VARIABLE_VarNameTableBytes_20));
#line 290 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_8 = ((MR_Box) (ll_backend__prog_rep__conv2_STATE_VARIABLE_StringTable_22));
#line 290 "prog_rep.m"
  }
#line 290 "prog_rep.m"
}

#line 311 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_2(
#line 311 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg)
#line 311 "prog_rep.m"
{
#line 311 "prog_rep.m"
  {
#line 311 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 311 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;

#line 311 "prog_rep.m"
    {
#line 311 "prog_rep.m"
      return ll_backend__prog_rep__succeeded = ll_backend__prog_rep__IntroducedFrom__pred__represent_var_table_as_bytecode__311__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))));
    }
#line 311 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 311 "prog_rep.m"
  }
#line 311 "prog_rep.m"
}

#line 272 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_1(
#line 272 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 272 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 272 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_2,
#line 272 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_3)
#line 272 "prog_rep.m"
{
#line 272 "prog_rep.m"
  {
#line 272 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_4;
#line 272 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 272 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv0_Max_9;

#line 272 "prog_rep.m"
    {
#line 272 "prog_rep.m"
      ll_backend__prog_rep__conv0_Max_9 = ll_backend__prog_rep__max_var_num_3_f_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep__wrapper_arg_2), ((MR_Integer) ll_backend__prog_rep__wrapper_arg_3));
    }
#line 272 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep__conv0_Max_9));
#line 272 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_4;
#line 272 "prog_rep.m"
  }
#line 272 "prog_rep.m"
}

#line 264 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0(
#line 264 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarNameTable_11,
#line 264 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarTypes_12,
#line 264 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarTypes_13,
#line 264 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarNumMap_14,
#line 264 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__VarNumRep_15,
#line 264 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__Bytes_16,
#line 264 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24,
#line 264 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_25,
#line 264 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26,
#line 264 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27)
#line 264 "prog_rep.m"
{
#line 271 "prog_rep.m"
  {
#line 271 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 271 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeInfo_58_58 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[3];
#line 271 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeInfo_59_59 = (MR_Word) &ll_backend__prog_rep_scalar_common_2[0];
#line 271 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 271 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__MaxVarNum_19;
#line 271 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__FlagByte_20;
#line 272 "prog_rep.m"
    MR_Box ll_backend__prog_rep__conv1_MaxVarNum_19;

#line 272 "prog_rep.m"
    {
#line 272 "prog_rep.m"
      ll_backend__prog_rep__conv1_MaxVarNum_19 = mercury__map__foldl_3_f_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_2[3], ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)));
    }
#line 272 "prog_rep.m"
    ll_backend__prog_rep__MaxVarNum_19 = ((MR_Integer) ll_backend__prog_rep__conv1_MaxVarNum_19);
#line 273 "prog_rep.m"
    ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__MaxVarNum_19 <= (MR_Integer) 127);
#line 275 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 274 "prog_rep.m"
      *ll_backend__prog_rep__VarNumRep_15 = (MR_Integer) 0;
#line 275 "prog_rep.m"
    else
#line 277 "prog_rep.m"
      {
#line 275 "prog_rep.m"
        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__MaxVarNum_19 <= (MR_Integer) 32767);
#line 277 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 276 "prog_rep.m"
          *ll_backend__prog_rep__VarNumRep_15 = (MR_Integer) 1;
#line 277 "prog_rep.m"
        else
#line 278 "prog_rep.m"
          *ll_backend__prog_rep__VarNumRep_15 = (MR_Integer) 2;
#line 277 "prog_rep.m"
      }
#line 280 "prog_rep.m"
    {
#line 280 "prog_rep.m"
      mdbcomp__program_representation__var_flag_byte_4_p_0(*ll_backend__prog_rep__VarNumRep_15, ll_backend__prog_rep__IncludeVarNameTable_11, ll_backend__prog_rep__IncludeVarTypes_12, &ll_backend__prog_rep__FlagByte_20);
    }
#line 309 "prog_rep.m"
    if ((ll_backend__prog_rep__IncludeVarNameTable_11 == (MR_Integer) 0))
#line 310 "prog_rep.m"
      {
#line 310 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_32_32;

#line 311 "prog_rep.m"
        {
#line 311 "prog_rep.m"
          ll_backend__prog_rep__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 311 "prog_rep.m"
          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[3]));
#line 311 "prog_rep.m"
          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 1) = ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_2));
#line 311 "prog_rep.m"
          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 311 "prog_rep.m"
          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 3) = ((MR_Box) (ll_backend__prog_rep__IncludeVarTypes_12));
#line 311 "prog_rep.m"
          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_32_32, 4) = ((MR_Box) ((MR_Integer) 0));
#line 311 "prog_rep.m"
        }
#line 311 "prog_rep.m"
        {
#line 311 "prog_rep.m"
          mercury__require__expect_4_p_0(ll_backend__prog_rep__V_32_32, (MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.represent_var_table_as_bytecode\'/10", (MR_String) "IncludeVarTypes but not IncludeVarNameTable");
        }
#line 313 "prog_rep.m"
        {
#line 313 "prog_rep.m"
          MR_Word base;
#line 313 "prog_rep.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "prog_rep.m"
          *ll_backend__prog_rep__Bytes_16 = base;
#line 313 "prog_rep.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep__FlagByte_20));
#line 313 "prog_rep.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "prog_rep.m"
        }
#line 313 "prog_rep.m"
        *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24;
#line 313 "prog_rep.m"
        *ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27 = ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26;
#line 310 "prog_rep.m"
      }
#line 309 "prog_rep.m"
    else
#line 282 "prog_rep.m"
      {
#line 282 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__NumVars_21;
#line 282 "prog_rep.m"
        MR_Word ll_backend__prog_rep__VarNameTableEntriesBytes_22;
#line 282 "prog_rep.m"
        MR_Word ll_backend__prog_rep__NumVarsBytes_23;
#line 282 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_55_55;
#line 282 "prog_rep.m"
        MR_Word ll_backend__prog_rep__V_57_57;

#line 301 "prog_rep.m"
        if ((ll_backend__prog_rep__IncludeVarTypes_12 == (MR_Integer) 0))
#line 284 "prog_rep.m"
          {
#line 292 "prog_rep.m"
            if ((*ll_backend__prog_rep__VarNumRep_15 == (MR_Integer) 0))
#line 289 "prog_rep.m"
              {
#line 290 "prog_rep.m"
                MR_Box ll_backend__prog_rep__conv7_NumVars_21;
#line 290 "prog_rep.m"
                MR_Box ll_backend__prog_rep__conv6_VarNameTableEntriesBytes_22;
#line 290 "prog_rep.m"
                MR_Box ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_25;

#line 290 "prog_rep.m"
                {
#line 290 "prog_rep.m"
                  mercury__map__foldl3_8_p_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[4], ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__prog_rep__conv7_NumVars_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__prog_rep__conv6_VarNameTableEntriesBytes_22, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24)), &ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_25);
                }
#line 290 "prog_rep.m"
                ll_backend__prog_rep__NumVars_21 = ((MR_Integer) ll_backend__prog_rep__conv7_NumVars_21);
#line 290 "prog_rep.m"
                ll_backend__prog_rep__VarNameTableEntriesBytes_22 = ((MR_Word) ll_backend__prog_rep__conv6_VarNameTableEntriesBytes_22);
#line 290 "prog_rep.m"
                *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ((MR_Word) ll_backend__prog_rep__conv5_STATE_VARIABLE_StringTable_25);
#line 289 "prog_rep.m"
              }
#line 292 "prog_rep.m"
            else
#line 292 "prog_rep.m"
              if ((*ll_backend__prog_rep__VarNumRep_15 == (MR_Integer) 1))
#line 293 "prog_rep.m"
                {
#line 294 "prog_rep.m"
                  MR_Box ll_backend__prog_rep__conv13_NumVars_21;
#line 294 "prog_rep.m"
                  MR_Box ll_backend__prog_rep__conv12_VarNameTableEntriesBytes_22;
#line 294 "prog_rep.m"
                  MR_Box ll_backend__prog_rep__conv11_STATE_VARIABLE_StringTable_25;

#line 294 "prog_rep.m"
                  {
#line 294 "prog_rep.m"
                    mercury__map__foldl3_8_p_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[5], ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__prog_rep__conv13_NumVars_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__prog_rep__conv12_VarNameTableEntriesBytes_22, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24)), &ll_backend__prog_rep__conv11_STATE_VARIABLE_StringTable_25);
                  }
#line 294 "prog_rep.m"
                  ll_backend__prog_rep__NumVars_21 = ((MR_Integer) ll_backend__prog_rep__conv13_NumVars_21);
#line 294 "prog_rep.m"
                  ll_backend__prog_rep__VarNameTableEntriesBytes_22 = ((MR_Word) ll_backend__prog_rep__conv12_VarNameTableEntriesBytes_22);
#line 294 "prog_rep.m"
                  *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ((MR_Word) ll_backend__prog_rep__conv11_STATE_VARIABLE_StringTable_25);
#line 293 "prog_rep.m"
                }
#line 292 "prog_rep.m"
              else
#line 297 "prog_rep.m"
                {
#line 298 "prog_rep.m"
                  MR_Box ll_backend__prog_rep__conv19_NumVars_21;
#line 298 "prog_rep.m"
                  MR_Box ll_backend__prog_rep__conv18_VarNameTableEntriesBytes_22;
#line 298 "prog_rep.m"
                  MR_Box ll_backend__prog_rep__conv17_STATE_VARIABLE_StringTable_25;

#line 298 "prog_rep.m"
                  {
#line 298 "prog_rep.m"
                    mercury__map__foldl3_8_p_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_scalar_common_2[6], ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__prog_rep__conv19_NumVars_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__prog_rep__conv18_VarNameTableEntriesBytes_22, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24)), &ll_backend__prog_rep__conv17_STATE_VARIABLE_StringTable_25);
                  }
#line 298 "prog_rep.m"
                  ll_backend__prog_rep__NumVars_21 = ((MR_Integer) ll_backend__prog_rep__conv19_NumVars_21);
#line 298 "prog_rep.m"
                  ll_backend__prog_rep__VarNameTableEntriesBytes_22 = ((MR_Word) ll_backend__prog_rep__conv18_VarNameTableEntriesBytes_22);
#line 298 "prog_rep.m"
                  *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ((MR_Word) ll_backend__prog_rep__conv17_STATE_VARIABLE_StringTable_25);
#line 297 "prog_rep.m"
                }
#line 298 "prog_rep.m"
            *ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27 = ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26;
#line 284 "prog_rep.m"
          }
#line 301 "prog_rep.m"
        else
#line 302 "prog_rep.m"
          {
#line 302 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_38_38;
#line 303 "prog_rep.m"
            MR_Box ll_backend__prog_rep__conv27_NumVars_21;
#line 303 "prog_rep.m"
            MR_Box ll_backend__prog_rep__conv26_VarNameTableEntriesBytes_22;
#line 303 "prog_rep.m"
            MR_Box ll_backend__prog_rep__conv25_STATE_VARIABLE_StringTable_25;
#line 303 "prog_rep.m"
            MR_Box ll_backend__prog_rep__conv24_STATE_VARIABLE_TypeTable_27;

#line 303 "prog_rep.m"
            {
#line 303 "prog_rep.m"
              ll_backend__prog_rep__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 303 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_8[0]));
#line 303 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 1) = ((MR_Box) (ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0_6));
#line 303 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 303 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 3) = ((MR_Box) (*ll_backend__prog_rep__VarNumRep_15));
#line 303 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 4) = ((MR_Box) (ll_backend__prog_rep__VarTypes_13));
#line 303 "prog_rep.m"
            }
#line 303 "prog_rep.m"
            {
#line 303 "prog_rep.m"
              mercury__map__foldl4_10_p_0(ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__TypeInfo_59_59, ll_backend__prog_rep__TypeCtorInfo_60_60, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, ll_backend__prog_rep__V_38_38, ll_backend__prog_rep__VarNumMap_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__prog_rep__conv27_NumVars_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__prog_rep__conv26_VarNameTableEntriesBytes_22, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_24)), &ll_backend__prog_rep__conv25_STATE_VARIABLE_StringTable_25, ((MR_Box) (ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_26)), &ll_backend__prog_rep__conv24_STATE_VARIABLE_TypeTable_27);
            }
#line 303 "prog_rep.m"
            ll_backend__prog_rep__NumVars_21 = ((MR_Integer) ll_backend__prog_rep__conv27_NumVars_21);
#line 303 "prog_rep.m"
            ll_backend__prog_rep__VarNameTableEntriesBytes_22 = ((MR_Word) ll_backend__prog_rep__conv26_VarNameTableEntriesBytes_22);
#line 303 "prog_rep.m"
            *ll_backend__prog_rep__STATE_VARIABLE_StringTable_25 = ((MR_Word) ll_backend__prog_rep__conv25_STATE_VARIABLE_StringTable_25);
#line 303 "prog_rep.m"
            *ll_backend__prog_rep__STATE_VARIABLE_TypeTable_27 = ((MR_Word) ll_backend__prog_rep__conv24_STATE_VARIABLE_TypeTable_27);
#line 302 "prog_rep.m"
          }
#line 307 "prog_rep.m"
        {
#line 307 "prog_rep.m"
          mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__NumVars_21, &ll_backend__prog_rep__NumVarsBytes_23);
        }
#line 308 "prog_rep.m"
        {
#line 308 "prog_rep.m"
          ll_backend__prog_rep__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_55_55, 0) = ((MR_Box) (ll_backend__prog_rep__FlagByte_20));
#line 308 "prog_rep.m"
          MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "prog_rep.m"
        }
#line 308 "prog_rep.m"
        {
#line 308 "prog_rep.m"
          ll_backend__prog_rep__V_57_57 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_60_60, ll_backend__prog_rep__NumVarsBytes_23, ll_backend__prog_rep__VarNameTableEntriesBytes_22);
        }
#line 308 "prog_rep.m"
        {
#line 308 "prog_rep.m"
          *ll_backend__prog_rep__Bytes_16 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_60_60, ll_backend__prog_rep__V_55_55, ll_backend__prog_rep__V_57_57);
        }
#line 282 "prog_rep.m"
      }
#line 271 "prog_rep.m"
  }
#line 264 "prog_rep.m"
}

#line 157 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_oisu_proc_3_p_0(
#line 157 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ModuleInfo_4,
#line 157 "prog_rep.m"
  MR_Word ll_backend__prog_rep__PredId_5,
#line 157 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__BytesCord_6)
#line 157 "prog_rep.m"
{
#line 159 "prog_rep.m"
  {
#line 159 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 159 "prog_rep.m"
    MR_Word ll_backend__prog_rep__PredInfo_7;
#line 159 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ProcTable_8;
#line 159 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Procs_9;
#line 166 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__ProcId_10;
#line 163 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_13_13;
#line 163 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_14_14;
#line 163 "prog_rep.m"
    MR_Word ll_backend__prog_rep___ProcInfo_11;

#line 160 "prog_rep.m"
    {
#line 160 "prog_rep.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__prog_rep__ModuleInfo_4, ll_backend__prog_rep__PredId_5, &ll_backend__prog_rep__PredInfo_7);
    }
#line 161 "prog_rep.m"
    {
#line 161 "prog_rep.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(ll_backend__prog_rep__PredInfo_7, &ll_backend__prog_rep__ProcTable_8);
    }
#line 162 "prog_rep.m"
    {
#line 162 "prog_rep.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__prog_rep__ProcTable_8, &ll_backend__prog_rep__Procs_9);
    }
#line 163 "prog_rep.m"
    ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__Procs_9)) == (MR_mktag((MR_Integer) 1)));
#line 163 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 163 "prog_rep.m"
      {
#line 163 "prog_rep.m"
        ll_backend__prog_rep__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Procs_9, (MR_Integer) 0)));
#line 163 "prog_rep.m"
        ll_backend__prog_rep__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Procs_9, (MR_Integer) 1)));
#line 163 "prog_rep.m"
        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 163 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 163 "prog_rep.m"
          {
#line 163 "prog_rep.m"
            ll_backend__prog_rep__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_13_13, (MR_Integer) 0)));
#line 163 "prog_rep.m"
            ll_backend__prog_rep___ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_13_13, (MR_Integer) 1)));
#line 163 "prog_rep.m"
            ll_backend__prog_rep__succeeded = MR_TRUE;
#line 163 "prog_rep.m"
          }
#line 163 "prog_rep.m"
      }
#line 166 "prog_rep.m"
    if (ll_backend__prog_rep__succeeded)
#line 164 "prog_rep.m"
      {
#line 164 "prog_rep.m"
        MR_Word ll_backend__prog_rep__ProcLabel_12;

#line 164 "prog_rep.m"
        {
#line 164 "prog_rep.m"
          ll_backend__prog_rep__ProcLabel_12 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__prog_rep__ModuleInfo_4, ll_backend__prog_rep__PredId_5, ll_backend__prog_rep__ProcId_10);
        }
#line 175 "prog_rep.m"
        if (((MR_tag((MR_Word) ll_backend__prog_rep__ProcLabel_12)) == (MR_mktag((MR_Integer) 0))))
#line 175 "prog_rep.m"
          {
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtorInfo_57_74;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DefModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 0)));
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 1)));
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DeclModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 2)));
#line 175 "prog_rep.m"
            MR_String ll_backend__prog_rep__PredName_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 3)));
#line 175 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 4)));
#line 175 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__ModeNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 5)));
#line 175 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__KindByte_28;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DeclModuleNameBytes_29;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DefModuleNameBytes_30;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__PredNameBytes_31;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__ArityBytes_32;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__ModeNumBytes_33;
#line 175 "prog_rep.m"
            MR_String ll_backend__prog_rep__V_56_56;
#line 175 "prog_rep.m"
            MR_String ll_backend__prog_rep__V_57_57;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_58_58;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_59_59;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_60_60;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_61_61;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_62_62;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_63_63;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_64_64;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_65_65;
#line 175 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_66_66;

#line 179 "prog_rep.m"
            if ((ll_backend__prog_rep__PredOrFunc_23 == (MR_Integer) 1))
#line 226 "prog_rep.m"
              ll_backend__prog_rep__KindByte_28 = (MR_Integer) 1;
#line 179 "prog_rep.m"
            else
#line 225 "prog_rep.m"
              ll_backend__prog_rep__KindByte_28 = (MR_Integer) 0;
#line 183 "prog_rep.m"
            {
#line 183 "prog_rep.m"
              ll_backend__prog_rep__V_56_56 = mdbcomp__prim_data__sym_name_to_string_1_f_0(ll_backend__prog_rep__DeclModuleName_24);
            }
#line 183 "prog_rep.m"
            {
#line 183 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__V_56_56, &ll_backend__prog_rep__DeclModuleNameBytes_29);
            }
#line 185 "prog_rep.m"
            {
#line 185 "prog_rep.m"
              ll_backend__prog_rep__V_57_57 = mdbcomp__prim_data__sym_name_to_string_1_f_0(ll_backend__prog_rep__DefModuleName_22);
            }
#line 185 "prog_rep.m"
            {
#line 185 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__V_57_57, &ll_backend__prog_rep__DefModuleNameBytes_30);
            }
#line 187 "prog_rep.m"
            {
#line 187 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__PredName_25, &ll_backend__prog_rep__PredNameBytes_31);
            }
#line 188 "prog_rep.m"
            {
#line 188 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__Arity_26, &ll_backend__prog_rep__ArityBytes_32);
            }
#line 189 "prog_rep.m"
            {
#line 189 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__ModeNum_27, &ll_backend__prog_rep__ModeNumBytes_33);
            }
#line 8051 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeCtorInfo_57_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 190 "prog_rep.m"
            {
#line 190 "prog_rep.m"
              ll_backend__prog_rep__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_59_59, 0) = ((MR_Box) (ll_backend__prog_rep__KindByte_28));
#line 190 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_59_59, 1) = ((MR_Box) (ll_backend__prog_rep__DeclModuleNameBytes_29));
#line 190 "prog_rep.m"
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
#line 194 "prog_rep.m"
            {
#line 194 "prog_rep.m"
              ll_backend__prog_rep__V_66_66 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__ModeNumBytes_33);
            }
#line 193 "prog_rep.m"
            {
#line 193 "prog_rep.m"
              ll_backend__prog_rep__V_64_64 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_65_65, ll_backend__prog_rep__V_66_66);
            }
#line 192 "prog_rep.m"
            {
#line 192 "prog_rep.m"
              ll_backend__prog_rep__V_62_62 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_63_63, ll_backend__prog_rep__V_64_64);
            }
#line 191 "prog_rep.m"
            {
#line 191 "prog_rep.m"
              ll_backend__prog_rep__V_60_60 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_61_61, ll_backend__prog_rep__V_62_62);
            }
#line 190 "prog_rep.m"
            {
#line 190 "prog_rep.m"
              *ll_backend__prog_rep__BytesCord_6 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_57_74, ll_backend__prog_rep__V_58_58, ll_backend__prog_rep__V_60_60);
            }
#line 175 "prog_rep.m"
          }
#line 175 "prog_rep.m"
        else
#line 197 "prog_rep.m"
          {
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtorInfo_58_75;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__SpecialPredId_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 1)));
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 2)));
#line 197 "prog_rep.m"
            MR_String ll_backend__prog_rep__TypeName_36 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 3)));
#line 197 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__TypeArity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 4)));
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtor_38;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeNameBytes_39;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeModuleNameBytes_40;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeArityBytes_41;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_42_42;
#line 197 "prog_rep.m"
            MR_String ll_backend__prog_rep__V_43_43;
#line 197 "prog_rep.m"
            MR_String ll_backend__prog_rep__V_44_44;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_45_45;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_46_46;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_47_47;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_48_48;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_49_49;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_50_50;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_51_51;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_52_52;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_53_53;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_54_54;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_55_55;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DefModuleName_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 0)));
#line 197 "prog_rep.m"
            MR_String ll_backend__prog_rep__PredName_68;
#line 197 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__ModeNum_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ProcLabel_12, (MR_Integer) 5)));
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DefModuleNameBytes_71;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__PredNameBytes_72;
#line 197 "prog_rep.m"
            MR_Word ll_backend__prog_rep__ModeNumBytes_73;

#line 198 "prog_rep.m"
            {
#line 198 "prog_rep.m"
              ll_backend__prog_rep__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_42_42, 0) = ((MR_Box) (ll_backend__prog_rep__TypeModuleName_35));
#line 198 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_42_42, 1) = ((MR_Box) (ll_backend__prog_rep__TypeName_36));
#line 198 "prog_rep.m"
            }
#line 198 "prog_rep.m"
            {
#line 198 "prog_rep.m"
              ll_backend__prog_rep__TypeCtor_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 198 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__TypeCtor_38, 0) = ((MR_Box) (ll_backend__prog_rep__V_42_42));
#line 198 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__TypeCtor_38, 1) = ((MR_Box) (ll_backend__prog_rep__TypeArity_37));
#line 198 "prog_rep.m"
            }
#line 199 "prog_rep.m"
            {
#line 199 "prog_rep.m"
              ll_backend__prog_rep__PredName_68 = hlds__special_pred__special_pred_name_2_f_0(ll_backend__prog_rep__SpecialPredId_34, ll_backend__prog_rep__TypeCtor_38);
            }
#line 202 "prog_rep.m"
            {
#line 202 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__TypeName_36, &ll_backend__prog_rep__TypeNameBytes_39);
            }
#line 203 "prog_rep.m"
            {
#line 203 "prog_rep.m"
              ll_backend__prog_rep__V_43_43 = mdbcomp__prim_data__sym_name_to_string_1_f_0(ll_backend__prog_rep__TypeModuleName_35);
            }
#line 203 "prog_rep.m"
            {
#line 203 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__V_43_43, &ll_backend__prog_rep__TypeModuleNameBytes_40);
            }
#line 205 "prog_rep.m"
            {
#line 205 "prog_rep.m"
              ll_backend__prog_rep__V_44_44 = mdbcomp__prim_data__sym_name_to_string_1_f_0(ll_backend__prog_rep__DefModuleName_67);
            }
#line 205 "prog_rep.m"
            {
#line 205 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__V_44_44, &ll_backend__prog_rep__DefModuleNameBytes_71);
            }
#line 207 "prog_rep.m"
            {
#line 207 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__PredName_68, &ll_backend__prog_rep__PredNameBytes_72);
            }
#line 208 "prog_rep.m"
            {
#line 208 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__TypeArity_37, &ll_backend__prog_rep__TypeArityBytes_41);
            }
#line 209 "prog_rep.m"
            {
#line 209 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__ModeNum_69, &ll_backend__prog_rep__ModeNumBytes_73);
            }
#line 8238 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeCtorInfo_58_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 210 "prog_rep.m"
            {
#line 210 "prog_rep.m"
              ll_backend__prog_rep__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_46_46, 0) = ((MR_Box) ((MR_Integer) 2));
#line 210 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_46_46, 1) = ((MR_Box) (ll_backend__prog_rep__TypeNameBytes_39));
#line 210 "prog_rep.m"
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
#line 215 "prog_rep.m"
            {
#line 215 "prog_rep.m"
              ll_backend__prog_rep__V_55_55 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__ModeNumBytes_73);
            }
#line 214 "prog_rep.m"
            {
#line 214 "prog_rep.m"
              ll_backend__prog_rep__V_53_53 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_54_54, ll_backend__prog_rep__V_55_55);
            }
#line 213 "prog_rep.m"
            {
#line 213 "prog_rep.m"
              ll_backend__prog_rep__V_51_51 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_52_52, ll_backend__prog_rep__V_53_53);
            }
#line 212 "prog_rep.m"
            {
#line 212 "prog_rep.m"
              ll_backend__prog_rep__V_49_49 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_50_50, ll_backend__prog_rep__V_51_51);
            }
#line 211 "prog_rep.m"
            {
#line 211 "prog_rep.m"
              ll_backend__prog_rep__V_47_47 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_48_48, ll_backend__prog_rep__V_49_49);
            }
#line 210 "prog_rep.m"
            {
#line 210 "prog_rep.m"
              *ll_backend__prog_rep__BytesCord_6 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_75, ll_backend__prog_rep__V_45_45, ll_backend__prog_rep__V_47_47);
            }
#line 197 "prog_rep.m"
          }
#line 164 "prog_rep.m"
      }
#line 166 "prog_rep.m"
    else
#line 167 "prog_rep.m"
      {
#line 167 "prog_rep.m"
        {
#line 167 "prog_rep.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.encode_oisu_proc\'/3", (MR_String) "OISU pred should have exactly one proc");
#line 167 "prog_rep.m"
          return;
        }
#line 167 "prog_rep.m"
      }
#line 159 "prog_rep.m"
  }
#line 157 "prog_rep.m"
}

#line 591 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_14(
#line 591 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 591 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 591 "prog_rep.m"
{
#line 591 "prog_rep.m"
  {
#line 591 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 591 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 591 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv11_Num_6;

#line 591 "prog_rep.m"
    {
#line 591 "prog_rep.m"
      ll_backend__prog_rep__conv11_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 591 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv11_Num_6));
#line 591 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 591 "prog_rep.m"
  }
#line 591 "prog_rep.m"
}

#line 546 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_13(
#line 546 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 546 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 546 "prog_rep.m"
{
#line 546 "prog_rep.m"
  {
#line 546 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 546 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 546 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv10_Num_6;

#line 546 "prog_rep.m"
    {
#line 546 "prog_rep.m"
      ll_backend__prog_rep__conv10_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 546 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv10_Num_6));
#line 546 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 546 "prog_rep.m"
  }
#line 546 "prog_rep.m"
}

#line 585 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_12(
#line 585 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 585 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 585 "prog_rep.m"
{
#line 585 "prog_rep.m"
  {
#line 585 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 585 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 585 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv9_HeadVar__4_247;

#line 585 "prog_rep.m"
    {
#line 585 "prog_rep.m"
      ll_backend__prog_rep__conv9_HeadVar__4_247 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__585__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 585 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv9_HeadVar__4_247));
#line 585 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 585 "prog_rep.m"
  }
#line 585 "prog_rep.m"
}

#line 586 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_11(
#line 586 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 586 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 586 "prog_rep.m"
{
#line 586 "prog_rep.m"
  {
#line 586 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 586 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 586 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv8_HeadVar__2_2;

#line 586 "prog_rep.m"
    {
#line 586 "prog_rep.m"
      ll_backend__prog_rep__conv8_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 586 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv8_HeadVar__2_2));
#line 586 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 586 "prog_rep.m"
  }
#line 586 "prog_rep.m"
}

#line 586 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_10(
#line 586 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 586 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 586 "prog_rep.m"
{
#line 586 "prog_rep.m"
  {
#line 586 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 586 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 586 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv7_Num_6;

#line 586 "prog_rep.m"
    {
#line 586 "prog_rep.m"
      ll_backend__prog_rep__conv7_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 586 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv7_Num_6));
#line 586 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 586 "prog_rep.m"
  }
#line 586 "prog_rep.m"
}

#line 515 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9(
#line 515 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 515 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 515 "prog_rep.m"
{
#line 515 "prog_rep.m"
  {
#line 515 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 515 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 515 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv6_HeadVar__3_264;

#line 515 "prog_rep.m"
    {
#line 515 "prog_rep.m"
      ll_backend__prog_rep__conv6_HeadVar__3_264 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__515__2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 515 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv6_HeadVar__3_264));
#line 515 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 515 "prog_rep.m"
  }
#line 515 "prog_rep.m"
}

#line 513 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8(
#line 513 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 513 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 513 "prog_rep.m"
{
#line 513 "prog_rep.m"
  {
#line 513 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 513 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 513 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv5_Num_6;

#line 513 "prog_rep.m"
    {
#line 513 "prog_rep.m"
      ll_backend__prog_rep__conv5_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 513 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv5_Num_6));
#line 513 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 513 "prog_rep.m"
  }
#line 513 "prog_rep.m"
}

#line 518 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7(
#line 518 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 518 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 518 "prog_rep.m"
{
#line 518 "prog_rep.m"
  {
#line 518 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 518 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;

#line 518 "prog_rep.m"
    {
#line 518 "prog_rep.m"
      return ll_backend__prog_rep__succeeded = ll_backend__prog_rep__lhs_final_is_ground_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 518 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 518 "prog_rep.m"
  }
#line 518 "prog_rep.m"
}

#line 515 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6(
#line 515 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 515 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 515 "prog_rep.m"
{
#line 515 "prog_rep.m"
  {
#line 515 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 515 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 515 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv4_HeadVar__3_229;

#line 515 "prog_rep.m"
    {
#line 515 "prog_rep.m"
      ll_backend__prog_rep__conv4_HeadVar__3_229 = ll_backend__prog_rep__IntroducedFrom__func__goal_to_goal_rep__515__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 515 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv4_HeadVar__3_229));
#line 515 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 515 "prog_rep.m"
  }
#line 515 "prog_rep.m"
}

#line 513 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5(
#line 513 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 513 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 513 "prog_rep.m"
{
#line 513 "prog_rep.m"
  {
#line 513 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 513 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 513 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv3_Num_6;

#line 513 "prog_rep.m"
    {
#line 513 "prog_rep.m"
      ll_backend__prog_rep__conv3_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 513 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv3_Num_6));
#line 513 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 513 "prog_rep.m"
  }
#line 513 "prog_rep.m"
}

#line 572 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4(
#line 572 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 572 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 572 "prog_rep.m"
{
#line 572 "prog_rep.m"
  {
#line 572 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 572 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 572 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__conv2_Num_6;

#line 572 "prog_rep.m"
    {
#line 572 "prog_rep.m"
      ll_backend__prog_rep__conv2_Num_6 = ll_backend__prog_rep__var_to_var_rep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 572 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv2_Num_6));
#line 572 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 572 "prog_rep.m"
  }
#line 572 "prog_rep.m"
}

#line 472 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3(
#line 472 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 472 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 472 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2)
#line 472 "prog_rep.m"
{
#line 472 "prog_rep.m"
  {
#line 472 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 472 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv1_HeadVar__4_4;

#line 472 "prog_rep.m"
    {
#line 472 "prog_rep.m"
      ll_backend__prog_rep__case_to_case_rep_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv1_HeadVar__4_4);
    }
#line 472 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv1_HeadVar__4_4));
#line 472 "prog_rep.m"
  }
#line 472 "prog_rep.m"
}

#line 455 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2(
#line 455 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 455 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 455 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2)
#line 455 "prog_rep.m"
{
#line 455 "prog_rep.m"
  {
#line 455 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 455 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_GoalRep_9;

#line 455 "prog_rep.m"
    {
#line 455 "prog_rep.m"
      ll_backend__prog_rep__goal_to_goal_rep_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv0_GoalRep_9);
    }
#line 455 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_GoalRep_9));
#line 455 "prog_rep.m"
  }
#line 455 "prog_rep.m"
}

#line 447 "prog_rep.m"
static MR_bool MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1(
#line 447 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg)
#line 447 "prog_rep.m"
{
#line 447 "prog_rep.m"
  {
#line 447 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 447 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;

#line 447 "prog_rep.m"
    {
#line 447 "prog_rep.m"
      return ll_backend__prog_rep__succeeded = ll_backend__prog_rep__IntroducedFrom__pred__goal_to_goal_rep__447__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))));
    }
#line 447 "prog_rep.m"
    return ll_backend__prog_rep__succeeded;
#line 447 "prog_rep.m"
  }
#line 447 "prog_rep.m"
}

#line 80 "prog_rep.m"
void MR_CALL 
ll_backend__prog_rep__goal_to_goal_rep_4_p_0(
#line 80 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Info_5,
#line 80 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Instmap0_6,
#line 80 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__3_3,
#line 80 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__GoalRep_9)
#line 80 "prog_rep.m"
{
#line 432 "prog_rep.m"
  {
#line 432 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 432 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 0)));
#line 432 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__HeadVar__3_3, (MR_Integer) 1)));
#line 432 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Detism_10;
#line 432 "prog_rep.m"
    MR_Word ll_backend__prog_rep__DetismRep_11;
#line 432 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalExprRep_12;

#line 433 "prog_rep.m"
    {
#line 433 "prog_rep.m"
      ll_backend__prog_rep__Detism_10 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__prog_rep__GoalInfo_8);
    }
#line 434 "prog_rep.m"
    {
#line 434 "prog_rep.m"
      ll_backend__prog_rep__detism_to_detism_rep_2_p_0(ll_backend__prog_rep__Detism_10, &ll_backend__prog_rep__DetismRep_11);
    }
#line 435 "prog_rep.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 452 "prog_rep.m"
    if (((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 0))))
#line 458 "prog_rep.m"
      {
#line 458 "prog_rep.m"
        MR_Word ll_backend__prog_rep__SubGoal_18 = (MR_Word) MR_body(((MR_Word) ll_backend__prog_rep__GoalExpr_7), (MR_Integer) 0);
#line 458 "prog_rep.m"
        MR_Word ll_backend__prog_rep__SubGoalRep_19;

#line 459 "prog_rep.m"
        {
#line 459 "prog_rep.m"
          ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__SubGoal_18, &ll_backend__prog_rep__SubGoalRep_19);
        }
#line 460 "prog_rep.m"
        {
#line 460 "prog_rep.m"
          ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "prog_rep.m"
          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 460 "prog_rep.m"
          MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__SubGoalRep_19));
#line 460 "prog_rep.m"
        }
#line 458 "prog_rep.m"
      }
#line 452 "prog_rep.m"
    else
#line 452 "prog_rep.m"
      if (((((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 437 "prog_rep.m"
        {
#line 437 "prog_rep.m"
          MR_Word ll_backend__prog_rep__ConjType_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 437 "prog_rep.m"
          MR_Word ll_backend__prog_rep__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 437 "prog_rep.m"
          MR_Word ll_backend__prog_rep__FlattenParConjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 5)));
#line 437 "prog_rep.m"
          MR_Word ll_backend__prog_rep__Goals_16;
#line 437 "prog_rep.m"
          MR_Word ll_backend__prog_rep__GoalReps_17;
#line 438 "prog_rep.m"
          MR_String ll_backend__prog_rep__V_203_203 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 0)));
#line 438 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 1)));
#line 438 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 2)));
#line 438 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 3)));
#line 438 "prog_rep.m"
          MR_Word ll_backend__prog_rep__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 4)));

#line 444 "prog_rep.m"
          if ((ll_backend__prog_rep__FlattenParConjs_15 == (MR_Integer) 1))
#line 445 "prog_rep.m"
            {
#line 445 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_173_173;

#line 446 "prog_rep.m"
              ll_backend__prog_rep__Goals_16 = ll_backend__prog_rep__Goals0_14;
#line 447 "prog_rep.m"
              {
#line 447 "prog_rep.m"
                ll_backend__prog_rep__V_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 447 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[0]));
#line 447 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_1));
#line 447 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 447 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 3) = ((MR_Box) (ll_backend__prog_rep__ConjType_13));
#line 447 "prog_rep.m"
                MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_173_173, 4) = ((MR_Box) ((MR_Integer) 0));
#line 447 "prog_rep.m"
              }
#line 447 "prog_rep.m"
              {
#line 447 "prog_rep.m"
                mercury__require__expect_4_p_0(ll_backend__prog_rep__V_173_173, (MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "non-plain conjunction and declarative debugging");
              }
#line 445 "prog_rep.m"
            }
#line 444 "prog_rep.m"
          else
#line 443 "prog_rep.m"
            {
#line 443 "prog_rep.m"
              hlds__goal_util__flatten_conj_2_p_0(ll_backend__prog_rep__Goals0_14, &ll_backend__prog_rep__Goals_16);
            }
#line 450 "prog_rep.m"
          {
#line 450 "prog_rep.m"
            ll_backend__prog_rep__conj_to_conj_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Goals_16, &ll_backend__prog_rep__GoalReps_17);
          }
#line 451 "prog_rep.m"
          {
#line 451 "prog_rep.m"
            ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 451 "prog_rep.m"
            MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (ll_backend__prog_rep__GoalReps_17));
#line 451 "prog_rep.m"
          }
#line 437 "prog_rep.m"
        }
#line 452 "prog_rep.m"
      else
#line 452 "prog_rep.m"
        if (((((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 453 "prog_rep.m"
          {
#line 453 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_172_172;
#line 453 "prog_rep.m"
            MR_Word ll_backend__prog_rep__Goals_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 453 "prog_rep.m"
            MR_Word ll_backend__prog_rep__GoalReps_179;

#line 455 "prog_rep.m"
            {
#line 455 "prog_rep.m"
              ll_backend__prog_rep__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 455 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[0]));
#line 455 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_2));
#line 455 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 455 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 455 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_172_172, 4) = ((MR_Box) (ll_backend__prog_rep__Instmap0_6));
#line 455 "prog_rep.m"
            }
#line 455 "prog_rep.m"
            {
#line 455 "prog_rep.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &ll_backend__prog_rep_scalar_common_1[1], ll_backend__prog_rep__V_172_172, ll_backend__prog_rep__Goals_178, &ll_backend__prog_rep__GoalReps_179);
            }
#line 456 "prog_rep.m"
            {
#line 456 "prog_rep.m"
              ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 456 "prog_rep.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (ll_backend__prog_rep__GoalReps_179));
#line 456 "prog_rep.m"
            }
#line 453 "prog_rep.m"
          }
#line 452 "prog_rep.m"
        else
#line 452 "prog_rep.m"
          if (((((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 462 "prog_rep.m"
            {
#line 462 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 462 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 462 "prog_rep.m"
              MR_Word ll_backend__prog_rep__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 462 "prog_rep.m"
              MR_Word ll_backend__prog_rep__CondGoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Cond_21, (MR_Integer) 1)));
#line 462 "prog_rep.m"
              MR_Word ll_backend__prog_rep__InstmapDelta_26;
#line 462 "prog_rep.m"
              MR_Word ll_backend__prog_rep__InstmapAfterCond_27;
#line 462 "prog_rep.m"
              MR_Word ll_backend__prog_rep__CondRep_28;
#line 462 "prog_rep.m"
              MR_Word ll_backend__prog_rep__ThenRep_29;
#line 462 "prog_rep.m"
              MR_Word ll_backend__prog_rep__ElseRep_30;
#line 462 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 463 "prog_rep.m"
              MR_Word ll_backend__prog_rep__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Cond_21, (MR_Integer) 0)));

#line 464 "prog_rep.m"
              {
#line 464 "prog_rep.m"
                ll_backend__prog_rep__InstmapDelta_26 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__prog_rep__CondGoalInfo_25);
              }
#line 465 "prog_rep.m"
              {
#line 465 "prog_rep.m"
                hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__InstmapDelta_26, &ll_backend__prog_rep__InstmapAfterCond_27);
              }
#line 466 "prog_rep.m"
              {
#line 466 "prog_rep.m"
                ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Cond_21, &ll_backend__prog_rep__CondRep_28);
              }
#line 467 "prog_rep.m"
              {
#line 467 "prog_rep.m"
                ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__InstmapAfterCond_27, ll_backend__prog_rep__Then_22, &ll_backend__prog_rep__ThenRep_29);
              }
#line 468 "prog_rep.m"
              {
#line 468 "prog_rep.m"
                ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Else_23, &ll_backend__prog_rep__ElseRep_30);
              }
#line 469 "prog_rep.m"
              {
#line 469 "prog_rep.m"
                ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 469 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 469 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__CondRep_28));
#line 469 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__ThenRep_29));
#line 469 "prog_rep.m"
                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 3) = ((MR_Box) (ll_backend__prog_rep__ElseRep_30));
#line 469 "prog_rep.m"
              }
#line 462 "prog_rep.m"
            }
#line 452 "prog_rep.m"
          else
#line 452 "prog_rep.m"
            if (((((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 483 "prog_rep.m"
              {
#line 483 "prog_rep.m"
                MR_Word ll_backend__prog_rep__SubGoalInfo_39;
#line 483 "prog_rep.m"
                MR_Word ll_backend__prog_rep__OuterDetism_40;
#line 483 "prog_rep.m"
                MR_Word ll_backend__prog_rep__InnerDetism_41;
#line 483 "prog_rep.m"
                MR_Word ll_backend__prog_rep__MaybeCut_42;
#line 483 "prog_rep.m"
                MR_Word ll_backend__prog_rep__SubGoal_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 483 "prog_rep.m"
                MR_Word ll_backend__prog_rep__SubGoalRep_181;
#line 483 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 484 "prog_rep.m"
                MR_Word ll_backend__prog_rep__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__SubGoal_180, (MR_Integer) 0)));

#line 484 "prog_rep.m"
                ll_backend__prog_rep__SubGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__SubGoal_180, (MR_Integer) 1)));
#line 485 "prog_rep.m"
                {
#line 485 "prog_rep.m"
                  ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__SubGoal_180, &ll_backend__prog_rep__SubGoalRep_181);
                }
#line 486 "prog_rep.m"
                {
#line 486 "prog_rep.m"
                  ll_backend__prog_rep__OuterDetism_40 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__prog_rep__GoalInfo_8);
                }
#line 487 "prog_rep.m"
                {
#line 487 "prog_rep.m"
                  ll_backend__prog_rep__InnerDetism_41 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__prog_rep__SubGoalInfo_39);
                }
#line 488 "prog_rep.m"
                ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__InnerDetism_41 == ll_backend__prog_rep__OuterDetism_40);
#line 490 "prog_rep.m"
                if (ll_backend__prog_rep__succeeded)
#line 489 "prog_rep.m"
                  ll_backend__prog_rep__MaybeCut_42 = (MR_Integer) 1;
#line 490 "prog_rep.m"
                else
#line 491 "prog_rep.m"
                  ll_backend__prog_rep__MaybeCut_42 = (MR_Integer) 0;
#line 493 "prog_rep.m"
                {
#line 493 "prog_rep.m"
                  ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 493 "prog_rep.m"
                  MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 493 "prog_rep.m"
                  MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__SubGoalRep_181));
#line 493 "prog_rep.m"
                  MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__MaybeCut_42));
#line 493 "prog_rep.m"
                }
#line 483 "prog_rep.m"
              }
#line 452 "prog_rep.m"
            else
#line 452 "prog_rep.m"
              if (((((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 595 "prog_rep.m"
                {
#line 597 "prog_rep.m"
                  {
#line 597 "prog_rep.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "unexpected shorthand");
#line 597 "prog_rep.m"
                    return;
                  }
#line 595 "prog_rep.m"
                }
#line 452 "prog_rep.m"
              else
#line 452 "prog_rep.m"
                if (((((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 471 "prog_rep.m"
                  {
#line 471 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 471 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 471 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__Cases_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 471 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__CasesRep_34;
#line 471 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__CanFailRep_35;
#line 471 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__VarRep_36;
#line 471 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_171_171;

#line 472 "prog_rep.m"
                    {
#line 472 "prog_rep.m"
                      ll_backend__prog_rep__V_171_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 472 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[1]));
#line 472 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_3));
#line 472 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 472 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 472 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_171_171, 4) = ((MR_Box) (ll_backend__prog_rep__Instmap0_6));
#line 472 "prog_rep.m"
                    }
#line 472 "prog_rep.m"
                    {
#line 472 "prog_rep.m"
                      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &ll_backend__prog_rep_scalar_common_1[2], ll_backend__prog_rep__V_171_171, ll_backend__prog_rep__Cases_33, &ll_backend__prog_rep__CasesRep_34);
                    }
#line 476 "prog_rep.m"
                    if ((ll_backend__prog_rep__CanFail_32 == (MR_Integer) 0))
#line 475 "prog_rep.m"
                      ll_backend__prog_rep__CanFailRep_35 = (MR_Integer) 0;
#line 476 "prog_rep.m"
                    else
#line 478 "prog_rep.m"
                      ll_backend__prog_rep__CanFailRep_35 = (MR_Integer) 1;
#line 480 "prog_rep.m"
                    {
#line 480 "prog_rep.m"
                      ll_backend__prog_rep__VarRep_36 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_31);
                    }
#line 481 "prog_rep.m"
                    {
#line 481 "prog_rep.m"
                      ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 481 "prog_rep.m"
                      MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_36));
#line 481 "prog_rep.m"
                      MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__CanFailRep_35));
#line 481 "prog_rep.m"
                      MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__CasesRep_34));
#line 481 "prog_rep.m"
                    }
#line 471 "prog_rep.m"
                  }
#line 452 "prog_rep.m"
                else
#line 499 "prog_rep.m"
                  {
#line 499 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__AtomicGoalRep_73;
#line 499 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__BoundVars_99;
#line 499 "prog_rep.m"
                    MR_String ll_backend__prog_rep__FileName_137;
#line 499 "prog_rep.m"
                    MR_Integer ll_backend__prog_rep__LineNo_138;
#line 499 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__BoundVarsRep_139;
#line 499 "prog_rep.m"
                    MR_Word ll_backend__prog_rep__V_170_170;

#line 589 "prog_rep.m"
                    {
#line 589 "prog_rep.m"
                      ll_backend__prog_rep__goal_info_to_atomic_goal_rep_fields_6_p_0(ll_backend__prog_rep__GoalInfo_8, ll_backend__prog_rep__Instmap0_6, ll_backend__prog_rep__Info_5, &ll_backend__prog_rep__FileName_137, &ll_backend__prog_rep__LineNo_138, &ll_backend__prog_rep__BoundVars_99);
                    }
#line 544 "prog_rep.m"
                    if (((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 567 "prog_rep.m"
                      {
#line 567 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__PredId_121 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
#line 567 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__Builtin_123 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 567 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__PredInfo_126;
#line 567 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__ModuleSymName_127;
#line 567 "prog_rep.m"
                        MR_String ll_backend__prog_rep__ModuleName_128;
#line 567 "prog_rep.m"
                        MR_String ll_backend__prog_rep__PredName_129;
#line 567 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 4)));
#line 567 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_149_149;
#line 567 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__Args_196 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 567 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__ArgsRep_197;
#line 567 "prog_rep.m"
                        MR_Integer ll_backend__prog_rep__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 567 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 567 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));
#line 568 "prog_rep.m"
                        MR_String ll_backend__prog_rep__V_208_208 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 0)));
#line 568 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 1)));
#line 568 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 2)));
#line 568 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 3)));
#line 568 "prog_rep.m"
                        MR_Word ll_backend__prog_rep__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_5, (MR_Integer) 5)));

#line 568 "prog_rep.m"
                        {
#line 568 "prog_rep.m"
                          hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__prog_rep__V_148_148, ll_backend__prog_rep__PredId_121, &ll_backend__prog_rep__PredInfo_126);
                        }
#line 569 "prog_rep.m"
                        {
#line 569 "prog_rep.m"
                          ll_backend__prog_rep__ModuleSymName_127 = hlds__hlds_pred__pred_info_module_1_f_0(ll_backend__prog_rep__PredInfo_126);
                        }
#line 570 "prog_rep.m"
                        {
#line 570 "prog_rep.m"
                          ll_backend__prog_rep__ModuleName_128 = mdbcomp__prim_data__sym_name_to_string_1_f_0(ll_backend__prog_rep__ModuleSymName_127);
                        }
#line 571 "prog_rep.m"
                        {
#line 571 "prog_rep.m"
                          ll_backend__prog_rep__PredName_129 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__prog_rep__PredInfo_126);
                        }
#line 572 "prog_rep.m"
                        {
#line 572 "prog_rep.m"
                          ll_backend__prog_rep__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 572 "prog_rep.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_149_149, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
#line 572 "prog_rep.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_149_149, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_4));
#line 572 "prog_rep.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_149_149, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 572 "prog_rep.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_149_149, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 572 "prog_rep.m"
                        }
#line 572 "prog_rep.m"
                        {
#line 572 "prog_rep.m"
                          ll_backend__prog_rep__ArgsRep_197 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__V_149_149, ll_backend__prog_rep__Args_196);
                        }
#line 576 "prog_rep.m"
                        if ((ll_backend__prog_rep__Builtin_123 == (MR_Integer) 0))
#line 578 "prog_rep.m"
                          {
#line 578 "prog_rep.m"
                            ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 578 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 578 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__ModuleName_128));
#line 578 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 2) = ((MR_Box) (ll_backend__prog_rep__PredName_129));
#line 578 "prog_rep.m"
                            MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_197));
#line 578 "prog_rep.m"
                          }
#line 576 "prog_rep.m"
                        else
#line 576 "prog_rep.m"
                          if ((ll_backend__prog_rep__Builtin_123 == (MR_Integer) 2))
#line 575 "prog_rep.m"
                            {
#line 575 "prog_rep.m"
                              ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 575 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 575 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__ModuleName_128));
#line 575 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 2) = ((MR_Box) (ll_backend__prog_rep__PredName_129));
#line 575 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_197));
#line 575 "prog_rep.m"
                            }
#line 576 "prog_rep.m"
                          else
#line 580 "prog_rep.m"
                            {
#line 581 "prog_rep.m"
                              {
#line 581 "prog_rep.m"
                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "out_of_line_builtin");
#line 581 "prog_rep.m"
                                return;
                              }
#line 580 "prog_rep.m"
                            }
#line 567 "prog_rep.m"
                      }
#line 544 "prog_rep.m"
                    else
#line 544 "prog_rep.m"
                      if (((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 501 "prog_rep.m"
                        {
#line 501 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__Uni_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 501 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)));
#line 501 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 501 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 501 "prog_rep.m"
                          MR_Word ll_backend__prog_rep__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));

#line 507 "prog_rep.m"
                          if (((MR_tag((MR_Word) ll_backend__prog_rep__Uni_69)) == (MR_mktag((MR_Integer) 2))))
#line 503 "prog_rep.m"
                            {
#line 503 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__Target_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__Uni_69, (MR_Integer) 0)));
#line 503 "prog_rep.m"
                              MR_Word ll_backend__prog_rep__Source_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__Uni_69, (MR_Integer) 1)));
#line 503 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__V_168_168;
#line 503 "prog_rep.m"
                              MR_Integer ll_backend__prog_rep__V_169_169;

#line 504 "prog_rep.m"
                              {
#line 504 "prog_rep.m"
                                ll_backend__prog_rep__V_168_168 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Target_71);
                              }
#line 504 "prog_rep.m"
                              {
#line 504 "prog_rep.m"
                                ll_backend__prog_rep__V_169_169 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Source_72);
                              }
#line 504 "prog_rep.m"
                              {
#line 504 "prog_rep.m"
                                ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 504 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 504 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__V_168_168));
#line 504 "prog_rep.m"
                                MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 2) = ((MR_Box) (ll_backend__prog_rep__V_169_169));
#line 504 "prog_rep.m"
                              }
#line 503 "prog_rep.m"
                            }
#line 507 "prog_rep.m"
                          else
#line 507 "prog_rep.m"
                            if (((MR_tag((MR_Word) ll_backend__prog_rep__Uni_69)) == (MR_mktag((MR_Integer) 0))))
#line 510 "prog_rep.m"
                              {
#line 510 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__ConsId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_69, (MR_Integer) 1)));
#line 510 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__Args_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_69, (MR_Integer) 2)));
#line 510 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__ArgModes_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_69, (MR_Integer) 3)));
#line 510 "prog_rep.m"
                                MR_String ll_backend__prog_rep__ConsIdRep_82;
#line 510 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__ArgsRep_83;
#line 510 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__MaybeArgs_84;
#line 510 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__MaybeArgsRep_85;
#line 510 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_164_164;
#line 510 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_165_165;
#line 510 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_69, (MR_Integer) 0)));
#line 510 "prog_rep.m"
                                MR_Integer ll_backend__prog_rep__VarRep_183;
#line 508 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_69, (MR_Integer) 4)));
#line 508 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_69, (MR_Integer) 5)));
#line 508 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Uni_69, (MR_Integer) 6)));
#line 518 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_167_167;

#line 511 "prog_rep.m"
                                {
#line 511 "prog_rep.m"
                                  ll_backend__prog_rep__VarRep_183 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_182);
                                }
#line 512 "prog_rep.m"
                                {
#line 512 "prog_rep.m"
                                  ll_backend__prog_rep__ConsIdRep_82 = ll_backend__prog_rep__cons_id_rep_1_f_0(ll_backend__prog_rep__ConsId_74);
                                }
#line 513 "prog_rep.m"
                                {
#line 513 "prog_rep.m"
                                  ll_backend__prog_rep__V_164_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 513 "prog_rep.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_164_164, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
#line 513 "prog_rep.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_164_164, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_5));
#line 513 "prog_rep.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_164_164, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 513 "prog_rep.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_164_164, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 513 "prog_rep.m"
                                }
#line 513 "prog_rep.m"
                                {
#line 513 "prog_rep.m"
                                  ll_backend__prog_rep__ArgsRep_83 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__V_164_164, ll_backend__prog_rep__Args_75);
                                }
#line 514 "prog_rep.m"
                                {
#line 514 "prog_rep.m"
                                  ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__ArgModes_76, ll_backend__prog_rep__Args_75, &ll_backend__prog_rep__MaybeArgs_84);
                                }
#line 515 "prog_rep.m"
                                {
#line 515 "prog_rep.m"
                                  ll_backend__prog_rep__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 515 "prog_rep.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_165_165, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
#line 515 "prog_rep.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_165_165, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_6));
#line 515 "prog_rep.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_165_165, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 515 "prog_rep.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_165_165, 3) = ((MR_Box) (ll_backend__prog_rep__V_164_164));
#line 515 "prog_rep.m"
                                }
#line 515 "prog_rep.m"
                                {
#line 515 "prog_rep.m"
                                  ll_backend__prog_rep__MaybeArgsRep_85 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[4], (MR_Word) &ll_backend__prog_rep_scalar_common_1[5], ll_backend__prog_rep__V_165_165, ll_backend__prog_rep__MaybeArgs_84);
                                }
#line 518 "prog_rep.m"
                                {
#line 518 "prog_rep.m"
                                  ll_backend__prog_rep__V_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 518 "prog_rep.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_167_167, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_5[1]));
#line 518 "prog_rep.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_167_167, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_7));
#line 518 "prog_rep.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_167_167, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 518 "prog_rep.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_167_167, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 518 "prog_rep.m"
                                }
#line 518 "prog_rep.m"
                                {
#line 518 "prog_rep.m"
                                  ll_backend__prog_rep__succeeded = mercury__list__all_true_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, ll_backend__prog_rep__V_167_167, ll_backend__prog_rep__ArgModes_76);
                                }
#line 521 "prog_rep.m"
                                if (ll_backend__prog_rep__succeeded)
#line 519 "prog_rep.m"
                                  {
#line 519 "prog_rep.m"
                                    ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 519 "prog_rep.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_183));
#line 519 "prog_rep.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_82));
#line 519 "prog_rep.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__prog_rep__AtomicGoalRep_73, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_83));
#line 519 "prog_rep.m"
                                  }
#line 521 "prog_rep.m"
                                else
#line 522 "prog_rep.m"
                                  {
#line 522 "prog_rep.m"
                                    ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 522 "prog_rep.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 522 "prog_rep.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__VarRep_183));
#line 522 "prog_rep.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 2) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_82));
#line 522 "prog_rep.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 3) = ((MR_Box) (ll_backend__prog_rep__MaybeArgsRep_85));
#line 522 "prog_rep.m"
                                  }
#line 510 "prog_rep.m"
                              }
#line 507 "prog_rep.m"
                            else
#line 507 "prog_rep.m"
                              if (((MR_tag((MR_Word) ll_backend__prog_rep__Uni_69)) == (MR_mktag((MR_Integer) 1))))
#line 510 "prog_rep.m"
                                {
#line 510 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__TypeInfo_222_281;
#line 510 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__ConsId_269 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_69, (MR_Integer) 1)));
#line 510 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__Args_270 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_69, (MR_Integer) 2)));
#line 510 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__ArgModes_271 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_69, (MR_Integer) 3)));
#line 510 "prog_rep.m"
                                  MR_String ll_backend__prog_rep__ConsIdRep_272;
#line 510 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__ArgsRep_273;
#line 510 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__MaybeArgs_274;
#line 510 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__MaybeArgsRep_275;
#line 510 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_276_276;
#line 510 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_277_277;
#line 510 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__Var_279 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_69, (MR_Integer) 0)));
#line 510 "prog_rep.m"
                                  MR_Integer ll_backend__prog_rep__VarRep_280;
#line 509 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_69, (MR_Integer) 4)));
#line 509 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__Uni_69, (MR_Integer) 5)));

#line 511 "prog_rep.m"
                                  {
#line 511 "prog_rep.m"
                                    ll_backend__prog_rep__VarRep_280 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_279);
                                  }
#line 512 "prog_rep.m"
                                  {
#line 512 "prog_rep.m"
                                    ll_backend__prog_rep__ConsIdRep_272 = ll_backend__prog_rep__cons_id_rep_1_f_0(ll_backend__prog_rep__ConsId_269);
                                  }
#line 9561 "ll_backend.prog_rep.c"
                                  ll_backend__prog_rep__TypeInfo_222_281 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[3];
#line 513 "prog_rep.m"
                                  {
#line 513 "prog_rep.m"
                                    ll_backend__prog_rep__V_276_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 513 "prog_rep.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_276_276, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
#line 513 "prog_rep.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_276_276, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_8));
#line 513 "prog_rep.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_276_276, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 513 "prog_rep.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_276_276, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 513 "prog_rep.m"
                                  }
#line 513 "prog_rep.m"
                                  {
#line 513 "prog_rep.m"
                                    ll_backend__prog_rep__ArgsRep_273 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_222_281, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__V_276_276, ll_backend__prog_rep__Args_270);
                                  }
#line 514 "prog_rep.m"
                                  {
#line 514 "prog_rep.m"
                                    ll_backend__prog_rep__filter_input_args_4_p_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__ArgModes_271, ll_backend__prog_rep__Args_270, &ll_backend__prog_rep__MaybeArgs_274);
                                  }
#line 515 "prog_rep.m"
                                  {
#line 515 "prog_rep.m"
                                    ll_backend__prog_rep__V_277_277 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 515 "prog_rep.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_277_277, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[2]));
#line 515 "prog_rep.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_277_277, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_9));
#line 515 "prog_rep.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_277_277, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 515 "prog_rep.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_277_277, 3) = ((MR_Box) (ll_backend__prog_rep__V_276_276));
#line 515 "prog_rep.m"
                                  }
#line 515 "prog_rep.m"
                                  {
#line 515 "prog_rep.m"
                                    ll_backend__prog_rep__MaybeArgsRep_275 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[4], (MR_Word) &ll_backend__prog_rep_scalar_common_1[5], ll_backend__prog_rep__V_277_277, ll_backend__prog_rep__MaybeArgs_274);
                                  }
#line 527 "prog_rep.m"
                                  {
#line 527 "prog_rep.m"
                                    ll_backend__prog_rep__succeeded = mercury__list__member_2_p_0(ll_backend__prog_rep__TypeInfo_222_281, ((MR_Box) (ll_backend__prog_rep__Var_279)), ll_backend__prog_rep__BoundVars_99);
                                  }
#line 530 "prog_rep.m"
                                  if (ll_backend__prog_rep__succeeded)
#line 528 "prog_rep.m"
                                    {
#line 528 "prog_rep.m"
                                      ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 528 "prog_rep.m"
                                      MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_280));
#line 528 "prog_rep.m"
                                      MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_272));
#line 528 "prog_rep.m"
                                      MR_hl_field(MR_mktag(2), ll_backend__prog_rep__AtomicGoalRep_73, 2) = ((MR_Box) (ll_backend__prog_rep__MaybeArgsRep_275));
#line 528 "prog_rep.m"
                                    }
#line 530 "prog_rep.m"
                                  else
#line 531 "prog_rep.m"
                                    {
#line 531 "prog_rep.m"
                                      ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 531 "prog_rep.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (ll_backend__prog_rep__VarRep_280));
#line 531 "prog_rep.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__ConsIdRep_272));
#line 531 "prog_rep.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__AtomicGoalRep_73, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_273));
#line 531 "prog_rep.m"
                                    }
#line 510 "prog_rep.m"
                                }
#line 507 "prog_rep.m"
                              else
#line 507 "prog_rep.m"
                                if (((((MR_tag((MR_Word) ll_backend__prog_rep__Uni_69)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Uni_69, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 541 "prog_rep.m"
                                  {
#line 542 "prog_rep.m"
                                    {
#line 542 "prog_rep.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "complicated_unify");
#line 542 "prog_rep.m"
                                      return;
                                    }
#line 541 "prog_rep.m"
                                  }
#line 507 "prog_rep.m"
                                else
#line 536 "prog_rep.m"
                                  {
#line 536 "prog_rep.m"
                                    MR_Word ll_backend__prog_rep__Var1_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Uni_69, (MR_Integer) 1)));
#line 536 "prog_rep.m"
                                    MR_Word ll_backend__prog_rep__Var2_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__Uni_69, (MR_Integer) 2)));
#line 536 "prog_rep.m"
                                    MR_Integer ll_backend__prog_rep__V_162_162;
#line 536 "prog_rep.m"
                                    MR_Integer ll_backend__prog_rep__V_163_163;

#line 537 "prog_rep.m"
                                    {
#line 537 "prog_rep.m"
                                      ll_backend__prog_rep__V_162_162 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var1_100);
                                    }
#line 537 "prog_rep.m"
                                    {
#line 537 "prog_rep.m"
                                      ll_backend__prog_rep__V_163_163 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var2_101);
                                    }
#line 537 "prog_rep.m"
                                    {
#line 537 "prog_rep.m"
                                      ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 537 "prog_rep.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 537 "prog_rep.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__V_162_162));
#line 537 "prog_rep.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 2) = ((MR_Box) (ll_backend__prog_rep__V_163_163));
#line 537 "prog_rep.m"
                                    }
#line 536 "prog_rep.m"
                                  }
#line 501 "prog_rep.m"
                        }
#line 544 "prog_rep.m"
                      else
#line 544 "prog_rep.m"
                        if (((((MR_tag((MR_Word) ll_backend__prog_rep__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 584 "prog_rep.m"
                          {
#line 584 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__ArgVarsRep_136;
#line 584 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_145_145;
#line 584 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_146_146;
#line 584 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__Args_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 584 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 584 "prog_rep.m"
                            MR_Word ll_backend__prog_rep___PredId_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 584 "prog_rep.m"
                            MR_Integer ll_backend__prog_rep__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 584 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));
#line 584 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 6)));
#line 584 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 7)));

#line 586 "prog_rep.m"
                            {
#line 586 "prog_rep.m"
                              ll_backend__prog_rep__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 586 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
#line 586 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_10));
#line 586 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 586 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_146_146, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 586 "prog_rep.m"
                            }
#line 585 "prog_rep.m"
                            {
#line 585 "prog_rep.m"
                              ll_backend__prog_rep__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 585 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_6[2]));
#line 585 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_12));
#line 585 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 585 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 3) = ((MR_Box) (ll_backend__prog_rep__V_146_146));
#line 585 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_145_145, 4) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_2[2]));
#line 585 "prog_rep.m"
                            }
#line 585 "prog_rep.m"
                            {
#line 585 "prog_rep.m"
                              ll_backend__prog_rep__ArgVarsRep_136 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__V_145_145, ll_backend__prog_rep__Args_198);
                            }
#line 587 "prog_rep.m"
                            {
#line 587 "prog_rep.m"
                              ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 587 "prog_rep.m"
                              MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__ArgVarsRep_136));
#line 587 "prog_rep.m"
                            }
#line 584 "prog_rep.m"
                          }
#line 544 "prog_rep.m"
                        else
#line 545 "prog_rep.m"
                          {
#line 545 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__GenericCall_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 1)));
#line 545 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_153_153;
#line 545 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__Args_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 2)));
#line 545 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__ArgsRep_195;
#line 545 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 3)));
#line 545 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 4)));
#line 545 "prog_rep.m"
                            MR_Word ll_backend__prog_rep__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExpr_7, (MR_Integer) 5)));

#line 546 "prog_rep.m"
                            {
#line 546 "prog_rep.m"
                              ll_backend__prog_rep__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 546 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_153_153, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
#line 546 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_153_153, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_13));
#line 546 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_153_153, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 546 "prog_rep.m"
                              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_153_153, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 546 "prog_rep.m"
                            }
#line 546 "prog_rep.m"
                            {
#line 546 "prog_rep.m"
                              ll_backend__prog_rep__ArgsRep_195 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__V_153_153, ll_backend__prog_rep__Args_194);
                            }
#line 551 "prog_rep.m"
                            if (((MR_tag((MR_Word) ll_backend__prog_rep__GenericCall_105)) == (MR_mktag((MR_Integer) 3))))
#line 562 "prog_rep.m"
                              {
#line 562 "prog_rep.m"
                                MR_Integer ll_backend__prog_rep__InputArgRep_119;
#line 562 "prog_rep.m"
                                MR_Integer ll_backend__prog_rep__OutputArgRep_120;
#line 560 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_154_154;
#line 560 "prog_rep.m"
                                MR_Word ll_backend__prog_rep__V_155_155;

#line 560 "prog_rep.m"
                                ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__ArgsRep_195)) == (MR_mktag((MR_Integer) 1)));
#line 560 "prog_rep.m"
                                if (ll_backend__prog_rep__succeeded)
#line 560 "prog_rep.m"
                                  {
#line 560 "prog_rep.m"
                                    ll_backend__prog_rep__InputArgRep_119 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ArgsRep_195, (MR_Integer) 0)));
#line 560 "prog_rep.m"
                                    ll_backend__prog_rep__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__ArgsRep_195, (MR_Integer) 1)));
#line 560 "prog_rep.m"
                                    ll_backend__prog_rep__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep__V_154_154)) == (MR_mktag((MR_Integer) 1)));
#line 560 "prog_rep.m"
                                    if (ll_backend__prog_rep__succeeded)
#line 560 "prog_rep.m"
                                      {
#line 560 "prog_rep.m"
                                        ll_backend__prog_rep__OutputArgRep_120 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_154_154, (MR_Integer) 0)));
#line 560 "prog_rep.m"
                                        ll_backend__prog_rep__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_154_154, (MR_Integer) 1)));
#line 560 "prog_rep.m"
                                        ll_backend__prog_rep__succeeded = (ll_backend__prog_rep__V_155_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "prog_rep.m"
                                      }
#line 560 "prog_rep.m"
                                  }
#line 562 "prog_rep.m"
                                if (ll_backend__prog_rep__succeeded)
#line 561 "prog_rep.m"
                                  {
#line 561 "prog_rep.m"
                                    ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 561 "prog_rep.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 561 "prog_rep.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__OutputArgRep_120));
#line 561 "prog_rep.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 2) = ((MR_Box) (ll_backend__prog_rep__InputArgRep_119));
#line 561 "prog_rep.m"
                                  }
#line 562 "prog_rep.m"
                                else
#line 563 "prog_rep.m"
                                  {
#line 563 "prog_rep.m"
                                    {
#line 563 "prog_rep.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.goal_to_goal_rep\'/4", (MR_String) "cast arity != 2");
#line 563 "prog_rep.m"
                                      return;
                                    }
#line 563 "prog_rep.m"
                                  }
#line 562 "prog_rep.m"
                              }
#line 551 "prog_rep.m"
                            else
#line 551 "prog_rep.m"
                              if (((MR_tag((MR_Word) ll_backend__prog_rep__GenericCall_105)) == (MR_mktag((MR_Integer) 1))))
#line 552 "prog_rep.m"
                                {
#line 552 "prog_rep.m"
                                  MR_Integer ll_backend__prog_rep__Num_114 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_105, (MR_Integer) 1)));
#line 552 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_105, (MR_Integer) 0)));
#line 552 "prog_rep.m"
                                  MR_Integer ll_backend__prog_rep__VarRep_189;
#line 552 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_105, (MR_Integer) 2)));
#line 552 "prog_rep.m"
                                  MR_Word ll_backend__prog_rep__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__GenericCall_105, (MR_Integer) 3)));

#line 553 "prog_rep.m"
                                  {
#line 553 "prog_rep.m"
                                    ll_backend__prog_rep__VarRep_189 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__Var_188);
                                  }
#line 554 "prog_rep.m"
                                  {
#line 554 "prog_rep.m"
                                    ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 554 "prog_rep.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 554 "prog_rep.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__VarRep_189));
#line 554 "prog_rep.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 2) = ((MR_Box) (ll_backend__prog_rep__Num_114));
#line 554 "prog_rep.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 3) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
#line 554 "prog_rep.m"
                                  }
#line 552 "prog_rep.m"
                                }
#line 551 "prog_rep.m"
                              else
#line 551 "prog_rep.m"
                                if (((MR_tag((MR_Word) ll_backend__prog_rep__GenericCall_105)) == (MR_mktag((MR_Integer) 2))))
#line 556 "prog_rep.m"
                                  {
#line 556 "prog_rep.m"
                                    MR_String ll_backend__prog_rep__EventName_117 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep__GenericCall_105, (MR_Integer) 0)));

#line 557 "prog_rep.m"
                                    {
#line 557 "prog_rep.m"
                                      ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 557 "prog_rep.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 557 "prog_rep.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__EventName_117));
#line 557 "prog_rep.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
#line 557 "prog_rep.m"
                                    }
#line 556 "prog_rep.m"
                                  }
#line 551 "prog_rep.m"
                                else
#line 548 "prog_rep.m"
                                  {
#line 548 "prog_rep.m"
                                    MR_Word ll_backend__prog_rep__PredVar_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_105, (MR_Integer) 0)));
#line 548 "prog_rep.m"
                                    MR_Integer ll_backend__prog_rep__PredVarRep_113;
#line 548 "prog_rep.m"
                                    MR_Word ll_backend__prog_rep__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_105, (MR_Integer) 1)));
#line 548 "prog_rep.m"
                                    MR_Word ll_backend__prog_rep__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_105, (MR_Integer) 2)));
#line 548 "prog_rep.m"
                                    MR_Integer ll_backend__prog_rep__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__GenericCall_105, (MR_Integer) 3)));

#line 549 "prog_rep.m"
                                    {
#line 549 "prog_rep.m"
                                      ll_backend__prog_rep__PredVarRep_113 = ll_backend__prog_rep__var_to_var_rep_2_f_0(ll_backend__prog_rep__Info_5, ll_backend__prog_rep__PredVar_109);
                                    }
#line 550 "prog_rep.m"
                                    {
#line 550 "prog_rep.m"
                                      ll_backend__prog_rep__AtomicGoalRep_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 550 "prog_rep.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 550 "prog_rep.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 1) = ((MR_Box) (ll_backend__prog_rep__PredVarRep_113));
#line 550 "prog_rep.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__AtomicGoalRep_73, 2) = ((MR_Box) (ll_backend__prog_rep__ArgsRep_195));
#line 550 "prog_rep.m"
                                    }
#line 548 "prog_rep.m"
                                  }
#line 545 "prog_rep.m"
                          }
#line 591 "prog_rep.m"
                    {
#line 591 "prog_rep.m"
                      ll_backend__prog_rep__V_170_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 591 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_170_170, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[1]));
#line 591 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_170_170, 1) = ((MR_Box) (ll_backend__prog_rep__goal_to_goal_rep_4_p_0_14));
#line 591 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_170_170, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 591 "prog_rep.m"
                      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_170_170, 3) = ((MR_Box) (ll_backend__prog_rep__Info_5));
#line 591 "prog_rep.m"
                    }
#line 591 "prog_rep.m"
                    {
#line 591 "prog_rep.m"
                      ll_backend__prog_rep__BoundVarsRep_139 = mercury__list__map_2_f_0((MR_Word) &ll_backend__prog_rep_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep__V_170_170, ll_backend__prog_rep__BoundVars_99);
                    }
#line 592 "prog_rep.m"
                    {
#line 592 "prog_rep.m"
                      ll_backend__prog_rep__GoalExprRep_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 592 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 592 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 1) = ((MR_Box) (ll_backend__prog_rep__FileName_137));
#line 592 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 2) = ((MR_Box) (ll_backend__prog_rep__LineNo_138));
#line 592 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 3) = ((MR_Box) (ll_backend__prog_rep__BoundVarsRep_139));
#line 592 "prog_rep.m"
                      MR_hl_field(MR_mktag(3), ll_backend__prog_rep__GoalExprRep_12, 4) = ((MR_Box) (ll_backend__prog_rep__AtomicGoalRep_73));
#line 592 "prog_rep.m"
                    }
#line 499 "prog_rep.m"
                  }
#line 435 "prog_rep.m"
    {
#line 435 "prog_rep.m"
      MR_Word base;
#line 435 "prog_rep.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 435 "prog_rep.m"
      *ll_backend__prog_rep__GoalRep_9 = base;
#line 435 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep__GoalExprRep_12));
#line 435 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep__DetismRep_11));
#line 435 "prog_rep.m"
      MR_hl_field(MR_mktag(0), base, 2) = NULL;
#line 435 "prog_rep.m"
    }
#line 432 "prog_rep.m"
  }
#line 80 "prog_rep.m"
}

#line 970 "prog_rep.m"
static MR_Box MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1(
#line 970 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 970 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1)
#line 970 "prog_rep.m"
{
#line 970 "prog_rep.m"
  {
#line 970 "prog_rep.m"
    MR_Box ll_backend__prog_rep__wrapper_arg_2;
#line 970 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 970 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_Bytes_10;

#line 970 "prog_rep.m"
    {
#line 970 "prog_rep.m"
      ll_backend__prog_rep__conv0_Bytes_10 = ll_backend__prog_rep__encode_head_var_func_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1));
    }
#line 970 "prog_rep.m"
    ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_Bytes_10));
#line 970 "prog_rep.m"
    return ll_backend__prog_rep__wrapper_arg_2;
#line 970 "prog_rep.m"
  }
#line 970 "prog_rep.m"
}

#line 58 "prog_rep.m"
void MR_CALL 
ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0(
#line 58 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVars_15,
#line 58 "prog_rep.m"
  MR_Word ll_backend__prog_rep__Goal_16,
#line 58 "prog_rep.m"
  MR_Word ll_backend__prog_rep__InstMap0_17,
#line 58 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarTypes_18,
#line 58 "prog_rep.m"
  MR_Word ll_backend__prog_rep__VarNumMap_19,
#line 58 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ModuleInfo_20,
#line 58 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarNameTable_21,
#line 58 "prog_rep.m"
  MR_Word ll_backend__prog_rep__IncludeVarTypes_22,
#line 58 "prog_rep.m"
  MR_Word ll_backend__prog_rep__ProcDetism_23,
#line 58 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_40,
#line 58 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_StringTable_41,
#line 58 "prog_rep.m"
  MR_Word ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_42,
#line 58 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__STATE_VARIABLE_TypeTable_43,
#line 58 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__ProcRepBytes_26)
#line 58 "prog_rep.m"
{
#line 233 "prog_rep.m"
  {
#line 233 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_58_58;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeCtorInfo_14_83;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__TypeInfo_15_84;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Goal_16, (MR_Integer) 1)));
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Context_29;
#line 233 "prog_rep.m"
    MR_String ll_backend__prog_rep__FileName_30;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarNumRep_31;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__VarNameTableBytes_32;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__Info_33;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__InstmapDelta_34;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__FileNameBytes_35;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalBytes_36;
#line 233 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__DetismByte_37;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__ProcRepBytes0_38;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__LimitBytes_39;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_44_44;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__STATE_VARIABLE_StringTable_47_47;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_49_49;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_50_50;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_51_51;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_52_52;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_53_53;
#line 233 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_55_55;
#line 233 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_56_56;
#line 233 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__Index_64;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__GoalRep_73;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_79_79;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_80_80;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_81_81;
#line 233 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_82_82;
#line 233 "prog_rep.m"
    MR_Integer ll_backend__prog_rep__V_90_90;
#line 234 "prog_rep.m"
    MR_Word ll_backend__prog_rep__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Goal_16, (MR_Integer) 0)));

#line 235 "prog_rep.m"
    {
#line 235 "prog_rep.m"
      ll_backend__prog_rep__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__prog_rep__GoalInfo_28);
    }
#line 236 "prog_rep.m"
    {
#line 236 "prog_rep.m"
      mercury__term__context_file_2_p_0(ll_backend__prog_rep__Context_29, &ll_backend__prog_rep__FileName_30);
    }
#line 237 "prog_rep.m"
    {
#line 237 "prog_rep.m"
      ll_backend__prog_rep__represent_var_table_as_bytecode_10_p_0(ll_backend__prog_rep__IncludeVarNameTable_21, ll_backend__prog_rep__IncludeVarTypes_22, ll_backend__prog_rep__VarTypes_18, ll_backend__prog_rep__VarNumMap_19, &ll_backend__prog_rep__VarNumRep_31, &ll_backend__prog_rep__VarNameTableBytes_32, ll_backend__prog_rep__STATE_VARIABLE_StringTable_0_40, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_44_44, ll_backend__prog_rep__STATE_VARIABLE_TypeTable_0_42, ll_backend__prog_rep__STATE_VARIABLE_TypeTable_43);
    }
#line 240 "prog_rep.m"
    {
#line 240 "prog_rep.m"
      ll_backend__prog_rep__Info_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 240 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 0) = ((MR_Box) (ll_backend__prog_rep__FileName_30));
#line 240 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 1) = ((MR_Box) (ll_backend__prog_rep__VarTypes_18));
#line 240 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 2) = ((MR_Box) (ll_backend__prog_rep__VarNumMap_19));
#line 240 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 3) = ((MR_Box) (ll_backend__prog_rep__VarNumRep_31));
#line 240 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 4) = ((MR_Box) (ll_backend__prog_rep__ModuleInfo_20));
#line 240 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Info_33, 5) = ((MR_Box) ((MR_Integer) 1));
#line 240 "prog_rep.m"
    }
#line 242 "prog_rep.m"
    {
#line 242 "prog_rep.m"
      ll_backend__prog_rep__InstmapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__prog_rep__GoalInfo_28);
    }
#line 908 "prog_rep.m"
    {
#line 908 "prog_rep.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep__FileName_30, &ll_backend__prog_rep__Index_64, ll_backend__prog_rep__STATE_VARIABLE_StringTable_44_44, &ll_backend__prog_rep__STATE_VARIABLE_StringTable_47_47);
    }
#line 909 "prog_rep.m"
    {
#line 909 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__Index_64, &ll_backend__prog_rep__FileNameBytes_35);
    }
#line 429 "prog_rep.m"
    {
#line 429 "prog_rep.m"
      ll_backend__prog_rep__goal_to_goal_rep_4_p_0(ll_backend__prog_rep__Info_33, ll_backend__prog_rep__InstMap0_17, ll_backend__prog_rep__Goal_16, &ll_backend__prog_rep__GoalRep_73);
    }
#line 430 "prog_rep.m"
    {
#line 430 "prog_rep.m"
      ll_backend__prog_rep__encode_goal_rep_5_p_0(ll_backend__prog_rep__Info_33, ll_backend__prog_rep__GoalRep_73, &ll_backend__prog_rep__GoalBytes_36, ll_backend__prog_rep__STATE_VARIABLE_StringTable_47_47, ll_backend__prog_rep__STATE_VARIABLE_StringTable_41);
    }
#line 246 "prog_rep.m"
    {
#line 246 "prog_rep.m"
      ll_backend__prog_rep__DetismByte_37 = hlds__code_model__represent_determinism_1_f_0(ll_backend__prog_rep__ProcDetism_23);
    }
#line 10227 "ll_backend.prog_rep.c"
    ll_backend__prog_rep__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 10229 "ll_backend.prog_rep.c"
    ll_backend__prog_rep__TypeCtorInfo_14_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 10231 "ll_backend.prog_rep.c"
    ll_backend__prog_rep__TypeInfo_15_84 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[3];
#line 1011 "prog_rep.m"
    {
#line 1011 "prog_rep.m"
      ll_backend__prog_rep__V_90_90 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeInfo_15_84, ll_backend__prog_rep__HeadVars_15);
    }
#line 1011 "prog_rep.m"
    {
#line 1011 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_90_90, &ll_backend__prog_rep__V_79_79);
    }
#line 970 "prog_rep.m"
    {
#line 970 "prog_rep.m"
      ll_backend__prog_rep__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 970 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_4[0]));
#line 970 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 1) = ((MR_Box) (ll_backend__prog_rep__represent_proc_as_bytecodes_14_p_0_1));
#line 970 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 970 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 3) = ((MR_Box) (ll_backend__prog_rep__Info_33));
#line 970 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 4) = ((MR_Box) (ll_backend__prog_rep__InstMap0_17));
#line 970 "prog_rep.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_82_82, 5) = ((MR_Box) (ll_backend__prog_rep__InstmapDelta_34));
#line 970 "prog_rep.m"
    }
#line 970 "prog_rep.m"
    {
#line 970 "prog_rep.m"
      ll_backend__prog_rep__V_81_81 = mercury__list__map_2_f_0(ll_backend__prog_rep__TypeInfo_15_84, (MR_Word) &ll_backend__prog_rep_scalar_common_1[6], ll_backend__prog_rep__V_82_82, ll_backend__prog_rep__HeadVars_15);
    }
#line 969 "prog_rep.m"
    {
#line 969 "prog_rep.m"
      ll_backend__prog_rep__V_80_80 = mercury__list__condense_1_f_0(ll_backend__prog_rep__TypeCtorInfo_14_83, ll_backend__prog_rep__V_81_81);
    }
#line 968 "prog_rep.m"
    {
#line 968 "prog_rep.m"
      ll_backend__prog_rep__V_51_51 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_14_83, ll_backend__prog_rep__V_79_79, ll_backend__prog_rep__V_80_80);
    }
#line 249 "prog_rep.m"
    {
#line 249 "prog_rep.m"
      ll_backend__prog_rep__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_53_53, 0) = ((MR_Box) (ll_backend__prog_rep__DetismByte_37));
#line 249 "prog_rep.m"
      MR_hl_field(MR_mktag(1), ll_backend__prog_rep__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 249 "prog_rep.m"
    }
#line 248 "prog_rep.m"
    {
#line 248 "prog_rep.m"
      ll_backend__prog_rep__V_52_52 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__GoalBytes_36, ll_backend__prog_rep__V_53_53);
    }
#line 247 "prog_rep.m"
    {
#line 247 "prog_rep.m"
      ll_backend__prog_rep__V_50_50 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__V_51_51, ll_backend__prog_rep__V_52_52);
    }
#line 247 "prog_rep.m"
    {
#line 247 "prog_rep.m"
      ll_backend__prog_rep__V_49_49 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__VarNameTableBytes_32, ll_backend__prog_rep__V_50_50);
    }
#line 247 "prog_rep.m"
    {
#line 247 "prog_rep.m"
      ll_backend__prog_rep__ProcRepBytes0_38 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__FileNameBytes_35, ll_backend__prog_rep__V_49_49);
    }
#line 250 "prog_rep.m"
    {
#line 250 "prog_rep.m"
      ll_backend__prog_rep__V_56_56 = mercury__list__length_1_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__ProcRepBytes0_38);
    }
#line 250 "prog_rep.m"
    ll_backend__prog_rep__V_55_55 = (ll_backend__prog_rep__V_56_56 + (MR_Integer) 4);
#line 250 "prog_rep.m"
    {
#line 250 "prog_rep.m"
      mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep__V_55_55, &ll_backend__prog_rep__LimitBytes_39);
    }
#line 251 "prog_rep.m"
    {
#line 251 "prog_rep.m"
      *ll_backend__prog_rep__ProcRepBytes_26 = mercury__list__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_58_58, ll_backend__prog_rep__LimitBytes_39, ll_backend__prog_rep__ProcRepBytes0_38);
    }
#line 233 "prog_rep.m"
  }
#line 58 "prog_rep.m"
}

#line 135 "prog_rep.m"
static void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1(
#line 135 "prog_rep.m"
  MR_Box ll_backend__prog_rep__closure_arg,
#line 135 "prog_rep.m"
  MR_Box ll_backend__prog_rep__wrapper_arg_1,
#line 135 "prog_rep.m"
  MR_Box * ll_backend__prog_rep__wrapper_arg_2)
#line 135 "prog_rep.m"
{
#line 135 "prog_rep.m"
  {
#line 135 "prog_rep.m"
    MR_Box ll_backend__prog_rep__closure = ll_backend__prog_rep__closure_arg;
#line 135 "prog_rep.m"
    MR_Word ll_backend__prog_rep__conv0_BytesCord_6;

#line 135 "prog_rep.m"
    {
#line 135 "prog_rep.m"
      ll_backend__prog_rep__encode_oisu_proc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__prog_rep__wrapper_arg_1), &ll_backend__prog_rep__conv0_BytesCord_6);
    }
#line 135 "prog_rep.m"
    *ll_backend__prog_rep__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep__conv0_BytesCord_6));
#line 135 "prog_rep.m"
  }
#line 135 "prog_rep.m"
}

#line 53 "prog_rep.m"
void MR_CALL 
ll_backend__prog_rep__encode_oisu_type_procs_4_p_0(
#line 53 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__1_1,
#line 53 "prog_rep.m"
  MR_Word ll_backend__prog_rep__HeadVar__2_2,
#line 53 "prog_rep.m"
  MR_Integer * ll_backend__prog_rep__HeadVar__3_3,
#line 53 "prog_rep.m"
  MR_Word * ll_backend__prog_rep__HeadVar__4_4)
#line 53 "prog_rep.m"
{
#line 113 "prog_rep.m"
  {
#line 113 "prog_rep.m"
    MR_bool ll_backend__prog_rep__succeeded;

#line 113 "prog_rep.m"
    if ((ll_backend__prog_rep__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 113 "prog_rep.m"
      {
#line 113 "prog_rep.m"
        *ll_backend__prog_rep__HeadVar__3_3 = (MR_Integer) 0;
#line 113 "prog_rep.m"
        {
#line 113 "prog_rep.m"
          *ll_backend__prog_rep__HeadVar__4_4 = mercury__cord__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
#line 113 "prog_rep.m"
      }
#line 113 "prog_rep.m"
    else
#line 114 "prog_rep.m"
      {
#line 114 "prog_rep.m"
        MR_Word ll_backend__prog_rep__Pair_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 0)));
#line 114 "prog_rep.m"
        MR_Word ll_backend__prog_rep__Pairs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__HeadVar__2_2, (MR_Integer) 1)));
#line 114 "prog_rep.m"
        MR_Integer ll_backend__prog_rep__TailNumOISUTypes_11;
#line 114 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TailBytes_12;
#line 114 "prog_rep.m"
        MR_Word ll_backend__prog_rep__ModuleName_13;
#line 114 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TypeCtor_14;
#line 114 "prog_rep.m"
        MR_Word ll_backend__prog_rep__Preds_15;
#line 114 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TypeCtorSymName_16;
#line 114 "prog_rep.m"
        MR_Word ll_backend__prog_rep__TypeCtorModuleName_18;
#line 114 "prog_rep.m"
        MR_String ll_backend__prog_rep__TypeCtorName_19;
#line 118 "prog_rep.m"
        MR_Integer ll_backend__prog_rep___TypeCtorArity_17;

#line 115 "prog_rep.m"
        {
#line 115 "prog_rep.m"
          ll_backend__prog_rep__encode_oisu_type_procs_4_p_0(ll_backend__prog_rep__HeadVar__1_1, ll_backend__prog_rep__Pairs_8, &ll_backend__prog_rep__TailNumOISUTypes_11, &ll_backend__prog_rep__TailBytes_12);
        }
#line 116 "prog_rep.m"
        {
#line 116 "prog_rep.m"
          hlds__hlds_module__module_info_get_name_2_p_0(ll_backend__prog_rep__HeadVar__1_1, &ll_backend__prog_rep__ModuleName_13);
        }
#line 117 "prog_rep.m"
        ll_backend__prog_rep__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Pair_7, (MR_Integer) 0)));
#line 117 "prog_rep.m"
        ll_backend__prog_rep__Preds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Pair_7, (MR_Integer) 1)));
#line 118 "prog_rep.m"
        ll_backend__prog_rep__TypeCtorSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__TypeCtor_14, (MR_Integer) 0)));
#line 118 "prog_rep.m"
        ll_backend__prog_rep___TypeCtorArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__TypeCtor_14, (MR_Integer) 1)));
#line 121 "prog_rep.m"
        if (((MR_tag((MR_Word) ll_backend__prog_rep__TypeCtorSymName_16)) == (MR_mktag((MR_Integer) 1))))
#line 120 "prog_rep.m"
          {
#line 120 "prog_rep.m"
            ll_backend__prog_rep__TypeCtorModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__TypeCtorSymName_16, (MR_Integer) 0)));
#line 120 "prog_rep.m"
            ll_backend__prog_rep__TypeCtorName_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep__TypeCtorSymName_16, (MR_Integer) 1)));
#line 120 "prog_rep.m"
          }
#line 121 "prog_rep.m"
        else
#line 122 "prog_rep.m"
          {
#line 123 "prog_rep.m"
            {
#line 123 "prog_rep.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep", (MR_String) "predicate \140ll_backend.prog_rep.encode_oisu_type_procs\'/4", (MR_String) "unqualified type_ctor name");
#line 123 "prog_rep.m"
              return;
            }
#line 122 "prog_rep.m"
          }
#line 125 "prog_rep.m"
        {
#line 125 "prog_rep.m"
          ll_backend__prog_rep__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__prog_rep__TypeCtorModuleName_18, ll_backend__prog_rep__ModuleName_13);
        }
#line 152 "prog_rep.m"
        if (ll_backend__prog_rep__succeeded)
#line 126 "prog_rep.m"
          {
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtorInfo_55_55;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeInfo_58_58;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtorInfo_63_63;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__TypeCtorNameBytes_21;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__CreatorPreds_22;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__MutatorPreds_23;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DestructorPreds_24;
#line 126 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__NumCreatorPreds_25;
#line 126 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__NumMutatorPreds_26;
#line 126 "prog_rep.m"
            MR_Integer ll_backend__prog_rep__NumDestructorPreds_27;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__NumCreatorPredsBytes_28;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__NumMutatorPredsBytes_29;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__NumDestructorPredsBytes_30;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__CreatorPredBytes_31;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__MutatorPredBytes_32;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__DestructorPredBytes_33;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__HeadBytes_34;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_38_38;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_41_41;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_42_42;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_43_43;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_44_44;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_45_45;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_46_46;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_47_47;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_48_48;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_49_49;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_50_50;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_51_51;
#line 126 "prog_rep.m"
            MR_Word ll_backend__prog_rep__V_52_52;

#line 126 "prog_rep.m"
            {
#line 126 "prog_rep.m"
              mdbcomp__rtti_access__encode_len_string_2_p_0(ll_backend__prog_rep__TypeCtorName_19, &ll_backend__prog_rep__TypeCtorNameBytes_21);
            }
#line 127 "prog_rep.m"
            ll_backend__prog_rep__CreatorPreds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Preds_15, (MR_Integer) 0)));
#line 127 "prog_rep.m"
            ll_backend__prog_rep__MutatorPreds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Preds_15, (MR_Integer) 1)));
#line 127 "prog_rep.m"
            ll_backend__prog_rep__DestructorPreds_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep__Preds_15, (MR_Integer) 2)));
#line 10538 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 129 "prog_rep.m"
            {
#line 129 "prog_rep.m"
              mercury__list__length_2_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__CreatorPreds_22, &ll_backend__prog_rep__NumCreatorPreds_25);
            }
#line 130 "prog_rep.m"
            {
#line 130 "prog_rep.m"
              mercury__list__length_2_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__MutatorPreds_23, &ll_backend__prog_rep__NumMutatorPreds_26);
            }
#line 131 "prog_rep.m"
            {
#line 131 "prog_rep.m"
              mercury__list__length_2_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__DestructorPreds_24, &ll_backend__prog_rep__NumDestructorPreds_27);
            }
#line 132 "prog_rep.m"
            {
#line 132 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__NumCreatorPreds_25, &ll_backend__prog_rep__NumCreatorPredsBytes_28);
            }
#line 133 "prog_rep.m"
            {
#line 133 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__NumMutatorPreds_26, &ll_backend__prog_rep__NumMutatorPredsBytes_29);
            }
#line 134 "prog_rep.m"
            {
#line 134 "prog_rep.m"
              mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep__NumDestructorPreds_27, &ll_backend__prog_rep__NumDestructorPredsBytes_30);
            }
#line 135 "prog_rep.m"
            {
#line 135 "prog_rep.m"
              ll_backend__prog_rep__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 135 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 0) = ((MR_Box) (&ll_backend__prog_rep_scalar_common_3[0]));
#line 135 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 1) = ((MR_Box) (ll_backend__prog_rep__encode_oisu_type_procs_4_p_0_1));
#line 135 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 135 "prog_rep.m"
              MR_hl_field(MR_mktag(0), ll_backend__prog_rep__V_38_38, 3) = ((MR_Box) (ll_backend__prog_rep__HeadVar__1_1));
#line 135 "prog_rep.m"
            }
#line 10584 "ll_backend.prog_rep.c"
            ll_backend__prog_rep__TypeInfo_58_58 = (MR_Word) &ll_backend__prog_rep_scalar_common_1[0];
#line 135 "prog_rep.m"
            {
#line 135 "prog_rep.m"
              mercury__list__map_3_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__V_38_38, ll_backend__prog_rep__CreatorPreds_22, &ll_backend__prog_rep__CreatorPredBytes_31);
            }
#line 137 "prog_rep.m"
            {
#line 137 "prog_rep.m"
              mercury__list__map_3_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__V_38_38, ll_backend__prog_rep__MutatorPreds_23, &ll_backend__prog_rep__MutatorPredBytes_32);
            }
#line 139 "prog_rep.m"
            {
#line 139 "prog_rep.m"
              mercury__list__map_3_p_0(ll_backend__prog_rep__TypeCtorInfo_55_55, ll_backend__prog_rep__TypeInfo_58_58, ll_backend__prog_rep__V_38_38, ll_backend__prog_rep__DestructorPreds_24, &ll_backend__prog_rep__DestructorPredBytes_33);
            }
#line 10601 "ll_backend.prog_rep.c"
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
#line 148 "prog_rep.m"
            {
#line 148 "prog_rep.m"
              ll_backend__prog_rep__V_52_52 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__DestructorPredBytes_33);
            }
#line 147 "prog_rep.m"
            {
#line 147 "prog_rep.m"
              ll_backend__prog_rep__V_50_50 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_51_51, ll_backend__prog_rep__V_52_52);
            }
#line 146 "prog_rep.m"
            {
#line 146 "prog_rep.m"
              ll_backend__prog_rep__V_48_48 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_49_49, ll_backend__prog_rep__V_50_50);
            }
#line 145 "prog_rep.m"
            {
#line 145 "prog_rep.m"
              ll_backend__prog_rep__V_46_46 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_47_47, ll_backend__prog_rep__V_48_48);
            }
#line 144 "prog_rep.m"
            {
#line 144 "prog_rep.m"
              ll_backend__prog_rep__V_44_44 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_45_45, ll_backend__prog_rep__V_46_46);
            }
#line 143 "prog_rep.m"
            {
#line 143 "prog_rep.m"
              ll_backend__prog_rep__V_42_42 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_43_43, ll_backend__prog_rep__V_44_44);
            }
#line 142 "prog_rep.m"
            {
#line 142 "prog_rep.m"
              ll_backend__prog_rep__HeadBytes_34 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__V_41_41, ll_backend__prog_rep__V_42_42);
            }
#line 150 "prog_rep.m"
            *ll_backend__prog_rep__HeadVar__3_3 = ((MR_Integer) 1 + ll_backend__prog_rep__TailNumOISUTypes_11);
#line 151 "prog_rep.m"
            {
#line 151 "prog_rep.m"
              *ll_backend__prog_rep__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep__TypeCtorInfo_63_63, ll_backend__prog_rep__HeadBytes_34, ll_backend__prog_rep__TailBytes_12);
            }
#line 126 "prog_rep.m"
          }
#line 152 "prog_rep.m"
        else
#line 153 "prog_rep.m"
          {
#line 153 "prog_rep.m"
            *ll_backend__prog_rep__HeadVar__3_3 = ll_backend__prog_rep__TailNumOISUTypes_11;
#line 154 "prog_rep.m"
            *ll_backend__prog_rep__HeadVar__4_4 = ll_backend__prog_rep__TailBytes_12;
#line 153 "prog_rep.m"
          }
#line 114 "prog_rep.m"
      }
#line 113 "prog_rep.m"
  }
#line 53 "prog_rep.m"
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
