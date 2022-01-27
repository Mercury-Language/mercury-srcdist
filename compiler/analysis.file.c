/*
** Automatically generated from `analysis.file.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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


/* :- module analysis.file. */
/* :- implementation. */

/*
INIT mercury__analysis__file__init
ENDINIT
*/

#include "analysis.file.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "parser.mih"
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
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.pickle.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 146 "analysis.file.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 149 "analysis.file.c"
static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 152 "analysis.file.c"
static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 155 "analysis.file.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

#line 158 "analysis.file.c"
static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 161 "analysis.file.c"
static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 164 "analysis.file.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

#line 167 "analysis.file.c"
static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 170 "analysis.file.c"
static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 173 "analysis.file.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 176 "analysis.file.c"
static const MR_FA_TypeInfo_Struct1 analysis__file__term__ti_term_1term__type_ctor_info_generic_0;

#line 179 "analysis.file.c"
static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 182 "analysis.file.c"
static const MR_VA_PseudoTypeInfo_Struct3 analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

#line 185 "analysis.file.c"
static const MR_VA_PseudoTypeInfo_Struct3 analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1;

#line 188 "analysis.file.c"
static const MR_VA_PseudoTypeInfo_Struct5 analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 191 "analysis.file.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__list__pti_list_1__pseudo_1;

#line 194 "analysis.file.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

#line 197 "analysis.file.c"
static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0;

#line 200 "analysis.file.c"
static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_value_ordered_dummy_answer_0[1];

#line 203 "analysis.file.c"
static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_name_ordered_dummy_answer_0[1];

#line 206 "analysis.file.c"
static const MR_Integer analysis__file__analysis__file__functor_number_map_dummy_answer_0[1];

#line 209 "analysis.file.c"
static const MR_Integer analysis__file__analysis__file__functor_number_map_invalid_analysis_file_0[1];

#line 212 "analysis.file.c"
static const MR_NotagFunctorDesc analysis__file__analysis__file__notag_functor_desc_invalid_analysis_file_0;

#line 215 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file____Unify____dummy_answer_0_0_10001(
#line 218 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 220 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2);

#line 223 "analysis.file.c"
static void MR_CALL 
analysis__file____Compare____dummy_answer_0_0_10001(
#line 226 "analysis.file.c"
  MR_Box * analysis__file__wrapper_arg_1,
#line 228 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 230 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3);

#line 233 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file____Unify____invalid_analysis_file_0_0_10001(
#line 236 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 238 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2);

#line 241 "analysis.file.c"
static void MR_CALL 
analysis__file____Compare____invalid_analysis_file_0_0_10001(
#line 244 "analysis.file.c"
  MR_Box * analysis__file__wrapper_arg_1,
#line 246 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 248 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3);

#line 251 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file____Unify____parse_entry_1_0_10001(
#line 254 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 256 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 258 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3);

#line 261 "analysis.file.c"
static void MR_CALL 
analysis__file____Compare____parse_entry_1_0_10001(
#line 264 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 266 "analysis.file.c"
  MR_Box * analysis__file__wrapper_arg_2,
#line 268 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3,
#line 270 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_4);

#line 273 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file____Unify____write_entry_1_0_10001(
#line 276 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 278 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 280 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3);

#line 283 "analysis.file.c"
static void MR_CALL 
analysis__file____Compare____write_entry_1_0_10001(
#line 286 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 288 "analysis.file.c"
  MR_Box * analysis__file__wrapper_arg_2,
#line 290 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3,
#line 292 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_4);

#line 295 "analysis.file.c"
static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 298 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 300 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1);

#line 303 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 306 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 308 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 310 "analysis.file.c"
  MR_Box * analysis__file__wrapper_arg_2);

#line 313 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 316 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 318 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 320 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 322 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3);

#line 325 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 328 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 330 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 332 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 334 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3);

#line 337 "analysis.file.c"
static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 340 "analysis.file.c"
  MR_Box analysis__file__closure_arg);

#line 343 "analysis.file.c"
static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 346 "analysis.file.c"
  MR_Box analysis__file__closure_arg);

#line 349 "analysis.file.c"
static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 352 "analysis.file.c"
  MR_Box analysis__file__closure_arg);

#line 355 "analysis.file.c"
static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 358 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 360 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1);

#line 363 "analysis.file.c"
static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0_10001(
#line 366 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 368 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1);

#line 371 "analysis.file.c"
static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 374 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 376 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 378 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 380 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3,
#line 382 "analysis.file.c"
  MR_Box * analysis__file__wrapper_arg_6);

#line 1040 "analysis.file.m"
static MR_Word MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void);

#line 1037 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void);

#line 1034 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void);

#line 1054 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0(void);

#line 1053 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1052 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1051 "analysis.file.m"
static MR_Word MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1050 "analysis.file.m"
static MR_Integer MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 1049 "analysis.file.m"
static MR_String MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 634 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(
#line 634 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__3_3);

#line 634 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__1_1,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2);

#line 193 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(
#line 193 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__3_3);

#line 193 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__1_1,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2);

#line 1029 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 1029 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1);

#line 1029 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

#line 1006 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_112_105_99_107_108_101_95_97_110_97_108_121_115_105_115_95_114_101_115_117_108_116_95_95_91_53_93_95_48_7_p_0(
#line 1006 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_35,
#line 1006 "analysis.file.m"
  MR_Box analysis__file__Compiler_8,
#line 1006 "analysis.file.m"
  MR_Word analysis__file__Unpicklers_9,
#line 1006 "analysis.file.m"
  MR_Box analysis__file__Handle_10,
#line 1006 "analysis.file.m"
  MR_Word * analysis__file__Univ_12,
#line 1006 "analysis.file.m"
  MR_Integer analysis__file__STATE_VARIABLE_State_0_21,
#line 1006 "analysis.file.m"
  MR_Integer * analysis__file__STATE_VARIABLE_State_22);

#line 612 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_50_95_95_91_49_93_95_48_5_p_0(
#line 612 "analysis.file.m"
  MR_Word analysis__file__ParseEntry_6,
#line 612 "analysis.file.m"
  MR_Box analysis__file__Results0_7,
#line 612 "analysis.file.m"
  MR_Box * analysis__file__Results_8);

#line 902 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_analysis_file_4__902__1_7_p_0(
#line 902 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_27,
#line 902 "analysis.file.m"
  MR_Word analysis__file__WriteEntry_7,
#line 902 "analysis.file.m"
  MR_String analysis__file__AnalysisName_8,
#line 902 "analysis.file.m"
  MR_Word analysis__file__FuncId_9,
#line 902 "analysis.file.m"
  MR_Box analysis__file__HeadVar__5_20);

#line 574 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__574__1_6_p_0(
#line 574 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_62,
#line 574 "analysis.file.m"
  MR_Word analysis__file__ParseEntry_8,
#line 574 "analysis.file.m"
  MR_Box analysis__file__ModuleResults0_9,
#line 574 "analysis.file.m"
  MR_Box * analysis__file__HeadVar__4_48);

#line 566 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__566__1_3_p_0(
#line 566 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_7);

#line 591 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__591__1_3_p_0(
#line 591 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_7);

#line 546 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__546__1_5_p_0(
#line 546 "analysis.file.m"
  MR_Word analysis__file__ModuleName_12,
#line 546 "analysis.file.m"
  MR_String analysis__file__Suffix_13,
#line 546 "analysis.file.m"
  MR_String analysis__file__Message_20);

#line 335 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__335__1_5_p_0(
#line 335 "analysis.file.m"
  MR_Word analysis__file__ModuleResults0_10,
#line 335 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_45,
#line 335 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__3_55);

#line 326 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__326__1_3_p_0(
#line 326 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_7);

#line 348 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__348__1_3_p_0(
#line 348 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_7);

#line 911 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__empty_request_file__911__1_3_p_0(
#line 911 "analysis.file.m"
  MR_String analysis__file__RequestFileName_10);

#line 714 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_requests__714__1_3_p_0(
#line 714 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_13);

#line 662 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_results__662__1_3_p_0(
#line 662 "analysis.file.m"
  MR_Word analysis__file__ModuleName_9);

#line 1043 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0(
#line 1043 "analysis.file.m"
  MR_Word analysis__file__Term_3);

#line 1040 "analysis.file.m"
static MR_Word MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0(void);

#line 1037 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0(void);

#line 1034 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0(void);

#line 1054 "analysis.file.m"
static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 1054 "analysis.file.m"
  MR_Word analysis__file__HeadVar__1_17,
#line 1054 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_18,
#line 1054 "analysis.file.m"
  MR_Word analysis__file__HeadVar__3_19);

#line 1053 "analysis.file.m"
static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0(void);

#line 1052 "analysis.file.m"
static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0(void);

#line 1051 "analysis.file.m"
static MR_Word MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void);

#line 1050 "analysis.file.m"
static MR_Integer MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0(void);

#line 1049 "analysis.file.m"
static MR_String MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0(void);

#line 634 "analysis.file.m"
static void MR_CALL 
analysis__file____Compare____write_entry_1_0(
#line 634 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_6,
#line 634 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__3_3);

#line 634 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file____Unify____write_entry_1_0(
#line 634 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_5,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__1_1,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2);

#line 193 "analysis.file.m"
static void MR_CALL 
analysis__file____Compare____parse_entry_1_0(
#line 193 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_6,
#line 193 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__3_3);

#line 193 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file____Unify____parse_entry_1_0(
#line 193 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_5,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__1_1,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2);

#line 155 "analysis.file.m"
static void MR_CALL 
analysis__file____Compare____invalid_analysis_file_0_0(
#line 155 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1,
#line 155 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2,
#line 155 "analysis.file.m"
  MR_Word analysis__file__HeadVar__3_3);

#line 155 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file____Unify____invalid_analysis_file_0_0(
#line 155 "analysis.file.m"
  MR_Word analysis__file__HeadVar__1_1,
#line 155 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2);

#line 1029 "analysis.file.m"
static void MR_CALL 
analysis__file____Compare____dummy_answer_0_0(
#line 1029 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1);

#line 1029 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file____Unify____dummy_answer_0_0(void);

#line 1006 "analysis.file.m"
static void MR_CALL 
analysis__file__unpickle_analysis_result_7_p_0(
#line 1006 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_35,
#line 1006 "analysis.file.m"
  MR_Box analysis__file__Compiler_8,
#line 1006 "analysis.file.m"
  MR_Word analysis__file__Unpicklers_9,
#line 1006 "analysis.file.m"
  MR_Box analysis__file__Handle_10,
#line 1006 "analysis.file.m"
  MR_Word analysis__file___Type_11,
#line 1006 "analysis.file.m"
  MR_Word * analysis__file__Univ_12,
#line 1006 "analysis.file.m"
  MR_Integer analysis__file__STATE_VARIABLE_State_0_21,
#line 1006 "analysis.file.m"
  MR_Integer * analysis__file__STATE_VARIABLE_State_22);

#line 983 "analysis.file.m"
static void MR_CALL 
analysis__file__pickle_analysis_result_4_p_0(
#line 983 "analysis.file.m"
  MR_Word analysis__file__Pickles_5,
#line 983 "analysis.file.m"
  MR_Word analysis__file__Univ_6);

#line 979 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_cache_file_4_p_0_1(
#line 979 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 979 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 979 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 979 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 979 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_4);

#line 943 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_cache_file_4_p_0(
#line 943 "analysis.file.m"
  MR_String analysis__file__CacheFileName_5,
#line 943 "analysis.file.m"
  MR_Word analysis__file__ModuleResults_6);

#line 938 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__dir_sep_1_p_0(
#line 938 "analysis.file.m"
  MR_Char analysis__file__Char_2);

#line 900 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_4_6_p_0_1(
#line 900 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 900 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 900 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 900 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_3);

#line 895 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_4_6_p_0(
#line 895 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_27,
#line 895 "analysis.file.m"
  MR_Word analysis__file__WriteEntry_7,
#line 895 "analysis.file.m"
  MR_String analysis__file__AnalysisName_8,
#line 895 "analysis.file.m"
  MR_Word analysis__file__FuncId_9,
#line 895 "analysis.file.m"
  MR_Word analysis__file__FuncResultList_10);

#line 892 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_3_5_p_0_1(
#line 892 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 892 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 892 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 892 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 892 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_4);

#line 888 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_3_5_p_0(
#line 888 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_14,
#line 888 "analysis.file.m"
  MR_Word analysis__file__WriteEntry_6,
#line 888 "analysis.file.m"
  MR_String analysis__file__AnalysisName_7,
#line 888 "analysis.file.m"
  MR_Word analysis__file__FuncResults_8);

#line 886 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_2_4_p_0_1(
#line 886 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 886 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_4);

#line 882 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_2_4_p_0(
#line 882 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_12,
#line 882 "analysis.file.m"
  MR_Word analysis__file__WriteEntry_5,
#line 882 "analysis.file.m"
  MR_Word analysis__file__ModuleResults_6);

#line 886 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_5_p_0_1(
#line 886 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 886 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_4);

#line 862 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_5_p_0(
#line 862 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_34,
#line 862 "analysis.file.m"
  MR_String analysis__file__FileName_6,
#line 862 "analysis.file.m"
  MR_Word analysis__file__WriteEntry_7,
#line 862 "analysis.file.m"
  MR_Word analysis__file__ModuleResults_8);

#line 886 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_10_p_0_1(
#line 886 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 886 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_4);

#line 844 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_10_p_0(
#line 844 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_27,
#line 844 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_26,
#line 844 "analysis.file.m"
  MR_Box analysis__file__Compiler_11,
#line 844 "analysis.file.m"
  MR_Word analysis__file__Globals_12,
#line 844 "analysis.file.m"
  MR_Word analysis__file__ModuleName_13,
#line 844 "analysis.file.m"
  MR_String analysis__file__Suffix_14,
#line 844 "analysis.file.m"
  MR_Word analysis__file__ToTmp_15,
#line 844 "analysis.file.m"
  MR_Word analysis__file__WriteEntry_16,
#line 844 "analysis.file.m"
  MR_Word analysis__file__ModuleResults_17,
#line 844 "analysis.file.m"
  MR_String * analysis__file__FileName_18);

#line 793 "analysis.file.m"
static void MR_CALL 
analysis__file__write_imdg_arc_6_p_0(
#line 793 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_47,
#line 793 "analysis.file.m"
  MR_Box analysis__file__Compiler_7,
#line 793 "analysis.file.m"
  MR_String analysis__file__AnalysisName_8,
#line 793 "analysis.file.m"
  MR_Word analysis__file__FuncId_9,
#line 793 "analysis.file.m"
  MR_Word analysis__file__Arc_10);

#line 761 "analysis.file.m"
static void MR_CALL 
analysis__file__write_request_entry_6_p_0(
#line 761 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_47,
#line 761 "analysis.file.m"
  MR_Box analysis__file__Compiler_7,
#line 761 "analysis.file.m"
  MR_String analysis__file__AnalysisName_8,
#line 761 "analysis.file.m"
  MR_Word analysis__file__FuncId_9,
#line 761 "analysis.file.m"
  MR_Word analysis__file__Request_10);

#line 686 "analysis.file.m"
static void MR_CALL 
analysis__file__write_result_entry_5_p_0(
#line 686 "analysis.file.m"
  MR_String analysis__file__AnalysisName_6,
#line 686 "analysis.file.m"
  MR_Word analysis__file__FuncId_7,
#line 686 "analysis.file.m"
  MR_Word analysis__file__Result_8);

#line 574 "analysis.file.m"
static void MR_CALL 
analysis__file__read_analysis_file_6_p_0_3(
#line 574 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 574 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_1,
#line 574 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 574 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_3);

#line 566 "analysis.file.m"
static void MR_CALL 
analysis__file__read_analysis_file_6_p_0_2(
#line 566 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 566 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 566 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2);

#line 591 "analysis.file.m"
static void MR_CALL 
analysis__file__read_analysis_file_6_p_0_1(
#line 591 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 591 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 591 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2);

#line 558 "analysis.file.m"
static void MR_CALL 
analysis__file__read_analysis_file_6_p_0(
#line 558 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_62,
#line 558 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_7,
#line 558 "analysis.file.m"
  MR_Word analysis__file__ParseEntry_8,
#line 558 "analysis.file.m"
  MR_Box analysis__file__ModuleResults0_9,
#line 558 "analysis.file.m"
  MR_Box * analysis__file__ModuleResults_10);

#line 508 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__parse_func_id_2_p_0(
#line 508 "analysis.file.m"
  MR_Word analysis__file__Term_3,
#line 508 "analysis.file.m"
  MR_Word * analysis__file__FuncId_4);

#line 461 "analysis.file.m"
static void MR_CALL 
analysis__file__parse_imdg_arc_4_p_0(
#line 461 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_59,
#line 461 "analysis.file.m"
  MR_Box analysis__file__Compiler_5,
#line 461 "analysis.file.m"
  MR_Word analysis__file__Term_6,
#line 461 "analysis.file.m"
  MR_Word analysis__file__STATE_VARIABLE_Arcs_0_34,
#line 461 "analysis.file.m"
  MR_Word * analysis__file__STATE_VARIABLE_Arcs_35);

#line 411 "analysis.file.m"
static void MR_CALL 
analysis__file__parse_request_entry_4_p_0(
#line 411 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_59,
#line 411 "analysis.file.m"
  MR_Box analysis__file__Compiler_5,
#line 411 "analysis.file.m"
  MR_Word analysis__file__Term_6,
#line 411 "analysis.file.m"
  MR_Word analysis__file__STATE_VARIABLE_Requests_0_34,
#line 411 "analysis.file.m"
  MR_Word * analysis__file__STATE_VARIABLE_Requests_35);

#line 356 "analysis.file.m"
static void MR_CALL 
analysis__file__parse_result_entry_4_p_0(
#line 356 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_61,
#line 356 "analysis.file.m"
  MR_Box analysis__file__Compiler_5,
#line 356 "analysis.file.m"
  MR_Word analysis__file__Term_6,
#line 356 "analysis.file.m"
  MR_Word analysis__file__STATE_VARIABLE_Results_0_36,
#line 356 "analysis.file.m"
  MR_Word * analysis__file__STATE_VARIABLE_Results_37);

#line 335 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_4(
#line 335 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 335 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_1,
#line 335 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 335 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_3);

#line 335 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_3(
#line 335 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 335 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 335 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 335 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_3);

#line 326 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_2(
#line 326 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 326 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 326 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2);

#line 348 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_1(
#line 348 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 348 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 348 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2);

#line 316 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0(
#line 316 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_52,
#line 316 "analysis.file.m"
  MR_Box analysis__file__Compiler_6,
#line 316 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_7,
#line 316 "analysis.file.m"
  MR_Word * analysis__file__ModuleResults_8);

#line 911 "analysis.file.m"
static void MR_CALL 
analysis__file__empty_request_file_5_p_0_1(
#line 911 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 911 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 911 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2);

#line 791 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_imdg_6_p_0_1(
#line 791 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 791 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 791 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 791 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 791 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_4,
#line 791 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_5);

#line 546 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_2(
#line 546 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 546 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 546 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2);

#line 459 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_1(
#line 459 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 459 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 459 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 459 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_3);

#line 755 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_5(
#line 755 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_4,
#line 755 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_5);

#line 737 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_4(
#line 737 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 737 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 737 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 737 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 737 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_4,
#line 737 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_5);

#line 755 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_3(
#line 755 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_4,
#line 755 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_5);

#line 755 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_2(
#line 755 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_4,
#line 755 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_5);

#line 714 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_1(
#line 714 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 714 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 714 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2);

#line 546 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_2(
#line 546 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 546 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 546 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2);

#line 408 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_1(
#line 408 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 408 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 408 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 408 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_3);

#line 934 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_3(
#line 934 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 934 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1);

#line 669 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_2(
#line 669 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 669 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 669 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 669 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 669 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_4,
#line 669 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_5);

#line 662 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_1(
#line 662 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 662 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 662 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2);

#line 1001 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_results_6_p_0_2(
#line 1001 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 1001 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 1001 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 1001 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 1001 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_4,
#line 1001 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_5,
#line 1001 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_6);

#line 934 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__read_module_analysis_results_6_p_0_1(
#line 934 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 934 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1);


static /* final */ const MR_Box analysis__file_scalar_common_1[5][2];

static /* final */ const MR_Box analysis__file_scalar_common_2[10][3];

static /* final */ const MR_Box analysis__file_scalar_common_3[1][4];

static /* final */ const MR_Integer analysis__file_scalar_common_4[2][2];

static /* final */ const MR_Box analysis__file_scalar_common_5[1][11];

static /* final */ const MR_Box analysis__file_scalar_common_6[2][6];

static /* final */ const MR_Box analysis__file_scalar_common_7[6][8];

static /* final */ const MR_Box analysis__file_scalar_common_8[4][10];

static /* final */ const MR_Box analysis__file_scalar_common_9[2][9];

static /* final */ const MR_Box analysis__file_scalar_common_10[1][7];

static /* final */ const MR_Box analysis__file_scalar_common_11[1][1];




static /* final */ const MR_Box analysis__file_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term_io__term_io__type_ctor_info_read_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_2[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file_scalar_common_1[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file_scalar_common_2[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&analysis__file_scalar_common_3[0])),
    ((MR_Box) (analysis__file__read_module_analysis_results_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&analysis__file_scalar_common_7[0])),
    ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&analysis__file_scalar_common_3[0])),
    ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&analysis__file_scalar_common_10[0])),
    ((MR_Box) (analysis__file__write_analysis_cache_file_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Integer analysis__file_scalar_common_4[2][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_5[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&libs__pickle__libs__pickle__type_ctor_info_unpicklers_0)),
    ((MR_Box) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_7[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_8[4][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__file__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_9[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&analysis__file_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__file__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_10[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__pickle__libs__pickle__type_ctor_info_picklers_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis__file_scalar_common_11[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "dummy"))
  },
};



#include "analysis.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"



#line 1666 "analysis.file.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1674 "analysis.file.c"
static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_request_0
  }
};

#line 1682 "analysis.file.c"
static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__file__list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 1691 "analysis.file.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

#line 1700 "analysis.file.c"
static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1708 "analysis.file.c"
static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__file__list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1717 "analysis.file.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

#line 1726 "analysis.file.c"
static const MR_FA_TypeInfo_Struct1 analysis__file__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1734 "analysis.file.c"
static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__file__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1743 "analysis.file.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1752 "analysis.file.c"
static const MR_FA_TypeInfo_Struct1 analysis__file__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1760 "analysis.file.c"
static const MR_FA_TypeInfo_Struct2 analysis__file__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__file__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1769 "analysis.file.c"
static const MR_VA_PseudoTypeInfo_Struct3 analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &analysis__file__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &analysis__file__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0,
    (MR_PseudoTypeInfo) &analysis__file__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

#line 1780 "analysis.file.c"
static const MR_VA_PseudoTypeInfo_Struct3 analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &analysis__file__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1791 "analysis.file.c"
static const MR_VA_PseudoTypeInfo_Struct5 analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1804 "analysis.file.c"
static const MR_FA_PseudoTypeInfo_Struct1 analysis__file__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1812 "analysis.file.c"
static const MR_FA_PseudoTypeInfo_Struct2 analysis__file__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__file__list__pti_list_1__pseudo_1
  }
};

#line 1821 "analysis.file.c"
static const MR_EnumFunctorDesc analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0 = {
  (MR_String) "dummy_answer",
  (MR_Integer) 0
};

#line 1827 "analysis.file.c"
static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_value_ordered_dummy_answer_0[1] = {
  &analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0
};

#line 1832 "analysis.file.c"
static const MR_EnumFunctorDescPtr analysis__file__analysis__file__enum_name_ordered_dummy_answer_0[1] = {
  &analysis__file__analysis__file__enum_functor_desc_dummy_answer_0_0
};

#line 1837 "analysis.file.c"
static const MR_Integer analysis__file__analysis__file__functor_number_map_dummy_answer_0[1] = {
  (MR_Integer) 0
};

#line 1842 "analysis.file.c"
const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_dummy_answer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis__file____Unify____dummy_answer_0_0_10001)),
  ((MR_Box) (analysis__file____Compare____dummy_answer_0_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "dummy_answer",
  {     analysis__file__analysis__file__enum_name_ordered_dummy_answer_0 },
  {     analysis__file__analysis__file__enum_value_ordered_dummy_answer_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__file__analysis__file__functor_number_map_dummy_answer_0
};

#line 1859 "analysis.file.c"
static const MR_Integer analysis__file__analysis__file__functor_number_map_invalid_analysis_file_0[1] = {
  (MR_Integer) 0
};

#line 1864 "analysis.file.c"
static const MR_NotagFunctorDesc analysis__file__analysis__file__notag_functor_desc_invalid_analysis_file_0 = {
  (MR_String) "invalid_analysis_file",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1871 "analysis.file.c"
const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (analysis__file____Unify____invalid_analysis_file_0_0_10001)),
  ((MR_Box) (analysis__file____Compare____invalid_analysis_file_0_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "invalid_analysis_file",
  {     &analysis__file__analysis__file__notag_functor_desc_invalid_analysis_file_0 },
  {     &analysis__file__analysis__file__notag_functor_desc_invalid_analysis_file_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__file__analysis__file__functor_number_map_invalid_analysis_file_0
};

#line 1888 "analysis.file.c"
const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_parse_entry_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis__file____Unify____parse_entry_1_0_10001)),
  ((MR_Box) (analysis__file____Compare____parse_entry_1_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "parse_entry",
  {     NULL },
  {     (MR_PseudoTypeInfo) &analysis__file____vpti_pred_3__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1905 "analysis.file.c"
const MR_TypeCtorInfo_Struct analysis__file__analysis__file__type_ctor_info_write_entry_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis__file____Unify____write_entry_1_0_10001)),
  ((MR_Box) (analysis__file____Compare____write_entry_1_0_10001)),
  (MR_String) "analysis.file",
  (MR_String) "write_entry",
  {     NULL },
  {     (MR_PseudoTypeInfo) &analysis__file____vpti_pred_5__plain_builtin__type_ctor_info_string_0__plain_analysis__type_ctor_info_func_id_0__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1922 "analysis.file.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__analysis__file__dummy_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0_10001))
};

#line 1933 "analysis.file.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0_10001))
};

#line 1944 "analysis.file.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__answer_pattern__arity2__analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 1953 "analysis.file.c"
const MR_BaseTypeclassInfo base_typeclass_info_analysis__analysis__arity3__analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0__[11] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 6)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0_10001)),
  ((MR_Box) (analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0_10001))
};

#line 1968 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file____Unify____dummy_answer_0_0_10001(
#line 1971 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 1973 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2)
#line 1975 "analysis.file.c"
{
#line 1977 "analysis.file.c"
  {
#line 1979 "analysis.file.c"
    MR_bool analysis__file__succeeded;

#line 1982 "analysis.file.c"
    {
#line 1984 "analysis.file.c"
      analysis__file__succeeded = analysis__file____Unify____dummy_answer_0_0();
    }
#line 1987 "analysis.file.c"
    return analysis__file__succeeded;
#line 1989 "analysis.file.c"
  }
#line 1991 "analysis.file.c"
}

#line 1994 "analysis.file.c"
static void MR_CALL 
analysis__file____Compare____dummy_answer_0_0_10001(
#line 1997 "analysis.file.c"
  MR_Box * analysis__file__wrapper_arg_1,
#line 1999 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 2001 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3)
#line 2003 "analysis.file.c"
{
#line 2005 "analysis.file.c"
  {
#line 2007 "analysis.file.c"
    MR_Word analysis__file__conv0_HeadVar__1_1;

#line 2010 "analysis.file.c"
    {
#line 2012 "analysis.file.c"
      analysis__file____Compare____dummy_answer_0_0(&analysis__file__conv0_HeadVar__1_1);
    }
#line 2015 "analysis.file.c"
    *analysis__file__wrapper_arg_1 = ((MR_Box) (analysis__file__conv0_HeadVar__1_1));
#line 2017 "analysis.file.c"
  }
#line 2019 "analysis.file.c"
}

#line 2022 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file____Unify____invalid_analysis_file_0_0_10001(
#line 2025 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 2027 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2)
#line 2029 "analysis.file.c"
{
#line 2031 "analysis.file.c"
  {
#line 2033 "analysis.file.c"
    MR_bool analysis__file__succeeded;

#line 2036 "analysis.file.c"
    {
#line 2038 "analysis.file.c"
      analysis__file__succeeded = analysis__file____Unify____invalid_analysis_file_0_0(((MR_Word) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2));
    }
#line 2041 "analysis.file.c"
    return analysis__file__succeeded;
#line 2043 "analysis.file.c"
  }
#line 2045 "analysis.file.c"
}

#line 2048 "analysis.file.c"
static void MR_CALL 
analysis__file____Compare____invalid_analysis_file_0_0_10001(
#line 2051 "analysis.file.c"
  MR_Box * analysis__file__wrapper_arg_1,
#line 2053 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 2055 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3)
#line 2057 "analysis.file.c"
{
#line 2059 "analysis.file.c"
  {
#line 2061 "analysis.file.c"
    MR_Word analysis__file__conv0_HeadVar__1_1;

#line 2064 "analysis.file.c"
    {
#line 2066 "analysis.file.c"
      analysis__file____Compare____invalid_analysis_file_0_0(&analysis__file__conv0_HeadVar__1_1, ((MR_Word) analysis__file__wrapper_arg_2), ((MR_Word) analysis__file__wrapper_arg_3));
    }
#line 2069 "analysis.file.c"
    *analysis__file__wrapper_arg_1 = ((MR_Box) (analysis__file__conv0_HeadVar__1_1));
#line 2071 "analysis.file.c"
  }
#line 2073 "analysis.file.c"
}

#line 2076 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file____Unify____parse_entry_1_0_10001(
#line 2079 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 2081 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 2083 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3)
#line 2085 "analysis.file.c"
{
#line 2087 "analysis.file.c"
  {
#line 2089 "analysis.file.c"
    MR_bool analysis__file__succeeded;

#line 2092 "analysis.file.c"
    {
#line 2094 "analysis.file.c"
      analysis__file__succeeded = analysis__file____Unify____parse_entry_1_0(((MR_Word) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2), ((MR_Word) analysis__file__wrapper_arg_3));
    }
#line 2097 "analysis.file.c"
    return analysis__file__succeeded;
#line 2099 "analysis.file.c"
  }
#line 2101 "analysis.file.c"
}

#line 2104 "analysis.file.c"
static void MR_CALL 
analysis__file____Compare____parse_entry_1_0_10001(
#line 2107 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 2109 "analysis.file.c"
  MR_Box * analysis__file__wrapper_arg_2,
#line 2111 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3,
#line 2113 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_4)
#line 2115 "analysis.file.c"
{
#line 2117 "analysis.file.c"
  {
#line 2119 "analysis.file.c"
    MR_Word analysis__file__conv0_HeadVar__1_1;

#line 2122 "analysis.file.c"
    {
#line 2124 "analysis.file.c"
      analysis__file____Compare____parse_entry_1_0(((MR_Word) analysis__file__wrapper_arg_1), &analysis__file__conv0_HeadVar__1_1, ((MR_Word) analysis__file__wrapper_arg_3), ((MR_Word) analysis__file__wrapper_arg_4));
    }
#line 2127 "analysis.file.c"
    *analysis__file__wrapper_arg_2 = ((MR_Box) (analysis__file__conv0_HeadVar__1_1));
#line 2129 "analysis.file.c"
  }
#line 2131 "analysis.file.c"
}

#line 2134 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file____Unify____write_entry_1_0_10001(
#line 2137 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 2139 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 2141 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3)
#line 2143 "analysis.file.c"
{
#line 2145 "analysis.file.c"
  {
#line 2147 "analysis.file.c"
    MR_bool analysis__file__succeeded;

#line 2150 "analysis.file.c"
    {
#line 2152 "analysis.file.c"
      analysis__file__succeeded = analysis__file____Unify____write_entry_1_0(((MR_Word) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2), ((MR_Word) analysis__file__wrapper_arg_3));
    }
#line 2155 "analysis.file.c"
    return analysis__file__succeeded;
#line 2157 "analysis.file.c"
  }
#line 2159 "analysis.file.c"
}

#line 2162 "analysis.file.c"
static void MR_CALL 
analysis__file____Compare____write_entry_1_0_10001(
#line 2165 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 2167 "analysis.file.c"
  MR_Box * analysis__file__wrapper_arg_2,
#line 2169 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3,
#line 2171 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_4)
#line 2173 "analysis.file.c"
{
#line 2175 "analysis.file.c"
  {
#line 2177 "analysis.file.c"
    MR_Word analysis__file__conv0_HeadVar__1_1;

#line 2180 "analysis.file.c"
    {
#line 2182 "analysis.file.c"
      analysis__file____Compare____write_entry_1_0(((MR_Word) analysis__file__wrapper_arg_1), &analysis__file__conv0_HeadVar__1_1, ((MR_Word) analysis__file__wrapper_arg_3), ((MR_Word) analysis__file__wrapper_arg_4));
    }
#line 2185 "analysis.file.c"
    *analysis__file__wrapper_arg_2 = ((MR_Box) (analysis__file__conv0_HeadVar__1_1));
#line 2187 "analysis.file.c"
  }
#line 2189 "analysis.file.c"
}

#line 2192 "analysis.file.c"
static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0_10001(
#line 2195 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 2197 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1)
#line 2199 "analysis.file.c"
{
#line 2201 "analysis.file.c"
  {
#line 2203 "analysis.file.c"
    MR_Box analysis__file__wrapper_arg_2;
#line 2205 "analysis.file.c"
    MR_Box analysis__file__closure;
#line 2207 "analysis.file.c"
    MR_Word analysis__file__conv0_Term_3;

#line 2210 "analysis.file.c"
    analysis__file__closure = analysis__file__closure_arg;
#line 2212 "analysis.file.c"
    {
#line 2214 "analysis.file.c"
      analysis__file__conv0_Term_3 = analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0();
    }
#line 2217 "analysis.file.c"
    analysis__file__wrapper_arg_2 = ((MR_Box) (analysis__file__conv0_Term_3));
#line 2219 "analysis.file.c"
    return analysis__file__wrapper_arg_2;
#line 2221 "analysis.file.c"
  }
#line 2223 "analysis.file.c"
}

#line 2226 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0_10001(
#line 2229 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 2231 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 2233 "analysis.file.c"
  MR_Box * analysis__file__wrapper_arg_2)
#line 2235 "analysis.file.c"
{
#line 2237 "analysis.file.c"
  {
#line 2239 "analysis.file.c"
    MR_bool analysis__file__succeeded;
#line 2241 "analysis.file.c"
    MR_Box analysis__file__closure;

#line 2244 "analysis.file.c"
    analysis__file__closure = analysis__file__closure_arg;
#line 2246 "analysis.file.c"
    {
#line 2248 "analysis.file.c"
      analysis__file__succeeded = analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0(((MR_Word) analysis__file__wrapper_arg_1));
    }
#line 2251 "analysis.file.c"
    return analysis__file__succeeded;
#line 2253 "analysis.file.c"
  }
#line 2255 "analysis.file.c"
}

#line 2258 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0_10001(
#line 2261 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 2263 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 2265 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 2267 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3)
#line 2269 "analysis.file.c"
{
#line 2271 "analysis.file.c"
  {
#line 2273 "analysis.file.c"
    MR_bool analysis__file__succeeded;
#line 2275 "analysis.file.c"
    MR_Box analysis__file__closure;

#line 2278 "analysis.file.c"
    analysis__file__closure = analysis__file__closure_arg;
#line 2280 "analysis.file.c"
    {
#line 2282 "analysis.file.c"
      analysis__file__succeeded = analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0();
    }
#line 2285 "analysis.file.c"
    return analysis__file__succeeded;
#line 2287 "analysis.file.c"
  }
#line 2289 "analysis.file.c"
}

#line 2292 "analysis.file.c"
static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0_10001(
#line 2295 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 2297 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 2299 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 2301 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3)
#line 2303 "analysis.file.c"
{
#line 2305 "analysis.file.c"
  {
#line 2307 "analysis.file.c"
    MR_bool analysis__file__succeeded;
#line 2309 "analysis.file.c"
    MR_Box analysis__file__closure;

#line 2312 "analysis.file.c"
    analysis__file__closure = analysis__file__closure_arg;
#line 2314 "analysis.file.c"
    {
#line 2316 "analysis.file.c"
      analysis__file__succeeded = analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0();
    }
#line 2319 "analysis.file.c"
    return analysis__file__succeeded;
#line 2321 "analysis.file.c"
  }
#line 2323 "analysis.file.c"
}

#line 2326 "analysis.file.c"
static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0_10001(
#line 2329 "analysis.file.c"
  MR_Box analysis__file__closure_arg)
#line 2331 "analysis.file.c"
{
#line 2333 "analysis.file.c"
  {
#line 2335 "analysis.file.c"
    MR_Box analysis__file__wrapper_arg_3;
#line 2337 "analysis.file.c"
    MR_Box analysis__file__closure;
#line 2339 "analysis.file.c"
    MR_String analysis__file__conv0_HeadVar__3_3;

#line 2342 "analysis.file.c"
    analysis__file__closure = analysis__file__closure_arg;
#line 2344 "analysis.file.c"
    {
#line 2346 "analysis.file.c"
      analysis__file__conv0_HeadVar__3_3 = analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0();
    }
#line 2349 "analysis.file.c"
    analysis__file__wrapper_arg_3 = ((MR_Box) (analysis__file__conv0_HeadVar__3_3));
#line 2351 "analysis.file.c"
    return analysis__file__wrapper_arg_3;
#line 2353 "analysis.file.c"
  }
#line 2355 "analysis.file.c"
}

#line 2358 "analysis.file.c"
static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0_10001(
#line 2361 "analysis.file.c"
  MR_Box analysis__file__closure_arg)
#line 2363 "analysis.file.c"
{
#line 2365 "analysis.file.c"
  {
#line 2367 "analysis.file.c"
    MR_Box analysis__file__wrapper_arg_3;
#line 2369 "analysis.file.c"
    MR_Box analysis__file__closure;
#line 2371 "analysis.file.c"
    MR_Integer analysis__file__conv0_HeadVar__3_3;

#line 2374 "analysis.file.c"
    analysis__file__closure = analysis__file__closure_arg;
#line 2376 "analysis.file.c"
    {
#line 2378 "analysis.file.c"
      analysis__file__conv0_HeadVar__3_3 = analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0();
    }
#line 2381 "analysis.file.c"
    analysis__file__wrapper_arg_3 = ((MR_Box) (analysis__file__conv0_HeadVar__3_3));
#line 2383 "analysis.file.c"
    return analysis__file__wrapper_arg_3;
#line 2385 "analysis.file.c"
  }
#line 2387 "analysis.file.c"
}

#line 2390 "analysis.file.c"
static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0_10001(
#line 2393 "analysis.file.c"
  MR_Box analysis__file__closure_arg)
#line 2395 "analysis.file.c"
{
#line 2397 "analysis.file.c"
  {
#line 2399 "analysis.file.c"
    MR_Box analysis__file__wrapper_arg_3;
#line 2401 "analysis.file.c"
    MR_Box analysis__file__closure;
#line 2403 "analysis.file.c"
    MR_Word analysis__file__conv0_HeadVar__3_3;

#line 2406 "analysis.file.c"
    analysis__file__closure = analysis__file__closure_arg;
#line 2408 "analysis.file.c"
    {
#line 2410 "analysis.file.c"
      analysis__file__conv0_HeadVar__3_3 = analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0();
    }
#line 2413 "analysis.file.c"
    analysis__file__wrapper_arg_3 = ((MR_Box) (analysis__file__conv0_HeadVar__3_3));
#line 2415 "analysis.file.c"
    return analysis__file__wrapper_arg_3;
#line 2417 "analysis.file.c"
  }
#line 2419 "analysis.file.c"
}

#line 2422 "analysis.file.c"
static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0_10001(
#line 2425 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 2427 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1)
#line 2429 "analysis.file.c"
{
#line 2431 "analysis.file.c"
  {
#line 2433 "analysis.file.c"
    MR_Box analysis__file__wrapper_arg_3;
#line 2435 "analysis.file.c"
    MR_Box analysis__file__closure;

#line 2438 "analysis.file.c"
    analysis__file__closure = analysis__file__closure_arg;
#line 2440 "analysis.file.c"
    {
#line 2442 "analysis.file.c"
      analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0();
    }
#line 2445 "analysis.file.c"
    return analysis__file__wrapper_arg_3;
#line 2447 "analysis.file.c"
  }
#line 2449 "analysis.file.c"
}

#line 2452 "analysis.file.c"
static MR_Box MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0_10001(
#line 2455 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 2457 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1)
#line 2459 "analysis.file.c"
{
#line 2461 "analysis.file.c"
  {
#line 2463 "analysis.file.c"
    MR_Box analysis__file__wrapper_arg_3;
#line 2465 "analysis.file.c"
    MR_Box analysis__file__closure;

#line 2468 "analysis.file.c"
    analysis__file__closure = analysis__file__closure_arg;
#line 2470 "analysis.file.c"
    {
#line 2472 "analysis.file.c"
      analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0();
    }
#line 2475 "analysis.file.c"
    return analysis__file__wrapper_arg_3;
#line 2477 "analysis.file.c"
  }
#line 2479 "analysis.file.c"
}

#line 2482 "analysis.file.c"
static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0_10001(
#line 2485 "analysis.file.c"
  MR_Box analysis__file__closure_arg,
#line 2487 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_1,
#line 2489 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_2,
#line 2491 "analysis.file.c"
  MR_Box analysis__file__wrapper_arg_3,
#line 2493 "analysis.file.c"
  MR_Box * analysis__file__wrapper_arg_6)
#line 2495 "analysis.file.c"
{
#line 2497 "analysis.file.c"
  {
#line 2499 "analysis.file.c"
    MR_Box analysis__file__closure;

#line 2502 "analysis.file.c"
    analysis__file__closure = analysis__file__closure_arg;
#line 2504 "analysis.file.c"
    {
#line 2506 "analysis.file.c"
      analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0(((MR_Word) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2), ((MR_Word) analysis__file__wrapper_arg_3));
    }
#line 2509 "analysis.file.c"
  }
#line 2511 "analysis.file.c"
}

#line 1040 "analysis.file.m"
static MR_Word MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 1040 "analysis.file.m"
{
#line 1040 "analysis.file.m"
  {
#line 1040 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 1040 "analysis.file.m"
    MR_Word analysis__file__Term_3;
#line 1040 "analysis.file.m"
    MR_Word analysis__file__V_8_8;

#line 1041 "analysis.file.m"
    {
#line 1041 "analysis.file.m"
      analysis__file__V_8_8 = mercury__term__context_init_0_f_0();
    }
#line 1041 "analysis.file.m"
    {
#line 1041 "analysis.file.m"
      analysis__file__Term_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1041 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__Term_3, 0) = ((MR_Box) (&analysis__file_scalar_common_11[0]));
#line 1041 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__Term_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1041 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__Term_3, 2) = ((MR_Box) (analysis__file__V_8_8));
#line 1041 "analysis.file.m"
    }
#line 1040 "analysis.file.m"
    return analysis__file__Term_3;
#line 1040 "analysis.file.m"
  }
#line 1040 "analysis.file.m"
}

#line 1037 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 1037 "analysis.file.m"
{
#line 1037 "analysis.file.m"
  {
#line 1037 "analysis.file.m"
    return MR_TRUE;
#line 1037 "analysis.file.m"
  }
#line 1037 "analysis.file.m"
}

#line 1034 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
#line 1034 "analysis.file.m"
{
#line 1035 "analysis.file.m"
  {
#line 1035 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1035 "analysis.file.m"
    {
#line 1035 "analysis.file.m"
      return analysis__file__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
#line 1035 "analysis.file.m"
    return analysis__file__succeeded;
#line 1035 "analysis.file.m"
  }
#line 1034 "analysis.file.m"
}

#line 1054 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0(void)
#line 1054 "analysis.file.m"
{
#line 1054 "analysis.file.m"
  {
#line 1054 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1054 "analysis.file.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1054 "analysis.file.m"
  }
#line 1054 "analysis.file.m"
}

#line 1053 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1053 "analysis.file.m"
{
#line 1053 "analysis.file.m"
  {
#line 1053 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1053 "analysis.file.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1053 "analysis.file.m"
  }
#line 1053 "analysis.file.m"
}

#line 1052 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1052 "analysis.file.m"
{
#line 1052 "analysis.file.m"
  {
#line 1052 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1052 "analysis.file.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1052 "analysis.file.m"
  }
#line 1052 "analysis.file.m"
}

#line 1051 "analysis.file.m"
static MR_Word MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1051 "analysis.file.m"
{
#line 1051 "analysis.file.m"
  {
#line 1051 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1051 "analysis.file.m"
    return (MR_Integer) 1;
#line 1051 "analysis.file.m"
  }
#line 1051 "analysis.file.m"
}

#line 1050 "analysis.file.m"
static MR_Integer MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1050 "analysis.file.m"
{
#line 1050 "analysis.file.m"
  {
#line 1050 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1050 "analysis.file.m"
    return (MR_Integer) 1;
#line 1050 "analysis.file.m"
  }
#line 1050 "analysis.file.m"
}

#line 1049 "analysis.file.m"
static MR_String MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 1049 "analysis.file.m"
{
#line 1049 "analysis.file.m"
  {
#line 1049 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1049 "analysis.file.m"
    return (MR_String) "dummy";
#line 1049 "analysis.file.m"
  }
#line 1049 "analysis.file.m"
}

#line 634 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(
#line 634 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__3_3)
#line 634 "analysis.file.m"
{
#line 634 "analysis.file.m"
  {
#line 634 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 634 "analysis.file.m"
    MR_Word analysis__file__Cast_HeadVar1_4 = analysis__file__HeadVar__2_2;
#line 634 "analysis.file.m"
    MR_Word analysis__file__Cast_HeadVar2_5 = analysis__file__HeadVar__3_3;

#line 634 "analysis.file.m"
    {
#line 634 "analysis.file.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(analysis__file__HeadVar__1_1, (MR_Word) analysis__file__Cast_HeadVar1_4, (MR_Word) analysis__file__Cast_HeadVar2_5);
#line 634 "analysis.file.m"
      return;
    }
#line 634 "analysis.file.m"
  }
#line 634 "analysis.file.m"
}

#line 634 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__1_1,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2)
#line 634 "analysis.file.m"
{
#line 634 "analysis.file.m"
  {
#line 634 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 634 "analysis.file.m"
    MR_Word analysis__file__Cast_HeadVar1_3 = analysis__file__HeadVar__1_1;
#line 634 "analysis.file.m"
    MR_Word analysis__file__Cast_HeadVar2_4 = analysis__file__HeadVar__2_2;

#line 634 "analysis.file.m"
    {
#line 634 "analysis.file.m"
      return analysis__file__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) analysis__file__Cast_HeadVar1_3, (MR_Word) analysis__file__Cast_HeadVar2_4);
    }
#line 634 "analysis.file.m"
    return analysis__file__succeeded;
#line 634 "analysis.file.m"
  }
#line 634 "analysis.file.m"
}

#line 193 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(
#line 193 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__3_3)
#line 193 "analysis.file.m"
{
#line 193 "analysis.file.m"
  {
#line 193 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 193 "analysis.file.m"
    MR_Word analysis__file__Cast_HeadVar1_4 = analysis__file__HeadVar__2_2;
#line 193 "analysis.file.m"
    MR_Word analysis__file__Cast_HeadVar2_5 = analysis__file__HeadVar__3_3;

#line 193 "analysis.file.m"
    {
#line 193 "analysis.file.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(analysis__file__HeadVar__1_1, (MR_Word) analysis__file__Cast_HeadVar1_4, (MR_Word) analysis__file__Cast_HeadVar2_5);
#line 193 "analysis.file.m"
      return;
    }
#line 193 "analysis.file.m"
  }
#line 193 "analysis.file.m"
}

#line 193 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__1_1,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2)
#line 193 "analysis.file.m"
{
#line 193 "analysis.file.m"
  {
#line 193 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 193 "analysis.file.m"
    MR_Word analysis__file__Cast_HeadVar1_3 = analysis__file__HeadVar__1_1;
#line 193 "analysis.file.m"
    MR_Word analysis__file__Cast_HeadVar2_4 = analysis__file__HeadVar__2_2;

#line 193 "analysis.file.m"
    {
#line 193 "analysis.file.m"
      return analysis__file__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) analysis__file__Cast_HeadVar1_3, (MR_Word) analysis__file__Cast_HeadVar2_4);
    }
#line 193 "analysis.file.m"
    return analysis__file__succeeded;
#line 193 "analysis.file.m"
  }
#line 193 "analysis.file.m"
}

#line 1029 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 1029 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1)
#line 1029 "analysis.file.m"
{
#line 1029 "analysis.file.m"
  {
#line 1029 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1029 "analysis.file.m"
    *analysis__file__HeadVar__1_1 = (MR_Integer) 0;
#line 1029 "analysis.file.m"
  }
#line 1029 "analysis.file.m"
}

#line 1029 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 1029 "analysis.file.m"
{
#line 1029 "analysis.file.m"
  {
#line 1029 "analysis.file.m"
    return MR_TRUE;
#line 1029 "analysis.file.m"
  }
#line 1029 "analysis.file.m"
}

#line 1006 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_112_105_99_107_108_101_95_97_110_97_108_121_115_105_115_95_114_101_115_117_108_116_95_95_91_53_93_95_48_7_p_0(
#line 1006 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_35,
#line 1006 "analysis.file.m"
  MR_Box analysis__file__Compiler_8,
#line 1006 "analysis.file.m"
  MR_Word analysis__file__Unpicklers_9,
#line 1006 "analysis.file.m"
  MR_Box analysis__file__Handle_10,
#line 1006 "analysis.file.m"
  MR_Word * analysis__file__Univ_12,
#line 1006 "analysis.file.m"
  MR_Integer analysis__file__STATE_VARIABLE_State_0_21,
#line 1006 "analysis.file.m"
  MR_Integer * analysis__file__STATE_VARIABLE_State_22)
#line 1006 "analysis.file.m"
{
#line 1011 "analysis.file.m"
  {
#line 1011 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 1011 "analysis.file.m"
    MR_String analysis__file__Name_14;
#line 1011 "analysis.file.m"
    MR_Integer analysis__file__STATE_VARIABLE_State_24_24;
#line 1012 "analysis.file.m"
    MR_Box analysis__file__conv0_Name_14;
#line 1022 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_analysis_37;
#line 1015 "analysis.file.m"
    MR_Word analysis__file__V_25_25;
#line 2880 "analysis.file.c"
    MR_bool MR_CALL (* analysis__file__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 2882 "analysis.file.c"
    MR_Box analysis__file__conv2_V_25_25;

#line 1012 "analysis.file.m"
    {
#line 1012 "analysis.file.m"
      libs__pickle__unpickle_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__file__Unpicklers_9, analysis__file__Handle_10, &analysis__file__conv0_Name_14, analysis__file__STATE_VARIABLE_State_0_21, &analysis__file__STATE_VARIABLE_State_24_24);
    }
#line 1012 "analysis.file.m"
    analysis__file__Name_14 = ((MR_String) analysis__file__conv0_Name_14);
#line 2892 "analysis.file.c"
    analysis__file__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_35, (MR_Integer) 0)), (MR_Integer) 6)));
#line 2894 "analysis.file.c"
    {
#line 2896 "analysis.file.c"
      analysis__file__succeeded = analysis__file__func_1(((MR_Box) analysis__file__TypeClassInfo_for_compiler_35), analysis__file__Compiler_8, ((MR_Box) (analysis__file__Name_14)), &analysis__file__conv2_V_25_25);
    }
#line 2899 "analysis.file.c"
    if (analysis__file__succeeded)
#line 2901 "analysis.file.c"
      {
#line 2903 "analysis.file.c"
        analysis__file__V_25_25 = ((MR_Word) analysis__file__conv2_V_25_25);
#line 2905 "analysis.file.c"
        analysis__file__succeeded = MR_TRUE;
#line 2907 "analysis.file.c"
      }
#line 1015 "analysis.file.m"
    if (analysis__file__succeeded)
#line 1015 "analysis.file.m"
      {
#line 1014 "analysis.file.m"
        analysis__file__TypeClassInfo_for_analysis_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_25_25, (MR_Integer) 0)));
#line 1014 "analysis.file.m"
        analysis__file__succeeded = MR_TRUE;
#line 1015 "analysis.file.m"
      }
#line 1022 "analysis.file.m"
    if (analysis__file__succeeded)
#line 1017 "analysis.file.m"
      {
#line 1017 "analysis.file.m"
        MR_Word analysis__file__TypeInfo_39_39;
#line 1017 "analysis.file.m"
        MR_Word analysis__file__TypeInfo_41_41;
#line 1017 "analysis.file.m"
        MR_Box analysis__file__Call_16;
#line 1017 "analysis.file.m"
        MR_Box analysis__file__Answer_18;
#line 1017 "analysis.file.m"
        MR_Word analysis__file__Status_19;
#line 1017 "analysis.file.m"
        MR_Word analysis__file__Result_20;
#line 1017 "analysis.file.m"
        MR_Integer analysis__file__STATE_VARIABLE_State_29_29;
#line 1017 "analysis.file.m"
        MR_Integer analysis__file__STATE_VARIABLE_State_31_31;
#line 1019 "analysis.file.m"
        MR_Box analysis__file__conv3_Status_19;

#line 2942 "analysis.file.c"
        {
#line 2944 "analysis.file.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_analysis_37, (MR_Integer) 4, &analysis__file__TypeInfo_39_39);
        }
#line 1017 "analysis.file.m"
        {
#line 1017 "analysis.file.m"
          libs__pickle__unpickle_5_p_0(analysis__file__TypeInfo_39_39, analysis__file__Unpicklers_9, analysis__file__Handle_10, &analysis__file__Call_16, analysis__file__STATE_VARIABLE_State_24_24, &analysis__file__STATE_VARIABLE_State_29_29);
        }
#line 2952 "analysis.file.c"
        {
#line 2954 "analysis.file.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_analysis_37, (MR_Integer) 5, &analysis__file__TypeInfo_41_41);
        }
#line 1018 "analysis.file.m"
        {
#line 1018 "analysis.file.m"
          libs__pickle__unpickle_5_p_0(analysis__file__TypeInfo_41_41, analysis__file__Unpicklers_9, analysis__file__Handle_10, &analysis__file__Answer_18, analysis__file__STATE_VARIABLE_State_29_29, &analysis__file__STATE_VARIABLE_State_31_31);
        }
#line 1019 "analysis.file.m"
        {
#line 1019 "analysis.file.m"
          libs__pickle__unpickle_5_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__file__Unpicklers_9, analysis__file__Handle_10, &analysis__file__conv3_Status_19, analysis__file__STATE_VARIABLE_State_31_31, analysis__file__STATE_VARIABLE_State_22);
        }
#line 1019 "analysis.file.m"
        analysis__file__Status_19 = ((MR_Word) analysis__file__conv3_Status_19);
#line 1020 "analysis.file.m"
        {
#line 1020 "analysis.file.m"
          analysis__file__Result_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__Result_20, 0) = ((MR_Box) (analysis__file__TypeClassInfo_for_analysis_37));
#line 1020 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__Result_20, 1) = analysis__file__Call_16;
#line 1020 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__Result_20, 2) = analysis__file__Answer_18;
#line 1020 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__Result_20, 3) = ((MR_Box) (analysis__file__Status_19));
#line 1020 "analysis.file.m"
        }
#line 1021 "analysis.file.m"
        {
#line 1021 "analysis.file.m"
          mercury__univ__type_to_univ_2_p_1((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, ((MR_Box) (analysis__file__Result_20)), analysis__file__Univ_12);
#line 1021 "analysis.file.m"
          return;
        }
#line 1017 "analysis.file.m"
      }
#line 1022 "analysis.file.m"
    else
#line 1023 "analysis.file.m"
      {
#line 1023 "analysis.file.m"
        {
#line 1023 "analysis.file.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.unpickle_analysis_result\'/7", analysis__file__Name_14);
#line 1023 "analysis.file.m"
          return;
        }
#line 1023 "analysis.file.m"
      }
#line 1011 "analysis.file.m"
  }
#line 1006 "analysis.file.m"
}

#line 612 "analysis.file.m"
static void MR_CALL 
analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_50_95_95_91_49_93_95_48_5_p_0(
#line 612 "analysis.file.m"
  MR_Word analysis__file__ParseEntry_6,
#line 612 "analysis.file.m"
  MR_Box analysis__file__Results0_7,
#line 612 "analysis.file.m"
  MR_Box * analysis__file__Results_8)
#line 612 "analysis.file.m"
{
#line 615 "analysis.file.m"
  while (MR_TRUE)
#line 615 "analysis.file.m"
    {
#line 615 "analysis.file.m"
      /* tailcall optimized into a loop */
#line 615 "analysis.file.m"
      {
#line 615 "analysis.file.m"
        MR_bool analysis__file__succeeded;
#line 615 "analysis.file.m"
        MR_Word analysis__file__TermResult_10;

#line 616 "analysis.file.m"
        {
#line 616 "analysis.file.m"
          mercury__parser__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &analysis__file__TermResult_10);
        }
#line 621 "analysis.file.m"
        if ((analysis__file__TermResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "analysis.file.m"
          *analysis__file__Results_8 = analysis__file__Results0_7;
#line 621 "analysis.file.m"
        else
#line 621 "analysis.file.m"
        if (((MR_tag((MR_Word) analysis__file__TermResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 625 "analysis.file.m"
          {
#line 625 "analysis.file.m"
            MR_String analysis__file__Msg_14 = ((MR_String) (MR_hl_field(MR_mktag(1), analysis__file__TermResult_10, (MR_Integer) 0)));
#line 625 "analysis.file.m"
            MR_Word analysis__file__V_19_19 = (MR_Word) analysis__file__Msg_14;
#line 625 "analysis.file.m"
            MR_Integer analysis__file__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), analysis__file__TermResult_10, (MR_Integer) 1)));

#line 626 "analysis.file.m"
            {
#line 626 "analysis.file.m"
              mercury__exception__throw_1_p_0((MR_Word) &analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0, ((MR_Box) (analysis__file__V_19_19)));
#line 626 "analysis.file.m"
              return;
            }
#line 625 "analysis.file.m"
          }
#line 621 "analysis.file.m"
        else
#line 618 "analysis.file.m"
          {
#line 618 "analysis.file.m"
            MR_Word analysis__file__Term_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), analysis__file__TermResult_10, (MR_Integer) 1)));
#line 618 "analysis.file.m"
            MR_Box analysis__file__Results1_13;
#line 618 "analysis.file.m"
            MR_Word analysis__file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), analysis__file__TermResult_10, (MR_Integer) 0)));
#line 619 "analysis.file.m"
            void MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), analysis__file__ParseEntry_6, (MR_Integer) 1)));

#line 619 "analysis.file.m"
            {
#line 619 "analysis.file.m"
              analysis__file__func_0(((MR_Box) analysis__file__ParseEntry_6), ((MR_Box) (analysis__file__Term_12)), analysis__file__Results0_7, &analysis__file__Results1_13);
            }
#line 620 "analysis.file.m"
            /* direct tailcall eliminated */
#line 620 "analysis.file.m"
            {
#line 620 "analysis.file.m"
              MR_Box analysis__file__Results0__tmp_copy_7 = analysis__file__Results1_13;

#line 620 "analysis.file.m"
              analysis__file__Results0_7 = analysis__file__Results0__tmp_copy_7;
#line 620 "analysis.file.m"
            }
#line 620 "analysis.file.m"
            continue;
#line 618 "analysis.file.m"
          }
#line 615 "analysis.file.m"
      }
#line 615 "analysis.file.m"
      break;
#line 615 "analysis.file.m"
    }
#line 612 "analysis.file.m"
}

#line 902 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_analysis_file_4__902__1_7_p_0(
#line 902 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_27,
#line 902 "analysis.file.m"
  MR_Word analysis__file__WriteEntry_7,
#line 902 "analysis.file.m"
  MR_String analysis__file__AnalysisName_8,
#line 902 "analysis.file.m"
  MR_Word analysis__file__FuncId_9,
#line 902 "analysis.file.m"
  MR_Box analysis__file__HeadVar__5_20)
#line 902 "analysis.file.m"
{
#line 902 "analysis.file.m"
  {
#line 902 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 902 "analysis.file.m"
    void MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), analysis__file__WriteEntry_7, (MR_Integer) 1)));
#line 902 "analysis.file.m"
    MR_Box analysis__file__conv1_HeadVar__7_22;

#line 902 "analysis.file.m"
    {
#line 902 "analysis.file.m"
      analysis__file__func_0(((MR_Box) analysis__file__WriteEntry_7), ((MR_Box) (analysis__file__AnalysisName_8)), ((MR_Box) (analysis__file__FuncId_9)), analysis__file__HeadVar__5_20, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv1_HeadVar__7_22);
    }
#line 902 "analysis.file.m"
  }
#line 902 "analysis.file.m"
}

#line 574 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__574__1_6_p_0(
#line 574 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_62,
#line 574 "analysis.file.m"
  MR_Word analysis__file__ParseEntry_8,
#line 574 "analysis.file.m"
  MR_Box analysis__file__ModuleResults0_9,
#line 574 "analysis.file.m"
  MR_Box * analysis__file__HeadVar__4_48)
#line 574 "analysis.file.m"
{
#line 574 "analysis.file.m"
  {
#line 574 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 574 "analysis.file.m"
    MR_Word analysis__file__TermResult_66;
#line 604 "analysis.file.m"
    MR_Word analysis__file__V_72_72;
#line 604 "analysis.file.m"
    MR_Word analysis__file__V_73_73;
#line 604 "analysis.file.m"
    MR_Integer analysis__file__V_74_74;
#line 604 "analysis.file.m"
    MR_Word analysis__file__V_75_75;
#line 604 "analysis.file.m"
    MR_Integer analysis__file__V_83_83;
#line 604 "analysis.file.m"
    MR_Word analysis__file__V_67_67;
#line 604 "analysis.file.m"
    MR_Word analysis__file__V_68_68;

#line 602 "analysis.file.m"
    {
#line 602 "analysis.file.m"
      mercury__parser__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &analysis__file__TermResult_66);
    }
#line 604 "analysis.file.m"
    analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__TermResult_66)) == (MR_mktag((MR_Integer) 2)));
#line 604 "analysis.file.m"
    if (analysis__file__succeeded)
#line 604 "analysis.file.m"
      {
#line 604 "analysis.file.m"
        analysis__file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), analysis__file__TermResult_66, (MR_Integer) 0)));
#line 604 "analysis.file.m"
        analysis__file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), analysis__file__TermResult_66, (MR_Integer) 1)));
#line 604 "analysis.file.m"
        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_72_72)) == (MR_mktag((MR_Integer) 0)));
#line 604 "analysis.file.m"
        if (analysis__file__succeeded)
#line 604 "analysis.file.m"
          {
#line 604 "analysis.file.m"
            analysis__file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_72_72, (MR_Integer) 0)));
#line 604 "analysis.file.m"
            analysis__file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_72_72, (MR_Integer) 1)));
#line 604 "analysis.file.m"
            analysis__file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_72_72, (MR_Integer) 2)));
#line 604 "analysis.file.m"
            analysis__file__succeeded = (analysis__file__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "analysis.file.m"
            if (analysis__file__succeeded)
#line 604 "analysis.file.m"
              {
#line 604 "analysis.file.m"
                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 604 "analysis.file.m"
                if (analysis__file__succeeded)
#line 604 "analysis.file.m"
                  {
#line 604 "analysis.file.m"
                    analysis__file__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(1), analysis__file__V_73_73, (MR_Integer) 0)));
#line 160 "analysis.file.m"
                    analysis__file__V_83_83 = (MR_Integer) 6;
#line 604 "analysis.file.m"
                    analysis__file__succeeded = (analysis__file__V_74_74 == analysis__file__V_83_83);
#line 604 "analysis.file.m"
                  }
#line 604 "analysis.file.m"
              }
#line 604 "analysis.file.m"
          }
#line 604 "analysis.file.m"
      }
#line 607 "analysis.file.m"
    if (analysis__file__succeeded)
#line 606 "analysis.file.m"
      {
#line 606 "analysis.file.m"
      }
#line 607 "analysis.file.m"
    else
#line 608 "analysis.file.m"
      {
#line 608 "analysis.file.m"
        MR_String analysis__file__Msg_69;
#line 608 "analysis.file.m"
        MR_String analysis__file__V_77_77;
#line 608 "analysis.file.m"
        MR_Word analysis__file__V_78_78;

#line 608 "analysis.file.m"
        {
#line 608 "analysis.file.m"
          analysis__file__V_77_77 = mercury__string__string_1_f_0((MR_Word) &analysis__file_scalar_common_1[4], ((MR_Box) (analysis__file__TermResult_66)));
        }
#line 608 "analysis.file.m"
        {
#line 608 "analysis.file.m"
          analysis__file__Msg_69 = mercury__string__f_43_43_2_f_0((MR_String) "bad analysis file version: ", analysis__file__V_77_77);
        }
#line 609 "analysis.file.m"
        analysis__file__V_78_78 = (MR_Word) analysis__file__Msg_69;
#line 609 "analysis.file.m"
        {
#line 609 "analysis.file.m"
          mercury__exception__throw_1_p_0((MR_Word) &analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0, ((MR_Box) (analysis__file__V_78_78)));
#line 609 "analysis.file.m"
          return;
        }
#line 608 "analysis.file.m"
      }
#line 577 "analysis.file.m"
    {
#line 577 "analysis.file.m"
      analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_50_95_95_91_49_93_95_48_5_p_0(analysis__file__ParseEntry_8, analysis__file__ModuleResults0_9, analysis__file__HeadVar__4_48);
#line 577 "analysis.file.m"
      return;
    }
#line 574 "analysis.file.m"
  }
#line 574 "analysis.file.m"
}

#line 566 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__566__1_3_p_0(
#line 566 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_7)
#line 566 "analysis.file.m"
{
#line 566 "analysis.file.m"
  {
#line 566 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 567 "analysis.file.m"
    {
#line 567 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) "% Reading analysis file ");
    }
#line 568 "analysis.file.m"
    {
#line 568 "analysis.file.m"
      mercury__io__write_string_3_p_0(analysis__file__AnalysisFileName_7);
    }
#line 569 "analysis.file.m"
    {
#line 569 "analysis.file.m"
      mercury__io__nl_2_p_0();
#line 569 "analysis.file.m"
      return;
    }
#line 566 "analysis.file.m"
  }
#line 566 "analysis.file.m"
}

#line 591 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__591__1_3_p_0(
#line 591 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_7)
#line 591 "analysis.file.m"
{
#line 591 "analysis.file.m"
  {
#line 591 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 592 "analysis.file.m"
    {
#line 592 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) "Error reading analysis file: ");
    }
#line 593 "analysis.file.m"
    {
#line 593 "analysis.file.m"
      mercury__io__write_string_3_p_0(analysis__file__AnalysisFileName_7);
    }
#line 594 "analysis.file.m"
    {
#line 594 "analysis.file.m"
      mercury__io__nl_2_p_0();
#line 594 "analysis.file.m"
      return;
    }
#line 591 "analysis.file.m"
  }
#line 591 "analysis.file.m"
}

#line 546 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_analysis_file__546__1_5_p_0(
#line 546 "analysis.file.m"
  MR_Word analysis__file__ModuleName_12,
#line 546 "analysis.file.m"
  MR_String analysis__file__Suffix_13,
#line 546 "analysis.file.m"
  MR_String analysis__file__Message_20)
#line 546 "analysis.file.m"
{
#line 546 "analysis.file.m"
  {
#line 546 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 547 "analysis.file.m"
    {
#line 547 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) "Couldn\'t open ");
    }
#line 548 "analysis.file.m"
    {
#line 548 "analysis.file.m"
      mercury__io__write_string_3_p_0(analysis__file__Suffix_13);
    }
#line 549 "analysis.file.m"
    {
#line 549 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) " for module ");
    }
#line 550 "analysis.file.m"
    {
#line 550 "analysis.file.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__file__ModuleName_12)));
    }
#line 551 "analysis.file.m"
    {
#line 551 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 552 "analysis.file.m"
    {
#line 552 "analysis.file.m"
      mercury__io__write_string_3_p_0(analysis__file__Message_20);
    }
#line 553 "analysis.file.m"
    {
#line 553 "analysis.file.m"
      mercury__io__nl_2_p_0();
#line 553 "analysis.file.m"
      return;
    }
#line 546 "analysis.file.m"
  }
#line 546 "analysis.file.m"
}

#line 335 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__335__1_5_p_0(
#line 335 "analysis.file.m"
  MR_Word analysis__file__ModuleResults0_10,
#line 335 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_45,
#line 335 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__3_55)
#line 335 "analysis.file.m"
{
#line 335 "analysis.file.m"
  {
#line 335 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 335 "analysis.file.m"
    MR_Box analysis__file__conv0_HeadVar__3_55;

#line 335 "analysis.file.m"
    {
#line 335 "analysis.file.m"
      analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_97_110_97_108_121_115_105_115_95_102_105_108_101_95_50_95_95_91_49_93_95_48_5_p_0(analysis__file__HeadVar__2_45, ((MR_Box) (analysis__file__ModuleResults0_10)), &analysis__file__conv0_HeadVar__3_55);
    }
#line 335 "analysis.file.m"
    *analysis__file__HeadVar__3_55 = ((MR_Word) analysis__file__conv0_HeadVar__3_55);
#line 335 "analysis.file.m"
  }
#line 335 "analysis.file.m"
}

#line 326 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__326__1_3_p_0(
#line 326 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_7)
#line 326 "analysis.file.m"
{
#line 326 "analysis.file.m"
  {
#line 326 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 327 "analysis.file.m"
    {
#line 327 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) "% Reading analysis registry file ");
    }
#line 328 "analysis.file.m"
    {
#line 328 "analysis.file.m"
      mercury__io__write_string_3_p_0(analysis__file__AnalysisFileName_7);
    }
#line 329 "analysis.file.m"
    {
#line 329 "analysis.file.m"
      mercury__io__nl_2_p_0();
#line 329 "analysis.file.m"
      return;
    }
#line 326 "analysis.file.m"
  }
#line 326 "analysis.file.m"
}

#line 348 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__348__1_3_p_0(
#line 348 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_7)
#line 348 "analysis.file.m"
{
#line 348 "analysis.file.m"
  {
#line 348 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 349 "analysis.file.m"
    {
#line 349 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) "% Error reading analysis registry file: ");
    }
#line 350 "analysis.file.m"
    {
#line 350 "analysis.file.m"
      mercury__io__write_string_3_p_0(analysis__file__AnalysisFileName_7);
    }
#line 351 "analysis.file.m"
    {
#line 351 "analysis.file.m"
      mercury__io__nl_2_p_0();
#line 351 "analysis.file.m"
      return;
    }
#line 348 "analysis.file.m"
  }
#line 348 "analysis.file.m"
}

#line 911 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__empty_request_file__911__1_3_p_0(
#line 911 "analysis.file.m"
  MR_String analysis__file__RequestFileName_10)
#line 911 "analysis.file.m"
{
#line 911 "analysis.file.m"
  {
#line 911 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 912 "analysis.file.m"
    {
#line 912 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) "% Removing request file ");
    }
#line 913 "analysis.file.m"
    {
#line 913 "analysis.file.m"
      mercury__io__write_string_3_p_0(analysis__file__RequestFileName_10);
    }
#line 914 "analysis.file.m"
    {
#line 914 "analysis.file.m"
      mercury__io__nl_2_p_0();
#line 914 "analysis.file.m"
      return;
    }
#line 911 "analysis.file.m"
  }
#line 911 "analysis.file.m"
}

#line 714 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_requests__714__1_3_p_0(
#line 714 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_13)
#line 714 "analysis.file.m"
{
#line 714 "analysis.file.m"
  {
#line 714 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 715 "analysis.file.m"
    {
#line 715 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) "% Writing module analysis requests to ");
    }
#line 716 "analysis.file.m"
    {
#line 716 "analysis.file.m"
      mercury__io__write_string_3_p_0(analysis__file__AnalysisFileName_13);
    }
#line 717 "analysis.file.m"
    {
#line 717 "analysis.file.m"
      mercury__io__nl_2_p_0();
#line 717 "analysis.file.m"
      return;
    }
#line 714 "analysis.file.m"
  }
#line 714 "analysis.file.m"
}

#line 662 "analysis.file.m"
static void MR_CALL 
analysis__file__IntroducedFrom__pred__write_module_analysis_results__662__1_3_p_0(
#line 662 "analysis.file.m"
  MR_Word analysis__file__ModuleName_9)
#line 662 "analysis.file.m"
{
#line 662 "analysis.file.m"
  {
#line 662 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 663 "analysis.file.m"
    {
#line 663 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) "% Writing module analysis results for ");
    }
#line 664 "analysis.file.m"
    {
#line 664 "analysis.file.m"
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__file__ModuleName_9)));
    }
#line 665 "analysis.file.m"
    {
#line 665 "analysis.file.m"
      mercury__io__nl_2_p_0();
#line 665 "analysis.file.m"
      return;
    }
#line 662 "analysis.file.m"
  }
#line 662 "analysis.file.m"
}

#line 1043 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__from_term_2_2_p_0(
#line 1043 "analysis.file.m"
  MR_Word analysis__file__Term_3)
#line 1043 "analysis.file.m"
{
#line 1043 "analysis.file.m"
  {
#line 1043 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 1043 "analysis.file.m"
    MR_Word analysis__file__V_5_5;
#line 1043 "analysis.file.m"
    MR_String analysis__file__V_6_6;
#line 1043 "analysis.file.m"
    MR_Word analysis__file__V_7_7;
#line 1044 "analysis.file.m"
    MR_Word analysis__file__V_4_4;

#line 1043 "analysis.file.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1044 "analysis.file.m"
    analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1044 "analysis.file.m"
    if (analysis__file__succeeded)
#line 1044 "analysis.file.m"
      {
#line 1044 "analysis.file.m"
        analysis__file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_3, (MR_Integer) 0)));
#line 1044 "analysis.file.m"
        analysis__file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_3, (MR_Integer) 1)));
#line 1044 "analysis.file.m"
        analysis__file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_3, (MR_Integer) 2)));
#line 1044 "analysis.file.m"
        analysis__file__succeeded = (analysis__file__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1043 "analysis.file.m"
        if (analysis__file__succeeded)
#line 1043 "analysis.file.m"
          {
#line 1044 "analysis.file.m"
            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 1044 "analysis.file.m"
            if (analysis__file__succeeded)
#line 1044 "analysis.file.m"
              {
#line 1044 "analysis.file.m"
                analysis__file__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__V_5_5, (MR_Integer) 0)));
#line 1044 "analysis.file.m"
                analysis__file__succeeded = (strcmp(analysis__file__V_6_6, (MR_String) "dummy") == 0);
#line 1044 "analysis.file.m"
              }
#line 1043 "analysis.file.m"
          }
#line 1044 "analysis.file.m"
      }
#line 1043 "analysis.file.m"
    return analysis__file__succeeded;
#line 1043 "analysis.file.m"
  }
#line 1043 "analysis.file.m"
}

#line 1040 "analysis.file.m"
static MR_Word MR_CALL 
analysis__file__ClassMethod_for_analysis__to_term____analysis__file__dummy_answer__arity0______analysis__to_term_1_1_f_0(void)
#line 1040 "analysis.file.m"
{
#line 1040 "analysis.file.m"
  {
#line 1040 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 1040 "analysis.file.m"
    MR_Word analysis__file__Term_3;

#line 1040 "analysis.file.m"
    {
#line 1040 "analysis.file.m"
      return analysis__file__Term_3 = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 1040 "analysis.file.m"
    return analysis__file__Term_3;
#line 1040 "analysis.file.m"
  }
#line 1040 "analysis.file.m"
}

#line 1037 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__equivalent_3_3_p_0(void)
#line 1037 "analysis.file.m"
{
#line 1037 "analysis.file.m"
  {
#line 1037 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1037 "analysis.file.m"
    {
#line 1037 "analysis.file.m"
      return analysis__file__succeeded = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 1037 "analysis.file.m"
    return analysis__file__succeeded;
#line 1037 "analysis.file.m"
  }
#line 1037 "analysis.file.m"
}

#line 1034 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__file__dummy_answer__arity0______analysis__more_precise_than_3_3_p_0(void)
#line 1034 "analysis.file.m"
{
#line 1035 "analysis.file.m"
  {
#line 1035 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1035 "analysis.file.m"
    {
#line 1035 "analysis.file.m"
      return analysis__file__succeeded = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
#line 1035 "analysis.file.m"
    return analysis__file__succeeded;
#line 1035 "analysis.file.m"
  }
#line 1034 "analysis.file.m"
}

#line 1054 "analysis.file.m"
static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__get_func_info_6_6_p_0(
#line 1054 "analysis.file.m"
  MR_Word analysis__file__HeadVar__1_17,
#line 1054 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_18,
#line 1054 "analysis.file.m"
  MR_Word analysis__file__HeadVar__3_19)
#line 1054 "analysis.file.m"
{
#line 1054 "analysis.file.m"
  {
#line 1054 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1054 "analysis.file.m"
    {
#line 1054 "analysis.file.m"
      analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_103_101_116_95_102_117_110_99_95_105_110_102_111_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_6_p_0();
#line 1054 "analysis.file.m"
      return;
    }
#line 1054 "analysis.file.m"
  }
#line 1054 "analysis.file.m"
}

#line 1053 "analysis.file.m"
static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__top_2_2_f_0(void)
#line 1053 "analysis.file.m"
{
#line 1053 "analysis.file.m"
  {
#line 1053 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1053 "analysis.file.m"
    {
#line 1053 "analysis.file.m"
      analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_112_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
#line 1053 "analysis.file.m"
      return;
    }
#line 1053 "analysis.file.m"
  }
#line 1053 "analysis.file.m"
}

#line 1052 "analysis.file.m"
static void MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__bottom_2_2_f_0(void)
#line 1052 "analysis.file.m"
{
#line 1052 "analysis.file.m"
  {
#line 1052 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1052 "analysis.file.m"
    {
#line 1052 "analysis.file.m"
      analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_98_111_116_116_111_109_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
#line 1052 "analysis.file.m"
      return;
    }
#line 1052 "analysis.file.m"
  }
#line 1052 "analysis.file.m"
}

#line 1051 "analysis.file.m"
static MR_Word MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__preferred_fixpoint_type_2_2_f_0(void)
#line 1051 "analysis.file.m"
{
#line 1051 "analysis.file.m"
  {
#line 1051 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 1051 "analysis.file.m"
    MR_Word analysis__file__HeadVar__3_3;

#line 1051 "analysis.file.m"
    {
#line 1051 "analysis.file.m"
      return analysis__file__HeadVar__3_3 = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_112_114_101_102_101_114_114_101_100_95_102_105_120_112_111_105_110_116_95_116_121_112_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1051 "analysis.file.m"
    return analysis__file__HeadVar__3_3;
#line 1051 "analysis.file.m"
  }
#line 1051 "analysis.file.m"
}

#line 1050 "analysis.file.m"
static MR_Integer MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_version_number_2_2_f_0(void)
#line 1050 "analysis.file.m"
{
#line 1050 "analysis.file.m"
  {
#line 1050 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 1050 "analysis.file.m"
    MR_Integer analysis__file__HeadVar__3_3;

#line 1050 "analysis.file.m"
    {
#line 1050 "analysis.file.m"
      return analysis__file__HeadVar__3_3 = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1050 "analysis.file.m"
    return analysis__file__HeadVar__3_3;
#line 1050 "analysis.file.m"
  }
#line 1050 "analysis.file.m"
}

#line 1049 "analysis.file.m"
static MR_String MR_CALL 
analysis__file__ClassMethod_for_analysis__analysis____analysis__no_func_info__arity0__analysis__any_call__arity0__analysis__file__dummy_answer__arity0______analysis__analysis_name_2_2_f_0(void)
#line 1049 "analysis.file.m"
{
#line 1049 "analysis.file.m"
  {
#line 1049 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 1049 "analysis.file.m"
    MR_String analysis__file__HeadVar__3_3;

#line 1049 "analysis.file.m"
    {
#line 1049 "analysis.file.m"
      return analysis__file__HeadVar__3_3 = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_97_108_121_115_105_115_95_110_97_109_101_95_50_95_95_91_49_44_32_50_93_95_48_2_f_0();
    }
#line 1049 "analysis.file.m"
    return analysis__file__HeadVar__3_3;
#line 1049 "analysis.file.m"
  }
#line 1049 "analysis.file.m"
}

#line 634 "analysis.file.m"
static void MR_CALL 
analysis__file____Compare____write_entry_1_0(
#line 634 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_6,
#line 634 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__3_3)
#line 634 "analysis.file.m"
{
#line 634 "analysis.file.m"
  {
#line 634 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 634 "analysis.file.m"
    {
#line 634 "analysis.file.m"
      analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(analysis__file__HeadVar__1_1, analysis__file__HeadVar__2_2, analysis__file__HeadVar__3_3);
#line 634 "analysis.file.m"
      return;
    }
#line 634 "analysis.file.m"
  }
#line 634 "analysis.file.m"
}

#line 634 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file____Unify____write_entry_1_0(
#line 634 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_5,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__1_1,
#line 634 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2)
#line 634 "analysis.file.m"
{
#line 634 "analysis.file.m"
  {
#line 634 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 634 "analysis.file.m"
    {
#line 634 "analysis.file.m"
      return analysis__file__succeeded = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_119_114_105_116_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(analysis__file__HeadVar__1_1, analysis__file__HeadVar__2_2);
    }
#line 634 "analysis.file.m"
    return analysis__file__succeeded;
#line 634 "analysis.file.m"
  }
#line 634 "analysis.file.m"
}

#line 193 "analysis.file.m"
static void MR_CALL 
analysis__file____Compare____parse_entry_1_0(
#line 193 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_6,
#line 193 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__3_3)
#line 193 "analysis.file.m"
{
#line 193 "analysis.file.m"
  {
#line 193 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 193 "analysis.file.m"
    {
#line 193 "analysis.file.m"
      analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_3_p_0(analysis__file__HeadVar__1_1, analysis__file__HeadVar__2_2, analysis__file__HeadVar__3_3);
#line 193 "analysis.file.m"
      return;
    }
#line 193 "analysis.file.m"
  }
#line 193 "analysis.file.m"
}

#line 193 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file____Unify____parse_entry_1_0(
#line 193 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_5,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__1_1,
#line 193 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2)
#line 193 "analysis.file.m"
{
#line 193 "analysis.file.m"
  {
#line 193 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 193 "analysis.file.m"
    {
#line 193 "analysis.file.m"
      return analysis__file__succeeded = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_112_97_114_115_101_95_101_110_116_114_121_95_49_95_95_91_49_93_95_48_2_p_0(analysis__file__HeadVar__1_1, analysis__file__HeadVar__2_2);
    }
#line 193 "analysis.file.m"
    return analysis__file__succeeded;
#line 193 "analysis.file.m"
  }
#line 193 "analysis.file.m"
}

#line 155 "analysis.file.m"
static void MR_CALL 
analysis__file____Compare____invalid_analysis_file_0_0(
#line 155 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1,
#line 155 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2,
#line 155 "analysis.file.m"
  MR_Word analysis__file__HeadVar__3_3)
#line 155 "analysis.file.m"
{
#line 155 "analysis.file.m"
  {
#line 155 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 155 "analysis.file.m"
    MR_Integer analysis__file__CastX_6 = (MR_Integer) analysis__file__HeadVar__2_2;
#line 155 "analysis.file.m"
    MR_Integer analysis__file__CastY_7 = (MR_Integer) analysis__file__HeadVar__3_3;

#line 155 "analysis.file.m"
    analysis__file__succeeded = (analysis__file__CastX_6 == analysis__file__CastY_7);
#line 155 "analysis.file.m"
    if (analysis__file__succeeded)
#line 4019 "analysis.file.c"
      *analysis__file__HeadVar__1_1 = (MR_Integer) 0;
#line 155 "analysis.file.m"
    else
#line 155 "analysis.file.m"
      {
#line 155 "analysis.file.m"
        MR_String analysis__file__V_4_4 = (MR_String) analysis__file__HeadVar__2_2;
#line 155 "analysis.file.m"
        MR_String analysis__file__V_5_5 = (MR_String) analysis__file__HeadVar__3_3;

#line 155 "analysis.file.m"
        {
#line 155 "analysis.file.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(analysis__file__HeadVar__1_1, analysis__file__V_4_4, analysis__file__V_5_5);
#line 155 "analysis.file.m"
          return;
        }
#line 155 "analysis.file.m"
      }
#line 155 "analysis.file.m"
  }
#line 155 "analysis.file.m"
}

#line 155 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file____Unify____invalid_analysis_file_0_0(
#line 155 "analysis.file.m"
  MR_Word analysis__file__HeadVar__1_1,
#line 155 "analysis.file.m"
  MR_Word analysis__file__HeadVar__2_2)
#line 155 "analysis.file.m"
{
#line 155 "analysis.file.m"
  {
#line 155 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 155 "analysis.file.m"
    MR_Integer analysis__file__CastX_5 = (MR_Integer) analysis__file__HeadVar__1_1;
#line 155 "analysis.file.m"
    MR_Integer analysis__file__CastY_6 = (MR_Integer) analysis__file__HeadVar__2_2;

#line 155 "analysis.file.m"
    analysis__file__succeeded = (analysis__file__CastX_5 == analysis__file__CastY_6);
#line 155 "analysis.file.m"
    if (analysis__file__succeeded)
#line 155 "analysis.file.m"
      analysis__file__succeeded = MR_TRUE;
#line 155 "analysis.file.m"
    else
#line 155 "analysis.file.m"
      {
#line 155 "analysis.file.m"
        MR_String analysis__file__V_3_3 = (MR_String) analysis__file__HeadVar__1_1;
#line 155 "analysis.file.m"
        MR_String analysis__file__V_4_4 = (MR_String) analysis__file__HeadVar__2_2;

#line 4077 "analysis.file.c"
        analysis__file__succeeded = (strcmp(analysis__file__V_3_3, analysis__file__V_4_4) == 0);
#line 155 "analysis.file.m"
      }
#line 155 "analysis.file.m"
    return analysis__file__succeeded;
#line 155 "analysis.file.m"
  }
#line 155 "analysis.file.m"
}

#line 1029 "analysis.file.m"
static void MR_CALL 
analysis__file____Compare____dummy_answer_0_0(
#line 1029 "analysis.file.m"
  MR_Word * analysis__file__HeadVar__1_1)
#line 1029 "analysis.file.m"
{
#line 1029 "analysis.file.m"
  {
#line 1029 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1029 "analysis.file.m"
    {
#line 1029 "analysis.file.m"
      analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(analysis__file__HeadVar__1_1);
#line 1029 "analysis.file.m"
      return;
    }
#line 1029 "analysis.file.m"
  }
#line 1029 "analysis.file.m"
}

#line 1029 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file____Unify____dummy_answer_0_0(void)
#line 1029 "analysis.file.m"
{
#line 1029 "analysis.file.m"
  {
#line 1029 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1029 "analysis.file.m"
    {
#line 1029 "analysis.file.m"
      return analysis__file__succeeded = analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_102_105_108_101_95_95_100_117_109_109_121_95_97_110_115_119_101_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 1029 "analysis.file.m"
    return analysis__file__succeeded;
#line 1029 "analysis.file.m"
  }
#line 1029 "analysis.file.m"
}

#line 1006 "analysis.file.m"
static void MR_CALL 
analysis__file__unpickle_analysis_result_7_p_0(
#line 1006 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_35,
#line 1006 "analysis.file.m"
  MR_Box analysis__file__Compiler_8,
#line 1006 "analysis.file.m"
  MR_Word analysis__file__Unpicklers_9,
#line 1006 "analysis.file.m"
  MR_Box analysis__file__Handle_10,
#line 1006 "analysis.file.m"
  MR_Word analysis__file___Type_11,
#line 1006 "analysis.file.m"
  MR_Word * analysis__file__Univ_12,
#line 1006 "analysis.file.m"
  MR_Integer analysis__file__STATE_VARIABLE_State_0_21,
#line 1006 "analysis.file.m"
  MR_Integer * analysis__file__STATE_VARIABLE_State_22)
#line 1006 "analysis.file.m"
{
#line 1011 "analysis.file.m"
  {
#line 1011 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 1011 "analysis.file.m"
    {
#line 1011 "analysis.file.m"
      analysis__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_112_105_99_107_108_101_95_97_110_97_108_121_115_105_115_95_114_101_115_117_108_116_95_95_91_53_93_95_48_7_p_0(analysis__file__TypeClassInfo_for_compiler_35, analysis__file__Compiler_8, analysis__file__Unpicklers_9, analysis__file__Handle_10, analysis__file__Univ_12, analysis__file__STATE_VARIABLE_State_0_21, analysis__file__STATE_VARIABLE_State_22);
#line 1011 "analysis.file.m"
      return;
    }
#line 1011 "analysis.file.m"
  }
#line 1006 "analysis.file.m"
}

#line 983 "analysis.file.m"
static void MR_CALL 
analysis__file__pickle_analysis_result_4_p_0(
#line 983 "analysis.file.m"
  MR_Word analysis__file__Pickles_5,
#line 983 "analysis.file.m"
  MR_Word analysis__file__Univ_6)
#line 983 "analysis.file.m"
{
#line 985 "analysis.file.m"
  {
#line 985 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 985 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_analysis_19;
#line 985 "analysis.file.m"
    MR_Word analysis__file__TypeInfo_23_23;
#line 985 "analysis.file.m"
    MR_Word analysis__file__TypeInfo_25_25;
#line 985 "analysis.file.m"
    MR_Box analysis__file__Call_8;
#line 985 "analysis.file.m"
    MR_Box analysis__file__Answer_9;
#line 985 "analysis.file.m"
    MR_Word analysis__file__Status_10;
#line 985 "analysis.file.m"
    MR_String analysis__file__Name_11;
#line 985 "analysis.file.m"
    MR_Word analysis__file__V_14_14;
#line 986 "analysis.file.m"
    MR_Box analysis__file__conv0_V_14_14;
#line 4203 "analysis.file.c"
    MR_Box analysis__file__V_27_27;
#line 4205 "analysis.file.c"
    MR_Box analysis__file__V_28_28;
#line 4207 "analysis.file.c"
    MR_Box MR_CALL (* analysis__file__func_1)(MR_Box);
#line 4209 "analysis.file.c"
    MR_Box analysis__file__conv2_Name_11;

#line 986 "analysis.file.m"
    {
#line 986 "analysis.file.m"
      mercury__univ__det_univ_to_type_2_p_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, analysis__file__Univ_6, &analysis__file__conv0_V_14_14);
    }
#line 986 "analysis.file.m"
    analysis__file__V_14_14 = ((MR_Word) analysis__file__conv0_V_14_14);
#line 986 "analysis.file.m"
    analysis__file__TypeClassInfo_for_analysis_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_14_14, (MR_Integer) 0)));
#line 986 "analysis.file.m"
    analysis__file__Call_8 = (MR_hl_field(MR_mktag(0), analysis__file__V_14_14, (MR_Integer) 1));
#line 986 "analysis.file.m"
    analysis__file__Answer_9 = (MR_hl_field(MR_mktag(0), analysis__file__V_14_14, (MR_Integer) 2));
#line 986 "analysis.file.m"
    analysis__file__Status_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_14_14, (MR_Integer) 3)));
#line 4227 "analysis.file.c"
    analysis__file__func_1 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_analysis_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4229 "analysis.file.c"
    {
#line 4231 "analysis.file.c"
      analysis__file__conv2_Name_11 = analysis__file__func_1(((MR_Box) analysis__file__TypeClassInfo_for_analysis_19));
    }
#line 4234 "analysis.file.c"
    analysis__file__Name_11 = ((MR_String) analysis__file__conv2_Name_11);
#line 988 "analysis.file.m"
    {
#line 988 "analysis.file.m"
      libs__pickle__pickle_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__file__Pickles_5, ((MR_Box) (analysis__file__Name_11)));
    }
#line 4241 "analysis.file.c"
    {
#line 4243 "analysis.file.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_analysis_19, (MR_Integer) 4, &analysis__file__TypeInfo_23_23);
    }
#line 989 "analysis.file.m"
    {
#line 989 "analysis.file.m"
      libs__pickle__pickle_4_p_0(analysis__file__TypeInfo_23_23, analysis__file__Pickles_5, analysis__file__Call_8);
    }
#line 4251 "analysis.file.c"
    {
#line 4253 "analysis.file.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_analysis_19, (MR_Integer) 5, &analysis__file__TypeInfo_25_25);
    }
#line 990 "analysis.file.m"
    {
#line 990 "analysis.file.m"
      libs__pickle__pickle_4_p_0(analysis__file__TypeInfo_25_25, analysis__file__Pickles_5, analysis__file__Answer_9);
    }
#line 991 "analysis.file.m"
    {
#line 991 "analysis.file.m"
      libs__pickle__pickle_4_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__file__Pickles_5, ((MR_Box) (analysis__file__Status_10)));
#line 991 "analysis.file.m"
      return;
    }
#line 985 "analysis.file.m"
  }
#line 983 "analysis.file.m"
}

#line 979 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_cache_file_4_p_0_1(
#line 979 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 979 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 979 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 979 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 979 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_4)
#line 979 "analysis.file.m"
{
#line 979 "analysis.file.m"
  {
#line 979 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 979 "analysis.file.m"
    {
#line 979 "analysis.file.m"
      analysis__file__pickle_analysis_result_4_p_0(((MR_Word) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2));
#line 979 "analysis.file.m"
      return;
    }
#line 979 "analysis.file.m"
  }
#line 979 "analysis.file.m"
}

#line 943 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_cache_file_4_p_0(
#line 943 "analysis.file.m"
  MR_String analysis__file__CacheFileName_5,
#line 943 "analysis.file.m"
  MR_Word analysis__file__ModuleResults_6)
#line 943 "analysis.file.m"
{
#line 946 "analysis.file.m"
  {
#line 946 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 946 "analysis.file.m"
    MR_String analysis__file__TmpFileName_8;
#line 946 "analysis.file.m"
    MR_Word analysis__file__TellRes_9;

#line 949 "analysis.file.m"
    {
#line 949 "analysis.file.m"
      analysis__file__TmpFileName_8 = mercury__string__f_43_43_2_f_0(analysis__file__CacheFileName_5, (MR_String) ".tmp");
    }
#line 950 "analysis.file.m"
    {
#line 950 "analysis.file.m"
      mercury__io__tell_binary_4_p_0(analysis__file__TmpFileName_8, &analysis__file__TellRes_9);
    }
#line 967 "analysis.file.m"
    if ((analysis__file__TellRes_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 952 "analysis.file.m"
      {
#line 952 "analysis.file.m"
        MR_Word analysis__file__RenameRes_10;
#line 952 "analysis.file.m"
        MR_Word analysis__file__V_20_20;
#line 952 "analysis.file.m"
        MR_Word analysis__file__Type_37;
#line 952 "analysis.file.m"
        MR_Word analysis__file__STATE_VARIABLE_Pickles_5_38;
#line 952 "analysis.file.m"
        MR_Word analysis__file__V_42_42;
#line 978 "analysis.file.m"
        MR_Word analysis__file__V_51_51;

#line 976 "analysis.file.m"
        {
#line 976 "analysis.file.m"
          analysis__file__STATE_VARIABLE_Pickles_5_38 = libs__pickle__init_picklers_0_f_0();
        }
#line 978 "analysis.file.m"
        {
#line 978 "analysis.file.m"
          analysis__file__V_42_42 = mercury__type_desc__type_of_1_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0);
        }
#line 978 "analysis.file.m"
        {
#line 978 "analysis.file.m"
          analysis__file__Type_37 = mercury__type_desc__type_ctor_1_f_0(analysis__file__V_42_42);
        }
#line 979 "analysis.file.m"
        {
#line 979 "analysis.file.m"
          libs__pickle__register_pickler_4_p_0(analysis__file__Type_37, (MR_Word) &analysis__file_scalar_common_2[9], analysis__file__STATE_VARIABLE_Pickles_5_38, &analysis__file__V_20_20);
        }
#line 953 "analysis.file.m"
        {
#line 953 "analysis.file.m"
          libs__pickle__pickle_4_p_0((MR_Word) &analysis__file_scalar_common_2[1], analysis__file__V_20_20, ((MR_Box) (analysis__file__ModuleResults_6)));
        }
#line 954 "analysis.file.m"
        {
#line 954 "analysis.file.m"
          mercury__io__told_binary_2_p_0();
        }
#line 955 "analysis.file.m"
        {
#line 955 "analysis.file.m"
          mercury__io__rename_file_5_p_0(analysis__file__TmpFileName_8, analysis__file__CacheFileName_5, &analysis__file__RenameRes_10);
        }
#line 958 "analysis.file.m"
        if ((analysis__file__RenameRes_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "analysis.file.m"
          {
#line 957 "analysis.file.m"
          }
#line 958 "analysis.file.m"
        else
#line 959 "analysis.file.m"
          {
#line 959 "analysis.file.m"
            MR_Word analysis__file__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__RenameRes_10, (MR_Integer) 0)));
#line 959 "analysis.file.m"
            MR_String analysis__file__V_29_29;
#line 965 "analysis.file.m"
            MR_Word analysis__file__V_12_12;

#line 960 "analysis.file.m"
            {
#line 960 "analysis.file.m"
              mercury__io__write_string_3_p_0((MR_String) "Error renaming ");
            }
#line 961 "analysis.file.m"
            {
#line 961 "analysis.file.m"
              mercury__io__write_string_3_p_0(analysis__file__CacheFileName_5);
            }
#line 962 "analysis.file.m"
            {
#line 962 "analysis.file.m"
              mercury__io__write_string_3_p_0((MR_String) ": ");
            }
#line 963 "analysis.file.m"
            {
#line 963 "analysis.file.m"
              analysis__file__V_29_29 = mercury__io__error_message_1_f_0(analysis__file__Error_11);
            }
#line 963 "analysis.file.m"
            {
#line 963 "analysis.file.m"
              mercury__io__write_string_3_p_0(analysis__file__V_29_29);
            }
#line 964 "analysis.file.m"
            {
#line 964 "analysis.file.m"
              mercury__io__nl_2_p_0();
            }
#line 965 "analysis.file.m"
            {
#line 965 "analysis.file.m"
              mercury__io__remove_file_4_p_0(analysis__file__TmpFileName_8, &analysis__file__V_12_12);
            }
#line 959 "analysis.file.m"
          }
#line 952 "analysis.file.m"
      }
#line 967 "analysis.file.m"
    else
#line 968 "analysis.file.m"
      {
#line 968 "analysis.file.m"
        MR_String analysis__file__V_19_19;
#line 968 "analysis.file.m"
        MR_Word analysis__file__Error_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__TellRes_9, (MR_Integer) 0)));

#line 969 "analysis.file.m"
        {
#line 969 "analysis.file.m"
          analysis__file__V_19_19 = mercury__io__error_message_1_f_0(analysis__file__Error_33);
        }
#line 969 "analysis.file.m"
        {
#line 969 "analysis.file.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.write_analysis_cache_file\'/4", analysis__file__V_19_19);
#line 969 "analysis.file.m"
          return;
        }
#line 968 "analysis.file.m"
      }
#line 946 "analysis.file.m"
  }
#line 943 "analysis.file.m"
}

#line 938 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__dir_sep_1_p_0(
#line 938 "analysis.file.m"
  MR_Char analysis__file__Char_2)
#line 938 "analysis.file.m"
{
#line 941 "analysis.file.m"
  {
#line 941 "analysis.file.m"
    MR_bool analysis__file__succeeded;

#line 941 "analysis.file.m"
    {
#line 941 "analysis.file.m"
      return analysis__file__succeeded = mercury__dir__is_directory_separator_1_p_0(analysis__file__Char_2);
    }
#line 941 "analysis.file.m"
    return analysis__file__succeeded;
#line 941 "analysis.file.m"
  }
#line 938 "analysis.file.m"
}

#line 900 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_4_6_p_0_1(
#line 900 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 900 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 900 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 900 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_3)
#line 900 "analysis.file.m"
{
#line 900 "analysis.file.m"
  {
#line 900 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 900 "analysis.file.m"
    {
#line 900 "analysis.file.m"
      analysis__file__IntroducedFrom__pred__write_analysis_file_4__902__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 6))), analysis__file__wrapper_arg_1);
#line 900 "analysis.file.m"
      return;
    }
#line 900 "analysis.file.m"
  }
#line 900 "analysis.file.m"
}

#line 895 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_4_6_p_0(
#line 895 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_27,
#line 895 "analysis.file.m"
  MR_Word analysis__file__WriteEntry_7,
#line 895 "analysis.file.m"
  MR_String analysis__file__AnalysisName_8,
#line 895 "analysis.file.m"
  MR_Word analysis__file__FuncId_9,
#line 895 "analysis.file.m"
  MR_Word analysis__file__FuncResultList_10)
#line 895 "analysis.file.m"
{
#line 898 "analysis.file.m"
  {
#line 898 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 898 "analysis.file.m"
    MR_Word analysis__file__FuncResultListSorted_12;
#line 898 "analysis.file.m"
    MR_Word analysis__file__V_16_16;
#line 900 "analysis.file.m"
    MR_Box analysis__file__conv0_STATE_VARIABLE_IO_15;

#line 899 "analysis.file.m"
    {
#line 899 "analysis.file.m"
      mercury__list__sort_2_p_0(analysis__file__TypeInfo_for_T_27, analysis__file__FuncResultList_10, &analysis__file__FuncResultListSorted_12);
    }
#line 900 "analysis.file.m"
    {
#line 900 "analysis.file.m"
      analysis__file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 900 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 0) = ((MR_Box) (&analysis__file_scalar_common_8[3]));
#line 900 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 1) = ((MR_Box) (analysis__file__write_analysis_file_4_6_p_0_1));
#line 900 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 900 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 3) = ((MR_Box) (analysis__file__TypeInfo_for_T_27));
#line 900 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 4) = ((MR_Box) (analysis__file__WriteEntry_7));
#line 900 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 5) = ((MR_Box) (analysis__file__AnalysisName_8));
#line 900 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 6) = ((MR_Box) (analysis__file__FuncId_9));
#line 900 "analysis.file.m"
    }
#line 900 "analysis.file.m"
    {
#line 900 "analysis.file.m"
      mercury__list__foldl_4_p_2(analysis__file__TypeInfo_for_T_27, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__file__V_16_16, analysis__file__FuncResultListSorted_12, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv0_STATE_VARIABLE_IO_15);
    }
#line 898 "analysis.file.m"
  }
#line 895 "analysis.file.m"
}

#line 892 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_3_5_p_0_1(
#line 892 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 892 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 892 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 892 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 892 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_4)
#line 892 "analysis.file.m"
{
#line 892 "analysis.file.m"
  {
#line 892 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 892 "analysis.file.m"
    {
#line 892 "analysis.file.m"
      analysis__file__write_analysis_file_4_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 5))), ((MR_Word) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2));
#line 892 "analysis.file.m"
      return;
    }
#line 892 "analysis.file.m"
  }
#line 892 "analysis.file.m"
}

#line 888 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_3_5_p_0(
#line 888 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_14,
#line 888 "analysis.file.m"
  MR_Word analysis__file__WriteEntry_6,
#line 888 "analysis.file.m"
  MR_String analysis__file__AnalysisName_7,
#line 888 "analysis.file.m"
  MR_Word analysis__file__FuncResults_8)
#line 888 "analysis.file.m"
{
#line 891 "analysis.file.m"
  {
#line 891 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 891 "analysis.file.m"
    MR_Word analysis__file__TypeInfo_21_21;
#line 891 "analysis.file.m"
    MR_Word analysis__file__V_12_12;
#line 892 "analysis.file.m"
    MR_Box analysis__file__conv0_STATE_VARIABLE_IO_11;

#line 892 "analysis.file.m"
    {
#line 892 "analysis.file.m"
      analysis__file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 892 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_12_12, 0) = ((MR_Box) (&analysis__file_scalar_common_8[2]));
#line 892 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_12_12, 1) = ((MR_Box) (analysis__file__write_analysis_file_3_5_p_0_1));
#line 892 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 892 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_12_12, 3) = ((MR_Box) (analysis__file__TypeInfo_for_T_14));
#line 892 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_12_12, 4) = ((MR_Box) (analysis__file__WriteEntry_6));
#line 892 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_12_12, 5) = ((MR_Box) (analysis__file__AnalysisName_7));
#line 892 "analysis.file.m"
    }
#line 4658 "analysis.file.c"
    {
#line 4660 "analysis.file.c"
      analysis__file__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4662 "analysis.file.c"
      MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_21_21, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4664 "analysis.file.c"
      MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_21_21, 1) = ((MR_Box) (analysis__file__TypeInfo_for_T_14));
#line 4666 "analysis.file.c"
    }
#line 892 "analysis.file.m"
    {
#line 892 "analysis.file.m"
      mercury__map__foldl_4_p_2((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__file__TypeInfo_21_21, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__file__V_12_12, analysis__file__FuncResults_8, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv0_STATE_VARIABLE_IO_11);
    }
#line 891 "analysis.file.m"
  }
#line 888 "analysis.file.m"
}

#line 886 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_2_4_p_0_1(
#line 886 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 886 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_4)
#line 886 "analysis.file.m"
{
#line 886 "analysis.file.m"
  {
#line 886 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 886 "analysis.file.m"
    {
#line 886 "analysis.file.m"
      analysis__file__write_analysis_file_3_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4))), ((MR_String) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2));
#line 886 "analysis.file.m"
      return;
    }
#line 886 "analysis.file.m"
  }
#line 886 "analysis.file.m"
}

#line 882 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_2_4_p_0(
#line 882 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_12,
#line 882 "analysis.file.m"
  MR_Word analysis__file__WriteEntry_5,
#line 882 "analysis.file.m"
  MR_Word analysis__file__ModuleResults_6)
#line 882 "analysis.file.m"
{
#line 885 "analysis.file.m"
  {
#line 885 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 885 "analysis.file.m"
    MR_Word analysis__file__TypeInfo_20_20;
#line 885 "analysis.file.m"
    MR_Word analysis__file__TypeInfo_22_22;
#line 885 "analysis.file.m"
    MR_Word analysis__file__V_10_10;
#line 886 "analysis.file.m"
    MR_Box analysis__file__conv0_STATE_VARIABLE_IO_9;

#line 886 "analysis.file.m"
    {
#line 886 "analysis.file.m"
      analysis__file__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 886 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_10_10, 0) = ((MR_Box) (&analysis__file_scalar_common_9[1]));
#line 886 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_10_10, 1) = ((MR_Box) (analysis__file__write_analysis_file_2_4_p_0_1));
#line 886 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 886 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_10_10, 3) = ((MR_Box) (analysis__file__TypeInfo_for_T_12));
#line 886 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_10_10, 4) = ((MR_Box) (analysis__file__WriteEntry_5));
#line 886 "analysis.file.m"
    }
#line 4750 "analysis.file.c"
    {
#line 4752 "analysis.file.c"
      analysis__file__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4754 "analysis.file.c"
      MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4756 "analysis.file.c"
      MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_20_20, 1) = ((MR_Box) (analysis__file__TypeInfo_for_T_12));
#line 4758 "analysis.file.c"
    }
#line 4760 "analysis.file.c"
    {
#line 4762 "analysis.file.c"
      analysis__file__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4764 "analysis.file.c"
      MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_22_22, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4766 "analysis.file.c"
      MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_22_22, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 4768 "analysis.file.c"
      MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_22_22, 2) = ((MR_Box) (analysis__file__TypeInfo_20_20));
#line 4770 "analysis.file.c"
    }
#line 886 "analysis.file.m"
    {
#line 886 "analysis.file.m"
      mercury__map__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__file__TypeInfo_22_22, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__file__V_10_10, analysis__file__ModuleResults_6, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv0_STATE_VARIABLE_IO_9);
    }
#line 885 "analysis.file.m"
  }
#line 882 "analysis.file.m"
}

#line 886 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_5_p_0_1(
#line 886 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 886 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_4)
#line 886 "analysis.file.m"
{
#line 886 "analysis.file.m"
  {
#line 886 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 886 "analysis.file.m"
    {
#line 886 "analysis.file.m"
      analysis__file__write_analysis_file_3_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4))), ((MR_String) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2));
#line 886 "analysis.file.m"
      return;
    }
#line 886 "analysis.file.m"
  }
#line 886 "analysis.file.m"
}

#line 862 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_5_p_0(
#line 862 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_34,
#line 862 "analysis.file.m"
  MR_String analysis__file__FileName_6,
#line 862 "analysis.file.m"
  MR_Word analysis__file__WriteEntry_7,
#line 862 "analysis.file.m"
  MR_Word analysis__file__ModuleResults_8)
#line 862 "analysis.file.m"
{
#line 865 "analysis.file.m"
  {
#line 865 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 865 "analysis.file.m"
    MR_Word analysis__file__OpenResult_10;

#line 866 "analysis.file.m"
    {
#line 866 "analysis.file.m"
      mercury__io__open_output_4_p_0(analysis__file__FileName_6, &analysis__file__OpenResult_10);
    }
#line 875 "analysis.file.m"
    if (((MR_tag((MR_Word) analysis__file__OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 876 "analysis.file.m"
      {
#line 876 "analysis.file.m"
        MR_Word analysis__file__IOError_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__OpenResult_10, (MR_Integer) 0)));
#line 876 "analysis.file.m"
        MR_String analysis__file__V_20_20;
#line 876 "analysis.file.m"
        MR_String analysis__file__V_22_22;
#line 876 "analysis.file.m"
        MR_String analysis__file__V_23_23;
#line 876 "analysis.file.m"
        MR_String analysis__file__V_25_25;

#line 879 "analysis.file.m"
        {
#line 879 "analysis.file.m"
          analysis__file__V_25_25 = mercury__io__error_message_1_f_0(analysis__file__IOError_14);
        }
#line 878 "analysis.file.m"
        {
#line 878 "analysis.file.m"
          analysis__file__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", analysis__file__V_25_25);
        }
#line 878 "analysis.file.m"
        {
#line 878 "analysis.file.m"
          analysis__file__V_22_22 = mercury__string__f_43_43_2_f_0(analysis__file__FileName_6, analysis__file__V_23_23);
        }
#line 878 "analysis.file.m"
        {
#line 878 "analysis.file.m"
          analysis__file__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "error opening \140", analysis__file__V_22_22);
        }
#line 877 "analysis.file.m"
        {
#line 877 "analysis.file.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.write_analysis_file\'/5", analysis__file__V_20_20);
#line 877 "analysis.file.m"
          return;
        }
#line 876 "analysis.file.m"
      }
#line 875 "analysis.file.m"
    else
#line 868 "analysis.file.m"
      {
#line 868 "analysis.file.m"
        MR_Word analysis__file__TypeInfo_20_49;
#line 868 "analysis.file.m"
        MR_Word analysis__file__TypeInfo_22_51;
#line 868 "analysis.file.m"
        MR_Word analysis__file__Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__OpenResult_10, (MR_Integer) 0)));
#line 868 "analysis.file.m"
        MR_Word analysis__file__OldOutput_12;
#line 868 "analysis.file.m"
        MR_Word analysis__file__V_40_40;
#line 886 "analysis.file.m"
        MR_Box analysis__file__conv0_STATE_VARIABLE_IO_31_31;
#line 873 "analysis.file.m"
        MR_Word analysis__file__V_13_13;

#line 869 "analysis.file.m"
        {
#line 869 "analysis.file.m"
          mercury__io__set_output_stream_4_p_0(analysis__file__Stream_11, &analysis__file__OldOutput_12);
        }
#line 870 "analysis.file.m"
        {
#line 870 "analysis.file.m"
          mercury__io__write_int_3_p_0((MR_Integer) 6);
        }
#line 871 "analysis.file.m"
        {
#line 871 "analysis.file.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
#line 886 "analysis.file.m"
        {
#line 886 "analysis.file.m"
          analysis__file__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 886 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_40_40, 0) = ((MR_Box) (&analysis__file_scalar_common_9[1]));
#line 886 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_40_40, 1) = ((MR_Box) (analysis__file__write_analysis_file_5_p_0_1));
#line 886 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 886 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_40_40, 3) = ((MR_Box) (analysis__file__TypeInfo_for_T_34));
#line 886 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_40_40, 4) = ((MR_Box) (analysis__file__WriteEntry_7));
#line 886 "analysis.file.m"
        }
#line 4933 "analysis.file.c"
        {
#line 4935 "analysis.file.c"
          analysis__file__TypeInfo_20_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4937 "analysis.file.c"
          MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_20_49, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4939 "analysis.file.c"
          MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_20_49, 1) = ((MR_Box) (analysis__file__TypeInfo_for_T_34));
#line 4941 "analysis.file.c"
        }
#line 4943 "analysis.file.c"
        {
#line 4945 "analysis.file.c"
          analysis__file__TypeInfo_22_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4947 "analysis.file.c"
          MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_22_51, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4949 "analysis.file.c"
          MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_22_51, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 4951 "analysis.file.c"
          MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_22_51, 2) = ((MR_Box) (analysis__file__TypeInfo_20_49));
#line 4953 "analysis.file.c"
        }
#line 886 "analysis.file.m"
        {
#line 886 "analysis.file.m"
          mercury__map__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__file__TypeInfo_22_51, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__file__V_40_40, analysis__file__ModuleResults_8, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv0_STATE_VARIABLE_IO_31_31);
        }
#line 873 "analysis.file.m"
        {
#line 873 "analysis.file.m"
          mercury__io__set_output_stream_4_p_0(analysis__file__OldOutput_12, &analysis__file__V_13_13);
        }
#line 874 "analysis.file.m"
        {
#line 874 "analysis.file.m"
          mercury__io__close_output_3_p_0(analysis__file__Stream_11);
#line 874 "analysis.file.m"
          return;
        }
#line 868 "analysis.file.m"
      }
#line 865 "analysis.file.m"
  }
#line 862 "analysis.file.m"
}

#line 886 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_10_p_0_1(
#line 886 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 886 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 886 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_4)
#line 886 "analysis.file.m"
{
#line 886 "analysis.file.m"
  {
#line 886 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 886 "analysis.file.m"
    {
#line 886 "analysis.file.m"
      analysis__file__write_analysis_file_3_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4))), ((MR_String) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2));
#line 886 "analysis.file.m"
      return;
    }
#line 886 "analysis.file.m"
  }
#line 886 "analysis.file.m"
}

#line 844 "analysis.file.m"
static void MR_CALL 
analysis__file__write_analysis_file_10_p_0(
#line 844 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_27,
#line 844 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_26,
#line 844 "analysis.file.m"
  MR_Box analysis__file__Compiler_11,
#line 844 "analysis.file.m"
  MR_Word analysis__file__Globals_12,
#line 844 "analysis.file.m"
  MR_Word analysis__file__ModuleName_13,
#line 844 "analysis.file.m"
  MR_String analysis__file__Suffix_14,
#line 844 "analysis.file.m"
  MR_Word analysis__file__ToTmp_15,
#line 844 "analysis.file.m"
  MR_Word analysis__file__WriteEntry_16,
#line 844 "analysis.file.m"
  MR_Word analysis__file__ModuleResults_17,
#line 844 "analysis.file.m"
  MR_String * analysis__file__FileName_18)
#line 844 "analysis.file.m"
{
#line 850 "analysis.file.m"
  {
#line 850 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 850 "analysis.file.m"
    MR_String analysis__file__WriteFileName_20;
#line 850 "analysis.file.m"
    MR_Word analysis__file__OpenResult_34;
#line 5044 "analysis.file.c"
    void MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_26, (MR_Integer) 0)), (MR_Integer) 8)));
#line 5046 "analysis.file.c"
    MR_Box analysis__file__conv2_FileName_18;
#line 5048 "analysis.file.c"
    MR_Box analysis__file__conv1_STATE_VARIABLE_IO_23_23;

#line 5051 "analysis.file.c"
    {
#line 5053 "analysis.file.c"
      analysis__file__func_0(((MR_Box) analysis__file__TypeClassInfo_for_compiler_26), analysis__file__Compiler_11, ((MR_Box) (analysis__file__Globals_12)), ((MR_Box) (analysis__file__ModuleName_13)), ((MR_Box) (analysis__file__Suffix_14)), &analysis__file__conv2_FileName_18, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 5056 "analysis.file.c"
    *analysis__file__FileName_18 = ((MR_String) analysis__file__conv2_FileName_18);
#line 856 "analysis.file.m"
    if ((analysis__file__ToTmp_15 == (MR_Integer) 0))
#line 858 "analysis.file.m"
      analysis__file__WriteFileName_20 = *analysis__file__FileName_18;
#line 856 "analysis.file.m"
    else
#line 854 "analysis.file.m"
      {
#line 855 "analysis.file.m"
        {
#line 855 "analysis.file.m"
          analysis__file__WriteFileName_20 = mercury__string__f_43_43_2_f_0(*analysis__file__FileName_18, (MR_String) ".tmp");
        }
#line 854 "analysis.file.m"
      }
#line 866 "analysis.file.m"
    {
#line 866 "analysis.file.m"
      mercury__io__open_output_4_p_0(analysis__file__WriteFileName_20, &analysis__file__OpenResult_34);
    }
#line 875 "analysis.file.m"
    if (((MR_tag((MR_Word) analysis__file__OpenResult_34)) == (MR_mktag((MR_Integer) 1))))
#line 876 "analysis.file.m"
      {
#line 876 "analysis.file.m"
        MR_Word analysis__file__IOError_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__OpenResult_34, (MR_Integer) 0)));
#line 876 "analysis.file.m"
        MR_String analysis__file__V_42_42;
#line 876 "analysis.file.m"
        MR_String analysis__file__V_44_44;
#line 876 "analysis.file.m"
        MR_String analysis__file__V_45_45;
#line 876 "analysis.file.m"
        MR_String analysis__file__V_47_47;

#line 879 "analysis.file.m"
        {
#line 879 "analysis.file.m"
          analysis__file__V_47_47 = mercury__io__error_message_1_f_0(analysis__file__IOError_38);
        }
#line 878 "analysis.file.m"
        {
#line 878 "analysis.file.m"
          analysis__file__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", analysis__file__V_47_47);
        }
#line 878 "analysis.file.m"
        {
#line 878 "analysis.file.m"
          analysis__file__V_44_44 = mercury__string__f_43_43_2_f_0(analysis__file__WriteFileName_20, analysis__file__V_45_45);
        }
#line 878 "analysis.file.m"
        {
#line 878 "analysis.file.m"
          analysis__file__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "error opening \140", analysis__file__V_44_44);
        }
#line 877 "analysis.file.m"
        {
#line 877 "analysis.file.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.write_analysis_file\'/5", analysis__file__V_42_42);
#line 877 "analysis.file.m"
          return;
        }
#line 876 "analysis.file.m"
      }
#line 875 "analysis.file.m"
    else
#line 868 "analysis.file.m"
      {
#line 868 "analysis.file.m"
        MR_Word analysis__file__TypeInfo_20_70;
#line 868 "analysis.file.m"
        MR_Word analysis__file__TypeInfo_22_72;
#line 868 "analysis.file.m"
        MR_Word analysis__file__Stream_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__OpenResult_34, (MR_Integer) 0)));
#line 868 "analysis.file.m"
        MR_Word analysis__file__OldOutput_36;
#line 868 "analysis.file.m"
        MR_Word analysis__file__V_61_61;
#line 886 "analysis.file.m"
        MR_Box analysis__file__conv3_STATE_VARIABLE_IO_31_53;
#line 873 "analysis.file.m"
        MR_Word analysis__file__V_37_37;

#line 869 "analysis.file.m"
        {
#line 869 "analysis.file.m"
          mercury__io__set_output_stream_4_p_0(analysis__file__Stream_35, &analysis__file__OldOutput_36);
        }
#line 870 "analysis.file.m"
        {
#line 870 "analysis.file.m"
          mercury__io__write_int_3_p_0((MR_Integer) 6);
        }
#line 871 "analysis.file.m"
        {
#line 871 "analysis.file.m"
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
#line 886 "analysis.file.m"
        {
#line 886 "analysis.file.m"
          analysis__file__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 886 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_61_61, 0) = ((MR_Box) (&analysis__file_scalar_common_9[1]));
#line 886 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_61_61, 1) = ((MR_Box) (analysis__file__write_analysis_file_10_p_0_1));
#line 886 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 886 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_61_61, 3) = ((MR_Box) (analysis__file__TypeInfo_for_T_27));
#line 886 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_61_61, 4) = ((MR_Box) (analysis__file__WriteEntry_16));
#line 886 "analysis.file.m"
        }
#line 5172 "analysis.file.c"
        {
#line 5174 "analysis.file.c"
          analysis__file__TypeInfo_20_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5176 "analysis.file.c"
          MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_20_70, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 5178 "analysis.file.c"
          MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_20_70, 1) = ((MR_Box) (analysis__file__TypeInfo_for_T_27));
#line 5180 "analysis.file.c"
        }
#line 5182 "analysis.file.c"
        {
#line 5184 "analysis.file.c"
          analysis__file__TypeInfo_22_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5186 "analysis.file.c"
          MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_22_72, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 5188 "analysis.file.c"
          MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_22_72, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
#line 5190 "analysis.file.c"
          MR_hl_field(MR_mktag(0), analysis__file__TypeInfo_22_72, 2) = ((MR_Box) (analysis__file__TypeInfo_20_70));
#line 5192 "analysis.file.c"
        }
#line 886 "analysis.file.m"
        {
#line 886 "analysis.file.m"
          mercury__map__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__file__TypeInfo_22_72, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) analysis__file__V_61_61, (MR_Word) analysis__file__ModuleResults_17, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv3_STATE_VARIABLE_IO_31_53);
        }
#line 873 "analysis.file.m"
        {
#line 873 "analysis.file.m"
          mercury__io__set_output_stream_4_p_0(analysis__file__OldOutput_36, &analysis__file__V_37_37);
        }
#line 874 "analysis.file.m"
        {
#line 874 "analysis.file.m"
          mercury__io__close_output_3_p_0(analysis__file__Stream_35);
#line 874 "analysis.file.m"
          return;
        }
#line 868 "analysis.file.m"
      }
#line 850 "analysis.file.m"
  }
#line 844 "analysis.file.m"
}

#line 793 "analysis.file.m"
static void MR_CALL 
analysis__file__write_imdg_arc_6_p_0(
#line 793 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_47,
#line 793 "analysis.file.m"
  MR_Box analysis__file__Compiler_7,
#line 793 "analysis.file.m"
  MR_String analysis__file__AnalysisName_8,
#line 793 "analysis.file.m"
  MR_Word analysis__file__FuncId_9,
#line 793 "analysis.file.m"
  MR_Word analysis__file__Arc_10)
#line 793 "analysis.file.m"
{
#line 796 "analysis.file.m"
  {
#line 796 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 796 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_call_pattern_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Arc_10, (MR_Integer) 0)));
#line 796 "analysis.file.m"
    MR_Word analysis__file__TypeCtorInfo_50_50;
#line 796 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_to_term_51;
#line 796 "analysis.file.m"
    MR_Box analysis__file__Call_12 = (MR_hl_field(MR_mktag(0), analysis__file__Arc_10, (MR_Integer) 1));
#line 796 "analysis.file.m"
    MR_Word analysis__file__DependentModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Arc_10, (MR_Integer) 2)));
#line 796 "analysis.file.m"
    MR_Integer analysis__file__VersionNumber_17;
#line 796 "analysis.file.m"
    MR_Word analysis__file__V_42_42;
#line 796 "analysis.file.m"
    MR_Word analysis__file__V_43_43;
#line 796 "analysis.file.m"
    MR_Word analysis__file__PredOrFunc_60;
#line 796 "analysis.file.m"
    MR_String analysis__file__Name_61;
#line 796 "analysis.file.m"
    MR_Integer analysis__file__Arity_62;
#line 796 "analysis.file.m"
    MR_Integer analysis__file__ProcId_63;
#line 796 "analysis.file.m"
    MR_Integer analysis__file__V_75_75;
#line 803 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_analysis_49;
#line 800 "analysis.file.m"
    MR_Word analysis__file__V_22_22;
#line 5267 "analysis.file.c"
    MR_bool MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_47, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5269 "analysis.file.c"
    MR_Box analysis__file__conv1_V_22_22;
#line 5271 "analysis.file.c"
    MR_Box MR_CALL (* analysis__file__func_4)(MR_Box, MR_Box);
#line 5273 "analysis.file.c"
    MR_Box analysis__file__conv5_V_43_43;

#line 5276 "analysis.file.c"
    {
#line 5278 "analysis.file.c"
      analysis__file__succeeded = analysis__file__func_0(((MR_Box) analysis__file__TypeClassInfo_for_compiler_47), analysis__file__Compiler_7, ((MR_Box) (analysis__file__AnalysisName_8)), &analysis__file__conv1_V_22_22);
    }
#line 5281 "analysis.file.c"
    if (analysis__file__succeeded)
#line 5283 "analysis.file.c"
      {
#line 5285 "analysis.file.c"
        analysis__file__V_22_22 = ((MR_Word) analysis__file__conv1_V_22_22);
#line 5287 "analysis.file.c"
        analysis__file__succeeded = MR_TRUE;
#line 5289 "analysis.file.c"
      }
#line 800 "analysis.file.m"
    if (analysis__file__succeeded)
#line 800 "analysis.file.m"
      {
#line 799 "analysis.file.m"
        analysis__file__TypeClassInfo_for_analysis_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_22_22, (MR_Integer) 0)));
#line 799 "analysis.file.m"
        analysis__file__succeeded = MR_TRUE;
#line 800 "analysis.file.m"
      }
#line 803 "analysis.file.m"
    if (analysis__file__succeeded)
#line 5303 "analysis.file.c"
      {
#line 5305 "analysis.file.c"
        MR_Box analysis__file__V_25_25;
#line 5307 "analysis.file.c"
        MR_Box analysis__file__V_26_26;
#line 5309 "analysis.file.c"
        MR_Box MR_CALL (* analysis__file__func_2)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_analysis_49, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5311 "analysis.file.c"
        MR_Box analysis__file__conv3_VersionNumber_17;

#line 5314 "analysis.file.c"
        {
#line 5316 "analysis.file.c"
          analysis__file__conv3_VersionNumber_17 = analysis__file__func_2(((MR_Box) analysis__file__TypeClassInfo_for_analysis_49));
        }
#line 5319 "analysis.file.c"
        analysis__file__VersionNumber_17 = ((MR_Integer) analysis__file__conv3_VersionNumber_17);
#line 5321 "analysis.file.c"
      }
#line 803 "analysis.file.m"
    else
#line 804 "analysis.file.m"
      {
#line 804 "analysis.file.m"
        {
#line 804 "analysis.file.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.write_imdg_arc\'/6", (MR_String) "unknown analysis type");
#line 804 "analysis.file.m"
          return;
        }
#line 804 "analysis.file.m"
      }
#line 840 "analysis.file.m"
    {
#line 840 "analysis.file.m"
      parse_tree__prog_out__write_quoted_sym_name_3_p_0(analysis__file__DependentModule_13);
    }
#line 808 "analysis.file.m"
    {
#line 808 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 809 "analysis.file.m"
    {
#line 809 "analysis.file.m"
      mercury__io__write_string_3_p_0(analysis__file__AnalysisName_8);
    }
#line 810 "analysis.file.m"
    {
#line 810 "analysis.file.m"
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
#line 811 "analysis.file.m"
    {
#line 811 "analysis.file.m"
      mercury__io__write_int_3_p_0(analysis__file__VersionNumber_17);
    }
#line 812 "analysis.file.m"
    {
#line 812 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 822 "analysis.file.m"
    analysis__file__PredOrFunc_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__FuncId_9, (MR_Integer) 0)));
#line 822 "analysis.file.m"
    analysis__file__Name_61 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__FuncId_9, (MR_Integer) 1)));
#line 822 "analysis.file.m"
    analysis__file__Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__file__FuncId_9, (MR_Integer) 2)));
#line 822 "analysis.file.m"
    analysis__file__ProcId_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__file__FuncId_9, (MR_Integer) 3)));
#line 826 "analysis.file.m"
    if ((analysis__file__PredOrFunc_60 == (MR_Integer) 1))
#line 827 "analysis.file.m"
      {
#line 828 "analysis.file.m"
        {
#line 828 "analysis.file.m"
          mercury__io__write_string_3_p_0((MR_String) "f(");
        }
#line 827 "analysis.file.m"
      }
#line 826 "analysis.file.m"
    else
#line 824 "analysis.file.m"
      {
#line 825 "analysis.file.m"
        {
#line 825 "analysis.file.m"
          mercury__io__write_string_3_p_0((MR_String) "p(");
        }
#line 824 "analysis.file.m"
      }
#line 830 "analysis.file.m"
    {
#line 830 "analysis.file.m"
      mercury__term_io__quote_atom_3_p_0(analysis__file__Name_61);
    }
#line 831 "analysis.file.m"
    {
#line 831 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 832 "analysis.file.m"
    {
#line 832 "analysis.file.m"
      mercury__io__write_int_3_p_0(analysis__file__Arity_62);
    }
#line 833 "analysis.file.m"
    {
#line 833 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 834 "analysis.file.m"
    {
#line 834 "analysis.file.m"
      analysis__file__V_75_75 = hlds__hlds_pred__proc_id_to_int_1_f_0(analysis__file__ProcId_63);
    }
#line 834 "analysis.file.m"
    {
#line 834 "analysis.file.m"
      mercury__io__write_int_3_p_0(analysis__file__V_75_75);
    }
#line 835 "analysis.file.m"
    {
#line 835 "analysis.file.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 814 "analysis.file.m"
    {
#line 814 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 5436 "analysis.file.c"
    analysis__file__TypeCtorInfo_50_50 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 815 "analysis.file.m"
    {
#line 815 "analysis.file.m"
      analysis__file__V_42_42 = mercury__varset__init_0_f_0(analysis__file__TypeCtorInfo_50_50);
    }
#line 5443 "analysis.file.c"
    {
#line 5445 "analysis.file.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_call_pattern_48, (MR_Integer) 2, &analysis__file__TypeClassInfo_for_to_term_51);
    }
#line 5448 "analysis.file.c"
    analysis__file__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_to_term_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5450 "analysis.file.c"
    {
#line 5452 "analysis.file.c"
      analysis__file__conv5_V_43_43 = analysis__file__func_4(((MR_Box) analysis__file__TypeClassInfo_for_to_term_51), analysis__file__Call_12);
    }
#line 5455 "analysis.file.c"
    analysis__file__V_43_43 = ((MR_Word) analysis__file__conv5_V_43_43);
#line 815 "analysis.file.m"
    {
#line 815 "analysis.file.m"
      mercury__term_io__write_term_4_p_0(analysis__file__TypeCtorInfo_50_50, analysis__file__V_42_42, analysis__file__V_43_43);
    }
#line 816 "analysis.file.m"
    {
#line 816 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 816 "analysis.file.m"
      return;
    }
#line 796 "analysis.file.m"
  }
#line 793 "analysis.file.m"
}

#line 761 "analysis.file.m"
static void MR_CALL 
analysis__file__write_request_entry_6_p_0(
#line 761 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_47,
#line 761 "analysis.file.m"
  MR_Box analysis__file__Compiler_7,
#line 761 "analysis.file.m"
  MR_String analysis__file__AnalysisName_8,
#line 761 "analysis.file.m"
  MR_Word analysis__file__FuncId_9,
#line 761 "analysis.file.m"
  MR_Word analysis__file__Request_10)
#line 761 "analysis.file.m"
{
#line 764 "analysis.file.m"
  {
#line 764 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 764 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_call_pattern_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Request_10, (MR_Integer) 0)));
#line 764 "analysis.file.m"
    MR_Word analysis__file__TypeCtorInfo_50_50;
#line 764 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_to_term_51;
#line 764 "analysis.file.m"
    MR_Box analysis__file__Call_12 = (MR_hl_field(MR_mktag(0), analysis__file__Request_10, (MR_Integer) 1));
#line 764 "analysis.file.m"
    MR_Word analysis__file__CallerModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Request_10, (MR_Integer) 2)));
#line 764 "analysis.file.m"
    MR_Integer analysis__file__VersionNumber_17;
#line 764 "analysis.file.m"
    MR_Word analysis__file__V_42_42;
#line 764 "analysis.file.m"
    MR_Word analysis__file__V_43_43;
#line 764 "analysis.file.m"
    MR_Word analysis__file__PredOrFunc_60;
#line 764 "analysis.file.m"
    MR_String analysis__file__Name_61;
#line 764 "analysis.file.m"
    MR_Integer analysis__file__Arity_62;
#line 764 "analysis.file.m"
    MR_Integer analysis__file__ProcId_63;
#line 764 "analysis.file.m"
    MR_Integer analysis__file__V_75_75;
#line 771 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_analysis_49;
#line 768 "analysis.file.m"
    MR_Word analysis__file__V_22_22;
#line 5523 "analysis.file.c"
    MR_bool MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_47, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5525 "analysis.file.c"
    MR_Box analysis__file__conv1_V_22_22;
#line 5527 "analysis.file.c"
    MR_Box MR_CALL (* analysis__file__func_4)(MR_Box, MR_Box);
#line 5529 "analysis.file.c"
    MR_Box analysis__file__conv5_V_43_43;

#line 5532 "analysis.file.c"
    {
#line 5534 "analysis.file.c"
      analysis__file__succeeded = analysis__file__func_0(((MR_Box) analysis__file__TypeClassInfo_for_compiler_47), analysis__file__Compiler_7, ((MR_Box) (analysis__file__AnalysisName_8)), &analysis__file__conv1_V_22_22);
    }
#line 5537 "analysis.file.c"
    if (analysis__file__succeeded)
#line 5539 "analysis.file.c"
      {
#line 5541 "analysis.file.c"
        analysis__file__V_22_22 = ((MR_Word) analysis__file__conv1_V_22_22);
#line 5543 "analysis.file.c"
        analysis__file__succeeded = MR_TRUE;
#line 5545 "analysis.file.c"
      }
#line 768 "analysis.file.m"
    if (analysis__file__succeeded)
#line 768 "analysis.file.m"
      {
#line 767 "analysis.file.m"
        analysis__file__TypeClassInfo_for_analysis_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_22_22, (MR_Integer) 0)));
#line 767 "analysis.file.m"
        analysis__file__succeeded = MR_TRUE;
#line 768 "analysis.file.m"
      }
#line 771 "analysis.file.m"
    if (analysis__file__succeeded)
#line 5559 "analysis.file.c"
      {
#line 5561 "analysis.file.c"
        MR_Box analysis__file__V_25_25;
#line 5563 "analysis.file.c"
        MR_Box analysis__file__V_26_26;
#line 5565 "analysis.file.c"
        MR_Box MR_CALL (* analysis__file__func_2)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_analysis_49, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5567 "analysis.file.c"
        MR_Box analysis__file__conv3_VersionNumber_17;

#line 5570 "analysis.file.c"
        {
#line 5572 "analysis.file.c"
          analysis__file__conv3_VersionNumber_17 = analysis__file__func_2(((MR_Box) analysis__file__TypeClassInfo_for_analysis_49));
        }
#line 5575 "analysis.file.c"
        analysis__file__VersionNumber_17 = ((MR_Integer) analysis__file__conv3_VersionNumber_17);
#line 5577 "analysis.file.c"
      }
#line 771 "analysis.file.m"
    else
#line 772 "analysis.file.m"
      {
#line 772 "analysis.file.m"
        {
#line 772 "analysis.file.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.write_request_entry\'/6", (MR_String) "unknown analysis type");
#line 772 "analysis.file.m"
          return;
        }
#line 772 "analysis.file.m"
      }
#line 840 "analysis.file.m"
    {
#line 840 "analysis.file.m"
      parse_tree__prog_out__write_quoted_sym_name_3_p_0(analysis__file__CallerModule_13);
    }
#line 776 "analysis.file.m"
    {
#line 776 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) " -> ");
    }
#line 777 "analysis.file.m"
    {
#line 777 "analysis.file.m"
      mercury__io__write_string_3_p_0(analysis__file__AnalysisName_8);
    }
#line 778 "analysis.file.m"
    {
#line 778 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 779 "analysis.file.m"
    {
#line 779 "analysis.file.m"
      mercury__io__write_int_3_p_0(analysis__file__VersionNumber_17);
    }
#line 780 "analysis.file.m"
    {
#line 780 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 822 "analysis.file.m"
    analysis__file__PredOrFunc_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__FuncId_9, (MR_Integer) 0)));
#line 822 "analysis.file.m"
    analysis__file__Name_61 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__FuncId_9, (MR_Integer) 1)));
#line 822 "analysis.file.m"
    analysis__file__Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__file__FuncId_9, (MR_Integer) 2)));
#line 822 "analysis.file.m"
    analysis__file__ProcId_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__file__FuncId_9, (MR_Integer) 3)));
#line 826 "analysis.file.m"
    if ((analysis__file__PredOrFunc_60 == (MR_Integer) 1))
#line 827 "analysis.file.m"
      {
#line 828 "analysis.file.m"
        {
#line 828 "analysis.file.m"
          mercury__io__write_string_3_p_0((MR_String) "f(");
        }
#line 827 "analysis.file.m"
      }
#line 826 "analysis.file.m"
    else
#line 824 "analysis.file.m"
      {
#line 825 "analysis.file.m"
        {
#line 825 "analysis.file.m"
          mercury__io__write_string_3_p_0((MR_String) "p(");
        }
#line 824 "analysis.file.m"
      }
#line 830 "analysis.file.m"
    {
#line 830 "analysis.file.m"
      mercury__term_io__quote_atom_3_p_0(analysis__file__Name_61);
    }
#line 831 "analysis.file.m"
    {
#line 831 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 832 "analysis.file.m"
    {
#line 832 "analysis.file.m"
      mercury__io__write_int_3_p_0(analysis__file__Arity_62);
    }
#line 833 "analysis.file.m"
    {
#line 833 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 834 "analysis.file.m"
    {
#line 834 "analysis.file.m"
      analysis__file__V_75_75 = hlds__hlds_pred__proc_id_to_int_1_f_0(analysis__file__ProcId_63);
    }
#line 834 "analysis.file.m"
    {
#line 834 "analysis.file.m"
      mercury__io__write_int_3_p_0(analysis__file__V_75_75);
    }
#line 835 "analysis.file.m"
    {
#line 835 "analysis.file.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 782 "analysis.file.m"
    {
#line 782 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 5692 "analysis.file.c"
    analysis__file__TypeCtorInfo_50_50 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 783 "analysis.file.m"
    {
#line 783 "analysis.file.m"
      analysis__file__V_42_42 = mercury__varset__init_0_f_0(analysis__file__TypeCtorInfo_50_50);
    }
#line 5699 "analysis.file.c"
    {
#line 5701 "analysis.file.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_call_pattern_48, (MR_Integer) 2, &analysis__file__TypeClassInfo_for_to_term_51);
    }
#line 5704 "analysis.file.c"
    analysis__file__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_to_term_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5706 "analysis.file.c"
    {
#line 5708 "analysis.file.c"
      analysis__file__conv5_V_43_43 = analysis__file__func_4(((MR_Box) analysis__file__TypeClassInfo_for_to_term_51), analysis__file__Call_12);
    }
#line 5711 "analysis.file.c"
    analysis__file__V_43_43 = ((MR_Word) analysis__file__conv5_V_43_43);
#line 783 "analysis.file.m"
    {
#line 783 "analysis.file.m"
      mercury__term_io__write_term_4_p_0(analysis__file__TypeCtorInfo_50_50, analysis__file__V_42_42, analysis__file__V_43_43);
    }
#line 784 "analysis.file.m"
    {
#line 784 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 784 "analysis.file.m"
      return;
    }
#line 764 "analysis.file.m"
  }
#line 761 "analysis.file.m"
}

#line 686 "analysis.file.m"
static void MR_CALL 
analysis__file__write_result_entry_5_p_0(
#line 686 "analysis.file.m"
  MR_String analysis__file__AnalysisName_6,
#line 686 "analysis.file.m"
  MR_Word analysis__file__FuncId_7,
#line 686 "analysis.file.m"
  MR_Word analysis__file__Result_8)
#line 686 "analysis.file.m"
{
#line 689 "analysis.file.m"
  {
#line 689 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 689 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_analysis_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Result_8, (MR_Integer) 0)));
#line 689 "analysis.file.m"
    MR_Word analysis__file__TypeCtorInfo_40_40;
#line 689 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_call_pattern_41;
#line 689 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_to_term_43;
#line 689 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_answer_pattern_45;
#line 689 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_to_term_46;
#line 689 "analysis.file.m"
    MR_Box analysis__file__Call_10 = (MR_hl_field(MR_mktag(0), analysis__file__Result_8, (MR_Integer) 1));
#line 689 "analysis.file.m"
    MR_Box analysis__file__Answer_11 = (MR_hl_field(MR_mktag(0), analysis__file__Result_8, (MR_Integer) 2));
#line 689 "analysis.file.m"
    MR_Word analysis__file__Status_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Result_8, (MR_Integer) 3)));
#line 689 "analysis.file.m"
    MR_Integer analysis__file__VersionNumber_13;
#line 689 "analysis.file.m"
    MR_String analysis__file__StatusString_14;
#line 689 "analysis.file.m"
    MR_Word analysis__file__V_26_26;
#line 689 "analysis.file.m"
    MR_Word analysis__file__V_27_27;
#line 689 "analysis.file.m"
    MR_Word analysis__file__V_31_31;
#line 689 "analysis.file.m"
    MR_Word analysis__file__V_32_32;
#line 689 "analysis.file.m"
    MR_Word analysis__file__PredOrFunc_51;
#line 689 "analysis.file.m"
    MR_String analysis__file__Name_52;
#line 689 "analysis.file.m"
    MR_Integer analysis__file__Arity_53;
#line 689 "analysis.file.m"
    MR_Integer analysis__file__ProcId_54;
#line 689 "analysis.file.m"
    MR_Integer analysis__file__V_66_66;
#line 5785 "analysis.file.c"
    MR_Box analysis__file__V_47_47;
#line 5787 "analysis.file.c"
    MR_Box analysis__file__V_48_48;
#line 5789 "analysis.file.c"
    MR_Box MR_CALL (* analysis__file__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_analysis_39, (MR_Integer) 0)), (MR_Integer) 6)));
#line 5791 "analysis.file.c"
    MR_Box analysis__file__conv1_VersionNumber_13;
#line 5793 "analysis.file.c"
    MR_Box MR_CALL (* analysis__file__func_2)(MR_Box, MR_Box);
#line 5795 "analysis.file.c"
    MR_Box analysis__file__conv3_V_27_27;
#line 5797 "analysis.file.c"
    MR_Box MR_CALL (* analysis__file__func_4)(MR_Box, MR_Box);
#line 5799 "analysis.file.c"
    MR_Box analysis__file__conv5_V_32_32;

#line 5802 "analysis.file.c"
    {
#line 5804 "analysis.file.c"
      analysis__file__conv1_VersionNumber_13 = analysis__file__func_0(((MR_Box) analysis__file__TypeClassInfo_for_analysis_39));
    }
#line 5807 "analysis.file.c"
    analysis__file__VersionNumber_13 = ((MR_Integer) analysis__file__conv1_VersionNumber_13);
#line 184 "analysis.file.m"
    if ((analysis__file__Status_12 == (MR_Integer) 0))
#line 184 "analysis.file.m"
      analysis__file__StatusString_14 = (MR_String) "invalid";
#line 184 "analysis.file.m"
    else
#line 184 "analysis.file.m"
    if ((analysis__file__Status_12 == (MR_Integer) 2))
#line 186 "analysis.file.m"
      analysis__file__StatusString_14 = (MR_String) "optimal";
#line 184 "analysis.file.m"
    else
#line 185 "analysis.file.m"
      analysis__file__StatusString_14 = (MR_String) "suboptimal";
#line 694 "analysis.file.m"
    {
#line 694 "analysis.file.m"
      mercury__io__write_string_3_p_0(analysis__file__AnalysisName_6);
    }
#line 695 "analysis.file.m"
    {
#line 695 "analysis.file.m"
      mercury__io__write_char_3_p_0((MR_Char) 40);
    }
#line 696 "analysis.file.m"
    {
#line 696 "analysis.file.m"
      mercury__io__write_int_3_p_0(analysis__file__VersionNumber_13);
    }
#line 697 "analysis.file.m"
    {
#line 697 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 822 "analysis.file.m"
    analysis__file__PredOrFunc_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__FuncId_7, (MR_Integer) 0)));
#line 822 "analysis.file.m"
    analysis__file__Name_52 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__FuncId_7, (MR_Integer) 1)));
#line 822 "analysis.file.m"
    analysis__file__Arity_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__file__FuncId_7, (MR_Integer) 2)));
#line 822 "analysis.file.m"
    analysis__file__ProcId_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__file__FuncId_7, (MR_Integer) 3)));
#line 826 "analysis.file.m"
    if ((analysis__file__PredOrFunc_51 == (MR_Integer) 1))
#line 827 "analysis.file.m"
      {
#line 828 "analysis.file.m"
        {
#line 828 "analysis.file.m"
          mercury__io__write_string_3_p_0((MR_String) "f(");
        }
#line 827 "analysis.file.m"
      }
#line 826 "analysis.file.m"
    else
#line 824 "analysis.file.m"
      {
#line 825 "analysis.file.m"
        {
#line 825 "analysis.file.m"
          mercury__io__write_string_3_p_0((MR_String) "p(");
        }
#line 824 "analysis.file.m"
      }
#line 830 "analysis.file.m"
    {
#line 830 "analysis.file.m"
      mercury__term_io__quote_atom_3_p_0(analysis__file__Name_52);
    }
#line 831 "analysis.file.m"
    {
#line 831 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 832 "analysis.file.m"
    {
#line 832 "analysis.file.m"
      mercury__io__write_int_3_p_0(analysis__file__Arity_53);
    }
#line 833 "analysis.file.m"
    {
#line 833 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 834 "analysis.file.m"
    {
#line 834 "analysis.file.m"
      analysis__file__V_66_66 = hlds__hlds_pred__proc_id_to_int_1_f_0(analysis__file__ProcId_54);
    }
#line 834 "analysis.file.m"
    {
#line 834 "analysis.file.m"
      mercury__io__write_int_3_p_0(analysis__file__V_66_66);
    }
#line 835 "analysis.file.m"
    {
#line 835 "analysis.file.m"
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
#line 699 "analysis.file.m"
    {
#line 699 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 5913 "analysis.file.c"
    analysis__file__TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 700 "analysis.file.m"
    {
#line 700 "analysis.file.m"
      analysis__file__V_26_26 = mercury__varset__init_0_f_0(analysis__file__TypeCtorInfo_40_40);
    }
#line 5920 "analysis.file.c"
    {
#line 5922 "analysis.file.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_analysis_39, (MR_Integer) 1, &analysis__file__TypeClassInfo_for_call_pattern_41);
    }
#line 5925 "analysis.file.c"
    {
#line 5927 "analysis.file.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_call_pattern_41, (MR_Integer) 2, &analysis__file__TypeClassInfo_for_to_term_43);
    }
#line 5930 "analysis.file.c"
    analysis__file__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_to_term_43, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5932 "analysis.file.c"
    {
#line 5934 "analysis.file.c"
      analysis__file__conv3_V_27_27 = analysis__file__func_2(((MR_Box) analysis__file__TypeClassInfo_for_to_term_43), analysis__file__Call_10);
    }
#line 5937 "analysis.file.c"
    analysis__file__V_27_27 = ((MR_Word) analysis__file__conv3_V_27_27);
#line 700 "analysis.file.m"
    {
#line 700 "analysis.file.m"
      mercury__term_io__write_term_4_p_0(analysis__file__TypeCtorInfo_40_40, analysis__file__V_26_26, analysis__file__V_27_27);
    }
#line 701 "analysis.file.m"
    {
#line 701 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 702 "analysis.file.m"
    {
#line 702 "analysis.file.m"
      analysis__file__V_31_31 = mercury__varset__init_0_f_0(analysis__file__TypeCtorInfo_40_40);
    }
#line 5954 "analysis.file.c"
    {
#line 5956 "analysis.file.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_analysis_39, (MR_Integer) 2, &analysis__file__TypeClassInfo_for_answer_pattern_45);
    }
#line 5959 "analysis.file.c"
    {
#line 5961 "analysis.file.c"
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_answer_pattern_45, (MR_Integer) 2, &analysis__file__TypeClassInfo_for_to_term_46);
    }
#line 5964 "analysis.file.c"
    analysis__file__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_to_term_46, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5966 "analysis.file.c"
    {
#line 5968 "analysis.file.c"
      analysis__file__conv5_V_32_32 = analysis__file__func_4(((MR_Box) analysis__file__TypeClassInfo_for_to_term_46), analysis__file__Answer_11);
    }
#line 5971 "analysis.file.c"
    analysis__file__V_32_32 = ((MR_Word) analysis__file__conv5_V_32_32);
#line 702 "analysis.file.m"
    {
#line 702 "analysis.file.m"
      mercury__term_io__write_term_4_p_0(analysis__file__TypeCtorInfo_40_40, analysis__file__V_31_31, analysis__file__V_32_32);
    }
#line 703 "analysis.file.m"
    {
#line 703 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 704 "analysis.file.m"
    {
#line 704 "analysis.file.m"
      mercury__io__write_string_3_p_0(analysis__file__StatusString_14);
    }
#line 705 "analysis.file.m"
    {
#line 705 "analysis.file.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 705 "analysis.file.m"
      return;
    }
#line 689 "analysis.file.m"
  }
#line 686 "analysis.file.m"
}

#line 574 "analysis.file.m"
static void MR_CALL 
analysis__file__read_analysis_file_6_p_0_3(
#line 574 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 574 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_1,
#line 574 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 574 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_3)
#line 574 "analysis.file.m"
{
#line 574 "analysis.file.m"
  {
#line 574 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 574 "analysis.file.m"
    {
#line 574 "analysis.file.m"
      analysis__file__IntroducedFrom__pred__read_analysis_file__574__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4))), (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 5)), analysis__file__wrapper_arg_1);
#line 574 "analysis.file.m"
      return;
    }
#line 574 "analysis.file.m"
  }
#line 574 "analysis.file.m"
}

#line 566 "analysis.file.m"
static void MR_CALL 
analysis__file__read_analysis_file_6_p_0_2(
#line 566 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 566 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 566 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2)
#line 566 "analysis.file.m"
{
#line 566 "analysis.file.m"
  {
#line 566 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 566 "analysis.file.m"
    {
#line 566 "analysis.file.m"
      analysis__file__IntroducedFrom__pred__read_analysis_file__566__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))));
#line 566 "analysis.file.m"
      return;
    }
#line 566 "analysis.file.m"
  }
#line 566 "analysis.file.m"
}

#line 591 "analysis.file.m"
static void MR_CALL 
analysis__file__read_analysis_file_6_p_0_1(
#line 591 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 591 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 591 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2)
#line 591 "analysis.file.m"
{
#line 591 "analysis.file.m"
  {
#line 591 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 591 "analysis.file.m"
    {
#line 591 "analysis.file.m"
      analysis__file__IntroducedFrom__pred__read_analysis_file__591__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))));
#line 591 "analysis.file.m"
      return;
    }
#line 591 "analysis.file.m"
  }
#line 591 "analysis.file.m"
}

#line 558 "analysis.file.m"
static void MR_CALL 
analysis__file__read_analysis_file_6_p_0(
#line 558 "analysis.file.m"
  MR_Word analysis__file__TypeInfo_for_T_62,
#line 558 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_7,
#line 558 "analysis.file.m"
  MR_Word analysis__file__ParseEntry_8,
#line 558 "analysis.file.m"
  MR_Box analysis__file__ModuleResults0_9,
#line 558 "analysis.file.m"
  MR_Box * analysis__file__ModuleResults_10)
#line 558 "analysis.file.m"
{
#line 562 "analysis.file.m"
  {
#line 562 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 562 "analysis.file.m"
    MR_Word analysis__file__OpenResult_12;

#line 563 "analysis.file.m"
    {
#line 563 "analysis.file.m"
      mercury__io__open_input_4_p_0(analysis__file__AnalysisFileName_7, &analysis__file__OpenResult_12);
    }
#line 589 "analysis.file.m"
    if (((MR_tag((MR_Word) analysis__file__OpenResult_12)) == (MR_mktag((MR_Integer) 1))))
#line 590 "analysis.file.m"
      {
#line 590 "analysis.file.m"
        MR_Word analysis__file__V_23_23;

#line 591 "analysis.file.m"
        {
#line 591 "analysis.file.m"
          analysis__file__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 591 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_23_23, 0) = ((MR_Box) (&analysis__file_scalar_common_6[1]));
#line 591 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_23_23, 1) = ((MR_Box) (analysis__file__read_analysis_file_6_p_0_1));
#line 591 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 591 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_23_23, 3) = ((MR_Box) (analysis__file__AnalysisFileName_7));
#line 591 "analysis.file.m"
        }
#line 591 "analysis.file.m"
        {
#line 591 "analysis.file.m"
          analysis__debug_msg_3_p_0(analysis__file__V_23_23);
        }
#line 596 "analysis.file.m"
        *analysis__file__ModuleResults_10 = analysis__file__ModuleResults0_9;
#line 590 "analysis.file.m"
      }
#line 589 "analysis.file.m"
    else
#line 565 "analysis.file.m"
      {
#line 565 "analysis.file.m"
        MR_Word analysis__file__Stream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__OpenResult_12, (MR_Integer) 0)));
#line 565 "analysis.file.m"
        MR_Word analysis__file__OldStream_14;
#line 565 "analysis.file.m"
        MR_Word analysis__file__Result_15;
#line 565 "analysis.file.m"
        MR_Word analysis__file__V_33_33;
#line 574 "analysis.file.m"
        MR_Word analysis__file__V_44_44;
#line 581 "analysis.file.m"
        MR_Word analysis__file__V_17_17;

#line 566 "analysis.file.m"
        {
#line 566 "analysis.file.m"
          analysis__file__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 566 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_33_33, 0) = ((MR_Box) (&analysis__file_scalar_common_6[1]));
#line 566 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_33_33, 1) = ((MR_Box) (analysis__file__read_analysis_file_6_p_0_2));
#line 566 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 566 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_33_33, 3) = ((MR_Box) (analysis__file__AnalysisFileName_7));
#line 566 "analysis.file.m"
        }
#line 566 "analysis.file.m"
        {
#line 566 "analysis.file.m"
          analysis__debug_msg_3_p_0(analysis__file__V_33_33);
        }
#line 571 "analysis.file.m"
        {
#line 571 "analysis.file.m"
          mercury__io__set_input_stream_4_p_0(analysis__file__Stream_13, &analysis__file__OldStream_14);
        }
#line 574 "analysis.file.m"
        {
#line 574 "analysis.file.m"
          analysis__file__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 574 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_44_44, 0) = ((MR_Box) (&analysis__file_scalar_common_9[0]));
#line 574 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_44_44, 1) = ((MR_Box) (analysis__file__read_analysis_file_6_p_0_3));
#line 574 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 574 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_44_44, 3) = ((MR_Box) (analysis__file__TypeInfo_for_T_62));
#line 574 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_44_44, 4) = ((MR_Box) (analysis__file__ParseEntry_8));
#line 574 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_44_44, 5) = analysis__file__ModuleResults0_9;
#line 574 "analysis.file.m"
        }
#line 574 "analysis.file.m"
        {
#line 574 "analysis.file.m"
          mercury__exception__try_io_4_p_0(analysis__file__TypeInfo_for_T_62, analysis__file__V_44_44, &analysis__file__Result_15);
        }
#line 581 "analysis.file.m"
        {
#line 581 "analysis.file.m"
          mercury__io__set_input_stream_4_p_0(analysis__file__OldStream_14, &analysis__file__V_17_17);
        }
#line 582 "analysis.file.m"
        {
#line 582 "analysis.file.m"
          mercury__io__close_input_3_p_0(analysis__file__Stream_13);
        }
#line 585 "analysis.file.m"
        if (((MR_tag((MR_Word) analysis__file__Result_15)) == (MR_mktag((MR_Integer) 2))))
#line 587 "analysis.file.m"
          {
#line 587 "analysis.file.m"
            mercury__exception__rethrow_1_p_0(analysis__file__TypeInfo_for_T_62, analysis__file__Result_15);
#line 587 "analysis.file.m"
            return;
          }
#line 585 "analysis.file.m"
        else
#line 584 "analysis.file.m"
          *analysis__file__ModuleResults_10 = (MR_hl_field(MR_mktag(1), analysis__file__Result_15, (MR_Integer) 0));
#line 565 "analysis.file.m"
      }
#line 562 "analysis.file.m"
  }
#line 558 "analysis.file.m"
}

#line 508 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__parse_func_id_2_p_0(
#line 508 "analysis.file.m"
  MR_Word analysis__file__Term_3,
#line 508 "analysis.file.m"
  MR_Word * analysis__file__FuncId_4)
#line 508 "analysis.file.m"
{
#line 510 "analysis.file.m"
  {
#line 510 "analysis.file.m"
    MR_bool analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 510 "analysis.file.m"
    MR_String analysis__file__PF_5;
#line 510 "analysis.file.m"
    MR_Word analysis__file__NameTerm_6;
#line 510 "analysis.file.m"
    MR_Word analysis__file__ArityTerm_7;
#line 510 "analysis.file.m"
    MR_Word analysis__file__ProcTerm_8;
#line 510 "analysis.file.m"
    MR_Word analysis__file__PredOrFunc_10;
#line 510 "analysis.file.m"
    MR_String analysis__file__Name_11;
#line 510 "analysis.file.m"
    MR_Integer analysis__file__Arity_13;
#line 510 "analysis.file.m"
    MR_Integer analysis__file__ProcInt_15;
#line 510 "analysis.file.m"
    MR_Integer analysis__file__ProcId_17;
#line 510 "analysis.file.m"
    MR_Word analysis__file__V_18_18;
#line 510 "analysis.file.m"
    MR_Word analysis__file__V_19_19;
#line 510 "analysis.file.m"
    MR_Word analysis__file__V_20_20;
#line 510 "analysis.file.m"
    MR_Word analysis__file__V_21_21;
#line 510 "analysis.file.m"
    MR_Word analysis__file__V_22_22;
#line 510 "analysis.file.m"
    MR_Word analysis__file__V_23_23;
#line 510 "analysis.file.m"
    MR_Word analysis__file__V_24_24;
#line 510 "analysis.file.m"
    MR_Word analysis__file__V_25_25;
#line 510 "analysis.file.m"
    MR_Word analysis__file__V_26_26;
#line 510 "analysis.file.m"
    MR_Word analysis__file__V_27_27;
#line 510 "analysis.file.m"
    MR_Word analysis__file__V_28_28;
#line 511 "analysis.file.m"
    MR_Word analysis__file__V_9_9;
#line 519 "analysis.file.m"
    MR_Word analysis__file__V_12_12;
#line 520 "analysis.file.m"
    MR_Word analysis__file__V_14_14;
#line 521 "analysis.file.m"
    MR_Word analysis__file__V_16_16;

#line 511 "analysis.file.m"
    if (analysis__file__succeeded)
#line 511 "analysis.file.m"
      {
#line 511 "analysis.file.m"
        analysis__file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_3, (MR_Integer) 0)));
#line 511 "analysis.file.m"
        analysis__file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_3, (MR_Integer) 1)));
#line 511 "analysis.file.m"
        analysis__file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_3, (MR_Integer) 2)));
#line 511 "analysis.file.m"
        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 511 "analysis.file.m"
        if (analysis__file__succeeded)
#line 511 "analysis.file.m"
          {
#line 511 "analysis.file.m"
            analysis__file__PF_5 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__V_18_18, (MR_Integer) 0)));
#line 511 "analysis.file.m"
            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 511 "analysis.file.m"
            if (analysis__file__succeeded)
#line 511 "analysis.file.m"
              {
#line 511 "analysis.file.m"
                analysis__file__NameTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_19_19, (MR_Integer) 0)));
#line 511 "analysis.file.m"
                analysis__file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_19_19, (MR_Integer) 1)));
#line 511 "analysis.file.m"
                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 511 "analysis.file.m"
                if (analysis__file__succeeded)
#line 511 "analysis.file.m"
                  {
#line 511 "analysis.file.m"
                    analysis__file__ArityTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_20_20, (MR_Integer) 0)));
#line 511 "analysis.file.m"
                    analysis__file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_20_20, (MR_Integer) 1)));
#line 511 "analysis.file.m"
                    analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 511 "analysis.file.m"
                    if (analysis__file__succeeded)
#line 511 "analysis.file.m"
                      {
#line 511 "analysis.file.m"
                        analysis__file__ProcTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_21_21, (MR_Integer) 0)));
#line 511 "analysis.file.m"
                        analysis__file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_21_21, (MR_Integer) 1)));
#line 511 "analysis.file.m"
                        analysis__file__succeeded = (analysis__file__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 510 "analysis.file.m"
                        if (analysis__file__succeeded)
#line 510 "analysis.file.m"
                          {
#line 515 "analysis.file.m"
                            if ((strcmp(analysis__file__PF_5, (MR_String) "f") == 0))
#line 517 "analysis.file.m"
                              {
#line 517 "analysis.file.m"
                                analysis__file__PredOrFunc_10 = (MR_Integer) 1;
#line 517 "analysis.file.m"
                                analysis__file__succeeded = MR_TRUE;
#line 517 "analysis.file.m"
                              }
#line 515 "analysis.file.m"
                            else
#line 515 "analysis.file.m"
                            if ((strcmp(analysis__file__PF_5, (MR_String) "p") == 0))
#line 514 "analysis.file.m"
                              {
#line 514 "analysis.file.m"
                                analysis__file__PredOrFunc_10 = (MR_Integer) 0;
#line 514 "analysis.file.m"
                                analysis__file__succeeded = MR_TRUE;
#line 514 "analysis.file.m"
                              }
#line 515 "analysis.file.m"
                            else
#line 515 "analysis.file.m"
                              analysis__file__succeeded = MR_FALSE;
#line 510 "analysis.file.m"
                            if (analysis__file__succeeded)
#line 510 "analysis.file.m"
                              {
#line 519 "analysis.file.m"
                                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__NameTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 519 "analysis.file.m"
                                if (analysis__file__succeeded)
#line 519 "analysis.file.m"
                                  {
#line 519 "analysis.file.m"
                                    analysis__file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__NameTerm_6, (MR_Integer) 0)));
#line 519 "analysis.file.m"
                                    analysis__file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__NameTerm_6, (MR_Integer) 1)));
#line 519 "analysis.file.m"
                                    analysis__file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__NameTerm_6, (MR_Integer) 2)));
#line 519 "analysis.file.m"
                                    analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 519 "analysis.file.m"
                                    if (analysis__file__succeeded)
#line 519 "analysis.file.m"
                                      {
#line 519 "analysis.file.m"
                                        analysis__file__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__V_23_23, (MR_Integer) 0)));
#line 519 "analysis.file.m"
                                        analysis__file__succeeded = (analysis__file__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 510 "analysis.file.m"
                                        if (analysis__file__succeeded)
#line 510 "analysis.file.m"
                                          {
#line 520 "analysis.file.m"
                                            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__ArityTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 520 "analysis.file.m"
                                            if (analysis__file__succeeded)
#line 520 "analysis.file.m"
                                              {
#line 520 "analysis.file.m"
                                                analysis__file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__ArityTerm_7, (MR_Integer) 0)));
#line 520 "analysis.file.m"
                                                analysis__file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__ArityTerm_7, (MR_Integer) 1)));
#line 520 "analysis.file.m"
                                                analysis__file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__ArityTerm_7, (MR_Integer) 2)));
#line 520 "analysis.file.m"
                                                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 520 "analysis.file.m"
                                                if (analysis__file__succeeded)
#line 520 "analysis.file.m"
                                                  {
#line 520 "analysis.file.m"
                                                    analysis__file__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), analysis__file__V_25_25, (MR_Integer) 0)));
#line 520 "analysis.file.m"
                                                    analysis__file__succeeded = (analysis__file__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 510 "analysis.file.m"
                                                    if (analysis__file__succeeded)
#line 510 "analysis.file.m"
                                                      {
#line 521 "analysis.file.m"
                                                        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__ProcTerm_8)) == (MR_mktag((MR_Integer) 0)));
#line 521 "analysis.file.m"
                                                        if (analysis__file__succeeded)
#line 521 "analysis.file.m"
                                                          {
#line 521 "analysis.file.m"
                                                            analysis__file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__ProcTerm_8, (MR_Integer) 0)));
#line 521 "analysis.file.m"
                                                            analysis__file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__ProcTerm_8, (MR_Integer) 1)));
#line 521 "analysis.file.m"
                                                            analysis__file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__ProcTerm_8, (MR_Integer) 2)));
#line 521 "analysis.file.m"
                                                            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 521 "analysis.file.m"
                                                            if (analysis__file__succeeded)
#line 521 "analysis.file.m"
                                                              {
#line 521 "analysis.file.m"
                                                                analysis__file__ProcInt_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), analysis__file__V_27_27, (MR_Integer) 0)));
#line 521 "analysis.file.m"
                                                                analysis__file__succeeded = (analysis__file__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 510 "analysis.file.m"
                                                                if (analysis__file__succeeded)
#line 510 "analysis.file.m"
                                                                  {
#line 522 "analysis.file.m"
                                                                    {
#line 522 "analysis.file.m"
                                                                      hlds__hlds_pred__proc_id_to_int_2_p_1(&analysis__file__ProcId_17, analysis__file__ProcInt_15);
                                                                    }
#line 523 "analysis.file.m"
                                                                    {
#line 523 "analysis.file.m"
                                                                      MR_Word base;
#line 523 "analysis.file.m"
                                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 523 "analysis.file.m"
                                                                      *analysis__file__FuncId_4 = base;
#line 523 "analysis.file.m"
                                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__file__PredOrFunc_10));
#line 523 "analysis.file.m"
                                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (analysis__file__Name_11));
#line 523 "analysis.file.m"
                                                                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__file__Arity_13));
#line 523 "analysis.file.m"
                                                                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__file__ProcId_17));
#line 523 "analysis.file.m"
                                                                    }
#line 523 "analysis.file.m"
                                                                    analysis__file__succeeded = MR_TRUE;
#line 510 "analysis.file.m"
                                                                  }
#line 521 "analysis.file.m"
                                                              }
#line 521 "analysis.file.m"
                                                          }
#line 510 "analysis.file.m"
                                                      }
#line 520 "analysis.file.m"
                                                  }
#line 520 "analysis.file.m"
                                              }
#line 510 "analysis.file.m"
                                          }
#line 519 "analysis.file.m"
                                      }
#line 519 "analysis.file.m"
                                  }
#line 510 "analysis.file.m"
                              }
#line 510 "analysis.file.m"
                          }
#line 511 "analysis.file.m"
                      }
#line 511 "analysis.file.m"
                  }
#line 511 "analysis.file.m"
              }
#line 511 "analysis.file.m"
          }
#line 511 "analysis.file.m"
      }
#line 510 "analysis.file.m"
    return analysis__file__succeeded;
#line 510 "analysis.file.m"
  }
#line 508 "analysis.file.m"
}

#line 461 "analysis.file.m"
static void MR_CALL 
analysis__file__parse_imdg_arc_4_p_0(
#line 461 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_59,
#line 461 "analysis.file.m"
  MR_Box analysis__file__Compiler_5,
#line 461 "analysis.file.m"
  MR_Word analysis__file__Term_6,
#line 461 "analysis.file.m"
  MR_Word analysis__file__STATE_VARIABLE_Arcs_0_34,
#line 461 "analysis.file.m"
  MR_Word * analysis__file__STATE_VARIABLE_Arcs_35)
#line 461 "analysis.file.m"
{
#line 501 "analysis.file.m"
  {
#line 501 "analysis.file.m"
    MR_bool analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 501 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_analysis_60;
#line 501 "analysis.file.m"
    MR_String analysis__file__AnalysisName_11;
#line 501 "analysis.file.m"
    MR_Word analysis__file__VersionNumberTerm_12;
#line 501 "analysis.file.m"
    MR_Word analysis__file__DependentModule_20;
#line 501 "analysis.file.m"
    MR_Word analysis__file__FuncId_21;
#line 501 "analysis.file.m"
    MR_Box analysis__file__CallPattern_22;
#line 467 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_call_pattern_61;
#line 467 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_to_term_63;
#line 467 "analysis.file.m"
    MR_Word analysis__file__TypeCtorInfo_5_82;
#line 467 "analysis.file.m"
    MR_Word analysis__file__DependentModuleTerm_8;
#line 467 "analysis.file.m"
    MR_Word analysis__file__ResultTerm_9;
#line 467 "analysis.file.m"
    MR_Word analysis__file__FuncIdTerm_13;
#line 467 "analysis.file.m"
    MR_Word analysis__file__CallPatternTerm_14;
#line 467 "analysis.file.m"
    MR_Word analysis__file__V_36_36;
#line 467 "analysis.file.m"
    MR_String analysis__file__V_37_37;
#line 467 "analysis.file.m"
    MR_Word analysis__file__V_38_38;
#line 467 "analysis.file.m"
    MR_Word analysis__file__V_39_39;
#line 467 "analysis.file.m"
    MR_Word analysis__file__V_40_40;
#line 467 "analysis.file.m"
    MR_Word analysis__file__V_41_41;
#line 467 "analysis.file.m"
    MR_Word analysis__file__V_42_42;
#line 467 "analysis.file.m"
    MR_Word analysis__file__V_43_43;
#line 467 "analysis.file.m"
    MR_Word analysis__file__V_44_44;
#line 467 "analysis.file.m"
    MR_Word analysis__file__V_45_45;
#line 467 "analysis.file.m"
    MR_Word analysis__file__V_46_46;
#line 467 "analysis.file.m"
    MR_Integer analysis__file__PolyConst1_62;
#line 467 "analysis.file.m"
    MR_Integer analysis__file__PolyConst2_64;
#line 467 "analysis.file.m"
    MR_Word analysis__file__V_10_10;
#line 468 "analysis.file.m"
    MR_Word analysis__file__V_15_15;
#line 6600 "analysis.file.c"
    MR_bool MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 6602 "analysis.file.c"
    MR_Box analysis__file__conv1_V_46_46;
#line 6604 "analysis.file.c"
    MR_bool MR_CALL (* analysis__file__func_2)(MR_Box, MR_Box, MR_Box *);

#line 467 "analysis.file.m"
    if (analysis__file__succeeded)
#line 467 "analysis.file.m"
      {
#line 467 "analysis.file.m"
        analysis__file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_6, (MR_Integer) 0)));
#line 467 "analysis.file.m"
        analysis__file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_6, (MR_Integer) 1)));
#line 467 "analysis.file.m"
        analysis__file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_6, (MR_Integer) 2)));
#line 467 "analysis.file.m"
        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 467 "analysis.file.m"
        if (analysis__file__succeeded)
#line 467 "analysis.file.m"
          {
#line 467 "analysis.file.m"
            analysis__file__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__V_36_36, (MR_Integer) 0)));
#line 467 "analysis.file.m"
            analysis__file__succeeded = (strcmp(analysis__file__V_37_37, (MR_String) "->") == 0);
#line 467 "analysis.file.m"
            if (analysis__file__succeeded)
#line 467 "analysis.file.m"
              {
#line 467 "analysis.file.m"
                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 467 "analysis.file.m"
                if (analysis__file__succeeded)
#line 467 "analysis.file.m"
                  {
#line 467 "analysis.file.m"
                    analysis__file__DependentModuleTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_38_38, (MR_Integer) 0)));
#line 467 "analysis.file.m"
                    analysis__file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_38_38, (MR_Integer) 1)));
#line 467 "analysis.file.m"
                    analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 467 "analysis.file.m"
                    if (analysis__file__succeeded)
#line 467 "analysis.file.m"
                      {
#line 467 "analysis.file.m"
                        analysis__file__ResultTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_39_39, (MR_Integer) 0)));
#line 467 "analysis.file.m"
                        analysis__file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_39_39, (MR_Integer) 1)));
#line 467 "analysis.file.m"
                        analysis__file__succeeded = (analysis__file__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 467 "analysis.file.m"
                        if (analysis__file__succeeded)
#line 467 "analysis.file.m"
                          {
#line 468 "analysis.file.m"
                            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__ResultTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 468 "analysis.file.m"
                            if (analysis__file__succeeded)
#line 468 "analysis.file.m"
                              {
#line 468 "analysis.file.m"
                                analysis__file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__ResultTerm_9, (MR_Integer) 0)));
#line 468 "analysis.file.m"
                                analysis__file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__ResultTerm_9, (MR_Integer) 1)));
#line 468 "analysis.file.m"
                                analysis__file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__ResultTerm_9, (MR_Integer) 2)));
#line 468 "analysis.file.m"
                                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_41_41)) == (MR_mktag((MR_Integer) 0)));
#line 468 "analysis.file.m"
                                if (analysis__file__succeeded)
#line 468 "analysis.file.m"
                                  {
#line 468 "analysis.file.m"
                                    analysis__file__AnalysisName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__V_41_41, (MR_Integer) 0)));
#line 469 "analysis.file.m"
                                    analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 469 "analysis.file.m"
                                    if (analysis__file__succeeded)
#line 469 "analysis.file.m"
                                      {
#line 469 "analysis.file.m"
                                        analysis__file__VersionNumberTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_42_42, (MR_Integer) 0)));
#line 469 "analysis.file.m"
                                        analysis__file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_42_42, (MR_Integer) 1)));
#line 469 "analysis.file.m"
                                        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 469 "analysis.file.m"
                                        if (analysis__file__succeeded)
#line 469 "analysis.file.m"
                                          {
#line 469 "analysis.file.m"
                                            analysis__file__FuncIdTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_43_43, (MR_Integer) 0)));
#line 469 "analysis.file.m"
                                            analysis__file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_43_43, (MR_Integer) 1)));
#line 469 "analysis.file.m"
                                            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 469 "analysis.file.m"
                                            if (analysis__file__succeeded)
#line 469 "analysis.file.m"
                                              {
#line 469 "analysis.file.m"
                                                analysis__file__CallPatternTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_44_44, (MR_Integer) 0)));
#line 469 "analysis.file.m"
                                                analysis__file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_44_44, (MR_Integer) 1)));
#line 469 "analysis.file.m"
                                                analysis__file__succeeded = (analysis__file__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 467 "analysis.file.m"
                                                if (analysis__file__succeeded)
#line 467 "analysis.file.m"
                                                  {
#line 6713 "analysis.file.c"
                                                    analysis__file__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_59, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6715 "analysis.file.c"
                                                    {
#line 6717 "analysis.file.c"
                                                      analysis__file__succeeded = analysis__file__func_0(((MR_Box) analysis__file__TypeClassInfo_for_compiler_59), analysis__file__Compiler_5, ((MR_Box) (analysis__file__AnalysisName_11)), &analysis__file__conv1_V_46_46);
                                                    }
#line 6720 "analysis.file.c"
                                                    if (analysis__file__succeeded)
#line 6722 "analysis.file.c"
                                                      {
#line 6724 "analysis.file.c"
                                                        analysis__file__V_46_46 = ((MR_Word) analysis__file__conv1_V_46_46);
#line 6726 "analysis.file.c"
                                                        analysis__file__succeeded = MR_TRUE;
#line 6728 "analysis.file.c"
                                                      }
#line 467 "analysis.file.m"
                                                    if (analysis__file__succeeded)
#line 467 "analysis.file.m"
                                                      {
#line 470 "analysis.file.m"
                                                        analysis__file__TypeClassInfo_for_analysis_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_46_46, (MR_Integer) 0)));
#line 6736 "analysis.file.c"
                                                        analysis__file__TypeCtorInfo_5_82 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 528 "analysis.file.m"
                                                        {
#line 528 "analysis.file.m"
                                                          analysis__file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(analysis__file__TypeCtorInfo_5_82, analysis__file__DependentModuleTerm_8, &analysis__file__DependentModule_20);
                                                        }
#line 467 "analysis.file.m"
                                                        if (analysis__file__succeeded)
#line 467 "analysis.file.m"
                                                          {
#line 474 "analysis.file.m"
                                                            {
#line 474 "analysis.file.m"
                                                              analysis__file__succeeded = analysis__file__parse_func_id_2_p_0(analysis__file__FuncIdTerm_13, &analysis__file__FuncId_21);
                                                            }
#line 467 "analysis.file.m"
                                                            if (analysis__file__succeeded)
#line 467 "analysis.file.m"
                                                              {
#line 6756 "analysis.file.c"
                                                                analysis__file__PolyConst1_62 = (MR_Integer) 1;
#line 6758 "analysis.file.c"
                                                                {
#line 6760 "analysis.file.c"
                                                                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_analysis_60, analysis__file__PolyConst1_62, &analysis__file__TypeClassInfo_for_call_pattern_61);
                                                                }
#line 6763 "analysis.file.c"
                                                                analysis__file__PolyConst2_64 = (MR_Integer) 2;
#line 6765 "analysis.file.c"
                                                                {
#line 6767 "analysis.file.c"
                                                                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_call_pattern_61, analysis__file__PolyConst2_64, &analysis__file__TypeClassInfo_for_to_term_63);
                                                                }
#line 6770 "analysis.file.c"
                                                                analysis__file__func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_to_term_63, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6772 "analysis.file.c"
                                                                {
#line 6774 "analysis.file.c"
                                                                  analysis__file__succeeded = analysis__file__func_2(((MR_Box) analysis__file__TypeClassInfo_for_to_term_63), ((MR_Box) (analysis__file__CallPatternTerm_14)), &analysis__file__CallPattern_22);
                                                                }
#line 467 "analysis.file.m"
                                                              }
#line 467 "analysis.file.m"
                                                          }
#line 467 "analysis.file.m"
                                                      }
#line 467 "analysis.file.m"
                                                  }
#line 469 "analysis.file.m"
                                              }
#line 469 "analysis.file.m"
                                          }
#line 469 "analysis.file.m"
                                      }
#line 468 "analysis.file.m"
                                  }
#line 468 "analysis.file.m"
                              }
#line 467 "analysis.file.m"
                          }
#line 467 "analysis.file.m"
                      }
#line 467 "analysis.file.m"
                  }
#line 467 "analysis.file.m"
              }
#line 467 "analysis.file.m"
          }
#line 467 "analysis.file.m"
      }
#line 501 "analysis.file.m"
    if (analysis__file__succeeded)
#line 495 "analysis.file.m"
      {
#line 478 "analysis.file.m"
        MR_Integer analysis__file__VersionNumber_23;
#line 478 "analysis.file.m"
        MR_Word analysis__file__V_52_52;
#line 478 "analysis.file.m"
        MR_Word analysis__file__V_53_53;
#line 478 "analysis.file.m"
        MR_Integer analysis__file__V_79_79;
#line 6819 "analysis.file.c"
        MR_Box analysis__file__V_50_50;
#line 6821 "analysis.file.c"
        MR_Box analysis__file__V_51_51;
#line 6823 "analysis.file.c"
        MR_Box MR_CALL (* analysis__file__func_3)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_analysis_60, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6825 "analysis.file.c"
        MR_Box analysis__file__conv4_VersionNumber_23;
#line 479 "analysis.file.m"
        MR_Word analysis__file__V_26_26;

#line 6830 "analysis.file.c"
        {
#line 6832 "analysis.file.c"
          analysis__file__conv4_VersionNumber_23 = analysis__file__func_3(((MR_Box) analysis__file__TypeClassInfo_for_analysis_60));
        }
#line 6835 "analysis.file.c"
        analysis__file__VersionNumber_23 = ((MR_Integer) analysis__file__conv4_VersionNumber_23);
#line 479 "analysis.file.m"
        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__VersionNumberTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 479 "analysis.file.m"
        if (analysis__file__succeeded)
#line 479 "analysis.file.m"
          {
#line 479 "analysis.file.m"
            analysis__file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__VersionNumberTerm_12, (MR_Integer) 0)));
#line 479 "analysis.file.m"
            analysis__file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__VersionNumberTerm_12, (MR_Integer) 1)));
#line 479 "analysis.file.m"
            analysis__file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__VersionNumberTerm_12, (MR_Integer) 2)));
#line 480 "analysis.file.m"
            analysis__file__succeeded = (analysis__file__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "analysis.file.m"
            if (analysis__file__succeeded)
#line 478 "analysis.file.m"
              {
#line 480 "analysis.file.m"
                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 480 "analysis.file.m"
                if (analysis__file__succeeded)
#line 480 "analysis.file.m"
                  {
#line 480 "analysis.file.m"
                    analysis__file__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), analysis__file__V_52_52, (MR_Integer) 0)));
#line 480 "analysis.file.m"
                    analysis__file__succeeded = (analysis__file__VersionNumber_23 == analysis__file__V_79_79);
#line 480 "analysis.file.m"
                  }
#line 478 "analysis.file.m"
              }
#line 479 "analysis.file.m"
          }
#line 495 "analysis.file.m"
        if (analysis__file__succeeded)
#line 482 "analysis.file.m"
          {
#line 482 "analysis.file.m"
            MR_Word analysis__file__TypeClassInfo_for_call_pattern_65;
#line 482 "analysis.file.m"
            MR_Word analysis__file__Arc_27;
#line 482 "analysis.file.m"
            MR_Word analysis__file__AnalysisArcs1_29;
#line 482 "analysis.file.m"
            MR_Word analysis__file__FuncArcs_31;
#line 482 "analysis.file.m"
            MR_Word analysis__file__AnalysisArcs_32;
#line 485 "analysis.file.m"
            MR_Word analysis__file__AnalysisArcs0_28;
#line 483 "analysis.file.m"
            MR_Box analysis__file__conv5_AnalysisArcs0_28;
#line 490 "analysis.file.m"
            MR_Word analysis__file__FuncArcs0_30;
#line 488 "analysis.file.m"
            MR_Box analysis__file__conv6_FuncArcs0_30;

#line 6894 "analysis.file.c"
            {
#line 6896 "analysis.file.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_analysis_60, (MR_Integer) 1, &analysis__file__TypeClassInfo_for_call_pattern_65);
            }
#line 482 "analysis.file.m"
            {
#line 482 "analysis.file.m"
              analysis__file__Arc_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 482 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__Arc_27, 0) = ((MR_Box) (analysis__file__TypeClassInfo_for_call_pattern_65));
#line 482 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__Arc_27, 1) = analysis__file__CallPattern_22;
#line 482 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__Arc_27, 2) = ((MR_Box) (analysis__file__DependentModule_20));
#line 482 "analysis.file.m"
            }
#line 483 "analysis.file.m"
            {
#line 483 "analysis.file.m"
              analysis__file__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[4], analysis__file__STATE_VARIABLE_Arcs_0_34, ((MR_Box) (analysis__file__AnalysisName_11)), &analysis__file__conv5_AnalysisArcs0_28);
            }
#line 483 "analysis.file.m"
            if (analysis__file__succeeded)
#line 483 "analysis.file.m"
              {
#line 483 "analysis.file.m"
                analysis__file__AnalysisArcs0_28 = ((MR_Word) analysis__file__conv5_AnalysisArcs0_28);
#line 483 "analysis.file.m"
                analysis__file__succeeded = MR_TRUE;
#line 483 "analysis.file.m"
              }
#line 485 "analysis.file.m"
            if (analysis__file__succeeded)
#line 484 "analysis.file.m"
              analysis__file__AnalysisArcs1_29 = analysis__file__AnalysisArcs0_28;
#line 485 "analysis.file.m"
            else
#line 486 "analysis.file.m"
              {
#line 486 "analysis.file.m"
                {
#line 486 "analysis.file.m"
                  analysis__file__AnalysisArcs1_29 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[2]);
                }
#line 486 "analysis.file.m"
              }
#line 488 "analysis.file.m"
            {
#line 488 "analysis.file.m"
              analysis__file__succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[2], analysis__file__AnalysisArcs1_29, ((MR_Box) (analysis__file__FuncId_21)), &analysis__file__conv6_FuncArcs0_30);
            }
#line 488 "analysis.file.m"
            if (analysis__file__succeeded)
#line 488 "analysis.file.m"
              {
#line 488 "analysis.file.m"
                analysis__file__FuncArcs0_30 = ((MR_Word) analysis__file__conv6_FuncArcs0_30);
#line 488 "analysis.file.m"
                analysis__file__succeeded = MR_TRUE;
#line 488 "analysis.file.m"
              }
#line 490 "analysis.file.m"
            if (analysis__file__succeeded)
#line 489 "analysis.file.m"
              {
#line 489 "analysis.file.m"
                analysis__file__FuncArcs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "analysis.file.m"
                MR_hl_field(MR_mktag(1), analysis__file__FuncArcs_31, 0) = ((MR_Box) (analysis__file__Arc_27));
#line 489 "analysis.file.m"
                MR_hl_field(MR_mktag(1), analysis__file__FuncArcs_31, 1) = ((MR_Box) (analysis__file__FuncArcs0_30));
#line 489 "analysis.file.m"
              }
#line 490 "analysis.file.m"
            else
#line 491 "analysis.file.m"
              {
#line 491 "analysis.file.m"
                {
#line 491 "analysis.file.m"
                  analysis__file__FuncArcs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "analysis.file.m"
                  MR_hl_field(MR_mktag(1), analysis__file__FuncArcs_31, 0) = ((MR_Box) (analysis__file__Arc_27));
#line 491 "analysis.file.m"
                  MR_hl_field(MR_mktag(1), analysis__file__FuncArcs_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "analysis.file.m"
                }
#line 491 "analysis.file.m"
              }
#line 493 "analysis.file.m"
            {
#line 493 "analysis.file.m"
              mercury__map__set_4_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[2], ((MR_Box) (analysis__file__FuncId_21)), ((MR_Box) (analysis__file__FuncArcs_31)), analysis__file__AnalysisArcs1_29, &analysis__file__AnalysisArcs_32);
            }
#line 494 "analysis.file.m"
            {
#line 494 "analysis.file.m"
              mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[4], ((MR_Box) (analysis__file__AnalysisName_11)), ((MR_Box) (analysis__file__AnalysisArcs_32)), analysis__file__STATE_VARIABLE_Arcs_0_34, analysis__file__STATE_VARIABLE_Arcs_35);
#line 494 "analysis.file.m"
              return;
            }
#line 482 "analysis.file.m"
          }
#line 495 "analysis.file.m"
        else
#line 495 "analysis.file.m"
          *analysis__file__STATE_VARIABLE_Arcs_35 = analysis__file__STATE_VARIABLE_Arcs_0_34;
#line 495 "analysis.file.m"
      }
#line 501 "analysis.file.m"
    else
#line 502 "analysis.file.m"
      {
#line 502 "analysis.file.m"
        MR_String analysis__file__Msg_33;
#line 502 "analysis.file.m"
        MR_String analysis__file__V_57_57;
#line 502 "analysis.file.m"
        MR_Word analysis__file__V_58_58;

#line 502 "analysis.file.m"
        {
#line 502 "analysis.file.m"
          analysis__file__V_57_57 = mercury__string__string_1_f_0((MR_Word) &analysis__file_scalar_common_1[3], ((MR_Box) (analysis__file__Term_6)));
        }
#line 502 "analysis.file.m"
        {
#line 502 "analysis.file.m"
          analysis__file__Msg_33 = mercury__string__f_43_43_2_f_0((MR_String) "failed to parse IMDG arc: ", analysis__file__V_57_57);
        }
#line 503 "analysis.file.m"
        analysis__file__V_58_58 = (MR_Word) analysis__file__Msg_33;
#line 503 "analysis.file.m"
        {
#line 503 "analysis.file.m"
          mercury__exception__throw_1_p_0((MR_Word) &analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0, ((MR_Box) (analysis__file__V_58_58)));
#line 503 "analysis.file.m"
          return;
        }
#line 502 "analysis.file.m"
      }
#line 501 "analysis.file.m"
  }
#line 461 "analysis.file.m"
}

#line 411 "analysis.file.m"
static void MR_CALL 
analysis__file__parse_request_entry_4_p_0(
#line 411 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_59,
#line 411 "analysis.file.m"
  MR_Box analysis__file__Compiler_5,
#line 411 "analysis.file.m"
  MR_Word analysis__file__Term_6,
#line 411 "analysis.file.m"
  MR_Word analysis__file__STATE_VARIABLE_Requests_0_34,
#line 411 "analysis.file.m"
  MR_Word * analysis__file__STATE_VARIABLE_Requests_35)
#line 411 "analysis.file.m"
{
#line 450 "analysis.file.m"
  {
#line 450 "analysis.file.m"
    MR_bool analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 450 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_analysis_60;
#line 450 "analysis.file.m"
    MR_String analysis__file__AnalysisName_11;
#line 450 "analysis.file.m"
    MR_Word analysis__file__VersionNumberTerm_12;
#line 450 "analysis.file.m"
    MR_Word analysis__file__CallerModule_20;
#line 450 "analysis.file.m"
    MR_Word analysis__file__FuncId_21;
#line 450 "analysis.file.m"
    MR_Box analysis__file__CallPattern_22;
#line 418 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_call_pattern_61;
#line 418 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_to_term_63;
#line 418 "analysis.file.m"
    MR_Word analysis__file__TypeCtorInfo_5_82;
#line 418 "analysis.file.m"
    MR_Word analysis__file__CallerModuleTerm_8;
#line 418 "analysis.file.m"
    MR_Word analysis__file__RHS_9;
#line 418 "analysis.file.m"
    MR_Word analysis__file__FuncIdTerm_13;
#line 418 "analysis.file.m"
    MR_Word analysis__file__CallPatternTerm_14;
#line 418 "analysis.file.m"
    MR_Word analysis__file__V_36_36;
#line 418 "analysis.file.m"
    MR_String analysis__file__V_37_37;
#line 418 "analysis.file.m"
    MR_Word analysis__file__V_38_38;
#line 418 "analysis.file.m"
    MR_Word analysis__file__V_39_39;
#line 418 "analysis.file.m"
    MR_Word analysis__file__V_40_40;
#line 418 "analysis.file.m"
    MR_Word analysis__file__V_41_41;
#line 418 "analysis.file.m"
    MR_Word analysis__file__V_42_42;
#line 418 "analysis.file.m"
    MR_Word analysis__file__V_43_43;
#line 418 "analysis.file.m"
    MR_Word analysis__file__V_44_44;
#line 418 "analysis.file.m"
    MR_Word analysis__file__V_45_45;
#line 418 "analysis.file.m"
    MR_Word analysis__file__V_46_46;
#line 418 "analysis.file.m"
    MR_Integer analysis__file__PolyConst1_62;
#line 418 "analysis.file.m"
    MR_Integer analysis__file__PolyConst2_64;
#line 418 "analysis.file.m"
    MR_Word analysis__file__V_10_10;
#line 419 "analysis.file.m"
    MR_Word analysis__file__V_15_15;
#line 7116 "analysis.file.c"
    MR_bool MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 7118 "analysis.file.c"
    MR_Box analysis__file__conv1_V_46_46;
#line 7120 "analysis.file.c"
    MR_bool MR_CALL (* analysis__file__func_2)(MR_Box, MR_Box, MR_Box *);

#line 418 "analysis.file.m"
    if (analysis__file__succeeded)
#line 418 "analysis.file.m"
      {
#line 418 "analysis.file.m"
        analysis__file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_6, (MR_Integer) 0)));
#line 418 "analysis.file.m"
        analysis__file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_6, (MR_Integer) 1)));
#line 418 "analysis.file.m"
        analysis__file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_6, (MR_Integer) 2)));
#line 418 "analysis.file.m"
        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 418 "analysis.file.m"
        if (analysis__file__succeeded)
#line 418 "analysis.file.m"
          {
#line 418 "analysis.file.m"
            analysis__file__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__V_36_36, (MR_Integer) 0)));
#line 418 "analysis.file.m"
            analysis__file__succeeded = (strcmp(analysis__file__V_37_37, (MR_String) "->") == 0);
#line 418 "analysis.file.m"
            if (analysis__file__succeeded)
#line 418 "analysis.file.m"
              {
#line 418 "analysis.file.m"
                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 418 "analysis.file.m"
                if (analysis__file__succeeded)
#line 418 "analysis.file.m"
                  {
#line 418 "analysis.file.m"
                    analysis__file__CallerModuleTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_38_38, (MR_Integer) 0)));
#line 418 "analysis.file.m"
                    analysis__file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_38_38, (MR_Integer) 1)));
#line 418 "analysis.file.m"
                    analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 418 "analysis.file.m"
                    if (analysis__file__succeeded)
#line 418 "analysis.file.m"
                      {
#line 418 "analysis.file.m"
                        analysis__file__RHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_39_39, (MR_Integer) 0)));
#line 418 "analysis.file.m"
                        analysis__file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_39_39, (MR_Integer) 1)));
#line 418 "analysis.file.m"
                        analysis__file__succeeded = (analysis__file__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "analysis.file.m"
                        if (analysis__file__succeeded)
#line 418 "analysis.file.m"
                          {
#line 419 "analysis.file.m"
                            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__RHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 419 "analysis.file.m"
                            if (analysis__file__succeeded)
#line 419 "analysis.file.m"
                              {
#line 419 "analysis.file.m"
                                analysis__file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__RHS_9, (MR_Integer) 0)));
#line 419 "analysis.file.m"
                                analysis__file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__RHS_9, (MR_Integer) 1)));
#line 419 "analysis.file.m"
                                analysis__file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__RHS_9, (MR_Integer) 2)));
#line 419 "analysis.file.m"
                                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_41_41)) == (MR_mktag((MR_Integer) 0)));
#line 419 "analysis.file.m"
                                if (analysis__file__succeeded)
#line 419 "analysis.file.m"
                                  {
#line 419 "analysis.file.m"
                                    analysis__file__AnalysisName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__V_41_41, (MR_Integer) 0)));
#line 420 "analysis.file.m"
                                    analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 420 "analysis.file.m"
                                    if (analysis__file__succeeded)
#line 420 "analysis.file.m"
                                      {
#line 420 "analysis.file.m"
                                        analysis__file__VersionNumberTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_42_42, (MR_Integer) 0)));
#line 420 "analysis.file.m"
                                        analysis__file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_42_42, (MR_Integer) 1)));
#line 420 "analysis.file.m"
                                        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 420 "analysis.file.m"
                                        if (analysis__file__succeeded)
#line 420 "analysis.file.m"
                                          {
#line 420 "analysis.file.m"
                                            analysis__file__FuncIdTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_43_43, (MR_Integer) 0)));
#line 420 "analysis.file.m"
                                            analysis__file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_43_43, (MR_Integer) 1)));
#line 420 "analysis.file.m"
                                            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 420 "analysis.file.m"
                                            if (analysis__file__succeeded)
#line 420 "analysis.file.m"
                                              {
#line 420 "analysis.file.m"
                                                analysis__file__CallPatternTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_44_44, (MR_Integer) 0)));
#line 420 "analysis.file.m"
                                                analysis__file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_44_44, (MR_Integer) 1)));
#line 420 "analysis.file.m"
                                                analysis__file__succeeded = (analysis__file__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "analysis.file.m"
                                                if (analysis__file__succeeded)
#line 418 "analysis.file.m"
                                                  {
#line 7229 "analysis.file.c"
                                                    analysis__file__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_59, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7231 "analysis.file.c"
                                                    {
#line 7233 "analysis.file.c"
                                                      analysis__file__succeeded = analysis__file__func_0(((MR_Box) analysis__file__TypeClassInfo_for_compiler_59), analysis__file__Compiler_5, ((MR_Box) (analysis__file__AnalysisName_11)), &analysis__file__conv1_V_46_46);
                                                    }
#line 7236 "analysis.file.c"
                                                    if (analysis__file__succeeded)
#line 7238 "analysis.file.c"
                                                      {
#line 7240 "analysis.file.c"
                                                        analysis__file__V_46_46 = ((MR_Word) analysis__file__conv1_V_46_46);
#line 7242 "analysis.file.c"
                                                        analysis__file__succeeded = MR_TRUE;
#line 7244 "analysis.file.c"
                                                      }
#line 418 "analysis.file.m"
                                                    if (analysis__file__succeeded)
#line 418 "analysis.file.m"
                                                      {
#line 421 "analysis.file.m"
                                                        analysis__file__TypeClassInfo_for_analysis_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_46_46, (MR_Integer) 0)));
#line 7252 "analysis.file.c"
                                                        analysis__file__TypeCtorInfo_5_82 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 528 "analysis.file.m"
                                                        {
#line 528 "analysis.file.m"
                                                          analysis__file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(analysis__file__TypeCtorInfo_5_82, analysis__file__CallerModuleTerm_8, &analysis__file__CallerModule_20);
                                                        }
#line 418 "analysis.file.m"
                                                        if (analysis__file__succeeded)
#line 418 "analysis.file.m"
                                                          {
#line 425 "analysis.file.m"
                                                            {
#line 425 "analysis.file.m"
                                                              analysis__file__succeeded = analysis__file__parse_func_id_2_p_0(analysis__file__FuncIdTerm_13, &analysis__file__FuncId_21);
                                                            }
#line 418 "analysis.file.m"
                                                            if (analysis__file__succeeded)
#line 418 "analysis.file.m"
                                                              {
#line 7272 "analysis.file.c"
                                                                analysis__file__PolyConst1_62 = (MR_Integer) 1;
#line 7274 "analysis.file.c"
                                                                {
#line 7276 "analysis.file.c"
                                                                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_analysis_60, analysis__file__PolyConst1_62, &analysis__file__TypeClassInfo_for_call_pattern_61);
                                                                }
#line 7279 "analysis.file.c"
                                                                analysis__file__PolyConst2_64 = (MR_Integer) 2;
#line 7281 "analysis.file.c"
                                                                {
#line 7283 "analysis.file.c"
                                                                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_call_pattern_61, analysis__file__PolyConst2_64, &analysis__file__TypeClassInfo_for_to_term_63);
                                                                }
#line 7286 "analysis.file.c"
                                                                analysis__file__func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_to_term_63, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7288 "analysis.file.c"
                                                                {
#line 7290 "analysis.file.c"
                                                                  analysis__file__succeeded = analysis__file__func_2(((MR_Box) analysis__file__TypeClassInfo_for_to_term_63), ((MR_Box) (analysis__file__CallPatternTerm_14)), &analysis__file__CallPattern_22);
                                                                }
#line 418 "analysis.file.m"
                                                              }
#line 418 "analysis.file.m"
                                                          }
#line 418 "analysis.file.m"
                                                      }
#line 418 "analysis.file.m"
                                                  }
#line 420 "analysis.file.m"
                                              }
#line 420 "analysis.file.m"
                                          }
#line 420 "analysis.file.m"
                                      }
#line 419 "analysis.file.m"
                                  }
#line 419 "analysis.file.m"
                              }
#line 418 "analysis.file.m"
                          }
#line 418 "analysis.file.m"
                      }
#line 418 "analysis.file.m"
                  }
#line 418 "analysis.file.m"
              }
#line 418 "analysis.file.m"
          }
#line 418 "analysis.file.m"
      }
#line 450 "analysis.file.m"
    if (analysis__file__succeeded)
#line 446 "analysis.file.m"
      {
#line 429 "analysis.file.m"
        MR_Integer analysis__file__VersionNumber_23;
#line 429 "analysis.file.m"
        MR_Word analysis__file__V_52_52;
#line 429 "analysis.file.m"
        MR_Word analysis__file__V_53_53;
#line 429 "analysis.file.m"
        MR_Integer analysis__file__V_79_79;
#line 7335 "analysis.file.c"
        MR_Box analysis__file__V_50_50;
#line 7337 "analysis.file.c"
        MR_Box analysis__file__V_51_51;
#line 7339 "analysis.file.c"
        MR_Box MR_CALL (* analysis__file__func_3)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_analysis_60, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7341 "analysis.file.c"
        MR_Box analysis__file__conv4_VersionNumber_23;
#line 430 "analysis.file.m"
        MR_Word analysis__file__V_26_26;

#line 7346 "analysis.file.c"
        {
#line 7348 "analysis.file.c"
          analysis__file__conv4_VersionNumber_23 = analysis__file__func_3(((MR_Box) analysis__file__TypeClassInfo_for_analysis_60));
        }
#line 7351 "analysis.file.c"
        analysis__file__VersionNumber_23 = ((MR_Integer) analysis__file__conv4_VersionNumber_23);
#line 430 "analysis.file.m"
        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__VersionNumberTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 430 "analysis.file.m"
        if (analysis__file__succeeded)
#line 430 "analysis.file.m"
          {
#line 430 "analysis.file.m"
            analysis__file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__VersionNumberTerm_12, (MR_Integer) 0)));
#line 430 "analysis.file.m"
            analysis__file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__VersionNumberTerm_12, (MR_Integer) 1)));
#line 430 "analysis.file.m"
            analysis__file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__VersionNumberTerm_12, (MR_Integer) 2)));
#line 431 "analysis.file.m"
            analysis__file__succeeded = (analysis__file__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "analysis.file.m"
            if (analysis__file__succeeded)
#line 429 "analysis.file.m"
              {
#line 431 "analysis.file.m"
                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 431 "analysis.file.m"
                if (analysis__file__succeeded)
#line 431 "analysis.file.m"
                  {
#line 431 "analysis.file.m"
                    analysis__file__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), analysis__file__V_52_52, (MR_Integer) 0)));
#line 431 "analysis.file.m"
                    analysis__file__succeeded = (analysis__file__VersionNumber_23 == analysis__file__V_79_79);
#line 431 "analysis.file.m"
                  }
#line 429 "analysis.file.m"
              }
#line 430 "analysis.file.m"
          }
#line 446 "analysis.file.m"
        if (analysis__file__succeeded)
#line 433 "analysis.file.m"
          {
#line 433 "analysis.file.m"
            MR_Word analysis__file__TypeClassInfo_for_call_pattern_65;
#line 433 "analysis.file.m"
            MR_Word analysis__file__Result_27;
#line 433 "analysis.file.m"
            MR_Word analysis__file__AnalysisRequests1_29;
#line 433 "analysis.file.m"
            MR_Word analysis__file__FuncRequests_31;
#line 433 "analysis.file.m"
            MR_Word analysis__file__AnalysisRequests_32;
#line 436 "analysis.file.m"
            MR_Word analysis__file__AnalysisRequests0_28;
#line 434 "analysis.file.m"
            MR_Box analysis__file__conv5_AnalysisRequests0_28;
#line 441 "analysis.file.m"
            MR_Word analysis__file__FuncRequests0_30;
#line 439 "analysis.file.m"
            MR_Box analysis__file__conv6_FuncRequests0_30;

#line 7410 "analysis.file.c"
            {
#line 7412 "analysis.file.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_analysis_60, (MR_Integer) 1, &analysis__file__TypeClassInfo_for_call_pattern_65);
            }
#line 433 "analysis.file.m"
            {
#line 433 "analysis.file.m"
              analysis__file__Result_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 433 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__Result_27, 0) = ((MR_Box) (analysis__file__TypeClassInfo_for_call_pattern_65));
#line 433 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__Result_27, 1) = analysis__file__CallPattern_22;
#line 433 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__Result_27, 2) = ((MR_Box) (analysis__file__CallerModule_20));
#line 433 "analysis.file.m"
            }
#line 434 "analysis.file.m"
            {
#line 434 "analysis.file.m"
              analysis__file__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[2], analysis__file__STATE_VARIABLE_Requests_0_34, ((MR_Box) (analysis__file__AnalysisName_11)), &analysis__file__conv5_AnalysisRequests0_28);
            }
#line 434 "analysis.file.m"
            if (analysis__file__succeeded)
#line 434 "analysis.file.m"
              {
#line 434 "analysis.file.m"
                analysis__file__AnalysisRequests0_28 = ((MR_Word) analysis__file__conv5_AnalysisRequests0_28);
#line 434 "analysis.file.m"
                analysis__file__succeeded = MR_TRUE;
#line 434 "analysis.file.m"
              }
#line 436 "analysis.file.m"
            if (analysis__file__succeeded)
#line 435 "analysis.file.m"
              analysis__file__AnalysisRequests1_29 = analysis__file__AnalysisRequests0_28;
#line 436 "analysis.file.m"
            else
#line 437 "analysis.file.m"
              {
#line 437 "analysis.file.m"
                {
#line 437 "analysis.file.m"
                  analysis__file__AnalysisRequests1_29 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[1]);
                }
#line 437 "analysis.file.m"
              }
#line 439 "analysis.file.m"
            {
#line 439 "analysis.file.m"
              analysis__file__succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[1], analysis__file__AnalysisRequests1_29, ((MR_Box) (analysis__file__FuncId_21)), &analysis__file__conv6_FuncRequests0_30);
            }
#line 439 "analysis.file.m"
            if (analysis__file__succeeded)
#line 439 "analysis.file.m"
              {
#line 439 "analysis.file.m"
                analysis__file__FuncRequests0_30 = ((MR_Word) analysis__file__conv6_FuncRequests0_30);
#line 439 "analysis.file.m"
                analysis__file__succeeded = MR_TRUE;
#line 439 "analysis.file.m"
              }
#line 441 "analysis.file.m"
            if (analysis__file__succeeded)
#line 440 "analysis.file.m"
              {
#line 440 "analysis.file.m"
                analysis__file__FuncRequests_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "analysis.file.m"
                MR_hl_field(MR_mktag(1), analysis__file__FuncRequests_31, 0) = ((MR_Box) (analysis__file__Result_27));
#line 440 "analysis.file.m"
                MR_hl_field(MR_mktag(1), analysis__file__FuncRequests_31, 1) = ((MR_Box) (analysis__file__FuncRequests0_30));
#line 440 "analysis.file.m"
              }
#line 441 "analysis.file.m"
            else
#line 442 "analysis.file.m"
              {
#line 442 "analysis.file.m"
                {
#line 442 "analysis.file.m"
                  analysis__file__FuncRequests_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "analysis.file.m"
                  MR_hl_field(MR_mktag(1), analysis__file__FuncRequests_31, 0) = ((MR_Box) (analysis__file__Result_27));
#line 442 "analysis.file.m"
                  MR_hl_field(MR_mktag(1), analysis__file__FuncRequests_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 442 "analysis.file.m"
                }
#line 442 "analysis.file.m"
              }
#line 444 "analysis.file.m"
            {
#line 444 "analysis.file.m"
              mercury__map__set_4_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[1], ((MR_Box) (analysis__file__FuncId_21)), ((MR_Box) (analysis__file__FuncRequests_31)), analysis__file__AnalysisRequests1_29, &analysis__file__AnalysisRequests_32);
            }
#line 445 "analysis.file.m"
            {
#line 445 "analysis.file.m"
              mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[2], ((MR_Box) (analysis__file__AnalysisName_11)), ((MR_Box) (analysis__file__AnalysisRequests_32)), analysis__file__STATE_VARIABLE_Requests_0_34, analysis__file__STATE_VARIABLE_Requests_35);
#line 445 "analysis.file.m"
              return;
            }
#line 433 "analysis.file.m"
          }
#line 446 "analysis.file.m"
        else
#line 446 "analysis.file.m"
          *analysis__file__STATE_VARIABLE_Requests_35 = analysis__file__STATE_VARIABLE_Requests_0_34;
#line 446 "analysis.file.m"
      }
#line 450 "analysis.file.m"
    else
#line 451 "analysis.file.m"
      {
#line 451 "analysis.file.m"
        MR_String analysis__file__Msg_33;
#line 451 "analysis.file.m"
        MR_String analysis__file__V_57_57;
#line 451 "analysis.file.m"
        MR_Word analysis__file__V_58_58;

#line 451 "analysis.file.m"
        {
#line 451 "analysis.file.m"
          analysis__file__V_57_57 = mercury__string__string_1_f_0((MR_Word) &analysis__file_scalar_common_1[3], ((MR_Box) (analysis__file__Term_6)));
        }
#line 451 "analysis.file.m"
        {
#line 451 "analysis.file.m"
          analysis__file__Msg_33 = mercury__string__f_43_43_2_f_0((MR_String) "failed to parse request entry: ", analysis__file__V_57_57);
        }
#line 452 "analysis.file.m"
        analysis__file__V_58_58 = (MR_Word) analysis__file__Msg_33;
#line 452 "analysis.file.m"
        {
#line 452 "analysis.file.m"
          mercury__exception__throw_1_p_0((MR_Word) &analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0, ((MR_Box) (analysis__file__V_58_58)));
#line 452 "analysis.file.m"
          return;
        }
#line 451 "analysis.file.m"
      }
#line 450 "analysis.file.m"
  }
#line 411 "analysis.file.m"
}

#line 356 "analysis.file.m"
static void MR_CALL 
analysis__file__parse_result_entry_4_p_0(
#line 356 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_61,
#line 356 "analysis.file.m"
  MR_Box analysis__file__Compiler_5,
#line 356 "analysis.file.m"
  MR_Word analysis__file__Term_6,
#line 356 "analysis.file.m"
  MR_Word analysis__file__STATE_VARIABLE_Results_0_36,
#line 356 "analysis.file.m"
  MR_Word * analysis__file__STATE_VARIABLE_Results_37)
#line 356 "analysis.file.m"
{
#line 398 "analysis.file.m"
  {
#line 398 "analysis.file.m"
    MR_bool analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 398 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_analysis_62;
#line 398 "analysis.file.m"
    MR_String analysis__file__AnalysisName_8;
#line 398 "analysis.file.m"
    MR_Word analysis__file__VersionNumberTerm_9;
#line 398 "analysis.file.m"
    MR_Word analysis__file__FuncId_21;
#line 398 "analysis.file.m"
    MR_Box analysis__file__CallPattern_22;
#line 398 "analysis.file.m"
    MR_Box analysis__file__AnswerPattern_23;
#line 398 "analysis.file.m"
    MR_Word analysis__file__Status_24;
#line 365 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_call_pattern_63;
#line 365 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_to_term_65;
#line 365 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_answer_pattern_67;
#line 365 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_to_term_68;
#line 365 "analysis.file.m"
    MR_Word analysis__file__FuncIdTerm_10;
#line 365 "analysis.file.m"
    MR_Word analysis__file__CallPatternTerm_11;
#line 365 "analysis.file.m"
    MR_Word analysis__file__AnswerPatternTerm_12;
#line 365 "analysis.file.m"
    MR_Word analysis__file__StatusTerm_13;
#line 365 "analysis.file.m"
    MR_String analysis__file__StatusString_15;
#line 365 "analysis.file.m"
    MR_Word analysis__file__V_38_38;
#line 365 "analysis.file.m"
    MR_Word analysis__file__V_39_39;
#line 365 "analysis.file.m"
    MR_Word analysis__file__V_40_40;
#line 365 "analysis.file.m"
    MR_Word analysis__file__V_41_41;
#line 365 "analysis.file.m"
    MR_Word analysis__file__V_42_42;
#line 365 "analysis.file.m"
    MR_Word analysis__file__V_43_43;
#line 365 "analysis.file.m"
    MR_Word analysis__file__V_44_44;
#line 365 "analysis.file.m"
    MR_Word analysis__file__V_45_45;
#line 365 "analysis.file.m"
    MR_Word analysis__file__V_46_46;
#line 365 "analysis.file.m"
    MR_Word analysis__file__V_47_47;
#line 365 "analysis.file.m"
    MR_Integer analysis__file__PolyConst1_64;
#line 365 "analysis.file.m"
    MR_Integer analysis__file__PolyConst2_66;
#line 363 "analysis.file.m"
    MR_Word analysis__file__V_14_14;
#line 366 "analysis.file.m"
    MR_Word analysis__file__V_16_16;
#line 7636 "analysis.file.c"
    MR_bool MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 7638 "analysis.file.c"
    MR_Box analysis__file__conv1_V_47_47;
#line 7640 "analysis.file.c"
    MR_bool MR_CALL (* analysis__file__func_2)(MR_Box, MR_Box, MR_Box *);
#line 7642 "analysis.file.c"
    MR_bool MR_CALL (* analysis__file__func_3)(MR_Box, MR_Box, MR_Box *);

#line 363 "analysis.file.m"
    if (analysis__file__succeeded)
#line 363 "analysis.file.m"
      {
#line 363 "analysis.file.m"
        analysis__file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_6, (MR_Integer) 0)));
#line 363 "analysis.file.m"
        analysis__file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_6, (MR_Integer) 1)));
#line 363 "analysis.file.m"
        analysis__file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Term_6, (MR_Integer) 2)));
#line 363 "analysis.file.m"
        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 363 "analysis.file.m"
        if (analysis__file__succeeded)
#line 363 "analysis.file.m"
          {
#line 363 "analysis.file.m"
            analysis__file__AnalysisName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__V_38_38, (MR_Integer) 0)));
#line 364 "analysis.file.m"
            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 364 "analysis.file.m"
            if (analysis__file__succeeded)
#line 364 "analysis.file.m"
              {
#line 364 "analysis.file.m"
                analysis__file__VersionNumberTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_39_39, (MR_Integer) 0)));
#line 364 "analysis.file.m"
                analysis__file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_39_39, (MR_Integer) 1)));
#line 364 "analysis.file.m"
                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 364 "analysis.file.m"
                if (analysis__file__succeeded)
#line 364 "analysis.file.m"
                  {
#line 364 "analysis.file.m"
                    analysis__file__FuncIdTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_40_40, (MR_Integer) 0)));
#line 364 "analysis.file.m"
                    analysis__file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_40_40, (MR_Integer) 1)));
#line 365 "analysis.file.m"
                    analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 365 "analysis.file.m"
                    if (analysis__file__succeeded)
#line 365 "analysis.file.m"
                      {
#line 365 "analysis.file.m"
                        analysis__file__CallPatternTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_41_41, (MR_Integer) 0)));
#line 365 "analysis.file.m"
                        analysis__file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_41_41, (MR_Integer) 1)));
#line 365 "analysis.file.m"
                        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 365 "analysis.file.m"
                        if (analysis__file__succeeded)
#line 365 "analysis.file.m"
                          {
#line 365 "analysis.file.m"
                            analysis__file__AnswerPatternTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_42_42, (MR_Integer) 0)));
#line 365 "analysis.file.m"
                            analysis__file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_42_42, (MR_Integer) 1)));
#line 365 "analysis.file.m"
                            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 365 "analysis.file.m"
                            if (analysis__file__succeeded)
#line 365 "analysis.file.m"
                              {
#line 365 "analysis.file.m"
                                analysis__file__StatusTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_43_43, (MR_Integer) 0)));
#line 365 "analysis.file.m"
                                analysis__file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__V_43_43, (MR_Integer) 1)));
#line 365 "analysis.file.m"
                                analysis__file__succeeded = (analysis__file__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "analysis.file.m"
                                if (analysis__file__succeeded)
#line 365 "analysis.file.m"
                                  {
#line 366 "analysis.file.m"
                                    analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__StatusTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 366 "analysis.file.m"
                                    if (analysis__file__succeeded)
#line 366 "analysis.file.m"
                                      {
#line 366 "analysis.file.m"
                                        analysis__file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__StatusTerm_13, (MR_Integer) 0)));
#line 366 "analysis.file.m"
                                        analysis__file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__StatusTerm_13, (MR_Integer) 1)));
#line 366 "analysis.file.m"
                                        analysis__file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__StatusTerm_13, (MR_Integer) 2)));
#line 366 "analysis.file.m"
                                        analysis__file__succeeded = (analysis__file__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "analysis.file.m"
                                        if (analysis__file__succeeded)
#line 365 "analysis.file.m"
                                          {
#line 366 "analysis.file.m"
                                            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 366 "analysis.file.m"
                                            if (analysis__file__succeeded)
#line 366 "analysis.file.m"
                                              {
#line 366 "analysis.file.m"
                                                analysis__file__StatusString_15 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__V_45_45, (MR_Integer) 0)));
#line 7745 "analysis.file.c"
                                                analysis__file__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_61, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7747 "analysis.file.c"
                                                {
#line 7749 "analysis.file.c"
                                                  analysis__file__succeeded = analysis__file__func_0(((MR_Box) analysis__file__TypeClassInfo_for_compiler_61), analysis__file__Compiler_5, ((MR_Box) (analysis__file__AnalysisName_8)), &analysis__file__conv1_V_47_47);
                                                }
#line 7752 "analysis.file.c"
                                                if (analysis__file__succeeded)
#line 7754 "analysis.file.c"
                                                  {
#line 7756 "analysis.file.c"
                                                    analysis__file__V_47_47 = ((MR_Word) analysis__file__conv1_V_47_47);
#line 7758 "analysis.file.c"
                                                    analysis__file__succeeded = MR_TRUE;
#line 7760 "analysis.file.c"
                                                  }
#line 365 "analysis.file.m"
                                                if (analysis__file__succeeded)
#line 365 "analysis.file.m"
                                                  {
#line 367 "analysis.file.m"
                                                    analysis__file__TypeClassInfo_for_analysis_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_47_47, (MR_Integer) 0)));
#line 370 "analysis.file.m"
                                                    {
#line 370 "analysis.file.m"
                                                      analysis__file__succeeded = analysis__file__parse_func_id_2_p_0(analysis__file__FuncIdTerm_10, &analysis__file__FuncId_21);
                                                    }
#line 365 "analysis.file.m"
                                                    if (analysis__file__succeeded)
#line 365 "analysis.file.m"
                                                      {
#line 7777 "analysis.file.c"
                                                        analysis__file__PolyConst1_64 = (MR_Integer) 1;
#line 7779 "analysis.file.c"
                                                        {
#line 7781 "analysis.file.c"
                                                          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_analysis_62, analysis__file__PolyConst1_64, &analysis__file__TypeClassInfo_for_call_pattern_63);
                                                        }
#line 7784 "analysis.file.c"
                                                        analysis__file__PolyConst2_66 = (MR_Integer) 2;
#line 7786 "analysis.file.c"
                                                        {
#line 7788 "analysis.file.c"
                                                          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_call_pattern_63, analysis__file__PolyConst2_66, &analysis__file__TypeClassInfo_for_to_term_65);
                                                        }
#line 7791 "analysis.file.c"
                                                        analysis__file__func_2 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_to_term_65, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7793 "analysis.file.c"
                                                        {
#line 7795 "analysis.file.c"
                                                          analysis__file__succeeded = analysis__file__func_2(((MR_Box) analysis__file__TypeClassInfo_for_to_term_65), ((MR_Box) (analysis__file__CallPatternTerm_11)), &analysis__file__CallPattern_22);
                                                        }
#line 365 "analysis.file.m"
                                                        if (analysis__file__succeeded)
#line 365 "analysis.file.m"
                                                          {
#line 7802 "analysis.file.c"
                                                            {
#line 7804 "analysis.file.c"
                                                              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_analysis_62, analysis__file__PolyConst2_66, &analysis__file__TypeClassInfo_for_answer_pattern_67);
                                                            }
#line 7807 "analysis.file.c"
                                                            {
#line 7809 "analysis.file.c"
                                                              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__file__TypeClassInfo_for_answer_pattern_67, analysis__file__PolyConst2_66, &analysis__file__TypeClassInfo_for_to_term_68);
                                                            }
#line 7812 "analysis.file.c"
                                                            analysis__file__func_3 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_to_term_68, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7814 "analysis.file.c"
                                                            {
#line 7816 "analysis.file.c"
                                                              analysis__file__succeeded = analysis__file__func_3(((MR_Box) analysis__file__TypeClassInfo_for_to_term_68), ((MR_Box) (analysis__file__AnswerPatternTerm_12)), &analysis__file__AnswerPattern_23);
                                                            }
#line 365 "analysis.file.m"
                                                            if (analysis__file__succeeded)
#line 184 "analysis.file.m"
                                                              {
#line 184 "analysis.file.m"
                                                                if ((strcmp(analysis__file__StatusString_15, (MR_String) "invalid") == 0))
#line 184 "analysis.file.m"
                                                                  {
#line 184 "analysis.file.m"
                                                                    analysis__file__Status_24 = (MR_Integer) 0;
#line 184 "analysis.file.m"
                                                                    analysis__file__succeeded = MR_TRUE;
#line 184 "analysis.file.m"
                                                                  }
#line 184 "analysis.file.m"
                                                                else
#line 184 "analysis.file.m"
                                                                if ((strcmp(analysis__file__StatusString_15, (MR_String) "optimal") == 0))
#line 186 "analysis.file.m"
                                                                  {
#line 186 "analysis.file.m"
                                                                    analysis__file__Status_24 = (MR_Integer) 2;
#line 186 "analysis.file.m"
                                                                    analysis__file__succeeded = MR_TRUE;
#line 186 "analysis.file.m"
                                                                  }
#line 184 "analysis.file.m"
                                                                else
#line 184 "analysis.file.m"
                                                                if ((strcmp(analysis__file__StatusString_15, (MR_String) "suboptimal") == 0))
#line 185 "analysis.file.m"
                                                                  {
#line 185 "analysis.file.m"
                                                                    analysis__file__Status_24 = (MR_Integer) 1;
#line 185 "analysis.file.m"
                                                                    analysis__file__succeeded = MR_TRUE;
#line 185 "analysis.file.m"
                                                                  }
#line 184 "analysis.file.m"
                                                                else
#line 184 "analysis.file.m"
                                                                  analysis__file__succeeded = MR_FALSE;
#line 184 "analysis.file.m"
                                                              }
#line 365 "analysis.file.m"
                                                          }
#line 365 "analysis.file.m"
                                                      }
#line 365 "analysis.file.m"
                                                  }
#line 366 "analysis.file.m"
                                              }
#line 365 "analysis.file.m"
                                          }
#line 366 "analysis.file.m"
                                      }
#line 365 "analysis.file.m"
                                  }
#line 365 "analysis.file.m"
                              }
#line 365 "analysis.file.m"
                          }
#line 365 "analysis.file.m"
                      }
#line 364 "analysis.file.m"
                  }
#line 364 "analysis.file.m"
              }
#line 363 "analysis.file.m"
          }
#line 363 "analysis.file.m"
      }
#line 398 "analysis.file.m"
    if (analysis__file__succeeded)
#line 394 "analysis.file.m"
      {
#line 376 "analysis.file.m"
        MR_Integer analysis__file__VersionNumber_25;
#line 376 "analysis.file.m"
        MR_Word analysis__file__V_54_54;
#line 376 "analysis.file.m"
        MR_Word analysis__file__V_55_55;
#line 376 "analysis.file.m"
        MR_Integer analysis__file__V_81_81;
#line 7903 "analysis.file.c"
        MR_Box analysis__file__V_52_52;
#line 7905 "analysis.file.c"
        MR_Box analysis__file__V_53_53;
#line 7907 "analysis.file.c"
        MR_Box MR_CALL (* analysis__file__func_4)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_analysis_62, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7909 "analysis.file.c"
        MR_Box analysis__file__conv5_VersionNumber_25;
#line 377 "analysis.file.m"
        MR_Word analysis__file__V_28_28;

#line 7914 "analysis.file.c"
        {
#line 7916 "analysis.file.c"
          analysis__file__conv5_VersionNumber_25 = analysis__file__func_4(((MR_Box) analysis__file__TypeClassInfo_for_analysis_62));
        }
#line 7919 "analysis.file.c"
        analysis__file__VersionNumber_25 = ((MR_Integer) analysis__file__conv5_VersionNumber_25);
#line 377 "analysis.file.m"
        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__VersionNumberTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 377 "analysis.file.m"
        if (analysis__file__succeeded)
#line 377 "analysis.file.m"
          {
#line 377 "analysis.file.m"
            analysis__file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__VersionNumberTerm_9, (MR_Integer) 0)));
#line 377 "analysis.file.m"
            analysis__file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__VersionNumberTerm_9, (MR_Integer) 1)));
#line 377 "analysis.file.m"
            analysis__file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__VersionNumberTerm_9, (MR_Integer) 2)));
#line 378 "analysis.file.m"
            analysis__file__succeeded = (analysis__file__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "analysis.file.m"
            if (analysis__file__succeeded)
#line 376 "analysis.file.m"
              {
#line 378 "analysis.file.m"
                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 378 "analysis.file.m"
                if (analysis__file__succeeded)
#line 378 "analysis.file.m"
                  {
#line 378 "analysis.file.m"
                    analysis__file__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(1), analysis__file__V_54_54, (MR_Integer) 0)));
#line 378 "analysis.file.m"
                    analysis__file__succeeded = (analysis__file__VersionNumber_25 == analysis__file__V_81_81);
#line 378 "analysis.file.m"
                  }
#line 376 "analysis.file.m"
              }
#line 377 "analysis.file.m"
          }
#line 394 "analysis.file.m"
        if (analysis__file__succeeded)
#line 381 "analysis.file.m"
          {
#line 381 "analysis.file.m"
            MR_Word analysis__file__Result_29;
#line 381 "analysis.file.m"
            MR_Word analysis__file__AnalysisResults1_31;
#line 381 "analysis.file.m"
            MR_Word analysis__file__FuncResults_33;
#line 381 "analysis.file.m"
            MR_Word analysis__file__AnalysisResults_34;
#line 384 "analysis.file.m"
            MR_Word analysis__file__AnalysisResults0_30;
#line 382 "analysis.file.m"
            MR_Box analysis__file__conv6_AnalysisResults0_30;
#line 389 "analysis.file.m"
            MR_Word analysis__file__FuncResults0_32;
#line 387 "analysis.file.m"
            MR_Box analysis__file__conv7_FuncResults0_32;

#line 380 "analysis.file.m"
            {
#line 380 "analysis.file.m"
              analysis__file__Result_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 380 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__Result_29, 0) = ((MR_Box) (analysis__file__TypeClassInfo_for_analysis_62));
#line 380 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__Result_29, 1) = analysis__file__CallPattern_22;
#line 380 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__Result_29, 2) = analysis__file__AnswerPattern_23;
#line 380 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__Result_29, 3) = ((MR_Box) (analysis__file__Status_24));
#line 380 "analysis.file.m"
            }
#line 382 "analysis.file.m"
            {
#line 382 "analysis.file.m"
              analysis__file__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[0], analysis__file__STATE_VARIABLE_Results_0_36, ((MR_Box) (analysis__file__AnalysisName_8)), &analysis__file__conv6_AnalysisResults0_30);
            }
#line 382 "analysis.file.m"
            if (analysis__file__succeeded)
#line 382 "analysis.file.m"
              {
#line 382 "analysis.file.m"
                analysis__file__AnalysisResults0_30 = ((MR_Word) analysis__file__conv6_AnalysisResults0_30);
#line 382 "analysis.file.m"
                analysis__file__succeeded = MR_TRUE;
#line 382 "analysis.file.m"
              }
#line 384 "analysis.file.m"
            if (analysis__file__succeeded)
#line 383 "analysis.file.m"
              analysis__file__AnalysisResults1_31 = analysis__file__AnalysisResults0_30;
#line 384 "analysis.file.m"
            else
#line 385 "analysis.file.m"
              {
#line 385 "analysis.file.m"
                {
#line 385 "analysis.file.m"
                  analysis__file__AnalysisResults1_31 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[0]);
                }
#line 385 "analysis.file.m"
              }
#line 387 "analysis.file.m"
            {
#line 387 "analysis.file.m"
              analysis__file__succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[0], analysis__file__AnalysisResults1_31, ((MR_Box) (analysis__file__FuncId_21)), &analysis__file__conv7_FuncResults0_32);
            }
#line 387 "analysis.file.m"
            if (analysis__file__succeeded)
#line 387 "analysis.file.m"
              {
#line 387 "analysis.file.m"
                analysis__file__FuncResults0_32 = ((MR_Word) analysis__file__conv7_FuncResults0_32);
#line 387 "analysis.file.m"
                analysis__file__succeeded = MR_TRUE;
#line 387 "analysis.file.m"
              }
#line 389 "analysis.file.m"
            if (analysis__file__succeeded)
#line 388 "analysis.file.m"
              {
#line 388 "analysis.file.m"
                analysis__file__FuncResults_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "analysis.file.m"
                MR_hl_field(MR_mktag(1), analysis__file__FuncResults_33, 0) = ((MR_Box) (analysis__file__Result_29));
#line 388 "analysis.file.m"
                MR_hl_field(MR_mktag(1), analysis__file__FuncResults_33, 1) = ((MR_Box) (analysis__file__FuncResults0_32));
#line 388 "analysis.file.m"
              }
#line 389 "analysis.file.m"
            else
#line 390 "analysis.file.m"
              {
#line 390 "analysis.file.m"
                {
#line 390 "analysis.file.m"
                  analysis__file__FuncResults_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "analysis.file.m"
                  MR_hl_field(MR_mktag(1), analysis__file__FuncResults_33, 0) = ((MR_Box) (analysis__file__Result_29));
#line 390 "analysis.file.m"
                  MR_hl_field(MR_mktag(1), analysis__file__FuncResults_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "analysis.file.m"
                }
#line 390 "analysis.file.m"
              }
#line 392 "analysis.file.m"
            {
#line 392 "analysis.file.m"
              mercury__map__set_4_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis__file_scalar_common_1[0], ((MR_Box) (analysis__file__FuncId_21)), ((MR_Box) (analysis__file__FuncResults_33)), analysis__file__AnalysisResults1_31, &analysis__file__AnalysisResults_34);
            }
#line 393 "analysis.file.m"
            {
#line 393 "analysis.file.m"
              mercury__map__set_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[0], ((MR_Box) (analysis__file__AnalysisName_8)), ((MR_Box) (analysis__file__AnalysisResults_34)), analysis__file__STATE_VARIABLE_Results_0_36, analysis__file__STATE_VARIABLE_Results_37);
#line 393 "analysis.file.m"
              return;
            }
#line 381 "analysis.file.m"
          }
#line 394 "analysis.file.m"
        else
#line 394 "analysis.file.m"
          *analysis__file__STATE_VARIABLE_Results_37 = analysis__file__STATE_VARIABLE_Results_0_36;
#line 394 "analysis.file.m"
      }
#line 398 "analysis.file.m"
    else
#line 399 "analysis.file.m"
      {
#line 399 "analysis.file.m"
        MR_String analysis__file__Msg_35;
#line 399 "analysis.file.m"
        MR_String analysis__file__V_59_59;
#line 399 "analysis.file.m"
        MR_Word analysis__file__V_60_60;

#line 399 "analysis.file.m"
        {
#line 399 "analysis.file.m"
          analysis__file__V_59_59 = mercury__string__string_1_f_0((MR_Word) &analysis__file_scalar_common_1[3], ((MR_Box) (analysis__file__Term_6)));
        }
#line 399 "analysis.file.m"
        {
#line 399 "analysis.file.m"
          analysis__file__Msg_35 = mercury__string__f_43_43_2_f_0((MR_String) "failed to parse result entry: ", analysis__file__V_59_59);
        }
#line 400 "analysis.file.m"
        analysis__file__V_60_60 = (MR_Word) analysis__file__Msg_35;
#line 400 "analysis.file.m"
        {
#line 400 "analysis.file.m"
          mercury__exception__throw_1_p_0((MR_Word) &analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0, ((MR_Box) (analysis__file__V_60_60)));
#line 400 "analysis.file.m"
          return;
        }
#line 399 "analysis.file.m"
      }
#line 398 "analysis.file.m"
  }
#line 356 "analysis.file.m"
}

#line 335 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_4(
#line 335 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 335 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_1,
#line 335 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 335 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_3)
#line 335 "analysis.file.m"
{
#line 335 "analysis.file.m"
  {
#line 335 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;
#line 335 "analysis.file.m"
    MR_Word analysis__file__conv1_HeadVar__3_55;

#line 335 "analysis.file.m"
    {
#line 335 "analysis.file.m"
      analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__335__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4))), &analysis__file__conv1_HeadVar__3_55);
    }
#line 335 "analysis.file.m"
    *analysis__file__wrapper_arg_1 = ((MR_Box) (analysis__file__conv1_HeadVar__3_55));
#line 335 "analysis.file.m"
  }
#line 335 "analysis.file.m"
}

#line 335 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_3(
#line 335 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 335 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 335 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 335 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_3)
#line 335 "analysis.file.m"
{
#line 335 "analysis.file.m"
  {
#line 335 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;
#line 335 "analysis.file.m"
    MR_Word analysis__file__conv0_STATE_VARIABLE_Results_37;

#line 335 "analysis.file.m"
    {
#line 335 "analysis.file.m"
      analysis__file__parse_result_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4)), ((MR_Word) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2), &analysis__file__conv0_STATE_VARIABLE_Results_37);
    }
#line 335 "analysis.file.m"
    *analysis__file__wrapper_arg_3 = ((MR_Box) (analysis__file__conv0_STATE_VARIABLE_Results_37));
#line 335 "analysis.file.m"
  }
#line 335 "analysis.file.m"
}

#line 326 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_2(
#line 326 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 326 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 326 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2)
#line 326 "analysis.file.m"
{
#line 326 "analysis.file.m"
  {
#line 326 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 326 "analysis.file.m"
    {
#line 326 "analysis.file.m"
      analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__326__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))));
#line 326 "analysis.file.m"
      return;
    }
#line 326 "analysis.file.m"
  }
#line 326 "analysis.file.m"
}

#line 348 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0_1(
#line 348 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 348 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 348 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2)
#line 348 "analysis.file.m"
{
#line 348 "analysis.file.m"
  {
#line 348 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 348 "analysis.file.m"
    {
#line 348 "analysis.file.m"
      analysis__file__IntroducedFrom__pred__read_module_analysis_results_2__348__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))));
#line 348 "analysis.file.m"
      return;
    }
#line 348 "analysis.file.m"
  }
#line 348 "analysis.file.m"
}

#line 316 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_results_2_5_p_0(
#line 316 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_52,
#line 316 "analysis.file.m"
  MR_Box analysis__file__Compiler_6,
#line 316 "analysis.file.m"
  MR_String analysis__file__AnalysisFileName_7,
#line 316 "analysis.file.m"
  MR_Word * analysis__file__ModuleResults_8)
#line 316 "analysis.file.m"
{
#line 321 "analysis.file.m"
  {
#line 321 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 321 "analysis.file.m"
    MR_Word analysis__file__ModuleResults0_10;
#line 321 "analysis.file.m"
    MR_Word analysis__file__OpenResult_11;

#line 322 "analysis.file.m"
    {
#line 322 "analysis.file.m"
      analysis__file__ModuleResults0_10 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[0]);
    }
#line 323 "analysis.file.m"
    {
#line 323 "analysis.file.m"
      mercury__io__open_input_4_p_0(analysis__file__AnalysisFileName_7, &analysis__file__OpenResult_11);
    }
#line 346 "analysis.file.m"
    if (((MR_tag((MR_Word) analysis__file__OpenResult_11)) == (MR_mktag((MR_Integer) 1))))
#line 347 "analysis.file.m"
      {
#line 347 "analysis.file.m"
        MR_Word analysis__file__V_21_21;

#line 348 "analysis.file.m"
        {
#line 348 "analysis.file.m"
          analysis__file__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 348 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_21_21, 0) = ((MR_Box) (&analysis__file_scalar_common_6[1]));
#line 348 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_21_21, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_2_5_p_0_1));
#line 348 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_21_21, 3) = ((MR_Box) (analysis__file__AnalysisFileName_7));
#line 348 "analysis.file.m"
        }
#line 348 "analysis.file.m"
        {
#line 348 "analysis.file.m"
          analysis__debug_msg_3_p_0(analysis__file__V_21_21);
        }
#line 353 "analysis.file.m"
        *analysis__file__ModuleResults_8 = analysis__file__ModuleResults0_10;
#line 347 "analysis.file.m"
      }
#line 346 "analysis.file.m"
    else
#line 325 "analysis.file.m"
      {
#line 325 "analysis.file.m"
        MR_Word analysis__file__Stream_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__OpenResult_11, (MR_Integer) 0)));
#line 325 "analysis.file.m"
        MR_Word analysis__file__OldStream_13;
#line 325 "analysis.file.m"
        MR_Word analysis__file__Results_14;
#line 325 "analysis.file.m"
        MR_Word analysis__file__V_31_31;
#line 325 "analysis.file.m"
        MR_Word analysis__file__TermResult_67;
#line 604 "analysis.file.m"
        MR_Word analysis__file__V_73_73;
#line 604 "analysis.file.m"
        MR_Word analysis__file__V_74_74;
#line 604 "analysis.file.m"
        MR_Integer analysis__file__V_75_75;
#line 604 "analysis.file.m"
        MR_Word analysis__file__V_76_76;
#line 604 "analysis.file.m"
        MR_Integer analysis__file__V_84_84;
#line 604 "analysis.file.m"
        MR_Word analysis__file__V_68_68;
#line 604 "analysis.file.m"
        MR_Word analysis__file__V_69_69;
#line 335 "analysis.file.m"
        MR_Word analysis__file__V_43_43;
#line 335 "analysis.file.m"
        MR_Word analysis__file__V_45_45;
#line 338 "analysis.file.m"
        MR_Word analysis__file__V_15_15;

#line 326 "analysis.file.m"
        {
#line 326 "analysis.file.m"
          analysis__file__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 326 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_31_31, 0) = ((MR_Box) (&analysis__file_scalar_common_6[1]));
#line 326 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_31_31, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_2_5_p_0_2));
#line 326 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 326 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_31_31, 3) = ((MR_Box) (analysis__file__AnalysisFileName_7));
#line 326 "analysis.file.m"
        }
#line 326 "analysis.file.m"
        {
#line 326 "analysis.file.m"
          analysis__debug_msg_3_p_0(analysis__file__V_31_31);
        }
#line 331 "analysis.file.m"
        {
#line 331 "analysis.file.m"
          mercury__io__set_input_stream_4_p_0(analysis__file__Stream_12, &analysis__file__OldStream_13);
        }
#line 602 "analysis.file.m"
        {
#line 602 "analysis.file.m"
          mercury__parser__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &analysis__file__TermResult_67);
        }
#line 604 "analysis.file.m"
        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__TermResult_67)) == (MR_mktag((MR_Integer) 2)));
#line 604 "analysis.file.m"
        if (analysis__file__succeeded)
#line 604 "analysis.file.m"
          {
#line 604 "analysis.file.m"
            analysis__file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), analysis__file__TermResult_67, (MR_Integer) 0)));
#line 604 "analysis.file.m"
            analysis__file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), analysis__file__TermResult_67, (MR_Integer) 1)));
#line 604 "analysis.file.m"
            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_73_73)) == (MR_mktag((MR_Integer) 0)));
#line 604 "analysis.file.m"
            if (analysis__file__succeeded)
#line 604 "analysis.file.m"
              {
#line 604 "analysis.file.m"
                analysis__file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_73_73, (MR_Integer) 0)));
#line 604 "analysis.file.m"
                analysis__file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_73_73, (MR_Integer) 1)));
#line 604 "analysis.file.m"
                analysis__file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_73_73, (MR_Integer) 2)));
#line 604 "analysis.file.m"
                analysis__file__succeeded = (analysis__file__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "analysis.file.m"
                if (analysis__file__succeeded)
#line 604 "analysis.file.m"
                  {
#line 604 "analysis.file.m"
                    analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_74_74)) == (MR_mktag((MR_Integer) 1)));
#line 604 "analysis.file.m"
                    if (analysis__file__succeeded)
#line 604 "analysis.file.m"
                      {
#line 604 "analysis.file.m"
                        analysis__file__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), analysis__file__V_74_74, (MR_Integer) 0)));
#line 160 "analysis.file.m"
                        analysis__file__V_84_84 = (MR_Integer) 6;
#line 604 "analysis.file.m"
                        analysis__file__succeeded = (analysis__file__V_75_75 == analysis__file__V_84_84);
#line 604 "analysis.file.m"
                      }
#line 604 "analysis.file.m"
                  }
#line 604 "analysis.file.m"
              }
#line 604 "analysis.file.m"
          }
#line 607 "analysis.file.m"
        if (analysis__file__succeeded)
#line 606 "analysis.file.m"
          {
#line 606 "analysis.file.m"
          }
#line 607 "analysis.file.m"
        else
#line 608 "analysis.file.m"
          {
#line 608 "analysis.file.m"
            MR_String analysis__file__Msg_70;
#line 608 "analysis.file.m"
            MR_String analysis__file__V_78_78;
#line 608 "analysis.file.m"
            MR_Word analysis__file__V_79_79;

#line 608 "analysis.file.m"
            {
#line 608 "analysis.file.m"
              analysis__file__V_78_78 = mercury__string__string_1_f_0((MR_Word) &analysis__file_scalar_common_1[4], ((MR_Box) (analysis__file__TermResult_67)));
            }
#line 608 "analysis.file.m"
            {
#line 608 "analysis.file.m"
              analysis__file__Msg_70 = mercury__string__f_43_43_2_f_0((MR_String) "bad analysis file version: ", analysis__file__V_78_78);
            }
#line 609 "analysis.file.m"
            analysis__file__V_79_79 = (MR_Word) analysis__file__Msg_70;
#line 609 "analysis.file.m"
            {
#line 609 "analysis.file.m"
              mercury__exception__throw_1_p_0((MR_Word) &analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0, ((MR_Box) (analysis__file__V_79_79)));
#line 609 "analysis.file.m"
              return;
            }
#line 608 "analysis.file.m"
          }
#line 335 "analysis.file.m"
        {
#line 335 "analysis.file.m"
          analysis__file__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 335 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_45_45, 0) = ((MR_Box) (&analysis__file_scalar_common_7[4]));
#line 335 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_45_45, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_2_5_p_0_3));
#line 335 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 335 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_45_45, 3) = ((MR_Box) (analysis__file__TypeClassInfo_for_compiler_52));
#line 335 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_45_45, 4) = analysis__file__Compiler_6;
#line 335 "analysis.file.m"
        }
#line 335 "analysis.file.m"
        {
#line 335 "analysis.file.m"
          analysis__file__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 335 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_43_43, 0) = ((MR_Box) (&analysis__file_scalar_common_7[5]));
#line 335 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_43_43, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_2_5_p_0_4));
#line 335 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 335 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_43_43, 3) = ((MR_Box) (analysis__file__ModuleResults0_10));
#line 335 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_43_43, 4) = ((MR_Box) (analysis__file__V_45_45));
#line 335 "analysis.file.m"
        }
#line 335 "analysis.file.m"
        {
#line 335 "analysis.file.m"
          mercury__exception__try_io_4_p_0((MR_Word) &analysis__file_scalar_common_2[1], analysis__file__V_43_43, &analysis__file__Results_14);
        }
#line 338 "analysis.file.m"
        {
#line 338 "analysis.file.m"
          mercury__io__set_input_stream_4_p_0(analysis__file__OldStream_13, &analysis__file__V_15_15);
        }
#line 339 "analysis.file.m"
        {
#line 339 "analysis.file.m"
          mercury__io__close_input_3_p_0(analysis__file__Stream_12);
        }
#line 342 "analysis.file.m"
        if (((MR_tag((MR_Word) analysis__file__Results_14)) == (MR_mktag((MR_Integer) 2))))
#line 343 "analysis.file.m"
          {
#line 344 "analysis.file.m"
            {
#line 344 "analysis.file.m"
              mercury__exception__rethrow_1_p_0((MR_Word) &analysis__file_scalar_common_2[1], analysis__file__Results_14);
#line 344 "analysis.file.m"
              return;
            }
#line 343 "analysis.file.m"
          }
#line 342 "analysis.file.m"
        else
#line 341 "analysis.file.m"
          *analysis__file__ModuleResults_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__Results_14, (MR_Integer) 0)));
#line 325 "analysis.file.m"
      }
#line 321 "analysis.file.m"
  }
#line 316 "analysis.file.m"
}

#line 911 "analysis.file.m"
static void MR_CALL 
analysis__file__empty_request_file_5_p_0_1(
#line 911 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 911 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 911 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2)
#line 911 "analysis.file.m"
{
#line 911 "analysis.file.m"
  {
#line 911 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 911 "analysis.file.m"
    {
#line 911 "analysis.file.m"
      analysis__file__IntroducedFrom__pred__empty_request_file__911__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))));
#line 911 "analysis.file.m"
      return;
    }
#line 911 "analysis.file.m"
  }
#line 911 "analysis.file.m"
}

#line 98 "analysis.file.m"
void MR_CALL 
analysis__file__empty_request_file_5_p_0(
#line 98 "analysis.file.m"
  MR_Word analysis__file__Info_6,
#line 98 "analysis.file.m"
  MR_Word analysis__file__Globals_7,
#line 98 "analysis.file.m"
  MR_Word analysis__file__ModuleName_8)
#line 98 "analysis.file.m"
{
#line 908 "analysis.file.m"
  {
#line 908 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 908 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_compiler_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_6, (MR_Integer) 0)));
#line 908 "analysis.file.m"
    MR_String analysis__file__RequestFileName_10;
#line 908 "analysis.file.m"
    MR_Box analysis__file__V_14_14 = (MR_hl_field(MR_mktag(0), analysis__file__Info_6, (MR_Integer) 1));
#line 908 "analysis.file.m"
    MR_Word analysis__file__V_17_17;
#line 909 "analysis.file.m"
    MR_Word analysis__file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_6, (MR_Integer) 2)));
#line 909 "analysis.file.m"
    MR_Word analysis__file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_6, (MR_Integer) 3)));
#line 909 "analysis.file.m"
    MR_Word analysis__file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_6, (MR_Integer) 4)));
#line 909 "analysis.file.m"
    MR_Word analysis__file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_6, (MR_Integer) 5)));
#line 909 "analysis.file.m"
    MR_Word analysis__file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_6, (MR_Integer) 6)));
#line 909 "analysis.file.m"
    MR_Word analysis__file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_6, (MR_Integer) 7)));
#line 909 "analysis.file.m"
    MR_Word analysis__file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_6, (MR_Integer) 8)));
#line 909 "analysis.file.m"
    MR_Word analysis__file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_6, (MR_Integer) 9)));
#line 909 "analysis.file.m"
    MR_Word analysis__file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_6, (MR_Integer) 10)));
#line 8592 "analysis.file.c"
    void MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_39, (MR_Integer) 0)), (MR_Integer) 8)));
#line 8594 "analysis.file.c"
    MR_Box analysis__file__conv2_RequestFileName_10;
#line 8596 "analysis.file.c"
    MR_Box analysis__file__conv1_STATE_VARIABLE_IO_16_16;
#line 916 "analysis.file.m"
    MR_Word analysis__file__V_11_11;

#line 8601 "analysis.file.c"
    {
#line 8603 "analysis.file.c"
      analysis__file__func_0(((MR_Box) analysis__file__TypeClassInfo_for_compiler_39), analysis__file__V_14_14, ((MR_Box) (analysis__file__Globals_7)), ((MR_Box) (analysis__file__ModuleName_8)), ((MR_Box) ((MR_String) ".request")), &analysis__file__conv2_RequestFileName_10, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv1_STATE_VARIABLE_IO_16_16);
    }
#line 8606 "analysis.file.c"
    analysis__file__RequestFileName_10 = ((MR_String) analysis__file__conv2_RequestFileName_10);
#line 911 "analysis.file.m"
    {
#line 911 "analysis.file.m"
      analysis__file__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 911 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_17_17, 0) = ((MR_Box) (&analysis__file_scalar_common_6[1]));
#line 911 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_17_17, 1) = ((MR_Box) (analysis__file__empty_request_file_5_p_0_1));
#line 911 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 911 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_17_17, 3) = ((MR_Box) (analysis__file__RequestFileName_10));
#line 911 "analysis.file.m"
    }
#line 911 "analysis.file.m"
    {
#line 911 "analysis.file.m"
      analysis__debug_msg_3_p_0(analysis__file__V_17_17);
    }
#line 916 "analysis.file.m"
    {
#line 916 "analysis.file.m"
      mercury__io__remove_file_4_p_0(analysis__file__RequestFileName_10, &analysis__file__V_11_11);
    }
#line 908 "analysis.file.m"
  }
#line 98 "analysis.file.m"
}

#line 791 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_imdg_6_p_0_1(
#line 791 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 791 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 791 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 791 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 791 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_4,
#line 791 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_5)
#line 791 "analysis.file.m"
{
#line 791 "analysis.file.m"
  {
#line 791 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 791 "analysis.file.m"
    {
#line 791 "analysis.file.m"
      analysis__file__write_imdg_arc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4)), ((MR_String) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2), ((MR_Word) analysis__file__wrapper_arg_3));
#line 791 "analysis.file.m"
      return;
    }
#line 791 "analysis.file.m"
  }
#line 791 "analysis.file.m"
}

#line 90 "analysis.file.m"
void MR_CALL 
analysis__file__write_module_imdg_6_p_0(
#line 90 "analysis.file.m"
  MR_Word analysis__file__Info_7,
#line 90 "analysis.file.m"
  MR_Word analysis__file__Globals_8,
#line 90 "analysis.file.m"
  MR_Word analysis__file__ModuleName_9,
#line 90 "analysis.file.m"
  MR_Word analysis__file__ModuleEntries_10)
#line 90 "analysis.file.m"
{
#line 788 "analysis.file.m"
  {
#line 788 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 788 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_compiler_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 0)));
#line 788 "analysis.file.m"
    MR_Box analysis__file__V_16_16 = (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 1));
#line 788 "analysis.file.m"
    MR_Word analysis__file__V_18_18;
#line 790 "analysis.file.m"
    MR_Word analysis__file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 2)));
#line 790 "analysis.file.m"
    MR_Word analysis__file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 3)));
#line 790 "analysis.file.m"
    MR_Word analysis__file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 4)));
#line 790 "analysis.file.m"
    MR_Word analysis__file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 5)));
#line 790 "analysis.file.m"
    MR_Word analysis__file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 6)));
#line 790 "analysis.file.m"
    MR_Word analysis__file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 7)));
#line 790 "analysis.file.m"
    MR_Word analysis__file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 8)));
#line 790 "analysis.file.m"
    MR_Word analysis__file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 9)));
#line 790 "analysis.file.m"
    MR_Word analysis__file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 10)));
#line 790 "analysis.file.m"
    MR_String analysis__file___FileName_13;

#line 791 "analysis.file.m"
    {
#line 791 "analysis.file.m"
      analysis__file__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 791 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_18_18, 0) = ((MR_Box) (&analysis__file_scalar_common_8[1]));
#line 791 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_18_18, 1) = ((MR_Box) (analysis__file__write_module_imdg_6_p_0_1));
#line 791 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 791 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_18_18, 3) = ((MR_Box) (analysis__file__TypeClassInfo_for_compiler_45));
#line 791 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_18_18, 4) = analysis__file__V_16_16;
#line 791 "analysis.file.m"
    }
#line 790 "analysis.file.m"
    {
#line 790 "analysis.file.m"
      analysis__file__write_analysis_file_10_p_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__file__TypeClassInfo_for_compiler_45, analysis__file__V_16_16, analysis__file__Globals_8, analysis__file__ModuleName_9, (MR_String) ".imdg", (MR_Integer) 0, analysis__file__V_18_18, analysis__file__ModuleEntries_10, &analysis__file___FileName_13);
    }
#line 788 "analysis.file.m"
  }
#line 90 "analysis.file.m"
}

#line 546 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_2(
#line 546 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 546 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 546 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2)
#line 546 "analysis.file.m"
{
#line 546 "analysis.file.m"
  {
#line 546 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 546 "analysis.file.m"
    {
#line 546 "analysis.file.m"
      analysis__file__IntroducedFrom__pred__read_analysis_file__546__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 5))));
#line 546 "analysis.file.m"
      return;
    }
#line 546 "analysis.file.m"
  }
#line 546 "analysis.file.m"
}

#line 459 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_imdg_6_p_0_1(
#line 459 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 459 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 459 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 459 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_3)
#line 459 "analysis.file.m"
{
#line 459 "analysis.file.m"
  {
#line 459 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;
#line 459 "analysis.file.m"
    MR_Word analysis__file__conv0_STATE_VARIABLE_Arcs_35;

#line 459 "analysis.file.m"
    {
#line 459 "analysis.file.m"
      analysis__file__parse_imdg_arc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4)), ((MR_Word) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2), &analysis__file__conv0_STATE_VARIABLE_Arcs_35);
    }
#line 459 "analysis.file.m"
    *analysis__file__wrapper_arg_3 = ((MR_Box) (analysis__file__conv0_STATE_VARIABLE_Arcs_35));
#line 459 "analysis.file.m"
  }
#line 459 "analysis.file.m"
}

#line 83 "analysis.file.m"
void MR_CALL 
analysis__file__read_module_imdg_6_p_0(
#line 83 "analysis.file.m"
  MR_Word analysis__file__Info_7,
#line 83 "analysis.file.m"
  MR_Word analysis__file__Globals_8,
#line 83 "analysis.file.m"
  MR_Word analysis__file__ModuleName_9,
#line 83 "analysis.file.m"
  MR_Word * analysis__file__ModuleEntries_10)
#line 83 "analysis.file.m"
{
#line 457 "analysis.file.m"
  {
#line 457 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 457 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_compiler_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 0)));
#line 457 "analysis.file.m"
    MR_Box analysis__file__V_14_14 = (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 1));
#line 457 "analysis.file.m"
    MR_Word analysis__file__V_16_16;
#line 457 "analysis.file.m"
    MR_Word analysis__file__V_17_17;
#line 457 "analysis.file.m"
    MR_Word analysis__file__MaybeAnalysisFileName_56;
#line 458 "analysis.file.m"
    MR_Word analysis__file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 2)));
#line 458 "analysis.file.m"
    MR_Word analysis__file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 3)));
#line 458 "analysis.file.m"
    MR_Word analysis__file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 4)));
#line 458 "analysis.file.m"
    MR_Word analysis__file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 5)));
#line 458 "analysis.file.m"
    MR_Word analysis__file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 6)));
#line 458 "analysis.file.m"
    MR_Word analysis__file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 7)));
#line 458 "analysis.file.m"
    MR_Word analysis__file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 8)));
#line 458 "analysis.file.m"
    MR_Word analysis__file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 9)));
#line 458 "analysis.file.m"
    MR_Word analysis__file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 10)));
#line 8846 "analysis.file.c"
    void MR_CALL (* analysis__file__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 8848 "analysis.file.c"
    MR_Box analysis__file__conv3_MaybeAnalysisFileName_56;
#line 8850 "analysis.file.c"
    MR_Box analysis__file__conv2_STATE_VARIABLE_IO_23_59;

#line 459 "analysis.file.m"
    {
#line 459 "analysis.file.m"
      analysis__file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 459 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 0) = ((MR_Box) (&analysis__file_scalar_common_7[3]));
#line 459 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 1) = ((MR_Box) (analysis__file__read_module_imdg_6_p_0_1));
#line 459 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 459 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 3) = ((MR_Box) (analysis__file__TypeClassInfo_for_compiler_42));
#line 459 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 4) = analysis__file__V_14_14;
#line 459 "analysis.file.m"
    }
#line 459 "analysis.file.m"
    {
#line 459 "analysis.file.m"
      analysis__file__V_17_17 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[4]);
    }
#line 8874 "analysis.file.c"
    analysis__file__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_42, (MR_Integer) 0)), (MR_Integer) 7)));
#line 8876 "analysis.file.c"
    {
#line 8878 "analysis.file.c"
      analysis__file__func_1(((MR_Box) analysis__file__TypeClassInfo_for_compiler_42), analysis__file__V_14_14, ((MR_Box) (analysis__file__Globals_8)), ((MR_Box) (analysis__file__ModuleName_9)), ((MR_Box) ((MR_String) ".imdg")), &analysis__file__conv3_MaybeAnalysisFileName_56, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv2_STATE_VARIABLE_IO_23_59);
    }
#line 8881 "analysis.file.c"
    analysis__file__MaybeAnalysisFileName_56 = ((MR_Word) analysis__file__conv3_MaybeAnalysisFileName_56);
#line 544 "analysis.file.m"
    if (((MR_tag((MR_Word) analysis__file__MaybeAnalysisFileName_56)) == (MR_mktag((MR_Integer) 1))))
#line 545 "analysis.file.m"
      {
#line 545 "analysis.file.m"
        MR_String analysis__file__Message_58 = ((MR_String) (MR_hl_field(MR_mktag(1), analysis__file__MaybeAnalysisFileName_56, (MR_Integer) 0)));
#line 545 "analysis.file.m"
        MR_Word analysis__file__V_60_60;

#line 546 "analysis.file.m"
        {
#line 546 "analysis.file.m"
          analysis__file__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 546 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_60_60, 0) = ((MR_Box) (&analysis__file_scalar_common_7[2]));
#line 546 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_60_60, 1) = ((MR_Box) (analysis__file__read_module_imdg_6_p_0_2));
#line 546 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 546 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_60_60, 3) = ((MR_Box) (analysis__file__ModuleName_9));
#line 546 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_60_60, 4) = ((MR_Box) ((MR_String) ".imdg"));
#line 546 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_60_60, 5) = ((MR_Box) (analysis__file__Message_58));
#line 546 "analysis.file.m"
        }
#line 546 "analysis.file.m"
        {
#line 546 "analysis.file.m"
          analysis__debug_msg_3_p_0(analysis__file__V_60_60);
        }
#line 555 "analysis.file.m"
        *analysis__file__ModuleEntries_10 = analysis__file__V_17_17;
#line 545 "analysis.file.m"
      }
#line 544 "analysis.file.m"
    else
#line 541 "analysis.file.m"
      {
#line 541 "analysis.file.m"
        MR_String analysis__file__AnalysisFileName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__MaybeAnalysisFileName_56, (MR_Integer) 0)));
#line 542 "analysis.file.m"
        MR_Box analysis__file__conv4_ModuleEntries_10;

#line 542 "analysis.file.m"
        {
#line 542 "analysis.file.m"
          analysis__file__read_analysis_file_6_p_0((MR_Word) &analysis__file_scalar_common_2[5], analysis__file__AnalysisFileName_57, analysis__file__V_16_16, ((MR_Box) (analysis__file__V_17_17)), &analysis__file__conv4_ModuleEntries_10);
        }
#line 542 "analysis.file.m"
        *analysis__file__ModuleEntries_10 = ((MR_Word) analysis__file__conv4_ModuleEntries_10);
#line 541 "analysis.file.m"
      }
#line 457 "analysis.file.m"
  }
#line 83 "analysis.file.m"
}

#line 755 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_5(
#line 755 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_4,
#line 755 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_5)
#line 755 "analysis.file.m"
{
#line 755 "analysis.file.m"
  {
#line 755 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 755 "analysis.file.m"
    {
#line 755 "analysis.file.m"
      analysis__file__write_request_entry_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4)), ((MR_String) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2), ((MR_Word) analysis__file__wrapper_arg_3));
#line 755 "analysis.file.m"
      return;
    }
#line 755 "analysis.file.m"
  }
#line 755 "analysis.file.m"
}

#line 737 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_4(
#line 737 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 737 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 737 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 737 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 737 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_4,
#line 737 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_5)
#line 737 "analysis.file.m"
{
#line 737 "analysis.file.m"
  {
#line 737 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 737 "analysis.file.m"
    {
#line 737 "analysis.file.m"
      analysis__file__write_request_entry_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4)), ((MR_String) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2), ((MR_Word) analysis__file__wrapper_arg_3));
#line 737 "analysis.file.m"
      return;
    }
#line 737 "analysis.file.m"
  }
#line 737 "analysis.file.m"
}

#line 755 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_3(
#line 755 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_4,
#line 755 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_5)
#line 755 "analysis.file.m"
{
#line 755 "analysis.file.m"
  {
#line 755 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 755 "analysis.file.m"
    {
#line 755 "analysis.file.m"
      analysis__file__write_request_entry_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4)), ((MR_String) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2), ((MR_Word) analysis__file__wrapper_arg_3));
#line 755 "analysis.file.m"
      return;
    }
#line 755 "analysis.file.m"
  }
#line 755 "analysis.file.m"
}

#line 755 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_2(
#line 755 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 755 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_4,
#line 755 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_5)
#line 755 "analysis.file.m"
{
#line 755 "analysis.file.m"
  {
#line 755 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 755 "analysis.file.m"
    {
#line 755 "analysis.file.m"
      analysis__file__write_request_entry_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4)), ((MR_String) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2), ((MR_Word) analysis__file__wrapper_arg_3));
#line 755 "analysis.file.m"
      return;
    }
#line 755 "analysis.file.m"
  }
#line 755 "analysis.file.m"
}

#line 714 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0_1(
#line 714 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 714 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 714 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2)
#line 714 "analysis.file.m"
{
#line 714 "analysis.file.m"
  {
#line 714 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 714 "analysis.file.m"
    {
#line 714 "analysis.file.m"
      analysis__file__IntroducedFrom__pred__write_module_analysis_requests__714__1_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))));
#line 714 "analysis.file.m"
      return;
    }
#line 714 "analysis.file.m"
  }
#line 714 "analysis.file.m"
}

#line 75 "analysis.file.m"
void MR_CALL 
analysis__file__write_module_analysis_requests_6_p_0(
#line 75 "analysis.file.m"
  MR_Word analysis__file__Info_7,
#line 75 "analysis.file.m"
  MR_Word analysis__file__Globals_8,
#line 75 "analysis.file.m"
  MR_Word analysis__file__ModuleName_9,
#line 75 "analysis.file.m"
  MR_Word analysis__file__ModuleRequests_10)
#line 75 "analysis.file.m"
{
#line 710 "analysis.file.m"
  {
#line 710 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 710 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_compiler_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 0)));
#line 710 "analysis.file.m"
    MR_Box analysis__file__Compiler_12 = (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 1));
#line 710 "analysis.file.m"
    MR_String analysis__file__AnalysisFileName_13;
#line 710 "analysis.file.m"
    MR_Word analysis__file__InputResult_14;
#line 710 "analysis.file.m"
    MR_Word analysis__file__V_32_32;
#line 711 "analysis.file.m"
    MR_Word analysis__file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 2)));
#line 711 "analysis.file.m"
    MR_Word analysis__file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 3)));
#line 711 "analysis.file.m"
    MR_Word analysis__file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 4)));
#line 711 "analysis.file.m"
    MR_Word analysis__file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 5)));
#line 711 "analysis.file.m"
    MR_Word analysis__file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 6)));
#line 711 "analysis.file.m"
    MR_Word analysis__file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 7)));
#line 711 "analysis.file.m"
    MR_Word analysis__file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 8)));
#line 711 "analysis.file.m"
    MR_Word analysis__file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 9)));
#line 711 "analysis.file.m"
    MR_Word analysis__file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 10)));
#line 9151 "analysis.file.c"
    void MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_71, (MR_Integer) 0)), (MR_Integer) 8)));
#line 9153 "analysis.file.c"
    MR_Box analysis__file__conv2_AnalysisFileName_13;
#line 9155 "analysis.file.c"
    MR_Box analysis__file__conv1_STATE_VARIABLE_IO_31_31;

#line 9158 "analysis.file.c"
    {
#line 9160 "analysis.file.c"
      analysis__file__func_0(((MR_Box) analysis__file__TypeClassInfo_for_compiler_71), analysis__file__Compiler_12, ((MR_Box) (analysis__file__Globals_8)), ((MR_Box) (analysis__file__ModuleName_9)), ((MR_Box) ((MR_String) ".request")), &analysis__file__conv2_AnalysisFileName_13, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv1_STATE_VARIABLE_IO_31_31);
    }
#line 9163 "analysis.file.c"
    analysis__file__AnalysisFileName_13 = ((MR_String) analysis__file__conv2_AnalysisFileName_13);
#line 714 "analysis.file.m"
    {
#line 714 "analysis.file.m"
      analysis__file__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 714 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_32_32, 0) = ((MR_Box) (&analysis__file_scalar_common_6[1]));
#line 714 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_32_32, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_1));
#line 714 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 714 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_32_32, 3) = ((MR_Box) (analysis__file__AnalysisFileName_13));
#line 714 "analysis.file.m"
    }
#line 714 "analysis.file.m"
    {
#line 714 "analysis.file.m"
      analysis__debug_msg_3_p_0(analysis__file__V_32_32);
    }
#line 719 "analysis.file.m"
    {
#line 719 "analysis.file.m"
      mercury__io__open_input_4_p_0(analysis__file__AnalysisFileName_13, &analysis__file__InputResult_14);
    }
#line 9189 "analysis.file.c"
    if (((MR_tag((MR_Word) analysis__file__InputResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 9191 "analysis.file.c"
      {
#line 9193 "analysis.file.c"
        MR_Word analysis__file__V_58_58;

#line 755 "analysis.file.m"
        {
#line 755 "analysis.file.m"
          analysis__file__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 755 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_58_58, 0) = ((MR_Box) (&analysis__file_scalar_common_8[0]));
#line 755 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_58_58, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_2));
#line 755 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 755 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_58_58, 3) = ((MR_Box) (analysis__file__TypeClassInfo_for_compiler_71));
#line 755 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_58_58, 4) = analysis__file__Compiler_12;
#line 755 "analysis.file.m"
        }
#line 755 "analysis.file.m"
        {
#line 755 "analysis.file.m"
          analysis__file__write_analysis_file_5_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__file__AnalysisFileName_13, analysis__file__V_58_58, analysis__file__ModuleRequests_10);
#line 755 "analysis.file.m"
          return;
        }
#line 9219 "analysis.file.c"
      }
#line 9221 "analysis.file.c"
    else
#line 9223 "analysis.file.c"
      {
#line 9225 "analysis.file.c"
        MR_Word analysis__file__InputStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__InputResult_14, (MR_Integer) 0)));
#line 9227 "analysis.file.c"
        MR_Word analysis__file__OldInputStream_16;
#line 9229 "analysis.file.c"
        MR_Word analysis__file__VersionResult_17;
#line 727 "analysis.file.m"
        MR_Word analysis__file__V_18_18;
#line 730 "analysis.file.m"
        MR_Word analysis__file__V_48_48;
#line 730 "analysis.file.m"
        MR_Word analysis__file__V_49_49;
#line 730 "analysis.file.m"
        MR_Integer analysis__file__V_50_50;
#line 730 "analysis.file.m"
        MR_Word analysis__file__V_51_51;
#line 730 "analysis.file.m"
        MR_Integer analysis__file__V_86_86;
#line 730 "analysis.file.m"
        MR_Word analysis__file__V_19_19;
#line 730 "analysis.file.m"
        MR_Word analysis__file__V_20_20;

#line 725 "analysis.file.m"
        {
#line 725 "analysis.file.m"
          mercury__io__set_input_stream_4_p_0(analysis__file__InputStream_15, &analysis__file__OldInputStream_16);
        }
#line 726 "analysis.file.m"
        {
#line 726 "analysis.file.m"
          mercury__parser__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &analysis__file__VersionResult_17);
        }
#line 727 "analysis.file.m"
        {
#line 727 "analysis.file.m"
          mercury__io__set_input_stream_4_p_0(analysis__file__OldInputStream_16, &analysis__file__V_18_18);
        }
#line 728 "analysis.file.m"
        {
#line 728 "analysis.file.m"
          mercury__io__close_input_3_p_0(analysis__file__InputStream_15);
        }
#line 730 "analysis.file.m"
        analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__VersionResult_17)) == (MR_mktag((MR_Integer) 2)));
#line 730 "analysis.file.m"
        if (analysis__file__succeeded)
#line 730 "analysis.file.m"
          {
#line 730 "analysis.file.m"
            analysis__file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), analysis__file__VersionResult_17, (MR_Integer) 0)));
#line 730 "analysis.file.m"
            analysis__file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), analysis__file__VersionResult_17, (MR_Integer) 1)));
#line 730 "analysis.file.m"
            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_48_48)) == (MR_mktag((MR_Integer) 0)));
#line 730 "analysis.file.m"
            if (analysis__file__succeeded)
#line 730 "analysis.file.m"
              {
#line 730 "analysis.file.m"
                analysis__file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_48_48, (MR_Integer) 0)));
#line 730 "analysis.file.m"
                analysis__file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_48_48, (MR_Integer) 1)));
#line 730 "analysis.file.m"
                analysis__file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__V_48_48, (MR_Integer) 2)));
#line 731 "analysis.file.m"
                analysis__file__succeeded = (analysis__file__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "analysis.file.m"
                if (analysis__file__succeeded)
#line 730 "analysis.file.m"
                  {
#line 731 "analysis.file.m"
                    analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 731 "analysis.file.m"
                    if (analysis__file__succeeded)
#line 731 "analysis.file.m"
                      {
#line 731 "analysis.file.m"
                        analysis__file__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), analysis__file__V_49_49, (MR_Integer) 0)));
#line 160 "analysis.file.m"
                        analysis__file__V_86_86 = (MR_Integer) 6;
#line 731 "analysis.file.m"
                        analysis__file__succeeded = (analysis__file__V_50_50 == analysis__file__V_86_86);
#line 731 "analysis.file.m"
                      }
#line 730 "analysis.file.m"
                  }
#line 730 "analysis.file.m"
              }
#line 730 "analysis.file.m"
          }
#line 9316 "analysis.file.c"
        if (analysis__file__succeeded)
#line 9318 "analysis.file.c"
          {
#line 9320 "analysis.file.c"
            MR_Word analysis__file__AppendResult_21;

#line 733 "analysis.file.m"
            {
#line 733 "analysis.file.m"
              mercury__io__open_append_4_p_0(analysis__file__AnalysisFileName_13, &analysis__file__AppendResult_21);
            }
#line 9328 "analysis.file.c"
            if (((MR_tag((MR_Word) analysis__file__AppendResult_21)) == (MR_mktag((MR_Integer) 1))))
#line 9330 "analysis.file.c"
              {
#line 9332 "analysis.file.c"
                MR_Word analysis__file__V_87_87;

#line 755 "analysis.file.m"
                {
#line 755 "analysis.file.m"
                  analysis__file__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 755 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_87_87, 0) = ((MR_Box) (&analysis__file_scalar_common_8[0]));
#line 755 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_87_87, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_3));
#line 755 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 755 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_87_87, 3) = ((MR_Box) (analysis__file__TypeClassInfo_for_compiler_71));
#line 755 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_87_87, 4) = analysis__file__Compiler_12;
#line 755 "analysis.file.m"
                }
#line 755 "analysis.file.m"
                {
#line 755 "analysis.file.m"
                  analysis__file__write_analysis_file_5_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__file__AnalysisFileName_13, analysis__file__V_87_87, analysis__file__ModuleRequests_10);
#line 755 "analysis.file.m"
                  return;
                }
#line 9358 "analysis.file.c"
              }
#line 9360 "analysis.file.c"
            else
#line 9362 "analysis.file.c"
              {
#line 9364 "analysis.file.c"
                MR_Word analysis__file__AppendStream_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__AppendResult_21, (MR_Integer) 0)));
#line 9366 "analysis.file.c"
                MR_Word analysis__file__OldOutputStream_23;
#line 9368 "analysis.file.c"
                MR_Word analysis__file__V_54_54;
#line 739 "analysis.file.m"
                MR_Word analysis__file__V_24_24;

#line 736 "analysis.file.m"
                {
#line 736 "analysis.file.m"
                  mercury__io__set_output_stream_4_p_0(analysis__file__AppendStream_22, &analysis__file__OldOutputStream_23);
                }
#line 737 "analysis.file.m"
                {
#line 737 "analysis.file.m"
                  analysis__file__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 737 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_54_54, 0) = ((MR_Box) (&analysis__file_scalar_common_8[0]));
#line 737 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_54_54, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_4));
#line 737 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 737 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_54_54, 3) = ((MR_Box) (analysis__file__TypeClassInfo_for_compiler_71));
#line 737 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_54_54, 4) = analysis__file__Compiler_12;
#line 737 "analysis.file.m"
                }
#line 737 "analysis.file.m"
                {
#line 737 "analysis.file.m"
                  analysis__file__write_analysis_file_2_4_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__file__V_54_54, analysis__file__ModuleRequests_10);
                }
#line 739 "analysis.file.m"
                {
#line 739 "analysis.file.m"
                  mercury__io__set_output_stream_4_p_0(analysis__file__OldOutputStream_23, &analysis__file__V_24_24);
                }
#line 740 "analysis.file.m"
                {
#line 740 "analysis.file.m"
                  mercury__io__close_output_3_p_0(analysis__file__AppendStream_22);
#line 740 "analysis.file.m"
                  return;
                }
#line 9411 "analysis.file.c"
              }
#line 9413 "analysis.file.c"
          }
#line 9415 "analysis.file.c"
        else
#line 9417 "analysis.file.c"
          {
#line 9419 "analysis.file.c"
            MR_Word analysis__file__V_96_96;

#line 755 "analysis.file.m"
            {
#line 755 "analysis.file.m"
              analysis__file__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 755 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__V_96_96, 0) = ((MR_Box) (&analysis__file_scalar_common_8[0]));
#line 755 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__V_96_96, 1) = ((MR_Box) (analysis__file__write_module_analysis_requests_6_p_0_5));
#line 755 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 755 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__V_96_96, 3) = ((MR_Box) (analysis__file__TypeClassInfo_for_compiler_71));
#line 755 "analysis.file.m"
              MR_hl_field(MR_mktag(0), analysis__file__V_96_96, 4) = analysis__file__Compiler_12;
#line 755 "analysis.file.m"
            }
#line 755 "analysis.file.m"
            {
#line 755 "analysis.file.m"
              analysis__file__write_analysis_file_5_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__file__AnalysisFileName_13, analysis__file__V_96_96, analysis__file__ModuleRequests_10);
#line 755 "analysis.file.m"
              return;
            }
#line 9445 "analysis.file.c"
          }
#line 9447 "analysis.file.c"
      }
#line 710 "analysis.file.m"
  }
#line 75 "analysis.file.m"
}

#line 546 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_2(
#line 546 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 546 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 546 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2)
#line 546 "analysis.file.m"
{
#line 546 "analysis.file.m"
  {
#line 546 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 546 "analysis.file.m"
    {
#line 546 "analysis.file.m"
      analysis__file__IntroducedFrom__pred__read_analysis_file__546__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 5))));
#line 546 "analysis.file.m"
      return;
    }
#line 546 "analysis.file.m"
  }
#line 546 "analysis.file.m"
}

#line 408 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0_1(
#line 408 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 408 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 408 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 408 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_3)
#line 408 "analysis.file.m"
{
#line 408 "analysis.file.m"
  {
#line 408 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;
#line 408 "analysis.file.m"
    MR_Word analysis__file__conv0_STATE_VARIABLE_Requests_35;

#line 408 "analysis.file.m"
    {
#line 408 "analysis.file.m"
      analysis__file__parse_request_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4)), ((MR_Word) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2), &analysis__file__conv0_STATE_VARIABLE_Requests_35);
    }
#line 408 "analysis.file.m"
    *analysis__file__wrapper_arg_3 = ((MR_Box) (analysis__file__conv0_STATE_VARIABLE_Requests_35));
#line 408 "analysis.file.m"
  }
#line 408 "analysis.file.m"
}

#line 66 "analysis.file.m"
void MR_CALL 
analysis__file__read_module_analysis_requests_6_p_0(
#line 66 "analysis.file.m"
  MR_Word analysis__file__Info_7,
#line 66 "analysis.file.m"
  MR_Word analysis__file__Globals_8,
#line 66 "analysis.file.m"
  MR_Word analysis__file__ModuleName_9,
#line 66 "analysis.file.m"
  MR_Word * analysis__file__ModuleRequests_10)
#line 66 "analysis.file.m"
{
#line 406 "analysis.file.m"
  {
#line 406 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 406 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_compiler_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 0)));
#line 406 "analysis.file.m"
    MR_Box analysis__file__V_14_14 = (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 1));
#line 406 "analysis.file.m"
    MR_Word analysis__file__V_16_16;
#line 406 "analysis.file.m"
    MR_Word analysis__file__V_17_17;
#line 406 "analysis.file.m"
    MR_Word analysis__file__MaybeAnalysisFileName_56;
#line 407 "analysis.file.m"
    MR_Word analysis__file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 2)));
#line 407 "analysis.file.m"
    MR_Word analysis__file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 3)));
#line 407 "analysis.file.m"
    MR_Word analysis__file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 4)));
#line 407 "analysis.file.m"
    MR_Word analysis__file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 5)));
#line 407 "analysis.file.m"
    MR_Word analysis__file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 6)));
#line 407 "analysis.file.m"
    MR_Word analysis__file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 7)));
#line 407 "analysis.file.m"
    MR_Word analysis__file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 8)));
#line 407 "analysis.file.m"
    MR_Word analysis__file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 9)));
#line 407 "analysis.file.m"
    MR_Word analysis__file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 10)));
#line 9559 "analysis.file.c"
    void MR_CALL (* analysis__file__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 9561 "analysis.file.c"
    MR_Box analysis__file__conv3_MaybeAnalysisFileName_56;
#line 9563 "analysis.file.c"
    MR_Box analysis__file__conv2_STATE_VARIABLE_IO_23_59;

#line 408 "analysis.file.m"
    {
#line 408 "analysis.file.m"
      analysis__file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 408 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 0) = ((MR_Box) (&analysis__file_scalar_common_7[1]));
#line 408 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 1) = ((MR_Box) (analysis__file__read_module_analysis_requests_6_p_0_1));
#line 408 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 408 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 3) = ((MR_Box) (analysis__file__TypeClassInfo_for_compiler_42));
#line 408 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_16_16, 4) = analysis__file__V_14_14;
#line 408 "analysis.file.m"
    }
#line 409 "analysis.file.m"
    {
#line 409 "analysis.file.m"
      analysis__file__V_17_17 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[2]);
    }
#line 9587 "analysis.file.c"
    analysis__file__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_42, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9589 "analysis.file.c"
    {
#line 9591 "analysis.file.c"
      analysis__file__func_1(((MR_Box) analysis__file__TypeClassInfo_for_compiler_42), analysis__file__V_14_14, ((MR_Box) (analysis__file__Globals_8)), ((MR_Box) (analysis__file__ModuleName_9)), ((MR_Box) ((MR_String) ".request")), &analysis__file__conv3_MaybeAnalysisFileName_56, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv2_STATE_VARIABLE_IO_23_59);
    }
#line 9594 "analysis.file.c"
    analysis__file__MaybeAnalysisFileName_56 = ((MR_Word) analysis__file__conv3_MaybeAnalysisFileName_56);
#line 544 "analysis.file.m"
    if (((MR_tag((MR_Word) analysis__file__MaybeAnalysisFileName_56)) == (MR_mktag((MR_Integer) 1))))
#line 545 "analysis.file.m"
      {
#line 545 "analysis.file.m"
        MR_String analysis__file__Message_58 = ((MR_String) (MR_hl_field(MR_mktag(1), analysis__file__MaybeAnalysisFileName_56, (MR_Integer) 0)));
#line 545 "analysis.file.m"
        MR_Word analysis__file__V_60_60;

#line 546 "analysis.file.m"
        {
#line 546 "analysis.file.m"
          analysis__file__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 546 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_60_60, 0) = ((MR_Box) (&analysis__file_scalar_common_7[2]));
#line 546 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_60_60, 1) = ((MR_Box) (analysis__file__read_module_analysis_requests_6_p_0_2));
#line 546 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 546 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_60_60, 3) = ((MR_Box) (analysis__file__ModuleName_9));
#line 546 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_60_60, 4) = ((MR_Box) ((MR_String) ".request"));
#line 546 "analysis.file.m"
          MR_hl_field(MR_mktag(0), analysis__file__V_60_60, 5) = ((MR_Box) (analysis__file__Message_58));
#line 546 "analysis.file.m"
        }
#line 546 "analysis.file.m"
        {
#line 546 "analysis.file.m"
          analysis__debug_msg_3_p_0(analysis__file__V_60_60);
        }
#line 555 "analysis.file.m"
        *analysis__file__ModuleRequests_10 = analysis__file__V_17_17;
#line 545 "analysis.file.m"
      }
#line 544 "analysis.file.m"
    else
#line 541 "analysis.file.m"
      {
#line 541 "analysis.file.m"
        MR_String analysis__file__AnalysisFileName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__MaybeAnalysisFileName_56, (MR_Integer) 0)));
#line 542 "analysis.file.m"
        MR_Box analysis__file__conv4_ModuleRequests_10;

#line 542 "analysis.file.m"
        {
#line 542 "analysis.file.m"
          analysis__file__read_analysis_file_6_p_0((MR_Word) &analysis__file_scalar_common_2[3], analysis__file__AnalysisFileName_57, analysis__file__V_16_16, ((MR_Box) (analysis__file__V_17_17)), &analysis__file__conv4_ModuleRequests_10);
        }
#line 542 "analysis.file.m"
        *analysis__file__ModuleRequests_10 = ((MR_Word) analysis__file__conv4_ModuleRequests_10);
#line 541 "analysis.file.m"
      }
#line 406 "analysis.file.m"
  }
#line 66 "analysis.file.m"
}

#line 934 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_3(
#line 934 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 934 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1)
#line 934 "analysis.file.m"
{
#line 934 "analysis.file.m"
  {
#line 934 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 934 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 934 "analysis.file.m"
    {
#line 934 "analysis.file.m"
      return analysis__file__succeeded = analysis__file__dir_sep_1_p_0(((MR_Char) (MR_Word) analysis__file__wrapper_arg_1));
    }
#line 934 "analysis.file.m"
    return analysis__file__succeeded;
#line 934 "analysis.file.m"
  }
#line 934 "analysis.file.m"
}

#line 669 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_2(
#line 669 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 669 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 669 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 669 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 669 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_4,
#line 669 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_5)
#line 669 "analysis.file.m"
{
#line 669 "analysis.file.m"
  {
#line 669 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 669 "analysis.file.m"
    {
#line 669 "analysis.file.m"
      analysis__file__write_result_entry_5_p_0(((MR_String) analysis__file__wrapper_arg_1), ((MR_Word) analysis__file__wrapper_arg_2), ((MR_Word) analysis__file__wrapper_arg_3));
#line 669 "analysis.file.m"
      return;
    }
#line 669 "analysis.file.m"
  }
#line 669 "analysis.file.m"
}

#line 662 "analysis.file.m"
static void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0_1(
#line 662 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 662 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 662 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_2)
#line 662 "analysis.file.m"
{
#line 662 "analysis.file.m"
  {
#line 662 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 662 "analysis.file.m"
    {
#line 662 "analysis.file.m"
      analysis__file__IntroducedFrom__pred__write_module_analysis_results__662__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))));
#line 662 "analysis.file.m"
      return;
    }
#line 662 "analysis.file.m"
  }
#line 662 "analysis.file.m"
}

#line 57 "analysis.file.m"
void MR_CALL 
analysis__file__write_module_analysis_results_6_p_0(
#line 57 "analysis.file.m"
  MR_Word analysis__file__Info_7,
#line 57 "analysis.file.m"
  MR_Word analysis__file__Globals_8,
#line 57 "analysis.file.m"
  MR_Word analysis__file__ModuleName_9,
#line 57 "analysis.file.m"
  MR_Word analysis__file__ModuleResults_10)
#line 57 "analysis.file.m"
{
#line 661 "analysis.file.m"
  {
#line 661 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 661 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_compiler_48;
#line 661 "analysis.file.m"
    MR_String analysis__file__FileName_13;
#line 661 "analysis.file.m"
    MR_Word analysis__file__Result_14;
#line 661 "analysis.file.m"
    MR_String analysis__file__CacheDir_15;
#line 661 "analysis.file.m"
    MR_Word analysis__file__V_19_19;
#line 661 "analysis.file.m"
    MR_Box analysis__file__V_29_29;
#line 668 "analysis.file.m"
    MR_Word analysis__file__V_38_38;
#line 668 "analysis.file.m"
    MR_Word analysis__file__V_39_39;
#line 668 "analysis.file.m"
    MR_Word analysis__file__V_40_40;
#line 668 "analysis.file.m"
    MR_Word analysis__file__V_41_41;
#line 668 "analysis.file.m"
    MR_Word analysis__file__V_42_42;
#line 668 "analysis.file.m"
    MR_Word analysis__file__V_43_43;
#line 668 "analysis.file.m"
    MR_Word analysis__file__V_44_44;
#line 668 "analysis.file.m"
    MR_Word analysis__file__V_45_45;
#line 668 "analysis.file.m"
    MR_Word analysis__file__V_46_46;

#line 662 "analysis.file.m"
    {
#line 662 "analysis.file.m"
      analysis__file__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 662 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_19_19, 0) = ((MR_Box) (&analysis__file_scalar_common_6[0]));
#line 662 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_19_19, 1) = ((MR_Box) (analysis__file__write_module_analysis_results_6_p_0_1));
#line 662 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 662 "analysis.file.m"
      MR_hl_field(MR_mktag(0), analysis__file__V_19_19, 3) = ((MR_Box) (analysis__file__ModuleName_9));
#line 662 "analysis.file.m"
    }
#line 662 "analysis.file.m"
    {
#line 662 "analysis.file.m"
      analysis__debug_msg_3_p_0(analysis__file__V_19_19);
    }
#line 668 "analysis.file.m"
    analysis__file__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 0)));
#line 668 "analysis.file.m"
    analysis__file__V_29_29 = (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 1));
#line 668 "analysis.file.m"
    analysis__file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 2)));
#line 668 "analysis.file.m"
    analysis__file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 3)));
#line 668 "analysis.file.m"
    analysis__file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 4)));
#line 668 "analysis.file.m"
    analysis__file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 5)));
#line 668 "analysis.file.m"
    analysis__file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 6)));
#line 668 "analysis.file.m"
    analysis__file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 7)));
#line 668 "analysis.file.m"
    analysis__file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 8)));
#line 668 "analysis.file.m"
    analysis__file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 9)));
#line 668 "analysis.file.m"
    analysis__file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 10)));
#line 668 "analysis.file.m"
    {
#line 668 "analysis.file.m"
      analysis__file__write_analysis_file_10_p_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, analysis__file__TypeClassInfo_for_compiler_48, analysis__file__V_29_29, analysis__file__Globals_8, analysis__file__ModuleName_9, (MR_String) ".analysis", (MR_Integer) 1, (MR_Word) &analysis__file_scalar_common_2[7], analysis__file__ModuleResults_10, &analysis__file__FileName_13);
    }
#line 671 "analysis.file.m"
    {
#line 671 "analysis.file.m"
      parse_tree__module_cmds__update_interface_return_changed_5_p_0(analysis__file__Globals_8, analysis__file__FileName_13, &analysis__file__Result_14);
    }
#line 675 "analysis.file.m"
    {
#line 675 "analysis.file.m"
      libs__globals__lookup_string_option_3_p_0(analysis__file__Globals_8, (MR_Integer) 668, &analysis__file__CacheDir_15);
    }
#line 677 "analysis.file.m"
    analysis__file__succeeded = (strcmp(analysis__file__CacheDir_15, (MR_String) "") == 0);
#line 677 "analysis.file.m"
    analysis__file__succeeded = !(analysis__file__succeeded);
#line 677 "analysis.file.m"
    if (analysis__file__succeeded)
#line 678 "analysis.file.m"
      analysis__file__succeeded = (analysis__file__Result_14 == (MR_Integer) 0);
#line 682 "analysis.file.m"
    if (analysis__file__succeeded)
#line 680 "analysis.file.m"
      {
#line 680 "analysis.file.m"
        MR_String analysis__file__CacheFileName_16;
#line 680 "analysis.file.m"
        MR_Word analysis__file__Components_58;
#line 680 "analysis.file.m"
        MR_String analysis__file__EscFileName_59;

#line 934 "analysis.file.m"
        {
#line 934 "analysis.file.m"
          analysis__file__Components_58 = mercury__string__split_at_separator_2_f_0((MR_Word) &analysis__file_scalar_common_2[8], analysis__file__FileName_13);
        }
#line 935 "analysis.file.m"
        {
#line 935 "analysis.file.m"
          analysis__file__EscFileName_59 = mercury__string__join_list_2_f_0((MR_String) ":", analysis__file__Components_58);
        }
#line 936 "analysis.file.m"
        {
#line 936 "analysis.file.m"
          analysis__file__CacheFileName_16 = mercury__dir__f_slash_2_f_0(analysis__file__CacheDir_15, analysis__file__EscFileName_59);
        }
#line 681 "analysis.file.m"
        {
#line 681 "analysis.file.m"
          analysis__file__write_analysis_cache_file_4_p_0(analysis__file__CacheFileName_16, analysis__file__ModuleResults_10);
#line 681 "analysis.file.m"
          return;
        }
#line 680 "analysis.file.m"
      }
#line 682 "analysis.file.m"
    else
#line 682 "analysis.file.m"
      {
#line 682 "analysis.file.m"
      }
#line 661 "analysis.file.m"
  }
#line 57 "analysis.file.m"
}

#line 1001 "analysis.file.m"
static void MR_CALL 
analysis__file__read_module_analysis_results_6_p_0_2(
#line 1001 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 1001 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1,
#line 1001 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_2,
#line 1001 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_3,
#line 1001 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_4,
#line 1001 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_5,
#line 1001 "analysis.file.m"
  MR_Box * analysis__file__wrapper_arg_6)
#line 1001 "analysis.file.m"
{
#line 1001 "analysis.file.m"
  {
#line 1001 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;
#line 1001 "analysis.file.m"
    MR_Word analysis__file__conv4_Univ_12;
#line 1001 "analysis.file.m"
    MR_Integer analysis__file__conv3_STATE_VARIABLE_State_22;

#line 1001 "analysis.file.m"
    {
#line 1001 "analysis.file.m"
      analysis__file__unpickle_analysis_result_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__file__closure, (MR_Integer) 4)), ((MR_Word) analysis__file__wrapper_arg_1), ((MR_Box) analysis__file__wrapper_arg_2), ((MR_Word) analysis__file__wrapper_arg_3), &analysis__file__conv4_Univ_12, ((MR_Integer) analysis__file__wrapper_arg_5), &analysis__file__conv3_STATE_VARIABLE_State_22);
    }
#line 1001 "analysis.file.m"
    *analysis__file__wrapper_arg_4 = ((MR_Box) (analysis__file__conv4_Univ_12));
#line 1001 "analysis.file.m"
    *analysis__file__wrapper_arg_6 = ((MR_Box) (analysis__file__conv3_STATE_VARIABLE_State_22));
#line 1001 "analysis.file.m"
  }
#line 1001 "analysis.file.m"
}

#line 934 "analysis.file.m"
static MR_bool MR_CALL 
analysis__file__read_module_analysis_results_6_p_0_1(
#line 934 "analysis.file.m"
  MR_Box analysis__file__closure_arg,
#line 934 "analysis.file.m"
  MR_Box analysis__file__wrapper_arg_1)
#line 934 "analysis.file.m"
{
#line 934 "analysis.file.m"
  {
#line 934 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 934 "analysis.file.m"
    MR_Box analysis__file__closure = analysis__file__closure_arg;

#line 934 "analysis.file.m"
    {
#line 934 "analysis.file.m"
      return analysis__file__succeeded = analysis__file__dir_sep_1_p_0(((MR_Char) (MR_Word) analysis__file__wrapper_arg_1));
    }
#line 934 "analysis.file.m"
    return analysis__file__succeeded;
#line 934 "analysis.file.m"
  }
#line 934 "analysis.file.m"
}

#line 47 "analysis.file.m"
void MR_CALL 
analysis__file__read_module_analysis_results_6_p_0(
#line 47 "analysis.file.m"
  MR_Word analysis__file__Info_7,
#line 47 "analysis.file.m"
  MR_Word analysis__file__Globals_8,
#line 47 "analysis.file.m"
  MR_Word analysis__file__ModuleName_9,
#line 47 "analysis.file.m"
  MR_Word * analysis__file__ModuleResults_10)
#line 47 "analysis.file.m"
{
#line 261 "analysis.file.m"
  {
#line 261 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 261 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_compiler_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 0)));
#line 261 "analysis.file.m"
    MR_Box analysis__file__Compiler_12 = (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 1));
#line 261 "analysis.file.m"
    MR_Word analysis__file__MaybeAnalysisFileName_13;
#line 265 "analysis.file.m"
    MR_Word analysis__file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 2)));
#line 265 "analysis.file.m"
    MR_Word analysis__file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 3)));
#line 265 "analysis.file.m"
    MR_Word analysis__file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 4)));
#line 265 "analysis.file.m"
    MR_Word analysis__file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 5)));
#line 265 "analysis.file.m"
    MR_Word analysis__file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 6)));
#line 265 "analysis.file.m"
    MR_Word analysis__file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 7)));
#line 265 "analysis.file.m"
    MR_Word analysis__file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 8)));
#line 265 "analysis.file.m"
    MR_Word analysis__file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 9)));
#line 265 "analysis.file.m"
    MR_Word analysis__file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 10)));
#line 10014 "analysis.file.c"
    void MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_55, (MR_Integer) 0)), (MR_Integer) 7)));
#line 10016 "analysis.file.c"
    MR_Box analysis__file__conv2_MaybeAnalysisFileName_13;
#line 10018 "analysis.file.c"
    MR_Box analysis__file__conv1_STATE_VARIABLE_IO_28_28;

#line 10021 "analysis.file.c"
    {
#line 10023 "analysis.file.c"
      analysis__file__func_0(((MR_Box) analysis__file__TypeClassInfo_for_compiler_55), analysis__file__Compiler_12, ((MR_Box) (analysis__file__Globals_8)), ((MR_Box) (analysis__file__ModuleName_9)), ((MR_Box) ((MR_String) ".analysis")), &analysis__file__conv2_MaybeAnalysisFileName_13, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv1_STATE_VARIABLE_IO_28_28);
    }
#line 10026 "analysis.file.c"
    analysis__file__MaybeAnalysisFileName_13 = ((MR_Word) analysis__file__conv2_MaybeAnalysisFileName_13);
#line 311 "analysis.file.m"
    if (((MR_tag((MR_Word) analysis__file__MaybeAnalysisFileName_13)) == (MR_mktag((MR_Integer) 1))))
#line 312 "analysis.file.m"
      {
#line 313 "analysis.file.m"
        {
#line 313 "analysis.file.m"
          *analysis__file__ModuleResults_10 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis__file_scalar_common_2[0]);
        }
#line 312 "analysis.file.m"
      }
#line 311 "analysis.file.m"
    else
#line 269 "analysis.file.m"
      {
#line 269 "analysis.file.m"
        MR_String analysis__file__AnalysisFileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__MaybeAnalysisFileName_13, (MR_Integer) 0)));
#line 269 "analysis.file.m"
        MR_String analysis__file__CacheDir_15;

#line 273 "analysis.file.m"
        {
#line 273 "analysis.file.m"
          libs__globals__lookup_string_option_3_p_0(analysis__file__Globals_8, (MR_Integer) 668, &analysis__file__CacheDir_15);
        }
#line 275 "analysis.file.m"
        analysis__file__succeeded = (strcmp(analysis__file__CacheDir_15, (MR_String) "") == 0);
#line 278 "analysis.file.m"
        if (analysis__file__succeeded)
#line 276 "analysis.file.m"
          {
#line 276 "analysis.file.m"
            analysis__file__read_module_analysis_results_2_5_p_0(analysis__file__TypeClassInfo_for_compiler_55, analysis__file__Compiler_12, analysis__file__AnalysisFileName_14, analysis__file__ModuleResults_10);
#line 276 "analysis.file.m"
            return;
          }
#line 278 "analysis.file.m"
        else
#line 279 "analysis.file.m"
          {
#line 279 "analysis.file.m"
            MR_String analysis__file__CacheFileName_16;
#line 279 "analysis.file.m"
            MR_Word analysis__file__AnalysisTimeResult_17;
#line 279 "analysis.file.m"
            MR_Word analysis__file__CacheTimeResult_18;
#line 279 "analysis.file.m"
            MR_Word analysis__file__Components_64;
#line 279 "analysis.file.m"
            MR_String analysis__file__EscFileName_65;
#line 284 "analysis.file.m"
            MR_Word analysis__file__AnalysisTime_19;
#line 284 "analysis.file.m"
            MR_Word analysis__file__CacheTime_20;
#line 284 "analysis.file.m"
            MR_Word analysis__file__V_60_60;

#line 934 "analysis.file.m"
            {
#line 934 "analysis.file.m"
              analysis__file__Components_64 = mercury__string__split_at_separator_2_f_0((MR_Word) &analysis__file_scalar_common_2[6], analysis__file__AnalysisFileName_14);
            }
#line 935 "analysis.file.m"
            {
#line 935 "analysis.file.m"
              analysis__file__EscFileName_65 = mercury__string__join_list_2_f_0((MR_String) ":", analysis__file__Components_64);
            }
#line 936 "analysis.file.m"
            {
#line 936 "analysis.file.m"
              analysis__file__CacheFileName_16 = mercury__dir__f_slash_2_f_0(analysis__file__CacheDir_15, analysis__file__EscFileName_65);
            }
#line 280 "analysis.file.m"
            {
#line 280 "analysis.file.m"
              mercury__io__file_modification_time_4_p_0(analysis__file__AnalysisFileName_14, &analysis__file__AnalysisTimeResult_17);
            }
#line 282 "analysis.file.m"
            {
#line 282 "analysis.file.m"
              mercury__io__file_modification_time_4_p_0(analysis__file__CacheFileName_16, &analysis__file__CacheTimeResult_18);
            }
#line 284 "analysis.file.m"
            analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__AnalysisTimeResult_17)) == (MR_mktag((MR_Integer) 0)));
#line 284 "analysis.file.m"
            if (analysis__file__succeeded)
#line 284 "analysis.file.m"
              {
#line 284 "analysis.file.m"
                analysis__file__AnalysisTime_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__AnalysisTimeResult_17, (MR_Integer) 0)));
#line 285 "analysis.file.m"
                analysis__file__succeeded = ((MR_tag((MR_Word) analysis__file__CacheTimeResult_18)) == (MR_mktag((MR_Integer) 0)));
#line 285 "analysis.file.m"
                if (analysis__file__succeeded)
#line 285 "analysis.file.m"
                  {
#line 285 "analysis.file.m"
                    analysis__file__CacheTime_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__CacheTimeResult_18, (MR_Integer) 0)));
#line 286 "analysis.file.m"
                    {
#line 286 "analysis.file.m"
                      mercury__time____Compare____time_t_0_0(&analysis__file__V_60_60, analysis__file__CacheTime_20, analysis__file__AnalysisTime_19);
                    }
#line 286 "analysis.file.m"
                    analysis__file__succeeded = (analysis__file__V_60_60 == (MR_Integer) 1);
#line 286 "analysis.file.m"
                    analysis__file__succeeded = !(analysis__file__succeeded);
#line 285 "analysis.file.m"
                  }
#line 284 "analysis.file.m"
              }
#line 305 "analysis.file.m"
            if (analysis__file__succeeded)
#line 288 "analysis.file.m"
              {
#line 288 "analysis.file.m"
                MR_Word analysis__file__Unpicklers_21;
#line 288 "analysis.file.m"
                MR_Word analysis__file__UnpickleResult_22;
#line 288 "analysis.file.m"
                MR_Word analysis__file__Type_72;
#line 288 "analysis.file.m"
                MR_Word analysis__file__STATE_VARIABLE_Unpicklers_7_73;
#line 288 "analysis.file.m"
                MR_Word analysis__file__V_77_77;
#line 288 "analysis.file.m"
                MR_Word analysis__file__V_78_78;
#line 1000 "analysis.file.m"
                MR_Word analysis__file__V_88_88;

#line 998 "analysis.file.m"
                {
#line 998 "analysis.file.m"
                  analysis__file__STATE_VARIABLE_Unpicklers_7_73 = libs__pickle__init_unpicklers_0_f_0();
                }
#line 1000 "analysis.file.m"
                {
#line 1000 "analysis.file.m"
                  analysis__file__V_77_77 = mercury__type_desc__type_of_1_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0);
                }
#line 1000 "analysis.file.m"
                {
#line 1000 "analysis.file.m"
                  analysis__file__Type_72 = mercury__type_desc__type_ctor_1_f_0(analysis__file__V_77_77);
                }
#line 1001 "analysis.file.m"
                {
#line 1001 "analysis.file.m"
                  analysis__file__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_78_78, 0) = ((MR_Box) (&analysis__file_scalar_common_5[0]));
#line 1001 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_78_78, 1) = ((MR_Box) (analysis__file__read_module_analysis_results_6_p_0_2));
#line 1001 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1001 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_78_78, 3) = ((MR_Box) (analysis__file__TypeClassInfo_for_compiler_55));
#line 1001 "analysis.file.m"
                  MR_hl_field(MR_mktag(0), analysis__file__V_78_78, 4) = analysis__file__Compiler_12;
#line 1001 "analysis.file.m"
                }
#line 1001 "analysis.file.m"
                {
#line 1001 "analysis.file.m"
                  libs__pickle__register_unpickler_4_p_0(analysis__file__Type_72, analysis__file__V_78_78, analysis__file__STATE_VARIABLE_Unpicklers_7_73, &analysis__file__Unpicklers_21);
                }
#line 289 "analysis.file.m"
                {
#line 289 "analysis.file.m"
                  libs__pickle__unpickle_from_file_5_p_0((MR_Word) &analysis__file_scalar_common_2[1], analysis__file__Unpicklers_21, analysis__file__CacheFileName_16, &analysis__file__UnpickleResult_22);
                }
#line 293 "analysis.file.m"
                if (((MR_tag((MR_Word) analysis__file__UnpickleResult_22)) == (MR_mktag((MR_Integer) 1))))
#line 294 "analysis.file.m"
                  {
#line 294 "analysis.file.m"
                    MR_Word analysis__file__Error_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__UnpickleResult_22, (MR_Integer) 0)));
#line 294 "analysis.file.m"
                    MR_String analysis__file__V_39_39;

#line 295 "analysis.file.m"
                    {
#line 295 "analysis.file.m"
                      mercury__io__write_string_3_p_0((MR_String) "Error reading ");
                    }
#line 296 "analysis.file.m"
                    {
#line 296 "analysis.file.m"
                      mercury__io__write_string_3_p_0(analysis__file__CacheFileName_16);
                    }
#line 297 "analysis.file.m"
                    {
#line 297 "analysis.file.m"
                      mercury__io__write_string_3_p_0((MR_String) ": ");
                    }
#line 298 "analysis.file.m"
                    {
#line 298 "analysis.file.m"
                      analysis__file__V_39_39 = mercury__io__error_message_1_f_0(analysis__file__Error_23);
                    }
#line 298 "analysis.file.m"
                    {
#line 298 "analysis.file.m"
                      mercury__io__write_string_3_p_0(analysis__file__V_39_39);
                    }
#line 299 "analysis.file.m"
                    {
#line 299 "analysis.file.m"
                      mercury__io__nl_2_p_0();
                    }
#line 300 "analysis.file.m"
                    {
#line 300 "analysis.file.m"
                      analysis__file__read_module_analysis_results_2_5_p_0(analysis__file__TypeClassInfo_for_compiler_55, analysis__file__Compiler_12, analysis__file__AnalysisFileName_14, analysis__file__ModuleResults_10);
                    }
#line 302 "analysis.file.m"
                    {
#line 302 "analysis.file.m"
                      analysis__file__write_analysis_cache_file_4_p_0(analysis__file__CacheFileName_16, *analysis__file__ModuleResults_10);
#line 302 "analysis.file.m"
                      return;
                    }
#line 294 "analysis.file.m"
                  }
#line 293 "analysis.file.m"
                else
#line 292 "analysis.file.m"
                  *analysis__file__ModuleResults_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__UnpickleResult_22, (MR_Integer) 0)));
#line 288 "analysis.file.m"
              }
#line 305 "analysis.file.m"
            else
#line 307 "analysis.file.m"
              {
#line 306 "analysis.file.m"
                {
#line 306 "analysis.file.m"
                  analysis__file__read_module_analysis_results_2_5_p_0(analysis__file__TypeClassInfo_for_compiler_55, analysis__file__Compiler_12, analysis__file__AnalysisFileName_14, analysis__file__ModuleResults_10);
                }
#line 308 "analysis.file.m"
                {
#line 308 "analysis.file.m"
                  analysis__file__write_analysis_cache_file_4_p_0(analysis__file__CacheFileName_16, *analysis__file__ModuleResults_10);
#line 308 "analysis.file.m"
                  return;
                }
#line 307 "analysis.file.m"
              }
#line 279 "analysis.file.m"
          }
#line 269 "analysis.file.m"
      }
#line 261 "analysis.file.m"
  }
#line 47 "analysis.file.m"
}

#line 37 "analysis.file.m"
void MR_CALL 
analysis__file__write_module_overall_status_6_p_0(
#line 37 "analysis.file.m"
  MR_Word analysis__file__Info_7,
#line 37 "analysis.file.m"
  MR_Word analysis__file__Globals_8,
#line 37 "analysis.file.m"
  MR_Word analysis__file__ModuleName_9,
#line 37 "analysis.file.m"
  MR_Word analysis__file__Status_10)
#line 37 "analysis.file.m"
{
#line 637 "analysis.file.m"
  {
#line 637 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 637 "analysis.file.m"
    MR_Word analysis__file__TypeClassInfo_for_compiler_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 0)));
#line 637 "analysis.file.m"
    MR_String analysis__file__FileName_12;
#line 637 "analysis.file.m"
    MR_Word analysis__file__OpenResult_13;
#line 637 "analysis.file.m"
    MR_Box analysis__file__V_18_18 = (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 1));
#line 638 "analysis.file.m"
    MR_Word analysis__file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 2)));
#line 638 "analysis.file.m"
    MR_Word analysis__file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 3)));
#line 638 "analysis.file.m"
    MR_Word analysis__file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 4)));
#line 638 "analysis.file.m"
    MR_Word analysis__file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 5)));
#line 638 "analysis.file.m"
    MR_Word analysis__file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 6)));
#line 638 "analysis.file.m"
    MR_Word analysis__file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 7)));
#line 638 "analysis.file.m"
    MR_Word analysis__file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 8)));
#line 638 "analysis.file.m"
    MR_Word analysis__file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 9)));
#line 638 "analysis.file.m"
    MR_Word analysis__file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__Info_7, (MR_Integer) 10)));
#line 10328 "analysis.file.c"
    void MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_41, (MR_Integer) 0)), (MR_Integer) 8)));
#line 10330 "analysis.file.c"
    MR_Box analysis__file__conv2_FileName_12;
#line 10332 "analysis.file.c"
    MR_Box analysis__file__conv1_STATE_VARIABLE_IO_20_20;

#line 10335 "analysis.file.c"
    {
#line 10337 "analysis.file.c"
      analysis__file__func_0(((MR_Box) analysis__file__TypeClassInfo_for_compiler_41), analysis__file__V_18_18, ((MR_Box) (analysis__file__Globals_8)), ((MR_Box) (analysis__file__ModuleName_9)), ((MR_Box) ((MR_String) ".analysis_status")), &analysis__file__conv2_FileName_12, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv1_STATE_VARIABLE_IO_20_20);
    }
#line 10340 "analysis.file.c"
    analysis__file__FileName_12 = ((MR_String) analysis__file__conv2_FileName_12);
#line 640 "analysis.file.m"
    {
#line 640 "analysis.file.m"
      mercury__io__open_output_4_p_0(analysis__file__FileName_12, &analysis__file__OpenResult_13);
    }
#line 654 "analysis.file.m"
    if (((MR_tag((MR_Word) analysis__file__OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 655 "analysis.file.m"
      {
#line 655 "analysis.file.m"
        MR_Word analysis__file__IOError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__OpenResult_13, (MR_Integer) 0)));
#line 655 "analysis.file.m"
        MR_String analysis__file__V_24_24;

#line 656 "analysis.file.m"
        {
#line 656 "analysis.file.m"
          analysis__file__V_24_24 = mercury__io__error_message_1_f_0(analysis__file__IOError_15);
        }
#line 656 "analysis.file.m"
        {
#line 656 "analysis.file.m"
          mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.write_module_overall_status\'/6", analysis__file__V_24_24);
#line 656 "analysis.file.m"
          return;
        }
#line 655 "analysis.file.m"
      }
#line 654 "analysis.file.m"
    else
#line 642 "analysis.file.m"
      {
#line 642 "analysis.file.m"
        MR_Word analysis__file__Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__OpenResult_13, (MR_Integer) 0)));

#line 646 "analysis.file.m"
        if ((analysis__file__Status_10 == (MR_Integer) 0))
#line 650 "analysis.file.m"
          {
#line 651 "analysis.file.m"
            {
#line 651 "analysis.file.m"
              mercury__io__write_string_4_p_0(analysis__file__Stream_14, (MR_String) "invalid.\n");
            }
#line 650 "analysis.file.m"
          }
#line 646 "analysis.file.m"
        else
#line 646 "analysis.file.m"
        if ((analysis__file__Status_10 == (MR_Integer) 2))
#line 644 "analysis.file.m"
          {
#line 645 "analysis.file.m"
            {
#line 645 "analysis.file.m"
              mercury__io__write_string_4_p_0(analysis__file__Stream_14, (MR_String) "optimal.\n");
            }
#line 644 "analysis.file.m"
          }
#line 646 "analysis.file.m"
        else
#line 647 "analysis.file.m"
          {
#line 648 "analysis.file.m"
            {
#line 648 "analysis.file.m"
              mercury__io__write_string_4_p_0(analysis__file__Stream_14, (MR_String) "suboptimal.\n");
            }
#line 647 "analysis.file.m"
          }
#line 653 "analysis.file.m"
        {
#line 653 "analysis.file.m"
          mercury__io__close_output_3_p_0(analysis__file__Stream_14);
#line 653 "analysis.file.m"
          return;
        }
#line 642 "analysis.file.m"
      }
#line 637 "analysis.file.m"
  }
#line 37 "analysis.file.m"
}

#line 29 "analysis.file.m"
void MR_CALL 
analysis__file__read_module_overall_status_6_p_0(
#line 29 "analysis.file.m"
  MR_Word analysis__file__TypeClassInfo_for_compiler_26,
#line 29 "analysis.file.m"
  MR_Box analysis__file__Compiler_7,
#line 29 "analysis.file.m"
  MR_Word analysis__file__Globals_8,
#line 29 "analysis.file.m"
  MR_Word analysis__file__ModuleName_9,
#line 29 "analysis.file.m"
  MR_Word * analysis__file__ModuleStatus_10)
#line 29 "analysis.file.m"
{
#line 196 "analysis.file.m"
  {
#line 196 "analysis.file.m"
    MR_bool analysis__file__succeeded;
#line 196 "analysis.file.m"
    MR_Word analysis__file__MaybeFileName_12;
#line 196 "analysis.file.m"
    MR_Word analysis__file__ModuleStatus0_14;
#line 10449 "analysis.file.c"
    void MR_CALL (* analysis__file__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_26, (MR_Integer) 0)), (MR_Integer) 7)));
#line 10451 "analysis.file.c"
    MR_Box analysis__file__conv2_MaybeFileName_12;
#line 10453 "analysis.file.c"
    MR_Box analysis__file__conv1_STATE_VARIABLE_IO_22_22;

#line 10456 "analysis.file.c"
    {
#line 10458 "analysis.file.c"
      analysis__file__func_0(((MR_Box) analysis__file__TypeClassInfo_for_compiler_26), analysis__file__Compiler_7, ((MR_Box) (analysis__file__Globals_8)), ((MR_Box) (analysis__file__ModuleName_9)), ((MR_Box) ((MR_String) ".analysis_status")), &analysis__file__conv2_MaybeFileName_12, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv1_STATE_VARIABLE_IO_22_22);
    }
#line 10461 "analysis.file.c"
    analysis__file__MaybeFileName_12 = ((MR_Word) analysis__file__conv2_MaybeFileName_12);
#line 202 "analysis.file.m"
    if (((MR_tag((MR_Word) analysis__file__MaybeFileName_12)) == (MR_mktag((MR_Integer) 1))))
#line 206 "analysis.file.m"
      analysis__file__ModuleStatus0_14 = (MR_Integer) 2;
#line 202 "analysis.file.m"
    else
#line 200 "analysis.file.m"
      {
#line 200 "analysis.file.m"
        MR_String analysis__file__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__file__MaybeFileName_12, (MR_Integer) 0)));
#line 200 "analysis.file.m"
        MR_Word analysis__file__OpenResult_32;

#line 231 "analysis.file.m"
        {
#line 231 "analysis.file.m"
          mercury__io__open_input_4_p_0(analysis__file__FileName_13, &analysis__file__OpenResult_32);
        }
#line 254 "analysis.file.m"
        if (((MR_tag((MR_Word) analysis__file__OpenResult_32)) == (MR_mktag((MR_Integer) 1))))
#line 255 "analysis.file.m"
          {
#line 255 "analysis.file.m"
            MR_String analysis__file__V_40_40;
#line 255 "analysis.file.m"
            MR_Word analysis__file__IOError_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__file__OpenResult_32, (MR_Integer) 0)));

#line 256 "analysis.file.m"
            {
#line 256 "analysis.file.m"
              analysis__file__V_40_40 = mercury__io__error_message_1_f_0(analysis__file__IOError_55);
            }
#line 256 "analysis.file.m"
            {
#line 256 "analysis.file.m"
              mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.read_module_overall_status_2\'/4", analysis__file__V_40_40);
#line 256 "analysis.file.m"
              return;
            }
#line 255 "analysis.file.m"
          }
#line 254 "analysis.file.m"
        else
#line 233 "analysis.file.m"
          {
#line 233 "analysis.file.m"
            MR_Word analysis__file__Stream_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__file__OpenResult_32, (MR_Integer) 0)));
#line 233 "analysis.file.m"
            MR_Word analysis__file__ReadResult_34;

#line 234 "analysis.file.m"
            {
#line 234 "analysis.file.m"
              mercury__io__read_line_as_string_4_p_0(analysis__file__Stream_33, &analysis__file__ReadResult_34);
            }
#line 235 "analysis.file.m"
            {
#line 235 "analysis.file.m"
              mercury__io__close_input_3_p_0(analysis__file__Stream_33);
            }
#line 247 "analysis.file.m"
            if ((analysis__file__ReadResult_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "analysis.file.m"
              {
#line 249 "analysis.file.m"
                {
#line 249 "analysis.file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.read_module_overall_status_2\'/4", (MR_String) "unexpected eof");
#line 249 "analysis.file.m"
                  return;
                }
#line 248 "analysis.file.m"
              }
#line 247 "analysis.file.m"
            else
#line 247 "analysis.file.m"
            if (((MR_tag((MR_Word) analysis__file__ReadResult_34)) == (MR_mktag((MR_Integer) 2))))
#line 251 "analysis.file.m"
              {
#line 251 "analysis.file.m"
                MR_Word analysis__file__IOError_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), analysis__file__ReadResult_34, (MR_Integer) 0)));
#line 251 "analysis.file.m"
                MR_String analysis__file__V_45_45;

#line 252 "analysis.file.m"
                {
#line 252 "analysis.file.m"
                  analysis__file__V_45_45 = mercury__io__error_message_1_f_0(analysis__file__IOError_36);
                }
#line 252 "analysis.file.m"
                {
#line 252 "analysis.file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.read_module_overall_status_2\'/4", analysis__file__V_45_45);
#line 252 "analysis.file.m"
                  return;
                }
#line 251 "analysis.file.m"
              }
#line 247 "analysis.file.m"
            else
#line 237 "analysis.file.m"
              {
#line 237 "analysis.file.m"
                MR_String analysis__file__String_35 = ((MR_String) (MR_hl_field(MR_mktag(1), analysis__file__ReadResult_34, (MR_Integer) 0)));

#line 238 "analysis.file.m"
                {
#line 238 "analysis.file.m"
                  analysis__file__succeeded = mercury__string__prefix_2_p_0(analysis__file__String_35, (MR_String) "optimal.");
                }
#line 240 "analysis.file.m"
                if (analysis__file__succeeded)
#line 239 "analysis.file.m"
                  analysis__file__ModuleStatus0_14 = (MR_Integer) 2;
#line 240 "analysis.file.m"
                else
#line 242 "analysis.file.m"
                  {
#line 240 "analysis.file.m"
                    {
#line 240 "analysis.file.m"
                      analysis__file__succeeded = mercury__string__prefix_2_p_0(analysis__file__String_35, (MR_String) "suboptimal.");
                    }
#line 242 "analysis.file.m"
                    if (analysis__file__succeeded)
#line 241 "analysis.file.m"
                      analysis__file__ModuleStatus0_14 = (MR_Integer) 1;
#line 242 "analysis.file.m"
                    else
#line 244 "analysis.file.m"
                      {
#line 242 "analysis.file.m"
                        {
#line 242 "analysis.file.m"
                          analysis__file__succeeded = mercury__string__prefix_2_p_0(analysis__file__String_35, (MR_String) "invalid.");
                        }
#line 244 "analysis.file.m"
                        if (analysis__file__succeeded)
#line 243 "analysis.file.m"
                          analysis__file__ModuleStatus0_14 = (MR_Integer) 0;
#line 244 "analysis.file.m"
                        else
#line 245 "analysis.file.m"
                          {
#line 245 "analysis.file.m"
                            {
#line 245 "analysis.file.m"
                              mercury__require__unexpected_3_p_0((MR_String) "analysis.file", (MR_String) "predicate \140analysis.file.read_module_overall_status_2\'/4", (MR_String) "unexpected line");
#line 245 "analysis.file.m"
                              return;
                            }
#line 245 "analysis.file.m"
                          }
#line 244 "analysis.file.m"
                      }
#line 242 "analysis.file.m"
                  }
#line 237 "analysis.file.m"
              }
#line 233 "analysis.file.m"
          }
#line 200 "analysis.file.m"
      }
#line 220 "analysis.file.m"
    if ((analysis__file__ModuleStatus0_14 == (MR_Integer) 2))
#line 209 "analysis.file.m"
      {
#line 209 "analysis.file.m"
        MR_Word analysis__file__MaybeRequestFileName_16;
#line 10632 "analysis.file.c"
        void MR_CALL (* analysis__file__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__file__TypeClassInfo_for_compiler_26, (MR_Integer) 0)), (MR_Integer) 7)));
#line 10634 "analysis.file.c"
        MR_Box analysis__file__conv5_MaybeRequestFileName_16;
#line 10636 "analysis.file.c"
        MR_Box analysis__file__conv4_STATE_VARIABLE_IO_20;

#line 10639 "analysis.file.c"
        {
#line 10641 "analysis.file.c"
          analysis__file__func_3(((MR_Box) analysis__file__TypeClassInfo_for_compiler_26), analysis__file__Compiler_7, ((MR_Box) (analysis__file__Globals_8)), ((MR_Box) (analysis__file__ModuleName_9)), ((MR_Box) ((MR_String) ".request")), &analysis__file__conv5_MaybeRequestFileName_16, ((MR_Box) ((MR_Integer) 0)), &analysis__file__conv4_STATE_VARIABLE_IO_20);
        }
#line 10644 "analysis.file.c"
        analysis__file__MaybeRequestFileName_16 = ((MR_Word) analysis__file__conv5_MaybeRequestFileName_16);
#line 216 "analysis.file.m"
        if (((MR_tag((MR_Word) analysis__file__MaybeRequestFileName_16)) == (MR_mktag((MR_Integer) 1))))
#line 218 "analysis.file.m"
          *analysis__file__ModuleStatus_10 = analysis__file__ModuleStatus0_14;
#line 216 "analysis.file.m"
        else
#line 215 "analysis.file.m"
          *analysis__file__ModuleStatus_10 = (MR_Integer) 1;
#line 209 "analysis.file.m"
      }
#line 220 "analysis.file.m"
    else
#line 224 "analysis.file.m"
      *analysis__file__ModuleStatus_10 = analysis__file__ModuleStatus0_14;
#line 196 "analysis.file.m"
  }
#line 29 "analysis.file.m"
}

void mercury__analysis__file__init(void)
{
}

void mercury__analysis__file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_dummy_answer_0);
	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_invalid_analysis_file_0);
	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_parse_entry_1);
	MR_register_type_ctor_info(&analysis__file__analysis__file__type_ctor_info_write_entry_1);
}

void mercury__analysis__file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module analysis.file. */
